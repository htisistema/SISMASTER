#include "hbdll.ch"
//SQLRDD***********************************
#include "sqlrdd.ch"
#include "firebird.ch"     // Needed IF you plan to use native connection to Firebird
#include "msg.ch"
*****************************
//#define COM_CALE

FUNCTION Main(mforma)
*********************
PRIVATE Qtdterm  := 0 && Quantidade de terminais
PRIVATE tecla    := '' && Tecla digitada
** Arrays, 1 posi��o para cada terminal
PRIVATE statusLPT[ 32 ]    // Flag de impressao de paralela
PRIVATE statusCOM[ 32 ]    // Flag de impressao de serial
PRIVATE pikture[ 32 ]      // Picture esperada
PRIVATE waitkbd[ 32 ]      // Flag de espera de digitacao
PRIVATE teclado[ 32 ]      // Buffer de teclado
PRIVATE pospic[ 32 ]       // posi��o dentro da picture que devemos receber
PRIVATE pinpos[ 32 ]       // posi��o de entrada do buffer de paralela
PRIVATE poutpos[ 32 ]      // posi��o de saida do buffer de paralela
PRIVATE sinpos[ 32 ]       // posi��o de entrada do buffer de serial
PRIVATE soutpos[ 32 ]      // posi��o de saida do buffer de serial
PRIVATE estado[ 32 ]       // Estado de execucao do programa
PRIVATE pprinter[ 32 ]       // Buffer de impress�o paralela
PRIVATE sprinter[ 32 ]       // Buffer de impress�o serial
PRIVATE cod_usu[ 32 ]       // CODIGO DO USUARIO
PRIVATE sen_usu[ 32 ]       // SENHA DO USUARIO
PRIVATE consulta_usu[ 32 ]       // CONSULTA USUARIO
PRIVATE cons_prod[ 32 ]       // CONSULTA PRTODUTO
PRIVATE cons_mesa[ 32 ]       // CONSULTA MESA
PRIVATE cons_mov[ 32 ]       // CONSULTA MOVIMENTO
PRIVATE aret[ 32 ]       // CONSULTA DIVERSOS
PRIVATE mnum_doc[ 32 ]       // NUMERO DO DOC
PRIVATE mobs[ 32 ]       // OBSERVACAO
PRIVATE mfecha[ 32 ]       // FECHAMENTO DA MESA
PRIVATE mqtd_p[ 32 ]       // qtd_pessoas
** vari�veis de aplica��o
PRIVATE comanda[ 32 ]
PRIVATE produto[ 32 ]
PRIVATE quantidade[ 32 ]
PRIVATE mconfirma[ 32 ]

PUBLIC mversao     := 'v12.08.30',;
       mversao_ecf := '2010.1 <<Release:110715>>',;
       msit_tip    := 'MASTGRAD',;
       sistema     := '.: MASTGRAD :. Sistema Automacao Hotel e Restaurante (GRADUAL)',;
       memp_resa    :='.: HTI Sistemas Ltda :.',;
       mchv_priv    := 'E9D4E1CCA464B7E811C7746E43B11943EC2A03667F78AD66F01ABC50AF188FF76C083829B07AA8175E9E1F1B15CF3A39E48957C71A40E15713E9EF345E405CEFDFB5252BE32CB19A76E291C798CC01F64E19C5F25191CF41E666AE4738837E2FB3746123AEDF821578F09496C81634A6D784E4FBB0837C4EEEC3BAEF1B3F94C3',;
       mchv_public  := 'CC55E628C3C90F93E5C7B550A9075A52CA999A89D6406CBDEA5508CF4112E00B4D0055E2DEA5BDF7E4AAAE4C4BB4C582DC0EBA14232D2444B949A6FF2DD23FD5B4CDBEAE7A8929D6A3774F4CCD737522F073E86F0724EE886EA493114780EDD87C59A173E0494D3F64DFF91AA7CFF6FD7F1D46AE5BDCA4418AF8E0261491F60D',;
       mpaf_ecf     := 'POL4322011',;
       mcnpj_hti    := '11156983000176',;
       mim_hti      := '4130553       ',;
       mrazao_hti   := 'J H BELTRAO SERVICOS DE INFORMATICA LTDA. - ME',;
       mend_hti     := 'RUA TEN. JOAO CICERO',;
       mnum_hti     := '415',;
       mcomp_hti    := 'AP.05',;
       mbairro_hti  := 'BOA VIAGEM',;
       mcidade_hti  := 'RECIFE',;
       muf_hti      := 'PE',;
       mcep_hti     := '51020190',;
       mpaf_hti     := 'SISPDV',;
       mpaf_ver     := '2010.1',;
       mcgc_firm,minsc_firm,;
       mend_firm,mcid_firm,mfone_firm,muf_firm,;
       mens,sis_cidade,;
       tesc,mcaminho:='',mtip_term,;
       mcodempresa  := '001',;
       mmult_emp    :='N',;
       mdata_sis    :=DATE(),;
       cod_operado  :='   ',;
       ntask,;
       mnum_principal := NIL,;
       m_cfg := {},;
       m_set := {},;
       cons_emp:={},;
       ncnn:=0,ncnn1:=0,ncnn2:=0,m_line:='ON',m_qp := CHR(13)+CHR(10),;
       DLLGradual

REQUEST SQLRDD             // SQLRDD should be linked in
REQUEST SR_FIREBIRD        // Needed IF you plan to use native connection to Firebird
REQUEST DBFCDX
REQUEST DBFFPT
IF ! FILE('mastercfg.ini')
        atencao('Nao foi possivel encontrar o arquivo MASTERCFG.INI...')
        RETURN NIL
ENDIF
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
fclose('mastercfg.ini')
IF LEN(m_cfg) = 0
        atencao('Favor verIFicar o arquivo mastercfg.INI ou entrar em contato com a HTI Sistemas...' )
        RETURN NIL
