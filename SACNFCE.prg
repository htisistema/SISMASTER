#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
//Static sENDER   := ''  ,;
Static SEM_ERRO := .F. ,;
sSECHORA := 0   ,;
sRETHORA := ''  ,;
sSECCOO  := 0   ,;
sNUMCUPOM:= ''  ,;
sSECEST  := 0   ,;
sESTADO  := ''  ,;
sMODELO  := ''
#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF
#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
//#include "EasyTEF.ch"
#include "ecf.ch"
********************************
* SOLICITAR NFCe
*******************************
MEMVAR mtip_term,nivel_acess,cod_operado,getlist,inicio_protocolo,fim_protocolo_driver,;
       prepara_string,tamanho_de_retorno,mdata_sis,string_devolvida

FUNCTION SACNFCE(m_mtr,msc)        // CODIGO DE BARRA
*****************************
LOCAL MPRG:="SACNFCE",;
      mp_venda,msele,morde,mcont,f,mvar,mtelap,mtot_ipi,mperc:=18,mtelaobs,;
      mdocum,mcomissao := 0,mqtd,mpreco:=0,mvlr_aliq:='  ',mtot_,qtd:=0,nBota,;
      m_data:={},mvalor_aliq:=0

PRIVATE nErr, nPos,cComm, apCode,m_param:={},aret:={},mcons_ped := {},cons_merc:={},mecf_cpf:='',mnum_pv:=0,;
        m_matriz:={},m_codigo:={},m_merc:={},m_Cbarra:={},i,opcao,;
        mcod_merc,mquantd:=1,mdesconto:=0,mvlr_fat,mtot_ped,mmerc,mpr_venda,;
        li,lb,cb,mnome_ven,lci,lba,cba,tela,mautoriz,mlibera,;
        mcod_bc,mcont_item,mobs1,mobs2,mobs3,orcamento,sovenda,mvarejo,tela_ant,f4,;
        mprz,mnum_ped:=0,menvelope,mcod_cli:=0,mnome_cli,mponto,m_flag,ali,no,mcod_vend:=1,;
        msubtotal:=0,mtot_custo:=0,mcod_aux,mproducao,mdocumento:=SPACE(8),mnum_ecf:=SPACE(8),mtot_nota:=0,;
        mabrir_cp:="",mretorno:=" ",mnum_aux:="",cnumpdv:=" ",cnumcupom:=" ",;
        cont_itens:=0,mcod_fab,mfabrica,mdesc_cart,mobs_prod:=SPACE(40),mobs_prod1:=SPACE(40),mcod_cond:=0,mpago:=' ',;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,msld_aux:=' ',mcond_veze:=SPACE(3),mprz,m_dia[15],m_vlr[15],;
        mcons_tabpg,mtipo_preco,mcomi_tab,cons_cli:={},;
        mvalor_trans := ' ',mnome_rede := ' ',mnum_transacao := ' ',mfinal_transacao := ' ',mtot_bruto:=0,mtot_desc:=0,;
        mcliente := SPACE(40),mcpf := SPACE(11),mcgc := SPACE(14),minsc := SPACE(14),mnum_item:=0,mnum_ccf:='',;
        mtot_imposto:=0,msem_cx := 0,m_nota:={},mchassis:='',mcrt:=''

SET KEY -4 TO f5_qtd()                    // INFORMA QUANTIDADE PRODUTO NO PRG SACROT
SET KEY -2 TO C_PROD()                    // CONSULTAR PRODUTO F3
SET KEY -9 TO fecha_nfce("1")             // neste mesmo PRG. <F10>Tecla
//SET KEY 274 TO sac23ecf2()             // neste mesmo PRG. <ALT + E>Tecla
SET KEY -40 TO f7_cli("*")             // CADASTRO DE CLIENTES <F11>tecla
//SET KEY 274 TO sem_cx()             // neste mesmo PRG. <ALT + E>Tecla
*---------------------------------------------
mtip_term := m_cfg[2]
IF ! AbriArq("insopera","sen");RETURN NIL;ENDIF
IF ! AbriArq("mastprod","merc");RETURN NIL;ENDIF
*---------------------------------------------
IF m_set[1,34] = 'S'
        mcrt:='1'
ELSE
        mcrt:='0'
ENDIF

