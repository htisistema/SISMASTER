MEMVAR getlist
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
************************
* EMISSAO DE NOTA FISCAL
************************
FUNCTION sac211(no_ped,mcorrecao,mno_ped,mel,mpeds,mnf1)
***************
LOCAL MPRG:='SAC211',mmodulo:='EMISSAO DE NOTAS FISCAIS',;
      opcao,mtela2,mtela1,lba,cba,mmerc,mcod_forn,mfabrica,;
      mquantd,mpr_venda,mgrupo,mval_venda,i,micm,mponto,mtp_emp,;
      mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,mtot_ped:=0,mvl_vend,;
      point,tela2,m_produto:={},mqtd_item:=0,mcomissao:=0,mqtd_lin,f,msubtotal

MEMVAR nivel_acess,mdata_sis,cod_operado,mcgc_firm
PRIVATE m_codigo:={},m_desc:={},mdesconto,;
        m_tp_venda:={},micm_f,tela,mdata_ped,mcom_ven,;
        mnome_trans,mfrete_trans,mcid_cli,muf_cli,mcod_tran,mplaca_trans,mpluf_trans,;
        mcgc_trans,mend_trans,mmun_trans,muf_trans,minsc_trans,mesp_trans,;
        mmarca_trans,mnum_trans,mfrete,mseguro,mencargo,mcod_nota,;
        m_normal:={},m_isento:={},m_icmsub:={},m_icmdif:={},mcod_cli,;
        mcliente,mcod_merc,mnome_vend,mperc,mcod_op,mcgc,mcpf,mcod_vend,mdocumento:='000000',;
        mdata,mnum_ped:=0,mnum_orc,muf,minsc,mcod_nat,mcod_nat1,mtransporte,mnota,mcond_vezes,mtp_vend,;
        mtot_desc,m_transp:={},m_point:={},mcgccpf,mnatureza,mcredito,msai_ent,;
        mdif_icm,micm_sub,mnum_sel,mserie_not:='    ',mtipo_fat:=' ',mipi:=0,;
        mvenci,mnum_dup,mvlr_dup,mvenci1,mnum_dup1,mvlr_dup1,;
        mvenci2,mnum_dup2,mvlr_dup2,mvenci3,mnum_dup3,mvlr_dup3,;
        mvenci4,mnum_dup4,mvlr_dup4,mvenci5,mnum_dup5,mvlr_dup5,;
        mvenci6,mnum_dup6,mvlr_dup6,mvenci7,mnum_dup7,mvlr_dup7,;
        mvenci8,mnum_dup8,mvlr_dup8,mvenci9,mnum_dup9,mvlr_dup9,;
        mvenci10,mnum_dup10,mvlr_dup10,mvenci11,mnum_dup11,mvlr_dup11,;
        mintev,mintev1,mintev2,mintev3,mintev4,mintev5,;
        mintev6,mintev7,mintev8,mintev9,mintev10,mintev11,;
        mmodelo:='55',marca:=' ',;
        mtipo_nota:='N',cons_merc:={},cons_ped:={},mvlr_entrada:=0,mcod_bc,mnorm_ele:= ' ',;
        mbase_icm:=0,mtot_icm:=0,mbase_icmf:=0,mtot_icmf:=0,mtot_ipi:=0,mtot_prod:=0,;
        mtot_nota:=0,mtot_quantd:=0,mtot_peso:=0,mtot_liq:=0,ali:='ped_s',mpedidos:={},misento:='',;
        mantt:='',mapolice:='',msittrib:='',mtipo_nfe:=' ',mrefnfe:=SPACE(44),mindFinal:=' ',mindPress:=' ',;
        mtipo_sigla:='   ',mei:=SPACE(10),mrefnfe,mrefCTe,mModECF,mnECF,mnCOO,mperc_desc:=0,mperc_aux:=0,mcod_cst:=''

