************************************
* INICIO DO SISMASTER : 03/04/2012
***************************************
//#translate getactive() => MyHBGetActive()
#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#include "Fileio.ch"             // funcoes de leitura/gravacao de arquivo
#include "set.ch"                // constantes da funcao SETKEY()
#include "wingdi.ch"
#include "winuser.ch"
#include "common.ch"
#include "setcurs.ch"
#include "getexit.ch"
//SQLRDD*********************
#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
*****************************
#define COM_CALE
GLOBAL oApp

FUNCTION main(mtc,mecf,mtipo_tela)
***********************************
MEMVAR msist,nivel_acess,getlist
LOCAL mprg := 'SISMASTER',men,f,num,mcgc_aux,mserie,mponto,mtip_t:=' ',mtela_term,mmapear,lin,linha,linhas,marq:='',;
      matriz:={},op:=' ',cam_dba:={},d:=0,m_aux:={},xcop

PUBLIC mversao     := 'v24.07.03',;
       mversao_ecf := '2010.1',;
       msit_tip    := 'SISMASTER',;
       sistema     := '.: SISMASTER :. Sistema Automacao Hotel e Restaurante',;
       memp_resa    :='.: HTI Sistemas :.',;
       mcnpj_hti    := '11156983000176',;
       mim_hti      := '4130553       ',;
       mrazao_hti   := 'J H BELTRAO SERVICOS DE INFORMATICA LTDA. - ME',;
       mend_hti     := 'PRACA FRANCELINO ARAUJO',;
       mnum_hti     := '68',;
       mcomp_hti    := '',;
       mbairro_hti  := 'CENTRO',;
       mcidade_hti  := 'TACAIMBO',;
       muf_hti      := 'PE',;
       mcep_hti     := '55140000',;
       mpaf_hti     := 'SISMASTER',;
       mfone_hti    := '99281.6878',;
       mpaf_ver     := '2010.1',;
       mcgc_firm,minsc_firm,;
       mend_firm,mcid_firm,mfone_firm,muf_firm,;
       mens,sis_cidade,;
       tesc,mcaminho:='',mtip_term,;
       mcodempresa  := '001',;
       m_tc         :=mtc,;
       mdata_sis    :=DATE(),;
       cod_operado  :='   ',;
       ntask,;
       mnum_principal := NIL,;
       m_cfg,;
       m_set := {},;
       cons_emp:={},;
       ncnn:=0,ncnn1:=0,ncnn2:=0,m_line:='ON',m_qp := CHR(13)+CHR(10),;
       nivel_acess:=' ',;
       m_color := WVW_GetPalette()

       /*
       mchv_priv    := 'E9D4E1CCA464B7E811C7746E43B11943EC2A03667F78AD66F01ABC50AF188FF76C083829B07AA8175E9E1F1B15CF3A39E48957C71A40E15713E9EF345E405CEFDFB5252BE32CB19A76E291C798CC01F64E19C5F25191CF41E666AE4738837E2FB3746123AEDF821578F09496C81634A6D784E4FBB0837C4EEEC3BAEF1B3F94C3',;
       mchv_public  := 'CC55E628C3C90F93E5C7B550A9075A52CA999A89D6406CBDEA5508CF4112E00B4D0055E2DEA5BDF7E4AAAE4C4BB4C582DC0EBA14232D2444B949A6FF2DD23FD5B4CDBEAE7A8929D6A3774F4CCD737522F073E86F0724EE886EA493114780EDD87C59A173E0494D3F64DFF91AA7CFF6FD7F1D46AE5BDCA4418AF8E0261491F60D',;
       mpaf_ecf     := 'POL4322011',;
       */