setcor(1)
lci:=15
cba:=120
lba:=49
m_flag := 0
IF msc # NIL
        msem_cx := 1
        IF ! ver_nivel(mprg,'VENDA ECF COM ALT+E','125',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ENDIF
/*
m_data:={}
sr_getconnection():exec("SELECT MAX(data_mov) FROM r6",,.t.,@m_data)
IF LEN(m_data) = 0 .OR. m_data[1,1] < mdata_sis
        atencao('Nao foi aberto o caixa por isso nao pode emitir o cupom')
        RETURN
ENDIF
*/
m_nota:={}
WHILE .T.
        IF !Veri_Transacao()
                RETURN(.f.)
        ENDIF
        exibi_prg(mprg)
        //mpago:=' '
        IF m_flag = 0
                op_tela(00,01,31,110,mversao+'  -   A B E R T U R A   D O   C U P O M ',,1)
                lim_get()
                botao(0,0,5,99)
                IF msem_cx = 1
                        SUB_BANNER(01,12,'TERMINAL LIVRE',1)
                ELSE
                        SUB_BANNER(01,12,'TERMINAL LIVRE')
                ENDIF
                IF FILE(ALLTRIM(m_cfg[12])+'HTIfirma.jpg')
                        botao(08,21,18,73)
        	       WVW_DrawImage( ,08,21,18,73,ALLTRIM(m_cfg[12])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF

                mensagem('INCICIANDO O ACBR Aguarde um momento....')
                IF ! IBR_INIT(m_cfg[15])
                        atencao('Nao e possivel INICIALIZAR o ACBRMONITORPLUS pelo TCP-IP, verificar se estar instalado...')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mensagem('ATIVANDO O ACBR Aguarde um momento....')
                IF ! IBR_OK( IBR_COMANDO( 'NFE.Ativo',,25))
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
                IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                        //wvw_lclosewindow();RETURN NIL
                ENDIF
                ver_ven(cod_operado)
                mnome_ven := sen->snome
                //atencao(" Operador:"+cod_operado+"-"+RTRIM(mnome_ven),1)
                mproducao := mabrir_cp := " "
                mcod_vend := VAL(cod_operado)
                mtot_custo := m_flag := msubtotal := mtot_ipi  := mcod_cli := mnum_ped := mnum_pv := mtot_bruto := 0
                //IF msld <> NIL
                //        msld_aux := msld
                //ENDIF
                mnome_ven := SPACE(30)
                // VENDAS A VAREJO OU ATACADO
                mvarejo := 1
                // PERCENTUAL DE DESCONTO ANTES DO PEDIDO
                mautoriz := SPACE(3)
                ASIZE(m_merc,0)
                ASIZE(m_matriz,0)
                ASIZE(m_codigo,0)
                ASIZE(m_Cbarra,0)
                mcod_cli := 1
                mnome_cli := SPACE(40)
                mcod_vend := VAL(cod_operado)
                m_flag := 1
                mquantd=1
                mcont_item := cont_itens := 0
                wvw_lclosewindow()
        ENDIF
        op_tela(00,00,53,120,memp_resa+SPACE(30)+mversao+'  -  V E N D A S  '+SPACE(30)+'Terminal: '+m_cfg[1],,1)
        WvW_PBSetFont( NIL, 'Arial Black', 16, 10,)
        nBota := wvw_pbCreate(NIL,51,55,52,75,'[F10] Fechar Cupom',NIL,{||fecha_nfce("1")})
        WVW_PBEnable( NIL, nBota, .F. )
        WHILE .T.
                botao(00,01,10,119)
                limpa(01,02,09,119)
                setcor(1)
                SUB_BANNER(01,10,'P R O D U T O')
                IF LEN(m_codigo) = 0
                        WVW_PBEnable( NIL, nBota, .F. )
                        limpa(01,02,09,119)
                        setcor(1)
                        IF msem_cx = 1
                                SUB_BANNER(01,05,'TERMINAL LIVRE',1)
                        ELSE
                                SUB_BANNER(01,05,'TERMINAL LIVRE')
                        ENDIF
                ELSE
                        WVW_PBEnable( NIL, nBota, .T. )
                ENDIF
                IF FILE(ALLTRIM(m_cfg[12])+'HTIfirma.jpg')
                        botao(12,01,26,53)
                	WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_cfg[12])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                botao(27,01,37,53)
                setcor(1)
                DEVPOS(28,02);DEVOUT('Cod.Produto:')
                DEVPOS(29,02);DEVOUT('Descricao..:')
                DEVPOS(30,02);DEVOUT('Quantidade.:')
                DEVPOS(31,02);DEVOUT('Vlr.Unita..:')
                DEVPOS(32,02);DEVOUT('Vlr.Total..:')
                DEVPOS(33,02);DEVOUT('Saldo......:')
                DEVPOS(36,02);DEVOUT('Desc.(%)...:       - R$: ')
                IF m_flag = 0
                        SET KEY -9 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mlibera := ' '
                i := msubtotal := mtot_ipi  := mtot_custo := mtot_ped := f := mtot_desc := mtot_bruto := mtot_imposto := 0
                SETCOLOR('n/w,n/w')
                botao(lci-3,55,lba,cba)
                mqtd_lin := 0
                mitem := 1
                IF LEN(m_codigo) > 20
                        mqtd_lin := LEN(m_codigo) - 10
                ENDIF
                WVW_DrawLabel(,lci-3,58,'No.Cupom: '+mdocumento,,,210,, 'Arial Black',25,10,,,,,)
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),90),,,,, 'terminal',13,8,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),' Item  Cod.  Descricao                                      ',,,,, 'terminal',13,11,,,,,)
                f++
                WVW_DrawLabel(,lci+f,COL(),REPLI(CHR(223),89),,,, 'terminal',13,8,,,,,)
                //f++
                i:=0
                FOR i = 1 TO LEN(m_codigo)
                        //IF m_codigo[i] = '     ' .OR. m_codigo[i] = NIL
                        //        LOOP
                        //ENDIF
                        mlibera := ' '
                        SETCOLOR('W/b,W/b')
                        IF mqtd_lin < i
                                //@ lci+f,55 SAY ''
                                f++
                                WVW_DrawLabel(,lci+f,COL()+1,'  '+STRZERO(i,4)+'  '+STR(m_codigo[i],5)+'  '+m_matriz[i,1],,,,, 'terminal',13,11,,,,,)
                                f++
                                WVW_DrawLabel(,lci+f,COL()+1,'  '+TRANSFORM(m_matriz[i,2],ALLTRIM('999,999.999'))+' X '+TRANSFORM(m_matriz[i,3],ALLTRIM('@E 999,999.99'))+' = '+TRANSFORM(m_matriz[i,2] * m_matriz[i,3],ALLTRIM('@E 999,999.99')),,,,, 'terminal',13,11,,,,,)
                                f++
                                WVW_DrawLabel(,lci+f,COL(),REPLI('-',89),,,,, 'terminal',13,8,,,,,)
                        ENDIF

                        //IF m_matriz[i,45] = 0
                                //mtot_imposto := mtot_imposto + iat(((m_matriz[i,1] * m_matriz[i,8]) * (m_matriz[i,47] / 100)),'T',2)
                                //mtot_desc := mtot_desc + iat((m_matriz[i,1] * m_matriz[i,8]),'A')
                                msubtotal := msubtotal + iat((m_matriz[i,2] * m_matriz[i,3]),'A')
                                //mtot_custo:= mtot_custo + iat((m_matriz[i,1] * m_matriz[i,9]),'A')
                                //mtot_ipi := mtot_ipi + ((m_matriz[i,2] * m_matriz[i,1]) * (m_matriz[i,22]/100))
                        //ENDIF
                NEXT
                tela_ := {}
                tela_ := WVW_SAVESCREEN(,lci,55,lba,cba-1)
                setcor(3)
                IF (mtot_desc - msubtotal) > 0
                        DEVPOS(36,14);DEVOUT(TRANSFORM(((mtot_desc - msubtotal)/mtot_desc)*100,'99.99'))
                        DEVPOS(36,26);DEVOUT(TRANSFORM((mtot_desc - msubtotal),'99,999.99'))
                        botao(44,01,49,53,,,'*')
                        WVW_DrawLabel(,45,02,'Economia R$:'+TRANSFORM(mtot_desc - msubtotal,'@E 99,999.99'),,,210,, 'arial black',40,17,,,,,)

                ELSE
                        DEVPOS(36,14);DEVOUT(TRANSFORM(0,'99.99'))
                        DEVPOS(36,26);DEVOUT(TRANSFORM(0,'99,999.99'))
                ENDIF
                setcor(1)
                botao(38,01,43,53,,,'*')
                DEVPOS(38,01);DEVOUT(' T O T A L   R$:')
                WVW_DrawLabel(,39,02,TRANSFORM(msubtotal,ALLTRIM('@E 999,999.99')),,,210,, 'arial black',60,35,,,,,)
                mmerc := SPACE(40)
                mcod_bc := SPACE(14)
                IF(mquantd > 1,mquantd,mquantd=1)
                mcod_merc := mdesconto := mvlr_fat := 0
                mobs1 := mobs2 := SPACE(77)
                menvelope := SPACE(10)
                f4 := " "
                // ATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO fecha_nfce("1")       // neste mesmo PRG. <F10>Tecla
                setcor(1)
                mensagem("Tecle: <X mais a qtd.>Informa Qtd. - <F8>Canc.Item - <F10>Fechamento - <PV> Pre_venda - <F4> Abrir Gaveta - <F3> Consulta Produto - <ESC>Retornar")
                @ 28,14 GET mcod_bc PICT '@!'
                READ
                IF SUBSTR(mcod_bc,1,1) = 'X' .AND. VAL(SUBSTR(mcod_bc,2)) > 0
                        mquantd := VAL(SUBSTR(mcod_bc,2))
                        LOOP
                ENDIF
                IF SUBSTR(mcod_bc,1,1) = '*'
                        //mcod_merc := VAL(f4_merc(,SUBSTR(mcod_bc,2),STRZERO(mvarejo,1),mperc))
                        //mcod_merc := VAL(f4_merc(,mcod_bc,STRZERO(mvarejo,1),mperc))
                        mcod_merc := f4_merc(,mcod_bc,STRZERO(mvarejo,1),mperc)
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := cons_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                IF mcod_bc = "FIM"
                        LOOP
                ENDIF
                IF LASTKEY() = 27
                        IF ! EMPTY(m_codigo)              //IBR_CUPOM_ABERTO()
                                opcao := op_simnao("N","Deseja CANCELAR O CUPOM Agora:")
                                IF opcao = "S"
                                        **********
                                        SELE('merc');ORDSETFOCUS(1)
                                        **********
                                        SR_BEGINTRANSACTION()
                                        i := 0
                                        FOR i = 1 TO LEN(m_codigo)
                                                IF EMPTY(m_codigo[i]) .OR. m_codigo[i] = NIL    //.OR. m_matriz[i,41] = 'OS'
                                                        LOOP
                                                ENDIF
                                                cons_merc := {}
                                                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(m_codigo[i]),,.t.,@cons_merc)
                                                //mlinha := cons_merc[1,2]+cons_merc[1,8]+cons_merc[1,9]+cons_merc[1,14]+STRZERO((iat(cons_merc[1,56] + m_matriz[i,1]))*1000,13)+STRZERO(iat(cons_merc[1,46])*100,14)+cons_merc[1,68]
                                                sr_getconnection():exec("UPDATE mastprod SET saldo = "+sr_cdbvalue(cons_merc[1,8] +  m_matriz[i,2])+" WHERE codigo = "+sr_cdbvalue(m_codigo[i]),,.f.)
                                                //IF msld = NIL .AND. EMPTY(mnum_ped) .AND. EMPTY(mnum_pv)
                                        NEXT
                                        sr_committransaction()
                                        sr_endtransaction()
                                        IF m_mtr # NIL
                                                m_mtr := NIL
                                        ENDIF
                                        *******
                                        SELE('merc');ORDSETFOCUS(1)
                                        **********
                                ELSE
                                        LOOP
                                ENDIF
                        ENDIF
                        SET KEY -2 TO
                        SET KEY -7 TO
                        m_codigo:={}
                        m_matriz:={}
                        wvw_lclosewindow()
                        **** apagando VARIAVEIS PRIVATE *****
                        RELEASE ALL
                        SET KEY -9 TO
                        RETURN NIL
                ENDIF
                IF m_flag = 0
                        EXIT
                ENDIF
                IF ! EMPTY(mcod_bc)
                        IF SUBSTR(mcod_bc,1,1) = "M"
                                IF ! EMPTY(mnum_pv) .OR. ! EMPTY(mnum_ped)
                                        atencao('Ja foi informado um Pedido...')
                                        LOOP
                                ENDIF
                                mnum_ped := VAL(SUBSTR(mcod_bc,2))
                                op_tela(10,10,11,40,'NUMERO DA MESA')
                                DEVPOS(00,01);DEVOUT('Numero do MESA..:')
                                DEVPOS(01,01);DEVOUT('Valor...........:')
                                @ 00,19 GET mnum_ped PICT '999999'
                                READ
                                IF LASTKEY() = 27
                                        mnum_ped := 0
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                //atencao('SELECT * FROM mastmov WHERE num_local = '+sr_cdbvalue(alltrim(STR(mnum_ped)))+" AND tipo = 'M' and dat_pag IS NULL",,.t.,@mcons_ped)
                                mcons_ped := {}
                                sr_getconnection():exec('SELECT * FROM mastmov WHERE num_local = '+sr_cdbvalue(alltrim(STR(mnum_ped)))+" AND tipo = 'M' and dat_pag IS NULL",,.t.,@mcons_ped)
                                IF LEN(mcons_ped) = 0
                                        atencao('Mesa nao encontrada ou nao estar ABERTA... !!!')
                                        wvw_lclosewindow()
                                        mnum_ped := 0
                                        LOOP
                                ENDIF
                                mpago := ' '
                                p := mtot_ := 0
                                FOR p = 1 TO LEN(mcons_ped)
                                        mtot_ := mtot_ + (mcons_ped[p,7]*mcons_ped[p,8])
                                NEXT
                                setcor(3)
                                DEVPOS(01,19);DEVOUT(TRANSFORM(mtot_,'999,999.99'))
                                setcor(1)
                                IF 'N' = op_simnao('S','Confirma o Pedido:') .OR. LASTKEY() = 27
                                        wvw_lclosewindow()
                                        mnum_ped := 0
                                        LOOP
                                ENDIF
                                wvw_lclosewindow()

                                mcod_vend := VAL(mcons_ped[1,10])
                                p:=0
                                FOR p = 1 TO LEN(mcons_ped)
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcons_ped[p,5]),,.t.,@cons_merc)
                                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                                        botao(00,01,07,99)
                                        IF LEN(cons_merc) = 0
                                                atencao('Produto nao encontrado...')
                                                LOOP
                                        ENDIF
                                        DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                                        //WVW_DrawLabel(,01,02,mcons_ped[p,5]+' - '+SUBSTR(mcons_ped[p,6],1,20),,,,, 'arial black',60,20,,,,,)
                                        //WVW_DrawLabel(,04,02,'             '+SUBSTR(mcons_ped[p,7],21),,,,, 'arial black',60,20,,,,,)
                                        mcod_merc := mcons_ped[p,5]
                                        mp_venda := iat(mcons_ped[p,8],2)
                                        mvlr_fat := iat(mcons_ped[p,8],2)
                                        DEVPOS(00,80);DEVOUT('Preco   R$:')
                                        WVW_DrawLabel(,04,70,TRANSFORM(mvlr_fat,ALLTRIM('@E 999,999.99')),,,240,, 'arial black',60,30,,,,,)
                                        setcor(1)
                                        mquantd := mcons_ped[p,7]
                                        /*
                                        mcest := IBR_comando('NCM.Validar',{ALLTRIM(cons_merc[1,38])},30)
                                        IF ALLTRIM(mcest) # 'OK: NCM Valido'
                                                atencao(mcest)
                                                LOOP
                                        ENDIF
                                        */
                                        setcor(1)
                                        mtot_ped = 0
                                        mtot_ped = mvlr_fat * mquantd
                                        IF LEN(m_merc) = 0
                                                lExit := .T.
                                                WHILE lExit
                                                        sr_begintransaction()
                                                        try
                                                                aret:={}
                                                                sr_getconnection():exec( "select numero from sacnonfc for update with lock",,.t.,@aret)
                                                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                                                mnum = strzero(VAL(aret[1,1])+1,6)
                                                                sr_getconnection():exec("update sacnonfc set numero = " + sr_cdbvalue(mnum),,.f.)
                                                                sr_committransaction()
                                                                lExit:=.F.
                                                        catch e
                                                                tracelog(valtoprg())
                                                                sr_rollbacktransaction()
                                                                lexit := .T.
                                                        END
                                                        sr_endtransaction()
                                                ENDDO
                                		Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO NFC-e No.:'+mdocumento+SPACE(30))       //+'Terminal: '+m_indiv[1,1])
                                                mnum_item  := 0
                                                maliq_prod := ''
                                        ENDIF
                                        mabrir_cp := "*"
                                        AADD(m_merc,cons_merc[1,2])
                                        AADD(m_codigo,cons_merc[1,1])
                                        mdesconto := mpreco := 0
                                        cont_itens ++
                                        misento := vercst(cons_merc[1,39])

                                        //                  1               2          3      4       5         6              7
                                        IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')
                                                AADD(m_nota,{cons_merc[1,39],cons_merc[1,7],mquantd,0    ,mvlr_fat,cons_merc[1,1],cons_merc[1,39],mmerc})
                                        ELSE
                                                AADD(m_nota,{cons_merc[1,39],cons_merc[1,7],mquantd,mperc,mvlr_fat,cons_merc[1,1],cons_merc[1,39],mmerc})
                                        ENDIF
                                        AADD(m_matriz,{cons_merc[1,2],mquantd,mvlr_fat})
                                        mdesconto := 0
                                        mcont_item ++
                                        mensagem("Imprimindo o Produto")
                                        //vende_prod(STRZERO(VAL(cons_merc[1,8]),13),cons_merc[1,9]+'  '+ALLTRIM(mobs_prod),mvlr_aliq,'F',mquantd,qtd,mpreco,'$',IF(mdesconto<0,mdesconto*-1,mdesconto),cons_merc[1,14],IF(mdesconto<0,'A','D'))
                                        mdesconto := 0
                                        mcont_item ++
                                        // ATUALIZANDO ARQUIVO DE MOVIMENTOS
                                        mcampo_arq :=  'documento       ,';//1
                                                      +'gru_sub         ,';//2
                                                      +'codigo          ,';//3
                                                      +'produto         ,';//4
                                                      +'unidade         ,';//5
                                                      +'data_s_e        ,';//6
                                                      +'ent_sai         ,';//7
                                                      +'quantd          ,';//8
                                                      +'pr_venda        ,';//9
                                                      +'vl_vend         ,';//10
                                                      +'cod_vend        ,';//11
                                                      +'cod_nota        ,';//12
                                                      +'sittrib         ,';//13
                                                      +'tipo            ,';//14
                                                      +'SR_DELETED      '//14
                                                                                                      //    1 2 3 4 5 6 7 8 9 10 11 12 13 14
                                                cComm  := "INSERT INTO sacmovnt ("+mcampo_arq+") VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,' ')"
                                                apCode := SR_SQLParse( cComm, @nErr, @nPos )
                                                cComm  := SR_SQLCodeGen(apCode,;
                                               {'CP'+mdocumento     ,;//1
                                                cons_merc[1,31]     ,;//2
                                                mcod_merc           ,;//3
                                                mmerc               ,;//4
                                                cons_merc[1,7]      ,;//5
                                                mdata_sis           ,;//6
                                                'S'                 ,;//7
                                                mquantd             ,;//8
                                                cons_merc[1,6]      ,;//13
                                                mvlr_fat            ,;//10
                                                cod_operado         ,;//11
                                                'B'                 ,;//14
                                                cons_merc[1,39]     ,;//15
                                                '01';//16
                                                },sr_getconnection():nsystemid)
                                                sr_getconnection():exec(ccomm,,.f.)
                                        mquantd := 1
                                NEXT
                                LOOP
                        ENDIF
                        IF SUBSTR(mcod_bc,1,1) = "2" .AND. (LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0)
                                IF ALLTRIM(m_set[1,179]) = 'TOLEDO'
                                        IF m_set[1,159] = 'V'
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                        ELSE
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                        ENDIF
                                ELSE
                                        IF m_set[1,159] = 'V'
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,6))
                                        ELSE
                                                mcod_merc := VAL(SUBSTR(mcod_bc,2,5))
                                        ENDIF
                                ENDIF
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        atencao("Codigo Barra nao cadastrado")
                                        LOOP
                                ENDIF
                        ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM mastprod WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@cons_merc)
                                IF LEN(cons_merc) > 0
                                        m_produto := {}
                                        IF ! EMPTY(mnum_ped)
                                                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6))+" AND pcod_merc = "+sr_cdbvalue(cons_merc[1,8]),,.t.,@m_produto)
                                        ELSEIF ! EMPTY(mnum_pv)
                                                sr_getconnection():exec("SELECT * FROM sacpv WHERE pnum_ped = "+sr_cdbvalue(STRZERO(mnum_pv,6))+" AND pcod_merc = "+sr_cdbvalue(cons_merc[1,8]),,.t.,@m_produto)
                                        ENDIF
                                        IF LEN(m_produto) > 0 .AND. RTRIM(cons_merc[1,9]) <> 'DIVERSOS'
                                                alt_prod2()
                                                LOOP
                                        ENDIF
                                ELSE
                                        cons_merc := {}
                                        sr_getconnection():exec("SELECT * FROM mastprod WHERE ref = "+sr_cdbvalue(SUBSTR(mcod_bc,1,10)),,.t.,@cons_merc)
                                        IF LEN(cons_merc) = 0
                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                LOOP
                                        ENDIF
                                ENDIF
                                mcod_merc := VAL(mcod_bc)
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        atencao("Codigo da mercadoria nao cadastrado")
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF EMPTY(mmerc)
                        mcod_merc := f4_merc(,,STRZERO(mvarejo,1),mperc)
                        IF EMPTY(mcod_merc)
                                LOOP
                        ENDIF
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                        IF LEN(cons_merc) = 0
                                atencao("Codigo da mercadoria nao cadastrado")
                                LOOP
                        ENDIF
                        mmerc := cons_merc[1,9]
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                //atencao(ALLTRIM(cons_merc[1,70]))
                /*
                mcest := IBR_comando('NCM.Validar',{ALLTRIM(cons_merc[1,38])},30)
                IF ALLTRIM(mcest) # 'OK: NCM Valido'
                        atencao(mcest)
                        LOOP
                ENDIF
                */
                IF EMPTY(cons_merc[1,38])
                        atencao('Produto com o NCM errado....Confira o cadastro do PRODUTO !!!')
                        LOOP
                ENDIF
                IF EMPTY(cons_merc[1,39])
                        atencao('Produto com o CST errado....Confira o cadastro do PRODUTO !!!')
                        LOOP
                ENDIF
                IF FILE(ALLTRIM(m_cfg[11])+'P'+STRZERO(cons_merc[1,1],5)+'.jpg')
                        limpa(12,01,26,53)
                        botao(12,01,26,53)
                        WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_cfg[11])+'P'+STRZERO(cons_merc[1,1],5)+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_cfg[11])+'P'+STRZERO(cons_merc[1,1],5)+'.bmp')
                        limpa(12,01,26,53)
                        botao(12,01,26,53)
                        WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_cfg[11])+'P'+STRZERO(cons_merc[1,1],5)+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_cfg[12])+'HTIfirma.jpg')
                        botao(12,01,26,53)
                	WVW_DrawImage( ,12,01,26,53,ALLTRIM(m_cfg[12])+'HTIFIRMA.JPG',.T.,.F.)
                ENDIF
                IF EMPTY(mcod_merc) .AND. EMPTY(mmerc)
                        atencao('ok')
                        WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                        LOOP
                ENDIF
                // DESATIVA O FECHAMENTO DO PEDIDO
                SET KEY -9 TO                     // neste mesmo PRG. <F10>Tecla
                //
                mcod_merc := cons_merc[1,1]
                setcor(3)
                DEVPOS(28,02);DEVOUT('Cod.Produto:')
                DEVPOS(29,02);DEVOUT('Descricao..:')
                DEVPOS(30,02);DEVOUT('Quantidade.:')
                DEVPOS(31,02);DEVOUT('Vlr.Unita..:')
                DEVPOS(32,02);DEVOUT('Vlr.Total..:')
                DEVPOS(33,02);DEVOUT('Saldo......:')
                DEVPOS(36,02);DEVOUT('Desc.(%)...:       - R$: ')

                @ 28,14 SAY STR(mcod_merc,5)
                @ 29,14 SAY cons_merc[1,2]
                @ 31,14 SAY cons_merc[1,6] PICT '999,999.99'
                @ 33,14 SAY cons_merc[1,8] PICT '999,999.99'
                setcor(1)
                mperc := 0
                mp_venda := iat(cons_merc[1,6],2)
                mvlr_fat := mp_venda
                WVW_RESTSCREEN(,lci,55,lba,cba-1,tela_,.T.)
                botao(00,01,10,119)
                IF cons_merc[1,23] > 0
                        setcor(6)
                        DEVPOS(00,20);DEVOUT('(Promocao)')
                ENDIF
                DEVPOS(00,02);DEVOUT('    Codigo           Produto')
                WVW_DrawLabel(,01,02,STR(cons_merc[1,1],5)+' - '+SUBSTR(cons_merc[1,2],1,30),,,,, 'arial black',60,15,,,,,)
                //WVW_DrawLabel(,06,02,'             '+SUBSTR(cons_merc[1,9],31),,,,, 'arial black',60,15,,,,,)
                mp_venda := iat(mp_venda,cons_merc[1,6])
                mvlr_fat := iat(mvlr_fat,cons_merc[1,6])
                DEVPOS(00,80);DEVOUT('Preco   R$:')
                WVW_DrawLabel(,06,70,TRANSFORM(mvlr_fat,ALLTRIM('@E 999,999.99')),,,240,, 'arial black',60,30,,,,,)
                setcor(1)
                mmerc := cons_merc[1,2]
                        setcor(1)
                        mensagem("<F8> para consultar aplicacao do produto")
                        mmasc_qtd := unidade(cons_merc[1,7])
                        //mquantd := 1
                        //@ lba-3,53 GET mquantd PICT ALLTRIM(m_set[1,99]) WHEN m_indiv[1,26] <> "T" VALID IF(EMPTY(mquantd),.F.,.T.)
                        @ 30,14 GET mquantd PICT ALLTRIM(mmasc_qtd) VALID IF(EMPTY(mquantd),.F.,.T.)
                        READ
                        IF LASTKEY() = 27;LOOP;ENDIF
                        mensagem("Digite o valor do produto - <ESC>Abandonar")
                        @ 31,14 GET mvlr_fat PICT '999,999.99' VALID IF(mvlr_fat <= 0,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                //UNLOCK
                                LOOP
                        ENDIF
                        IF mp_venda > mvlr_fat
                                mdesconto := ((mp_venda-mvlr_fat)/mp_venda)*100
                                IF ((mp_venda - mvlr_fat)/mp_venda)*100 > m_set[1,36] .AND. EMPTY(mperc)
                                        IF ! aut_sen(TRANSFORM(((mp_venda - mvlr_fat)/mp_venda)*100,"999.99")+"% Desconto nao e permitido.. senha autorizacao:","LIB_DESC",,,STR(mcod_merc,5))
                                                setcor(1)
                                                LOOP
                                        ENDIF
                                ENDIF
                        ENDIF
                //ENDIF
                setcor(1)
                mvlr_fat := iat(mvlr_fat,'A')
                mtot_ped = 0
                mtot_ped = mvlr_fat * mquantd
                setcor(3)
                @ 32,14 SAY mtot_ped PICT '999,999.99'
                setcor(1)
                //mcomissao := cons_merc[1,26]
                opcao := 'S'
                opcao := op_simnao('S','Confirma Inclusao da Mercadoria:')
                IF opcao = "S"
		        IF LEN(m_merc) = 0
                                lExit := .T.
                                WHILE lExit
                                        sr_begintransaction()
                                        try
                                                aret:={}
                                                sr_getconnection():exec( "select numero from sacnonfc for update with lock",,.t.,@aret)
                                                mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                                mnum = strzero(VAL(aret[1,1])+1,6)
                                                sr_getconnection():exec("update sacnonfc set numero = " + sr_cdbvalue(mnum),,.f.)
                                                sr_committransaction()
                                                lExit:=.F.
                                        catch e
                                                tracelog(valtoprg())
                                                sr_rollbacktransaction()
                                                lexit := .T.
                                        END
                                        sr_endtransaction()
                                ENDDO
                		Wvw_SetTitle( ,memp_resa+SPACE(50)+'EMISSAO DO NFC-e No.:'+mdocumento+SPACE(30))       //+'Terminal: '+m_indiv[1,1])
                                mnum_item  := 0
                                maliq_prod := ''
        		ENDIF
                        mabrir_cp := "*"
                        mensagem("Imprimindo o Produto")
                        mdesconto := mpreco := 0
                                mpreco := mp_venda
                                mver_isento := vercst(cons_merc[1,39])
                                mnum_item ++
                        AADD(m_merc,cons_merc[1,1])
                        AADD(m_codigo,mcod_merc)
                        aret:={}
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@aret)
                        SR_BEGINTRANSACTION()
                                //sr_getconnection():exec("UPDATE mastprod SET saldo_fis = "+sr_cdbvalue(aret[1,8] - mquantd)+" WHERE codigo = "+sr_cdbvalue(mcod_merc),,.f.)
                                cont_itens ++
                                misento := vercst(cons_merc[1,39])
                                        //                  1               2          3      4       5         6              7            8
                                IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')
                                        AADD(m_nota,{cons_merc[1,39],cons_merc[1,7],mquantd,0    ,mvlr_fat,cons_merc[1,1],cons_merc[1,39],mmerc})
                                ELSE
                                        AADD(m_nota,{cons_merc[1,39],cons_merc[1,7],mquantd,mperc,mvlr_fat,cons_merc[1,1],cons_merc[1,39],mmerc})
                                ENDIF
                                AADD(m_matriz,{cons_merc[1,2],mquantd,mvlr_fat})
                                mdesconto := 0
                                mcont_item ++
                                // ATUALIZANDO ARQUIVO DE MOVIMENTOS
                                mcampo_arq :=  'documento       ,';//1
                                              +'gru_sub         ,';//2
                                              +'codigo          ,';//3
                                              +'produto         ,';//4
                                              +'unidade         ,';//5
                                              +'data_s_e        ,';//6
                                              +'ent_sai         ,';//7
                                              +'quantd          ,';//8
                                              +'pr_venda        ,';//9
                                              +'vl_vend         ,';//10
                                              +'cod_vend        ,';//11
                                              +'cod_nota        ,';//12
                                              +'sittrib         ,';//13
                                              +'tipo            ,';//14
                                              +'SR_DELETED      '//14
                                cComm  := "INSERT INTO sacmovnt ("+mcampo_arq+") VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,' ')"
                                apCode := SR_SQLParse( cComm, @nErr, @nPos )
                                cComm  := SR_SQLCodeGen(apCode,;
                                       {'CP'+mdocumento     ,;//1
                                        cons_merc[1,31]     ,;//2
                                        mcod_merc           ,;//3
                                        mmerc               ,;//4
                                        cons_merc[1,7]      ,;//5
                                        mdata_sis           ,;//6
                                        'S'                 ,;//7
                                        mquantd             ,;//8
                                        cons_merc[1,6]      ,;//13
                                        mvlr_fat            ,;//10
                                        cod_operado         ,;//11
                                        'B'                 ,;//14
                                        cons_merc[1,39]     ,;//15
                                        '01';//16
                                        },sr_getconnection():nsystemid)
                                        sr_getconnection():exec(ccomm,,.f.)
                                sr_committransaction()
                        sr_endtransaction()
                        mquantd := 1
                        **********
                        SELE("merc");ORDSETFOCUS(1)
                        **********
                        EXIT
                ENDIF
        ENDDO
        wvw_lclosewindow()
