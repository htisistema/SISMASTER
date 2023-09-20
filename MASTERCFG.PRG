* CONFIGURACAO DE TERMINAIS
***************************
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
MEMVAR getlist

FUNCTION mastercfg(mnao)
************************
LOCAL opcao
op_tela(10,00,27,100,'CONFIGURACAO INDIVIDUAL DO TERMINAL')
WHILE .T.
        DEVPOS(1 ,1);DEVOUT('Caminho Banco de Dados.........:')
        DEVPOS(2 ,1);DEVOUT('Tipo de Terminal [S]erv.[T]erm.:')
        DEVPOS(3 ,1);DEVOUT('Codigo MD5.....................:')
        DEVPOS(4 ,1);DEVOUT('Quantidade de Terminais........:')
        DEVPOS(5 ,1);DEVOUT('Nome da Impressora Cozinha.....:')
        DEVPOS(6 ,1);DEVOUT('Nome da Impressora Bar.........:')
        DEVPOS(7 ,1);DEVOUT('Nome da Impressora Outras......:')
        DEVPOS(8 ,1);DEVOUT('Caminho Arquivo Impressao......:')
        DEVPOS(9 ,1);DEVOUT('Nome da Impressora Geral.......:')
        DEVPOS(10,1);DEVOUT('Qtd. Linhas p/corte do papel...:')
        DEVPOS(11,1);DEVOUT('Caminho Fotos Produtos.........:')
        DEVPOS(12,1);DEVOUT('Caminho Geral..................:')
        DEVPOS(13,1);DEVOUT('IP DO ACBR ("ip":3434).........:')
        DEVPOS(14,1);DEVOUT('CAMINHO DA NFE.................:')
        DEVPOS(15,1);DEVOUT('CAMINHO DO ACBRMONITOR.........:')
        DEVPOS(16,1);DEVOUT('VERSAO DO SISTEMAS SISMASTER...:')
        DEVPOS(17,1);DEVOUT('Tamanho da Tela................:')
        IF mnao = NIL
                m_cfg[1]       := IF(EMPTY(m_cfg[1])  .OR. m_cfg[1]  = NIL,SPACE(50),m_cfg[1]+SPACE(50-LEN(m_cfg[1])))
                m_cfg[2]       := IF(EMPTY(m_cfg[2])  .OR. m_cfg[2]  = NIL,SPACE(50),m_cfg[2])
                m_cfg[3]       := IF(EMPTY(m_cfg[3])  .OR. m_cfg[3]  = NIL,SPACE(50),m_cfg[3])+SPACE(50-LEN(m_cfg[3]))
                m_cfg[4]       := IF(EMPTY(m_cfg[4])  .OR. m_cfg[4]  = NIL,SPACE(50),m_cfg[4])
                m_cfg[5]       := IF(EMPTY(m_cfg[5])  .OR. m_cfg[5]  = NIL,SPACE(50),m_cfg[5])+SPACE(50-LEN(m_cfg[5]))
                m_cfg[6]       := IF(EMPTY(m_cfg[6])  .OR. m_cfg[6]  = NIL,SPACE(50),m_cfg[6])+SPACE(50-LEN(m_cfg[6]))
                m_cfg[7]       := IF(EMPTY(m_cfg[7])  .OR. m_cfg[7]  = NIL,SPACE(50),m_cfg[7])+SPACE(50-LEN(m_cfg[7]))
                m_cfg[8]       := IF(EMPTY(m_cfg[8])  .OR. m_cfg[8]  = NIL,SPACE(50),m_cfg[8])+SPACE(50-LEN(m_cfg[8]))
                m_cfg[9]       := IF(EMPTY(m_cfg[9])  .OR. m_cfg[9]  = NIL,SPACE(50),m_cfg[9])+SPACE(50-LEN(m_cfg[9]))
                m_cfg[10]      := IF(EMPTY(m_cfg[10]) .OR. m_cfg[10] = NIL,SPACE(50),m_cfg[10])
                m_cfg[11]      := IF(EMPTY(m_cfg[11]) .OR. m_cfg[11] = NIL,SPACE(50),m_cfg[11])+SPACE(50-LEN(m_cfg[11]))
                m_cfg[12]      := IF(EMPTY(m_cfg[12]) .OR. m_cfg[12] = NIL,SPACE(50),m_cfg[12])+SPACE(50-LEN(m_cfg[12]))
                m_cfg[13]      := IF(EMPTY(m_cfg[13]) .OR. m_cfg[13] = NIL,SPACE(50),m_cfg[13])+SPACE(50-LEN(m_cfg[13]))
                m_cfg[14]      := IF(EMPTY(m_cfg[14]) .OR. m_cfg[14] = NIL,SPACE(50),m_cfg[14])+SPACE(50-LEN(m_cfg[14]))
                m_cfg[15]      := IF(EMPTY(m_cfg[15]) .OR. m_cfg[15] = NIL,SPACE(50),m_cfg[15])+SPACE(50-LEN(m_cfg[15]))
                m_cfg[16]      := IF(EMPTY(m_cfg[16]) .OR. m_cfg[16] = NIL,SPACE(50),m_cfg[16])+SPACE(50-LEN(m_cfg[16]))
                m_cfg[17]      := IF(EMPTY(m_cfg[17]) .OR. m_cfg[17] = NIL,SPACE(50),m_cfg[17])+SPACE(50-LEN(m_cfg[17]))
        ELSE
                m_cfg[1]       := 'localhost:C:\SISMASTER\SISMASTER.FDB              '
                m_cfg[2]       := 'S'
                m_cfg[3]       := SPACE(50)
                m_cfg[4]       := 1
                m_cfg[5]       := SPACE(50)
                m_cfg[6]       := SPACE(50)
                m_cfg[7]       := SPACE(50)
                m_cfg[8]       := SPACE(50)
                m_cfg[9]       := 'C:\SISMASTER\                                            '
                m_cfg[10]      := 11
                m_cfg[11]      := 'C:\SISMASTER\PRODUTO\                                    '
                m_cfg[12]      := 'C:\SISMASTER\                                            '
                m_cfg[13]      := SPACE(50)
                m_cfg[14]      := SPACE(1)
                m_cfg[15]      := SPACE(50)
                m_cfg[16]      := SPACE(50)
                m_cfg[17]      := SPACE(50)
        ENDIF
        //IF mnao = '1'
        DEVPOS(3,34);DEVOUT(m_cfg[3])
        DEVPOS(16,34);DEVOUT(m_cfg[13])

        @ 1,34  GET m_cfg[1] PICT '@!'
        @ 2,34  GET m_cfg[2] PICT '@!' VALID m_cfg[2] $ 'T,S'
        @ 4,34  GET m_cfg[4] PICT '999'
        @ 5,34  GET m_cfg[5] PICT '@!'
        @ 6,34  GET m_cfg[6] PICT '@!'
        @ 7,34  GET m_cfg[7] PICT '@!'
        @ 8,34  GET m_cfg[8] PICT '@!'
        @ 9,34  GET m_cfg[9] PICT '@!'
        @ 10,34 GET m_cfg[10] PICT '999'
        @ 11,34 GET m_cfg[11] PICT '@!'
        @ 12,34 GET m_cfg[12] PICT '@!'
        @ 13,34 GET m_cfg[15] PICT '@!'
        @ 14,34 GET m_cfg[16] PICT '@!'
        @ 15,34 GET m_cfg[17] PICT '@!'
        READ
        IF op_simnao('S','Confirma as Alteracoes Feitas') = 'N' .OR. LASTKEY() = 27
                EXIT
        ENDIF

        //ENDIF
        FCLOSE('mastercfg.ini')
	MYRUN('REN mastercfg.ini mastercfg01.ini')
        //FCREATE('mastercfg.ini' )
        mArq        := fcreate("mastercfg.ini" )
        sLinhas := '001 C Caminho do Banco Dados='+ALLTRIM(m_cfg[1]) + m_qp + ;
                   '002 C Tipo de Terminal      ='+ALLTRIM(m_cfg[2]) + m_qp + ;
                   '003 C md5                   ='+ALLTRIM(m_cfg[3]) + m_qp + ;
                   '004 N Quantidade Terminais  ='+ALLTRIM(STRZERO(m_cfg[4],3)) + m_qp + ;
                   '005 C Porta Cozinha (Prod.) ='+ALLTRIM(m_cfg[5]) + m_qp + ;
                   '006 C Porta Bar     (Prod.) ='+ALLTRIM(m_cfg[6]) + m_qp + ;
                   '007 C Porta Outros  (Prod.) ='+ALLTRIM(m_cfg[7]) + m_qp + ;
                   '008 C Caminho arq Impressao ='+ALLTRIM(m_cfg[8]) + m_qp + ;
                   '009 C Porta Geral Impressao ='+ALLTRIM(m_cfg[9]) + m_qp + ;
                   '010 N Qtd.Linhas p/Corte    ='+ALLTRIM(STRZERO(m_cfg[10],3))+ m_qp + ;
                   '011 C Caminho Foto Produto  ='+ALLTRIM(m_cfg[11])+ m_qp + ;
                   '012 C Caminho Geral         ='+ALLTRIM(m_cfg[12])+ m_qp + ;
                   '013 C Versao do sistema     ='+ALLTRIM(m_cfg[13])+ m_qp + ;
                   '014 C Tamanho da Tela       ='+ALLTRIM(m_cfg[14])+ m_qp + ;
                   '015 C IP DO ACBR ("ip":3434)='+ALLTRIM(m_cfg[15])+ m_qp + ;
                   '016 C CAMINHO DA NFE        ='+ALLTRIM(m_cfg[16])+ m_qp + ;
                   '017 C CAMINHO DO ACBRMONITOR='+ALLTRIM(m_cfg[17])

        fwrite( mArq, @sLinhas, len( sLinhas ) )
        FCLOSE(mArq)

        lin := MEMOLINE(MEMOREAD('mastercfg.ini'),110,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD('mastercfg.ini'),110)
        m_cfg := {}
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD('mastercfg.ini'),110,linha,,)
                IF SUBSTR(lin,5,1) = 'C'
                        AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
                ELSE
                        AADD(m_cfg,VAL(SUBSTR(lin,30)))
                ENDIF
        NEXT
        fclose(mArq)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN .T.
************************* F I M ***********************************