// **************************
// NA MESMA LINHA DAR SCROLL
// *** '@S30@!' ******
// *************************************
// VERIFICAR DATA DE ALGUM ARQUIVO
// mdt := directory('SISMASTER.exe') [1][3]
// *************************************
/*
//PUBLIC DLLBematech:=Loadlibrary("Bemafi32.dll")
       //mold       := 'ÚÄ¿³ÙÄÀ³',;
       //mol        := '        ',;
//nTask := HB_BACKGROUNDADD( {|| DisplayTime()},2000) // tempo em milisegundos
//SET BACKGROUND TASKS ON
atencao(hdserial('C:'))
//IF mtc = '?'
//        CLS
//        atencao('SIAC :[S]=SIAC - [V]=VENDA - [C]=CAIXA - [M]=SIACVEND - [F]=FISCAL - [O]=SIACOPER - [R]eindexar',0)
//        RETURN NIL
//ENDIF
//atencao(strzero( RGB(240,249,144), 8 ))

// IMPRIMIR ARQUIVO .TXT

//PrintFileRaw(GetDefaultPrinter(),"REC_hti.REL","teste de impressao")
/*
if dllcall("USER32.DLL",32,"FindWindow", ,"SISMASTER") > 0
	   atencao("Programa Calculadora aberto.")
endif
*/
REQUEST SQLRDD             // SQLRDD should be linked in
REQUEST SR_FIREBIRD        // Needed if you plan to use native connection to Firebird
REQUEST DBFCDX
REQUEST DBFFPT
*************************************************************************************
REQUEST HB_CODEPAGE_PT850
REQUEST HB_NOSTARTUPWINDOW
REQUEST HB_LANG_ES
REQUEST HB_CODEPAGE_ES
REQUEST HB_CODEPAGE_ESMWIN
REQUEST HB_CODEPAGE_ESWIN
WITH OBJECT ( oApp := WvW_tApplication():New( CurDrive() + ":\" + CurDir() ) )
        :cImagePath := CurDrive()+ ":\" + Curdir()      //+'\HTILOGO.JPG'
        :Setup()
        :SetTitle( sistema+' - '+mversao )
        :SetIcon( CurDrive()+ ":\" + Curdir()+'\HTI.ico' )
        :lDevelopment := .T.
END
WvW_SetGet( "RDD"         ,"DBFCDX")
WvW_SetGet( "CODEPAGE"    ,255)
WvW_SetGet( "WIN_ROWS"    ,50)
WvW_SetGet( "WIN_COLS"    ,88)

wvw_SetVertCaret(.F.)
wvw_setmaincoord(.F.)
//wvw_setmaincoord(.T.)
//WVW_SetCodePage(,250)
wvw_enableshortcuts(0,.T.)
wvw_setdeflinespacing(1.5)
//WVW_SetDefLSPACECOLOR(10)
*/
wvw_SetPaintRefresh(0)
wvw_seticon( , "hti.ico" )

SET EVENTMASK TO 159
SET CONS OFF
SET WRAP ON
SET DATE BRITI
SET DELE ON
SET EPOCH TO 1950

mdata_sis := DATE()
set message to 55 center
IF ! FILE('mastercfg.ini')
        mastercfg('1')
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
        atencao('Favor verificar o arquivo mastercfg.INI ou entrar em contato com a HTI Sistemas...' )
        RETURN NIL
ELSEIF LEN(m_cfg) < 13
        atencao('Favor verificar o arquivo SACCFG.INI estar faltando algumas linha ou foi alteradas ou entrar em contato com a HTI Sistemas...' )
        RETURN NIL
ENDIF
i:=1
SETMODE(50,120)
IF EMPTY(m_cfg[14])
        WVW_SetFont(,'lucida console',12,11,)  // 800X600
ELSEIF m_cfg[14] = 'G'
        WVW_SetFont(,'lucida console',15,11, )  // 800X600
ELSE
        WVW_SetFont(,'lucida console',12,7, )  // 800X600
ENDIF
/*
IF EMPTY(m_cfg[14])
        WVW_SetFont(,'lucida console',12, 10,FW_BOLD, PROOF_QUALITY )  // 800X600
ELSEIF m_cfg[14] = 'G'
        WVW_SetFont(,'lucida console',15, 12,FW_BOLD, PROOF_QUALITY )  // 800X600
ELSE
        WVW_SetFont(,'lucida console',12, 7,FW_BOLD, PROOF_QUALITY )  // 800X600
ENDIF
*/
//SETMODE(50,120)
//WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
//WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
//wvw_SetFont(,'Ms Sans Serif' , 14, 10, FW_MEDIUM, DEFAULT_QUALITY )

op_tela(00,00,50,120,memp_resa+SPACE(20)+sistema+' - '+mversao+SPACE(20)+'Data:'+DTOC(mdata_sis)+' - '+ver_dia(mdata_sis))
//wvw_minimize(0)
wvw_maximize(0)
WVW_CenterWindow(,.T.,.T.)
//WVW_SetIcon( ,,'HTI.ico')
/*
IF SR_PhFile('C:\helio\siachb\fenix.ico')
        WVW_DlgSetIcon(,'C:\helio\siachb\fenix.ico')
        WVW_SetIcon( ,,,'C:\helio\siachb\fenix.ico')
        atencao('ok')
ENDIF
*/
ncnn := 0

//MYRUN ("openssl genrsa -out chave.pem 1024") // GERA CHAVE PRIVADA
//MYRUN("openssl.exe rsa -in chave.pem -modulus -out modulo.txt")   // GERA MODULO DA CHAVE PRIVADA
//IF ! FILE('SACBKP.INI')
//	sacbkp('1')
//ENDIF

IF mtc = 'BACKUP'
	WVW_SetMousePos(,00,00)
	op_tela(10,05,24,120,'PROCESSO DE BACKUP',,1)
	setcor(1)
	limpa(00,00,30,200)
	m_bkp := {}
	lin := MEMOLINE(MEMOREAD('SACBKP.INI'),210,1,,)
	linhas := linha := 0
	linhas := MLCOUNT(MEMOREAD('SACBKP.INI'),210)
	FOR linha = 1 TO  linhas
	        lin := MEMOLINE(MEMOREAD('SACBKP.INI'),210,linha,,)
	        IF SUBSTR(lin,5,1) = 'C'
	                AADD(m_bkp,ALLTRIM(SUBSTR(lin,30))+' ')
	        ELSE
	                AADD(m_bkp,VAL(SUBSTR(lin,30)))
	        ENDIF
	NEXT
	fclose('sacbkp.ini')
	IF LEN(m_bkp) > 0
		**** ROTINA PARA BACKUP *****************
		IF EMPTY(m_bkp[1]) .OR. EMPTY(m_bkp[2]) .OR. EMPTY(m_bkp[3]) .OR. EMPTY(m_bkp[4]) .OR. EMPTY(m_bkp[5])
			atencao('O BACKUP nao estar configurado...')
                        QUIT
		ENDIF
		mnome_arq := ALLTRIM(m_bkp[2])+IF(m_bkp[1]='1','.ARJ','.RAR')
                WHILE SR_PhFile((mnome_arq))
                        IF ferase(mnome_arq) = -1
                                IF 'N' = op_simnao('S',' Nao foi possivel apagar o arquivo: '+mnome_arq+' Deseja continuar tentando:')
                                        atencao('Nao foi feito o BACKUP....')
                                	QUIT
                                ENDIF
                        ENDIF
                ENDDO
		xcop := IF(m_bkp[1]='1','ARJ','RAR')+' A '+mnome_arq+' '+m_bkp[3]
		DEVPOS(00,01);DEVOUT('Aguarde um momento compactanto os Arquivo(s): '+m_bkp[2])
		setcor(31)
		DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
		setcor(1)
		MYRUN(xcop)
		xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[4])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
		DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[4])
		setcor(31)
		DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
		setcor(1)
		MYRUN(xcop)
		IF m_bkp[5] > 0
			m_aux := DIRECTORY(ALLTRIM(m_bkp[4])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
			d := 0
			FOR d = 1 TO LEN(m_aux)
				IF (DATE() - m_bkp[5]) > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
					xcop := 'DEL '+ALLTRIM(m_bkp[4])+m_aux[d,1]
					MYRUN(xcop)
				ENDIF
			NEXT
		ENDIF
		IF ! EMPTY(m_bkp[6])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[6])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[6]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[7] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[6])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[7] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[6])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[8])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[8])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[8]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[9] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[8])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[9] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[8])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[10])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[10])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[10]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[11] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[10])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[11] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[10])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[12])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[12])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[12]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[13] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[12])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[13] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[12])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[14])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[14])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[14]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[15] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[14])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[15] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[14])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		***************************************
		DEVPOS(ROW()+1,01);DEVOUT('F I N A L   D O   B A C K U P ...')
		WVW_SetMouseMove(,.T.)
		INKEY(5)
	ELSE
		atencao('O BACKUP nao estar configurado...')
	ENDIF
	QUIT
