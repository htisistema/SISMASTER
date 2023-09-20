/*
 * $Id: errorsys.prg,v 1.11 2008/11/24 10:02:12 mlacecilia Exp $
 *
 * HWGUI - Harbour Win32 GUI library source code:
 * Windows errorsys replacement
 *
 * Copyright 2001 Alexander S.Kresin <alex@belacy.belgorod.su>
 * www - http://kresin.belgorod.su
*/

#include "common.ch"
#include "error.ch"
#include "fileio.ch"
//#include "hwgui.ch"

STATIC LogInitialPath := ""  //Curdrive()+ ":\" + rtrim(curdir())+ "\erros\"

PROCEDURE ErrorSys
ErrorBlock( { | oError | DefError( oError ) } )
RETURN

*********************** F I M ***********************************************
STATIC FUNCTION DefError( oError )
**********************************
LOCAL cMessage
LOCAL cDOSError
Local cLogFile := DTOS(DATE())+StrTran( TIME(), ":", "_")+".log"
LOCAL n
LogInitialPath := ALLTRIM(m_cfg[12])

sr_getconnection():exec("ROLLBACK",,.f.)

// By default, division by zero results in zero
IF oError:genCode == EG_ZERODIV
        RETURN 0
ENDIF

// Set NetErr() of there was a database open error
IF oError:genCode == EG_OPEN .AND. ;
        oError:osCode == 32 .AND. ;
        oError:canDefault
        NetErr( .T. )
        RETURN .F.
ENDIF

// Set NetErr() if there was a lock error on dbAppend()
IF oError:genCode == EG_APPENDLOCK .AND. ;
        oError:canDefault
        NetErr( .T. )
        RETURN .F.
ENDIF
cMessage := ErrorMessage( oError )
IF ! Empty( oError:osCode )
        cDOSError := "(DOS Error " + LTrim( Str( oError:osCode ) ) + ")"
ENDIF

IF ! Empty( oError:osCode )
        cMessage += " " + cDOSError
ENDIF

n := 2
WHILE ! Empty( ProcName( n ) )
        cMessage += Chr( 13 ) + Chr( 10 ) + "Funcoes: " + ProcFile( n ) + "->" + ProcName( n ) + "(" + AllTrim( Str( ProcLine( n ++ ) ) ) + ")"
ENDDO

//included aditional informations

cMessage += Chr( 13 ) + Chr( 10 )+'********************************************************************************'

cMessage += Chr( 13 ) + Chr( 10 ) + 'Data e Hora........: ' + dtoc( date() ) + " - " + time()
cMessage += Chr( 13 ) + Chr( 10 ) + 'Empresa............: ' + memp_resa
cMessage += Chr( 13 ) + Chr( 10 ) + 'Sistema/Atualizacao: ' + sistema+' - '+mversao
cMessage += Chr( 13 ) + Chr( 10 ) + 'Usuario do Sistema.: ' + cod_operado
cMessage += Chr( 13 ) + Chr( 10 ) + 'Nome do Executavel.: ' + hb_cmdargargv()
cMessage += Chr( 13 ) + Chr( 10 ) + 'Nome do Micro......: ' + netname() + " - Nome Terminal: "+ netname(.t.)
cMessage += Chr( 13 ) + Chr( 10 ) + 'Memoria Disponivel.: ' + alltrim(str( Memory(0) )) + ' - Espa�o em Disco....: ' + alltrim(str( DiskSpace() ))
cMessage += Chr( 13 ) + Chr( 10 ) + 'Pasta de Diretorio.: ' + curdir()
cMessage += Chr( 13 ) + Chr( 10 ) + 'Sistema Operacional: ' + os()
//cMessage += Chr( 13 ) + Chr( 10 ) + 'Vers�o xHarbour....: ' + hb_version( 1 )

MemoWrit( LogInitialPath + cLogFile, cMessage )

ErrorPreview( cMessage, cLogFile )
QUIT
RETURN .F.

*********************** F I M ***********************************************
FUNCTION ErrorMessage( oError )
LOCAL cMessage

// start error message
cMessage := IIf( oError:severity > ES_WARNING, "Error", "Warning" ) + " "

// add subsystem name if available
IF ISCHARACTER( oError:subsystem )
        cMessage += oError:subsystem()
