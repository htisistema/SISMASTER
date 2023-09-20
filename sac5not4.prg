******************************************************
* RELATORIO DE APURACAO DE IMPOSTOS
******************************************************
MEMVAR getlist,nivel_acess,mdata_sis,memp_resa,mend_firm,mcid_firm,mcgc_firm,;
       minsc_firm

FUNCTION sac5not4
*****************
LOCAL MPRG:='SAC5NOT4',;
      opcao,mtraco,mdata1,mdata2,;
      mpag,mtit,mtipo,cons_movnt := {},cons_movnte := {},cons_merc := {},mtot_geral,mtot_pis,mtot_confis,mtot_icms,;
      mtote_geral,mtote_pis,mtote_confis,mtote_icms,mresumo:=' '

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'RELATORIO DE APURACAO DE IMPOSTOS (PIS, CONFIS E ICMS)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',80)
op_tela(16,10,20,70,'RELATORIO DE NOTAS FISCAIS INTERESTADUAIS')

WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        mtot_geral:=mtot_pis:=mtot_confis:=mtot_icms:=mtote_geral:=mtote_pis:=mtote_confis:=mtote_icms:=0
        mdata1 := mdata_sis - 31
        mdata2 := mdata_sis
        mresumo := 'N'
        mensagem('Preencha os Campos - <ESC>p/Abandonar')
        @ 3,0 TO 3,120
        DEVPOS(1,2);DEVOUT('Data Inicial......:')
        DEVPOS(2,2);DEVOUT('Data Final........:')
        DEVPOS(4,2);DEVOUT('So Resumo [S/N]...:')

        @ 1,22 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,22 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 4,22 GET mresumo PICT '@!' VALID mresumo $ 'S,N'
        READ
        IF LASTKEY() = 27
                RELEASE msai_ent,mcredito,mnatureza
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Impressao:')
        IF opcao = 'N'
                LOOP
        ELSE
                mensagem('Espere o coletando dados p/o relatorio OK !!!')
                cons_merc := {}
                sr_getconnection():exec( "SELECT cod_merc,merc,pis,confis FROM sacmerc ORDER BY merc",,.t.,@cons_merc)
                IF LEN(cons_merc) = 0
                        atencao('Nao Existe nenhum Produto...')
                        LOOP
                ENDIF
                mensagem('Espere o Final da impressao OK !!! - <ESC> Imterrompe a Impressao')
                IF ! imp_arq('NOTA_FIS.REL','R')
                        LOOP
                ENDIF
                mpag := 0
                mtit := 'Relatorio de Apuracao de Impostos PIS, CONFIS e ICMS'
                mtipo := 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
                i:=0
                FOR i = 1 TO LEN(cons_merc)
                        mgeral:=mpis:=mconfis:=micms:=megeral:=mepis:=meconfis:=meicms:=0

                        IF mpag=0 .OR. PROW()>=54
                                mpag ++
                                IF mpag>1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo,mprg)
                                IF mresumo = 'N'
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,0);DEVOUT(' Cod.')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Produto')
                                        DEVPOS(PROW(),PCOL()+31);DEVOUT('            ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Vlr. Total')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('    Valor PIS')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Vlr.CONFIS')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('   Valor ICMS')
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                        ENDIF
                        cons_movnt := {}
                        cComm := "SELECT codigo,sum(quantd*pr_venda),sum((quantd*pr_venda)*(icm/100)) FROM sacmovnt WHERE "
                        ccomm := ccomm + "data_s_e >= "+sr_cdbvalue(mdata1)+" AND data_s_e <= "+sr_cdbvalue(mdata2)
                        ccomm := ccomm + " AND codigo = "+sr_cdbvalue(cons_merc[i,1])
                        ccomm := ccomm + " AND NOT cod_nota = 'B' AND (tipo = '03' OR tipo = '01')"
                        ccomm := ccomm + " AND (cancel IS NULL OR cancel = '')"
                        ccomm := ccomm + " AND ent_sai = 'S'"
                        ccomm := ccomm + " GROUP BY codigo,codigo"
                        sr_getconnection():exec(ccomm,,.t.,@cons_movnt)
                        cons_movnte := {}
                        cComm := "SELECT codigo,sum(quantd*pr_unit),sum((quantd*pr_unit)*(icm_aliq/100)) FROM sacmov WHERE "
                        ccomm := ccomm + "data_s_e >= "+sr_cdbvalue(mdata1)+" AND data_s_e <= "+sr_cdbvalue(mdata2)
                        ccomm := ccomm + " AND codigo = "+sr_cdbvalue(cons_merc[i,1])//  ccomm := ccomm + " AND NOT cod_nota = 'B'"
                        ccomm := ccomm + " AND (tipo = '03' OR tipo = '01')"
                        ccomm := ccomm + " AND (cancel IS NULL OR cancel = '')"
                        ccomm := ccomm + " AND ent_sai = 'E'"
                        ccomm := ccomm + " GROUP BY codigo,codigo"
                        sr_getconnection():exec(ccomm,,.t.,@cons_movnte)
                        imprt(mtipo_imp,'C')
                        IF LEN(cons_movnt) = 0 .AND. LEN(cons_movnte) = 0
                                LOOP
                        ELSEIF mresumo = 'N'
                                DEVPOS(PROW()+1,00);DEVOUT(cons_merc[i,1])
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_merc[i,2])
                        ENDIF

                        IF LEN(cons_movnte) > 0
                                IF  mresumo = 'N'
                                        DEVPOS(PROW(),44);DEVOUT('COMPRAS R$: ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_movnte[1,2],'99,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_movnte[1,2]*(cons_merc[i,3]/100),'99,999,999.99'))  //PIS
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_movnte[1,2]*(cons_merc[i,4]/100),'99,999,999.99'))  //CONFIS
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_movnte[1,3],'99,999,999.99'))  //ICMS
                                ENDIF
                                megeral:=cons_movnte[1,2]
                                mepis:=cons_movnte[1,2]*(cons_merc[i,3]/100)
                                meconfis:=cons_movnte[1,2]*(cons_merc[i,4]/100)
                                meicms:=cons_movnte[1,3]

                                mtote_geral:= mtote_geral + cons_movnte[1,2]
                                mtote_pis:= mtote_pis + cons_movnte[1,2]*(cons_merc[i,3]/100)
                                mtote_confis:= mtote_confis + cons_movnte[1,2]*(cons_merc[i,4]/100)
                                mtote_icms:= mtote_icms + cons_movnte[1,3]
                        ELSE
                                IF  mresumo = 'N'
                                        DEVPOS(PROW(),44);DEVOUT('COMPRAS R$: ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'99,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'99,999,999.99'))  //PIS
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'99,999,999.99'))  //CONFIS
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'99,999,999.99'))  //ICMS
                                ENDIF
                        ENDIF
                        IF LEN(cons_movnt) > 0
                                IF  mresumo = 'N'
                                        DEVPOS(PROW()+1,44);DEVOUT('VENDAS  R$: ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_movnt[1,2],'99,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_movnt[1,2]*(cons_merc[i,3]/100),'99,999,999.99'))  //PIS
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_movnt[1,2]*(cons_merc[i,4]/100),'99,999,999.99'))  //CONFIS
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_movnt[1,3],'99,999,999.99'))  //ICMS
                                ENDIF
                                mgeral:=cons_movnt[1,2]
                                mpis:=cons_movnt[1,2]*(cons_merc[i,3]/100)
                                mconfis:=cons_movnt[1,2]*(cons_merc[i,4]/100)
                                micms:=cons_movnt[1,3]
                                mtot_geral:= mtot_geral + cons_movnt[1,2]
                                mtot_pis:= mtot_pis + cons_movnt[1,2]*(cons_merc[i,3]/100)
                                mtot_confis:= mtot_confis + cons_movnt[1,2]*(cons_merc[i,4]/100)
                                mtot_icms:= mtot_icms + cons_movnt[1,3]
                        ELSE
                                IF  mresumo = 'N'
                                        DEVPOS(PROW()+1,44);DEVOUT('VENDAS  R$: ')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'99,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'99,999,999.99'))  //PIS
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'99,999,999.99'))  //CONFIS
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,'99,999,999.99'))  //ICMS
                                ENDIF
                        ENDIF
                        IF  mresumo = 'N'
                                DEVPOS(PROW()+1,44);DEVOUT('            ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('-------------')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('-------------')  //PIS
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('-------------')  //CONFIS
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('-------------')  //ICMS
                                DEVPOS(PROW()+1,44);DEVOUT('TOTAIS  R$: ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(megeral - mgeral,'99,999,999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mepis - mpis,'99,999,999.99'))  //PIS
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(meconfis - mconfis,'99,999,999.99'))  //CONFIS
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(meicms - micms,'99,999,999.99'))  //ICMS
                                DEVPOS(PROW()+1,0)
                        ENDIF
                NEXT
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+1,0);DEVOUT('              RESUMO GERAL DA APURACAO DOS IMPOSTOS')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+1,0);DEVOUT('              ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Total')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('     Valor PIS')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Vlr.CONFIS')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('    Valor ICMS')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+1,0);DEVOUT('COMPRAS R$: ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtote_geral,'99,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtote_pis,'99,999,999.99'))  //PIS
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtote_confis,'99,999,999.99'))  //CONFIS
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtote_icms,'99,999,999.99'))  //ICMS
                DEVPOS(PROW()+1,0);DEVOUT('VENDAS  R$: ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_geral,'99,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtot_pis,'99,999,999.99'))  //PIS
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtot_confis,'99,999,999.99'))  //CONFIS
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtot_icms,'99,999,999.99'))  //ICMS
                DEVPOS(PROW()+1,0);DEVOUT('            ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('-------------')
                DEVPOS(PROW(),PCOL()+2);DEVOUT('-------------')  //PIS
                DEVPOS(PROW(),PCOL()+2);DEVOUT('-------------')  //CONFIS
                DEVPOS(PROW(),PCOL()+2);DEVOUT('-------------')  //ICMS
                DEVPOS(PROW()+1,0);DEVOUT('TOTAIS  R$: ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtote_geral-mtot_geral,'99,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtote_pis-mtot_pis,'99,999,999.99'))  //PIS
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtote_confis-mtot_confis,'99,999,999.99'))  //CONFIS
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(mtote_icms-mtot_icms,'99,999,999.99'))  //ICMS
                DEVPOS(PROW()+1,00);DEVOUT(TIME())
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

