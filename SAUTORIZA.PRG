FUNCTION autorizacao(mserie)
****************************
//atencao(ALLTRIM(m_set[1,23])+'ok'+'1'+SUBSTR(m_set[1,30],4,1)+SUBSTR(m_set[1,30],2,1)+SUBSTR(m_set[1,30],5,1)+SUBSTR(m_set[1,30],3,1)+SUBSTR(m_set[1,30],1,1))
IF ALLTRIM(m_set[1,23]) = '1'+SUBSTR(m_set[1,30],4,1)+SUBSTR(m_set[1,30],2,1)+SUBSTR(m_set[1,30],5,1)+SUBSTR(m_set[1,30],3,1)+SUBSTR(m_set[1,30],1,1)
        RETURN .T.
ELSE
        RETURN .F.
ENDIF
RETURN NIL
******************************** F I M ********************************
* TECLADO PARA DIGITAR NUMEROS PIN-PAD
**************************************
FUNCTION pinpad(msen,mdescricao,mmensag,mop_obs)
************************************************
LOCAL mprg:='SAUTORIZA',nPBpinpad:={}
PRIVATE mqtd_cont := '',mnum:=' ',mOK := 0,mvisual := '',msenha

msenha := msen
op_tela(12,10,40,40,' TECLADO VIRTUAL [PIN PAD]',,'*')

limpa(0,0,7,42)
WVW_DrawLabel(,0,1,mdescricao,,,,, 'times new roman',25,15,,,,,)
IF mmensag # NIL
        mensagem(mmensag)
ENDIF
nPBpinpad:={}
i:=0
FOR i = 1 TO 15
        AADD(nPBpinpad,0)
NEXT
//WVW_PBSetFont( nWinNum, 'Arial Black',80,40, nWeight, nQuality, lItalic, lUnderline,lStrikeout )
WVW_PBSetFont( , 'times new roman',20,10)
nPBpinpad[1] := wvw_pbCreate(NIL, 9, 1,11, 9,  ' 1 ',NIL,{||pin_pad('1') })
nPBpinpad[2] := wvw_pbCreate(NIL, 9,11,11,19,  ' 2 ',NIL,{||pin_pad('2') })
nPBpinpad[3] := wvw_pbCreate(NIL, 9,21,11,29,  ' 3 ',NIL,{||pin_pad('3') })
nPBpinpad[4] := wvw_pbCreate(NIL,13,1,15,9,   ' 4 ',NIL,{||pin_pad('4') })
nPBpinpad[5] := wvw_pbCreate(NIL,13,11,15,19, ' 5 ',NIL,{||pin_pad('5') })
nPBpinpad[6] := wvw_pbCreate(NIL,13,21,15,29, ' 6 ',NIL,{||pin_pad('6') })
nPBpinpad[7] := wvw_pbCreate(NIL,17,1,19,9,   ' 7 ',NIL,{||pin_pad('7') })
nPBpinpad[8] := wvw_pbCreate(NIL,17,11,19,19, ' 8 ',NIL,{||pin_pad('8') })
nPBpinpad[9] := wvw_pbCreate(NIL,17,21,19,29, ' 9 ',NIL,{||pin_pad('9') })
nPBpinpad[10]:= wvw_pbCreate(NIL,21,1,23,9,   ' 0 ',NIL,{||pin_pad('0')})
nPBpinpad[11] := wvw_pbCreate(NIL,21,11,23,19,' , ',NIL,{||pin_pad('.') })
nPBpinpad[12] := wvw_pbCreate(NIL,21,21,23,29,' = ',NIL,{||pin_pad('OK') })
nPBpinpad[13]:= wvw_pbCreate(NIL,25,1,27,9,   ' LIMPA ',NIL,{||pin_pad('LIMPA')})
nPBpinpad[14] := wvw_pbCreate(NIL,25,11,27,19,'CANC.',NIL,{||pin_pad('CANCEL') })
nPBpinpad[15] := wvw_pbCreate(NIL,25,21,27,29,'OBS',NIL,{||inserir_obs()})
i:=0
FOR i = 1 TO 14
        WVW_PBEnable( NIL, nPBpinpad[i], .T. )
NEXT
IF mop_obs = NIL
        WVW_PBEnable( NIL, nPBpinpad[15], .F. )
ENDIF
mok:=0
mnum:=' '
WHILE .T.
        //atencao(mqtd_cont)
        limpa(4,0,7,42)
        //ATENCAO(MVISUAL)
        IF msenha = NIL
                WVW_DrawLabel(,4,1,mqtd_cont,,,,, 'Arial Black',30,20,,,,,)
        ELSE
                WVW_DrawLabel(,4,1,mvisual,,,,, 'Arial Black',30,20,,,,,)
        ENDIF