ELSEIF LEN(m_cfg) < 102
        atencao('Favor verIFicar o arquivo SACCFG.INI estar faltando algumas linha ou foi alteradas ou entrar em contato com a HTI Sistemas...' )
        RETURN NIL
ENDIF
Qtdterm  := m_cfg[4]
op_tela(10,01,12,85,'TENTANDO CONEXAO COM O BANCO DE DADOS',,'*')
DEVPOS(01,01);DEVOUT('Tentando CONEXAO com o 1o. BANCO DE DADOS Caminho: ['+ALLTRIM(m_cfg[1])+'], Aguarde um Momento......')
RDDSETDEFAULT('SQLRDD')
********** CONECTANDO AO FIREBIRD ***********
IF ! EMPTY(m_cfg[85])
        cConnString := 'FIREBIRD='+ALLTRIM(m_cfg[1])+';uid='+ALLTRIM(m_cfg[85])+';pwd='+ALLTRIM(m_cfg[86])+';charset=ISO8859_1'
ELSE
        cConnString := 'FIREBIRD='+ALLTRIM(m_cfg[1])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1'
ENDIF
nCnn := SR_AddConnection(CONNECT_FIREBIRD,cConnString)
IF nCnn < 0
        atencao("Nao foi possivel conectar ao BANCO DE DADOS. VerIFicar o Caminho do Banco de Dados no mastercfg.INI ["+ALLTRIM(m_cfg[1])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
        Quit
ENDIF
SR_SetActiveConnection(nCnn)
m_line := 'ON'
wvw_lclosewindow()
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)

IF mforma # NIL
        print_grad()
        QUIT
        RETURN NIL
ENDIF
DLLGradual:=Loadlibrary("Wtechlpt.dll")
Cls
@ 00,00 Say Space(80) Color "7/7"
@ 24,00 Say Space(80) Color "7/7"
@ 00,00 Say sistema+' - '+mversao+" Terminais LPT" Color "0/7"
@ 05,01 Say 'Quantidade de Terminais Rodando: '+STRZERO(m_cfg[4],2)
@ 24,00 Say " Pressione ESC para finalizar..." Color "0/7"

// O par�metro informado na fun��o ConfigLpt est� fixo, deixar o valor
// configur�vel no sistema, endere�o da LPT e Timeout

//IF ConfigLpt(0x378,500) = 0
IF DLLCALL(DLLGradual,32,"ConfigLpt",0x378,500) = 0
	@ 05,00 Say "Erro ao iniciar sistema! Pressine ESC para fechar."
	DO WHILE inkey() # chr(127) // Sai do programa

	ENDDO
	QUIT
ENDIF
// INICIALIZA��O DOS TERMINAIS
FOR i = 1 TO Qtdterm
        estado[ i ]    := 0
        waitkbd[ i ]   := 0
        pinpos[ i ]    := 1
        poutpos[ i ]   := 1
        sinpos[ i ]    := 1
        soutpos[ i ]   := 1
        statusCOM[ i ] := 2
        statusLPT[ i ] := 2

        comanda[ i ]   := ""
        produto[ i ]   := ""
        quantidade[ i ]:= ""
        cod_usu[ i ]   := ""
        sen_usu[ i ]   := ""
        consulta_usu[ i ]  := {}
        cons_prod[ i ] := {}
        cons_mesa[ i ] := {}
        cons_mov[ i ]  := {}
        aret[ i ]      := {}
        mnum_doc[ i ]  := 0
        mobs[ i ]      := ''
        mfecha[ i ]    := ''
        mqtd_p[ i ]    := 0
        mconfirma[ i ] := 0
        teclado[ i ]   := ""
        pprinter[ i ]  := ""
        Gclear(i)
        Gclear(i)
NEXT
DO WHILE inkey() # chr(27) // Sai do programa
	For i = 1 To Qtdterm
                DEVPOS(10,10);DEVOUT(STRZERO(i,2))
		Trataterminais( i )
	Next