ENDDO
RETURN NIL
***************************  F I M  **********************************
*RECEBIMENTO DE TP"s
*********************
FUNCTION fecha_nfce
*******************
LOCAL MPRG:="SACNFCE",;
      opcao,lci,lba,cba,i,mopcao,f,mtipo_comp,mtipo_pag,mtot_verif:=0,mperc_comissao,li,lb,cb,mdiferenca:=0,mtroco:=0,;
      m_recebe:={},mdinheiro,mn_banco,mn_cheque,mn_dup,mn_trans,mvencimento,mt_pag,mvalor,mn_fin,mtot_ipi,mbox_rece,;
      magencia,mc_c,mcorrente,mcartao_sn:=" ",aret:={},mvlr_cred:=0,mcredito_aux:=0,m_credito:={},Operacoes,;
      mdesc_tot:=0,mvlr_cartao:=0

MEMVAR mtot_nota,m_codigo,m_merc,m_matriz,mdocumento,mnum_ecf,mcod_bc,m_flag,mcgc,mcpf,minsc,mcliente,mcod_vend,mnum_ccf

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,m_desc:={},mdesconto,mreceb,mcom_ven,mcom_ap,mbanco,;
        mnome_vend,mperc,mcond_vezes,mcond_intev,mtp_vend,msub_total:=0,mvl_vend:=0,mtot_icm:=0,mtipo_pg:=0,mvalor_aux,;
        string_devolvida,mtot_rece:=0,mn_cupom,mnome_arq:=' ',mvalor_cart:=0,mcod_cart,mdesc_cx:=0,mdesc_perc:=0,;
        mcredito:=0,mn_cred:=SPACE(8),nTotalAPagar:=0,mind_cartao:='00',m_flag_f:=' ',mdesc_p,mdesc_r,mdesc_u,;
        EasyTEF,mqtd_parc := 0,mind_tef:=' ',mdif_parc:=0,mcons_emi := {},mcons_cid := {},mcod_cid_emit:=' ',mcod_cid_dest:=' '
