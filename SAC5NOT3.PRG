******************************************************
* RELATORIO DE EMISSAO DE NOTAS FISCAIS INTERNAS
******************************************************
MEMVAR getlist,mdata_sis,nivel_acess,memp_resa,mend_firm,mcid_firm,mcgc_firm,minsc_firm

FUNCTION sac5not3
*****************
LOCAL MPRG:='SAC5NOT3',;
      lci,cci,lba,cba,mop,opcao,mtraco,mdata1,mdata2,;
      mvlr_nota,mvlr_icm,mtot_qtd,mtot_nota,mtot_icm,mdocumento,;
      mtipo_nota,muf,mger_qtd,mger_vlr,mger_icm,mpag,mtit,mtipo

PRIVATE msai_ent,mcredito,mnatureza,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'RELATORIO NOTAS FISCAIS INTERNAS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',80)

lci := cci := 0
lba := 04
cba := 60
*-----------------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacmovnt','movnt');RETURN NIL;ENDIF
IF ! AbriArq('SACOP','OP');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*-----------------------------------------------------
op_tela(16,10,20,70,'RELATORIO NOTAS FISCAIS INTERNAS')

WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        mvlr_nota := mvlr_icm := mtot_qtd := mtot_nota := mtot_icm := ;
        mger_qtd := mger_vlr := mger_icm := 0
        mdata1 := mdata_sis - 31
        mdata2 := mdata_sis
        mensagem('Preencha os Campos - <ESC>p/Abandonar')
        @ lci+2,cci TO lci+2,cba
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Final........:')

        @ lci+1,cci+22 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+3,cci+22 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Impressao:')
        IF opcao = 'N'
                LOOP
        ELSE
                mensagem('Espere o coletando dados p/o relatorio OK !!!')
                cons_movnt := {}
                cComm := "SELECT * FROM sacmovnt WHERE data_s_e >= "+sr_cdbvalue(mdata1)
                ccomm := ccomm + " AND data_s_e <= "+sr_cdbvalue(mdata2)
                ccomm := ccomm + " AND (NOT cod_nat = '    ' OR cod_nat IS NOT NULL)"
                ccomm := ccomm + " AND NOT cod_nota = 'B'"
                ccomm := ccomm + " AND tipo = '03'"
                ccomm := ccomm + " AND uf_cli = "+sr_cdbvalue(m_set[1,19])
                ccomm := ccomm + " ORDER BY uf_cli,cid_cli,documento"
                sr_getconnection():exec(ccomm,,.t.,@cons_movnt)
                IF LEN(cons_movnt) = 0
                        atencao('Nao Existe nenhum Movimento neste Periodo...')
                        LOOP
                ENDIF
                mensagem('Espere o Final da impressao OK !!! - <ESC> Imterrompe a Impressao')
                IF ! imp_arq('NOTA_FIS.REL','R')
                        LOOP
                ENDIF
                mpag := 0
                mtit := 'Relatorio de Notas Fiscais Emitidas Internas'
                mtipo := 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
                muf := cons_movnt[1,34]
                i:=0
                FOR i = 1 TO LEN(cons_movnt)

                        IF mpag=0 .OR. PROW()>=54
                                mpag ++
                                IF mpag>1
                                        EJECT
                                ENDIF
