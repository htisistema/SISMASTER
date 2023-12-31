*******************************************************
*** CON251.PRG: Baixa INDIVIDUAL e ESTORNO de Duplicatas (APAGAR)
*******************************************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION con22(mtip,mcx)
************************
LOCAL MPRG:='CON22',;
      tela,lin,mtipo,mduplicata,mcheque,mdatpag,mvlpago,mnota,mtipo_comp,;
      mcod_vend,mforn_aux,opcao,mbanco,lc,cc,lb,cb,mcomissao,mnumero,;
      pconta,mtip_for,mobs,mc_c,mnbanco:='   ',mobs_b,;
      mvalor_dup,mcliente,memissao,mvenc,mnum_ped,mvalor_cont,mcont_doc,;
      mtotal_doc,m_dupp:={},m_pos:={},li,ci,la,ca,tela1,point,mordem,mdias_atras,;
      mjuros := 0,mmulta := 0,mtp_pg:=' ',mconta_c,mcod_banco:=0

PRIVATE mcod_forn,mcodemp:=SPACE(3),mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),aret := {}

IF mtip = 'E'
        IF ! ver_nivel(mprg+'E','CONTA APAGAR (ESTORNO DE DOCUMENTOS)','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSEIF mtip = 'C'
        IF ! ver_nivel(mprg+'C','CONTA APAGAR (CONFIRMACAO DE RECEBIMENTO DO DOCUMENTOS)','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSE
        IF ! ver_nivel(mprg,'CONTA APAGAR (BAIXA INDIVIDUAL DE DOCUMENTOS)','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ENDIF


lc := cc := 0
lb := 16
cb := 79

li := ci := 0
la := 15
ca := 60

tela := SAVESCREEN(01,00,24,79)
lin=1
mcod_forn:= mforn_aux := 0
mduplicata := SPACE(12)
SET KEY -5 TO f6_forn()
IF mtip = 'E'
        op_tela(05,10,29,90," CONTAS A PAGAR -  Estorno de Documentos ")
ELSEIF mtip = 'C'
        op_tela(05,10,29,90," CONTAS A PAGAR -  Confirmcao de Recebimento do Documentos ")
ELSE
        op_tela(05,10,29,90," CONTAS A PAGAR -  Baixa de Documentos ")
ENDIF

WHILE .T.
	*------------------------------------------------------------------------------------
	IF ! AbriArq('mastdupp','dupp');RETURN NIL;ENDIF
	IF ! AbriArq('mastforn','forn');RETURN NIL;ENDIF
	IF ! AbriArq('mastcaixa','caix');RETURN NIL;ENDIF
	*------------------------------------------------------------------------------------
        mtipo_imp := m_cfg[34]
        exibi_prg(mprg)
        DEVPOS(lc+1,cc+1);DEVOUT('Codigo Fornecedor/Outros.:')
        DEVPOS(lc+2,cc+1);DEVOUT('Tipo do Documento........:')
        DEVPOS(lc+3,cc+1);DEVOUT('Numero Banco.............:')
        DEVPOS(lc+4,cc+1);DEVOUT('Numero Documento.........:')
        DEVPOS(lc+5,cc+1);DEVOUT('Data Emissao.............:')
        DEVPOS(lc+6,cc+1);DEVOUT('Data Vencimento..........:')
        DEVPOS(lc+7,cc+1);DEVOUT('Data Pagamento...........:')
        DEVPOS(lc+8,cc+1);DEVOUT('Valor a Pagar............:')
        DEVPOS(lc+9,cc+1);DEVOUT('Codigo do Banco..........:')
        DEVPOS(lc+10,cc+1);DEVOUT('Numero do Banco..........:')
        DEVPOS(lc+11,cc+1);DEVOUT('Numero Conta Corrente....:')
        DEVPOS(lc+12,cc+1);DEVOUT('Numero do Cheque.........:')
        DEVPOS(lc+13,cc+1);DEVOUT('Tipo de Pagamento........:')
        DEVPOS(lc+14,cc+1);DEVOUT('Obs.Inclusao:')
        DEVPOS(lc+15,cc+1);DEVOUT('Obs. BAIXA..:')
        Mensagem('Digite o Cod.do Fornecedor/Outros Documento. [ESC] Abandona.')
        mvalor_dup := mcomissao := mdias_atras := 0
        mcod_banco := 0
        mnota := SPACE(8)
        mcliente := SPACE(40)
        mtipo_comp := mtipo := SPACE(2)
        mduplicata=SPACE(12)
        mcheque=SPACE(6)
        mnbanco := '   '
        mbanco := SPACE(1)
        mcod_vend := mnumero := SPACE(3)
        mobs := mobs_b := SPACE(60)
        mc_c := mconta_c := SPACE(10)
        pconta := mtp_pg := ' '
        @ lc+1,cc+28 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,lc+1,cc+35)
        @ lc+2,cc+28 GET mtipo PICT '@!' VALID mtipo $ 'DU,CH,PA,FR,  ' WHEN EMPTY(mcod_forn)
        @ lc+3,cc+28 GET mnumero PICT '@!' WHEN mtipo <> 'DU' .AND. ! EMPTY(mtipo) .AND.  EMPTY(mcod_forn)
        @ lc+4,cc+28 GET mduplicata PICT '@!' WHEN ! EMPTY(mtipo) .AND.  EMPTY(mcod_forn)
        READ
        IF LASTKEY()=27         // .OR. mduplicata := SPACE(12)
                RESTSCREEN(01,00,24,79,tela)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_forn)
                v_fornece(mcod_forn,lc+1,cc+35)
                tela1 := SAVESCREEN(01,00,24,79)
                mordem := '9'
                mordem := mensagem1('Tipo de Ordem [2] DOCUMENTO - [9] VENCIMENTO:','9','2,9')
                mtotal_doc := mcont_doc := 0
                m_dupp := {}
                m_pos := {}
                cons_dupp :={}
                ccomm := "SELECT * FROM mastdupp WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                IF mtip <> 'E'
                        ccomm := ccomm + " AND datpag IS NULL"
                ELSE
                        ccomm := ccomm + " AND datpag IS NOT NULL"
                ENDIF
                IF mordem = '9'
                        ccomm := ccomm + " ORDER BY venc"
                ELSE
                        ccomm := ccomm + " ORDER BY duplicata"
                ENDIF
                sr_getconnection():exec(ccomm,,.t.,@cons_dupp)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_dupp) > 0
                        i := 0
                        FOR i = 1 TO LEN(cons_dupp)
                                AADD(m_dupp,' '+cons_dupp[i,2]+' '+cons_dupp[i,4]+'  '+cons_dupp[i,3]+'   '+DTOC(cons_dupp[i,10])+'   '+TRANSFORM(cons_dupp[i,16],'999,999.99')+' '+cons_dupp[i,21]+' '+DTOC(cons_dupp[i,32])+' '+cons_dupp[i,33])
                                AADD(m_pos,cons_dupp[i,34])
                                mcont_doc ++
                                mtotal_doc := mtotal_doc + cons_dupp[i,16]
                        NEXT
                        SELE('dupp');ORDSETFOCUS(VAL(mordem))
                        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                        op_tela(10,30,25,90,'Consulta dos Documentos')
                        setcor(3)
                        DEVPOS(li+1,ci+01);DEVOUT('Documento')
                        DEVPOS(li+1,ci+16);DEVOUT(' No.')
                        DEVPOS(li+1,ci+22);DEVOUT('Vencimento')
                        DEVPOS(li+1,ci+39);DEVOUT('Valor')
                        DEVPOS(li+1,ci+46);DEVOUT('Dat.Conf.')
                        DEVPOS(li+1,ci+56);DEVOUT('Ope.')
                        @ li+2,ci TO li+2,ca
                        @ la-2,ci TO la-2,ca
                        DEVPOS(la-1,ci+1);DEVOUT('Quantidade:')
                        DEVPOS(la-1,ci+24);DEVOUT('Total:')
                        setcor(1)
                        DEVPOS(la-1,ci+13);DEVOUT(STRZERO(mcont_doc,4))
                        DEVPOS(la-1,ci+31);DEVOUT(TRANSFORM(mtotal_doc,'9,999,999.99'))
                        point := ACHOICE(li+3,ci+1,la-3,ca-1,m_dupp,,,point)
                        wvw_lclosewindow()
                        DO CASE
                                CASE LASTKEY()=27
                                        LOOP
                                CASE LASTKEY() = 13
                                        GO m_pos[point]
                                        mjuros  := mmulta := 0
                                        mcodemp := dupp->empresa
                                        mdatpag :=mdata_sis
                                        mvlpago :=dupp->valor
                                        mbanco  := SUBSTR(dupp->banco,1,1)
                                        mvlpago :=dupp->valor
                                        mduplicata := dupp->duplicata
                                        mtipo   := dupp->tipo
                                        mobs_b  := dupp->obs_b
                                        mobs    := dupp->obs
                                        mtp_pg  := dupp->tp_pg
                                        setcor(3)
                                        @ lc+1,cc+35 SAY dupp->cliente
                                        @ lc+2,cc+28 SAY dupp->tipo
                                        @ lc+3,cc+28 SAY dupp->numero
                                        @ lc+4,cc+28 SAY dupp->duplicata+dupp->conta
                                        @ lc+5,cc+28 SAY dupp->emissao
                                        @ lc+6,cc+28 SAY dupp->venc
                                        @ lc+8,cc+28 SAY dupp->valor PICT "99,999,999.99"
                                        @ lc+14,cc+15 SAY dupp->obs
                                        mvlpago=dupp->valor
                                        setcor(1)
                                        @ lc+7,cc+28 GET mdatpag WHEN mtip = NIL .AND. mcx = NIL
                                        @ lc+8,cc+28 GET mvlpago PICT "99,999,999.99" WHEN mtip = NIL .OR. mtip = 'C'
                                        @ lc+9,cc+28 GET mcod_banco PICT "999" VALID IF(mcod_banco>15,.F.,.T.) WHEN mtip = NIL
                                        READ
                                        IF (! EMPTY(mcod_banco) .OR. ver_serie() = '141235') .AND. mtip = NIL
                                                IF EMPTY(mcod_banco)
                                                        atencao('Este Banco nao esta Cadastrado')
                                                        LOOP
                                                ENDIF
                                                ('ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')))->(DBCLOSEAREA())
                                                IF ! AbriArq('sacban'+ALLTRIM(TRANSFORM(mcod_banco,'99')),'ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')));RETURN NIL;ENDIF
                                                **************
                                                SELE('ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')));ORDSETFOCUS(1)
                                                **************
                                                IF LASTREC() = 0
                                                        atencao('Este Banco nao esta Cadastrado')
                                                        LOOP
                                                ELSE
                                                        GO TOP
                                                        mnbanco := (SELE())->n_banco
                                                        mconta_c := (SELE())->c_c
                                                        setcor(3)
                                                        DEVPOS(lc+9,cc+32);DEVOUT((SELE())->banco)
                                                ENDIF
                                                SELE('dupp');ORDSETFOCUS(VAL(mordem))
                                                setcor(3)
                                                DEVPOS(lc+10,cc+28);DEVOUT(mnbanco)
                                                DEVPOS(lc+11,cc+28);DEVOUT(mconta_c)
                                                setcor(1)
                                        ELSE
                                                @ lc+10,cc+28 GET mnbanco PICT '999' WHEN mtip = NIL
                                                @ lc+11,cc+28 GET mconta_c PICT '@!' WHEN mtip = NIL
                                        ENDIF
                                        @ lc+12,cc+28 GET mcheque PICT '999999' WHEN mtip = NIL
                                        @ lc+13,cc+28 GET mtp_pg PICT '@!' WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar') .AND. mtip = NIL
                                        @ lc+15,cc+15 GET mobs_b PICT '@!' WHEN mtip = NIL
                                        READ
                                        IF LASTKEY()=27
                                                LOOP
                                        ENDIF
                        ENDCASE
                ELSE
                        atencao('Nao existe nenhum Documento a ser baixado....')
                        LOOP
                ENDIF
        ELSE
                IF ! dupp->(DBSEEK(mtipo+mduplicata))
                        atencao('Documento nao Cadastrado !!!')
                        LOOP
                ENDIF

                IF mtip <> 'E'
                        IF FOUND() .AND. dupp->pago = 'B'
                                WHILE ! EOF()
                                        IF mtipo = dupp->tipo .AND. mduplicata = dupp->duplicata .AND. dupp->pago = ' '
                                                EXIT
                                        ENDIF
                                        SKIP
                                ENDDO
                                IF mtipo <> dupp->tipo .OR. mduplicata <> dupp->duplicata .OR. dupp->pago = 'B'
                                        atencao('Documento PAGO !!!')
                                        LOOP
                                ENDIF
                        ENDIF
                ELSE
                        IF FOUND() .AND. dupp->pago <> 'B'
                                WHILE ! EOF()
                                        IF mtipo = dupp->tipo .AND. mduplicata = dupp->duplicata .AND. dupp->pago <> ' '
                                                EXIT
                                        ENDIF
                                        SKIP
                                ENDDO
                                IF mtipo <> dupp->tipo .OR. mduplicata <> dupp->duplicata .OR. dupp->pago <> 'B'
                                        atencao('Documento nao PAGO !!!')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                mcod_forn := VAL(dupp->fornec)
                mforn_aux := VAL(dupp->fornec)
                Mensagem('Digite o Codigo do cliente ou [F6]p/consultar. [ESC] Abandona.')
                @ lc+1,cc+28 GET mcod_forn PICT '99999'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF mcod_forn <> mforn_aux
                        GO TOP
                        SEEK mtipo+mnumero+mduplicata+' '+STRZERO(mcod_forn,4)
                        IF ! FOUND()
                                atencao('Nao existe esta duplicata ou ja foi PAGA !!!')
                                LOOP
                        ENDIF
                ENDIF
                mdatpag=mdata_sis
                mcodemp := dupp->empresa
                mvlpago=dupp->valor
                mbanco := SUBSTR(dupp->banco,1,1)
                mvlpago=dupp->valor
                mobs_b := dupp->obs_b
                mobs := dupp->obs
                mtp_pg := dupp->tp_pg
                setcor(3)
                @ lc+1,cc+35 SAY dupp->cliente
                @ lc+4,cc+28 SAY mduplicata+dupp->conta
                @ lc+5,cc+28 SAY dupp->emissao
                @ lc+6,cc+28 SAY dupp->venc
                @ lc+8,cc+28 SAY dupp->valor PICT "99,999,999.99"
                @ lc+12,cc+28 SAY dupp->obs
                mvlpago=dupp->valor
                setcor(1)
                @ lc+7,cc+28 GET mdatpag WHEN mtip <> 'E'
                @ lc+8,cc+28 GET mvlpago PICT "99,999,999.99" WHEN mtip <> 'E'
                @ lc+9,cc+28 GET mcod_banco PICT "999" VALID IF(mcod_banco>15,.F.,.T.)
                READ
                IF (! EMPTY(mcod_banco) .OR. ver_serie() = '141235') .AND. mtip = NIL
                        IF EMPTY(mcod_banco)
                                atencao('Este Banco nao esta Cadastrado')
                                LOOP
                        ENDIF
                        ('ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')))->(DBCLOSEAREA())
                        IF ! AbriArq('sacban'+ALLTRIM(TRANSFORM(mcod_banco,'99')),'ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')));RETURN NIL;ENDIF
                        **************
                        SELE('ban'+ALLTRIM(TRANSFORM(mcod_banco,'99')));ORDSETFOCUS(1)
                        **************
                        IF LASTREC() = 0
                                atencao('Este Banco nao esta Cadastrado')
                                LOOP
                        ELSE
                                GO TOP
                                mnbanco := (SELE())->n_banco
                                mconta_c := (SELE())->c_c
                                setcor(3)
                                DEVPOS(lc+9,cc+32);DEVOUT((SELE())->banco)
                        ENDIF
                        SELE('dupp');ORDSETFOCUS(VAL(mordem))
                        setcor(3)
                        DEVPOS(lc+10,cc+28);DEVOUT(mnbanco)
                        DEVPOS(lc+11,cc+28);DEVOUT(mconta_c)
                        setcor(1)
                ELSE
                        @ lc+10,cc+28 GET mnbanco PICT '999'
                        @ lc+11,cc+28 GET mconta_c PICT '@!'
                ENDIF
                @ lc+12,cc+28 GET mcheque PICT '999999' WHEN mtip = NIL
                @ lc+13,cc+28 GET mtp_pg PICT '@!' WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar')
                @ lc+15,cc+15 GET mobs_b PICT '@!' WHEN mtip = NIL
                READ
                IF LASTKEY()=27
                        LOOP
                ENDIF
        ENDIF
        IF EMPTY(dupp->dat_receb) .AND. mtip = 'C'
                opcao := op_simnao('S','Confirma o Recebimento do Documento:')
        ELSEIF ! EMPTY(dupp->dat_receb) .AND. mtip = 'C'
                opcao := op_simnao('N','Confirma o  E S T O R N O  da Confirmacao de Recebimento do Documento:')
        ELSE
                opcao := op_simnao('S','Confirma a Operacao:')
        ENDIF
        IF opcao = 'N'
                LOOP
        ENDIF
        IF mvlpago < dupp->valor .AND. mtip <> 'C'
                pconta := op_simnao('S','Este Valor vai ser por CONTA:')
        ENDIF
                IF mtip = 'E'
		        aret := {}
        		cComm  := "UPDATE mastdupp SET "
			ccomm := ccomm +"datpag = NULL"
		        ccomm := ccomm +",vlpago  = 0"
			ccomm := ccomm +",cheque = ''"
			ccomm := ccomm +",nbanco = ''"
			ccomm := ccomm +",conta_c = ''"
			ccomm := ccomm +",conta = ''"
			ccomm := ccomm +",desconto = 0"
			ccomm := ccomm +",juros = 0"
			ccomm := ccomm +",pago = ''"
			ccomm := ccomm +",banco = ''"
		        ccomm := ccomm +",operador  = "+sr_cdbvalue(cod_operado)
			ccomm := ccomm +" WHERE SR_RECNO = "+sr_cdbvalue(m_pos[point])
			//ccomm := ccomm +" WHERE tipo = "+sr_cdbvalue(dupp->tipo)+" AND duplicata = "+sr_cdbvalue(dupp->duplicata)+" AND fornec = "+sr_cdbvalue(dupp->fornec)+" AND venc = "+sr_cdbvalue(dupp->venc)
        		sr_getconnection():exec(ccomm,,.f.)
        		//sr_getconnection():exec('COMMIT',,.f.)
                ELSEIF mtip = 'C'
		        aret := {}
        		cComm  := "UPDATE mastdupp SET "
		        ccomm := ccomm +"valor  = "+sr_cdbvalue(mvlpago)
                        IF EMPTY(dupp->dat_receb)
			        ccomm := ccomm +",dat_receb = "+sr_cdbvalue(mdata_sis)
			        ccomm := ccomm +",ope_receb = "+sr_cdbvalue(cod_operado)
                        ELSE
			        ccomm := ccomm +",dat_receb = NULL"
			        ccomm := ccomm +",ope_receb = ' '"
                        ENDIF
			ccomm := ccomm +" WHERE SR_RECNO = "+sr_cdbvalue(m_pos[point])
			//ccomm := ccomm +" WHERE tipo = "+sr_cdbvalue(dupp->tipo)+" AND duplicata = "+sr_cdbvalue(dupp->duplicata)+" AND fornec = "+sr_cdbvalue(dupp->fornec)+" AND venc = "+sr_cdbvalue(dupp->venc)
        		sr_getconnection():exec(ccomm,,.f.)
        		sr_getconnection():exec('COMMIT',,.f.)
                        LOOP
                ELSE
                        mcliente := dupp->cliente
                        mtip_for := dupp->tip_for
		        aret:={}
        		cComm  := "UPDATE mastdupp SET "
			ccomm := ccomm +"datpag = "+sr_cdbvalue(mdatpag)
		        ccomm := ccomm +",vlpago  = "+sr_cdbvalue(mvlpago)
			ccomm := ccomm +",cheque = "+sr_cdbvalue(mcheque)
			ccomm := ccomm +",nbanco = "+sr_cdbvalue(STRZERO(mcod_banco,3))
			ccomm := ccomm +",conta_c = "+sr_cdbvalue(mconta_c)
			ccomm := ccomm +",tp_pg = "+sr_cdbvalue(mtp_pg)
                        IF pconta = 'S'
                                pconta := '*'
                                mvalor_dup := dupp->valor_dup
                                mvalor_cont := dupp->valor-mvlpago
                                memissao := dupp->emissao
                                mvenc := dupp->venc
                                mcod_vend := dupp->vendedor
                                mnum_ped := dupp->num_ped
				ccomm := ccomm +",valor = "+sr_cdbvalue(mvlpago)
				ccomm := ccomm +",conta = "+sr_cdbvalue(pconta)
                        ELSE
                                IF mvlpago<dupp->valor
					ccomm := ccomm +",desconto = "+sr_cdbvalue(dupp->valor-mvlpago)
                                ELSE
					ccomm := ccomm +",juros = "+sr_cdbvalue(mvlpago-dupp->valor)
                                ENDIF
                        ENDIF
			ccomm := ccomm +",pago = 'B'"
			ccomm := ccomm +",banco = "+sr_cdbvalue(mbanco)
		        ccomm := ccomm +",operador  = "+sr_cdbvalue(cod_operado)
		        ccomm := ccomm +",obs  = "+sr_cdbvalue(mobs)
		        ccomm := ccomm +",obs_b  = "+sr_cdbvalue(mobs_b)
		        ccomm := ccomm +",data_so  = "+sr_cdbvalue(mdata_sis)
			ccomm := ccomm +" WHERE SR_RECNO = "+sr_cdbvalue(m_pos[point])
			//ccomm := ccomm +" WHERE tipo = "+sr_cdbvalue(dupp->tipo)+" AND duplicata = "+sr_cdbvalue(dupp->duplicata)+" AND fornec = "+sr_cdbvalue(dupp->fornec)+" AND venc = "+sr_cdbvalue(dupp->venc)+' AND SR_RECNO = '+sr_cdbvalue(m_pos[point])
        		sr_getconnection():exec(ccomm,,.f.)
        		//sr_getconnection():exec('COMMIT',,.f.)
                ENDIF
        IF pconta = '*'
                sr_getconnection():exec('INSERT INTO mastdupp ('+;
                        'empresa   ,'+;//1
                        'tipo      ,'+;//2
                        'numero    ,'+;//3
                        'duplicata ,'+;//4
                        'valor_dup ,'+;//5
                        'tip_for   ,'+;//6
                        'fornec    ,'+;//7
                        'cliente   ,'+;//8
                        'emissao   ,'+;//9
                        'venc      ,'+;//10
                        'valor     ,'+;//11
                        'pago      ,'+;//12
                        'vendedor  ,'+;//13
                        'num_ped   ,'+;//14
                        'conta     ,'+;//15
                        'banco     ,'+;//16
                        'tp_pg     ,'+;//17
                        'operador  ,'+;//18
                        'obs       ,'+;//19
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mcodemp             )+','+; //1
                        sr_cdbvalue(mtipo               )+','+; //2
                        sr_cdbvalue(mnumero             )+','+; //3
                        sr_cdbvalue(mduplicata          )+','+; //4
                        sr_cdbvalue(mvalor_dup          )+','+; //5
                        sr_cdbvalue(mtip_for            )+','+; //6
                        sr_cdbvalue(STRZERO(mcod_forn,4))+','+; //7 
                        sr_cdbvalue(mcliente            )+','+; //8 
                        sr_cdbvalue(memissao            )+','+; //9 
                        sr_cdbvalue(mvenc               )+','+; //10
                        sr_cdbvalue(mvalor_cont         )+','+; //11
                        sr_cdbvalue(" "                 )+','+; //12
                        sr_cdbvalue(mcod_vend           )+','+; //13
                        sr_cdbvalue(mnum_ped            )+','+; //14
                        sr_cdbvalue(pconta              )+','+; //15
                        sr_cdbvalue(mbanco              )+','+; //16
                        sr_cdbvalue(mtp_pg              )+','+; //17 
                        sr_cdbvalue(cod_operado         )+','+; //18 
                        sr_cdbvalue(mobs                )+','+; //19 
                        sr_cdbvalue(' ')+')',,.f.)
        ENDIF
        IF mcx <> NIL
                sr_getconnection():exec('INSERT INTO mastcaixa ('+;
                        'empresa  ,'+;//1
                        'tipo     ,'+;//2
                        'nota     ,'+;//3
                        'data     ,'+;//4
                        'venci    ,'+;//5
                        'documento,'+;//6
                        'valor    ,'+;//7
                        'coddesp  ,'+;//8
                        'descri1  ,'+;//9
                        'descri2  ,'+;//10
                        'cod_opera,'+;//11
                        'hora     ,'+;//12
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mcodemp                                )+','+; //1
                        sr_cdbvalue('DE'                                   )+','+; //2
                        sr_cdbvalue(' DESPESA'                             )+','+; //3
                        sr_cdbvalue(mdatpag                                )+','+; //4
                        sr_cdbvalue(mdatpag                                )+','+; //5
                        sr_cdbvalue(mduplicata                             )+','+; //6
                        sr_cdbvalue(mvlpago * -1                           )+','+; //7 
                        sr_cdbvalue(SUBSTR(mtip_for,1,1)+SUBSTR(mtip_for,3))+','+; //8 
                        sr_cdbvalue(STRZERO(mcod_forn,4)+'-'+SUBSTR(mcliente,1,35))+','+; //9 
                        sr_cdbvalue(SUBSTR(mobs,1,40)                             )+','+; //10
                        sr_cdbvalue(cod_operado                            )+','+; //11
                        sr_cdbvalue(TIME()                                 )+','+; //12
                        sr_cdbvalue(' ')+')',,.f.)

                opcao := op_simnao('N','Deseja Imprimir:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
                IF m_set[1,63] = 'F'
                        FOR i = 1 TO m_set[1,64]
                                SET DEVI TO PRINT
                                SET PRINTER TO (m_cfg[32])
                                imprt(mtipo_imp,'E',2)
                                DEVPOS(PROW(),01);DEVOUT(memp_resa)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                DEVPOS(PROW()+1,25);DEVOUT('R E C I B O')
                                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))

                                DEVPOS(PROW()+2,00);DEVOUT('Data da Despesa:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mdatpag)

                                DEVPOS(PROW()+2,00);DEVOUT('Valor Despesa..:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(LTRIM(TRANSFORM(mvlpago,'99,999,999.99')))

                                DEVPOS(PROW()+2,00);DEVOUT('Descricao......:')
                                DEVPOS(PROW(),17);DEVOUT(STRZERO(mcod_forn,4)+'-'+mcliente)
                                DEVPOS(PROW()+1,17);DEVOUT(mobs_b)

                                DEVPOS(PROW()+4,00);DEVOUT(PADC('...........................           ............................',80))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',80))
                                IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                ENDIF
                        NEXT
                        EJECT
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                ELSEIF m_set[1,63] = 'B'
                        FOR i = 1 TO m_set[1,64]
                                SET DEVI TO PRINT
                                SET PRINTER TO (m_cfg[32])
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW(),01);DEVOUT(memp_resa)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))

                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+2,00);DEVOUT(PADC('R E C I B O',35))
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',60))

                                DEVPOS(PROW()+2,00);DEVOUT('Data da Despesa:')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(mdatpag)
                                DEVPOS(PROW()+2,00);DEVOUT('Valor Despesa..:')
                                DEVPOS(PROW(),17);DEVOUT(LTRIM(TRANSFORM(mvlpago,'99,999,999.99')))

                                DEVPOS(PROW()+2,00);DEVOUT('Descricao......:')
                                DEVPOS(PROW(),17);DEVOUT(STRZERO(mcod_forn,4)+'-'+mcliente)
                                DEVPOS(PROW()+1,17);DEVOUT(mobs_b)

                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...........................',60))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A         ',60))
                                DEVPOS(PROW()+3,00);DEVOUT(PADC('...........................',60))
                                DEVPOS(PROW()+1,00);DEVOUT(PADC('         Solicitante       ',60))

                                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',60))
                                IF m_set[1,66] > 1 .AND. i < m_set[1,66]
                                        DEVPOS(PROW()+3,00);DEVOUT(' ')
                                ENDIF
                        NEXT
                        DEVPOS(PROW()+m_cfg[29],00);DEVOUT(' ')
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                ENDIF
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        *****************
        SELE('dupp');ORDSETFOCUS(1)
        *****************
ENDDO
wvw_lclosewindow()
RETURN NIL