ENDIF
RDDSETDEFAULT('SQLRDD')
SR_SetMultiLang( .t. )
SR_SetBaseLang( LANG_PT_BR )
op_tela(10,15,12,85,'TENTANDO CONEXAO COM O BANCO DE DADOS')
//WVW_SetFont(,"lucida console",13, 7,, PROOF_QUALITY )  // 800X600
DEVPOS(01,01);DEVOUT('Tentando CONEXAO com o 1o. BANCO DE DADOS Caminho: ['+ALLTRIM(m_cfg[1])+'], Aguarde um Momento......')
IF m_cfg[2] = 'S' .AND. ! File('SISMASTER.GDB')
        IF SQL_SUCCESS = FBCreateDB( 'SISMASTER.GDB', 'SYSDBA', 'masterkey', 300, 'ISO8859_1')
                atencao('Banco Criado com SUCESSO')
                m_line := 'ON'
        ENDIF
ENDIF
********** CONECTANDO AO FIREBIRD *************************************************
IF mtc <> NIL .AND. SUBSTR(mtc,1,3) = 'GDB'
        //atencao(ALLTRIM(SUBSTR(ALLTRIM(m_cfg[1]),1,LEN(ALLTRIM(m_cfg[1]))-10)+SUBSTR(mtc,4)))
        nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(SUBSTR(ALLTRIM(m_cfg[1]),1,LEN(ALLTRIM(m_cfg[1]))-10)+SUBSTR(mtc,4))+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
        If nCnn < 0
                atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no mastercfg.INI ["+ALLTRIM(m_cfg[1])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                Quit
        EndIf
ELSE
        nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[1])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
        //nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[1])+';uid=SYSDBA;pwd=masterkey')
        If nCnn < 0
                atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no mastercfg.INI ["+ALLTRIM(m_cfg[1])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                Quit
        EndIf
ENDIF
SR_SetActiveConnection(nCnn)
m_line := 'ON'
wvw_lclosewindow()
botao(00,00,MAXROW(),MAXCOL())
WVW_DrawImage(,00,00,50,120,ALLTRIM(m_cfg[12])+'HTILOGO.JPG',.F.,.F.)
WVW_DrawImage( ,29,95,42,115,ALLTRIM(m_cfg[12])+"LOGOHTI.JPG",.F.,.F.)

//WVW_DrawImage( ,00,00,44,120,ALLTRIM(m_cfg[12])+'HTILOGO.JPG',.T.,.F.)
//WVW_DrawImage( ,40,00,43,25,ALLTRIM(m_cfg[12])+'xharbour.JPG',.F.,.F.)
IF FILE(ALLTRIM(m_cfg[12])+'HTIFIRMA.JPG')
        WVW_DrawImage( ,04,04,30,90,ALLTRIM(m_cfg[12])+'HTIFIRMA.JPG',.T.,.F.)
ELSE
        WVW_DrawImage( ,04,04,30,90,ALLTRIM(m_cfg[12])+'HTIFIRMA1.JPG',.T.,.F.)
ENDIF

//wvw_noclose()
mensagem('Verificando o Arquivo -> MENUFOTO.DBF')
IF ! FILE('MENUFOTO.DBF')
        matriz:={ }
        AADD(matriz,{'smenu','C',40,0})
        AADD(matriz,{'snome','C',40,0})
        DBCREATE('menufoto',matriz,'DBFCDX')
ENDIF
//arq_bat()
IF mtc = 'indexar'
        CLOSE ALL
        mastercdx('*',mecf)
        wvw_lclosewindow()
        QUIT
ENDIF
IF mtc = 'arquivo'
        CLOSE ALL
        master_dbf(mtc)
        wvw_lclosewindow()
        QUIT
ENDIF
IF m_cfg[2] = 'S'
	MYRUN('MD '+curdrive()+':\CLIENTE')
        //atencao('ok')
	MYRUN('MD '+curdrive()+':\PRODUTO')
        masterdbf()
        IF ! mastercdx()
                atencao('Existe algum problema com os indices procure o suporte')
                CLOSE ALL
                QUIT
        ENDIF
        master_dbf()
ENDIF
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
tesc := CHR(27)
memp_resa := SPACE(30)

WHILE .T.
        mdata_sis := DATE()
        mtip_term := m_cfg[2]
        IF VAL(m_set[1,30]) = 0 .AND. ! EMPTY(m_set[1,30])
                sr_getconnection():exec("UPDATE sacsetup SET cod_acess = "+sr_cdbvalue(m_set[1,30]),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ELSEIF EMPTY(m_set[1,23])
                atencao('EMPRESA SEM NUMERO DE SERIE')
                senha('*')
                IF ! incl_firma('*')       // PRG HTIFUN
                        SET CURSOR ON
                        CLEAR MEMORY
                        INKEY(2)
                ENDIF
                wvw_lclosewindow()
                QUIT
        ELSEIF autorizacao(m_set[1,23])
                num := 80
                mcodempresa := '001'
                mcgc_aux := m_set[1,35]
                mcgc_firm := m_set[1,35]
                minsc_firm := m_set[1,14]
                mend_firm := RTRIM(m_set[1,5])+', '+RTRIM(m_set[1,6])+IF(! EMPTY(m_set[1,7]),' - '+RTRIM(m_set[1,7]),'')
                mcid_firm := RTRIM(m_set[1,9])+'-'+m_set[1,10]
                mfone_firm := RTRIM(m_set[1,12])
                sis_cidade := RTRIM(m_set[1,9])
                IF ! EMPTY(m_set[1,3])
                        memp_resa := RTRIM(m_set[1,3])
                ELSE
                        memp_resa := RTRIM(m_set[1,2])
                ENDIF
                *-----------------------------------------------------
                CLOSE ALL
                IF ! AbriArq('insopera','sen',,,,,,'N');RETURN NIL;ENDIF
                *-----------------------------------------------------
                setcor(1)
                *************
                muf_firm := m_set[1,10]
                IF mtc = 'PALM'
                        mcont := 0
                        WHILE .T.
                                mcod_oper := VAL(pinpad(,'Cod.Operador:','Digite o Codigo Operador'))

                                aret:={}
                                sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3)),,.t.,@aret)
                                IF LEN(aret) = 0
                                        atencao('Operador nao cadastrado....')
                                        LOOP
                                ENDIF

                                msenha := pinpad(1,'Digite Senha:','Operador: '+aret[1,2])

                                IF EMPTY(msenha)
                                        atencao('Senha Incorreta Tente Novamente')
                                        TONE(100,6)
                                        TONE(1600,6)
                                        INKEY(2)
                                        IF mcont = 3
                                                //wvw_lclosewindow()
                                                RETURN .F.
                                        ENDIF
                                        LOOP
                                ENDIF
                                mcont ++
                                IF ALLTRIM(msenha) = 'HTI251507' .AND. STRZERO(mcod_oper,3) = '999'
                                        nivel_acess := '1'
                                        cod_operado := '999'
                                        senha_acess := msenha
                                        EXIT
                                ENDIF
                                IF ALLTRIM(msenha) == ALLTRIM(DCRIPTO(aret[1,5]))
                                        sr_getconnection():exec("UPDATE insopera SET sult_ent = "+sr_cdbvalue(mdata_sis)+",shora_ini = "+sr_cdbvalue(SUBSTR(TIME(),1,5))+" WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3)),,.f.)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        nivel_acess := aret[1,13]
                                        cod_operado := aret[1,1]
                                        senha_acess := msenha
                                        EXIT
                                ELSE
                                        atencao('Senha Incorreta Tente Novamente')
                                        TONE(100,6)
                                        TONE(1600,6)
                                        INKEY(2)
                                        IF mcont = 3
                                                //wvw_lclosewindow()
                                                RETURN .F.
                                        ENDIF
                                        LOOP
                                ENDIF
                        ENDDO
                        mast2002()
                        QUIT
                ENDIF
                IF ! senha();fim(,'*');ENDIF    // Solicitar senha do sistema
        ELSE
                atencao('Numero de serie nao esta correto, procure a HTI Sistemas')
                IF ! AbriArq('sacsetup','set',,,,,,'N');RETURN NIL;ENDIF
                **************
                SELE('set')
                **************
                BLOQREG()
                set->serie := SPACE(19)
                DBCOMMIT()
                DBUNLOCK()
                senha()
                LOOP
        ENDIF
ENDDO
CLOSE ALL
wvw_lclosewindow()
RETURN NIL
************************** f i m ***************************
****
FUNCTION ShowClue( ... )
****
LOCAL xMessage
STATIC lPostP, cMessage := ""
IF ( lPostP = NIL )
        cMessage := ""
ENDIF
FOR EACH xMessage IN HB_aParams()
        lIsArray := .F.
        SWITCH ValType( xMessage )
        CASE "C"
        CASE "M"
                EXIT
        CASE "N"
                xMessage := LTrim( Str( xMessage ) )
                EXIT
        CASE "D"
                xMessage := DToC( xMessage )
                EXIT
        CASE "L"
                xMessage := IF( xMessage, ".T.", ".F." )
                EXIT
        CASE "O"
                xMessage := xMessage:className + " Object"
                EXIT
        CASE "B"
                xMessage := "{||...}"
                EXIT
        CASE "A"
                lPostP := lIsArray := .T.
                EXIT
                DEFAULT
                xMessage := "NIL"
        END
        cMessage += ( "/" + xMessage )
NEXT
WvW_SBsetText( 1, 0, "* " +  cMessage )
lPostP := NIL
RETURN (.T.)

//****
/*
function DisplayTime
  //if <alguma condição>
    HB_BACKGROUNDACTIVE( nTask, .F. )  // desativar o timer
    atencao('ok')
    //<esperar>       '
    HB_BACKGROUNDACTIVE( nTask, .T. )  // reativar o timer
  //endif
return .t.
*/


/*
FUNCTION TESTA1()
if lOK1
Alert("Voce desmarcou o checkbox")
else
Alert("Voce marcou o checkbox")
endif
lOK1 := !lOK1
RETURN NIL

FUNCTION TESTA2()
if lOK2
Alert("Voce desmarcou o checkbox")
else
Alert("Voce marcou o checkbox")
endif
lOK2 := !lOK2
RETURN NIL
*/