CLEAR GETS
mreceb := "R"
lci = 04
lba = 23
cba = 100
*----------------------------------------------
IF ! AbriArq("insopera","sen");RETURN NIL;ENDIF
*----------------------------------------------
ver_ven(cod_operado)
atencao(" Operador:"+cod_operado+"-"+RTRIM(sen->snome))
mtot_nota := msubtotal
IF mtot_nota = 0
        atencao('O total da nota estar com valor zero....')
        RETURN NIL
ENDIF
tela_fecha := {}
tela_fecha := WVW_SAVESCREEN(,0,0,50,120)
botao(02,00,50,54,," RECEBIMENTOS CAIXA ")
li := 03
ci := 00
lb := 22
cb := 54
WHILE .T.
        ASIZE(m_desc,0)
        mensagem("Preencha os Campos - <ESC> p/Retornar ")
        mcom_ven := mcom_ap := mperc := mvl_vend := mperc_comissao := mprazo_cart := mdesc_cart := mtot_icm :=;
        mdinheiro := mcod_cart := mvalor := mtot_verif := mtot_ipi := mdiferenca := i := f := mtot_verif := mtot_rece := ;
        mvlr_cred := mdesc_p := mdesc_r := mdesc_u := mdesconto := 0
        mcliente = SPACE(40)
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mnome_vend := SPACE(30)
        opcao = "S"
        mtp_vend := mcond_vezes := mcond_intev := SPACE(2)
        mbanco := "C"
        mtipo_comp := "AV"
        mtipo_pag := mcartao_sn := SPACE(1)
        mn_banco := SPACE(3)
        mn_cheque := SPACE(6)
        mn_dup := mn_trans := magencia := SPACE(8)
        mc_c := SPACE(13)
        mvencimento := CTOD(" /  /  ")
        mt_pag := SPACE(1)
        mn_cupom := mn_cred:=SPACE(8)
        i := 1

        ASIZE(m_recebe,0)
        DEVPOS(li  ,1);DEVOUT("Vend...:")
        DEVPOS(li+1,1);DEVOUT("Cliente:")
        DEVPOS(li+2,1);DEVOUT("CPF....:")
        DEVPOS(li+3,1);DEVOUT("CNPJ...:")
        //DEVPOS(li+4,1);DEVOUT("Email..:")
        //DEVPOS(li+4,1);DEVOUT("End....:")
        //DEVPOS(li+5,1);DEVOUT("Bairro.:")
        //DEVPOS(li+6,1);DEVOUT("Cidade.:")
        //DEVPOS(li+7,1);DEVOUT("Estado.:")
        //DEVPOS(li+7,20);DEVOUT("CEP:")
        DEVPOS(li+9,1);DEVOUT("CREDITO:")
        @ li+10,0 TO li+10,cb
        DEVPOS(li+11,1);DEVOUT("Total da COMPRA R$:")
        @ li+17,0 TO li+17,cb
        DEVPOS(li+18,1);DEVOUT("Total RECEBIDO..R$:")
        DEVPOS(li+19,1);DEVOUT("Valor a RECEBER R$:")
        @ li+20,0 TO li+20,cb
        IF LASTKEY() = 27
                UNLOCK
                WVW_RESTSCREEN(,0,0,50,120,tela_fecha,.T.)
                RETURN NIL
        ENDIF
        mcod_cli := IF(EMPTY(mcod_cli),1,mcod_cli)
        ***************
        //SELE("cli");ORDSETFOCUS(1)
        //GO TOP
        ***************
        @ li  ,09 GET mcod_vend PICT "999" VALID IF(EMPTY(mcod_vend),.F.,ven(@mcod_vend,li,14)) WHEN  EMPTY(mnum_ped) .AND. EMPTY(mnum_pv)
        //@ li+1,09 GET mcod_cli PICT "99999" VALID ver_cli(mcod_cli,li+1,16)
        //@ li+2,09 GET mcpf PICT "@@R 999.999.999-99"  WHEN mcod_cli = 0
        //@ li+3,09 GET mcgc PICT "@@R 99.999.999/9999-99" WHEN mcpf = SPACE(11)        //VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN mcpf = SPACE(11)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        /*
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM mastcli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)),,.t.,@cons_cli)
        IF LEN(cons_cli) = 0
                atencao('Cliente nao cadastrado !!!')
                LOOP
        ENDIF
        IF mcod_cli > 0 .AND. EMPTY(mcpf) .AND. EMPTY(mcgc)
                mcpf := cons_cli[1,23]
                mcgc := cons_cli[1,21]
                minsc := cons_cli[1,22]
        ENDIF
        */
        setcor(3)
        //DEVPOS(li+1,09);DEVOUT(STRZERO(mcod_cli,5))
        //DEVPOS(li+1,16);DEVOUT(cons_cli[1,2])
        DEVPOS(li+2,09);DEVOUTPICT(mcpf,"@@R 999.999.999-99")
        DEVPOS(li+3,09);DEVOUTPICT(mcgc,"@@R 99.999.999/9999-99")
        setcor(1)
        //IF EMPTY(cons_cli[1,23]) .AND. EMPTY(cons_cli[1,21])
        //        @ li+1,16 GET cons_cli[1,2] PICT "@!"
                @ li+2,09 GET mcpf PICT "@@R 999.999.999-99"    //VALID IF(cons_cli[1,23] = SPACE(11),.T.,pesq_cpf(cons_cli[1,23],'cli',))        //VALID ver_cpf(cons_cli[1,34])
                @ li+3,09 GET mcgc PICT "@@R 99.999.999/9999-99" WHEN mcpf = SPACE(11)        //VALID IF(cons_cli[1,21] = SPACE(14),.T.,pesq_cgc(cons_cli[1,21],'cli',,'cli')) WHEN EMPTY(cons_cli[1,23])  //VALID ver_cgc(cons_cli[1,32])
                READ
                IF LASTKEY() = 27
                        DBUNLOCKALL()
                        LOOP
                ENDIF
        //ENDIF
        mcons_emi := {}
        sr_getconnection():exec("SELECT * FROM saccid WHERE cidade = "+sr_cdbvalue(RTRIM(m_set[1,9]))+" AND uf = "+sr_cdbvalue(RTRIM(m_set[1,10])),,.t.,@mcons_emi)
        IF LEN(mcons_emi) = 0 .OR. EMPTY(mcons_emi[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade da EMPRESA EMITENTE ** '+RTRIM(m_set[1,9])+'-'+RTRIM(m_set[1,10])+' nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cid_emit := mcons_emi[1,1]
        //WVW_DrawLabel(,li+8,ci,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)
        //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
        //SUB_BANNER(li+5,30,TRANSFORM(mtot_nota,"999,999.99"))
        setcor(1)
        mdiferenca := iat(mtot_nota - mtot_verif,'A')
        WHILE .T.
                IF msem_cx = 0
                        WVW_DrawLabel(,li+12,0,TRANSFORM(mtot_nota,ALLTRIM('@E 999,999.99')),,,210,, 'arial black',60,35,,,,,)
                ELSE
                        WVW_DrawLabel(,li+12,0,TRANSFORM(mtot_nota,ALLTRIM('@E 999,999.99')),,,,, 'arial black',60,35,,,,,)
                        DEVPOS(li+9,cb-5);DEVOUT("S/C")
                ENDIF
                //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mtroco := mdinheiro := mcod_cart := mvalor := 0
                mn_banco := SPACE(3)
                mn_cheque := SPACE(6)
                mn_dup := mn_trans := mn_fin := magencia := SPACE(8)
                mc_c := SPACE(13)
                mvencimento := CTOD("  /  /  ")
                mt_pag := "C"
                mn_cupom := SPACE(10)
                mopcao := m_flag_f := SPACE(1)
                mcorrente := SPACE(35)
                botao(li+21,1,li+23,17)
                botao(li+21,18,li+23,34)
                botao(li+21,35,li+23,51)

                botao(li+24,1 ,li+26,17)
                botao(li+24,18,li+26,34)
                botao(li+24,35,li+26,51)
                setcor(1)
                @ li+22,2 PROMPT  "  1-Dinheiro   "
                @ li+22,19 PROMPT "   2-Cheque    "
                @ li+22,36 PROMPT "  3-Duplicata  "
                @ li+25,19 PROMPT "   4-Cartao    "
                @ li+25,36 PROMPT "  5-Credito    "
                SET INTEN ON
                MENU TO mtipo_pg
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                setcor(1)
                IF mtipo_pg = 1
                        op_tela(20,1,22,40,' DINHEIRO')
                        DEVPOS(1,2);DEVOUT("Dinheiro............R$:")
                        @ 1,25 GET mdinheiro PICT "999,999,999.99"
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2
                        IF EMPTY(mcod_cli)
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        op_tela(20,15,28,75,'CHEQUES')
                        setcor(1)
                        DEVPOS(1,1);DEVOUT("No.Banco...:")
                        DEVPOS(2,1);DEVOUT("Agencia....:")
                        DEVPOS(3,1);DEVOUT("C/C........:")
                        DEVPOS(4,1);DEVOUT("No.Cheque..:")
                        DEVPOS(5,1);DEVOUT("Vencimento.:")
                        DEVPOS(6,1);DEVOUT("Valor......:")
                        DEVPOS(7,1);DEVOUT("Correntista:")
                        @ 1,14 GET mn_banco PICT "9999" WHEN EMPTY(mdinheiro)
                        @ 2,14 GET magencia PICT "@!"
                        @ 3,14 GET mc_c PICT "@!"
                        @ 4,14 GET mn_cheque PICT "99999999" VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.) WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ 5,14 GET mvencimento WHEN ! EMPTY(mn_banco) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 6,14 GET mvalor PICT "9,999,999.99" WHEN EMPTY(mdinheiro) .AND. ! EMPTY(mn_banco)
                        @ 7,14 GET mcorrente PICT "@!"
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                                fecha_tela()
                                LOOP
                        ENDIF
                        IF mvencimento > mdata_sis
                                mtipo_comp = "AP"
                        ENDIF
               ELSEIF mtipo_pg = 3
                        IF EMPTY(mcod_cli)
                                atencao("Esta operacao e necessario um CLIENTE")
                                LOOP
                        ENDIF
                        op_tela(20,27,25,56,'DUPLICATA')
                        mn_dup := ALLTRIM(mdocumento)+SPACE(8-LEN(ALLTRIM(mdocumento)))
                        DEVPOS(1,1);DEVOUT("No.Duplicata.:")
                        DEVPOS(2,1);DEVOUT("Vencimento...:")
                        DEVPOS(3,1);DEVOUT("C>art. B>anco:")
                        DEVPOS(4,1);DEVOUT("Valor R$.....:")
                        @ 1,16 GET mn_dup PICT "@!"
                        @ 2,16 GET mvencimento WHEN ! EMPTY(mn_dup) VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        @ 3,16 GET mt_pag PICT "@!" VALID mt_pag $ "C,B" WHEN ! EMPTY(mn_dup)
                        @ 4,16 GET mvalor PICT "9,999,999.99" WHEN ! EMPTY(mn_dup)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_dup)
                                fecha_tela()
                                LOOP
                        ENDIF
                        mtipo_comp = "AP"
               ELSEIF mtipo_pg = 4
                        mvalor := mdiferenca
                        mn_cupom := mdocumento
                        op_tela(20,40,26,79,'CARTAO')
                        DEVPOS(1,1);DEVOUT("Cod.Cartao:")
                        DEVPOS(3,1);DEVOUT("No.Cupom..:")
                        DEVPOS(4,1);DEVOUT('Qtd. vezes:')
                        DEVPOS(5,1);DEVOUT('Valor.....:')
                        @ 1,13 GET mcod_cart PICT "999" VALID IF(EMPTY(mcod_cart),.F.,ver_cartao(mcod_cart,1,17))
                        @ 5,13 GET mvalor PICT "999,999.99" VALID IF(mvalor > mdiferenca,.F.,.T.) WHEN car->tef # 'S'
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                fecha_tela()
                                LOOP
                        ENDIF
                        setcor(3)
                        DEVPOS(1,13);DEVOUT(STRZERO(mcod_cart,3))
                        setcor(1)
                        ver_cartao(mcod_cart,1,17)
                        mvencimento := mdata_sis + car->prazo
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_cart)
                                LOOP
                        ENDIF
                        IF car->tef = 'S'
                                //IBR_INI_FECHA(mdesconto)
                                mqtd_parc := 1
                                mgerenciador := ALLTRIM(car->cartao)
                                nTotalAPagar := mvalor
                                NumeroCupom := mdocumento
                                mensagem('Chamando o Gerenciador: PAY & GO MULT')
                                IF trata_tef(NumeroCupom,0,nTotalAPagar)
                                        m_flag_f := 'T'
                                ELSE
                                        atencao("Transação não foi aprovada !")
                                        fecha_tela()
                                        mvalor := 0
                                        m_flag_f := ''
                                        LOOP
                                ENDIF

                                m_intevalo :={}
                                m_parcela  :={}
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        AADD(m_intevalo,car->prazo*i)
                                NEXT
                                //atencao(transform(iat(mvalor/mqtd_parc,'T',2),'999,999.9999')+' - '+transform(iat(mvalor),'999,999.99'))
                                IF iat((mvalor/mqtd_parc),'T',2)*mqtd_parc # iat(mvalor)
                                        mdif_parc := iat(mvalor,'A') - iat(mvalor/mqtd_parc,'T',2)*mqtd_parc
                                ENDIF
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        mvencimento := mdata_sis + m_intevalo[i]
                                        IF mqtd_parc > 9
                                                        AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                        AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mvalor/mqtd_parc,'T',2),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                NEXT
                                IF mdif_parc # 0
                                        m_parcela[1,3] := m_parcela[1,3] + mdif_parc
                                ENDIF
                                IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                        mtipo_comp = 'AV'
                                ELSE
                                        mtipo_comp = 'AP'
                                ENDIF
                                i := mvalor := 0
                                FOR i = 1 TO mqtd_parc
                                        mvalor := mvalor + m_parcela[i,3]
                                NEXT
                        ELSE
                                NumeroCupom := mdocumento
                                mqtd_parc := 1
                                setcor(1)
                                @ 3,13 GET NumeroCupom
                                @ 4,13 GET mqtd_parc PICT '99' VALID IF(EMPTY(mqtd_parc) .OR. mqtd_parc > 15,.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                IF op_simnao('S','Confirma Inclusao da FORMA DE PAGAMENTO:') = 'N'
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                m_intevalo :={}
                                m_parcela  :={}
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        AADD(m_intevalo,car->prazo*i)
                                NEXT
                                i := 0
                                FOR i = 1 TO mqtd_parc
                                        mvencimento := mdata_sis + m_intevalo[i]
                                        IF mqtd_parc > 9
                                                AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2),mvencimento,iat(mvalor/mqtd_parc,'A'),car->cod_forn,car->tipo_conta})
                                        ELSE
                                                AADD(m_parcela,{ALLTRIM(NumeroCupom)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1),mvencimento,iat(mvalor/mqtd_parc,'A'),car->cod_forn,car->tipo_conta})
                                        ENDIF
                                NEXT
                                IF mvalor - (iat((mvalor/mqtd_parc),'A') * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mvalor - (iat((mvalor/mqtd_parc),'A') * mqtd_parc))
                                ENDIF
                                IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                        mtipo_comp = 'AV'
                                ELSE
                                        mtipo_comp = 'AP'
                                ENDIF
                                i := mvalor := 0
                                FOR i = 1 TO mqtd_parc
                                        mvalor := mvalor + m_parcela[i,3]
                                NEXT
                        ENDIF
                        //mtipo_comp = "AP"
                ELSEIF mtipo_pg = 5
                        IF mcredito = 0
                                atencao('Esta opcao nao pode ser usada pois o Cliente nao tem CREDITO')
                                LOOP
                        ENDIF
                        c_credito()
                        op_tela(20,27,24,56,' CREDITO CLIENTE ')
                        /*
                        IF ! EMPTY(mnum_ped)
                                mn_cred := ALLTRIM(STR(mnum_ped))+SPACE(8-LEN(ALLTRIM(STR(mnum_ped))))
                        ELSE
                                mn_cred := SPACE(8)
                        ENDIF
                        */
                        mvencimento := mdata_sis
                        DEVPOS(0,1);DEVOUT('No.CREDITO...:')
                        DEVPOS(1,1);DEVOUT('Data.........:')
                        DEVPOS(2,1);DEVOUT('Valor R$.....:')
                        setcor(3)
                        setcor(1)
                        @ 0,16 GET mn_cred
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        achou := f := 0
                        FOR f = 1 TO LEN(m_recebe)
                                IF m_recebe[f,5] = mn_cred
                                        atencao('Este Credito ja foi solicitado....')
                                        achou := 1
                                        EXIT
                                ENDIF
                        NEXT
                        IF achou > 0
                                LOOP
                        ENDIF
                        IF mdiferenca < mcredito_aux
                                mvalor := mdiferenca
                        ELSE
                                mvalor := mcredito_aux
                        ENDIF
                        @ 1,16 SAY mvencimento
                        setcor(1)
                        @ 2,16 GET mvalor PICT '9,999,999.99' VALID IF(mvalor>mcredito,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                fecha_tela()
                                LOOP
                        ENDIF
                        mtipo_comp = 'AV'
                ELSE
                        LOOP
                ENDIF
                fecha_tela()
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred) .AND. mvalor+mdinheiro > 0
                        LOOP
                ENDIF
                IF (! EMPTY(mn_banco) .OR. ! EMPTY(mn_dup) .OR. ! EMPTY(mn_fin) .OR. ! EMPTY(mcod_cart) .OR. ! EMPTY(mn_cred)) .AND. ! EMPTY(mn_trans) .AND. EMPTY(mcod_cli)
                        atencao("Este tipo de operacao exige cliente para que nao haja problemas futuros")
                       LOOP
                ENDIF
                IF m_flag_f = 'T'
                        mopcao := 'S'
                ELSE
                        mopcao := op_simnao("S","Confirma a Inclusao:")
                ENDIF
                //setcor(1)
                //WVW_DrawLabel(,li+12,ci,TRANSFORM(mtot_nota,ALLTRIM('@E '+m_set[1,98])),,,210,, 'arial black',60,35,,,,,)

                //SUB_BANNER(li+8,26,TRANSFORM(mtot_nota,"999,999.99"))
                IF mopcao = "N"
                        LOOP
                ENDIF
                IF mopcao = "S"
                        mtot_rece := mtot_rece + mvalor + mdinheiro
                        IF ! (EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND.;
                             EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. EMPTY(mn_fin) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred));
                              .OR. mdinheiro = mtot_nota
                                IF ! EMPTY(mdinheiro) .OR. mdinheiro = mtot_nota
                                        IF mdinheiro + mtot_verif > mtot_nota
                                                mtroco := (mdinheiro+mtot_verif) - (mtot_nota)
                                                mvalor := mtot_nota - mtot_verif
                                                mdinheiro := 0
                                        ELSE
                                                mvalor := mdinheiro
                                        ENDIF
                                        //               1    2      3         4       5        6        7         8                  8       10     11       12    13      14
                                        AADD(m_recebe,{"DN","AV",'00',mn_cheque,"99999999",mdata_sis,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                ELSE
                                        IF ! EMPTY(mn_banco)
                                                IF mvencimento > mdata_sis
                                                        //               1    2      3         4       5        6        7         8                  9       10     11       12    13      14
                                                        AADD(m_recebe,{"CH","AP",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ELSE
                                                        AADD(m_recebe,{"CH","AV",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_dup)
                                                 AADD(m_recebe,{"DU","AP",mn_banco,mn_cheque,mn_dup,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                        ELSEIF ! EMPTY(mn_cupom)
                                                i := 0
                                                FOR i = 1 TO LEN(m_parcela)
                                                        IF EMPTY(m_parcela[i,1])
                                                                LOOP
                                                        ENDIF
                                                        IF m_parcela[i,2] > mdata_sis
                                                                //               1        2       3        4       5          6        7           8                 9            10          11      12       13       14        15         16            17            18
                                                                AADD(m_recebe,{'CT',mtipo_comp,SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],' '})
                                                        ELSE

                                                                AADD(m_recebe,{'CT',mtipo_comp,SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],' '})
                                                        ENDIF
                                                NEXT
/*
*                                               mvencimento := mdata_sis + mprazo_cart
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{"CT","AP",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ELSE
                                                                  //     1    2     3         4         5       6       7          8               9       10      11    12        13     14    15
                                                        AADD(m_recebe,{"CT","AV",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart})
                                                ENDIF
*/
                                        ELSEIF ! EMPTY(mn_fin)
                                                IF mvencimento > mdata_sis
                                                        AADD(m_recebe,{"FI","AP",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ELSE
                                                        AADD(m_recebe,{"FI","AV",mn_banco,mn_cheque,mn_dup,mvencimento,"B",STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_trans)
                                                AADD(m_recebe,{"TR","AP",mn_banco,mn_cheque,mn_trans,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mdesc_cart,'','',''})
                                        ELSEIF ! EMPTY(mn_cred)
                                                mcredito := mcredito - mvalor
                                                AADD(m_recebe,{'CR','AV',SPACE(3),SPACE(6) ,mn_cred,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                                        ENDIF
                                ENDIF
                        ENDIF
                        mtot_verif := mtot_verif + mvalor       //+ mdinheiro
                        mdiferenca := iat(mtot_nota - mtot_verif,'A')
                        setcor(3)
                        DEVPOS(li+18,21);DEVOUTPICT(mtot_verif,"9,999,999.99")
                        DEVPOS(li+19,21);DEVOUTPICT(mtot_nota - mtot_verif,"9,999,999.99")
                        limpa(li+27,1,lb-1,cb-1)
                        f := 1
                        i := 0
                        FOR i = 1 TO LEN(m_recebe)
                                DEVPOS(li+27+f,1)
                                IF m_recebe[i,1] = "DN"
                                        //DEVPOS(li+23+f,1);DEVOUT("DINHEIRO.....: ")
                                        DEVOUT("DINHEIRO.....: ")
                                ELSEIF m_recebe[i,1] = "CH"
                                        //DEVOUT("CHEQUE.......: Bco.: "+m_recebe[i,3]+" No.: "+m_recebe[i,4]+" Venc.:"+DTOC(m_recebe[i,6]))
                                        DEVOUT("CHEQUE.......: No: "+m_recebe[i,4]+" Vc:"+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "DU"
                                        DEVOUT("DUPLICATA....: No: "+m_recebe[i,5]+" Vc:"+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CT"
                                        DEVOUT("CARTAO.......: "+m_recebe[i,8]+"-"+LEFT(m_recebe[i,12],10)+" Cupom: "+m_recebe[i,9])
                                ELSEIF m_recebe[i,1] = "FI"
                                        DEVOUT("FINANCIAMENTO: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "TR"
                                        DEVOUT("TRANSFERENCIA: "+m_recebe[i,11]+" Venc.: "+DTOC(m_recebe[i,6]))
                                ELSEIF m_recebe[i,1] = "CR"
                                        DEVOUT("CREDITO......: ")
                                ENDIF
                                DEVPOS(li+27+f,39);DEVOUT("Vlr:"+TRANSFORM(m_recebe[i,10],"999,999.99"))
                                IF i > 4
                                        SCROLL(li+27,1,lb-1,cb-1,1)
                                ELSE
                                        f++
                                ENDIF
                        NEXT
                        mdinheiro := 0
                        setcor(1)
                        IF mtot_verif >= mtot_nota
                                IF m_flag_f = 'T'
                                        mopcao := 'S'
                                ELSE
                                        mopcao := op_simnao("S","Todas informacoes [OK], Confirma Dados Preenchido:")
                                ENDIF
                                IF mopcao = "N"
                                        ASIZE(m_recebe,0)
                                        mtot_verif := 0
                                        setcor(3)
                                        DEVPOS(li+18,21);DEVOUTPICT(mtot_verif,"9,999,999.99")
                                        DEVPOS(li+19,21);DEVOUTPICT(mtot_nota,"9,999,999.99")
                                        setcor(1)
                                        limpa(li+27,1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                IF mopcao = "S"
                                        IF mtroco > 0
                                                //op_tela(10,05,40,95,' T R O C O ')
                                                //DEVPOS(0,0);DEVOUT('')
                                                //WVW_DrawLabel(,00,0,'   Troco',,,210,, 'arial black',60,35,,,,,)
                                                //WVW_DrawLabel(,05,0,'R$:'+TRANSFORM(mtroco,ALLTRIM('@E 99,999.99')),,,210,, 'arial black',60,35,,,,,)
                                                //botao1(30,0,45,120,' T R O C O ')
                                                WVW_DrawLabel(,32,1,'   Troco',,,210,, 'arial black',60,25,,,,,)
                                                WVW_DrawLabel(,37,1,'R$:'+TRANSFORM(mtroco,ALLTRIM('@E 99,999.99')),,,210,, 'arial black',60,25,,,,,)
                                                INKEY(.90,850)
                                                //fecha_tela()
                                        ENDIF
                                        EXIT
                                ENDIF
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27;LOOP;ENDIF
                //IBR_INI_FECHA(mdesconto)
                mensagem("Aguarde Finalizando o Cupom Fiscal...")

                mnome_arq := ' '
                mvalor_cart := 0
                mind_pg := '  '
                mtef := ' '
                i := 0
                IF m_flag_f # 'T'
                        //ATENCAO(TRANSFORM(mdesc_tot,'9999.99'))
                        //ini_fechamento(mdesc_tot)
                ENDIF

                mforma_pag := ''
                i:=0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'DN'
                                mforma_pag := 'DINHEIRO'
                                //mind_cartao := forma_pag('DINHEIRO',m_recebe[i,10]+mtroco)
                                //mind_cartao := forma_pag('DINHEIRO',m_recebe[i,10]-10)
                        ELSEIF m_recebe[i,1] = 'CH'
                                mforma_pag := 'CHEQUE'
                                //mind_cartao := forma_pag('CHEQUE',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'DU'
                                mforma_pag := 'DUPLICATA'
                                //mind_cartao := forma_pag('DUPLICATA',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'FI'
                                mforma_pag := 'FINANCIAMENTO'
                                //mind_cartao := forma_pag('FINANCIAMENTO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CR'
                                mforma_pag := 'CREDITO'
                                //mind_cartao := forma_pag('CREDITO',m_recebe[i,10])
                        ELSEIF m_recebe[i,1] = 'CT'
                                LOOP
                                //cons_forma := {}
                                //sr_getconnection():exec("SELECT * FROM mastcarta WHERE codigo = "+sr_cdbvalue(m_recebe[i,8]),,.t.,@cons_forma)
                                //IF LEN(cons_forma) = 0
                                //        LOOP
                                //ENDIF
                                /*
                                mvlr := y := 0
                                FOR y = 1 TO LEN(m_recebe)
                                        IF m_recebe[y,1] # 'CT'
                                                LOOP
                                        ENDIF
                                        cons_forma := {}
                                        sr_getconnection():exec("SELECT * FROM mastcarta WHERE codigo = "+sr_cdbvalue(m_recebe[y,8]),,.t.,@cons_forma)
                                        IF LEN(cons_forma) = 0
                                                LOOP
                                        ENDIF
                                        mind_cartao := forma_pag(ALLTRIM(cons_forma[1,2]),m_recebe[y,10])
                                        //mvlr := mvlr + m_recebe[y,10]
                                NEXT
                                mind_tef := mind_cartao
                                */
                        ENDIF
                        SET CENTURY ON
/*
                        mlinha := '00000000'+;
                                '00000000'+; //2
                                '00000000'+; //3
                                LEFT(NETNAME(),10)+; //4
                                mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                mnum_ccf+; //6
                                operacoes+; //7
                                mforma_pag+SPACE(15-LEN(mforma_pag))+; //8
                                STRZERO(m_recebe[i,10]*100,13)+; //9
                                'N'+; //10
                                STRZERO(0,13)+; //11
                                DTOC(mdata_sis)
                        sr_getconnection():exec('INSERT INTO r7 ('+;  //VERIFICAR
                                'NUMERO_FAB  ,'+; //1
                                'MF_ADICIONAL,'+; //2
                                'MODELO_ECF  ,'+; //3
                                'NUMERO_USU  ,'+; //4
                                'COO         ,'+; //5
                                'CCF         ,'+; //6
                                'GNF         ,'+; //7
                                'MEIO_PAG    ,'+; //8
                                'VLR_PAGO    ,'+; //9
                                'IND_ESTORNO ,'+; //10
                                'VLR_ESTORNO ,'+; //11
                                'DATA_MOV    ,'+; //12
                                'CHV_CRIPT   ,'+; //13
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue('00000000')+','+; //1
                                sr_cdbvalue('00000000')+','+; //2
                                sr_cdbvalue('00000000')+','+; //3
                                sr_cdbvalue(LEFT(NETNAME(),10))+','+; //4
                                sr_cdbvalue(mdocumento)+','+; //5
                                sr_cdbvalue(mnum_ccf)+','+; //6
                                sr_cdbvalue(operacoes)+','+; //7
                                sr_cdbvalue(mforma_pag+SPACE(15-LEN(mforma_pag)))+','+; //8
                                sr_cdbvalue(STRZERO(m_recebe[i,10]*100,13))+','+; //9
                                sr_cdbvalue('N')+','+; //10
                                sr_cdbvalue(STRZERO(0,13))+','+; //11
                                sr_cdbvalue(mdata_sis)+','+; //12
                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                sr_cdbvalue(' ')+')',,.f.)
                                SET CENTURY OFF
*/
                NEXT
                y := mvlr_cartao := 0
                FOR y = 1 TO LEN(m_recebe)
                        IF m_recebe[y,1] # 'CT'
                                LOOP
                        ENDIF
                        cons_forma := {}
                        sr_getconnection():exec("SELECT * FROM mastcarta WHERE codigo = "+sr_cdbvalue(m_recebe[y,8]),,.t.,@cons_forma)
                        IF LEN(cons_forma) = 0
                                LOOP
                        ENDIF
                        mvlr_cartao := mvlr_cartao + m_recebe[y,10]
                NEXT
/*
                IF mvlr_cartao > 0
                        //mind_cartao := forma_pag(ALLTRIM(cons_forma[1,2]),mvlr_cartao)
                        SET CENTURY ON
                        mlinha := '00000000'+;
                                '00000000'+; //2
                                '00000000'+; //3
                                LEFT(NETNAME(),10)+; //4
                                mdocumento+SPACE(6-LEN(mdocumento))+; //5
                                mnum_ccf+; //6
                                operacoes+; //7
                                SUBSTR(cons_forma[1,2],1,15)+; //8
                                STRZERO(mvlr_cartao*100,13)+; //9
                                'N'+; //10
                                STRZERO(0,13)+; //11
                                DTOC(mdata_sis)
                        sr_getconnection():exec('INSERT INTO r7 ('+;  //VERIFICAR
                                'NUMERO_FAB  ,'+; //1
                                'MF_ADICIONAL,'+; //2
                                'MODELO_ECF  ,'+; //3
                                'NUMERO_USU  ,'+; //4
                                'COO         ,'+; //5
                                'CCF         ,'+; //6
                                'GNF         ,'+; //7
                                'MEIO_PAG    ,'+; //8
                                'VLR_PAGO    ,'+; //9
                                'IND_ESTORNO ,'+; //10
                                'VLR_ESTORNO ,'+; //11
                                'DATA_MOV    ,'+; //12
                                'CHV_CRIPT   ,'+; //13
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue('00000000')+','+; //1
                                sr_cdbvalue('00000000')+','+; //2
                                sr_cdbvalue('00000000')+','+; //3
                                sr_cdbvalue(LEFT(NETNAME(),10))+','+; //4
                                sr_cdbvalue(mdocumento)+','+; //5
                                sr_cdbvalue(mnum_ccf)+','+; //6
                                sr_cdbvalue(operacoes)+','+; //7
                                sr_cdbvalue(SUBSTR(cons_forma[1,2],1,15))+','+; //8
                                sr_cdbvalue(STRZERO(mvlr_cartao*100,13))+','+; //9
                                sr_cdbvalue('N')+','+; //10
                                sr_cdbvalue(STRZERO(0,13))+','+; //11
                                sr_cdbvalue(mdata_sis)+','+; //12
                                sr_cdbvalue(criptografia(mlinha,'C') )+','+; //26
                                sr_cdbvalue(' ')+')',,.f.)
                                SET CENTURY OFF
                        mind_tef := mind_cartao
                ENDIF
*/
                //NEXT
                IF mtef = '*'
                        LOOP
                ENDIF
                // Mensagem rodape do cumpom fiscal.
                /*
                SET CENTURY ON
                mcpf_cnpj := IF(! EMPTY(cons_cli[1,34]),TRANSFORM(cons_cli[1,34],'@@R 999.999.999-99'),IF(! EMPTY(cons_cli[1,32]),TRANSFORM(cons_cli[1,32],'@@R 99.999.999/9999-99'),''))
                mcpf_cnpj_cli := STRTRAN(mcpf_cnpj,'.','')
                mcpf_cnpj_cli := ALLTRIM(STRTRAN(mcpf_cnpj_cli,'-',''))
                mnome_cli := cons_cli[1,2]+'-'+cons_cli[1,3]
                mend_aux  := IF(! EMPTY(cons_cli[1,21]),ALLTRIM(cons_cli[1,22])+'-'+ALLTRIM(cons_cli[1,24])+' - '+ALLTRIM(cons_cli[1,25])+'-'+ALLTRIM(cons_cli[1,26]),'')
                mend_cli  := IF(! EMPTY(cons_cli[1,21]),RTRIM(cons_cli[1,21]),'')
                mlinha1 := ALLTRIM(mmd5)
                mlinha2 := ALLTRIM(mmd5)+m_qp+IF(! EMPTY(mnum_pv),'PV: '+STRZERO(mnum_pv,10)+m_qp,'')+;
                           IF(muf_firm = 'MG','MINAS LEGAL:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;
                           IF(muf_firm = 'PB' .AND. ! EMPTY(mcpf_cnpj_cli),'PARAIBA LEGAL - RECEITA CIDADA'+m_qp+'TORPEDO PREMIADO:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+' '+mcpf_cnpj_cli+m_qp,'')

                           //IF(muf_firm = 'RJ','CUPOM MANIA:'+m_cnpj+' '+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),7,2)+' '+ALLTRIM(TRANSFORM(iat(mtot_nota,2)*100,'99999999'))+m_qp,'')+;

                //IBR_COMANDO('ECF.IdentificaPAF',{mlinha1, mlinha2},,,.T. )
                IF m_indiv[1,45] = 'EPSON'
                        fim_fecha('Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte:IBPT'+m_qp+'HTI SISTEMAS 81'+mfone_hti+'-Aplic:'+mpaf_hti+' '+mpaf_ver+m_qp+;
                                ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                ELSE
                        fim_fecha('<n>Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte:IBPT</n>'+m_qp+'HTI SISTEMAS 81'+mfone_hti+'-Aplic:'+mpaf_hti+' '+mpaf_ver+m_qp+;
                                ALLTRIM(m_set[1,25]+m_set[1,26])+' - Vend.:'+STRZERO(mcod_vend,3)+IF(msem_cx = 1,' - S/C',''))
                ENDIF
                */
                //ATENCAO(ALLTRIM(mrefnfe) )
                mensagem('CRIANDO a Nota No. '+mdocumento)
                        //mArq := FCREATE('ENTNFE.TMP')
                sLinhas     :=  '[Identificacao]'                  + m_qp
                mdata_nfe := DTOC(mdata_sis)+' '+time()
                m_set[1,23] := STRTRAN(m_set[1,23],'-','')
                m_set[1,23] := STRTRAN(m_set[1,23],'.','')
                //cons_cli[1,21] := STRTRAN(cons_cli[1,21],'-','')
                //cons_cli[1,21] := STRTRAN(cons_cli[1,21],'.','')
                mindIEDest := '9'
                sLinhas := sLinhas + 'NaturezaOperacao= VENDA PARA DENTRO DO ESTADO'+ m_qp + ; //'Modelo='+ALLTRIM(mmodelo)                      + m_qp + ;
                                'Modelo=65'                      + m_qp + ;
                                'Serie=001'                      + m_qp + ;
                                'Codigo=0'                       + m_qp + ;
                                'Numero='+ALLTRIM(mdocumento)                   + m_qp + ;
                                'Emissao='+DTOC(mdata_sis)+' '+time()           + m_qp + ;
                                'Saida='+DTOC(mdata_sis)                     + m_qp + ; //                                'Tipo=1'                               + m_qp + ;
                                IF(mtp_vend = 'AP','FormaPag=1',IF(mtp_vend = 'AV','FormaPag=0','FormaPag=2'))   + m_qp +; //'Finalidade='+mtipo_nfe                         + m_qp + ;'idDest='+IF(cons_cli[1,25] = ALLTRIM(m_set[1,19]),'1','2')          + m_qp + ;'indFinal='+ALLTRIM(mindFinal)                  + m_qp + ;'indPress='+ALLTRIM(mindPress)                  + m_qp + ;
                                'Finalidade=1'                          + m_qp + ;
                                'idDest=1'                              + m_qp + ;
                                'indFinal=1'                            + m_qp + ;
                                'indPres=1'                             + m_qp + ;
                                'Tpimp=4'                                       + m_qp + ;
                                '[Emitente]'                                    + m_qp + ;
                                'CNPJ='+mcgc_firm                               + m_qp + ; //                                'CNPJ=03726794000163'+ m_qp + ;
                                'IE='+ALLTRIM(m_set[1,14])                    + m_qp + ;
                                'Razao='+ALLTRIM(m_set[1,2])                  + m_qp + ;
                                'Fantasia='+ALLTRIM(m_set[1,3])               + m_qp + ;
                                'Fone='+ALLTRIM(m_set[1,12])                  + m_qp + ;
                                'CEP='+ALLTRIM(m_set[1,11])                   + m_qp + ;
                                'Logradouro='+ALLTRIM(m_set[1,5])             + m_qp + ;
                                'Numero='+ALLTRIM(m_set[1,6])                 + m_qp + ;
                                'Complemento='+ALLTRIM(m_set[1,7])            + m_qp + ;
                                'Bairro='+ALLTRIM(m_set[1,8])                 + m_qp + ;
                                'CidadeCod='+ALLTRIM(mcod_cid_emit)           + m_qp + ;
                                'Cidade='+ALLTRIM(m_set[1,9])                 + m_qp + ;
                                'UF='+ALLTRIM(m_set[1,10])                      + m_qp + ;
                                'CRT='+mcrt                                         + m_qp + ;
                                '[Destinatario]'                                + m_qp + ;
                                IF( ! EMPTY(mcpf),'CNPJ='+ALLTRIM(mcpf),'CNPJ='+ALLTRIM(mcgc))+ m_qp+; //'CNPJ='+ALLTRIM(cons_cli[1,23])                 + m_qp +;
                                'indIEDest=9'                                   + m_qp
                                //'NomeRazao='+cons_cli[1,1]+' - '+ALLTRIM(cons_cli[1,2]) + m_qp  //+ ;
                mbase_icm := i := mtot_nota := 0
                FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,5] = 0
                                LOOP
                        ENDIF
                        mpr_fat := m_nota[i,5]
                        mpr_fat := ROUND(mpr_fat,2)
                        mcons_prod := {}
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(m_nota[i,6]),,.t.,@mcons_prod)
                        IF LEN(mcons_prod) = 0
                                atencao('Nao foi possivel encontrar este Produto: '+STR(m_nota[i,6],5))
                                LOOP
                        ENDIF
                        mtot_imposto := mtot_imposto + iat(((m_nota[i,3] * mpr_fat) * ((ver_ncm(mcons_prod[1,38])+18) / 100)),'A')
                        sLinhas := slinhas +    '[Produto'+STRZERO(i,3)+']'      + m_qp
                                                IF STRZERO(VAL(mcons_prod[1,39]),2) = '60'
                                                        sLinhas := slinhas + 'CFOP=5405' + m_qp
                                                ELSE
                                                        sLinhas := slinhas + 'CFOP=5102' + m_qp
                                                ENDIF
                                                sLinhas := slinhas + 'Codigo='+STR(mcons_prod[1,1],6)+ m_qp + ;
                                                'Descricao='+ALLTRIM(m_nota[i,8])+ m_qp + ;
                                                IF(! EMPTY(ALLTRIM(mcons_prod[1,40])),'cEAN='+ALLTRIM(mcons_prod[1,40]),'cEAN=SEM GTIN')+ m_qp +;
                                                IF(! EMPTY(ALLTRIM(mcons_prod[1,40])),'cEANTrib='+ALLTRIM(mcons_prod[1,40]),'cEANTrib=SEM GTIN')+ m_qp +;
                                                'NCM='+ALLTRIM(mcons_prod[1,38]) + m_qp +;
                                                'Unidade='+ALLTRIM(mcons_prod[1,7])+ m_qp + ;
                                                'Quantidade='+STRTRAN(ALLTRIM(TRANSFORM(m_nota[i,3],'999,999.999')),',','')+ m_qp + ;
                                                'ValorUnitario='+ALLTRIM(TRANSFORM(iat(mpr_fat,'A'),STRTRAN(ALLTRIM('999,999.99'),',','')))+ m_qp + ;
                                                'ValorTotal='+ALLTRIM(TRANSFORM(ROUND(mpr_fat*m_nota[i,3],2),STRTRAN(ALLTRIM('999,999.99'),',','')))+ m_qp + ;
                                                '[ICMS'+STRZERO(i,3)+']'+ m_qp + ;
                                                'Origem=1'+ m_qp        //+SUBSTR(m_nota[i,35],1,1)+ m_qp
                                                mtot_nota := mtot_nota + ROUND(mpr_fat*m_nota[i,3],2)

                                                IF m_set[1,34] = 'S'
                                                        sLinhas := slinhas +'CSOSN='+ALLTRIM(STR(VAL(m_nota[i,1])))+ m_qp +;
                                                                            'ModalidadeST=4' + m_qp
                                                                            //'pCredSN=5'+ m_qp+;
                                                                            //'vCredICMSSN='+ALLTRIM(TRANSFORM(MvCredICMSSN,STRTRAN(ALLTRIM(m_set[1,98]),',','')))+ m_qp
                                                        mbase_icm := mbase_icm + 0
                                                        mtot_icm := mtot_icm + 0
                                                ELSE
                                                        sLinhas := slinhas + IF(LEN(ALLTRIM(m_nota[i,1])) > 3,'CST='+STRZERO(VAL(m_nota[i,1]),3),'CST='+STRZERO(VAL(m_nota[i,1]),2))+ m_qp
                                                        sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                                'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,4],'999.99'))+ m_qp + ;
                                                                                'vICMS='+ALLTRIM(TRANSFORM(iat((mpr_fat*m_nota[i,3]),'A') * (m_nota[i,4]/100),'999999.99'))+ m_qp
                                                ENDIF
                                                mbase_fcp := 0
                NEXT
                //mtot_nota := mtot_nota  - (mpis+mconfis+micms_desc)
                sLinhas := slinhas + '[Total]'+ m_qp
                sLinhas := slinhas + 'BaseICMS='+ALLTRIM(TRANSFORM(mbase_icm,'999999.99'))+ m_qp + ;
                        'ValorICMS='+ALLTRIM(TRANSFORM(mtot_icm,'999999.99'))+ m_qp +; //                        'ValorFrete='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                        'ValorProduto='+ALLTRIM(TRANSFORM(mtot_nota,'999999.99'))+ m_qp + ;
                        'ValorNota='+ALLTRIM(TRANSFORM(iat(mtot_nota,'A'),'999999.99'))+ m_qp
                sLinhas := slinhas +    '[Transportador]'+ m_qp + ;
                                        'modFrete=9'+ m_qp

                y:=0
                FOR y = 1 TO LEN(m_recebe)
                        sLinhas := slinhas +    '[pag'+STRZERO(Y,3)+']'+ m_qp + ;
                                                'tpIntegra=2'+ m_qp
                        IF m_recebe[y,1] = 'CH'
                                sLinhas := slinhas + 'tpag=02'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10],'A'),'999999.99'))+ m_qp
                        ELSEIF m_recebe[y,1] = 'CT'
                                sLinhas := slinhas + 'tpag=03'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10],'A'),'999999.99'))+ m_qp
                        ELSEIF m_recebe[y,1] = 'DU'
                                sLinhas := slinhas + 'tpag=05'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10],'A'),'999999.99'))+ m_qp
                        ELSE
                                sLinhas := slinhas + 'tpag=01'+ m_qp + ;
                                                      'vpag='+ALLTRIM(TRANSFORM(iat(m_recebe[y,10],'A'),'999999.99'))+ m_qp
                        ENDIF
                NEXT
                sLinhas := slinhas +    '[DadosAdicionais]'+ m_qp + ;
                                        'Complemento= Op.:'+cod_operado+' - Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte: IBPT '+ m_qp +;
                                        '[infRespTec]'+ m_qp + ;
                                        'CNPJ='+mcnpj_hti+ m_qp + ;
                                        'xContato=Jose Helio de Araujo Beltrao Junior'+ m_qp + ;
                                        'email=helioaraujobeltrao@gmail.com'+ m_qp + ;
                                        'fone=081992816878'
                mretorno := ''
                mretorno := IBR_comando('NFE.CriarNFe',{sLinhas},,3)
                mensagem('CRIANDO A NFE No. '+mretorno)
                IF EMPTY(mretorno)
                        RETURN NIL
                ELSE
                        //mretorno :=ALLTRIM(SUBSTR(mretorno,LEN(mretorno)-51))
                        mretorno :=ALLTRIM(SUBSTR(mretorno,4))
                ENDIF
                //atencao(mretorno+' A')

                //mretorno := ALLTRIM(m_cfg[16])+mretorno
                //atencao(mretorno+' B')

                mensagem('ASSINANDO a Nota No. '+mretorno)
                IF IBR_comando('NFE.AssinarNFe',{mretorno},,3) = ' '
                        RETURN NIL
                ENDIF
                mensagem('VALIDANDO a Nota No. '+mretorno)
                IF IBR_comando('NFE.ValidarNFe',{mretorno},,3) = ' '
                        RETURN NIL
                ENDIF
                mensagem('ENVIANDO a Nota No. '+mretorno)
                enviar_nfe(mretorno)
                // mensagem('IMPRIMINDO O DANFE No. '+mretorno)
                // mret := IBR_comando('NFE.ImprimirDanfe('+mretorno+')',,100)
                //atencao(mret)
                SR_BEGINTRANSACTION()
                TRY

                IF ! EMPTY(mchnfe)
                                ccomm := "UPDATE sactotnt SET chnfe = " + sr_cdbvalue(mchnfe)
                                ccomm := ccomm +",camnfe = "+ sr_cdbvalue(mretorno)+" WHERE documento = " + sr_cdbvalue('NF'+mdocumento)
                                ccomm := ccomm + " AND serie = " + sr_cdbvalue(mserie_not)
                                ccomm := ccomm + " AND emissao = " + sr_cdbvalue(mdata)
                                ccomm := ccomm + " AND cod_cli = " + sr_cdbvalue(STRZERO(mcod_cli,5))
                        IF msai_ent = 'S'
                                ccomm := ccomm + " AND ent_sai = 'S'"
                        ELSEIF msai_ent = 'E'
                                ccomm := ccomm + " AND ent_sai = 'E'"
                        ENDIF
                        sr_getconnection():exec(ccomm,,.f.)
                ENDIF
                sr_getconnection():exec('COMMIT',,.f.)
                CATCH e
                        SR_ENDTRANSACTION()
                END

                mtot_imposto := 0
                SET CENTURY OFF
                IF m_flag_f = 'T'
                        //ATENCAO(NumeroCupom+' - '+mind_tef+' - '+transform(mvalor,'999,999.99'))
                        PAC00TEF(NumeroCupom,mind_tef,mvalor)
                ENDIF
        IF mtroco > 0
                INKEY(3)
                RESTSCREEN(00,00,24,79,mbox_rece)
        ENDIF
        IF ! EMPTY(mdesconto)
                sr_getconnection():exec("UPDATE sacmovnt SET vl_fatura = vl_fatura - (vl_fatura * "+sr_cdbvalue(mdesc_u/100)+") WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
        ENDIF
        IF EMPTY(mpago) .AND. msem_cx = 0
                mensagem("Atualizando o Arquivo de CAIXA....")
                i = 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1])
                                LOOP
                        ENDIF
                        m_recebe[i,10] := iat(m_recebe[i,10],'A')
                        mcampo_arq := 'data      ,';//2
                                      +'tipo      ,';//3
                                      +'tipo_comp ,';//4
                                      +'nota      ,';//5
                                      +'cod_cli   ,';//6
                                      +'cod_vend  ,';//7
                                      +'cod_opera ,';//8
                                      +'hora      ,';//9
                                      +'valor_com ,';//10
                                      +'venci     ,';//12
                                      +'valor     ,';//13
                                      +'num_ban   ,';//14
                                      +'cod_ct    ,';//15
                                      +'c_s       ,';//16
                                      +'num_dup   ,';//17
                                      +'documento ,';//18
                                      +'num_cup    ' //20
                        IF m_recebe[i,1] = 'DN'
                                mnum_dup := STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)
                                mdup_num := '99999999'
                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'CH'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'CT'
                                mnum_dup := m_recebe[i,5]
                                mdup_num := m_recebe[i,9]
                        ELSEIF m_recebe[i,1] = 'FI'
                                mnum_dup := m_recebe[i,11]
                                mdup_num := m_recebe[i,11]
                        ENDIF
                        aret:={}
                        cComm  := "INSERT INTO mastcaixa ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                        cComm  := SR_SQLCodeGen(apCode,;
                               {mdata_sis                              ,;//2
                                m_recebe[i,1]                          ,;//3
                                m_recebe[i,2]                          ,;//4
                                IF(EMPTY(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv)),'CP'+mdocumento,'PD'+STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)),;//5
                                '00001'                    ,;//6
                                STRZERO(mcod_vend,3)                   ,;//7
                                cod_operado                            ,;//8
                                TIME()                                 ,;//9
                                iat(m_recebe[i,10],'T',3)              ,;//10
                                m_recebe[i,6]                          ,;//12
                                iat(m_recebe[i,10],'T',3)              ,;//13
                                m_recebe[i,3]                          ,;//14
                                m_recebe[i,8]                          ,;//15
                                'C'                                    ,;//16
                                mnum_dup                               ,;//17
                                mdup_num                               ,;//18
                                mdocumento                             ;//20
                                },sr_getconnection():nsystemid)
                                sr_getconnection():exec(ccomm,,.f.)
                NEXT
                mensagem('Atualizando o DUPLICATAS....')
                c := i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                        mcampo_arq := 'emissao         ,';//2
                                      +'tipo            ,';//3
                                      +'fornec          ,';//5
                                      +'cliente         ,';//6
                                      +'venc            ,';//7
                                      +'operador        ,';//11
                                      +'vendedor        ,';//12
                                      +'num_ped         ,';//13
                                      +'mov_cx          ,';//16
                                      +'c_cpfcnpj       ,';//17
                                      +'numero          ,';//18
                                      +'duplicata       ,';//19
                                      +'valor_dup       ,';//20
                                      +'valor           ,';//21
                                      +'agencia         ,';//22
                                      +'c_c             ,';//23
                                      +'datpag          ,';//24
                                      +'vlpago          ,';//25
                                      +'pago            ,';//26
                                      +'banco           '//27
                        IF m_recebe[i,1] = 'DN'
                                mnum_dup := STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)
                        ELSEIF m_recebe[i,1] = 'CH'
                                mnum_dup := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                                mnum_dup := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'FI'
                                mnum_dup := m_recebe[i,11]
                        ELSEIF m_recebe[i,1] = 'CT'
                                mnum_dup := m_recebe[i,9]
                        ENDIF
                                                                                        //  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
                        cComm  := "INSERT INTO mastdupr ("+mcampo_arq+",sr_deleted) VALUES (?,?,?,?,?,?,?,?,?,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,? ,' ')"
                        apCode := SR_SQLParse( cComm, @nErr, @nPos )
                        cComm  := SR_SQLCodeGen(apCode,;
                               {mdata_sis                              ,;//2
                                m_recebe[i,1]                          ,;//3
                                '00001'                                ,;//5
                                'CONSUMIDOR'                                ,;//6
                                m_recebe[i,6]                          ,;//7
                                cod_operado                            ,;//11
                                STRZERO(mcod_vend,3)                   ,;//12
                                STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)                    ,;//13
                                'C'                                    ,;//16
                                '.'                                    ,;//17
                                IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3]),;//18
                                mnum_dup                                ,;//19
                                m_recebe[i,10]                          ,;//20
                                IF(m_recebe[i,1] = 'CT',m_recebe[i,10] - (m_recebe[i,10] * (m_recebe[i,16] / 100)),m_recebe[i,10]),;//21
                                IF(! EMPTY(m_recebe[i,13]),m_recebe[i,13],'.'),;//22
                                IF(! EMPTY(m_recebe[i,14]),m_recebe[i,14],'.'),;//23
                                IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),m_recebe[i,6],CTOD('  /  /  ')),;//24
                                IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),m_recebe[i,10],0),;//25
                                IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis),'B',' '),;//26
                                IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR','C',' '),;//27
                                },sr_getconnection():nsystemid)
                                sr_getconnection():exec(ccomm,,.f.)
                NEXT
                i := 0
                mensagem('Atualizando o MOVIMENTO....')
                mensagem('Atualizando o CONTA A PAGAR....')
                c := i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF EMPTY(m_recebe[i,1]) .OR. EMPTY(VAL(m_recebe[i,17]))
                                LOOP
                        ENDIF
                        sr_getconnection():exec('INSERT INTO mastdupp (';//1
                                        +'tipo      ,';//2
                                        +'numero    ,';//3
                                        +'duplicata ,';//4
                                        +'valor_dup ,';//5
                                        +'tip_for   ,';//6
                                        +'fornec    ,';//7
                                        +'cliente   ,';//8
                                        +'emissao   ,';//9
                                        +'venc      ,';//10
                                        +'datpag    ,';//11
                                        +'valor     ,';//12
                                        +'vlpago    ,';//13
                                        +'banco     ,';//14
                                        +'pago      ,';//15
                                        +'operador  ,';//16
                                        +'num_ped   ,';//17
                                        +'obs       ,';//18
                                        +'sr_deleted)       '+;
                                        ' VALUES ('+;
                                        sr_cdbvalue('PA'                                              )+','+; //2
                                        sr_cdbvalue(m_recebe[i,8]                                     )+','+; //3
                                        sr_cdbvalue(m_recebe[i,9]                                     )+','+; //4
                                        sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),'T',2))+','+; //5
                                        sr_cdbvalue(m_recebe[i,18]                                    )+','+; //6
                                        sr_cdbvalue(m_recebe[i,17]                                    )+','+; //7
                                        sr_cdbvalue(IF(v_fornece(VAL(m_recebe[i,17])),forn->razao,'DESCONTO DO CARTAO DE CREDITO'))    +','+; //8
                                        sr_cdbvalue(mdata_sis                                         )+','+; //9
                                        sr_cdbvalue(mdata_sis                                         )+','+; //10
                                        sr_cdbvalue(mdata_sis                                         )+','+; //11
                                        sr_cdbvalue(iat((m_recebe[i,10] * (m_recebe[i,16] / 100)),'T',2))+','+; //12
                                        sr_cdbvalue(ROUN((m_recebe[i,10] * (m_recebe[i,16] / 100)),2) )+','+; //13
                                        sr_cdbvalue('C'                                               )+','+; //14
                                        sr_cdbvalue('B'                                               )+','+; //15
                                        sr_cdbvalue(cod_operado                                       )+','+; //16
                                        sr_cdbvalue(STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)                               )+','+; //17
                                        sr_cdbvalue('Pedido:'+STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6)+' DESCONTO DE CARTAO')+','+; //18
                                        sr_cdbvalue(' ')+')',,.f.)
                NEXT
                /*
                mensagem('Atualizando o CREDITO....')
                i := 0
                FOR i = 1 TO LEN(m_recebe)
                        IF m_recebe[i,1] = 'CR'
                                cons_cred := {}
                                sr_getconnection():exec("SELECT * FROM saccred WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5]),,.t.,@cons_cred)
                                IF m_recebe[i,10] = cons_cred[1,19]
                                        mcomando := "UPDATE saccred SET datpag = "+sr_cdbvalue(mdata_sis)
                                        mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                        mcomando := mcomando + ",pago = 'B'"
                                        mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                        mcomando := mcomando + ",conta = '*'"
                                        mcomando := mcomando + ",mov_cx = 'C'"
                                        mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                        sr_getconnection():exec(mcomando,,.f.)
                                ELSE
                                        mcomando := "UPDATE saccred "
                                        mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                        mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                        mcomando := mcomando + ",pago = 'B'"
                                        mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                        mcomando := mcomando + ",conta = '*'"
                                        mcomando := mcomando + ",mov_cx = 'C'"
                                        mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                        sr_getconnection():exec(mcomando,,.f.)

                                        cComm  := "INSERT INTO saccred (empresa,tipo,duplicata,valor_dup,"
                                        ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
                                        ccomm  := ccomm + "num_ped,operador,obs,conta,sr_deleted)"
                                        ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue(m_recebe[i,5])
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(m_recebe[i,10],'T',2))+","+sr_cdbvalue(STRZERO(mcod_cli,5))+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                        ccomm  := ccomm + ","+sr_cdbvalue(iat(cons_cred[1,19]-m_recebe[i,10],'A'))+","+sr_cdbvalue(cons_cred[1,30])+","+sr_cdbvalue(STRZERO(IF(! EMPTY(mnum_ped),mnum_ped,mnum_pv),6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(cons_cred[1,46])+",'*',' ')"
                                        sr_getconnection():exec(ccomm,,.f.)
                                ENDIF
                        ENDIF
                NEXT
                */
        ENDIF
        mpago := ' '
        mabrir_cp := m_flag_f := " "
        ASIZE(m_codigo,0)
        ASIZE(m_merc,0)
        ASIZE(m_matriz,0)
        ASIZE(m_recebe,0)
        ASIZE(m_desc,0)
        ASIZE(m_nota,0)
        m_flag :=0
        mdocumento := mnum_ecf:=SPACE(8)
        CLEAR GETS
        EXIT
