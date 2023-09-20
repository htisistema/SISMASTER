#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
#INCLUDE "COMMCTRL.CH"
//#INCLUDE "HTIMENU.CH"
*******************************
* RECEBIMENTO DE TP's
*******************************
MEMVAR getlist

FUNCTION mast30(mnum)
***************
LOCAL MPRG:='MAST30',mmodulo:='RECEBIMENTOS DO CAIXA',;
      opcao,lci:=0,cci:=0,lba:=29,cba:=75,i,point,;
      mopcao,li:=0,ci:=0,lb:=31,cb:=72,mdinheiro,mn_dup,mn_trans,mvencimento,mt_pag,;
      mn_cupom,mvalor,mn_fin,mtot_ipi,mbox_rece,mcorrente,mcpfcnpj,;
      m_parcela:={},mqtd_parc:=0,mtraco := REPLI('=',60),mtela_aut,;
      mvl_vend,mtot_icm,mtipo_pg,mnome,;
      mintevalo:=0,mvlr_cred:=0,;
      mtipo,mnumero_doc:= ' ',mnum_dup:=' ',mdup_num:=' ',;
      mvlr_credcheq:=0,mcred_cheq:=' ',;
      mcredito_aux:=0,achou:=0,y:=0,cons_cli:={},;
      npos,cComm,m_param:={},mdez_perc:=''

MEMVAR nivel_acess,mdata_sis,cod_operado,mcgc_firm,memp_resa,mend_firm,mfone_firm,;
       mcid_firm,minsc_firm

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,m_recebe:={},;
        m_codigo:={},m_desc:={},mdesconto,tela,mreceb,;
        mcod_cli,mcliente,mnome_vend,mperc,mcgc,mcpf,mcod_vend,mdocumento,;
        mnum_mesa,minsc,mtp_vend,mtot_desc,mcod_oper,mlib:=' ',;
        mtot_verif:= 0,m_alt:={},mdiferenca,mtot_nota,mqtd_doc:=0,mqtd_dias:=0,;
        mdesc_cx:=0,mdesc_perc:=0,mcom_oper,mfornece:='',;
        mtipo_imp,mimp_tipo:=2,marq:=SPACE(35),mcod_emp:='   ',mcredito,mn_cred:=SPACE(8),;
        ali:='ped_s',mperc_com1,;
        mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mdata_ped,mresta,mvlr_pg,mduplicata,;
        mvalor_dup,mtip_cli,mobs,mdia_venc:=0,mdata_v,mcod_cart,cons_ped:={},aret:={},mtipo_imp,mporta_imp,mquantd,;
        magencia,mc_c,mn_banco,mn_cheque,mtipo_lanca:='M',nulo := 'NULL',mnota:=''

