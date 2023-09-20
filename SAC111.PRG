MEMVAR getlist
*************************
* ALTERACAO PRODUTO
*************************
FUNCTION sac111(mcodigo,op)
***************
LOCAL MPRG:='SAC111',;
      mproduto,munidade,mpr_unit,mest_min,;
      lci,cci,lba,cba,tela,mp_lucro,mcod_barra,cod_aux,;
      mpeso,mpeso_liq,mgrama,mcod_aux,misento,mpre_ven,mpre_ven1,;
      mcomissao,mcom_mont,mpromocao,mbebida,micm_sub,mlocal,maplic0,maplic1,maplic2,;
      maplic3,maplic4,mvarejo,mipi,mgramatura,mdisp,mlivre_desc,;
      mFatConv,mdesc_merc,mind_icms,msit_trib,mdolar,mdesc_icm:=SPACE(1),;
      mprazo := 0,micm_sub2,msittrib,mref,point,mest_max,opcao,mpr_ven,mpr_ven1,;
      mdata1,mnbm,mprodepe,mmen_icms,mtipo_merc:=' ',mbalanca:='N',mmetragem,mpacote,;
      maltera := ' ',mincluir:='',mforn_aux:=0,mdescri,mAPP...:=' ',mpr_venda2,mpr_venda3,mpr_venda4,cons_merc:={},ccomm:='',;
      msld_neg:='N',mdescont:='N',miat:=' ',mippt:=' ',mlinha:=''
MEMVAR nivel_acess,mdata_sis,cod_operado
PRIVATE mfabrica,mcod_forn,msele,morde,mcod_espe,mdesc_icm1:=0,mcod_merc,mgrupo,;
        msub_grupo,mcodemp:='001',mcod_fis,m_merc:={}

mmen_icms := 'Verifique na leitura X da impressora fiscal ou digite 01'

