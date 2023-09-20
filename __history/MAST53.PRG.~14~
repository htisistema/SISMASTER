MEMVAR getlist
************************
* FATURAMENTO NO PERIODO
************************
FUNCTION mast53()
*****************
MEMVAR mdata_sis,nivel_acess,memp_resa
LOCAL cons_merc:={},i:=0,mdata1,mdata2,mtot_geral:=0
PRIVATE MPRG:='MAST53',mtit:='',mtipo:='',mpag:=0,;
        mtipo_imp,mimp_tipo:=2,marq:=SPACE(35),mtraco := REPLI('=',132)
IF ! ver_nivel(mprg,'FATURAMENTO NO PERIODO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(15,10,18,90,' FATURAMENTO NO PERIODO ['+mprg+']')
CLEAR GETS
WHILE .T.
        setcor(1)
        limpa(0,0,50,100)
        exibi_prg(mprg)
        mdata1 := DATE() -30
        mdata2 := DATE()
        mtot_geral := 0
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        DEVPOS(1,1);DEVOUT('Data inicial ............................:')
        DEVPOS(2,1);DEVOUT('Data Final...............................:')
        @ 1,45 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,45 GET mdata2 VALID IF(EMPTY(mdata2),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mtit := 'FATURAMENTO NO PERIODO'
        mtipo := 'Periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        cons_merc := {}
        sr_getconnection():exec("SELECT sum(valor) FROM mastcaixa WHERE pg IS NULL AND data >= "+sr_cdbvalue(mdata1)+" AND data <= "+sr_cdbvalue(mdata2),,.t.,@cons_merc)
        IF LEN(cons_merc) = 0
                atencao('Nao existe movimento neste Periodo...')
                LOOP
        ENDIF
        mtot_geral := cons_merc[1,1]
        cons_merc := {}
        sr_getconnection():exec("SELECT tipo,sum(valor) FROM mastcaixa WHERE pg IS NULL AND data >= "+sr_cdbvalue(mdata1)+" AND data <= "+sr_cdbvalue(mdata2)+" GROUP BY tipo,tipo" ,,.t.,@cons_merc)
        IF ! imp_arq('MOV_PROD.REL','R')
                LOOP
        ENDIF
        mpag := 1
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'N')
        i:= 0
        FOR i = 1 TO LEN(cons_merc)
                IF cons_merc[i,1] = 'DU'
                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL EM DUPLICATAS R$: ')
                ELSEIF cons_merc[i,1] = 'CT'
                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL EM CARTAO     R$: ')
                ELSEIF cons_merc[i,1] = 'CH'
                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL EM CHEQUES    R$: ')
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT('TOTAL EM DINHEIRO   R$: ')
                ENDIF
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_merc[i,2],'999,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('(%): '+TRANSFORM((cons_merc[i,2]/mtot_geral)*100,'99,999.999'))
                IF PROW() > 59
                        EJECT
                        mpag ++
                        cabecalho(mpag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'N')
                ENDIF
        NEXT
        IF PROW() > 57
                EJECT
                mpag ++
                cabecalho(mpag,mtit,mtipo,mprg)
        ENDIF
        DEVPOS(PROW()+1,0);DEVOUT('                         --------------')
        DEVPOS(PROW()+1,0);DEVOUT('TOTAL GERAL NO PERIODO : '+TRANSFORM(mtot_geral,'999,999,999.99'))
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('MOV_PROD.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ***********************************