ENDDO
WVW_RESTSCREEN(,0,0,50,120,tela_fecha,.T.)
//wvw_lclosewindow()
RETURN NIL
*********************** FIM ***************************
FUNCTION c_prod()
MEMVAR mcod_bc,mmerc,mcod_merc
CLEAR GETS
op_tela(10,10,14,70," CONSULTA DE PRODUTO ")
WHILE .T.
        limpa(00,00,33,100)
        setcor(1)
        DEVPOS(01,01);DEVOUT("Codigo:")
        mensagem("Digite codigo ou Descricao - <ESC>Abandonar")
        mcod_bc := SPACE(14)
        mcod_merc := 0
        @ 01,09 GET mcod_bc PICT "@!"     //VALID lim_get() WHEN men_get(lba-09,2,"Informe o Cod.do produto <ENTER>descricao <F4>pesquisar <ALT+A>Alterar Produto")
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mcod_bc)
                @ 01,17 GET mmerc PICT "@!"               //VALID lim_get() WHEN men_get(lba-09,13,"<Digite descricao mercadoria> <ENTER>retornar <F4>pesquisar <ALT+A>Alterar Produto")
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
        ENDIF
        IF  EMPTY(mmerc)
                LOOP
        ENDIF
        IF ! EMPTY(mcod_bc)
                IF LEN(RTRIM(mcod_bc)) > 5
                        *************
                        SELE("merc");ORDSETFOCUS(6)
                        *************
                        SEEK mcod_bc
                        IF ! FOUND()
                                atencao("Codigo de BARRA nao cadastrado")
                                LOOP
                        ENDIF
                        mcod_merc := VAL(mcod_bc)
                ELSE
                        mcod_merc := VAL(mcod_bc)
                        *************
                        SELE("merc");ORDSETFOCUS(1)
                        *************
                        SEEK mcod_merc
                        IF ! FOUND()
                                atencao("Codigo da mercadoria nao cadastrado")
                                LOOP
                        ENDIF
                ENDIF
        ELSEIF ! EMPTY(mmerc)
                *************
                SELE("merc");ORDSETFOCUS(3)
                *************
                SEEK RTRIM(mmerc)
                IF ! FOUND()
                        atencao("Esta mercadoria nao cadastrada")
                        LOOP
                ENDIF
                IF merc->cod_merc = 0
                        WHILE ! EOF() .AND. merc->cod_merc = 0
                                SKIP
                        ENDDO
                ENDIF
                IF EOF() .OR. merc->cod_merc = 0
                        atencao("Mercadoria nao cadastrada")
                        LOOP
                ENDIF
                f4_merc()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        setcor(3)
        DEVPOS(01,09);DEVOUT(STR(merc->cod_merc,5)+"-"+merc->merc)
        DEVPOS(02,01);DEVOUT("Preco: "+TRANSFORM(merc->pr_venda,"999,999.99"))
        DEVPOS(03,01);DEVOUT("Pressione qualquer tecla p/ continuar")
        INKEY(0)
        CLEAR GETS
        setcor(1)
ENDDO
CLEAR GETS
wvw_lclosewindow()
RETURN NIL
************************ F I M **************************
//FUNCTION sem_cx
***************
//msem_cx := 1
//RETURN NIL