IF ! ver_nivel(mprg,mmodulo,'13456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
CLEAR GETS
mreceb := 'R'
setcor(1)
op_tela(00,00,50,120,memp_resa+SPACE(50)+'RECEBIMENTO DO CAIXA',,1)
//ver_ven(cod_operado)
mnome_vend := sen->snome
mlib := ' '
mdeb_cred := ' '
WHILE .T.
        limpa(00,00,50,120)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        IF mnum <> NIL
                mnum_mesa := mnum
        ELSE
                mnum_mesa := 0
        ENDIF
        //setcor(1)
        m_nummesa :={}
        SET INTEN ON
        mtot_nota := mdesconto := mperc := mcod_cli :=;
        mvl_vend := mcod_vend := mcod_oper := mperc_comissao := mtot_comissao := ;
        mprazo_cart := mdesc_cart := mtot_icm := mdinheiro := mcod_cart := ;
        mvalor := mtot_desc := mtot_verif := mtot_ipi := mdiferenca := ;
        f := mqtd_doc := mqtd_dias := mperc_com1 := mvlr_tab := mvlr_credcheq := 0

        mlib := mtipo_pag := mt_pag := mtelemark := mcom_sem := mcred_cheq:= SPACE(1)
        mtp_vend := SPACE(2)
        mn_dup := mn_trans := mn_cupom := mn_cred  := SPACE(8)
        menvelope := SPACE(10)
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mnome_vend := SPACE(30)
        mcliente = SPACE(40)
        opcao = 'S'
        mtipo_comp := 'AV'
        mvencimento := CTOD(' /  /  ')
        i = 1
        m_recebe  :={}
        m_parcela :={}
        mensagem('Preencha os Campos - <F1> Ajuda - <ESC> p/Retornar - <-1> Baixar Individual Documento')
        DEVPOS(li,ci+1);DEVOUT('No.Mesa...:')
        DEVPOS(li,ci+25);DEVOUT('Data:')
        DEVPOS(li,ci+43);DEVOUT('Emissao:')
        DEVPOS(li,ci+63);DEVOUT('Vend.:')
        DEVPOS(li+1,ci+1);DEVOUT('Cliente:')
        DEVPOS(li+2,ci+1);DEVOUT('CPF.:')
        DEVPOS(li+2,ci+31);DEVOUT('CNPJ:')
        DEVPOS(li+3,ci+1);DEVOUT('Observacao:')
        @ li+5,ci TO li+5,cb
        DEVPOS(li+11,ci+1);DEVOUT('T O T A L  R$:')
        //@ li+12,ci TO li+12,cb
        @ li+15,ci TO li+15,cb
        DEVPOS(li+16,ci+1);DEVOUT('Total RECEBIDO......R$:')
        DEVPOS(li+16,ci+40);DEVOUT('a RECEBER R$:')
        @ li+17,ci TO li+17,cb
        botao(42,01,46,98,,,'*')
        botao(li+1,ci+74,li+46,ci+120,,' P R O D U T O S   D O   P E D I D O')
        setcor(1)
        IF mnum <> NIL
                mnum_mesa := mnum
        ELSE
                mnum_mesa := 0
        ENDIF
        WHILE .T.
                //mnum_mesa :=0
                @ li,ci+12 GET mnum_mesa PICT '999999' //VALID lim_get() WHEN men_get(2,2,'Digite o numero  - <ESC>p/abandonar')
                READ
        	IF LASTKEY() = 27
                        SET KEY 281 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF EMPTY(mnum_mesa)
                        @ li,ci+12 GET mnum_mesa PICT '999999' WHEN mnum_mesa = 0          // VALID lim_get()        //.AND. men_get(li+2,ci+12,'Informe o No.do PEDIDO que deseja fazer o recebimento ou <ENTER> p/No.ENVELOPE - <F1> Consulta pedidos PENDENTES - <ESC>p/abandonar')
                        READ
                        IF EMPTY(mnum_mesa)
                                EXIT
                        ENDIF
                ENDIF
        	IF LASTKEY() = 27
                        SET KEY 281 TO
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                cons_ped:={}
                sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(ALLTRIM(STR(mnum_mesa)))+" AND tipo = "+sr_cdbvalue(mtipo_lanca) +" AND dat_pag IS NULL",,.t.,@cons_ped)
                IF LEN(cons_ped) = 0
                        atencao('Mesa nao encontrada ou nao estar ABERTA... !!!')
                        LOOP
                ENDIF
                IF ASCAN(m_nummesa,mtipo_lanca+STRZERO(mnum_mesa,4)) > 0
                        atencao('Mesa ja foi incluida neste FECHAMENTO... !!!')
                        LOOP
                ENDIF
                AADD(m_nummesa,mtipo_lanca+STRZERO(mnum_mesa,4))
                ccomm := "SELECT cod_prod,descri,sum(qtd),preco FROM mastmov WHERE ("
                i:=0
                FOR i = 1 TO LEN(m_nummesa)
                        ccomm := ccomm + "num_local = "+sr_cdbvalue(ALLTRIM(STR(VAL(SUBSTR(m_nummesa[i],2)))))+" AND tipo = "+sr_cdbvalue(SUBSTR(m_nummesa[i],1,1))
                        IF i < LEN(m_nummesa)
                                ccomm := ccomm + " OR "
                        ENDIF
                NEXT
                ccomm := ccomm + ") AND dat_pag IS NULL GROUP BY cod_prod,cod_prod,descri,descri,preco,preco"
                //ATENCAO(CCOMM)
                sr_getconnection():exec(ccomm,,.t.,@cons_ped)
                i:=f:=0
                FOR i = 1 TO LEN(cons_ped)
                        mtot_nota := mtot_nota + (cons_ped[i,3] * cons_ped[i,4])
                        SUB_BANNER(li+6,ci+18,TRANSFORM(mtot_nota,'999,999.99'),1)
                        setcor(3)
                        @ li+2+f,ci+75 SAY cons_ped[i,1]
                        @ li+2+f,ci+COL()+1 SAY cons_ped[i,2]
                        @ li+2+f,ci+COL()+2 SAY 'M'+STRZERO(mnum_mesa,6)

                        f++
                        @ li+2+f,ci+75 SAY cons_ped[i,3] PICT '@E 9,999.99'
                        @ li+2+f,COL()+2 SAY 'X'
                        @ li+2+f,COL()+2 SAY cons_ped[i,4] PICT '@E 999,999.99'
                        @ li+2+f,COL()+2 SAY '='
                        @ li+2+f,COL()+2 SAY cons_ped[i,4]*cons_ped[i,3] PICT '@E 999,999.99'
                        IF f > 35
                                SCROLL(li+2,ci+75,li+44,ci+120,1)
                        ELSE
                                f++
                        ENDIF
                NEXT
                mnota := cons_ped[1,1]
                DEVPOS(li+45,ci+76);DEVOUT('Quantidade de Itens: '+TRANSFORM(LEN(cons_ped),'9999'))
                setcor(1)
                mnum_mesa :=0
        ENDDO
        cons_ped:={}
        sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(ALLTRIM(STR(VAL(SUBSTR(m_nummesa[1],2)))))+" AND tipo = "+sr_cdbvalue(SUBSTR(m_nummesa[1],1,1))+' AND dat_pag IS NULL',,.t.,@cons_ped)
        IF LEN(cons_ped) = 0
                atencao('Mesa nao encontrada ou nao estar ABERTA... !!!')
                LOOP
        ENDIF
        mcod_cli := VAL(cons_ped[1,9])
        mcod_vend:= VAL(cons_ped[1,10])
        setcor(3)
        DEVPOS(li,ci+31);DEVOUT(mdata_sis)
        DEVPOS(li,ci+52);DEVOUT(cons_ped[1,3])
        DEVPOS(li,ci+68);DEVOUT(STRZERO(mcod_vend,3))
        setcor(1)
        ven(@mcod_vend)
        mcod_cli := VAL(m_set[1,20])
        @ li+1,ci+9 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,li+1,ci+15)
        @ li+2,ci+6 GET mcpf PICT '@@R 999.999.999-99' VALID IF(mcpf = SPACE(11),.T.,ver_cpf(mcpf)) WHEN mcod_cli = 0          //.AND. mnum = NIL
        @ li+2,ci+37 GET mcgc PICT '@@R 99.999.999/9999-99' VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11)       //.AND. mnum = NIL
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        ver_cli(mcod_cli,li+1,ci+15)
        cons_cli:={}
        sr_getconnection():exec("SELECT * FROM mastcli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)),,.t.,@cons_cli)
        IF LEN(cons_cli) = 0
                atencao('Nao foi possivel encontrar este cliente...')
                LOOP
        ENDIF
	mcliente := cons_cli[1,3]
        setcor(3)
        DEVPOS(li+1,ci+09);DEVOUT(STRZERO(mcod_cli,5))
        DEVPOS(li+1,ci+15);DEVOUT(mcliente)
        DEVPOS(li+2,ci+6);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(li+2,ci+37);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        //DEVPOS(li+3,ci+13);DEVOUT(cons_ped[1,86])
        setcor(1)
        IF cons_cli[1,24] = 'S'
                atencao('Este CLIENTE ESTA COM CREDITO BLOQUEADO PELO SISTEMA EM '+DTOC(cons_cli[1,24]))
                LOOP
        ENDIF

        mdez_perc:=''
        //IF m_set[1,24] = ' '
                IF mensagem1('Deseja receber os 10%:',m_set[1,24],'S,N') = 'S'  //.AND. m_set[1,24] = ' '
                        mtot_nota := mtot_nota * 1.10
                        mdez_perc:='*'
                ENDIF
        //ENDIF
        SUB_BANNER(li+6,ci+18,TRANSFORM(mtot_nota,'999,999.99'),1)
        i:=0
        @ li+5,ci TO li+5,cb
        @ li+12,ci TO li+12,cb
        IF mcod_cli <> 0
                mcpf := cons_cli[1,23]
                mcgc := cons_cli[1,21]
                minsc := cons_cli[1,22]
        ENDIF
        mdiferenca := ROUND(mtot_nota - mtot_verif,2)
        m_alt :={}
        mn_banco := SPACE(3)
        magencia := SPACE(8)
        mc_c := SPACE(13)
        mcorrente := SPACE(35)
        mcpfcnpj := SPACE(14)
        mtipo_pg := mcredito := mvlr_cred := 0
        //mcredito := cli_dup(mcod_cli,'*')
        IF mcredito > 0
                setcor(3)
                DEVPOS(li+4,ci+1);DEVOUT('CREDITO DO CLIENTE R$:'+TRANSFORM(mcredito,'999,999.99')+' ')
                setcor(1)
                mtipo_pg := 7
        ENDIF
        WHILE .T.
                setcor(3)
                SUB_BANNER(li+6,ci+18,TRANSFORM(mtot_nota,'999,999.99'),1)
                @ li+5,ci TO li+5,cb
                @ li+12,ci TO li+12,cb
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mn_cheque := SPACE(6)
                mvencimento := CTOD('  /  /  ')
                mn_dup := mn_trans := mn_fin := mn_cred  := SPACE(8)
                mt_pag   := 'C'
                mdinheiro := mcod_cart := mvalor := 0
                mn_cupom := SPACE(7)
                mopcao := SPACE(1)
                botao1(li+18,ci+1,li+20,ci+12)
                botao1(li+18,ci+13,li+20,ci+22)
                botao1(li+18,ci+23,li+20,ci+35)
                botao1(li+18,ci+36,li+20,ci+45)
                setcor(1)
                @ li+19,ci+2 PROMPT '1-Dinheiro'
                @ li+19,ci+14 PROMPT '2-Cheque'
                @ li+19,ci+24 PROMPT '3-Duplicata'
                @ li+19,ci+37 PROMPT '4-Cartao'
                SET INTEN ON
                MENU TO mtipo_pg
                setcor(1)
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                mbox_rece := SAVESCREEN(00,00,34,79)
                //DINHEIRO
                IF mtipo_pg = 1
                        botao(li+22,ci+1,li+24,ci+40,,' DINHEIRO ')

                        DEVPOS(li+23,ci+2);DEVOUT('Dinheiro............R$:')
                        @ li+23,ci+25 GET mdinheiro PICT '999,999,999.99' VALID IF(mdinheiro<0,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                               RESTSCREEN(00,00,34,79,mbox_rece)
                               LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2             // CHEQUES
                        mvencimento := mdata_sis
                        mt_pag := 'B'
                        botao(li+22,ci+02,li+30,ci+77,,' CHEQUES ')
                        setcor(1)
                        DEVPOS(li+23,ci+03);DEVOUT('No.Banco...:')
                        DEVPOS(li+24,ci+03);DEVOUT('Agencia....:')
                        DEVPOS(li+25,ci+03);DEVOUT('C/C........:')
                        DEVPOS(li+26,ci+03);DEVOUT('No.Cheque..:')
                        DEVPOS(li+27,ci+03);DEVOUT('Vencimento.:')
                        DEVPOS(li+28,ci+03);DEVOUT('Valor......:')
                        DEVPOS(li+29,ci+03);DEVOUT('Correntista:')
                        DEVPOS(li+29,ci+53);DEVOUT('CPF/CNPJ:')
                        @ li+23,ci+16 GET mn_banco PICT '999'
                        @ li+24,ci+16 GET magencia PICT '@!'
                        @ li+25,ci+16 GET mc_c PICT '@!'        //VALID qtd_chq(mcod_cli,mn_banco,magencia,mc_c)
                        @ li+26,ci+16 GET mn_cheque PICT '99999999' VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.)
                        @ li+27,ci+16 GET mvencimento WHEN ! EMPTY(mn_banco) VALID IF(mvencimento<mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                               RESTSCREEN(00,00,34,79,mbox_rece)
                               LOOP
                        ENDIF
                        @ li+28,ci+16 GET mvalor PICT '9,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.) WHEN ! EMPTY(mn_banco)
                        @ li+29,ci+16 GET mcorrente PICT '@!'
                        @ li+29,ci+62 GET mcpfcnpj PICT '@!'
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                               RESTSCREEN(00,00,34,79,mbox_rece)
                               LOOP
                        ENDIF
               ELSEIF mtipo_pg = 3              // DUPLICATA
                        botao(li+22,ci+27,li+27,ci+74,,' DUPLICATAS ')
                        mqtd_parc := 0
                        mn_dup := SPACE(8)
                        mn_banco := '   '
                        DEVPOS(li+23,ci+28);DEVOUT('No.Duplicata.:')
                        DEVPOS(li+24,ci+28);DEVOUT('Vencimento...:')
                        DEVPOS(li+25,ci+28);DEVOUT('C>art. B>anco:   No.:')
                        DEVPOS(li+26,ci+28);DEVOUT('Quant. Parcelas..:')
                        DEVPOS(li+26,ci+51);DEVOUT('Dia do Vencimento:')

                        @ li+23,ci+43 GET mn_dup PICT '@!' VALID IF(EMPTY(mn_dup),.F.,.T.)
                        @ li+24,ci+43 GET mvencimento VALID IF(mvencimento<mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                               RESTSCREEN(00,00,34,79,mbox_rece)
                               LOOP
                        ENDIF

                        @ li+25,ci+43 GET mt_pag PICT '@!' VALID mt_pag $ 'C,B'
                        @ li+25,ci+50 GET mn_banco PICT '999' WHEN mt_pag = 'B'
                        @ li+26,ci+47 GET mqtd_parc PICT '99'
                        @ li+26,ci+70 GET mdia_venc PICT '99'
                        READ
                        botao(li+13,ci+1,li+22,ci+78,,' Documento  Vencimento       Valor      Documento  Vencimento       Valor','*')
                        i := 0
                        m_parcela :={}
                        mnumero_doc := mn_dup
                        IF mdia_venc > 0
                                mdata_30 := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30),4,2)+'/'+SUBSTR(DTOC(mdata_30),7))
				mmes_fx := VAL(SUBSTR(DTOC(mdata_30 + 30),4,2))
	                        FOR i = 1 TO 15
        	                        IF i <= mqtd_parc
                        	               	mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+STRZERO(mmes_fx,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
        	                                IF mqtd_parc > 9
                	                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,ROUND(mdiferenca/mqtd_parc,2)})
                        	                ELSE
                                	                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,ROUND(mdiferenca/mqtd_parc,2)})
                                        	ENDIF
	                                ELSE
        	                                AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                	                ENDIF
                	                mmes_fx ++
                	                IF mmes_fx > 12
                	                	mmes_fx := 1
                	               	ENDIF
                        	NEXT
                                IF mdiferenca - (ROUND((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (ROUND((mdiferenca/mqtd_parc),2) * mqtd_parc))
                                ENDIF
			ELSE
	                        FOR i = 1 TO 15
        	                        IF i <= mqtd_parc
                	                        IF mdia_venc > 0
                        	                        mdata_v := CTOD(STRZERO(mdia_venc,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),4,2)+'/'+SUBSTR(DTOC(mdata_30 + m_intevalo[i]),7))
                                	        ELSE
                                        	        mdata_v := mdata_30 + m_intevalo[i]
	                                        ENDIF
        	                                IF mqtd_parc > 9
                	                                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,2)+'/'+STRZERO(mqtd_parc,2)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,ROUND(mdiferenca/mqtd_parc,2)})
                        	                ELSE
                                	                AADD(m_parcela,{ALLTRIM(mnumero_doc)+'-'+STRZERO(i,1)+'/'+STRZERO(mqtd_parc,1)+SPACE(7-LEN(ALLTRIM(mnumero_doc)+'/'+STRZERO(i,2))),mdata_v,ROUND(mdiferenca/mqtd_parc,2)})
                                        	ENDIF
	                                ELSE
        	                                AADD(m_parcela,{SPACE(12),CTOD('  /  /  '),0})
                	                ENDIF
                        	NEXT
                                IF mdiferenca - (ROUND((mdiferenca/mqtd_parc),2) * mqtd_parc) > 0
                                        m_parcela[1,3] := m_parcela[1,3] + (mdiferenca - (ROUND((mdiferenca/mqtd_parc),2) * mqtd_parc))
                                ENDIF
                        ENDIF
                        mtipo_comp = 'AP'
               ELSEIF mtipo_pg = 4      //CARTAO
                        IF ! AbriArq('mastcaixa','caix');RETURN NIL;ENDIF
                        IF ! AbriArq('mastcarta','car');RETURN NIL;ENDIF
                        mdata_30 := mdata_sis + 30
                        mt_pag := 'B'
                        botao(li+22,ci+40,li+27,ci+79,,' CARTAO ')
                        DEVPOS(li+23,ci+41);DEVOUT('Cod.Cartao.:')
                        DEVPOS(li+24,ci+41);DEVOUT('No.Cupom...:')
                        DEVPOS(li+25,ci+41);DEVOUT('Vencimento.:')
                        DEVPOS(li+26,ci+41);DEVOUT('Valor R$...:')
                        @ li+23,ci+54 GET mcod_cart PICT '999' VALID IF(EMPTY(mcod_cart),.F.,ver_cartao(mcod_cart,li+23,ci+58))
                        READ
                        ver_cartao(mcod_cart,li+23,ci+58)
                        mvencimento := mdata_sis
                        @ li+24,ci+55 GET mn_cupom PICT '@!' VALID IF(EMPTY(mn_cupom),.F.,.T.)
                        @ li+25,ci+55 GET mvencimento VALID IF(mvencimento<mdata_sis,.F.,.T.)
                        @ li+26,ci+55 GET mvalor PICT '9,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                               RESTSCREEN(00,00,34,79,mbox_rece)
                               LOOP
                        ENDIF
                ELSE
                        LOOP
                ENDIF
                IF mtipo_pg = 3 .OR. mtipo_pg = 5
                        @ li+14,ci+4 GET m_parcela[1,1] PICT '@!'
                        @ li+14,COL()+2 GET m_parcela[1,2] VALID vencim(m_parcela[1,2],,,mdata_30,m_intevalo[1],m_parcela[1,1])
                        @ li+14,COL()+2 GET m_parcela[1,3] PICT '999,999.99'
                        @ li+15,ci+4 GET m_parcela[2,1] PICT '@!'
                        @ li+15,COL()+2 GET m_parcela[2,2] VALID vencim(m_parcela[2,2],,,mdata_30,m_intevalo[2],m_parcela[2,1])
                        @ li+15,COL()+2 GET m_parcela[2,3] PICT '999,999.99'
                        @ li+16,ci+4 GET m_parcela[3,1] PICT '@!'
                        @ li+16,COL()+2 GET m_parcela[3,2] VALID vencim(m_parcela[3,2],,,mdata_30,m_intevalo[3],m_parcela[3,1])
                        @ li+16,COL()+2 GET m_parcela[3,3] PICT '999,999.99'
                        @ li+17,ci+4 GET m_parcela[4,1] PICT '@!'
                        @ li+17,COL()+2 GET m_parcela[4,2] VALID vencim(m_parcela[4,2],,,mdata_30,m_intevalo[4],m_parcela[4,1])
                        @ li+17,COL()+2 GET m_parcela[4,3] PICT '999,999.99'
                        @ li+18,ci+4 GET m_parcela[5,1] PICT '@!'
                        @ li+18,COL()+2 GET m_parcela[5,2] VALID vencim(m_parcela[5,2],,,mdata_30,m_intevalo[5],m_parcela[5,1])
                        @ li+18,COL()+2 GET m_parcela[5,3] PICT '999,999.99'
                        @ li+19,ci+4 GET m_parcela[6,1] PICT '@!'
                        @ li+19,COL()+2 GET m_parcela[6,2] VALID vencim(m_parcela[6,2],,,mdata_30,m_intevalo[6],m_parcela[6,1])
                        @ li+19,COL()+2 GET m_parcela[6,3] PICT '999,999.99'
                        @ li+20,ci+4 GET m_parcela[7,1] PICT '@!'
                        @ li+20,COL()+2 GET m_parcela[7,2] VALID vencim(m_parcela[7,2],,,mdata_30,m_intevalo[7],m_parcela[7,1])
                        @ li+20,COL()+2 GET m_parcela[7,3] PICT '999,999.99'
                        @ li+21,ci+4 GET m_parcela[8,1] PICT '@!'
                        @ li+21,COL()+2 GET m_parcela[8,2] VALID vencim(m_parcela[8,2],,,mdata_30,m_intevalo[8],m_parcela[8,1])
                        @ li+21,COL()+2 GET m_parcela[8,3] PICT '999,999.99'

                        @ li+14,ci+43 GET m_parcela[9,1] PICT '@!'
                        @ li+14,COL()+2 GET m_parcela[9,2] VALID vencim(m_parcela[9,2],,,mdata_30,m_intevalo[9],m_parcela[9,1])
                        @ li+14,COL()+2 GET m_parcela[9,3] PICT '999,999.99'
                        @ li+15,ci+43 GET m_parcela[10,1] PICT '@!'
                        @ li+15,COL()+2 GET m_parcela[10,2] VALID vencim(m_parcela[10,2],,,mdata_30,m_intevalo[10],m_parcela[10,1])
                        @ li+15,COL()+2 GET m_parcela[10,3] PICT '999,999.99'
                        @ li+16,ci+43 GET m_parcela[11,1] PICT '@!'
                        @ li+16,COL()+2 GET m_parcela[11,2] VALID vencim(m_parcela[11,2],,,mdata_30,m_intevalo[11],m_parcela[11,1])
                        @ li+16,COL()+2 GET m_parcela[11,3] PICT '999,999.99'
                        @ li+17,ci+43 GET m_parcela[12,1] PICT '@!'
                        @ li+17,COL()+2 GET m_parcela[12,2] VALID vencim(m_parcela[12,2],,,mdata_30,m_intevalo[12],m_parcela[12,1])
                        @ li+17,COL()+2 GET m_parcela[12,3] PICT '999,999.99'
                        @ li+18,ci+43 GET m_parcela[13,1] PICT '@!'
                        @ li+18,COL()+2 GET m_parcela[13,2] VALID vencim(m_parcela[13,2],,,mdata_30,m_intevalo[13],m_parcela[13,1])
                        @ li+18,COL()+2 GET m_parcela[13,3] PICT '999,999.99'
                        @ li+19,ci+43 GET m_parcela[14,1] PICT '@!'
                        @ li+19,COL()+2 GET m_parcela[14,2] VALID vencim(m_parcela[14,2],,,mdata_30,m_intevalo[14],m_parcela[14,1])
                        @ li+19,COL()+2 GET m_parcela[14,3] PICT '999,999.99'
                        @ li+20,ci+43 GET m_parcela[15,1] PICT '@!'
                        @ li+20,COL()+2 GET m_parcela[15,2] VALID vencim(m_parcela[15,2],,,mdata_30,m_intevalo[15],m_parcela[15,1])
                        @ li+20,COL()+2 GET m_parcela[15,3] PICT '999,999.99'
                        READ
                        IF LASTKEY() = 27
                                RESTSCREEN(00,00,34,79,mbox_rece)
                                LOOP
                        ENDIF
                        i := 0
                        FOR i = 1 TO 15
                                mvalor := mvalor + m_parcela[i,3]
                        NEXT
                ELSEIF mtipo_pg = 9
                        i := 0
                        FOR i = 1 TO VAL(SUBSTR(cons_tab[1,6],2))
                                mvalor := mvalor + m_parcela[i,3]
                        NEXT
                ENDIF
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. ;
                   EMPTY(mcod_cart) .AND. mvalor+mdinheiro > 0 .AND. LEN(m_parcela) = 0
                        LOOP
                ENDIF
                mopcao := 'S'
                //IF m_cfg[47] <> 'T'
                //        mopcao := op_simnao('S','Confirma a Inclusao:')
                //ENDIF
                RESTSCREEN(00,00,34,79,mbox_rece)
                setcor(1)
                SUB_BANNER(li+6,ci+18,TRANSFORM(mtot_nota,'999,999.99'),1)
                @ li+5,ci TO li+5,cb
                @ li+12,ci TO li+12,cb
                IF mopcao = 'N';LOOP;ENDIF
                IF mdinheiro = mtot_nota
                        mvalor := mdinheiro
                        AADD(m_alt,'DINHEIRO.....: Valor: '+TRANSFORM(mdinheiro,'999,999.99'))
                        AADD(m_recebe,{'DN','AV',SPACE(3),SPACE(6),'99999999',mdata_sis,'C',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                ELSEIF ! (EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. ;
                       EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. LEN(m_parcela) = 0) .OR. mdinheiro = mtot_nota
                        IF ! EMPTY(mdinheiro)   //.OR. mdinheiro = mtot_nota
                                IF mdinheiro + mtot_verif > mtot_nota
                                        mvalor := mtot_nota - mtot_verif
                                        SUB_BANNER(20,01,'Troco:'+TRANSFORM(mdinheiro+mtot_verif - mtot_nota,'999,999.99'))
                                        atencao('T R O C O   D E   R$: '+TRANSFORM(mdinheiro+mtot_verif - mtot_nota,'999,999.99'))
                                ELSE
                                        mvalor := mdinheiro
                                ENDIF
                                AADD(m_alt,'DINHEIRO.....: Valor: '+TRANSFORM(mdinheiro,'999,999.99'))
                                AADD(m_recebe,{'DN','AV',SPACE(3),SPACE(6),'99999999',mdata_sis,'C',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                        ELSE
                                IF ! EMPTY(mn_cheque)
	                                //IF (mvalor + mtot_verif) > mtot_nota
	                                IF (mvalor + mtot_verif) - mtot_nota > .009
                				mcred_cheq := op_simnao('S','O Valor de R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')+'  vai ser gerado um CREDITO para o cliente:')
						IF  mcred_cheq = 'N'
		                                	LOOP
		                                ENDIF
						mvlr_credcheq := mvalor+mtot_verif - mtot_nota
	                                        IF mvencimento > mdata_sis
*       	                                                         1    2      3         4       5        6       7         8                 9      10     11     12       13     14      15        16   17  18       19
                	                                AADD(m_recebe,{'CH','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ','CREDITO P/ CLIENTE DE R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')})
                        	                        mqtd_doc ++
                                	                mqtd_dias := mqtd_dias + (mvencimento - mdata_sis)
                                        	ELSE
	                                                AADD(m_recebe,{'CH','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ','CREDITO P/ CLIENTE DE R$:'+TRANSFORM(mvalor+mtot_verif - mtot_nota,'999,999.99')})
        	                                ENDIF
        	                        ELSE
	                                        IF mvencimento > mdata_sis
*       	                                                         1    2      3         4       5        6       7         8                 9      10     11     12       13     14      15        16   17  18   19
                	                                AADD(m_recebe,{'CH','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ',' '})
                        	                        mqtd_doc ++
                                	                mqtd_dias := mqtd_dias + (mvencimento - mdata_sis)
                                        	ELSE
                                        		AADD(m_recebe,{'CH','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' ',' '})
                                        	ENDIF
                                        ENDIF
                                        AADD(m_alt,'CHEQUE.......: Bco.: '+mn_banco+' No.: '+mn_cheque+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                ELSEIF ! EMPTY(mn_dup)
                                        i := 0
                                        FOR i = 1 TO LEN(m_parcela)
                                                IF EMPTY(m_parcela[i,1])
                                                        LOOP
                                                ENDIF
                                                AADD(m_alt,'DUPLICATA....: No.: '+m_parcela[i,1]+' Venc.: '+DTOC(m_parcela[i,2])+' Valor: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                IF m_parcela[i,2] > mdata_sis
                                                        AADD(m_recebe,{'DU','AP',mn_banco,SPACE(6),m_parcela[i,1],m_parcela[i,2],mt_pag,STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                ELSE
                                                        AADD(m_recebe,{'DU','AV',mn_banco,SPACE(6),m_parcela[i,1],m_parcela[i,2],mt_pag,STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' ',' '})
                                                ENDIF
                                        NEXT

                                ELSEIF ! EMPTY(mn_cupom)
                                        AADD(m_alt,'CARTAO.......: No.: '+mn_cupom+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                        IF mvencimento > mdata_sis
                                                AADD(m_recebe,{'CT','AP',SPACE(3),SPACE(6),mn_cupom,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,' ',' ',' '})
                                                mqtd_doc ++
                                                mqtd_dias := mqtd_dias + (mvencimento - mdata_sis)
                                        ELSE
                                                AADD(m_recebe,{'CT','AV',SPACE(3),SPACE(6),mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,' ',' ',' '})
                                        ENDIF
                                        /*
                                        i := 0
                                        FOR i = 1 TO LEN(m_parcela)
                                                IF EMPTY(m_parcela[i,1])
                                                        LOOP
                                                ENDIF
                                                AADD(m_alt,'CARTAO.......: '+STRZERO(mcod_cart,3)+' Cupom No.: '+m_parcela[i,1]+' Valor: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                IF m_parcela[i,2] > mdata_sis
                                                        //               1    2       3      4         5       6          7           8                 9            10          11      12       13       14        15         16            17            18
                                                        AADD(m_recebe,{'CT','AP',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],' '})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                ELSE

                                                        AADD(m_recebe,{'CT','AV',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5],' '})
                                                ENDIF
                                        NEXT
                                        */
                                ENDIF
                        ENDIF
                ELSE
                        atencao('nao')
                ENDIF
                setcor(3)
                DEVPOS(lci+13,cci+37);DEVOUT(TRANSFORM(mqtd_dias/mqtd_doc,'9999')+' ')
                setcor(1)
                mtot_verif = mtot_verif + mvalor
		IF mcred_cheq = 'S'
			mdiferenca := 0
                ELSE
			mdiferenca := ROUND(ROUND(mtot_nota - mtot_verif,2),2)
		ENDIF
                setcor(3)
                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.99')
                limpa(li+22,ci+1,lb-1,cb-1)
                f := 1
                i := 0
                FOR i = 1 TO LEN(m_alt)
                        DEVPOS(li+21+f,ci+1);DEVOUT(m_alt[i])
                        IF i > 4
                                SCROLL(li+22,ci+1,lb-1,cb-1,1)
                        ELSE
                                f++
                        ENDIF
                NEXT
                setcor(1)
                IF mdiferenca <= 0       //.OR. mdiferenca <= mtot_ipi
                        WHILE mtot_verif <> ROUND(mtot_nota,2) .AND. ! EMPTY(mdiferenca)
                                atencao(TRANSFORM(mdiferenca,'9,999,999.999999'))
                                mopcao := mensagem1('Total RECEBIDO: '+TRANSFORM(mtot_verif,'9,999,999.999999')+' e maior que A RECEBER: '+TRANSFORM(mtot_nota-mtot_ipi,'9,999,999.99999')+', Deseja tentar Alterar os Recebimentos: ','S','S,N')
                                IF mopcao = 'S'
                                        setcor(3)
                                        DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                        DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.99')
                                        limpa(li+22,ci+1,lb-1,cb-1)
                                        f := 1
                                        i := 0
                                        FOR i = 1 TO LEN(m_recebe)
                                                DEVPOS(li+21+f,ci+1);DEVOUT(m_alt[i])
                                                IF i > 4
                                                        SCROLL(li+22,ci+1,lb-1,cb-1,1)
                                                ELSE
                                                        f++
                                                ENDIF
                                        NEXT
                                        setcor(1)
                                        LOOP
                                ELSE
                                        EXIT
                                ENDIF
                        ENDDO
                        IF mtot_verif <> ROUND(mtot_nota,2) .AND. ! EMPTY(mdiferenca)
                                m_alt :={}
                                m_recebe :={}
                                mtot_verif := 0
                                mdiferenca := ROUND(ROUND(mtot_nota - mtot_verif,2),2)
                                setcor(3)
                                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.99')
                                setcor(1)
                                limpa(li+22,ci+1,lb-1,cb-1)
                                LOOP
                        ENDIF
                        mopcao := op_simnao('S','Todas informacoes "OK", Confirma Dados Preenchido:')
                        IF mopcao = 'N'
                                m_alt   :={}
                                m_recebe:={}
                                mtot_verif := 0
                                mdiferenca := ROUND(mtot_nota - mtot_verif,2)
                                setcor(3)
                                DEVPOS(li+16,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                DEVPOS(li+16,ci+54);DEVOUTPICT(mtot_nota,'9,999,999.99')
                                setcor(1)
                                limpa(li+22,ci+1,lb-1,cb-1)
                                LOOP
                        ENDIF
                        IF mopcao = 'S'
                                EXIT
                        ENDIF
                ELSE
                        atencao('Faltando alguns dados...')
                ENDIF
        ENDDO
        IF LASTKEY() = 27;LOOP;ENDIF
        /*
        mensagem('Atualizando o CLIENTE....')
        m_param:={}
        sr_getconnection():exec("SELECT tot_comp,vlr_comp,num_ped,ult_comp FROM mastcli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)),,.t.,@m_param)
        aret:={}
        cComm  := "UPDATE mastcli SET "
        ccomm := ccomm +"num_ped  = "+sr_cdbvalue(STRZERO(mnum_mesa,6))
        ccomm := ccomm +",ult_comp = "+sr_cdbvalue(mdata_sis)
        ccomm := ccomm +",vlr_comp = "+sr_cdbvalue(ROUND(mtot_nota,2))
        ccomm := ccomm +",tot_comp = "+sr_cdbvalue(ROUND(m_param[1,1] + mtot_nota,2))
        IF ! EMPTY(m_param[1,4])
                ccomm := ccomm +",ant_ped  = "+sr_cdbvalue(m_param[1,3])
                ccomm := ccomm +",dat_ant  = "+sr_cdbvalue(m_param[1,4])
        ENDIF
        IF mtot_nota > cons_cli[1,18]
                ccomm := ccomm +",numped_m  = "+sr_cdbvalue(STRZERO(mnum_mesa,6))
                ccomm := ccomm +",ultcomp_m = "+sr_cdbvalue(mdata_sis)
                ccomm := ccomm +",vlrcomp_m = "+sr_cdbvalue(ROUND(mtot_nota,2))
        ENDIF

        ccomm := ccomm +",vlr_ant  = "+sr_cdbvalue(ROUND(m_param[1,2],2))+" WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5))
        sr_getconnection():exec(ccomm,,.f.)
        */
        mensagem('Atualizando o CONTAS A RECEBER....')
        c := i := 0
        FOR i = 1 TO LEN(m_recebe)
                IF EMPTY(m_recebe[i,1]);LOOP;ENDIF
                IF m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis
                        mbaixar := op_simnao('N','Deseja Baixar este Cheque de No.:'+m_recebe[i,4]+'Valor: '+RTRIM(TRANSFORM(m_recebe[i,10],'999,999.99'))+' - Data Vecimento: '+DTOC(m_recebe[i,6]))
                ENDIF
                mcampo_arq :=  'emissao         ,';//1.
                              +'tipo            ,';//2.
                              +'fornec          ,';//3.
                              +'cliente         ,';//4.
                              +'venc            ,';//5.
                              +'comissao        ,';//6.
                              +'operador        ,';//7 .
                              +'vendedor        ,';//8 .
                              +'num_ped         ,';//9 .
                              +'banco           ,';//10.
                              +'mov_cx          ,';//11.
                              +'c_cpfcnpj       ,';//12.
                              +'numero          ,';//13.
                              +'duplicata       ,';//14.
                              +'valor_dup       ,';//15.
                              +'valor           ,';//16.
                              +'agencia         ,';//17.
                              +'c_c             ,';//18.
                              +'datpag          ,';//19.
                              +'vlpago          ,';//20.
                              +'pago            ,';//21.
                              +'corrente        ,';//22.
                              +'cpfcnpj         ,';//23.
                              +'vl_ipi          ,';//24.
                              +'obs           '//25
                IF m_recebe[i,1] = 'DN'
                        mnum_dup := m_nummesa[1]      //STRZERO(mnum_mesa,6)
                ELSEIF m_recebe[i,1] = 'CH'
                        mnum_dup := m_recebe[i,4]
                ELSEIF m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'TR' .OR. m_recebe[i,1] = 'CR'
                        mnum_dup := m_recebe[i,5]
                ELSEIF m_recebe[i,1] = 'FI'
                        mnum_dup := m_recebe[i,11]
                ELSEIF m_recebe[i,1] = 'CT'
                        mnum_dup := m_recebe[i,9]
                ENDIF
                sr_getconnection():exec("INSERT INTO mastdupr ("+mcampo_arq+",sr_deleted) VALUES ("+;
                        sr_cdbvalue(mdata_sis                              )+','+;//1.
                        sr_cdbvalue(m_recebe[i,1]                          )+','+;//2.
                        sr_cdbvalue(STRZERO(mcod_cli,5)                    )+','+;//3.
                        sr_cdbvalue(mcliente                               )+','+;//4.
                        sr_cdbvalue(m_recebe[i,6]                          )+','+;//5.
                        sr_cdbvalue(mperc_comissao                         )+','+;//6.
                        sr_cdbvalue(cod_operado                            )+','+;//7 .
                        sr_cdbvalue(STRZERO(mcod_vend,3)                   )+','+;//8 .
                        sr_cdbvalue(STRZERO(mnum_mesa,6)                   )+','+;//9 .
                        sr_cdbvalue(m_recebe[i,7]                          )+','+;//10.
                        sr_cdbvalue('C'                                    )+','+;//11.
                        sr_cdbvalue(IF(! EMPTY(cons_cli[1,21]),cons_cli[1,21],cons_cli[1,23]) )+','+;//12
                        sr_cdbvalue(IF(m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT',m_recebe[i,8],m_recebe[i,3]))+','+;//13
                        sr_cdbvalue(mnum_dup                                )+','+;//14.
                        sr_cdbvalue(m_recebe[i,10]                          )+','+;//15.
                        sr_cdbvalue(IF(m_recebe[i,1] = 'CT',m_recebe[i,10] - (m_recebe[i,10] * (m_recebe[i,16] / 100)),m_recebe[i,10]))+','+;//16.
                        sr_cdbvalue(m_recebe[i,13]                          )+','+;//17.
                        sr_cdbvalue(m_recebe[i,14]                          )+','+;//18.
                        IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),sr_cdbvalue(m_recebe[i,6]),nulo)+','+;//19.
                        sr_cdbvalue(IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),m_recebe[i,10],0))+','+;              //20.
                        sr_cdbvalue(IF(m_recebe[i,1]='DN' .OR. m_recebe[i,1]='CR' .OR. (m_recebe[i,1]='CH' .AND. m_recebe[i,6] <= mdata_sis .AND. mbaixar = 'S'),'B',' '))+','+;                       //21.
                        sr_cdbvalue(m_recebe[i,15]                           )+','+;//22.
                        sr_cdbvalue(IF(m_recebe[i,1]='CH',m_recebe[i,16],' '))+','+;//23.
                        sr_cdbvalue(mtot_ipi                                 )+','+;//24.
                        sr_cdbvalue(m_recebe[i,19]                           )+','+;//25
                        sr_cdbvalue(' ')+')',,.f.)
                        IF m_recebe[i,1] = 'CH' .OR. m_recebe[i,1] = 'DU' .OR. m_recebe[i,1] = 'FI' .OR. m_recebe[i,1] = 'CT'
                                mtot_ipi := 0
                        ENDIF
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)
        mensagem('Atualizando o MOVIMENTO....')
        ccomm := "UPDATE mastmov SET dat_pag = "+sr_cdbvalue(mdata_sis)+",dez_perc = "+sr_cdbvalue(mdez_perc)+" WHERE ("
        i:=0
        FOR i = 1 TO LEN(m_nummesa)
                ccomm := ccomm + "num_local = "+sr_cdbvalue(ALLTRIM(STR(VAL(SUBSTR(m_nummesa[i],2)))))+" AND tipo = "+sr_cdbvalue(SUBSTR(m_nummesa[i],1,1))
                IF i < LEN(m_nummesa)
                        ccomm := ccomm + " OR "
                ENDIF
        NEXT
        ccomm := ccomm + ") AND dat_pag IS NULL"
        //atencao(ccomm)
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("UPDATE mastmovcab SET status = 'FECHADA' WHERE mesa = "+sr_cdbvalue(VAL(SUBSTR(m_nummesa[1],2)))+" AND tipo = "+sr_cdbvalue(SUBSTR(m_nummesa[1],1,1)),,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        mensagem('Atualizando o CAIXA....')
        i = 0
        FOR i = 1 TO LEN(m_recebe)
                IF EMPTY(m_recebe[i,1])
                        LOOP
                ENDIF
                mcampo_arq :=  'data      ,';//2
                              +'tipo      ,';//3
                              +'tipo_comp ,';//4
                              +'nota      ,';//5
                              +'cod_cli   ,';//6
                              +'cod_vend  ,';//7
                              +'cod_opera ,';//8
                              +'hora      ,';//9
                              +'valor_com ,';//10
                              +'comissao  ,';//11
                              +'venci     ,';//12
                              +'valor     ,';//13
                              +'num_ban   ,';//14
                              +'cod_ct    ,';//15
                              +'c_s       ,';//16
                              +'num_dup   ,';//17
                              +'documento ,';//18
                              +'descri2   ,';//19
                              +'obs       ,';//20
                              +'mesa       ' //21
                IF m_recebe[i,1] = 'DN'
                        mnum_dup := m_nummesa[1]      //STRZERO(mnum_mesa,6)
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
                sr_getconnection():exec('INSERT INTO mastcaixa ('+mcampo_arq+',sr_deleted) VALUES ('+;
                        sr_cdbvalue(mdata_sis)+','+; //2
                        sr_cdbvalue(m_recebe[i,1]                          )+','+;//3
                        sr_cdbvalue(m_recebe[i,2]                          )+','+;//4
                        sr_cdbvalue(mnota                                  )+','+;//5
                        sr_cdbvalue(STRZERO(mcod_cli,5)                    )+','+;//6
                        sr_cdbvalue(STRZERO(mcod_vend,3)                   )+','+;//7
                        sr_cdbvalue(cod_operado                            )+','+;//8
                        sr_cdbvalue(TIME()                                 )+','+;//9
                        sr_cdbvalue(m_recebe[i,10]                         )+','+;//10
                        sr_cdbvalue(mperc_comissao                         )+','+;//11
                        sr_cdbvalue(m_recebe[i,6]                          )+','+;//12
                        sr_cdbvalue(m_recebe[i,10]                         )+','+;//13
                        sr_cdbvalue(m_recebe[i,3]                          )+','+;//14
                        sr_cdbvalue(m_recebe[i,8]                          )+','+;//15
                        sr_cdbvalue(mcom_sem                               )+','+;//16
                        sr_cdbvalue(mnum_dup                               )+','+;//17
                        sr_cdbvalue(mdup_num                               )+','+;//18
                        sr_cdbvalue(IF(m_recebe[i,1] = 'CT',m_recebe[i,12],' '))+','+;//19
                        sr_cdbvalue(m_recebe[i,19]                          )+','+;//20
                        sr_cdbvalue(m_nummesa[1]                          )+','+;//20
                        sr_cdbvalue(' ')+')',,.f.)
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)

	IF mvlr_credcheq > 0.50
		mobs := 'CREDITO DO PEDIDO DE NUMERO:'+STRZERO(mnum_mesa,6)
                cComm  := "INSERT INTO mastcred (empresa,tipo,duplicata,valor_dup,"
		ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
		ccomm  := ccomm + "num_ped,operador,obs,sr_deleted)"
		ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue('PD'+STRZERO(mnum_mesa,6))
		ccomm  := ccomm + ","+sr_cdbvalue(ROUND(mvlr_credcheq,2))+","+sr_cdbvalue(STRZERO(mcod_cli,5))+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
		ccomm  := ccomm + ","+sr_cdbvalue(ROUND(mvlr_credcheq,2))+","+sr_cdbvalue(mcod_vend)+","+sr_cdbvalue(STRZERO(mnum_mesa,6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(mobs)+",' ')"
                sr_getconnection():exec(ccomm,,.f.)
	ENDIF
        sr_getconnection():exec("COMMIT",,.f.)
        mensagem('Atualizando o CONTA A PAGAR....')
        c := i := 0
        FOR i = 1 TO LEN(m_recebe)
                IF EMPTY(m_recebe[i,1]) .OR. EMPTY(VAL(m_recebe[i,17]))
                        LOOP
                ENDIF
                sr_getconnection():exec('INSERT INTO mastdupp (empresa ,';//1
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
                                sr_cdbvalue(mcod_emp                                          )+','+; //1
                                sr_cdbvalue('PA'                                              )+','+; //2
                                sr_cdbvalue(m_recebe[i,8]                                     )+','+; //3
                                sr_cdbvalue(m_recebe[i,9]                                     )+','+; //4
                                sr_cdbvalue(ROUND((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //5
                                sr_cdbvalue(m_recebe[i,18]                                    )+','+; //6
                                sr_cdbvalue(m_recebe[i,17]                                    )+','+; //7
                                sr_cdbvalue(IF(v_fornece(VAL(m_recebe[i,17])),forn->razao,'DESCONTO DO CARTAO DE CREDITO'))    +','+; //8
                                sr_cdbvalue(mdata_sis                                         )+','+; //9
                                sr_cdbvalue(mdata_sis                                         )+','+; //10
                                sr_cdbvalue(mdata_sis                                         )+','+; //11
                                sr_cdbvalue(ROUND((m_recebe[i,10] * (m_recebe[i,16] / 100)),2))+','+; //12
                                sr_cdbvalue(ROUN((m_recebe[i,10] * (m_recebe[i,16] / 100)),2) )+','+; //13
                                sr_cdbvalue('C'                                               )+','+; //14
                                sr_cdbvalue('B'                                               )+','+; //15
                                sr_cdbvalue(cod_operado                                       )+','+; //16
                                sr_cdbvalue(STRZERO(mnum_mesa,6)                               )+','+; //17
                                sr_cdbvalue('Pedido:'+STRZERO(mnum_mesa,6)+' DESCONTO DE CARTAO')+','+; //18
                                sr_cdbvalue(' ')+')',,.f.)
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)
        mensagem('Atualizando o CREDITO....')
        i := 0
        FOR i = 1 TO LEN(m_recebe)
                IF m_recebe[i,1] = 'CR'
                        cons_cred := {}
                        mcomando := "SELECT * FROM mastcred WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                        sr_getconnection():exec(mcomando,,.t.,@cons_cred)
                        IF m_recebe[i,10] = cons_cred[1,19]
                                mcomando := "UPDATE mastcred "
                                mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                mcomando := mcomando + ",pago = 'B'"
                                mcomando := mcomando + ",conta = '*'"
                                mcomando := mcomando + ",mov_cx = 'C'"
                                mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                sr_getconnection():exec(mcomando,,.f.)
                        ELSE
                                mcomando := "UPDATE mastcred "
                                mcomando := mcomando + "SET datpag = "+sr_cdbvalue(mdata_sis)
                                mcomando := mcomando + ",vlpago = "+sr_cdbvalue(m_recebe[i,10])
                                mcomando := mcomando + ",pago = 'B'"
                                mcomando := mcomando + ",conta = '*'"
                                mcomando := mcomando + ",mov_cx = 'C'"
                                mcomando := mcomando + ",operador = "+sr_cdbvalue(cod_operado)
                                mcomando := mcomando + " WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))+" AND (pago IS NULL OR pago = ' ') AND duplicata = "+sr_cdbvalue(m_recebe[i,5])
                                sr_getconnection():exec(mcomando,,.f.)

                                cComm  := "INSERT INTO mastcred (empresa,tipo,duplicata,valor_dup,"
                                ccomm  := ccomm + "fornec,cliente,emissao,venc1,venc,valor,vendedor,"
                                ccomm  := ccomm + "num_ped,operador,obs,conta,sr_deleted)"
                                ccomm  := ccomm + " VALUES ("+sr_cdbvalue(mcodempresa)+",'CR',"+sr_cdbvalue(m_recebe[i,5])
                                ccomm  := ccomm + ","+sr_cdbvalue(ROUND(m_recebe[i,10],2))+","+sr_cdbvalue(STRZERO(mcod_cli,5))+","+sr_cdbvalue(mcliente)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)+","+sr_cdbvalue(mdata_sis)
                                ccomm  := ccomm + ","+sr_cdbvalue(ROUND(cons_cred[1,19]-m_recebe[i,10],2))+","+sr_cdbvalue(cons_cred[1,30])+","+sr_cdbvalue(STRZERO(mnum_mesa,6))+","+sr_cdbvalue(cod_operado)+","+sr_cdbvalue(cons_cred[1,46])+",'*',' ')"
                                sr_getconnection():exec(ccomm,,.f.)
                        ENDIF
                        opcao := op_simnao('S','Deseja Imprimir o Comprovante de Credito:')
                        IF opcao = 'S'
                                IF ! imp_arq('CREDITO.REL','D','N')
                                        LOOP
                                ENDIF
                                /*
                                IF m_set[1,65] = 'F'
                                        y:=0
                                        FOR y = 1 TO m_set[1,66]
                                                DEVPOS(PROW()+2,00);DEVOUT(memp_resa)
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+m_recebe[y,5]+'   ( P A G O )',80))

                                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                                DEVPOS(PROW(),16);DEVOUT(mdata_sis)

                                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(m_recebe[y,10],'99,999,999.99')))

                                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STRZERO(mcod_cli,5)+'-'+mcliente)
                                                DEVPOS(PROW()+1,16);DEVOUT(cons_cred[1,46])

                                                DEVPOS(PROW()+4,00);DEVOUT(PADC('...........................           ............................',80))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                                                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                                                IF m_set[1,66] > 1 .AND. y < m_set[1,66]
                                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                                ENDIF
                                                EJECT
                                        NEXT

                                ELSE
                                */
                                        mtraco := REPLI('=',60)
                                        y:=0
                                        FOR y = 1 TO 1
                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                                imprt(mtipo_imp,'N')
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+m_recebe[y,5]+'   ( P A G O )',35))

                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mdata_sis)
                                                DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(m_recebe[y,10],'99,999,999.99')))
                                                DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STRZERO(mcod_cli,5)+'-'+mcliente)
                                                DEVPOS(PROW()+1,16);DEVOUT(cons_cred[1,46])

                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('           C A I X A           ',60))
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('          Solicitante          ',60))

                                                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',60))
                                        NEXT
                                        DEVPOS(PROW()+m_cfg[10],00);DEVOUT(' ')
                                //ENDIF
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                conf_impressao('CREDITO.REL')
                        ENDIF
                ENDIF
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)
        /*
        IF m_set[1,111] = 'S'
                WHILE LASTKEY() <> 27
                        IF op_simnao('S','Insira o Documento na impressora p/autenticar',' AUTENTICACAO DE DOCUMENTO ') = 'S'
                                SET DEVICE TO PRINT
                                SET PRINT TO (m_cfg[35])
                                imprt(m_cfg[36],'C')
                                DEVPOS(00,00);DEVOUT(ALLTRIM(SUBSTR(memp_resa,1,4))+ALLTRIM(mdocumento)+cod_operado+DTOC(mdata_sis)+ALLTRIM(TRANSFORM(mtot_nota,'999999.99')))
                                IF m_cfg[24] = 'P';DEVPOS(01,00);DEVOUT(' ');ENDIF
                                imprt(m_cfg[36],'N')
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        ELSE
                                EXIT
                        ENDIF
                ENDDO
        ENDIF
        */
	IF mvlr_credcheq > 0
                opcao := op_simnao('S','Deseja Imprimir o Comprovante de Credito:')
                IF opcao = 'S'
                        IF ! imp_arq('CREDITO.REL','D','N')
                                LOOP
                        ENDIF
                        /*
                        IF m_set[1,65] = 'F'
                                FOR i = 1 TO m_set[1,66]
                                        DEVPOS(PROW()+2,00);DEVOUT(memp_resa)
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+'PD'+STRZERO(mnum_mesa,6)+'   ( P A G O )',80))

                                        DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                        DEVPOS(PROW(),16);DEVOUT(mdata_sis)

                                        DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvlr_credcheq,'99,999,999.99')))

                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STRZERO(mcod_cli,5)+'-'+mcliente)
                                        DEVPOS(PROW()+1,16);DEVOUT('CREDITO DO PEDIDO DE NUMERO:'+STRZERO(mnum_mesa,6))

                                        DEVPOS(PROW()+4,00);DEVOUT(PADC('...........................           ............................',80))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                                        DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                                        IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                                DEVPOS(PROW()+3,00);DEVOUT(' ')
                                        ENDIF
                                        EJECT
                                NEXT

                        ELSE
                        */
                                mtraco := REPLI('=',60)
                                FOR i = 1 TO 1
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW(),00);DEVOUT(memp_resa)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('C R E D I T O  No.: '+'PD'+STRZERO(mnum_mesa,6)+'   ( P A G O )',35))

                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+2,00);DEVOUT('Data Emissao..:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(mdata_sis)
                                        DEVPOS(PROW()+2,00);DEVOUT('Valor R$......:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvlr_credcheq,'99,999,999.99')))
                                        DEVPOS(PROW()+2,00);DEVOUT('Descricao.....: '+STRZERO(mcod_cli,5)+'-'+mcliente)
                                        DEVPOS(PROW()+1,16);DEVOUT('CREDITO DO PEDIDO DE NUMERO:'+STRZERO(mnum_mesa,6))

                                        DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC('           C A I X A           ',60))
                                        DEVPOS(PROW()+3,00);DEVOUT(PADC('...............................',60))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC('          Solicitante          ',60))

                                        DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',60))
                                NEXT
                                DEVPOS(PROW()+m_cfg[10],00);DEVOUT(' ')
                        //ENDIF
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao('CREDITO.REL')
                ENDIF

        ENDIF
        m_recebe :={}
        m_desc   :={}
        CLEAR GETS
        RELEASE mlin,mcartao,mprazo_cart,mdesc_cart
        IF mnum <> NIL
                RESTSCREEN(00,00,24,79,tela)
                RELEASE ALL
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        limpa(19,20,22,46)
ENDDO
wvw_lclosewindow()
RETURN NIL