IF ! ver_nivel(mprg,'ALTERACAO DE PRODUTO','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
msele := SELE()
morde := INDEXORD()
*----------------------------------------------
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
*--------------------------------------------------

lci:=cci:=00
lba:=35
cba:=99

SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
mincluir := ''
op_tela(00,00,35,100,' Alteracao de PRODUTO ')
WHILE .T.
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        DEVPOS(lci  ,cci+1);DEVOUT('Grupo...................:')
        DEVPOS(lci+1,cci+1);DEVOUT('Sub-Grupo...............:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo..................:')
        DEVPOS(lci+3,cci+1);DEVOUT('Descricao do Produto....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Descricao para Nota ....:')
        DEVPOS(lci+5,cci+1);DEVOUT('Codigo Fabricante.......:')
        DEVPOS(lci+6,cci+1);DEVOUT('Cod.Especie do Produto..:')

        botao(lci+7,cci,lci+30,cci+53)

        DEVPOS(lci+ 7,cci+1);DEVOUT('Codigo Barra.........:')
        DEVPOS(lci+ 8,cci+1);DEVOUT('Referencia Auxiliar..:')

        DEVPOS(lci+ 9,cci+1);DEVOUT('Data do Cadastro.....:')
        DEVPOS(lci+10,cci+1);DEVOUT('Unidade..............:')
        DEVPOS(lci+11,cci+1);DEVOUT('Lucro (%)............:')
        DEVPOS(lci+12,cci+1);DEVOUT('Peso Liquido.........:')
        DEVPOS(lci+13,cci+1);DEVOUT('Peso Bruto...........:')
        DEVPOS(lci+14,cci+1);DEVOUT('Estoque Minimo.......:')
        DEVPOS(lci+14,cci+34);DEVOUT('Maximo:')
        DEVPOS(lci+15,cci+1);DEVOUT('Bloq. Saldo Negativo.:')
        DEVPOS(lci+16,cci+1);DEVOUT('Disponivel [S/N].....:')
        DEVPOS(lci+16,cci+34);DEVOUT('Descontinuado:')
        DEVPOS(lci+17,cci+1);DEVOUT('Codigo Empresa.......:')
        DEVPOS(lci+18,cci+1);DEVOUT('Tipo do Produto......:')
        DEVPOS(lci+19,cci+1);DEVOUT('Descricao Livre [S/N]:')
        DEVPOS(lci+20,cci+1);DEVOUT('Ajuste p/Dolar [S/N].:')
        DEVPOS(lci+21,cci+1);DEVOUT('Prazo Maximo.........:')
        DEVPOS(lci+22,cci+1);DEVOUT('Envia p/APP... [S/N].:')
        DEVPOS(lci+23,cci+1);DEVOUT('Gramatura 1x.........:')
        DEVPOS(lci+24,cci+1);DEVOUT('Volume...............:')
        DEVPOS(lci+25,cci+1);DEVOUT('Local................:')
        DEVPOS(lci+26,cci+1);DEVOUT('Uso Balanca..........:')
        DEVPOS(lci+27,cci+1);DEVOUT('Comissao do Vendedor.:')
        DEVPOS(lci+28,cci+1);DEVOUT('Comissao do Montador.:')
        DEVPOS(lci+29,cci+1);DEVOUT('Venda Diferenciada(%):')
        DEVPOS(lci+30,cci+1);DEVOUT('Desconto [%]....... .:')

        botao(lci+7,cci+54,lci+30,cba)

        DEVPOS(lci+ 7,cci+55);DEVOUT('Preco de Venda Avista R$....:')
        DEVPOS(lci+ 8,cci+55);DEVOUT('Preco de Venda Aparazo(%)...:')
        DEVPOS(lci+ 9,cci+55);DEVOUT('(IAT)-[A]rrendondar [T]runcar:')
        DEVPOS(lci+10,cci+55);DEVOUT('(IPPT)[P]roprio [T]ercerizado:')
        DEVPOS(lci+11,cci+55);DEVOUT('CST..........................:')
        DEVPOS(lci+12,cci+55);DEVOUT('Codigo do NCM................:')
        DEVPOS(lci+13,cci+55);DEVOUT('Codigo do PRODEPE............:')
        DEVPOS(lci+14,cci+55);DEVOUT('Codigo Mensagem NF...........:')
        DEVPOS(lci+15,cci+55);DEVOUT('Produto Isento [S/N].........:')
        DEVPOS(lci+16,cci+55);DEVOUT('ICM Diferenciado [%].........:')
        DEVPOS(lci+17,cci+55);DEVOUT('ICM Substituto [%]...........:')
        DEVPOS(lci+18,cci+55);DEVOUT('IPI [%]......................:')
        DEVPOS(lci+19,cci+55);DEVOUT('Codigo Fiscal................:')
        DEVPOS(lci+20,cci+55);DEVOUT('Desc.ICMS NOTA [S/N].........:')
        DEVPOS(lci+21,cci+55);DEVOUT('Fator........................:')
        DEVPOS(lci+22,cci+55);DEVOUT('ICM Sub.Pessoa Fisica........:')
        DEVPOS(lci+23,cci+55);DEVOUT('Saldo........................:')
        DEVPOS(lci+24,cci+55);DEVOUT('Custo Mercadoria.............:')
        DEVPOS(lci+25,cci+55);DEVOUT('Custo Real...................:')
        DEVPOS(lci+26,cci+55);DEVOUT('Metragem.....................:')
        DEVPOS(lci+27,cci+55);DEVOUT('Pacote.......................:')
        DEVPOS(lci+28,cci+55);DEVOUT('Promocao.....................:')
        DEVPOS(lci+29,cci+55);DEVOUT('Data Ultima Entrada..........:')
        DEVPOS(lci+30,cci+55);DEVOUT('Data Ultima Saida............:')

        botao(lci+31,cci,lba,cba)

        DEVPOS(lci+31,cci+1);DEVOUT('Aplicacao............:')


        mfabrica := SPACE(30)
        WHILE .T.
                cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcodigo,5))
                cons_merc := {}
                sr_getconnection():exec(ccomm,,.t.,@cons_merc)
                IF LEN(cons_merc) = 0
                        atencao('Nao foi encontrado o PRODUTO..')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                //point := RECNO()
                mcodemp := cons_merc[1,1]
                mcod_barra := cons_merc[1,2]
                mref := cons_merc[1,6]
                mcodigo := VAL(cons_merc[1,8])
                mgrupo := VAL(SUBSTR(cons_merc[1,7],1,3))
                msub_grupo := VAL(SUBSTR(cons_merc[1,7],4,2))
                IF EMPTY(cons_merc[1,99])
                        mdescri  := cons_merc[1,9]+SPACE(30)
                ELSE
                        mdescri  := cons_merc[1,99]+cons_merc[1,4]
                ENDIF
                mproduto := cons_merc[1,9]
                mtipo_merc := cons_merc[1,10]
                munidade := cons_merc[1,14]
                mcod_espe := VAL(cons_merc[1,15])
                mpeso_liq := cons_merc[1,16]
                mpeso := cons_merc[1,17]
                mdisp := cons_merc[1,24]
                mvarejo := cons_merc[1,50]
                mest_min := cons_merc[1,28]
                mest_max := cons_merc[1,29]
                mfabrica := cons_merc[1,31]
                mcod_forn := mforn_aux := VAL(cons_merc[1,30])
                mp_lucro := cons_merc[1,22]
                misento := cons_merc[1,61]
                mpr_ven := cons_merc[1,46]
                mpr_ven1 := cons_merc[1,47]
                mpr_venda2 := cons_merc[1,100]
                mpr_venda3 := cons_merc[1,101]
                mpr_venda4 := cons_merc[1,102]
                mcomissao := cons_merc[1,26]
                mcom_mont := cons_merc[1,27]
                mpromocao := cons_merc[1,23]
                mbebida := cons_merc[1,62]
                micm_sub := cons_merc[1,63]
                micm_sub2:= cons_merc[1,64]
                mcod_clf := cons_merc[1,66]
                mcod_fis := SUBSTR(cons_merc[1,67],1,1)
                mipi     := cons_merc[1,65]
                mlocal := cons_merc[1,73]
                mgramatura := cons_merc[1,74]
                mprazo   := cons_merc[1,75]
                mFatConv  := cons_merc[1,76]
                mlivre_desc := cons_merc[1,25]
                mdesc_merc := cons_merc[1,80]
                mind_icms := cons_merc[1,82]
                msit_trib := cons_merc[1,83]
                mnbm := cons_merc[1,70]
                mprodepe := cons_merc[1,69]
                mdolar    := cons_merc[1,84]
                msittrib  := cons_merc[1,68]
                mdesc_icm := cons_merc[1,71]
                mdesc_icm1 := cons_merc[1,72]
                maplic0 := cons_merc[1,85]
                maplic1 := cons_merc[1,86]
                maplic2 := cons_merc[1,87]
                maplic3 := cons_merc[1,88]
                maplic4 := cons_merc[1,89]
                mbalanca := cons_merc[1,11]
                mmetragem := cons_merc[1,19]
                mpacote   := cons_merc[1,20]
                mAPP...   := cons_merc[1,98]
                ver_gru(mgrupo,lci,cci+34)
                ver_sgru(mgrupo,msub_grupo,lci+1,cci+34)
                ver_fab(mcod_forn,lci+5,cci+34)
		msld_neg:=cons_merc[1,103]
		mdescont:=cons_merc[1,104]
                mdata1 := cons_merc[1,13]
                miat   := cons_merc[1,81]
                mippt  := cons_merc[1,91]
                setcor(3)
                DEVPOS(lci  ,cci+27);DEVOUT(STRZERO(mgrupo,3))
                DEVPOS(lci+1,cci+27);DEVOUT(msub_grupo)
                DEVPOS(lci+2,cci+27);DEVOUT(STRZERO(mcodigo,5))
                DEVPOS(lci+3,cci+27);DEVOUT(mproduto)
                DEVPOS(lci+4,cci+27);DEVOUT(mdescri)
                DEVPOS(lci+5,cci+27);DEVOUT(STRZERO(mcod_forn,4))
                DEVPOS(lci+6,cci+27);DEVOUT(STRZERO(mcod_espe,4))
                ver_espe(mcod_espe,lci+6,cci+34,,0)
                setcor(3)
                DEVPOS(lci+7,cci+24);DEVOUT(mcod_barra)
                DEVPOS(lci+8,cci+24);DEVOUT(mref)
                DEVPOS(lci+9,cci+24);DEVOUT(cons_merc[1,13])
                DEVPOS(lci+10,cci+24);DEVOUT(cons_merc[1,14])
                DEVPOS(lci+11,cci+24);DEVOUTPICT(cons_merc[1,22],'999.99')
                DEVPOS(lci+12,cci+24);DEVOUTPICT(cons_merc[1,16],'9999.999')
                DEVPOS(lci+13,cci+24);DEVOUTPICT(cons_merc[1,17],'9999.999')
                DEVPOS(lci+14,cci+24);DEVOUTPICT(cons_merc[1,28],'9,999.99')
                DEVPOS(lci+14,cci+42);DEVOUTPICT(cons_merc[1,29],'9,999.99')
                DEVPOS(lci+15,cci+24);DEVOUTPICT(cons_merc[1,103])
                DEVPOS(lci+16,cci+24);DEVOUT(mdisp)
                DEVPOS(lci+16,cci+49);DEVOUT(mdescont)
                DEVPOS(lci+17,cci+24);DEVOUT(mcodemp)
                DEVPOS(lci+18,cci+24);DEVOUT(mtipo_merc)
                DEVPOS(lci+19,cci+24);DEVOUT(mlivre_desc)
                DEVPOS(lci+20,cci+24);DEVOUT(cons_merc[1,84])
                DEVPOS(lci+21,cci+24);DEVOUTPICT(cons_merc[1,75],'999')
                DEVPOS(lci+22,cci+24);DEVOUT(cons_merc[1,98])
                DEVPOS(lci+23,cci+24);DEVOUTPICT(cons_merc[1,76],'999999')
                DEVPOS(lci+24,cci+24);DEVOUTPICT(cons_merc[1,74],'999.999')
                DEVPOS(lci+25,cci+24);DEVOUT(mlocal)
                DEVPOS(lci+26,cci+24);DEVOUT(mbalanca)
                DEVPOS(lci+27,cci+24);DEVOUTPICT(cons_merc[1,26],'999.99')
                DEVPOS(lci+28,cci+24);DEVOUTPICT(cons_merc[1,27],'999.99')
                DEVPOS(lci+29,cci+24);DEVOUTPICT(cons_merc[1,50],'999.99')
                DEVPOS(lci+30,cci+24);DEVOUTPICT(cons_merc[1,80],'999.99')

                DEVPOS(lci+07,cci+86);DEVOUTPICT(cons_merc[1,46],ALLTRIM(m_set[1,98]))
                DEVPOS(lci+08,cci+86);DEVOUTPICT(cons_merc[1,47],'999.999')
                DEVPOS(lci+09,cci+86);DEVOUTPICT(cons_merc[1,81])
                DEVPOS(lci+10,cci+86);DEVOUTPICT(cons_merc[1,91])
                //DEVPOS(lci+09,cci+78);DEVOUTPICT(cons_merc[1,100],ALLTRIM(m_set[1,98]))
                //DEVPOS(lci+10,cci+78);DEVOUTPICT(cons_merc[1,101],ALLTRIM(m_set[1,98]))
                //DEVPOS(lci+11,cci+78);DEVOUTPICT(cons_merc[1,102],ALLTRIM(m_set[1,98]))
                DEVPOS(lci+11,cci+86);DEVOUT(msittrib)
                DEVPOS(lci+12,cci+86);DEVOUT(mnbm)
                DEVPOS(lci+13,cci+86);DEVOUT(mprodepe)
                DEVPOS(lci+14,cci+86);DEVOUT(cons_merc[1,66])
                DEVPOS(lci+15,cci+86);DEVOUT(misento)
                DEVPOS(lci+16,cci+86);DEVOUTPICT(cons_merc[1,62],'99.99')
                DEVPOS(lci+17,cci+86);DEVOUTPICT(cons_merc[1,63],'999.99')
                DEVPOS(lci+18,cci+86);DEVOUTPICT(cons_merc[1,65],'999.99')
                DEVPOS(lci+19,cci+86);DEVOUT(cons_merc[1,67])
                IF cons_merc[1,71] = 'S';fato_desc('*');ENDIF
                setcor(3)
                DEVPOS(lci+20,cci+86);DEVOUT(cons_merc[1,71])
                DEVPOS(lci+21,cci+86);DEVOUTPICT(cons_merc[1,72],'999.9999')
                DEVPOS(lci+22,cci+86);DEVOUTPICT(cons_merc[1,64],'999.99')
                DEVPOS(lci+23,cci+86);DEVOUTPICT(cons_merc[1,56],'99,999.99')
                IF ver_nivel('CUSTOREAL','CUSTO REAL DAS MERCADORIAS *** CORRECAO/CONSULTA ***','15',nivel_acess,'*')
                        setcor(3)
                        DEVPOS(lci+24,cci+86);DEVOUTPICT(cons_merc[1,44],'99,999,999.99')
                        DEVPOS(lci+25,cci+86);DEVOUTPICT(cons_merc[1,45],'99,999,999.99')
                ENDIF
                DEVPOS(lci+26,cci+86);DEVOUTPICT(mmetragem,'999.999')
                DEVPOS(lci+27,cci+86);DEVOUTPICT(mpacote,'999.999')
                DEVPOS(lci+28,cci+86);DEVOUTPICT(cons_merc[1,23],'99.99')
                DEVPOS(lci+29,cci+86);DEVOUT(DTOC(cons_merc[1,33]))
                DEVPOS(lci+30,cci+86);DEVOUT(DTOC(cons_merc[1,32]))
                DEVPOS(lci+31,cci+27);DEVOUT(cons_merc[1,85])
                DEVPOS(lci+32,cci+27);DEVOUT(cons_merc[1,86])
                DEVPOS(lci+33,cci+27);DEVOUT(cons_merc[1,87])
                DEVPOS(lci+34,cci+27);DEVOUT(cons_merc[1,88])
                DEVPOS(lci+35,cci+27);DEVOUT(cons_merc[1,89])
                setcor(1)
                mcod_aux := cons_merc[1,2]
                mcod_merc := cons_merc[1,8]
                maltera := '*'
                @ lci,cci+27 GET mgrupo PICT '999' VALID ver_gru(@mgrupo,lci,cci+34,.F.)
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                setcor(3)
                DEVPOS(lci,cci+27);DEVOUT(STRZERO(mgrupo,3))
                setcor(1)
                @ lci+1,cci+27 GET msub_grupo PICT '99' VALID IF(EMPTY(msub_grupo),.F.,ver_sgru(mgrupo,@msub_grupo,lci+1,cci+34,.F.))
                READ
                IF LASTKEY() = 27 .OR. EMPTY(mgrupo) .OR. EMPTY(msub_grupo)
                        LOOP
                ENDIF
		
                setcor(3)
                DEVPOS(lci+1,cci+27);DEVOUT(STRZERO(msub_grupo,2))
                setcor(1)
                @ lci+ 3,cci+27 GET mproduto PICT '@!' VALID IF(EMPTY(mproduto),.F.,.T.)
                @ lci+ 4,cci+27 GET mdescri PICT '@S70!' VALID IF(EMPTY(mdescri),.F.,.T.)
                //@ lci+ 4,cci+27 GET mdescri PICT '@!' VALID IF(EMPTY(mdescri),.F.,.T.)
                @ lci+ 5,cci+27 GET mcod_forn PICT '9999' VALID ver_fab(@mcod_forn,lci+5,cci+34) .AND. IF((ver_serie() = '141410' .OR. ver_serie() = '141225' .OR. ver_serie() = '141254') .AND. EMPTY(mcod_forn),.F.,.T.)
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                mproduto := tira_acento(mproduto)
                mdescri := tira_acento(mdescri)
                IF UPDATED();maltera := '*';ENDIF
                setcor(3)
                DEVPOS(lci+8,cci+25);DEVOUT(STRZERO(mcod_forn,4))
                setcor(1)
                @ lci+ 6,cci+27 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,lci+6,cci+34,,0)
                @ lci+ 7,cci+24 GET mcod_barra PICT '@!' VALID IF(mcod_aux = mcod_barra,.T.,vercodbarra(mcod_barra,,,'*'))
                @ lci+ 8,cci+24 GET mref PICT '@!'
                @ lci+10,cci+24 GET munidade PICT '@!'
                @ lci+11,cci+24 GET mp_lucro PICT '999.99'
                @ lci+12,cci+24 GET mpeso_liq PICT '9999.999'
                @ lci+13,cci+24 GET mpeso PICT '9999.999'
                @ lci+14,cci+24 GET mest_min PICT '99,999.99'
                @ lci+14,cci+42 GET mest_max PICT '99,999.99'
                @ lci+15,cci+24 GET msld_neg PICT '@!' VALID msld_neg $ 'S,N'
                @ lci+16,cci+24 GET mdisp PICT '@!' VALID mdisp $ 'S,N'
	        @ lci+16,cci+49 GET mdescont PICT '@!' WHEN ver_nivel(mprg+'DESC_PROD','ALTERACAO DE PRODUTO *** DESCONTINUAR PRODUTO ***','1',nivel_acess,'*') VALID mdescont $ 'S,N'
                @ lci+17,cci+24 GET mcodemp PICT "999"   //VALID ver_emp(mcodemp,lci+5,cci+57,,'*') WHEN mmult_emp ='S'
                @ lci+18,cci+24 GET mtipo_merc PICT "9" VALID mtipo_merc $ '1,2,3,4,5' .AND. lim_get() WHEN men_get(lci+7,cci+62,'Digite [1] Produto - [2] Materia Prima - [3] Isumos - [4] Consumo - [5] Outros')
                @ lci+19,cci+24 GET mlivre_desc PICT '@!'
                @ lci+20,cci+24 GET mdolar PICT '@!' VALID mdolar $ 'S,N'
                @ lci+21,cci+24 GET mprazo PICT '999'
                @ lci+22,cci+24 GET mAPP... PICT '@!' VALID mAPP... $ 'S,N'
                IF ver_serie() = '141254'
                        @ lci+23,cci+24 SAY mFatConv PICT '999999'
                ELSE
                        @ lci+23,cci+24 GET mFatConv PICT '999999'
                ENDIF
                @ lci+24,cci+24 GET mgramatura PICT '999.999'
                @ lci+25,cci+24 GET mlocal PICT '@!'
                @ lci+26,cci+24 GET mbalanca PICT '@!' VALID mbalanca $ 'S,N'
                @ lci+27,cci+24 GET mcomissao PICT '999.99'
                @ lci+28,cci+24 GET mcom_mont PICT '999.99'
                @ lci+29,cci+24 GET mvarejo PICT '999.99' WHEN m_set[1,5] = 'S'
                @ lci+30,cci+24 GET mdesc_merc PICT '999.99'

                @ lci+ 7,cci+86 GET mpr_ven PICT ALLTRIM(m_set[1,98])
                @ lci+ 8,cci+86 GET mpr_ven1 PICT ALLTRIM(m_set[1,98])
                @ lci+ 9,cci+86 GET miat PICT '@!' VALID miat $ 'A,T'
                @ lci+10,cci+86 GET mippt PICT '@!' VALID mippt $ 'P,T'
                //@ lci+ 9,cci+86 GET mpr_venda2 PICT ALLTRIM(m_set[1,98])
                //@ lci+10,cci+86 GET mpr_venda3 PICT ALLTRIM(m_set[1,98])
                //@ lci+11,cci+86 GET mpr_venda4 PICT ALLTRIM(m_set[1,98])
                @ lci+11,cci+86 GET msittrib PICT '@!' VALID IF(EMPTY(msittrib) .OR. LEN(ALLTRIM(msittrib)) < 3,.F.,.T.) WHEN men_get(0,0,'[000]Tributada [010]Trib.c/ICMS Subst.Trib. [020]Redu??o BC [040]Isenta [041]Nao Tributada [060]Nao Trib.c/ICMS Sub.')
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                @ lci+12,cci+86 GET mnbm
                @ lci+13,cci+86 GET mprodepe WHEN m_set[1,148] = 'S'
                @ lci+14,cci+86 GET mcod_clf PICT '99'          //VALID verclf(mcod_clf,lci+15,cci+75,,0)
                @ lci+15,cci+86 GET misento PICT '@!' VALID misento $ 'S,N,T,F,I'.AND. lim_get() WHEN men_get(0,0,'Digite: [S] p/Produto ISENTO - [N] p/Nao Isento - [T] p/Produto NAO TRIBUTAVEL - [F]-Substituicao Trib. - [I]-Trib. pelo ISSQN')
                @ lci+16,cci+86 GET mbebida PICT '99.99'
                @ lci+17,cci+86 GET micm_sub PICT '999.99'
                @ lci+18,cci+86 GET mipi PICT '999.99'
                @ lci+19,cci+86 GET mcod_fis PICT '@!'
                @ lci+20,cci+86 GET mdesc_icm PICT '@!' VALID mdesc_icm $ 'S,N' .AND. IF(mdesc_icm = 'S',fato_desc(),.T.)       //.AND. lim_get() WHEN men_get(lci+17,cci+75,'Responda [S]im se esta MERCADORIA tem um desconto especial de ICMS na NOTA DE SAIDA')         //.AND. IF(misento = 'N' .AND. mdesc_icm = 'S',.F.,.T.)
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF mdesc_icm = 'N'
                	mdesc_icm1 := 0
                ENDIF
		@ lci+21,cci+86 GET micm_sub2 PICT '999.99' WHEN ver_serie() = '141206'
                @ lci+26,cci+86 GET mmetragem PICT '999.999'       //WHEN ver_serie() = '141235'
                @ lci+27,cci+86 GET mpacote PICT '999.999'         //WHEN ver_serie() = '141235'

                @ lci+31,cci+27 GET maplic0 PICT '@!'
                @ lci+32,cci+27 GET maplic1
                @ lci+33,cci+27 GET maplic2
                @ lci+34,cci+27 GET maplic3
                @ lci+35,cci+27 GET maplic4
                READ
                IF UPDATED();maltera := '*';ENDIF
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Alteracao do PRODUTO:')
                IF opcao = 'N'
                        LOOP
                ENDIF
                AADD(m_merc,{' ',VAL(mcod_merc)})
                ccomm := "UPDATE sacmerc SET empresa = "+sr_cdbvalue(mcodemp)
                ccomm := ccomm + ",cod_barr  = "+sr_cdbvalue(mcod_barra                           )
                ccomm := ccomm + ",ref       = "+sr_cdbvalue(mref                                 )
                ccomm := ccomm + ",gru_sub   = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))
                ccomm := ccomm + ",merc      = "+sr_cdbvalue(mproduto                             )
                ccomm := ccomm + ",tipo_merc = "+sr_cdbvalue(mtipo_merc                           )
                ccomm := ccomm + ",balanca   = "+sr_cdbvalue(mbalanca                             )
                ccomm := ccomm + ",unidade   = "+sr_cdbvalue(munidade                             )
                ccomm := ccomm + ",especie   = "+sr_cdbvalue(STRZERO(mcod_espe,4)                 )
                ccomm := ccomm + ",metragem  = "+sr_cdbvalue(mmetragem                            )
                ccomm := ccomm + ",pacote    = "+sr_cdbvalue(mpacote                              )
                ccomm := ccomm + ",peso_liq  = "+sr_cdbvalue(mpeso_liq                            )
                ccomm := ccomm + ",peso      = "+sr_cdbvalue(mpeso                                )
                ccomm := ccomm + ",disp      = "+sr_cdbvalue(mdisp                                )
                ccomm := ccomm + ",livre_desc= "+sr_cdbvalue(mlivre_desc                          )
                ccomm := ccomm + ",p_lucro   = "+sr_cdbvalue(mp_lucro                             )
                ccomm := ccomm + ",varejo    = "+sr_cdbvalue(mvarejo                              )
                ccomm := ccomm + ",est_min   = "+sr_cdbvalue(mest_min                             )
                ccomm := ccomm + ",est_max   = "+sr_cdbvalue(mest_max                             )
                ccomm := ccomm + ",cod_fab   = "+sr_cdbvalue(STRZERO(mcod_forn,4)                 )
                ccomm := ccomm + ",fabrica   = "+sr_cdbvalue(mfabrica                             )
                ccomm := ccomm + ",pr_venda  = "+sr_cdbvalue(mpr_ven                              )
                ccomm := ccomm + ",pr_venda1 = "+sr_cdbvalue(mpr_ven1                             )
                ccomm := ccomm + ",pr_venda2 = "+sr_cdbvalue(mpr_venda2                           )
                ccomm := ccomm + ",pr_venda3 = "+sr_cdbvalue(mpr_venda3                           )
                ccomm := ccomm + ",pr_venda4 = "+sr_cdbvalue(mpr_venda4                           )
                ccomm := ccomm + ",isento    = "+sr_cdbvalue(misento                              )
                ccomm := ccomm + ",comissao  = "+sr_cdbvalue(mcomissao                            )
                ccomm := ccomm + ",com_mont  = "+sr_cdbvalue(mcom_mont                            )
                ccomm := ccomm + ",promocao  = "+sr_cdbvalue(mpromocao                            )
                ccomm := ccomm + ",bebida    = "+sr_cdbvalue(mbebida                              )
                ccomm := ccomm + ",icm_sub   = "+sr_cdbvalue(micm_sub                             )
                ccomm := ccomm + ",icm_sub2  = "+sr_cdbvalue(micm_sub2                            )
                ccomm := ccomm + ",ipi       = "+sr_cdbvalue(mipi                                 )
                ccomm := ccomm + ",cod_clf   = "+sr_cdbvalue(mcod_clf                             )
                ccomm := ccomm + ",cod_fis   = "+sr_cdbvalue(mcod_fis                             )
                ccomm := ccomm + ",sittrib   = "+sr_cdbvalue(msittrib                             )
                ccomm := ccomm + ",nbm       = "+sr_cdbvalue(mnbm                                 )
                ccomm := ccomm + ",prodepe   = "+sr_cdbvalue(mprodepe                             )
                ccomm := ccomm + ",local     = "+sr_cdbvalue(mlocal                               )
                ccomm := ccomm + ",gramatura = "+sr_cdbvalue(mgramatura                           )
                ccomm := ccomm + ",prazo     = "+sr_cdbvalue(mprazo                               )
                ccomm := ccomm + ",fatconv   = "+sr_cdbvalue(mfatconv                             )
                ccomm := ccomm + ",desc_merc = "+sr_cdbvalue(mdesc_merc                           )
                ccomm := ccomm + ",desc_icm  = "+sr_cdbvalue(mdesc_icm                            )
                ccomm := ccomm + ",desc_icm1 = "+sr_cdbvalue(mdesc_icm1                           )
                //ccomm := ccomm + ",ind_icms  = "+sr_cdbvalue( mind_icms                         )
                //ccomm := ccomm + ",sit_trib  = "+sr_cdbvalue( msit_trib                         )
                ccomm := ccomm + ",dolar     = "+sr_cdbvalue( mdolar                              )
                ccomm := ccomm + ",aplic0    = "+sr_cdbvalue(maplic0                              )
                ccomm := ccomm + ",aplic1    = "+sr_cdbvalue(maplic1                              )
                ccomm := ccomm + ",aplic2    = "+sr_cdbvalue(maplic2                              )
                ccomm := ccomm + ",aplic3    = "+sr_cdbvalue(maplic3                              )
                ccomm := ccomm + ",aplic4    = "+sr_cdbvalue(maplic4                              )
                ccomm := ccomm + ",APP...    = "+sr_cdbvalue(mAPP...                              )
                ccomm := ccomm + ",descri    = "+sr_cdbvalue(SUBSTR(mdescri,1,50)                 )
                ccomm := ccomm + ",descri1   = "+sr_cdbvalue(SUBSTR(mdescri,51)                   )
                ccomm := ccomm + ",sld_neg   = "+sr_cdbvalue(msld_neg                             )
                ccomm := ccomm + ",descont   = "+sr_cdbvalue(mdescont                             )
                ccomm := ccomm + ",iat       = "+sr_cdbvalue(miat                                 )
                ccomm := ccomm + ",ippt      = "+sr_cdbvalue(mippt                                )
                IF cons_merc[1,46] <> mpr_ven
                        ccomm := ccomm + ",ul_alt_pr    = "+sr_cdbvalue(mdata_sis)
                        ccomm := ccomm + ",opera_pr     = "+sr_cdbvalue(cod_operado)
                ENDIF
                IF maltera = '*'
                        ccomm := ccomm + ",data_atu     = "+sr_cdbvalue(mdata_sis)
                ENDIF
                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcodigo,5))
                sr_getconnection():exec(ccomm,,.f.)
                //nlinha := cod_barra + merc + unidade + pr_venda + saldo

                mlinha := mcod_barra+munidade+STRZERO(cons_merc[1,56]*1000,13)+STRZERO(ROUND(mpr_ven,2)*100,14)
                aret:={}
                //sr_getconnection():exec("SELECT * FROM produto WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcodigo,5)),,.t.,@aret)
                /*
                ccomm := "UPDATE produto SET "
                ccomm := ccomm + "cod_barr  = "+sr_cdbvalue(mcod_barra                           )
                ccomm := ccomm + ",gru_sub   = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))
                ccomm := ccomm + ",merc      = "+sr_cdbvalue(mproduto                             )
                ccomm := ccomm + ",unidade   = "+sr_cdbvalue(munidade                             )
                ccomm := ccomm + ",pr_venda  = "+sr_cdbvalue(ROUND(mpr_ven,2)                     )
                ccomm := ccomm + ",isento    = "+sr_cdbvalue(misento                              )
                ccomm := ccomm + ",ncm       = "+sr_cdbvalue(mnbm                                 )
                ccomm := ccomm + ",iat       = "+sr_cdbvalue(miat                                 )
                ccomm := ccomm + ",ippt      = "+sr_cdbvalue(mippt                                )
                ccomm := ccomm + ",cst       = "+sr_cdbvalue(msittrib                             ) //ccomm := ccomm + ",chv_cript = "+sr_cdbvalue(CRIPTO(mlinha,1)                     )
                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcodigo,5))
                sr_getconnection():exec(ccomm,,.f.)
                */
                sr_getconnection():exec('COMMIT',,.f.)
                IF  ver_serie() <> '141490'
                        IF SR_SetActiveConnection(nCnn1) > 0 .AND. ver_serie() <> '141254'
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                        IF SR_SetActiveConnection(nCnn2) > 0 .AND. ver_serie() <> '141254'
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                        SR_SetActiveConnection(nCnn)
                ENDIF
                /*
                IF mforn_aux <> mcod_forn .AND. ver_serie() = '141410'
                        IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
                        SELE('mov');ORDSETFOCUS(2)
                        IF mov->(DBSEEK(mcod_merc))
                                mensagem('Aguarde um momento estar atualizando o arquivo de movimento...')
                                WHILE ! EOF() .AND. mov->codigo = mcod_merc
                                        BLOQREG()
                                        mov->cod_fab := STRZERO(mcod_forn,4)
                                        mov->fabrica := mfabrica
                                        DBUNLOCK()
                                        SKIP
                                ENDDO
                                DBCOMMITALL()
                        ENDIF
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                ENDIF
                */
                GO point
                wvw_lclosewindow()
                RETURN NIL
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
* FUNCAO P/ INFORMA O FATOR DE DESCONTO
*****************************************
FUNCTION fato_desc(mcons)
*******************
MEMVAR mdesc_icm1
CLEAR GETS
op_tela(17,57,19,77,' Fator Desconto ')
DEVPOS(01,00);DEVOUT('Fator:')
@ 01,COL()+1 GET mdesc_icm1 PICT '99.9999' VALID IF(EMPTY(mdesc_icm1),.F.,.T.)
IF mcons = NIL
        READ
ELSE
        INKEY(1)
ENDIF
CLEAR GETS
wvw_lclosewindow()
RETURN .T.