*                               cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW(),00);DEVOUT('RELACAO MENSAL DE NOTAS FISCAIS EMITIDAS           ANEXO 2-A DA PORTARIA SF No.348/84')
                                DEVPOS(PROW()+1,00);DEVOUT('OPERACOES INTERNAS                               MES\ANO:'+DTOC(mdata1))
                                DEVPOS(PROW()+2,00);DEVOUT('RAZAO SOCIAL: '+memp_resa)
                                DEVPOS(PROW()+1,00);DEVOUT('ENDERECO COMPLETO: '+mend_firm+' - '+mcid_firm)
                                DEVPOS(PROW()+1,00);DEVOUT('C.G.C. (MF): '+mcgc_firm+SPACE(20)+'CAGEPE: '+minsc_firm)
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,02);DEVOUT('Data')
                                DEVPOS(PROW(),09);DEVOUT('No. Nota')
                                DEVPOS(PROW(),21);DEVOUT('Serie')
                                DEVPOS(PROW(),27);DEVOUT('Oper.')
                                DEVPOS(PROW(),33);DEVOUT('Cliente')
                                DEVPOS(PROW(),83);DEVOUT('Insc.Estadual')
                                DEVPOS(PROW(),99);DEVOUT('UF')
                                DEVPOS(PROW(),105);DEVOUT('Valor Nota')
                                DEVPOS(PROW(),120);DEVOUT('Valor ICM')
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        IF muf <> cons_movnt[i,34]
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('Quantd.Notas:')
                                DEVPOS(PROW(),14);DEVOUT(TRANSFORM(mtot_qtd,'9,999'))
                                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_nota,'99,999,999.99'))
                                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(mtot_icm,'9,999,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                mtot_qtd := 0
                                mtot_nota := 0
                                mtot_icm := 0
                                muf := cons_movnt[i,34]
                        ENDIF
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(cons_movnt[i,17])
                        DEVPOS(PROW(),09);DEVOUT(cons_movnt[i,3])
                        IF cons_movnt[i,79] = 'B'
                                mtipo_nota := 'D1'
                        ELSEIF cons_movnt[i,79] = 'N'
                                mtipo_nota := 'U'
                        ENDIF
                        DEVPOS(PROW(),21);DEVOUT(mtipo_nota)
                        DEVPOS(PROW(),27);DEVOUT(cons_movnt[i,65])
                        IF cons_movnt[i,72] = 'C'
                                DEVPOS(PROW(),33);DEVOUT('NOTA FISCAL FOI CANCELADA')
                        ELSE
                                DEVPOS(PROW(),33);DEVOUT(cons_movnt[i,31]+'-'+cons_movnt[i,32])
                        ENDIF
                        DEVPOS(PROW(),83);DEVOUT(cons_movnt[i,35])
                        DEVPOS(PROW(),99);DEVOUT(cons_movnt[i,34])
                        mdocumento := cons_movnt[i,3]
                        
                        WHILE mdocumento == cons_movnt[i,3]
                                IF cons_movnt[i,72] <> 'C'
                                        mger_icm := mger_icm + iat((cons_movnt[i,19]*cons_movnt[i,22])*(cons_movnt[i,38]/100),2)
                                        mger_vlr := mger_vlr + iat((cons_movnt[i,19]*cons_movnt[i,22]) + ((cons_movnt[i,19]*cons_movnt[i,22])*cons_movnt[i,39]),2)
                                        mtot_icm := mtot_icm + iat((cons_movnt[i,19]*cons_movnt[i,22])*(cons_movnt[i,38]/100),2)
                                        mtot_nota := mtot_nota + iat((cons_movnt[i,19]*cons_movnt[i,22]) + ((cons_movnt[i,19]*cons_movnt[i,22])*cons_movnt[i,39]),2)
                                        mvlr_nota := mvlr_nota + iat((cons_movnt[i,19]*cons_movnt[i,22]) + ((cons_movnt[i,19]*cons_movnt[i,22])*cons_movnt[i,39]),2)
                                        mvlr_icm := mvlr_icm + iat((cons_movnt[i,19]*cons_movnt[i,22])*(cons_movnt[i,38]/100),2)
                                ENDIF
                                i++
                                IF i > LEN(cons_movnt)
                                        EXIT
                                ENDIF
                        ENDDO
                        i--                        
                        mtot_qtd ++
                        mger_qtd ++
                        DEVPOS(PROW(),102);DEVOUT(TRANSFORM(mvlr_nota,'9,999,999.99'))
                        DEVPOS(PROW(),116);DEVOUT(TRANSFORM(mvlr_icm,'9,999,999.99'))
                        mvlr_nota := 0
                        mvlr_icm := 0
                        IF PROW() >= 54
                                DEVPOS(55,00);DEVOUT('OBSERVACOES: FORA DE SEQUENCIA POR SE TRATAR DE NF/S UNICA PARA')
                                DEVPOS(PROW()+1,00);DEVOUT('             SEREM USADAS EM OPERACOES INTERNAS E INTERESTADUAIS           RECIFE, '+DTOC(mdata_sis))
                                DEVPOS(PROW()+2,00);DEVOUT('                                                                           '+REPLI('_',LEN(memp_resa)+10))
                                DEVPOS(PROW()+1,00);DEVOUT('                                                                                '+memp_resa)
                        ENDIF
                NEXT
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Quantd.Notas:')
                DEVPOS(PROW(),14);DEVOUT(TRANSFORM(mtot_qtd,'9,999'))
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_nota,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(mtot_icm,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(' ')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',80))
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Total Geral das Notas:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Quantd.:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mger_qtd,'9,999'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT('- Total R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mger_vlr,'9,999,999.99'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT("- Total Geral de ICM'S:")
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mger_icm,'9,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(TIME())
                DEVPOS(55,00);DEVOUT('OBSERVACOES: FORA DE SEQUENCIA POR SE TRATAR DE NF/S UNICA PARA')
                DEVPOS(PROW()+1,00);DEVOUT('             SEREM USADAS EM OPERACOES INTERNAS E INTERESTADUAIS           RECIFE, '+DTOC(mdata_sis))
                DEVPOS(PROW()+2,00);DEVOUT('                                                                           '+REPLI('_',LEN(memp_resa)+10))
                DEVPOS(PROW()+1,00);DEVOUT('                                                                                '+memp_resa)
                imprt(mtipo_imp,'N')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('NOTA_FIS.REL')
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************