ELSE
        cMessage += "???"
ENDIF

// add subsystem's error code if available
IF ISNUMBER( oError:subCode )
        cMessage += "/" + LTrim( Str( oError:subCode ) )
ELSE
        cMessage += "/???"
ENDIF

// add error description if available
IF ISCHARACTER( oError:description )
        cMessage += "  " + oError:description
ENDIF

// add either filename or operation
DO CASE
CASE ! Empty( oError:filename )
        cMessage += ": " + oError:filename
CASE ! Empty( oError:operation )
        cMessage += ": " + oError:operation
ENDCASE

/*
IF ! Empty( oError:Args )
   cMessage += "Arguments: " + ValToPrgExp( oError:Args )
ENDIF
*/
RETURN cMessage
*********************** F I M ***********************************************
STATIC FUNCTION ErrorPreview( cMess, cArq )

LOCAL point:=0,lin,linhas,linha,opcao:=' '
PRIVATE mtipo_imp,mimp_tipo:=2,marq:=SPACE(35)

mtipo_imp := 'M'

SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
op_tela(00,05,32,100,' E R R O   D O   S I S T E M A ')
lin := MEMOLINE(MEMOREAD(ALLTRIM(LogInitialPath)+cArq),95,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD(ALLTRIM(LogInitialPath)+cArq),95)
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD(ALLTRIM(LogInitialPath)+cArq),95,linha,,)
        DEVPOS(ROW()+1,00);DEVOUT(ALLTRIM(lin))
NEXT
mensagem('Pressione qualquer tecla para continuar...')
@ 30,00 GET opcao
READ
/*
IF imp_arq('ERROSYS.REL','R')
        imprt(mtipo_imp,'C')
        lin := MEMOLINE(MEMOREAD(ALLTRIM(LogInitialPath)+cArq),95,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(MEMOREAD(ALLTRIM(LogInitialPath)+cArq),95)
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(MEMOREAD(ALLTRIM(LogInitialPath)+cArq),95,linha,,)
                DEVPOS(PROW()+1,00);DEVOUT(ALLTRIM(lin))
        NEXT
        imprt(mtipo_imp,'N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                lertexto('ERROSYS.REL')
        ELSEIF mtipo_imp = 'D'
                MYRUN('DOSPRINTER '+IF(m_cfg[79]='2','/SEL2','/SEL')+' /DEL '+ALLTRIM(m_cfg[12])+'HTI.REL')
        ENDIF
ENDIF
*/
wvw_lclosewindow()
RETURN Nil
*********************** F I M ***********************************************
/*
***************************
Function ENVIA_ERRO(aARQUI)
***************************
local cSubject   := "Erro do Sistema"
local aTo        := { "meu_email@meu_site.com.br" }
local cServerIp  := "smtp.servidor.com.br"

Local cFrom  := "meu_email@meu_site.com.br"
Local cUser  := "meu_usuario_de_email@meu_site.com.br"
Local aFiles := {aARQUI}

local cMsg := " Erro do sistema "

IF inetestaconectada()=.T. // testa a conex�o com a internet
   PRIVATE oDlgHabla:=NIL
   MsgRun("Aguarde enviando o Erro")

   IF hb_SendMail(cServerIP,25 ,cFrom,aTo, , , cMsg,cSubject, aFiles, cUser   , "senha", cServerIP , 3 , .F.  , .F.   ,.T. , ) = .T.
      ferase(aARQUI)
      Fim_Run()
   else
      Fim_Run()
      MsGStop("N�o foi possivel enviar o Erro, Favor verificar sua conex�o com a Internet." + HB_OsNewLine() + ;
              "E envie para o email (meu_email@meu_site.com.br) o arquivo que foi gerado: " + HB_OsNewLine() + ;
              aARQUI,"Aviso do Sistema")
   Endif
ELSE
   MsGStop("N�o foi possivel enviar o Erro, Favor verificar sua conex�o com a Internet." + HB_OsNewLine() + ;
           "E envie para o email (meu_email@meu_site.com.br) o arquivo que foi gerado: " + HB_OsNewLine() + ;
           aARQUI,"Aviso do Sistema")
ENDIF
RETURN Nil
*/