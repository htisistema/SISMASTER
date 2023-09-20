* CONFIGURAR INDIVIDUAL DO SISTEMA
**********************************
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"

FUNCTION sac611()
*****************
LOCAL MPRG:='SAC611',mtitulo:='CONFIGURACAO INDIVIDUAL DO SISTEMA',opcao,;
      demo_set:={},point:=0,m_indiv:={},mop:='',pt_menu,menu_set:={},mterminal:=''

IF ! ver_nivel(mprg,mtitulo,'1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
CLEAR GETS
WHILE .T.
        exibi_prg(mprg)
        m_indiv:={}
        sr_getconnection():exec("SELECT * FROM sacindiv",,.t.,@m_indiv)
        op_tela(10,10,40,40,'T E R M I N A I S',,1)
        DEVPOS(01,01);DEVOUT(PADC('[ '+m_cfg[1]+' ]',30))
        @ 02,00 TO 02,30
        mensagem('Escolha o terminal')
        i := pt_menu := 0
        menu_set:={}
        FOR i = 1 TO LEN(m_indiv)
                AADD(menu_set,' '+m_indiv[i,1])
        NEXT
        pt_menu := ACHOICE(3,0,30,39,menu_set,,,pt_menu)
        DO CASE
                CASE LASTKEY() = 13
                        fecha_tela()
                        m_indiv:={}
                        sr_getconnection():exec("SELECT * FROM sacindiv WHERE terminal = "+sr_cdbvalue(ALLTRIM(menu_set[pt_menu])),,.t.,@m_indiv)
                        IF LEN(m_indiv) = 0
                                atencao('Nao existe nenhum registro...')
                        ENDIF
                        mterminal:=ALLTRIM(menu_set[pt_menu])
                CASE LASTKEY() = 27
                        fecha_tela()
                        EXIT
        ENDCASE
        op_tela(00,00,50,120,mtitulo,,1)
        WHILE .T.
                setcor(1)
                demo_set:={}
                AADD(demo_set,'                                              ')
                AADD(demo_set,'    C O N F I G U R A C A O   I N D I V I D U A L    ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'003 - CAMINHO GERAL DO TERMINAL.......................: '+m_indiv[1,03]+' ')
                AADD(demo_set,'004 - CAMINHO PARA IMPORTAR E EXPORTAR ARQ. P/APP.....: '+m_indiv[1,04] +' ')
                AADD(demo_set,'005 - CAMINHO PARA DOSPRINTER.........................: '+m_indiv[1,05] +' ')
                AADD(demo_set,'006 - CAMINHO PARA CFG................................: '+m_indiv[1,06] +' ')
                AADD(demo_set,'028 - CAMINHO DAS FOTOS DOS CLIENTES..................: '+m_indiv[1,28] +' ')
                AADD(demo_set,'029 - CAMINHO DAS FOTOS DOS PRODUTOS..................: '+m_indiv[1,29] +' ')
                AADD(demo_set,'030 - CAMINHO DAS FOTOS DOS ANIMAIS...................: '+m_indiv[1,30] +' ')
                AADD(demo_set,'031 - CAMINHO DAS FOTOS DOS USUARIOS..................: '+m_indiv[1,31] +' ')
                AADD(demo_set,'032 - CAMINHO DAS FOTOS DOS RACAS DOS ANIMAIS.........: '+m_indiv[1,32] +' ')
                AADD(demo_set,'016 - QUANTIDADE DE LINHAS PARA AVANCAR A IMPRESSORA..: '+TRANSFORM(m_indiv[1,16],'999') +' ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'    C O N F I G U R A C A O   P E D I D O    ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'007 - MODELO DA IMPRESSORA TERMICA....................: '+m_indiv[1,07] +' ')
                AADD(demo_set,'008 - 2a. PORTA PARA EMISSAO DE PEDIDO................: '+m_indiv[1,08] +' ')
                AADD(demo_set,'009 - TIPO DO FORMULARIO DO PEDIDO....................: '+m_indiv[1,09] +' ')
                AADD(demo_set,'010 - TIPO DE IMPRESSORA DEFAULT PARA O PEDIDO........: '+m_indiv[1,10] +' ')
                AADD(demo_set,'011 - QUANTIDADE DE COPIAS PARA IMPRESSAO PEDIDO......: '+TRANSFORM(m_indiv[1,11],'999') +' ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'    C O N F I G U R A C A O   O R C A M E N T O    ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'012 - 1a. PORTA PARA EMISSAO DE ORCAMENTOS............: '+m_indiv[1,12] +' ')
                AADD(demo_set,'013 - 2a. PORTA PARA EMISSAO DE ORCAMENTOS............: '+m_indiv[1,13] +' ')
                AADD(demo_set,'014 - TIPO DO FORMULARIO DO ORCAMENTO.................: '+m_indiv[1,14] +' ')
                AADD(demo_set,'015 - QUANTIDADE DE COPIAS PARA IMPRESSAO ORCAMENTO...: '+TRANSFORM(m_indiv[1,15],'999') +' ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'    C O N F I G U R A C A O   R E L A T O R I O    ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'017 - PORTA PARA EMISSAO DOS RELATORIOS...............: '+m_indiv[1,17] +' ')
                AADD(demo_set,'018 - TIPO DE IMPRESSORA DEFAULT PARA OS RELATORIOS...: '+'M' +' ')
                AADD(demo_set,'020 - PORTA PARA EMISSAO DAS DUPLICATAS...............: '+m_indiv[1,20] +' ')
                AADD(demo_set,'021 - TIPO DE IMPRESSORA DEFAULT PARA O DUPLICATAS....: '+m_indiv[1,21] +' ')
                AADD(demo_set,'022 - QUANTIDADE DE COPIAS PARA IMPRESSAO DUPLICATAS..: '+TRANSFORM(m_indiv[1,22],'999') +' ')
                AADD(demo_set,'023 - PORTA PARA EMISSAO DE NOTAS FISCAL..............: '+m_indiv[1,23] +' ')
                AADD(demo_set,'024 - PORTA PARA EMISSAO DE BOLETOS...................: '+m_indiv[1,24] +' ')
                AADD(demo_set,'025 - TIPO DE IMPRESSORA DEFAULT PARA O BOLETOS.......: '+m_indiv[1,25] +' ')
                AADD(demo_set,'026 - TERMINAL UTILIZAR AUTOCAIXA [S/N]...............: '+m_indiv[1,26] +' ')
                AADD(demo_set,'027 - TIPO DO FORMULARIO DO ORDEM DE SERVICOS (OS)....: '+m_indiv[1,27] +' ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'    C O N F I G U R A C A O   I M P R E S S O R A    F I S C A L    ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'045 - MARCA DA IPRESSORA FISCAL.......................: '+m_indiv[1,45] +' ')
                AADD(demo_set,'044 - CODIGO DA TABELA DO TIPO DA ECF.................: '+m_indiv[1,44] +' ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'    C O N F I G U R A C A O   T E F    ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'033 - CAMINHO DAS REQUISICAO DO HIPER (REQ)...........: '+m_indiv[1,33] +' ')
                AADD(demo_set,'034 - CAMINHO DAS RESPOSTA DO HIPER (RESP)............: '+m_indiv[1,34] +' ')
                AADD(demo_set,'035 - CAMINHO DAS REQUISICAO DO TEF (REQ).............: '+m_indiv[1,35] +' ')
                AADD(demo_set,'036 - CAMINHO DAS RESPOSTA DO TEF (RESP)..............: '+m_indiv[1,36] +' ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'    C O N F I G U R A C A O   A C B R    ')
                AADD(demo_set,'                                              ')
                AADD(demo_set,'037 - CAMINHO DO ACBRMONITOR..........................: '+m_indiv[1,37] +' ')
                AADD(demo_set,'038 - CAMINHO DO ARQUIVO REMESSA DO BOLETOS...........: '+m_indiv[1,38] +' ')
                AADD(demo_set,'039 - CAMINHO DA CONFIGURACAO DOS BOLETOS.............: '+m_indiv[1,39] +' ')
                AADD(demo_set,'040 - CAMINHO DA NFE..................................: '+m_indiv[1,40] +' ')
                AADD(demo_set,'041 - TIPO DE GERENCIADOR PADRAO......................: '+m_indiv[1,41] +' ')
                AADD(demo_set,'042 - IP DO ACBR (Ex.: 192.168.0.4:3434)..............: '+m_indiv[1,42] +' ')
                AADD(demo_set,'043 - IP DO ACBRNFE (Ex.: 192.168.0.4:3436)...........: '+m_indiv[1,43] +' ')
                mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                point := ACHOICE(0,1,49,119,demo_set,,,point)
                DO CASE
                        CASE LASTKEY() = 13
                                mop := SUBSTR(demo_set[point],1,3)
                                IF mop = '003'
                                        op_tela(10,05,12,100,'CAMINHO GERAL DO TERMINAL')
                                        DEVPOS(1,1);DEVOUT('CAMINHO GERAL DO TERMINAL:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '004'
                                        op_tela(10,05,12,100,'CAMINHO PARA IMPORTAR E EXPORTAR ARQ. P/APP...')
                                        DEVPOS(1,1);DEVOUT('CAMINHO PARA IMPORTAR E EXPORTAR ARQ. P/APP...:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '005'
                                        op_tela(10,05,12,100,'CAMINHO PARA DOSPRINTER')
                                        DEVPOS(1,1);DEVOUT('CAMINHO PARA DOSPRINTER:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '006'
                                        op_tela(10,05,12,100,'CAMINHO PARA CFG')
                                        DEVPOS(1,1);DEVOUT('CAMINHO PARA CFG:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '007'
                                        op_tela(10,10,12,80,'007 - MODELO DA IMPRESSORA TERMICA')
                                        DEVPOS(1,1);DEVOUT('007 - MODELO DA IMPRESSORA TERMICA.................:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '008'
                                        op_tela(10,10,12,80,'2a. PORTA PARA EMISSAO DE PEDIDO')
                                        DEVPOS(1,1);DEVOUT('2a. PORTA PARA EMISSAO DE PEDIDO................:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '009'
                                        op_tela(10,10,12,80,'TIPO DO FORMULARIO DO PEDIDO')
                                        DEVPOS(1,1);DEVOUT('TIPO DO FORMULARIO DO PEDIDO....................:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'B2,B ,F ,G ,P ,T ,L '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '010'
                                        op_tela(10,10,12,80,'TIPO DE IMPRESSORA DEFAULT PARA O PEDIDO')
                                        DEVPOS(1,1);DEVOUT('TIPO DE IMPRESSORA DEFAULT PARA O PEDIDO........:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'M,J'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '011'
                                        op_tela(10,10,12,80,'QUANTIDADE DE COPIAS PARA IMPRESSAO PEDIDO')
                                        DEVPOS(1,1);DEVOUT('QUANTIDADE DE COPIAS PARA IMPRESSAO PEDIDO......:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '99'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '012'
                                        op_tela(10,10,12,80,'1a. PORTA PARA EMISSAO DE ORCAMENTOS')
                                        DEVPOS(1,1);DEVOUT('1a. PORTA PARA EMISSAO DE ORCAMENTOS............:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '013'
                                        op_tela(10,10,12,80,'2a. PORTA PARA EMISSAO DE ORCAMENTOS')
                                        DEVPOS(1,1);DEVOUT('2a. PORTA PARA EMISSAO DE ORCAMENTOS............:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '014'
                                        op_tela(10,10,12,80,'TIPO DO FORMULARIO DO ORCAMENTO')
                                        DEVPOS(1,1);DEVOUT('TIPO DO FORMULARIO DO ORCAMENTO.................:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'B2,B ,F ,G ,P ,T ,L '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '015'
                                        op_tela(10,10,12,80,'QUANTIDADE DE COPIAS PARA IMPRESSAO ORCAMENTO')
                                        DEVPOS(1,1);DEVOUT('QUANTIDADE DE COPIAS PARA IMPRESSAO ORCAMENTO...:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '99'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '016'
                                        op_tela(10,10,12,80,'QUANTIDADE DE LINHAS PARA AVNACAR A IMPRESSORA')
                                        DEVPOS(1,1);DEVOUT('QUANTIDADE DE LINHAS PARA AVNACAR A IMPRESSORA..:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '99'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '017'
                                        op_tela(10,10,12,80,'PORTA PARA EMISSAO DOS RELATORIOS')
                                        DEVPOS(1,1);DEVOUT('PORTA PARA EMISSAO DOS RELATORIOS...............:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '018'
                                        op_tela(10,10,12,80,'TIPO DE IMPRESSORA DEFAULT PARA OS RELATORIOS')
                                        DEVPOS(1,1);DEVOUT('TIPO DE IMPRESSORA DEFAULT PARA OS RELATORIOS....:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'M,J'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '020'
                                        op_tela(10,10,12,80,'PORTA PARA EMISSAO DAS DUPLICATAS')
                                        DEVPOS(1,1);DEVOUT('PORTA PARA EMISSAO DAS DUPLICATAS...............:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '021'
                                        op_tela(10,10,12,80,'TIPO DE IMPRESSORA DEFAULT PARA O DUPLICATAS')
                                        DEVPOS(1,1);DEVOUT('TIPO DE IMPRESSORA DEFAULT PARA O DUPLICATAS....:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'M,J'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '022'
                                        op_tela(10,10,12,80,'QUANTIDADE DE COPIAS PARA IMPRESSAO DUPLICATAS')
                                        DEVPOS(1,1);DEVOUT('QUANTIDADE DE COPIAS PARA IMPRESSAO DUPLICATAS..:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '99'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '023'
                                        op_tela(10,10,12,80,'PORTA PARA EMISSAO DE NOTAS FISCAL')
                                        DEVPOS(1,1);DEVOUT('PORTA PARA EMISSAO DE NOTAS FISCAL..............:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '024'
                                        op_tela(10,10,12,80,'PORTA PARA EMISSAO DE BOLETOS')
                                        DEVPOS(1,1);DEVOUT('PORTA PARA EMISSAO DE BOLETOS...................:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN '
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '025'
                                        op_tela(10,10,12,80,'TIPO DE IMPRESSORA DEFAULT PARA O BOLETOS')
                                        DEVPOS(1,1);DEVOUT('TIPO DE IMPRESSORA DEFAULT PARA O BOLETOS.......:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'M,J'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '026'
                                        op_tela(10,10,12,80,'TERMINAL UTILIZAR AUTOCAIXA')
                                        DEVPOS(1,1);DEVOUT('TERMINAL UTILIZAR AUTOCAIXA [S/N/T].............:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'S,N,T'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '027'
                                        op_tela(10,10,12,80,'TIPO DO FORMULARIO DO ORDEM DE SERVICOS (OS)')
                                        DEVPOS(1,1);DEVOUT('TIPO DO FORMULARIO DO ORDEM DE SERVICOS (OS)....:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!' VALID m_indiv[1,VAL(mop)] $ 'F,B'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '028'
                                        op_tela(10,05,12,100,'CAMINHO DAS FOTOS DOS CLIENTES')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS FOTOS DOS CLIENTES:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '029'
                                        op_tela(10,05,12,100,'CAMINHO DAS FOTOS DOS PRODUTOS')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS FOTOS DOS PRODUTOS:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '030'
                                        op_tela(10,05,12,100,'CAMINHO DAS FOTOS DOS ANIMAIS')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS FOTOS DOS ANIMAIS:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '031'
                                        op_tela(10,05,12,100,'CAMINHO DAS FOTOS DOS USUARIOS')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS FOTOS DOS USUARIOS:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '032'
                                        op_tela(10,05,12,100,'CAMINHO DAS FOTOS DOS RACAS DOS ANIMAIS')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS FOTOS DOS RACAS DOS ANIMAIS:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '033'
                                        op_tela(10,05,12,100,'CAMINHO DAS REQUISICAO DO HIPER (REQ)')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS REQUISICAO DO HIPER (REQ):')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '034'
                                        op_tela(10,05,12,100,'CAMINHO DAS RESPOSTA DO HIPER (RESP)')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS RESPOSTA DO HIPER (RESP):')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '035'
                                        op_tela(10,05,12,100,'CAMINHO DAS REQUISICAO DO TEF (REQ)')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS REQUISICAO DO TEF (REQ):')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '036'
                                        op_tela(10,05,12,100,'CAMINHO DAS RESPOSTA DO TEF (RESP)')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DAS RESPOSTA DO TEF (RESP):')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '037'
                                        op_tela(10,05,12,100,'CAMINHO DO ACBRMONITOR')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DO ACBRMONITOR:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '038'
                                        op_tela(10,05,12,100,'CAMINHO DO ARQUIVO REMESSA DO BOLETOS')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DO ARQUIVO REMESSA DO BOLETOS:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '039'
                                        op_tela(10,05,12,100,'CAMINHO DA CONFIGURACAO DOS BOLETOS')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DA CONFIGURACAO DOS BOLETOS:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '040'
                                        op_tela(10,05,12,100,'CAMINHO DA NFE')
                                        DEVPOS(1,1);DEVOUT('CAMINHO DA NFE:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '041'
                                        op_tela(10,10,12,90,'TIPO DE GERENCIADOR PADRAO')
                                        DEVPOS(1,1);DEVOUT('TIPO DE GERENCIADOR PADRAO......................:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40' WHEN men_get(1,1,'Informe: PAYGO - PAYGOMULT - PADRAO') VALID lim_get() .AND. mtipo_cli $ 'PAYGO,PAYGOMULT,PADRAO'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '042'
                                        op_tela(10,05,12,100,'IP DO ACBR (Ex.: 192.168.0.4:3434)')
                                        DEVPOS(1,1);DEVOUT('IP DO ACBR (Ex.: 192.168.0.4:3434):')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '043'
                                        op_tela(10,05,12,100,'IP DO ACBRNFE (Ex.: 192.168.0.4:3436)')
                                        DEVPOS(1,1);DEVOUT('IP DO ACBRNFE (Ex.: 192.168.0.4:3436):')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!S40'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '044'
                                        op_tela(10,05,12,100,'CODIGO DO TIPO DA ECF')
                                        DEVPOS(1,1);DEVOUT('CODIGO DO TIPO DA ECF................:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSEIF mop = '045'
                                        op_tela(10,05,12,100,'MARCA DA IMPRESSORA FISCAL')
                                        DEVPOS(1,1);DEVOUT('MARCA DA IMPRESSORA FISCAL...........:')
                                        @ 1,COL()+1 GET m_indiv[1,VAL(mop)] PICT '@!'
                                        READ
                                        IF LASTKEY() = 27
                                                fecha_tela()
                                                LOOP
                                        ENDIF
                                        fecha_tela()
                                        LOOP
                                ELSE
                                        LOOP
                                ENDIF
                                fecha_tela()
                                RETURN NIL
                        CASE LASTKEY() = 27
                                IF op_simnao('S','Confirma as Configuracoes:') = 'S'
                                        //atencao('|'+mterminal+'|'+m_indiv[1,03])
                                        sr_getconnection():exec('UPDATE sacindiv SET'+;
                                        ' cam_geral  = '+sr_cdbvalue(m_indiv[1,03])+;
                                        ',cam_APP... = '+sr_cdbvalue(m_indiv[1,04])+;
                                        ',cam_dosprt = '+sr_cdbvalue(m_indiv[1,05])+;
                                        ',cam_cfg    = '+sr_cdbvalue(m_indiv[1,06])+;
                                        ',prt_ped1   = '+sr_cdbvalue(m_indiv[1,07])+;
                                        ',prt_ped2   = '+sr_cdbvalue(m_indiv[1,08])+;
                                        ',form_ped   = '+sr_cdbvalue(m_indiv[1,09])+;
                                        ',tp_impped  = '+sr_cdbvalue(m_indiv[1,10])+;
                                        ',qtd_cop_pd = '+sr_cdbvalue(m_indiv[1,11])+;
                                        ',prt_orc1   = '+sr_cdbvalue(m_indiv[1,12])+;
                                        ',prt_orc2   = '+sr_cdbvalue(m_indiv[1,13])+;
                                        ',form_orc   = '+sr_cdbvalue(m_indiv[1,14])+;
                                        ',qtd_cop_or = '+sr_cdbvalue(m_indiv[1,15])+;
                                        ',qtd_lin_av = '+sr_cdbvalue(m_indiv[1,16])+;
                                        ',prt_rel    = '+sr_cdbvalue(m_indiv[1,17])+;
                                        ',tp_imprel  = '+sr_cdbvalue('M')+;
                                        ',prt_dup    = '+sr_cdbvalue(m_indiv[1,20])+;
                                        ',tp_impdup  = '+sr_cdbvalue(m_indiv[1,21])+;
                                        ',qtd_cp_dup = '+sr_cdbvalue(m_indiv[1,22])+;
                                        ',prt_nf     = '+sr_cdbvalue(m_indiv[1,23])+;
                                        ',prt_bole   = '+sr_cdbvalue(m_indiv[1,24])+;
                                        ',tp_impbol  = '+sr_cdbvalue(m_indiv[1,25])+;
                                        ',autocaixa  = '+sr_cdbvalue(m_indiv[1,26])+;
                                        ',form_os    = '+sr_cdbvalue(m_indiv[1,27])+;
                                        ',cam_ft_cli = '+sr_cdbvalue(m_indiv[1,28])+;
                                        ',cam_ft_pro = '+sr_cdbvalue(m_indiv[1,29])+;
                                        ',cam_ft_ani = '+sr_cdbvalue(m_indiv[1,30])+;
                                        ',cam_ft_usu = '+sr_cdbvalue(m_indiv[1,31])+;
                                        ',cam_ft_rac = '+sr_cdbvalue(m_indiv[1,32])+;
                                        ',hiper_req  = '+sr_cdbvalue(m_indiv[1,33])+;
                                        ',hiper_resp = '+sr_cdbvalue(m_indiv[1,34])+;
                                        ',dial_req   = '+sr_cdbvalue(m_indiv[1,35])+;
                                        ',dial_resp  = '+sr_cdbvalue(m_indiv[1,36])+;
                                        ',cam_acbr   = '+sr_cdbvalue(m_indiv[1,37])+;
                                        ',cam_reme   = '+sr_cdbvalue(m_indiv[1,38])+;
                                        ',cam_boleto = '+sr_cdbvalue(m_indiv[1,39])+;
                                        ',cam_nfe    = '+sr_cdbvalue(m_indiv[1,40])+;
                                        ',gerenciado = '+sr_cdbvalue(m_indiv[1,41])+;
                                        ',ip_acbr    = '+sr_cdbvalue(m_indiv[1,42])+;
                                        ',ip_acbrnfe = '+sr_cdbvalue(m_indiv[1,43])+;
                                        ',cod_ecf    = '+sr_cdbvalue(m_indiv[1,44])+;
                                        ',marca_imp  = '+sr_cdbvalue(m_indiv[1,45])+;
                                        ' WHERE terminal = '+sr_cdbvalue(mterminal),,.f.)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        tracelog(valtoprg())

                                ENDIF
                                fecha_tela()
                                m_indiv:={}
                                sr_getconnection():exec("SELECT * FROM sacindiv WHERE terminal = "+sr_cdbvalue(mterminal),,.t.,@m_indiv)
                                exit
                ENDCASE
        ENDDO
ENDDO
RETURN NIL
****************************** F I M ******************************