IF ! ver_nivel(mprg,mmodulo,'123456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*SET KEY -9 TO sacnf_e('1')     // Finaliza a Nota Fiscal
IF mpeds <> NIL
        mpedidos := mpeds
ENDIF
lba = 25
cba = 78
*
*----------------------------------------------------
IF ! AbriArq('mastcli','cli');RETURN NIL;ENDIF
IF ! AbriArq('mastprod','merc');RETURN NIL;ENDIF
/*
IF ! AbriArq('SACNOTA','NOTA');RETURN NIL;ENDIF
IF ! AbriArq('SACNOTAE','NOTAE');RETURN NIL;ENDIF
IF ! AbriArq('SACNOTAB','NOTAB');RETURN NIL;ENDIF
IF ! AbriArq('SACUF','TABUF');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('SACMOVNT','MOVNT');RETURN NIL;ENDIF
IF ! AbriArq('SACTOTNT','TOTNT');RETURN NIL;ENDIF
IF ! AbriArq('sacicm','icm');RETURN NIL;ENDIF
IF ! AbriArq('SACOP','OP');RETURN NIL;ENDIF
IF ! AbriArq('SACTRAN','TRAN');RETURN NIL;ENDIF
*---------------------------------------------
*/
set_key('cliente','merc')
CLEAR GETS
op_tela(00,00,52,120,,,1)
IF mcorrecao = NIL
        mtipo_nota := 'N'
        Wvw_SetTitle( ,'EMISSAO DE NOTA FISCAL *** E L E T R O N I C A ***  VERSAO: 3.10')
        mnorm_ele:= 'E'
ELSE
        mtipo_nota := 'C'
        Wvw_SetTitle( ,'EMISSAO DE NOTA FISCAL *** ELETRONICA DE CORRECAO ***  VERSAO: 3.10' )
        mnorm_ele:= 'E'
ENDIF
WHILE .T.
        limpa(00,00,51,120)
        botao(0,0,52,62,,'EMISSAO DE NOTA FISCAL *** E L E T R O N I C A ***')
        setcor(1)
        DEVPOS(1, 0);DEVOUT('No.Pre-Venda:')
        DEVPOS(2, 0);DEVOUT('No.Orcamento:')
        DEVPOS(3, 0);DEVOUT('Serie NF....:')
        DEVPOS(4, 0);DEVOUT('Tipo da NOTA:    [1]Normal [2]Compl. [3]Ajuste [4]Devol/Retorno')
        //DEVPOS(5, 0);DEVOUT('Modelo......:')
        DEVPOS(5, 0);DEVOUT('Consumidor..:    [1]Normal [2]Consumidor Final')
        DEVPOS(6, 0);DEVOUT('Comprador...:    *** Ver Rodape ***')

        botao(7,0,'þ DADOS DO CLIENTE ','*','D')
        DEVPOS(8, 0);DEVOUT('Codigo......:')
        DEVPOS(9, 0);DEVOUT('CPF.........:')
        DEVPOS(10,0);DEVOUT('CNPJ........:')
        DEVPOS(11,0);DEVOUT('Inscricao...:')
        DEVPOS(12,0);DEVOUT('Endereco....:')
        DEVPOS(13,0);DEVOUT('Numero......:')
        DEVPOS(14,0);DEVOUT('Complemento.:')
        DEVPOS(15,0);DEVOUT('Cidade......:')
        DEVPOS(15,42);DEVOUT('UF:')
        DEVPOS(16,0);DEVOUT('Telefone....:')
        DEVPOS(17,0);DEVOUT('Observacao..:')

        botao(18,0,'þ DADOS DA NOTA FISCAL ','*','D')
        DEVPOS(19,0);DEVOUT('CFOP da Nota:')
        DEVPOS(20,0);DEVOUT('Numero Nota.:')
        DEVPOS(21,0);DEVOUT('Emissao.....:')
        DEVPOS(22,0);DEVOUT('Pagamento...:')
        DEVPOS(23,0);DEVOUT('Frete.......:')
        DEVPOS(24,0);DEVOUT('Seguro......:')
        DEVPOS(25,0);DEVOUT('Disp.Acess..:')
        DEVPOS(26,0);DEVOUT('Desconto (%):')
        botao(27,0,'þ TRANSPORTADOR/VOLUMES TRANSPORTADOS ','*','D')
        DEVPOS(28,0);DEVOUT('Nome........:')
        IF mel <> NIL
                DEVPOS(29, 0);DEVOUT('Frete.......:    [0]Emitente [1]Destinatario')
        ELSE
                DEVPOS(29, 0);DEVOUT('Frete.......:    [1]Emitente [2]Destinatario')
        ENDIF
        DEVPOS(30, 0);DEVOUT('Placa.......:')
        DEVPOS(30,28);DEVOUT('UF:')
        DEVPOS(31, 0);DEVOUT('CNPJ/CPF....:')
        DEVPOS(32, 0);DEVOUT('Endereco....:')
        DEVPOS(33, 0);DEVOUT('Municipio...:')
        DEVPOS(34, 0);DEVOUT('UF..........:')
        DEVPOS(35, 0);DEVOUT('Insc.Est....:')
        DEVPOS(36, 0);DEVOUT('Especie.....:')
        DEVPOS(37, 0);DEVOUT('Marca.......:')
        DEVPOS(38, 0);DEVOUT('Numero......:')
        DEVPOS(39, 0);DEVOUT('ANTT........:')

        botao(40,0,'þ SOLICITAR PRODUTO ','*','D')
        DEVPOS(41,0);DEVOUT('Codigo....:')
        DEVPOS(42,0);DEVOUT('Descricao.:')
        DEVPOS(43,0);DEVOUT('Quantidade:')
        DEVPOS(44,0);DEVOUT('Sld.Atual.:')
        DEVPOS(45,0);DEVOUT('Valor Unit:')
        DEVPOS(46,0);DEVOUT('CST.......:')
        DEVPOS(47,0);DEVOUT('CFOP......:')
        DEVPOS(48,0);DEVOUT('ICM (%)...:')
        DEVPOS(49,0);DEVOUT('IPI (%)...:')
        DEVPOS(50,0);DEVOUT('ICM SUB(%):')
        DEVPOS(51,0);DEVOUT('Gramatura.:')
        //DEVPOS(52,0);DEVOUT('Qtd.Itens.:')
        botao(0,64,43,119)
        DEVPOS(0,64);DEVOUT('                 PRODUTOS SOLICITADOS                   ')
        setcor(1)
        mqtd_lin := f := msubtotal := 0
        f++
        @ f,64 SAY ''
        WVW_DrawLabel(,f,COL(),'  Cod.  Descricao                                 Quantd.   Vlr.Unit.   Vlr.Total  CFOP CST',,,,, 'terminal',13,4,,,,,)
        f++
        WVW_DrawLabel(,f,COL(),REPLI(CHR(223),100),,,,, 'terminal',13,4,,,,,)
        setcor(3)
        botao(45,64,51,119)
        DEVPOS(46,64);DEVOUT('              T O T A L     R $ ')
        WVW_DrawLabel(,47,64,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,32])),,,210,, 'arial black',60,30,,,,,)

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
        //IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
        //IF ! AbriArq('SACSELNF','SEL');RETURN NIL;ENDIF
        //sel->(DBCLOSEAREA())
        ********************
        //SELE('ped_s');ORDSETFOCUS(1)
        ********************
        mdocumento:='000000'
        ASIZE(m_codigo,0)
        ASIZE(m_desc,0)
        ASIZE(m_normal,0)
        ASIZE(m_isento,0)
        ASIZE(m_icmsub,0)
        ASIZE(m_icmdif,0)
        ASIZE(m_produto,0)
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mnum_orc := 0
        mserie_not := '1  '
                //ELSE
                //        mserie_not := '900'
                //ENDIF
        //ENDIF
        /*
        IF mel <> NIL
                mmodelo    := '55'
        ELSE
                mmodelo    := '01'
        ENDIF
        */
        mtipo_sigla:='   '
        mei := mModECF := mnECF := mnCOO := SPACE(30)
        mtipo_nfe := mindFinal := mindPress := ' '
        mrefnfe :=mrefCTe := SPACE(44)
        mperc := mperc_aux := m_set[1,20]
        mcod_op := '03'
        muf := m_set[1,10]
        mdata := mdata_sis
        mnome_vend := SPACE(30)
        opcao = 'S'
        mcod_vend := VAL(cod_operado)
        mcod_nota := 'N'
        i = 1
        mcredito := msai_ent := mnota := mfrete_trans := mtipo_nfe:=SPACE(1)
        mtp_vend := muf_trans := mpluf_trans := muf_cli := SPACE(2)
        mcond_vezes := SPACE(3)
        mantt := mapolice := SPACE(12)
        mcod_tran := mcod_cst := SPACE(4)
        mcod_nat := mcod_nat1 := SPACE(5)
        mesp_trans := mmarca_trans := mnum_trans := SPACE(8)
        mplaca_trans := SPACE(7)
        mcpf := minsc_trans := SPACE(11)
        mcgc_trans := SPACE(13)
        mcgc := minsc := SPACE(14)
        mtransporte := SPACE(15)
        mmun_trans := mcid_cli := SPACE(20)
        mnome_trans := SPACE(30)
        mnatureza := mend_trans := SPACE(40)
        mchassis := mdescri1 := mdescri2 := mdescri3 := mdescri4 :=;
        mdescri5 := SPACE(60)
        mvenci  := mvenci1 := mvenci2 := mvenci3 := mvenci4 := mvenci5 := ;
        mvenci6  := mvenci7 := mvenci8 := mvenci9 := mvenci10:= mvenci11:= ;
        mdata_ped := CTOD('  /  /  ')
        mnum_dup := mnum_dup1 := mnum_dup2 := mnum_dup3 := mnum_dup4 := mnum_dup5 := ;
        mnum_dup6 := mnum_dup7 := mnum_dup8 := mnum_dup9 := mnum_dup10:= mnum_dup11:= SPACE(6)
        mvlr_dup := mvlr_dup1 := mvlr_dup2 := mvlr_dup3 := mvlr_dup4 := mvlr_dup5 := ;
        mvlr_dup6 := mvlr_dup7 := mvlr_dup8 := mvlr_dup9 := mvlr_dup10:= mvlr_dup11:= ;
        mcom_ven:=mtot_nota:=mtot_quantd:=mtot_peso:=mdesconto:=;
        mcod_cli := mfrete := mseguro := mencargo := mtp_emp := micm_f := ;
        mvl_vend := mfrete := micm := mdif_icm := micm_sub := ;
        mintev := mintev1 := mintev2 := mintev3 := mintev4 := mintev5 := ;
        mintev6 := mintev7 := mintev8 := mintev9 := mintev10 := mintev11 := mperc_desc := 0
        *********************************************************************
        //SET KEY -4 TO f5_trans(@mnome_trans,@mcgc_trans,@mend_trans,@mmun_trans,;
        //                       @muf_trans,@minsc_trans,@mcod_tran)
        *********************************************************************
        mensagem('Preencha os Campos ou <ESC> p/abandonar')
        setcor(1)
        /*
        @ 1,14 GET mnum_ped PICT '999999' WHEN mcorrecao = NIL .AND. mtipo_nota = 'N' .AND. no_ped = NIL // mesmo PRG.
        @ 2,14 GET mnum_orc PICT '999999' WHEN EMPTY(mnum_ped) .AND. mcorrecao = NIL .AND. mtipo_nota = 'N' .AND. no_ped = NIL // mesmo PRG.
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                fimset()
                RELEASE ALL
                RETURN NIL
        ENDIF
        cons_ped := {}
        IF ! EMPTY(mnum_ped)
                sr_getconnection():exec("SELECT * FROM sacped_s WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_ped)
        	IF LEN(cons_ped) = 0
                        atencao('Pedido nao foi encontrado !!!')
                        LOOP
                ENDIF
                IF ! EMPTY(cons_ped[1,103])
                        atencao('Este pedido ja foi emitido NOTA FISCAL de No.: '+cons_ped[1,103])
                ENDIF
        ELSEIF ! EMPTY(mnum_orc)
                sr_getconnection():exec("SELECT * FROM sacorcam WHERE sr_deleted = ' ' AND pnum_ped = "+sr_cdbvalue(STRZERO(mnum_orc,6)),,.t.,@cons_ped)
        	IF LEN(cons_ped) = 0
                        atencao('Orcamento nao foi encontrado !!!')
                        LOOP
                ENDIF
        ENDIF
        //IF ! AbriArq('SACSELNF','SEL');RETURN NIL;ENDIF
        */
        @ 3,14 GET mserie_not PICT '@!' VALID IF(EMPTY(mserie_not),.F.,.t.)     //WHEN m_set[1,95] = '1' .OR. EMPTY(m_set[1,95])
        @ 4,14 GET mtipo_nfe PICT '9' WHEN men_get(0,0,'Informe para NF-e [1]-NORMAL [2]-COMPLEMENTAR [3]-AJUSTE [4]-DEVOLUCAO/RETORNO') VALID mtipo_nfe $ '1,2,3,4' .AND. lim_get()
        @ 5,14 GET mindFinal PICT '9' WHEN men_get(0,0,'Informe para NF-e [1]-NORMAL [2]-CONSUMIDOR FINAL') VALID mindFinal $ '1,2' .AND. lim_get()
        @ 6,14 GET mindPress PICT '9' WHEN men_get(0,0,'[0]Não aplica [1]Presencial [2]Não presencial,internet [3]Não presencial,Tele-atend. [4]NFC-e c/ent.domicílio [9]Op.não presencial,outros') VALID mindPress $ '0,1,2,3,4,9' .AND. lim_get()
        //@ 6,44 GET mmodelo PICT '@!' VALID mmodelo $ '55,65'
        READ
        IF LASTKEY() = 27
                fimset()
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mtipo_nfe = '2' .OR. mtipo_nfe = '4'
                mtipo_sigla:='   '
                mei := mrefCTe := SPACE(30)
                mModECF := SPACE(2)
                mnECF   := SPACE(3)
                mnCOO   := SPACE(6)
                op_tela(05,05,14,115,'NOTA REFERENCIADA',,'*')
                DEVPOS(1, 0);DEVOUT('Tipo [NF] [NFE] [NFP] [CTE] [ECF]...:')
                DEVPOS(2, 0);DEVOUT('Chave de acesso da NF-e referenciada:')
                DEVPOS(3, 0);DEVOUT('Chave de acesso da CT-e referenciada:')
                DEVPOS(4, 0);DEVOUT('Inscricao Estadual..................:')
                DEVPOS(5, 0);DEVOUT('Modelo da ECF.......................:    [2C] Cupom Fiscal PDV - [2D] Cupom Fiscal (emitido por ECF v2.0)')
                DEVPOS(6, 0);DEVOUT('Numero de ordem sequencial do ECF...:')
                DEVPOS(7, 0);DEVOUT('No.Contador  Ordem de Operação - COO:')
                DEVPOS(8, 0);DEVOUT('Codigo do CST dos Produtos..........:')
                @ 1,38 GET mtipo_sigla PICT '@!' VALID IF(EMPTY(mtipo_sigla),.F.,.T.) .AND. mtipo_sigla $ 'NF NFENFPCTEECF'
                @ 2,38 GET mrefnfe WHEN men_get(0,0,'Informar CHAVE DE ACESSO DA NF-e REFERENCIADA') .AND. mtipo_sigla = 'NFE' .OR. mtipo_sigla = 'NF' VALID IF(EMPTY(mrefnfe),.F.,.T.) .AND. lim_get()
                @ 3,38 GET mrefCTe WHEN men_get(0,0,'Informar CHAVE DE ACESSO DA CT-e REFERENCIADA') .AND. mtipo_sigla = 'CTE' VALID IF(EMPTY(mrefCTe),.F.,.T.) .AND. lim_get()
                @ 4,38 GET mEI WHEN mtipo_sigla # 'ECF'
                @ 5,38 GET mModECF WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mModECF),.F.,.T.) .AND. lim_get()
                @ 6,38 GET mnECF WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mnECF),.F.,.T.) .AND. lim_get()
                @ 7,38 GET mncoo WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mncoo),.F.,.T.) .AND. lim_get()
                @ 8,38 GET mcod_cst PICT '999' WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mcod_cst),.F.,.T.) .AND. lim_get()
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                IF 'N' = op_simnao('S','Confirma a Chave de acesso da NF-e referenciada [S/N]:')
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                wvw_lclosewindow()
        ENDIF
        mtipo_fat := ' '
        mtot_ped := 0
        ****************
        SELE('cli');ORDSETFOCUS(1)
        GO TOP
        ***************
        @ 8,14 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,8,20)
        @ 9,14 GET mcpf PICT '@@R 999.999.999-99' VALID ver_cpf(mcpf) WHEN mcod_cli = 0
        @ 10,14 GET mcgc PICT '@@R 99.999.999/9999-99' VALID ver_cgc(mcgc) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11)
        READ
        IF (EMPTY(mcod_cli) .AND. EMPTY(mcpf) .AND. EMPTY(mcgc)) .OR. LASTKEY() = 27
                atencao('E preciso ser identificado o cliente')
                LOOP
        ENDIF
        IF LEN(ALLTRIM(cli->tel1)) > 10
                atencao('Verifique o TELEFONE deste Cliente tem que ter no Maximo de 10 Posicoes  ....')
                LOOP
        ENDIF
        IF EMPTY(cli->endereco) .OR. EMPTY(cli->cidade) .OR. EMPTY(cli->uf) .OR. EMPTY(cli->numero)
                atencao('O Cadastro deste Cliente estar faltando algum campo OBRIGATORIO ser preenchido !!!!')
                LOOP
        ENDIF
        mcid_cli := cli->cidade
        muf_cli := cli->uf
        ver_cli(mcod_cli,8,20)
        setcor(3)
        DEVPOS(8,14);DEVOUT(STRZERO(mcod_cli,5)+' - ')
        DEVPOS(8,COL());DEVOUT(mcliente)
        DEVPOS(9,14);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(10,14);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(11,14);DEVOUT(cli->insc)
        DEVPOS(12,14);DEVOUT(cli->endereco)
        DEVPOS(13,14);DEVOUT(cli->numero)
        DEVPOS(14,14);DEVOUT(cli->complemento)
        DEVPOS(15,14);DEVOUT(cli->cidade)
        DEVPOS(15,46);DEVOUT(cli->uf)
        DEVPOS(16,14);DEVOUT(cli->tel1)
        IF ! EMPTY(cli->obs)
                setcor(3,'*')
                DEVPOS(17,14);DEVOUT(cli->obs)
        ENDIF
        setcor(1)
        minsc := cli->insc
        muf := cli->uf
        IF cli->uf <> m_set[1,10]
                mcod_nat := '6.102'
        ELSE
                mcod_nat := '5.102'
        ENDIF
        IF cli->uf <> m_set[1,10]
                IF EMPTY(mcgc) 		//.OR. SUBSTR(minsc,1,6) = 'ISENTO'
                        mperc := mperc_aux := m_set[1,33]
                ELSE
                        mperc := mperc_aux := 12
                ENDIF
        ENDIF
