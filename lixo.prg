FUNCTION lanc_prod(mtip_lugar,mnum_lugar)
*****************************************
LOCAL opcao,mbt_prod:={},cons_prod := {},i:=0,y:=0
PRIVATE mcod_merc:=0

IF mnum_lugar = 1000
        m_sair := 1
        mnum_mesa := 9999
        mensagem('TECLE <ENTER> P/ CONTINUAR....')
        RETURN .T.
ENDIF

cons_prod := {}
sr_getconnection():exec("SELECT * FROM mastprod ORDER BY codigo",,.t.,@cons_prod)
IF LEN(cons_prod) = 0
        atencao('Nao existe nenhum PRODUTO...')
        RETURN NIL
ENDIF
op_tela(0,0,54,120,'RELACAO DE PRODUTOS   -   ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']')
WHILE .T.
        botao1(0,1,2,8)
        mensagem('Quantidade de Produtos: '+STRZERO(LEN(cons_prod),3))
        @ 1,1 PROMPT ' '+cons_prod[1,1]+'  '
        y:=0
        x:=i:=1
        FOR i = 2 TO LEN(cons_prod)
                IF i <= 18
                        y:= y + 2
                        botao1(x+y,1,x+y+2,8)
                        @ y+x+1,1 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 36
                        IF i = 19
                                botao1(0,10,2,17)
                                @ 1,10 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,10,x+y+2,17)
                        @ y+x+1,10 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 54
                        IF i = 37
                                botao1(0,19,2,26)
                                @ 1,19 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,19,x+y+2,26)
                        @ y+x+1,19 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 72
                        IF i = 55
                                botao1(0,28,2,35)
                                @ 1,28 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,28,x+y+2,35)
                        @ y+x+1,28 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 90
                        IF i = 73
                                botao1(0,37,2,44)
                                @ 1,37 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,37,x+y+2,44)
                        @ y+x+1,37 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 108
                        IF i = 91
                                botao1(0,46,2,53)
                                @ 1,46 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,46,x+y+2,53)
                        @ y+x+1,46 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 126
                        IF i = 109
                                botao1(0,55,2,62)
                                @ 1,55 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,55,x+y+2,62)
                        @ y+x+1,55 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 144
                        IF i = 127
                                botao1(0,64,2,71)
                                @ 1,64 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,64,x+y+2,71)
                        @ y+x+1,64 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 162
                        IF i = 145
                                botao1(0,73,2,80)
                                @ 1,73 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,73,x+y+2,80)
                        @ y+x+1,73 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 180
                        IF i = 163
                                botao1(0,82,2,89)
                                @ 1,82 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,82,x+y+2,89)
                        @ y+x+1,82 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 198
                        IF i = 181
                                botao1(0,91,2,98)
                                @ 1,91 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,91,x+y+2,98)
                        @ y+x+1,91 PROMPT ' '+cons_prod[i,1]+'  '
                ELSEIF i <= 216
                        IF i = 199
                                botao1(0,100,2,107)
                                @ 1,100 PROMPT ' '+cons_prod[i,1]+'  '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,100,x+y+2,107)
                        @ y+x+1,100 PROMPT ' '+cons_prod[i,1]+'  '
                ENDIF
                x++
        NEXT
        @ 0,107 TO 54,107
        botao1(1,109,3,119)
        @ 2,109 PROMPT '  Voltar   '
        botao1(5,109,7,119)
        @ 6,109 PROMPT '  Consulta '
        botao1(9,109,11,119)
        //@ 10,109 PROMPT '  Proxima  '
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF opcao = LEN(cons_prod) + 1
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF opcao = LEN(cons_prod) + 2
                mcod_merc := f4_merc()
                IF LASTKEY() = 27 .OR. EMPTY(mcod_merc)
                        LOOP
                ENDIF
                h:=0
                FOR h = 1 TO LEN(cons_prod)
                        IF STRZERO(mcod_merc,5) $ cons_prod[h,1]
                                opcao := h
                                EXIT
                        ENDIF
                NEXT

        ENDIF
        IF opcao = LEN(cons_prod) + 3
                lanc_prod1(mtip_lugar,mnum_lugar)
                LOOP
        ENDIF

        mcod_merc := VAL(cons_prod[opcao,1])
        op_tela(10,10,32,115,' LANCAMENTO DE PRODUTOS ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']','*')
        WvW_PBSetFont( NIL, "Courier New", 15, 0,)
        nPBotaoid := wvw_pbCreate(NIL,15,01,16,23, 'FECHAMENTO PARCIAL',NIL,{||Fecha_parc(mtip_lugar,mnum_lugar,mnum_doc)})
        //WVW_PBEnable( NIL, nPBId, .F. )
        WHILE .T.
                setcor(1)
                limpa(1,0,50,120)
                exibi_prg(mprg)
                mqtd := mcod_garcon := 0
                mmerc := SPACE(30)
                mobs:=SPACE(30)
                mensagem('Preencha os Campos - <ESC> p/Retornar')
                @ 7,0 TO 7,120
                //DEVPOS(1,1);DEVOUT('Cod.Produto:')
                //DEVPOS(2,1);DEVOUT('Descricao..:')
                //DEVPOS(3,1);DEVOUT('Quantidade.:')
                DEVPOS(8,1);DEVOUT('Preco......:')
                DEVPOS(9,1);DEVOUT('Cod.Garcon.:')
                DEVPOS(10,1);DEVOUT('Observacao.:')
                //WVW_PBEnable( NIL, nPBId, .T. )
                cons_parc := {}
                sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL ORDER BY hora',,.t.,@cons_parc)
                IF LEN(cons_parc) > 0
                        mentrada := cons_parc[1,4]
                        msaida   := TIME()
                        mintervalo := ELAPTIME(mentrada,msaida)
                        DEVPOS(11, 1);DEVOUT('Entrada....:'+mentrada)
                        DEVPOS(12, 1);DEVOUT('Saida......:'+msaida)
                        DEVPOS(13,1);DEVOUT('Duracao....:'+mintervalo)
                ENDIF
                cons_merc := {}
                sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtip_lugar)+" AND numero = "+sr_cdbvalue(STRZERO(mnum_lugar,4)),,.t.,@cons_merc)
                IF LEN(cons_merc) = 0
                        atencao('MESA/QUARTO nao existe em nossos Arquivo !!!')
                        WVW_PBDestroy(,nPBotaoid)
                        wvw_lclosewindow()
                        RETURN .T.
                ENDIF
                WVW_PBEnable( NIL, nPBId, .T. )

                mped_merc := {}
                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                IF LEN(mped_merc) = 0
                        atencao('Codigo da mercadoria nao cadastrado')
                        LOOP
                ENDIF
                mmerc := mped_merc[1,2]

                setcor(3)
                //DEVPOS(1,14);DEVOUT(STRZERO(mcod_merc,5)+' - '+mped_merc[1,2])
                WVW_DrawLabel(,0,1,STRZERO(mcod_merc,5)+' - '+mped_merc[1,2],,,210,, 'arial black',40,17,,,,,)
                setcor(3)

                mpre := ' '
                limpa(5,80,17,100)
                botao(6,80,17,100)
                IF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg')
                        WVW_DrawImage( ,6,80,17,100,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp')
                        WVW_DrawImage( ,6,80,17,100,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp',.T.,.F.)
                ENDIF
                //setcor(3)
                //DEVPOS(2,14);DEVOUT(mped_merc[1,2])
                //setcor(1)
                IF mped_merc[1,7] = 'HR'
                        mmerc := 'Tempo de Duracao: '+ELAPTIME(mentrada,msaida)
                ENDIF
                mqtd := 1
                botao1(4,1,6,7)
                botao1(4,10,6,16)
                botao1(4,19,6,25)
                botao1(4,28,6,34)
                botao1(4,37,6,43)
                botao1(4,46,6,55)

                @ 5,1  PROMPT '   1   '
                @ 5,10 PROMPT '   2   '
                @ 5,19 PROMPT '   3   '
                @ 5,28 PROMPT '   4   '
                @ 5,37 PROMPT '   5   '
                @ 5,47 PROMPT ' Voltar '
                MENU TO mqtd
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        EXIT
                ENDIF
                /*
                botao1(4,36,6,45)
                botao1(4,36,6,45)
                @ 5,37 PROMPT ' O B S: '
                MENU TO mobs
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        EXIT
                ENDIF

                IF mqtd = 6
                        @ 10,14 GET mobs PICT '@!'
                        READ
                        IF LASTKEY() = 27 .OR. 'N' = op_simnao('S','Confirma a Inclusao do PRODUTO:')
                                WVW_PBDestroy(,nPBotaoid)
                                CLEAR GETS
                                wvw_lclosewindow()
                                EXIT
                        ENDIF
                */
                IF mqtd = 6
                        WVW_PBDestroy(,nPBotaoid)
                        wvw_lclosewindow()
                        EXIT
                ENDIF
                //@ 3,14 GET mqtd PICT '9,999.99' VALID IF(EMPTY(mqtd) .OR. mqtd < 0,.F.,.T.)
                @ 8,14 GET mped_merc[1,6] PICT '9,999.99' WHEN mped_merc[1,7] = 'HR'
                //@ 9,14 GET mcod_garcon PICT '999' VALID ven(mcod_garcon,5,19)
                //@ 10,14 GET mobs PICT '@!'
                READ
                IF LASTKEY() = 27 .OR. 'N' = op_simnao('S','Confirma a Inclusao do PRODUTO:')
                        WVW_PBDestroy(,nPBotaoid)
                        CLEAR GETS
                        wvw_lclosewindow()
                        EXIT
                ENDIF
                cons_mov := {}
                sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL',,.t.,@cons_mov)
                IF LEN(cons_mov) = 0
                        IF op_simnao('S','Deseja ABRIR esta MESA/QUARTO') = 'S'
                                aret := {}
                                sr_getconnection():exec("SELECT MAX(num_doc) FROM mastnummov",,.t.,@aret)
                                IF LEN(aret) = 0
                                        mnum_doc := 1
                                ELSE
                                        mnum_doc := VAL(aret[1,1]) + 1
                                ENDIF
                                sr_getconnection():exec('INSERT INTO mastnummov (num_doc,data,'+;
                                                        'hora,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                                        sr_cdbvalue(DATE())+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(' ')+')',,.f.)
                        ELSE
                                LOOP
                        ENDIF
                ELSE
                        mnun_doc := VAL(cons_mov[1,1])
                ENDIF
                sr_getconnection():exec('INSERT INTO mastmov ('+;
                                        'NUM_DOC   ,'+;//1
                                        'NUM_LOCAL ,'+;//2
                                        'DATA      ,'+;//3
                                        'HORA      ,'+;//4
                                        'COD_PROD  ,'+;//5
                                        'DESCRI    ,'+;//6
                                        'QTD       ,'+;//7
                                        'PRECO     ,'+;//8
                                        'COD_CLI   ,'+;//9
                                        'COD_GARCO ,'+;//10
                                        'OPER      ,'+;//11
                                        'OBS       ,'+;//12
                                        'PORTA     ,'+;//13
                                        'SR_DELETED )'+;//14
                                        ' VALUES ('+;
                                        sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                        sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+','+; //2
                                        sr_cdbvalue(DATE())+','+; //3
                                        sr_cdbvalue(TIME())+','+; //4
                                        sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //5
                                        sr_cdbvalue(mmerc)+','+; //6
                                        sr_cdbvalue(mqtd)+','+; //7
                                        sr_cdbvalue(mped_merc[1,6])+','+; //8
                                        sr_cdbvalue('')+','+; //9
                                        sr_cdbvalue(STRZERO(mcod_garcon,3))+','+; //10
                                        sr_cdbvalue(cod_operado)+','+; //11
                                        sr_cdbvalue(mobs)+','+; //12
                                        sr_cdbvalue(mped_merc[1,9])+','+; //13
                                        sr_cdbvalue(' ')+')',,.f.)//14
                //sr_getconnection():exec("UPDATE mastprod SET descri = "+sr_cdbvalue(cons_merc[1,2])+",unidade = "+sr_cdbvalue(cons_merc[1,7])+",pr_venda = "+sr_cdbvalue(cons_merc[1,6])+",tipo = "+sr_cdbvalue(cons_merc[1,3])+" WHERE codigo = "+sr_cdbvalue(mcod),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                WVW_PBDestroy(,nPBotaoid)
                wvw_lclosewindow()
                CLEAR GETS
                EXIT
                IF ! imp_arq('FCH_PARC.TXT','R')
                        RETURN NIL
                ENDIF
                /*
                IF mped_merc[1,9] = 1
                        mporta := m_cfg[5]
                ELSEIF mped_merc[1,9] = 2
                        mporta := m_cfg[6]
                ELSEIF mped_merc[1,9] = 3
                        mporta := m_cfg[7]
                ENDIF
                SET DEVI TO PRINT
                SET PRINT TO (mporta)
                */
                //DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                //DEVPOS(PROW(),00);DEVOUT(memp_resa)
                //DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                //DEVPOS(PROW(),00);DEVOUT(mtraco)
                //DEVPOS(PROW()+1,00);DEVOUT('Documento: '+STRZERO(mnum_doc,6))
                DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                DEVPOS(PROW(),00);DEVOUT('Mesa.....: '+mtip_lugar+STRZERO(mnum_lugar,4))
                DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                DEVPOS(PROW(),00);DEVOUT('Data.....: '+DTOC(DATE())+' - Horas: '+TIME())
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                DEVPOS(PROW(),00);DEVOUT('Codigo...: '+STRZERO(mcod_merc,5))
                DEVPOS(PROW()+1,00);DEVOUT(mmerc)
                IF ! EMPTY(mobs)
                        DEVPOS(PROW()+1,0);DEVOUT('OBS.: '+mobs)
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT('Quantidade: '+TRANSFORM(mqtd,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                DEVPOS(PROW(),00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                DEVPOS(PROW(),00);DEVOUT('Garcon....: '+STRZERO(mcod_garcon,3))
                DEVPOS(PROW()+1,00);DEVOUT('Operador..: '+cod_operado)
                DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+m_cfg[10],00);DEVOUT(CHR(18))
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('FCH_PARC.TXT')
        ENDDO
ENDDO
SETMODE(50,120)
WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
wvw_lclosewindow()
RETURN NIL
***************************** F I M ***************************
FUNCTION lanc_prod1(mtip_lugar,mnum_lugar)
*****************************************
LOCAL opcao,mbt_prod:={},cons_prod := {},i:=0,y:=0
PRIVATE mcod_merc:=0

return



/*


cons_prod := {}
sr_getconnection():exec("SELECT * FROM mastprod ORDER BY codigo",,.t.,@cons_prod)
IF LEN(cons_prod) = 0
        atencao('Nao existe nenhum PRODUTO...')
        RETURN NIL
ENDIF
op_tela(0,0,54,120,'RELACAO DE PRODUTOS')
WHILE .T.
        botao1(0,1,2,8)
        mensagem('Quantidade de Produtos: '+STRZERO(LEN(cons_prod),3))
        @ 1,0 PROMPT ' '+cons_prod[1,1]+' '
        y:=0
        x:=i:=1
        FOR i = 2 TO LEN(cons_prod)
                IF i <= 18
                        y:= y + 2
                        botao1(x+y,1,x+y+2,8)
                        @ y+x+1,1 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 36
                        IF i = 19
                                botao1(0,10,2,17)
                                @ 1,10 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,10,x+y+2,17)
                        @ y+x+1,10 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 54
                        IF i = 37
                                botao1(0,19,2,26)
                                @ 1,20 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,19,x+y+2,26)
                        @ y+x+1,20 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 72
                        IF i = 55
                                botao1(0,28,2,35)
                                @ 1,29 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,28,x+y+2,35)
                        @ y+x+1,29 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 90
                        IF i = 73
                                botao1(0,37,2,44)
                                @ 1,38 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,37,x+y+2,44)
                        @ y+x+1,38 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 108
                        IF i = 91
                                botao1(0,46,2,53)
                                @ 1,47 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,46,x+y+2,53)
                        @ y+x+1,47 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 126
                        IF i = 109
                                botao1(0,55,2,62)
                                @ 1,56 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,55,x+y+2,62)
                        @ y+x+1,55 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 144
                        IF i = 127
                                botao1(0,64,2,71)
                                @ 1,65 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,64,x+y+2,71)
                        @ y+x+1,65 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 162
                        IF i = 145
                                botao1(0,73,2,80)
                                @ 1,74 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,73,x+y+2,80)
                        @ y+x+1,74 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 180
                        IF i = 163
                                botao1(0,82,2,89)
                                @ 1,83 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,82,x+y+2,89)
                        @ y+x+1,83 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 198
                        IF i = 181
                                botao1(0,91,2,98)
                                @ 1,92 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,91,x+y+2,98)
                        @ y+x+1,92 PROMPT ' '+cons_prod[i,1]+' '
                ELSEIF i <= 216
                        IF i = 199
                                botao1(0,100,2,107)
                                @ 1,101 PROMPT ' '+cons_prod[i,1]+' '
                                y:=0
                                x:=1
                                LOOP
                        ENDIF
                        y:= y + 2
                        botao1(x+y,100,x+y+2,107)
                        @ y+x+1,101 PROMPT ' '+cons_prod[i,1]+' '
                ENDIF
                x++
        NEXT
        @ 0,107 TO 54,107
        botao1(1,109,3,119)
        @ 2,110 PROMPT ' Voltar   '
        botao1(5,109,7,119)
        @ 6,110 PROMPT ' Consulta '
        botao1(9,109,11,119)
        @ 10,110 PROMPT ' Proxima  '
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF opcao = LEN(cons_prod) + 1
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF opcao = LEN(cons_prod) + 2
                mcod_merc := f4_merc()
                IF LASTKEY() = 27 .OR. EMPTY(mcod_merc)
                        LOOP
                ENDIF
                h:=0
                FOR h = 1 TO LEN(cons_prod)
                        IF STRZERO(mcod_merc,5) $ cons_prod[h,1]
                                opcao := h
                                EXIT
                        ENDIF
                NEXT

        ENDIF
        mcod_merc := VAL(cons_prod[opcao,1])
        op_tela(10,10,32,115,' LANCAMENTO DE PRODUTOS ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']','*')
        WvW_PBSetFont( NIL, "Courier New", 15, 0,)
        nPBotaoid := wvw_pbCreate(NIL,15,01,16,23, 'FECHAMENTO PARCIAL',NIL,{||Fecha_parc(mtip_lugar,mnum_lugar,mnum_doc)})
        //WVW_PBEnable( NIL, nPBId, .F. )
        WHILE .T.
                setcor(1)
                limpa(1,0,50,120)
                exibi_prg(mprg)
                mqtd := mcod_garcon := 0
                mmerc := SPACE(30)
                mobs:=SPACE(30)
                mensagem('Preencha os Campos - <ESC> p/Retornar')
                @ 7,0 TO 7,120
                //DEVPOS(1,1);DEVOUT('Cod.Produto:')
                //DEVPOS(2,1);DEVOUT('Descricao..:')
                //DEVPOS(3,1);DEVOUT('Quantidade.:')
                DEVPOS(8,1);DEVOUT('Preco......:')
                DEVPOS(9,1);DEVOUT('Cod.Garcon.:')
                DEVPOS(10,1);DEVOUT('Observacao.:')
                //WVW_PBEnable( NIL, nPBId, .T. )
                cons_parc := {}
                sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL ORDER BY hora',,.t.,@cons_parc)
                IF LEN(cons_parc) > 0
                        mentrada := cons_parc[1,4]
                        msaida   := TIME()
                        mintervalo := ELAPTIME(mentrada,msaida)
                        DEVPOS(11, 1);DEVOUT('Entrada....:'+mentrada)
                        DEVPOS(12, 1);DEVOUT('Saida......:'+msaida)
                        DEVPOS(13,1);DEVOUT('Duracao....:'+mintervalo)
                ENDIF
                cons_merc := {}
                sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtip_lugar)+" AND numero = "+sr_cdbvalue(STRZERO(mnum_lugar,4)),,.t.,@cons_merc)
                IF LEN(cons_merc) = 0
                        atencao('MESA/QUARTO nao existe em nossos Arquivo !!!')
                        WVW_PBDestroy(,nPBotaoid)
                        wvw_lclosewindow()
                        RETURN .T.
                ENDIF
                WVW_PBEnable( NIL, nPBId, .T. )

                mped_merc := {}
                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                IF LEN(mped_merc) = 0
                        atencao('Codigo da mercadoria nao cadastrado')
                        LOOP
                ENDIF
                mmerc := mped_merc[1,2]

                setcor(3)
                //DEVPOS(1,14);DEVOUT(STRZERO(mcod_merc,5)+' - '+mped_merc[1,2])
                WVW_DrawLabel(,0,1,STRZERO(mcod_merc,5)+' - '+mped_merc[1,2],,,210,, 'arial black',40,17,,,,,)
                setcor(3)

                mpre := ' '
                limpa(5,80,17,100)
                botao(6,80,17,100)
                IF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg')
                        WVW_DrawImage( ,6,80,17,100,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp')
                        WVW_DrawImage( ,6,80,17,100,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp',.T.,.F.)
                ENDIF
                //setcor(3)
                //DEVPOS(2,14);DEVOUT(mped_merc[1,2])
                //setcor(1)
                IF mped_merc[1,7] = 'HR'
                        mmerc := 'Tempo de Duracao: '+ELAPTIME(mentrada,msaida)
                ENDIF
                mqtd := 1
                botao1(4,1,6,6)
                botao1(4,8,6,13)
                botao1(4,15,6,20)
                botao1(4,22,6,27)
                botao1(4,29,6,34)
                botao1(4,36,6,45)

                @ 5,2 PROMPT ' 1 '
                @ 5,9 PROMPT ' 2 '
                @ 5,16 PROMPT ' 3 '
                @ 5,23 PROMPT ' 4 '
                @ 5,30 PROMPT ' 5 '
                @ 5,37 PROMPT ' Voltar '
                MENU TO mqtd
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        EXIT
                ENDIF
                IF mqtd = 6
                        WVW_PBDestroy(,nPBotaoid)
                        wvw_lclosewindow()
                        EXIT
                ENDIF
                //@ 3,14 GET mqtd PICT '9,999.99' VALID IF(EMPTY(mqtd) .OR. mqtd < 0,.F.,.T.)
                @ 8,14 GET mped_merc[1,6] PICT '9,999.99' WHEN mped_merc[1,7] = 'HR'
                @ 9,14 GET mcod_garcon PICT '999' VALID ven(mcod_garcon,5,19)
                @ 10,14 GET mobs PICT '@!'
                READ
                IF LASTKEY() = 27 .OR. 'N' = op_simnao('S','Confirma a Inclusao do PRODUTO:')
                        WVW_PBDestroy(,nPBotaoid)
                        CLEAR GETS
                        wvw_lclosewindow()
                        EXIT
                ENDIF
                cons_mov := {}
                sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL',,.t.,@cons_mov)
                IF LEN(cons_mov) = 0
                        IF op_simnao('S','Deseja ABRIR esta MESA/QUARTO') = 'S'
                                aret := {}
                                sr_getconnection():exec("SELECT MAX(num_doc) FROM mastnummov",,.t.,@aret)
                                IF LEN(aret) = 0
                                        mnum_doc := 1
                                ELSE
                                        mnum_doc := VAL(aret[1,1]) + 1
                                ENDIF
                                sr_getconnection():exec('INSERT INTO mastnummov (num_doc,data,'+;
                                                        'hora,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                                        sr_cdbvalue(DATE())+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(' ')+')',,.f.)
                        ELSE
                                LOOP
                        ENDIF
                ELSE
                        mnun_doc := VAL(cons_mov[1,1])
                ENDIF
                sr_getconnection():exec('INSERT INTO mastmov ('+;
                                        'NUM_DOC   ,'+;//1
                                        'NUM_LOCAL ,'+;//2
                                        'DATA      ,'+;//3
                                        'HORA      ,'+;//4
                                        'COD_PROD  ,'+;//5
                                        'DESCRI    ,'+;//6
                                        'QTD       ,'+;//7
                                        'PRECO     ,'+;//8
                                        'COD_CLI   ,'+;//9
                                        'COD_GARCO ,'+;//10
                                        'OPER      ,'+;//11
                                        'OBS       ,'+;//12
                                        'PORTA     ,'+;//13
                                        'SR_DELETED )'+;//14
                                        ' VALUES ('+;
                                        sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                        sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+','+; //2
                                        sr_cdbvalue(DATE())+','+; //3
                                        sr_cdbvalue(TIME())+','+; //4
                                        sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //5
                                        sr_cdbvalue(mmerc)+','+; //6
                                        sr_cdbvalue(mqtd)+','+; //7
                                        sr_cdbvalue(mped_merc[1,6])+','+; //8
                                        sr_cdbvalue('')+','+; //9
                                        sr_cdbvalue(STRZERO(mcod_garcon,3))+','+; //10
                                        sr_cdbvalue(cod_operado)+','+; //11
                                        sr_cdbvalue(mobs)+','+; //12
                                        sr_cdbvalue(mped_merc[1,9])+','+; //13
                                        sr_cdbvalue(' ')+')',,.f.)//14
                //sr_getconnection():exec("UPDATE mastprod SET descri = "+sr_cdbvalue(cons_merc[1,2])+",unidade = "+sr_cdbvalue(cons_merc[1,7])+",pr_venda = "+sr_cdbvalue(cons_merc[1,6])+",tipo = "+sr_cdbvalue(cons_merc[1,3])+" WHERE codigo = "+sr_cdbvalue(mcod),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                WVW_PBDestroy(,nPBotaoid)
                wvw_lclosewindow()
                CLEAR GETS
                EXIT
                IF ! imp_arq('FCH_PARC.TXT','R')
                        RETURN NIL
                ENDIF
                //DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                //DEVPOS(PROW(),00);DEVOUT(memp_resa)
                //DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                //DEVPOS(PROW(),00);DEVOUT(mtraco)
                //DEVPOS(PROW()+1,00);DEVOUT('Documento: '+STRZERO(mnum_doc,6))
                DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                DEVPOS(PROW(),00);DEVOUT('Mesa.....: '+mtip_lugar+STRZERO(mnum_lugar,4))
                DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                DEVPOS(PROW(),00);DEVOUT('Data.....: '+DTOC(DATE())+' - Horas: '+TIME())
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                DEVPOS(PROW(),00);DEVOUT('Codigo...: '+STRZERO(mcod_merc,5))
                DEVPOS(PROW()+1,00);DEVOUT(mmerc)
                IF ! EMPTY(mobs)
                        DEVPOS(PROW()+1,0);DEVOUT('OBS.: '+mobs)
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT('Quantidade: '+TRANSFORM(mqtd,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                DEVPOS(PROW(),00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                DEVPOS(PROW(),00);DEVOUT('Garcon....: '+STRZERO(mcod_garcon,3))
                DEVPOS(PROW()+1,00);DEVOUT('Operador..: '+cod_operado)
                DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+m_cfg[10],00);DEVOUT(CHR(18))
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('FCH_PARC.TXT')
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
*/
*********************** f i m ***********************************
FUNCTION lanc_prodant(mtip_lugar,mnum_lugar)
*****************************************
LOCAL nPBotaoid,mbt_prod:={}
IF mnum_lugar = 1000
        m_sair := 1
        /*
        i:=0
        FOR i= 1 TO 121
                //atencao('nPBId'+ALLTRIM(STR(i,4))+'.')
                WVW_PBDestroy(,nPBid[i])
        NEXT
        */
        mnum_mesa := 9999
        mensagem('TECLE <ENTER> P/ CONTINUAR....')
        RETURN .T.
ENDIF

//mcod_merc := bt_prod(mtip_lugar,mnum_lugar)
//atencao(mcod_merc)
op_tela(10,10,23,90,' LANCAMENTO DE PRODUTOS ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']')
CLEAR GETS
WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nPBotaoid := wvw_pbCreate(NIL,12,01,13,20, 'FECHAMENTO PARCIAL',NIL,{||Fecha_parc(mtip_lugar,mnum_lugar,mnum_doc)})
//WVW_PBEnable( NIL, nPBId, .F. )
WHILE .T.
        setcor(1)
        limpa(1,0,50,120)
        exibi_prg(mprg)
        mqtd := mcod_garcon := 0
        mmerc := SPACE(30)
        mobs:=SPACE(30)
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        @ 7,0 TO 7,120
        DEVPOS(1,1);DEVOUT('Cod.Produto:')
        DEVPOS(2,1);DEVOUT('Descricao..:')
        DEVPOS(3,1);DEVOUT('Quantidade.:')
        DEVPOS(4,1);DEVOUT('Preco......:')
        DEVPOS(5,1);DEVOUT('Cod.Garcon.:')
        DEVPOS(6,1);DEVOUT('Observacao.:')
        //WVW_PBEnable( NIL, nPBId, .T. )
        cons_parc := {}
        sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL ORDER BY hora',,.t.,@cons_parc)
        IF LEN(cons_parc) > 0
                mentrada := cons_parc[1,4]
                msaida   := TIME()
                mintervalo := ELAPTIME(mentrada,msaida)
                DEVPOS(8, 1);DEVOUT('Entrada....:'+mentrada)
                DEVPOS(9, 1);DEVOUT('Saida......:'+msaida)
                DEVPOS(10,1);DEVOUT('Duracao....:'+mintervalo)
        ENDIF
        cons_merc := {}
        sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtip_lugar)+" AND numero = "+sr_cdbvalue(STRZERO(mnum_lugar,4)),,.t.,@cons_merc)
        IF LEN(cons_merc) = 0
                atencao('MESA/QUARTO nao existe em nossos Arquivo !!!')
                WVW_PBDestroy(,nPBotaoid)
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        /*
        @ 1,14 GET mcod_merc PICT '99999' WHEN men_get(,,'Digite o Codigo do PRODUTO ou deixe em branco p/Pesquisa pela descricao') VALID lim_get()
        READ
        IF LASTKEY() = 27
                WVW_PBDestroy(,nPBotaoid)
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        */
        WVW_PBEnable( NIL, nPBId, .T. )

        mped_merc := {}
        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
        IF LEN(mped_merc) = 0
                atencao('Codigo da mercadoria nao cadastrado')
                LOOP
        ENDIF
        mmerc := mped_merc[1,2]

        /*
        IF ! EMPTY(mcod_merc)
                mped_merc := {}
                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                IF LEN(mped_merc) = 0
                        atencao('Codigo da mercadoria nao cadastrado')
                        LOOP
                ENDIF
                mmerc := mped_merc[1,2]
        ELSEIF EMPTY(mmerc)
                mcod_merc := f4_merc()
                IF LASTKEY() = 27 .OR. EMPTY(mcod_merc)
                        LOOP
                ENDIF
                mped_merc := {}
                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@mped_merc)
                IF LEN(mped_merc) = 0
                        atencao('Codigo da mercadoria nao cadastrado')
                        LOOP
                ENDIF
                mmerc := mped_merc[1,2]
        ELSE
                IF RTRIM(mmerc) = 'FECHA'
                        Fecha_parc(mtip_lugar,mnum_lugar)
                        LOOP
                ENDIF
        ENDIF
        */
        setcor(3)
        DEVPOS(1,14);DEVOUT(STRZERO(mcod_merc,5)+' - '+mped_merc[1,2])
        setcor(3)
        mpre := ' '
        limpa(0,50,12,70)
        botao(1,50,12,70)
        IF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg')
                WVW_DrawImage( ,1,50,12,70,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg',.T.,.F.)
        ELSEIF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp')
                WVW_DrawImage( ,1,50,12,70,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp',.T.,.F.)
        ENDIF
        setcor(3)
        DEVPOS(2,14);DEVOUT(mped_merc[1,2])
        //DEVPOS(4,25);DEVOUT(TRANSFORM(mped_merc[1,6],'999,999.99'))
        setcor(1)
        IF mped_merc[1,7] = 'HR'
                mmerc := 'Tempo de Duracao: '+ELAPTIME(mentrada,msaida)
        ENDIF
        mqtd := 1
        @ 3,14 GET mqtd PICT '9,999.99' VALID IF(EMPTY(mqtd) .OR. mqtd < 0,.F.,.T.)
        @ 4,14 GET mped_merc[1,6] PICT '9,999.99' WHEN mped_merc[1,7] = 'HR'
        @ 5,14 GET mcod_garcon PICT '999' VALID ven(mcod_garcon,5,19)
        @ 6,14 GET mobs PICT '@!'
        READ
        IF LASTKEY() = 27 .OR. 'N' = op_simnao('S','Confirma a Inclusao do PRODUTO:')
                WVW_PBDestroy(,nPBotaoid)
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        cons_mov := {}
        sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL',,.t.,@cons_mov)
        IF LEN(cons_mov) = 0
                IF op_simnao('S','Deseja ABRIR esta MESA/QUARTO') = 'S'
                        aret := {}
                        sr_getconnection():exec("SELECT MAX(num_doc) FROM mastnummov",,.t.,@aret)
                        IF LEN(aret) = 0
                                mnum_doc := 1
                        ELSE
                                mnum_doc := VAL(aret[1,1]) + 1
                        ENDIF
                        sr_getconnection():exec('INSERT INTO mastnummov (num_doc,data,'+;
                                                'hora,SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                                sr_cdbvalue(DATE())+','+; //2
                                                sr_cdbvalue(TIME())+','+; //3
                                                sr_cdbvalue(' ')+')',,.f.)
                ELSE
                        LOOP
                ENDIF
        ELSE
                mnun_doc := VAL(cons_mov[1,1])
        ENDIF
        sr_getconnection():exec('INSERT INTO mastmov ('+;
                                'NUM_DOC   ,'+;//1
                                'NUM_LOCAL ,'+;//2
                                'DATA      ,'+;//3
                                'HORA      ,'+;//4
                                'COD_PROD  ,'+;//5
                                'DESCRI    ,'+;//6
                                'QTD       ,'+;//7
                                'PRECO     ,'+;//8
                                'COD_CLI   ,'+;//9
                                'COD_GARCO ,'+;//10
                                'OPER      ,'+;//11
                                'OBS       ,'+;//12
                                'PORTA     ,'+;//13
                                'SR_DELETED )'+;//14
                                ' VALUES ('+;
                                sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+','+; //2
                                sr_cdbvalue(DATE())+','+; //3
                                sr_cdbvalue(TIME())+','+; //4
                                sr_cdbvalue(STRZERO(mcod_merc,5))+','+; //5
                                sr_cdbvalue(mmerc)+','+; //6
                                sr_cdbvalue(mqtd)+','+; //7
                                sr_cdbvalue(mped_merc[1,6])+','+; //8
                                sr_cdbvalue('')+','+; //9
                                sr_cdbvalue(STRZERO(mcod_garcon,3))+','+; //10
                                sr_cdbvalue(cod_operado)+','+; //11
                                sr_cdbvalue(mobs)+','+; //12
                                sr_cdbvalue(mped_merc[1,9])+','+; //13
                                sr_cdbvalue(' ')+')',,.f.)//14
        //sr_getconnection():exec("UPDATE mastprod SET descri = "+sr_cdbvalue(cons_merc[1,2])+",unidade = "+sr_cdbvalue(cons_merc[1,7])+",pr_venda = "+sr_cdbvalue(cons_merc[1,6])+",tipo = "+sr_cdbvalue(cons_merc[1,3])+" WHERE codigo = "+sr_cdbvalue(mcod),,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

        WVW_PBDestroy(,nPBotaoid)
        wvw_lclosewindow()
        RETURN .T.


        IF ! imp_arq('FCH_PARC.TXT','R')
                RETURN NIL
        ENDIF
        /*
        IF mped_merc[1,9] = 1
                mporta := m_cfg[5]
        ELSEIF mped_merc[1,9] = 2
                mporta := m_cfg[6]
        ELSEIF mped_merc[1,9] = 3
                mporta := m_cfg[7]
        ENDIF
        SET DEVI TO PRINT
        SET PRINT TO (mporta)
        */
        //DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
        //DEVPOS(PROW(),00);DEVOUT(memp_resa)
        //DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
        //DEVPOS(PROW(),00);DEVOUT(mtraco)
        //DEVPOS(PROW()+1,00);DEVOUT('Documento: '+STRZERO(mnum_doc,6))
        DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
        DEVPOS(PROW(),00);DEVOUT('Mesa.....: '+mtip_lugar+STRZERO(mnum_lugar,4))
        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
        DEVPOS(PROW(),00);DEVOUT('Data.....: '+DTOC(DATE())+' - Horas: '+TIME())
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
        DEVPOS(PROW(),00);DEVOUT('Codigo...: '+STRZERO(mcod_merc,5))
        DEVPOS(PROW()+1,00);DEVOUT(mmerc)
        IF ! EMPTY(mobs)
                DEVPOS(PROW()+1,0);DEVOUT('OBS.: '+mobs)
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT('Quantidade: '+TRANSFORM(mqtd,'999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
        DEVPOS(PROW(),00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
        DEVPOS(PROW(),00);DEVOUT('Garcon....: '+STRZERO(mcod_garcon,3))
        DEVPOS(PROW()+1,00);DEVOUT('Operador..: '+cod_operado)
        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+m_cfg[10],00);DEVOUT(CHR(18))
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('FCH_PARC.TXT')
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ***********************************