*/
        //WVW_DrawLabel(,lin,col,string,,,240,, 'Arial Black',80,40,,,,,)
        //WVW_DrawLabel(,1,1,mqtd_cont,,,,, 'times new roman',30,20,,,,,)
        @ 8,0 TO 8,42
        @ 42,0 GET mnum PICT '@!' VALID mnum $ '1234567890,.OLC '
        READ
        
        //INKEY(.7)
        IF mok = 1 .OR. LASTKEY() = 13 .OR. mnum = '='
                i:=0
                FOR i= 1 TO 15
                        WVW_PBDestroy(,nPBpinpad[i])
                NEXT
                wvw_lclosewindow()
                RETURN mqtd_cont
        ENDIF
        /*
        IF LEN(mqtd_cont) = 10
                atencao('Quantidade de Digito acima do permitido...')
                LOOP
        ENDIF
        */
        //atencao(CHR(LASTKEY()))
        IF mnum = '1'
                mqtd_cont := mqtd_cont + '1'
                mvisual := mvisual + '#'
        ELSEIF mnum = '2'
                mqtd_cont := mqtd_cont + '2'
                mvisual := mvisual + '#'
        ELSEIF mnum = '3'
                mqtd_cont := mqtd_cont + '3'
                mvisual := mvisual + '#'
        ELSEIF mnum = '4'
                mqtd_cont := mqtd_cont + '4'
                mvisual := mvisual + '#'
        ELSEIF mnum = '5'
                mqtd_cont := mqtd_cont + '5'
                mvisual := mvisual + '#'
        ELSEIF mnum = '6'
                mqtd_cont := mqtd_cont + '6'
                mvisual := mvisual + '#'
        ELSEIF mnum = '7'
                mqtd_cont := mqtd_cont + '7'
                mvisual := mvisual + '#'
        ELSEIF mnum = '8'
                mqtd_cont := mqtd_cont + '8'
                mvisual := mvisual + '#'
        ELSEIF mnum = '9'
                mqtd_cont := mqtd_cont + '9'
                mvisual := mvisual + '#'
        ELSEIF mnum = '0'
                mqtd_cont := mqtd_cont + '0'
                mvisual := mvisual + '#'
        ELSEIF mnum = ','
                mqtd_cont := mqtd_cont + '.'
                mvisual := mvisual + '#'
        ELSEIF mnum = '.'
                mqtd_cont := mqtd_cont + '.'
                mvisual := mvisual + '#'
        ELSEIF mnum = 'l' .OR. mnum = 'L'
                mqtd_cont := ''
                mvisual := ''
        ELSEIF mnum = 'o' .OR. mnum = 'O'
                inserir_obs()
        ELSEIF mnum = 'C' .OR. mnum = 'c' .OR. mnum = '999999'
                wvw_lclosewindow()
                RETURN 'CANCEL'
        ENDIF
        mnum:=' '
        //KEYBOARD CHR(28)
        //CLEAR TYPEAHEAD
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN ''
        ENDIF
ENDDO
RETURN .T.
*********************************  F I M *************************************
FUNCTION pin_pad(mnumero)
*************************
IF ! mnumero $ ',.1234567890LIMPAOKCANCELOBSRET'
        RETURN .F.
ENDIF
IF mnumero = ','
        mnumero := '.'
ENDIF
//atencao(mnumero)
IF mnumero = 'CANCEL'
        mok:=1
        mqtd_cont := ''
        mvisual := ''
        mnum := '999999'
        RETURN .T.
ENDIF
IF mnumero # 'OK'
        mqtd_cont := mqtd_cont + mnumero
        mvisual := mvisual + '#'
ELSEIF mnumero = 'OK'
        mok:=1
        KEYBOARD CHR(13)
        mnum:=' '
        RETURN .T.
ENDIF
IF mnumero = 'LIMPA'
        mqtd_cont := ''
        mvisual := ''
ENDIF
limpa(4,0,7,42)
IF msenha = NIL
        WVW_DrawLabel(,4,1,mqtd_cont,,,,, 'Arial Black',30,20,,,,,)
ELSE
        WVW_DrawLabel(,4,1,mvisual,,,,, 'Arial Black',30,20,,,,,)
ENDIF

//limpa(0,2,0,25)
//DEVPOS(0,2);DEVOUT('Quantidade: '+mqtd_cont)
mnum:=' '
RETURN .T.
*********************************  F I M *************************************
FUNCTION inserir_obs()
***********************
op_tela(10,10,12,50,'Digite a Observacao que deseja')
CLEAR GETS
DEVPOS(1,0);DEVOUT('Observacao:')
@ 1,13 GET mobs PICT '@!'
READ
wvw_lclosewindow()
RETURN NIL
*********************************  F I M *************************************
* FUNCAO PARA CRIPTOGRAFA
*************************
FUNCTION crip(mexp,q,mprod)
***************************
LOCAL mletra:={},maux:={},msenha,i
IF LASTKEY() = 27
        RETURN .F.
ENDIF
msenha := ''
mexp := UPPER(mexp)
i:=0
FOR i = 1 TO LEN(mexp)
        AADD(mletra,SUBSTR(mexp,i,1))