/*
        IF ! TestaIe(cli->insc,cli->uf)
                LOOP
        ENDIF
*/
        //IF muf <> m_set[1,19] .AND. EMPTY(minsc) .AND. EMPTY(mcgc)  .AND. m_set[1,19] <> 'BA'
        IF muf <> m_set[1,10] .AND. EMPTY(mcgc)  .AND. m_set[1,10] <> 'BA' .AND. ver_serie() <> '141338' .AND. ver_serie() <> '141535'
                mperc := mperc_aux := m_set[1,33]
        ENDIF
        point = RECNO()
        @ 19,14 GET mcod_nat PICT '9.999' VALID IF(EMPTY(mcod_nat),.F.,ver_nat(mcod_nat))
        @ 19,20 GET mnatureza
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        ver_nat(mcod_nat)
        IF mcod_nat = '5.929' .OR. mcod_nat = '6.929'
                mtipo_sigla:='ECF'
                mei := mrefCTe := SPACE(30)
                mModECF := SPACE(2)
                mnECF   := SPACE(3)
                mnCOO   := SPACE(6)
                op_tela(05,05,14,115,'NOTA REFERENCIADA',,'*')
                DEVPOS(1, 0);DEVOUT('Tipo [NF] [NFE] [NFP] [CTE] [ECF]...:')
                DEVPOS(5, 0);DEVOUT('Modelo da ECF.......................:    [2C] Cupom Fiscal PDV - [2D] Cupom Fiscal (emitido por ECF v2.0)')
                DEVPOS(6, 0);DEVOUT('Numero de ordem sequencial do ECF...:')
                DEVPOS(7, 0);DEVOUT('No.Contador  Ordem de Operação - COO:')
                DEVPOS(8, 0);DEVOUT('Codigo do CST dos Produtos..........:')
                @ 1,38 GET mtipo_sigla PICT '@!' VALID IF(EMPTY(mtipo_sigla),.F.,.T.) .AND. mtipo_sigla $ 'ECF'
                @ 5,38 GET mModECF WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mModECF),.F.,.T.) .AND. lim_get()
                @ 6,38 GET mnECF WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mnECF),.F.,.T.) .AND. lim_get()
                @ 7,38 GET mncoo WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mncoo),.F.,.T.) .AND. lim_get()
                @ 8,38 GET mcod_cst PICT '999' WHEN mtipo_sigla = 'ECF' VALID IF(EMPTY(mcod_cst),.F.,.T.) .AND. lim_get()
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                IF 'N' = op_simnao('S','Confirma a Chave de acesso da NF-e referenciada [S/N]:')
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                wvw_lclosewindow()
        ENDIF
        //@ 20,14 GET mdocumento PICT '999999'
        //@ 21,14 GET mdata PICT '99/99/99'
        //READ
        mdocumento := STRZERO(VAL(mdocumento),6)
        IF LASTKEY() = 27;LOOP;ENDIF
        //mtp_vend := 'AV'
        @ 22,14 GET mtp_vend PICT '@!' VALID mtp_vend $ 'AV,AP,  'WHEN men_get(4,0,'Informe Forma de Pagamento: [AV] - Avista, [AP] - Aprazo ou em BRANCO ')
        @ 23,14 GET mfrete PICT '99,999,999.99'
        @ 24,14 GET mseguro PICT '99,999,999.99'
        @ 25,14 GET mencargo PICT '99,999,999.99'
        @ 26,14 GET mperc_desc PICT '99,999,999.99'
        READ
        //f5_trans(@mnome_trans,@mcgc_trans,@mend_trans,@mmun_trans,;
        //         @muf_trans,@minsc_trans,@mplaca_trans,@mcod_tran,@mantt,@mapolice,@mpluf_trans)
        tela2 := SAVESCREEN(05,39,23,78)
        setcor(1)
        IF mel <> NIL
                mfrete_trans := '0'
        ELSE
                mfrete_trans := '1'
        ENDIF
        @ 28,14 GET mnome_trans PICT '@!'
        @ 29,14 GET mfrete_trans PICT '@!' VALID mfrete_trans $ '0,1,2' .AND. lim_get() .AND. IF(EMPTY(mfrete_trans),.F.,.T.) WHEN men_get(0,0,'Frete por conta <1>Emitente e <2>Destinatario ("CAMPO-OBRIGATORIO")')
        @ 30,14 GET mplaca_trans PICT '@@R XXX-9999' VALID IF(EMPTY(mplaca_trans),.T.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 30,32 GET mpluf_trans PICT '@!' VALID IF(EMPTY(mpluf_trans),.T.,.T.) WHEN ! EMPTY(mnome_trans)
        IF mcgccpf = 'CGC'
                @ 31,14 GET mcgc_trans PICT '@@R 99.999.999/9999-99' VALID IF(EMPTY(mcgc_trans),.F.,.T.)  WHEN ! EMPTY(mnome_trans)
        ELSEIF mcgccpf = 'CPF'
                @ 31,14 GET mcgc_trans PICT '@@R 999.999.999-99' VALID IF(EMPTY(mcgc_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        ELSE
                @ 31,14 GET mcgc_trans PICT '@!' VALID IF(EMPTY(mcgc_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        ENDIF
        @ 32,14 GET mend_trans PICT '@!' VALID IF(EMPTY(mend_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 33,14 GET mmun_trans PICT '@!' VALID IF(EMPTY(mmun_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 34,14 GET muf_trans PICT '@!' VALID IF(EMPTY(muf_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 35,14 GET minsc_trans PICT '@!' VALID IF(EMPTY(minsc_trans),.F.,.T.) WHEN ! EMPTY(mnome_trans)
        @ 36,14 GET mesp_trans PICT '@!'
        @ 37,14 GET mmarca_trans PICT '@!'
        @ 38,14 GET mnum_trans PICT '@!'
        @ 39,14 GET mantt PICT '@!'
        READ
        IF LASTKEY() = 27;LOOP;ENDIF
        mcod_nataux := mcod_nat
        mtp_emp := AT('ME',minsc)
        WHILE .T.
                botao(0,64,43,119)
                DEVPOS(0,64);DEVOUT('                 PRODUTOS SOLICITADOS                 ')
                mqtd_lin := f := msubtotal := 0
                IF LEN(m_produto) > 30
                        mqtd_lin := LEN(m_produto) - 40
                ENDIF
                f++
                @ f,64 SAY ''
                WVW_DrawLabel(,f,COL(),'  Cod.  Descricao                                 Quantd.   Vlr.Unit.   Vlr.Total  CFOP CST',,,,, 'terminal',13,4,,,,,)
                f++
                WVW_DrawLabel(,f,COL(),REPLI(CHR(223),99),,,,, 'terminal',13,4,,,,,)
                FOR i = 1 TO LEN(m_produto)
                        SETCOLOR('W/b,W/b')
                        IF mqtd_lin < i
                                @ 1+f,64 SAY ''
                                WVW_DrawLabel(,1+f,COL()+1,m_produto[i],,,,, 'terminal',13,4,,,,,)
                                f++
                        ENDIF
                        msubtotal := msubtotal + iat((m_normal[i,7] * m_normal[i,5]),m_set[1,32])
                NEXT

                tela_ := {}
                tela_ := WVW_SAVESCREEN(,0,64,lba,119)
                setcor(3)
                botao(45,64,51,119)
                DEVPOS(46,64);DEVOUT('              T O T A L     R $ ')
                WVW_DrawLabel(,47,65,TRANSFORM(msubtotal,ALLTRIM('@E '+m_set[1,32])),,,210,, 'arial black',60,30,,,,,)
                botao(40,0,'þ SOLICITAR PRODUTO ','*','D')
                DEVPOS(41,0);DEVOUT('Codigo....:')
                DEVPOS(42,0);DEVOUT('Descricao.:')
                DEVPOS(43,0);DEVOUT('Quantidade:')
                DEVPOS(44,0);DEVOUT('Sld.Atual.:')
                DEVPOS(45,0);DEVOUT('Valor Unit:')
                DEVPOS(46,0);DEVOUT('CST.......:')
                DEVPOS(47,0);DEVOUT('CFOP......:')
                DEVPOS(48,0);DEVOUT('ICM (%)...:')
                DEVPOS(49,0);DEVOUT('IPI (%)...:')
                DEVPOS(50,0);DEVOUT('ICM SUB(%):')
                DEVPOS(51,0);DEVOUT('Qtd.Itens.:')
                DEVPOS(51,0);DEVOUT('Gramatura.:')
                mensagem('<ENTER><ENTER> p/Finalizar a Nota - <ESC> Abandona ')
                mcod_merc := mquantd := mdesconto := mpr_venda := mdif_icm := 0
                mcod_bc := SPACE(14)
                mmerc := SPACE(40)
                mgrupo := SPACE(5)
                micm := mperc
                setcor(1)
                @ 41,12 GET mcod_bc PICT '@!'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF EMPTY(mcod_bc)
                        @ 41,12 GET mcod_bc PICT '@!'
                        READ
                        IF LASTKEY() = 27;LOOP;ENDIF
                        IF EMPTY(mcod_bc)
                                sacnf_e(m_normal,'1')
                                mnf1 := mdocumento
                                EXIT
                        ELSE
                                mcod_merc := VAL(mcod_bc)
                                cons_merc := {}
                                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                                IF LEN(cons_merc) = 0
                                        atencao('Codigo da mercadoria nao cadastrado')
                                        LOOP
                                ENDIF
                        ENDIF
                ELSEIF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@cons_merc)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mcod_merc := VAL(mcod_bc)
                ELSE
                        mcod_merc := VAL(mcod_bc)
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                        IF LEN(cons_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                ENDIF
                misento := vercst(IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,39]))
                setcor(3)
                DEVPOS(41,12);DEVOUT(STR(cons_merc[1,1],5)+SPACE(10))
                setcor(1)
                mcod_merc := cons_merc[1,1]
                mponto := ASCAN(m_codigo,mcod_merc)

                IF mponto > 0
                        opcao := op_simnao('S','Mercadoria ja foi solicitada deseja incluir novamente:')
                        IF opcao = 'N';LOOP;ENDIF
                ENDIF
                IF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')        //.AND. muf = m_set[1,19]
                        micm := mperc := 0
                ELSE
                        micm := mperc
                ENDIF
                //IF (cons_merc[1,62] > 0 .AND. muf = m_set[1,19]) .OR. (cons_merc[1,62] > 0 .AND. ! EMPTY(cons_merc[1,67]))
                //        micm := cons_merc[1,62]
                //ENDIF
                //IF (ver_serie() = '141338' .OR. ver_serie() = '141535') .AND. cons_merc[1,62] > 0
                //        micm := cons_merc[1,62]
                //ENDIF
                IF ver_ncm(ALLTRIM(cons_merc[1,38]),,1)
                        atencao('Este Produto estar com o NCM errado Verifique para poder tirar esta Nota...')
                        LOOP
                ENDIF
                IF EMPTY(cons_merc[1,7])
                        atencao('Este Produto nao estar com a UNIDADE, Verifique para poder tirar esta Nota...')
                        LOOP
                ENDIF
                mpr_venda := cons_merc[1,6]
                mmerc := cons_merc[1,2]
                mgrupo := cons_merc[1,31]
                mval_venda := cons_merc[1,6]
                //misento := cons_merc[1,61]
                msittrib := IF(! EMPTY(mcod_cst),mcod_cst,cons_merc[1,39])
                //IF cli->uf <> m_set[1,10] .AND. ! EMPTY(cons_merc[1,108])
                //        mcod_nataux := cons_merc[1,108]
                //ELSEIF ! EMPTY(cons_merc[1,109])
                //        mcod_nataux := cons_merc[1,109]
                //ENDIF
                setcor(3)
                DEVPOS(41,12);DEVOUT(STR(mcod_merc,5))
                DEVPOS(42,12);DEVOUT(mmerc)
                DEVPOS(44,12);DEVOUTPICT(cons_merc[1,8],'999999.99')
                //DEVPOS(46,12);DEVOUT(cons_merc[1,68])
                //DEVPOS(51,12);DEVOUTPICT(cons_merc[1,76],'999.99')
                //IF cons_merc[1,23] <> 0
                //        mval_venda := iat(cons_merc[1,46],2) - ((cons_merc[1,23]/100)*iat(cons_merc[1,46],2))
                //ENDIF
                setcor(1)
                //IF ! EMPTY(mperc_desc)
                //        mval_venda := mval_venda - (mval_venda * (mperc_desc / 100))
                //ENDIF
                icm_merc(mcod_merc)
                @ 43,12 GET mquantd PICT  ALLTRIM(m_set[1,31]) VALID IF(mquantd > 0,.T.,.F.)
                @ 45,12 GET mval_venda PICT ALLTRIM(m_set[1,32])             //VALID lim_get() WHEN men_get(21,37,'Informe o Preco a ser faturado <ESC>retornar')
                @ 46,12 GET msittrib PICT '999' VALID vercst(msittrib,1)             //VALID lim_get() WHEN men_get(21,37,'Informe o Preco a ser faturado <ESC>retornar')
                @ 47,12 GET mcod_nataux PICT '9.999' VALID IF(EMPTY(mcod_nataux),.F.,ver_nat(mcod_nataux,,47,18))
                @ 48,12 GET micm PICT '999.99'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                //IF mquantd > cons_merc[1,55] .AND. m_set[1,16] = 'S'
                //        IF ! aut_sen('Produto Solicitado esta com Saldo a MENOR, Senha Autorizacao:','LIBSLDNF')
                //                LOOP
                //        ENDIF
                //ENDIF
                //misento := vercst(cons_merc[1,68])
                misento := vercst(msittrib)
                opcao := op_simnao('S','Confirma Saida da Mercadoria:')
                IF opcao = 'N' .OR. SUBSTR(mmerc,1,11) = 'MAO DE OBRA' .OR. mquantd = 0
                        LOOP
                ENDIF
                IF (misento = 'I' .OR. misento = '' .OR. misento = 'F')
                        micm_f = 0
                ENDIF
                AADD(m_codigo,mcod_merc)
                AADD(m_produto,STR(mcod_merc,5)+' '+mmerc+' '+TRANSFORM(mquantd,'99999.99')+' '+TRANSFORM(mval_venda,ALLTRIM(m_set[1,32]))+' '+TRANSFORM(mval_venda*mquantd,ALLTRIM(m_set[1,32]))+'  '+mcod_nataux+' '+msittrib)
                IF mtipo_nota = 'C'
                                             //  1      2      3         4       5           6          7           8         9    10   11     12   13141516     17      18     19    202122        23           24       25      26       27        28      29   303132     33         34
                                AADD(m_normal,{mgrupo,mmerc,mquantd,mpr_venda,mval_venda,cons_merc[1,7],0,cons_merc[1,21],mdesconto,0,micm_f,misento,0,0,0,0,mval_venda,micm,mcod_merc,0,0,0,cons_merc[1,38],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,0,0,'',msittrib,mcod_nataux})
                ELSE    //IF m_set[1,17] = 'S'
                        IF mcod_nataux = '6.915' .OR. mcod_nataux = '5.915'
                                AADD(m_normal,{mgrupo,mmerc,mquantd,mpr_venda,mval_venda,cons_merc[1,7],0,cons_merc[1,21],mdesconto,0,micm_f,misento,0,0,0,0,mval_venda,micm,mcod_merc,0,0,0,cons_merc[1,38],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,0,0,'',msittrib,mcod_nataux})
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F') .AND. muf = m_set[1,19] .AND. cons_merc[1,71] = 'S'
                                AADD(m_normal,{mgrupo,mmerc,mquantd,mpr_venda,mval_venda,cons_merc[1,7],0,cons_merc[1,21],mdesconto,0,micm_f,misento,0,0,0,0,mval_venda,micm,mcod_merc,0,0,0,cons_merc[1,38],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,0,0,'',msittrib,mcod_nataux})
                        ELSEIF (misento = 'I' .OR. misento = 'N' .OR. misento = 'F')
                                AADD(m_normal,{mgrupo,mmerc,mquantd,mpr_venda,mval_venda,cons_merc[1,7],0,cons_merc[1,21],mdesconto,0,micm_f,misento,0,0,0,0,mval_venda,micm,mcod_merc,0,0,0,cons_merc[1,38],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,0,0,'',msittrib,mcod_nataux})
                        ELSEIF mdif_icm > 0
                                AADD(m_normal,{mgrupo,mmerc,mquantd,mpr_venda,mval_venda,cons_merc[1,7],0,cons_merc[1,21],mdesconto,0,micm_f,misento,0,0,0,0,mval_venda,micm,mcod_merc,0,0,0,cons_merc[1,38],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,0,0,'',msittrib,mcod_nataux})
                        ELSE
                                AADD(m_normal,{mgrupo,mmerc,mquantd,mpr_venda,mval_venda,cons_merc[1,7],0,cons_merc[1,21],mdesconto,0,micm_f,misento,0,0,0,0,mval_venda,micm,mcod_merc,0,0,0,cons_merc[1,38],mchassis,mdescri1,mdescri2,mdescri3,mdescri4,mdescri5,0,0,'',msittrib,mcod_nataux})
                        ENDIF
                ENDIF
        ENDDO
ENDDO
RETURN NIL
*********************** FIM ***************************