/*
        IF EMPTY(mnum_mesa) .AND. ver_serie() = '141253'
                DEVPOS(li+1,ci+1);DEVOUT('No.ENVELOPE:')
                @ li+1,ci+14 GET menvelope PICT '@!'
                READ
                IF LASTKEY() = 27 .OR. EMPTY(menvelope)
                        LOOP
                ENDIF
                ********************
                SELE('ped_s');ORDSETFOCUS(10)
                GO TOP
                ********************
                IF ! ped_s->(DBSEEK(menvelope))
                        atencao('ENVELOPE nao Cadastrado !!!')
                        LOOP
                ENDIF
                mnum_mesa := VAL(ped_s->pnum_ped)
        ENDIF
*/

/*
        IF ver_serie() = '141403'
                opcao:= mensagem1('Deseja emitir Nota Fiscal:','S','S,N',17)
                IF opcao = 'S'
                        sac211(,,mnum_mesa)
                ENDIF
        ENDIF
        mensagem('Deseja emitir Demonstrativo do Recebimento [S/n]:')
        opcao := 'S'
        @ 26,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N'
        READ
        IF opcao = 'S'
                demo_cx()       // SACROT1.PRG
        ENDIF
*/

******************************* F I M ********************************************
* LER DADOS DO CHEQUE COM LEITOR
**********************************
FUNCTION ler_cheque()
*********************
LOCAL mdados:=SPACE(40)
op_tela(10,10,11,70,'DADOS DO CHEQUE')
DEVPOS(00,01);DEVOUT('Passe o Cheque no Leitor:')
//DEVPOS(01,01);DEVOUT('Numero do Banco.........:')
//DEVPOS(02,01);DEVOUT('Numero da Agencia.......:')
//DEVPOS(03,01);DEVOUT('Numero da Conta.........:')
@ 00,27 GET mdados
READ
mn_banco  := SUBSTR(mdados,2,3)
magencia  := SUBSTR(mdados,5,4)
mn_cheque := SUBSTR(mdados,14,6)
mc_c      := SUBSTR(mdados,26,6)
wvw_lclosewindow()
RETURN mn_banco