NEXT
i:=0
FOR i = 1 TO LEN(mexp)
        IF mletra[i] = '0'
                AADD(maux,'5')
        ELSEIF mletra[i] = '1'
                AADD(maux,'0')
        ELSEIF mletra[i] = '2'
                AADD(maux,'W')
        ELSEIF mletra[i] = '3'
                AADD(maux,'U')
        ELSEIF mletra[i] = '4'
                AADD(maux,'8')
        ELSEIF mletra[i] = '5'
                AADD(maux,'J')
        ELSEIF mletra[i] = '6'
                AADD(maux,'3')
        ELSEIF mletra[i] = '7'
                AADD(maux,'K')
        ELSEIF mletra[i] = '8'
                AADD(maux,'6')
        ELSEIF mletra[i] = '9'
                AADD(maux,'A')
        ELSE
                atencao('SENHA DE LIBERACAO Foi digitada errada, verifique tente novamente...')
                msenha := ''
                RETURN msenha
        ENDIF
NEXT
i:=0
IF LEN(mexp) = 1
        msenha := maux[1]
ELSE
        msenha := maux[2] + maux[1]
        FOR i = 3 TO LEN(mexp)
                msenha := msenha + maux[i]
        NEXT
ENDIF
RETURN msenha
*********************** F I M *******************************
* FUNCAO PARA DES-CRIPTOGRAFA
*****************************
FUNCTION dcrip(mexp)
********************
LOCAL mletra:={},maux:={},msenha,i
ASIZE(mletra,0)
ASIZE(maux,0)
msenha := ''
i:=0
FOR i = 1 TO LEN(mexp)
        IF SUBSTR(mexp,i,1) = ' ' .OR. SUBSTR(mexp,i,1) = NIL
                LOOP
        ENDIF
        AADD(mletra,SUBSTR(mexp,i,1))
NEXT
i:=0
IF EMPTY(mletra)
        RETURN NIL
ENDIF
FOR i = 1 TO LEN(mletra)
        IF mletra[i] = '5'
                AADD(maux,'0')
        ELSEIF mletra[i] = '0'
                AADD(maux,'1')
        ELSEIF mletra[i] = 'W'
                AADD(maux,'2')
        ELSEIF mletra[i] = 'U'
                AADD(maux,'3')
        ELSEIF mletra[i] = '8'
                AADD(maux,'4')
        ELSEIF mletra[i] = 'J'
                AADD(maux,'5')
        ELSEIF mletra[i] = '3'
                AADD(maux,'6')
        ELSEIF mletra[i] = 'K'
                AADD(maux,'7')
        ELSEIF mletra[i] = '6'
                AADD(maux,'8')
        ELSEIF mletra[i] = 'A'
                AADD(maux,'9')
        ELSE
                atencao('SENHA DE LIBERACAO Foi digitada errada, verifique tente novamente...')
                msenha := ''
                RETURN msenha
        ENDIF
NEXT
IF LEN(mexp) = 1
        msenha := maux[1]
ELSE
        i:=0
        msenha := maux[2] + maux[1]
        FOR i = 3 TO LEN(maux)
                msenha := msenha + maux[i]
        NEXT
ENDIF
RETURN msenha
************************************* F I M ********************************************
FUNCTION fecha_tela
wvw_lclosewindow()
RETURN NIL
***************************  F I M  **********************************
FUNCTION tira_pontos(mpalavra)
******************************
mpalavra := STRTRAN(mpalavra,'.','')
mpalavra := STRTRAN(mpalavra,'-','')
mpalavra := STRTRAN(mpalavra,'/','')
mpalavra := STRTRAN(mpalavra,",","")
RETURN mpalavra
******************************* F I M ******************************************
FUNCTION senha_cesso
********************
LOCAL mdig1,mdig2,mdig3,mdig4,mdig5,mdata:=CTOD('  /  /  '),mqtddias:=''
//M+A+D
IF cod_operado # '999'
        RETURN NIL
ENDIF
op_tela(10,10,13,50,'')
DEVPOS(0,0);DEVOUT('Data Vencimento:')
DEVPOS(1,0);DEVOUT('Senha Nova.....:')
DEVPOS(2,0);DEVOUT('Senha Antiga...:')
@ 0,COL()+1 GET mdata
READ
mdig1 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),1,1)
mdig2 := STRZERO(VAL(SUBSTR(DTOC(DATE()),4,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig3 := STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig4 := STRZERO(VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig5 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),2,1)
IF ! EMPTY(mdata)
        mqtddias := STRZERO(mdata - DATE(),2)
ENDIF
DEVPOS(1,0);DEVOUT('Senha Nova.....:  '+mdig1+mdig2+mdig3+mdig4+mdig5+mqtddias)
DEVPOS(2,0);DEVOUT('Senha Antiga...:  '+mdig1+mdig3+mdig4+mdig2+mdig5+mqtddias)
        //atencao('SENHA Acesso NOVA....:  '+mdig1+mdig2+mdig3+mdig4+mdig5+m_qp+m_qp+'SENHA Acesso ANTIGA:  '+mdig1+mdig3+mdig4+mdig2+mdig5)
mensagem('Pressione qualquer tecla para SAIR')
INKEY(0)
fecha_tela()
RETURN NIL
********************************** f i m **************************************