ENDDO
GTermina()
**
** FIM DA ROTINA PRINCIPAL
**
// PRINCIPAL ROTINA DO PROGRAMA
Static FUNCTION Trataterminais( numterm )
*****************************************
GflushCom( numterm ) // chama o descarregador de impress�o na serial
GflushPrn( numterm ) // chama o descarregador de impress�o na paralela
do CASE
        CASE estado[ numterm ] = 0
                Gclear(numterm)
                Gposcur( 2, 1, numterm )
                Gdisplay( "Cod.Usu.:",numterm )
                Gget ("999",numterm)
		estado[ numterm ]:=1
        CASE estado[ numterm ] = 1
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] == CHR(127) .Or. teclado[ numterm ] == ""
                                estado[ numterm ]:= 0
                        ELSE
                                cod_usu[ numterm ] := teclado[ numterm ]
                                estado[ numterm ]:=14
                        ENDIF
                ENDIF
        CASE estado[ numterm ] = 14
                IF teclado[ numterm ] == CHR(127) .Or. teclado[ numterm ] == ""
                        estado[ numterm ]:= 0
                ELSE
                        consulta_usu[numterm] := {}
                        sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(VAL(cod_usu[numterm]),3)),,.t.,@consulta_usu[numterm])
                        IF LEN(consulta_usu[numterm]) = 0
                                Gclear(numterm)
                                Gposcur( 4, 1, numterm )
                                Gdisplay( "Codigo Invalido !",numterm )
                                Gget ("X",numterm)
                                estado[ numterm ]:=99
                        ELSE
                                sen_usu[ numterm ] := consulta_usu[numterm][1,5]
                                estado[ numterm ]:=12
                        ENDIF
                ENDIF
	CASE estado[ numterm ] = 12
                //Gclear(numterm)
                //Gposcur( 4, 1, numterm )
                Gdisplay(SPACE(20 - LEN("Cod.Usu.:"+cod_usu[ numterm ]))+"Senha:",numterm )
                //Gdisplay("Senha:",numterm )
                //Gposcur( 4, 7, numterm ) // COLOCA CURSOR LINHA 4 COLUNA 7, AP�S O : DO TEXTO SENHA:
                Gget ("********",numterm)
		estado[ numterm ]:=13
	CASE estado[ numterm ] = 13
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] == CHR(127) .Or. teclado[ numterm ] == ""
                                estado[ numterm ]:= 0
                        ELSE
                                IF teclado[ numterm ] # dcripto(sen_usu[ numterm ])
                                        Gclear(numterm)
                                        Gposcur( 4, 1, numterm )
                                        Gdisplay( "Senha invalida!",numterm )
                                        Gget ("X",numterm)
                                        estado[ numterm ]:=99
                                ELSE
                                        estado[ numterm ]:=2
                                ENDIF
                        ENDIF
                ENDIF
	CASE estado[ numterm ] = 2
                Gclear(numterm)
                Gdisplay( "No.Mesa:",numterm )
                Gget ("9999",numterm)
                estado[ numterm ]:=20
	CASE estado[ numterm ] = 20
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] == CHR(127)    //.Or. teclado[ numterm ] == ""
                                estado[ numterm ]:= 0
                        ELSE
                                estado[ numterm ]:= 21
                                comanda[ numterm ]:= teclado[ numterm ]
                        ENDIF
                ENDIF
        CASE estado[ numterm ] = 21
                IF teclado[ numterm ] = '9999'
                        estado[ numterm ]:= 900
                ELSE
                        IF teclado[ numterm ] == CHR(127)       // .Or. teclado[ numterm ] == ""
                                estado[ numterm ]:= 0
                        ELSE
                                cons_mesa[numterm] := {}
                                sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = 'M' AND numero = "+sr_cdbvalue(STRZERO(VAL(comanda[ numterm ]),4)),,.t.,@cons_mesa[numterm])
                                IF LEN(cons_mesa[numterm]) = 0
                                        Gclear(numterm)
                                        Gdisplay( "Mesa Invalida !",numterm )
                                        Gget ("X",numterm)
                                        estado[ numterm ]:=11
                                ELSE
                                        estado[ numterm ]:=3
                                ENDIF
                        ENDIF
                ENDIF
	CASE estado[ numterm ] = 22
                IF Gtrtecla( numterm )
                        estado[ numterm ]:=2
                ENDIF
	CASE estado[ numterm ] = 3
                Gclear(numterm)
                Gdisplay( "Produto:",numterm )
                Gget ("99999",numterm)
                estado[ numterm ] := 31
	CASE estado[ numterm ] = 31
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] == CHR(127) .Or. teclado[ numterm ] == ""
                                estado[ numterm ]:= 2
                        ELSE
                                estado[ numterm ]:= 32
                                produto[ numterm ]:= teclado[ numterm ]
                        ENDIF
                ENDIF
        CASE estado[ numterm ] = 32
                IF teclado[ numterm ] == CHR(127) .Or. teclado[ numterm ] == ""
                        estado[ numterm ]:= 0
                ELSE
                        cons_prod[numterm] := {}
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(STRZERO(VAL(produto[ numterm ]),5)),,.t.,@cons_prod[numterm])
                        IF LEN(cons_prod[numterm]) = 0
                                Gclear(numterm)
                                Gdisplay( "Produto Invalido !",numterm )
                                Gget ("X",numterm)
                                estado[ numterm ]:=33
                        ELSE
                                estado[ numterm ]:=4
                        ENDIF

                ENDIF
	CASE estado[ numterm ] = 33
                IF Gtrtecla( numterm )
                        estado[ numterm ]:=3
                ENDIF
	//CASE estado[ numterm ] = 44
        //        IF Gtrtecla( numterm )
        //               estado[ numterm ]:=4
        //        ENDIF
	CASE estado[ numterm ] = 4
                //Gclear(numterm)
                Gdisplay(SPACE(20 - LEN("Produto:"+produto[ numterm ]))+STRZERO(VAL(produto[ numterm ]),5)+" - "+cons_prod[numterm][1,2],numterm )
                Gdisplay(SPACE(20)+"  Obs.:",numterm )
                Gget ("999",numterm)
                estado[ numterm ]:=41
	CASE estado[ numterm ] = 41
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] == CHR(127)
                                estado[ numterm ]:= 3
                        ELSE
                                 estado[ numterm ]:= 5
                                mobs[ numterm ]:= teclado[ numterm ]
                        ENDIF
                ENDIF
	CASE estado[ numterm ] = 5
                //Gclear(numterm)
                Gdisplay(SPACE(25 - LEN("  Obs.:999"))+"Quantidade:",numterm )
                Gget ("9999",numterm)
                estado[ numterm ]:=51
	CASE estado[ numterm ] = 51
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] == CHR(127) .Or. teclado[ numterm ] == ""
                                estado[ numterm ]:= 3
                        ELSE
                                estado[ numterm ]:= 10
                                quantidade[ numterm ]:= teclado[ numterm ]
                        ENDIF
                ENDIF
	CASE estado[ numterm ] = 10
                cons_mov[ numterm ] := {}
                sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue('M'+STRZERO(VAL(comanda[ numterm ]),4))+' AND dat_pag IS NULL',,.t.,@cons_mov[ numterm ])
                IF LEN(cons_mov[numterm ]) = 0
                        //IF op_simnao('S','Deseja ABRIR esta MESA') = 'S'
                                aret[numterm ] := {}
                                sr_getconnection():exec("SELECT MAX(num_doc) FROM mastnummov",,.t.,@aret[numterm ])
                                IF LEN(aret) = 0
                                        mnum_doc[numterm ] := 1
                                ELSE
                                        mnum_doc[numterm ] := VAL(aret[numterm][1,1]) + 1
                                ENDIF
                                sr_getconnection():exec('INSERT INTO mastnummov (num_doc,data,'+;
                                                        'hora,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(STRZERO(mnum_doc[numterm ],6))+','+; //1
                                                        sr_cdbvalue(DATE())+','+; //2
                                                        sr_cdbvalue(TIME())+','+; //3
                                                        sr_cdbvalue(' ')+')',,.f.)
                        //ELSE
                        //        LOOP
                        //ENDIF
                ELSE
                        mnum_doc[numterm ] := VAL(comanda[ numterm ])
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
                                        'CUSTO     ,'+;//8
                                        'COD_CLI   ,'+;//9
                                        'COD_GARCO ,'+;//10
                                        'OPER      ,'+;//11
                                        'OBS       ,'+;//12
                                        'PORTA     ,'+;//13
                                        'SR_DELETED )'+;//14
                                        ' VALUES ('+;
                                        sr_cdbvalue(STRZERO(mnum_doc[numterm ],6))+','+; //1
                                        sr_cdbvalue('M'+STRZERO(VAL(comanda[ numterm ]),4))+','+; //2
                                        sr_cdbvalue(DATE())+','+; //3
                                        sr_cdbvalue(TIME())+','+; //4
                                        sr_cdbvalue(STRZERO(VAL(produto[ numterm ]),5))+','+; //5
                                        sr_cdbvalue(cons_prod[numterm][1,2])+','+; //6
                                        sr_cdbvalue(VAL(quantidade[ numterm ]))+','+; //7
                                        sr_cdbvalue(cons_prod[numterm][1,6])+','+; //8
                                        sr_cdbvalue(cons_prod[numterm][1,5])+','+; //8
                                        sr_cdbvalue('')+','+; //9
                                        sr_cdbvalue(STRZERO(VAL(cod_usu[numterm]),3))+','+; //10
                                        sr_cdbvalue(STRZERO(VAL(cod_usu[numterm]),3))+','+; //11
                                        sr_cdbvalue(mobs[numterm])+','+; //12
                                        sr_cdbvalue(cons_prod[numterm][1,9])+','+; //13
                                        sr_cdbvalue(' ')+')',,.f.)//14
                //sr_getconnection():exec("UPDATE mastprod SET descri = "+sr_cdbvalue(cons_merc[1,2])+",unidade = "+sr_cdbvalue(cons_merc[1,7])+",pr_venda = "+sr_cdbvalue(cons_merc[1,6])+",tipo = "+sr_cdbvalue(cons_merc[1,3])+" WHERE codigo = "+sr_cdbvalue(mcod),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                /*
                pprint("Terminal:" + alltrim(str(numterm)) + chr(10) + chr(13),numterm)
                pprint("Comanda:" + comanda[ numterm ] + chr(10) + chr(13),numterm)
                pprint("Produto:" + produto[ numterm ] + chr(10) + chr(13),numterm)
                pprint("Quantidade:" + quantidade[ numterm ] + chr(10) + chr(13),numterm)
                pprint("-------------------------------------" + chr(10) + chr(13),numterm)
                */
                //Gget ("X",numterm)
                estado[ numterm ]:=11
	CASE estado[ numterm ] = 11
                //IF Gtrtecla( numterm )
                        estado[ numterm ]:=2
                //ENDIF
	CASE estado[ numterm ] = 99
                IF Gtrtecla( numterm )
                        estado[ numterm ]:=0
                ENDIF
	CASE estado[ numterm ] = 900
                Gclear(numterm)
                Gdisplay(" Fechamento de Mesas ",numterm )
                Gdisplay(SPACE(19)+"No.Mesa:",numterm )
                Gget ("9999",numterm)
                estado[ numterm ]:=901
	CASE estado[ numterm ] = 901
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] == CHR(127)    //.Or. teclado[ numterm ] == ""
                                estado[ numterm ]:= 2
                        ELSE
                                estado[ numterm ]:= 902
                                comanda[ numterm ]:= teclado[ numterm ]
                        ENDIF
                ENDIF
	CASE estado[ numterm ] = 902
                Gdisplay(SPACE(23 - LEN("No.Mesa:    "))+"Qtd. Pessoas:",numterm )
                Gget ("999",numterm)
                estado[ numterm ]:=903
	CASE estado[ numterm ] = 903
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] == CHR(127)    //.Or. teclado[ numterm ] == ""
                                estado[ numterm ]:= 2
                        ELSE
                                estado[ numterm ]:= 904
                                mqtd_p[ numterm ]:= teclado[ numterm ]
                        ENDIF
                ENDIF
	CASE estado[ numterm ] = 904
                Gdisplay(SPACE(22 - LEN("Qtd. Pessoas:   "))+"Conf.:[1]Sim [2]Nao:",numterm )
                Gget ("9",numterm)
                estado[ numterm ]:=905
        CASE estado[ numterm ] = 905
                IF Gtrtecla( numterm )
                        IF teclado[ numterm ] = '1'
                                sr_getconnection():exec("UPDATE mastmov SET imprimir = 'F',qtd_p = "+sr_cdbvalue(mqtd_p[ numterm ])+" WHERE num_local = "+sr_cdbvalue('M'+STRZERO(VAL(comanda[ numterm ]),4))+" AND dat_pag IS NULL",,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                        estado[ numterm ]:= 2
                ENDIF
        CASE estado[ numterm ] = 906
                IF teclado[ numterm ] == CHR(127)       // .Or. teclado[ numterm ] == ""
                        estado[ numterm ]:= 0
                ELSE
                ENDIF
ENDCASE
RETURN .F.
**************************** F I M ******************************************
// Apaga o display do terminal
Static Function Gclear(tm)
**************************
        DLLCALL(DLLGradual,32,"Dll_Clear",tm)
	//Dll_Clear(tm)
Return Nil
**************************** F I M ******************************************
// Posiciona o cursor no display do terminal.
// Valores validos: Linha 0 e 1
//                 Coluna 0 a 39
Static Function Gposcur( linha, coluna, tm )
********************************************
        DLLCALL(DLLGradual,32,"Dll_Poscur",tm,linha,coluna)
	//Dll_Poscur(tm,linha,coluna)
Return Nil
**************************** F I M ******************************************
// Envia uma mensagem para o display do terminal
Static Function Gdisplay( dados, tm )
*************************************
        DLLCALL(DLLGradual,32,"Dll_Display",tm,dados)
	//Dll_Display(tm,dados)
Return Nil
**************************** F I M ******************************************
// Funcao de tratamento do teclado do terminal.
// Pede tecla e faz a consistencia com a picture
// solicitada na funcao GGET, aceitando ou rejeitando
// o que for digitado no terminal.
// Tambem faz o tratamento do 'DEL' do terminal,
// limpando o campo quando tem algum caracter digitado
// ou retornando ESC quando nao tinha nada digitado.
// O retorno desta funcao sera:
//          0 - quando a picture solicitada no
//               ultimo gget nao tiver sido digitada.
//          1 - quando a picture tiver sido digitada
//              completamente.

Static Function Gtrtecla(tm)
****************************
** Tecla digitada **
Local gpict  := ''
//tecla = chr(Dll_Get(tm))
//IF DLLCALL(DLLGradual,32,"Dll_Get",tm) = 0
//	return .F.
//ENDIF
tecla = chr(DLLCALL(DLLGradual,32,"Dll_Get",tm))
IF tecla = Chr(0)
	return .F.
ENDIF
DO CASE
        CASE tecla = Chr(127) && se a existe tecla para tratar
                IF pospic[ tm ] = 1
                        teclado[ tm ] = Chr(127)
                        waitkbd[ tm ] = 0
                        return .T.
                ELSE
                        While pospic[ tm ] > 1
                                tecla = Chr(8)  // Backspace
                                Gecho(tm)
                                pospic[ tm ] = pospic[ tm ] - 1
                        End
                        teclado[ tm ] = ""
                        return .F.
                ENDIF
        CASE tecla = Chr(8)
                IF pospic[ tm ] > 1
                        gpict = Subs( pikture[ tm ], pospic[ tm ] - 1, 1 )
                        IF gpict = "/" .Or. gpict = "."
                                Gecho(tm)
                                pospic[ tm ] = pospic[ tm ] - 1
                        ENDIF
                        pospic[ tm ] = pospic[ tm ] - 1
                        teclado[ tm ] = SUBS( teclado[ tm ], 1, pospic[ tm ] - 1 )
                        Gecho(tm)
                ENDIF
                return .F.
        CASE tecla = Chr(13)
                waitkbd[ tm ] = 0
                return .T.
ENDCASE
gpict = SUBS( pikture[ tm ], pospic[ tm ], 1 )
DO CASE
        CASE gpict = Chr(3)
                IF tecla = Chr(3)
                        waitkbd[ tm ] = 0
                        return .T.
                ELSE
                        IF (tecla # Chr(2)) .And. (tecla # Chr(3))
			     teclado[ tm ] = teclado[ tm ] + tecla
                        ENDIF
                ENDIF
        CASE gpict = "X"
                teclado[ tm ] = teclado[ tm ] + tecla
                pospic[ tm ] = pospic[ tm ] + 1
                Gecho(tm)
        CASE gpict = "9"
                IF ( tecla >= "0" .And. tecla <= "9" ) .Or. (tecla = ".") .Or. (tecla = "/")
                        IF tecla = "."
                                ajusta_ponto(tm)
                        ELSE
                                teclado[ tm ] = teclado[ tm ] + tecla
                                pospic[ tm ]  = pospic[ tm ]  + 1
                                Gecho(tm)
                        ENDIF
                ENDIF
        CASE gpict = "A"
                IF (tecla >= "A" .And. tecla <= "Z") .or. (tecla = " ")
                        teclado[ tm ] = teclado[ tm ]  + tecla
                        pospic[ tm ]  = pospic[ tm ]  + 1
                        Gecho(tm)
                ENDIF
        CASE gpict = "*"
                teclado[ tm ] = teclado[ tm ] + tecla
                pospic[ tm ] = pospic[ tm ] + 1
                tecla = "*"
                Gecho(tm)
EndCASE
tamanho = Len( pikture[ tm ] ) + 1
gpict = SUBS( pikture[ tm ], pospic[ tm ], 1 )
IF tamanho = pospic[ tm ]
        waitkbd[ tm ] = 0
        return .T.
ENDIF
DO CASE
        CASE gpict = "/"
                tecla = "/"
                pospic[ tm ] = pospic[ tm ] + 1
                Gecho(tm)
           CASE gpict = "."
                tecla = "."
                pospic[ tm ] = pospic[ tm ] + 1
                Gecho(tm)
        otherwise
	 	return .F.
EndCASE
return .F.
**************************** F I M ******************************************
// Envia um caracter para o display do terminal
Static Function Gecho(tm)
*************************
DLLCALL(DLLGradual,32,"Dll_Display",tm,tecla)
//Dll_Display(tm,tecla)
RETURN NIL
**************************** F I M ******************************************
// Funcao de ajuste da posi��o do ponto dentro de
// uma picture numerica.
Static Function ajusta_ponto(tm)
********************************
Local sppic:=posponto:=slen:=pponto:=0,strdisp:=''

slen = Len( teclado[ tm ] )
posponto = 1
*
While Subs( pikture[ tm ], posponto, 1 ) <> "."
        posponto += 1
        IF posponto = Len( pikture[ tm ] )
                RETURN NIL
        ENDIF
enddo
*
sppic   = posponto - 1 - Len( teclado[ tm ] )
strdisp = ""
*
While sppic > 0
        strdisp += " "
        sppic   -= 1
endDO
*
strdisp += teclado[ tm ]
sppic    = pospic[ tm ]
*
While sppic > 1
        tecla  = Chr(8)
        Gecho(term)
        sppic -= 1
endDO
*
pospic[ tm ] = posponto
Gdisplay( strdisp,tm )
teclado[ tm ] = strdisp
RETURN NIL
**************************** F I M ******************************************
// Funcao de pedido de entrada de dados.
// As pictures validas sao:
//     9 - caracter numerico
//     A - caracter alfabetico
//     X - qualquer caracter
//     . - decimal ( so em campo numerico )
//     / - separador de campo( so em campo numerico )

Static Function Gget( formato,tm )
**********************************
IF waitkbd[ tm ] = 0
        pikture[ tm ] = formato  // guarda o formato
        pospic[ tm ]  = 1        // posiciona o ponteiro na 1a. posi��o
        teclado[ tm ] = ""       // limpa o buffer de entrada
        waitkbd[ tm ] = 1        // liga o flag de espera de picture
        Gget = 1
ELSE
        Gget = 0
ENDIF
RETURN NIL
**************************** F I M ******************************************
// ESSSA FUNCAO FINALIZA OS TERMINAIS
// INFORMANDO QUE O SISTEMA ESTA DESATIVADO
Static Function GTermina()
**************************
Local i
For i = 1 To Qtdterm
        Gclear(i)
        Gdisplay ("Sistema finalizado...",i)
Next
DLLCALL(DLLGradual,32,"Dll_Close")
QUIT
RETURN NIL
**************************** F I M ******************************************
// FUNCAO para acumular dados de impress�o paralela
Static Function pprint(dados, tm)
*********************************
pinpos[ tm ] = pinpos[ tm ] + Len(dados)
pprinter[ tm ] = pprinter[ tm ] + dados
RETURN NIL
**************************** F I M ******************************************
// FUNCAO para acumular dados de impress�o serial
Static Function sprint(dados, tm)
*********************************
sinpos[ tm ] = sinpos[ tm ] + Len(dados)
sprinter[ tm ] = sprinter[ tm ] + dados
RETURN NIL
**************************** F I M ******************************************
// FUNCAO para impress�o na paralela
Static Function GflushPrn(tm)
*****************************
Local i,dado := '',retorno := 0

IF pinpos[ tm ] <> poutpos[ tm ] //se tiver dados a serem impressos
        i = 0
        while (i < 30) .And. (pinpos[ tm ] <> poutpos[ tm ])
                dado = Subs( pprinter[ tm ], poutpos[ tm ], 1 )
                retorno := DLLCALL(DLLGradual,32,"Dll_Acesso",chr(254) + STRZERO( tm, 2, 0 ) + "I" + dado)
			//retorno = Dll_Acesso(chr(254) + STRZERO( tm, 2, 0 ) + "I" + dado)
                IF retorno # chr(0) //se conseguiu escrever o byte, incrementa ponteiro
                        poutpos[ tm ] = poutpos[ tm ] + 1
                ENDIF
                i = i + 1
        endDO
ELSE
        pprinter[ tm ] = ""
        poutpos[ tm ] = 1
        pinpos[ tm ] = 1
ENDIF
RETURN NIL
**************************** F I M ******************************************
// FUNCAO para impress�o na serial
Static Function GflushCom(tm)
*****************************
Local i,dado := '',retorno := 0

IF sinpos[ tm ] <> soutpos[ tm ] //se tiver dados a serem impressos
        i = 0
        while (i < 30) .And. (sinpos[ tm ] <> soutpos[ tm ])
                dado = Subs( sprinter[ tm ], soutpos[ tm ], 1 )
                retorno := DLLCALL(DLLGradual,32,"Dll_Acesso",chr(254) + STRZERO( tm, 2, 0 ) + "R" + dado)
		//retorno = Dll_Acesso(chr(254) + STRZERO( tm, 2, 0 ) + "R" + dado)
                IF retorno # chr(0) //se conseguiu escrever o byte, incrementa ponteiro
                        soutpos[ tm ] = soutpos[ tm ] + 1
                ENDIF
                i = i + 1
        endDO
ELSE
        sprinter[ tm ] = ""
        soutpos[ tm ] = 1
        sinpos[ tm ] = 1
ENDIF
RETURN NIL
*************************** f i m ****************************
* OPCAO TELA
************
FUNCTION op_tela(op_l,op_c,op_lb,op_cb,op_mensagem,mli,mcent,mclose)
********************************************************************
//SETMODE(50,120)
wvw_maximize()
wvw_nopenwindow(,op_l,op_c,op_lb,op_cb)
Wvw_SetTitle( ,op_mensagem)
IF mclose <> NIL
        wvw_noclose()
ENDIF
IF mcent # NIL  //.OR. (op_lb >= 50 .OR. op_cb = 90)
        WVW_CenterWindow(,.T.,.T.)
ENDIF
IF mli = NIL
        WVW_SBCreate()
        WVW_SBAddPart(,,800,0,.F.)
ENDIF
RETURN NIL
*************************** f i m ****************************
FUNCTION mensagem(men)
**********************
WVW_SBSetText(,1,'Mensagem: '+men)
RETURN NIL
******************************** F I M ********************************
#INCLUDE "winuser.ch"
FUNCTION atencao(men,tipo)
**************************
IF tipo = NIL
        WVW_MessageBox( ,men,' ATENCAO ',MB_ICONWARNING)
ELSE
        WVW_MessageBox( ,men,' ATENCAO ',MB_ICONERROR )
ENDIF
RETURN .T.
*************************** F I M ***********************************************
* FUNCAO PARA DES-CRIPTOGRAFA
*****************************
FUNCTION dcripto(mexp)
**********************
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
        IF mletra[i] = CHR(189)
                AADD(maux,'A')
        ELSEIF mletra[i] = CHR(184)
                AADD(maux,'B')
        ELSEIF mletra[i] = CHR(154)
                AADD(maux,'C')
        ELSEIF mletra[i] = CHR(181)
                AADD(maux,'D')
        ELSEIF mletra[i] = CHR(228)
                AADD(maux,'E')
        ELSEIF mletra[i] = CHR(230)
                AADD(maux,'F')
        ELSEIF mletra[i] = CHR(232)
                AADD(maux,'G')
        ELSEIF mletra[i] = CHR(218)
                AADD(maux,'H')
        ELSEIF mletra[i] = CHR(204)
                AADD(maux,'I')
        ELSEIF mletra[i] = CHR(236)
                AADD(maux,'J')
        ELSEIF mletra[i] = CHR(231)
                AADD(maux,'K')
        ELSEIF mletra[i] = CHR(245)
                AADD(maux,'L')
        ELSEIF mletra[i] = CHR(225)
                AADD(maux,'M')
        ELSEIF mletra[i] = CHR(237)
                AADD(maux,'N')
        ELSEIF mletra[i] = CHR(224)
                AADD(maux,'O')
        ELSEIF mletra[i] = CHR(208)
                AADD(maux,'P')
        ELSEIF mletra[i] = CHR(166)
                AADD(maux,'Q')
        ELSEIF mletra[i] = CHR(168)
                AADD(maux,'R')
        ELSEIF mletra[i] = CHR(172)
                AADD(maux,'S')
        ELSEIF mletra[i] = CHR(157)
                AADD(maux,'T')
        ELSEIF mletra[i] = CHR(140)
                AADD(maux,'U')
        ELSEIF mletra[i] = CHR(174)
                AADD(maux,'W')
        ELSEIF mletra[i] = CHR(20)
                AADD(maux,'V')
        ELSEIF mletra[i] = CHR(223)
                AADD(maux,'X')
        ELSEIF mletra[i] = CHR(239)
                AADD(maux,'Y')
        ELSEIF mletra[i] = CHR(235)
                AADD(maux,'Z')
        ELSEIF mletra[i] = CHR(251)
                AADD(maux,'0')
        ELSEIF mletra[i] = CHR(253)
                AADD(maux,'1')
        ELSEIF mletra[i] = CHR(252)
                AADD(maux,'2')
        ELSEIF mletra[i] = CHR(248)
                AADD(maux,'3')
        ELSEIF mletra[i] = CHR(216)
                AADD(maux,'4')
        ELSEIF mletra[i] = CHR(200)
                AADD(maux,'5')
        ELSEIF mletra[i] = CHR(136)
                AADD(maux,'6')
        ELSEIF mletra[i] = CHR(127)
                AADD(maux,'7')
        ELSEIF mletra[i] = CHR(21)
                AADD(maux,'8')
        ELSEIF mletra[i] = CHR(23)
                AADD(maux,'9')
        ELSEIF mletra[i] = '0'
                AADD(maux,' ')
        ELSEIF mletra[i] = '1'
                AADD(maux,'*')
        ELSEIF mletra[i] = '2'
                AADD(maux,'-')
        ELSEIF mletra[i] = '3'
                AADD(maux,'/')
        ELSEIF mletra[i] = '4'
                AADD(maux,'.')
        ELSEIF mletra[i] = '5'
                AADD(maux,',')
        ELSEIF mletra[i] = 'A'
                AADD(maux,'"')
        ELSEIF mletra[i] = '6'
                AADD(maux,"'")
        ELSEIF mletra[i] = '7'
                AADD(maux,'(')
        ELSEIF mletra[i] = '8'
                AADD(maux,')')
        ELSEIF mletra[i] = '9'
                AADD(maux,'=')
        ELSEIF mletra[i] = 'B'
                AADD(maux,'%')
        ELSEIF mletra[i] = 'C'
                AADD(maux,'*')
        ELSEIF mletra[i] = 'D'
                AADD(maux,'+')
        ELSEIF mletra[i] = 'E'
                AADD(maux,'@')
        ELSEIF mletra[i] = 'F'
                AADD(maux,']')
        ELSEIF mletra[i] = 'G'
                AADD(maux,'[')
        ELSEIF mletra[i] = 'I'
                AADD(maux,'{')
        ELSEIF mletra[i] = 'J'
                AADD(maux,'}')
        ELSEIF mletra[i] = 'K'
                AADD(maux,'&')
        ELSEIF mletra[i] = 'L'
                AADD(maux,'#')
        ELSEIF mletra[i] = 'M'
                AADD(maux,'!')
        ELSEIF mletra[i] = 'N'
                AADD(maux,':')
        ELSEIF mletra[i] = 'O'
                AADD(maux,';')
        ELSEIF mletra[i] = 'P'
                AADD(maux,'?')
        ELSEIF mletra[i] = 'Q'
                AADD(maux,'|')
        ELSEIF mletra[i] = 'R'
                AADD(maux,'\')
        ELSEIF mletra[i] = 'S'
                AADD(maux,'�')
        ELSEIF mletra[i] = '�'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'U'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'V'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'X'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'Y'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'Z'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'A'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'b'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'c'
                AADD(maux,'�')
        ELSEIF mletra[i] = 'd'
                AADD(maux,NIL)
        ELSE
                LOOP
        ENDIF
NEXT
i:=0
msenha := maux[2] + maux[1]
FOR i = 3 TO LEN(maux)
        msenha := msenha + maux[i]
NEXT
RETURN msenha
******************************* F I M ******************************************
* EXECUTAR PROGRAMAS EXTERNOS
*****************************
FUNC MYRUN( cComando )
**********************
local oShell, RET
oShell := CreateObject( "WScript.Shell" )
RET := oShell:Run( "%comspec% /c " + cComando, 0, .T. )
oShell := NIL
return iif( RET = 0, .T., .F. )
*************************** f i m ****************************
FUNCTION MyRun2( cRun )
***********************
Local hIn, hOut, nRet //, hProc
Local hProc := HB_OpenProcess(cRun , @hIn, @hOut, @hOut )

IF hProc < 0
   	FClose( hProc )
   	FClose( hIn )
   	FClose( hOut )
   	Return(.F.)
	//atencao("Error: " + valtoprg(FError()))
ENDIF
nRet := HB_ProcessValue( hProc,.f. )
IF nRet > 0
   	FClose( hProc )
   	FClose( hIn )
   	FClose( hOut )
   	Return(.F.)
endif
FClose( hProc )
FClose( hIn )
FClose( hOut )
Return(.T.)
************************* F I M ****************************************
Static FUNCTION print_grad()
****************************
LOCAL mtraco := REPLI('=',54),cons_parc := {},cons_mov := {},mentrada:='',consmov := {},y:=0,mtecla:=0,;
      i := mtotal_g := 0

WHILE mtecla # 27
        limpa(00,00,50,120)
        DEVPOS(02,01);DEVOUT('IMPRESSAO A SER FEITAS')
        consmov := {}
        sr_getconnection():exec("SELECT num_local FROM mastmov WHERE dat_pag IS NULL AND imprimir = 'F' GROUP BY num_local,num_local",,.t.,@consmov)
        IF LEN(consmov) > 0
                y:=0
                FOR y = 1 TO LEN(consmov)
                        DEVPOS(ROW()+1,01);DEVOUT(consmov[y,1])
                        cons_mov := {}
                        sr_getconnection():exec("SELECT * FROM mastmov WHERE dat_pag IS NULL AND imprimir = 'F' AND num_local = "+sr_cdbvalue(consmov[y,1]),,.t.,@cons_mov)
                        SET DEVI TO PRINT;SET PRINT ON
                        SET PRINT TO (consmov[y,1]+'.txt')
                        DEVPOS(PROW(),00);DEVOUT(CHR(18))
                        DEVPOS(PROW()+1,00);DEVOUT(memp_resa)
                        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
                        DEVPOS(PROW(),00);DEVOUT('Mesa/Quarto: '+cons_mov[1,2])
                        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT('Documento: '+cons_mov[1,1]+'  -  Data Emissao: '+DTOC(DATE()))
                        DEVPOS(PROW()+1,00);DEVOUT('Garcon....: '+cons_mov[1,10])
                        //DEVPOS(PROW()+1,00);DEVOUT('Operador..: '+cons_parc[1,4])
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT(' Cod.   Descricao')
                        DEVPOS(PROW()+1,00);DEVOUT('Quantidade  Valor Unit.  Valor total')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        cons_parc := {}
                        sr_getconnection():exec("SELECT cod_prod,descri,sum(qtd),preco FROM mastmov WHERE num_local = "+sr_cdbvalue(consmov[y,1])+' AND dat_pag IS NULL GROUP BY cod_prod,cod_prod,descri,descri,preco,preco',,.t.,@cons_parc)
                        i := mtotal_g := 0
                        FOR i = 1 TO LEN(cons_parc)
                                DEVPOS(PROW()+1,00);DEVOUT(cons_parc[i,1]+'   '+cons_parc[i,2])
                                DEVPOS(PROW()+1,00);DEVOUT(TRANSFORM(cons_parc[i,3],'999,999.99')+' x '+TRANSFORM(cons_parc[i,4],'999,999.99')+' = '+TRANSFORM(cons_parc[i,3]*cons_parc[i,4],'999,999.99'))
                                mtotal_g := mtotal_g + (cons_parc[i,3]*cons_parc[i,4])
                        NEXT
                        DEVPOS(PROW()+1,00);DEVOUT('                          ----------')
                        DEVPOS(PROW()+1,00);DEVOUT('Sub-Total R$............: '+TRANSFORM(mtotal_g,'999,999.99'))
                        //IF mdez = 'S'
                                DEVPOS(PROW()+1,00);DEVOUT('10% Valor R$............: '+TRANSFORM(mtotal_g * .1,'999,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('                          ----------')
                                DEVPOS(PROW()+1,00);DEVOUT('T O T A L R$............: '+TRANSFORM(mtotal_g * 1.1,'999,999.99'))
                        //ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT('Entrada..:'+cons_mov[1,4]+' - Saida:'+TIME()+' - Duracao:'+ELAPTIME(cons_mov[1,3],TIME()))
                        IF cons_mov[1,17] > 1
                                DEVPOS(PROW()+1,00);DEVOUT('Valor por Pessoas R$: '+TRANSFORM(mtotal_g / cons_mov[1,17],'999,999.99'))
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT(m_set[1,18])
                        DEVPOS(PROW()+1,00);DEVOUT(m_set[1,19])
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT(PADL('HTI Sistemas - (81)3755.1489',54))
                        DEVPOS(PROW()+m_cfg[10],00)
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        fclose(consmov[y,1]+'.txt')
                        MYRUN('DOSPRINTER /RAW /DEL '+consmov[y,1]+'.txt')
                        sr_getconnection():exec("UPDATE mastmov SET imprimir = 'I' WHERE num_local = "+sr_cdbvalue(consmov[y,1])+" AND dat_pag IS NULL",,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)
                NEXT
        ENDIF
        mtecla := INKEY(.10,20)
ENDDO
RETURN NIL
***************** F I M **************************
* LIMPA UMA AREA
****************
FUNCTION limpa(li,ci,lb,cb)
***************************
@ li,ci CLEAR TO lb,cb
RETURN .T.
***************** F I M **************************
