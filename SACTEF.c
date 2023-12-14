/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACTEF.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\SACTEF.PRG /q /oc:\HTI\sismaster\SACTEF.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.14 10:06:48 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACTEF.PRG"

HB_FUNC( PAC00TEF );
HB_FUNC( CRITICA_CRT );
HB_FUNC( CHECK_TO );
HB_FUNC_STATIC( CHECK_CRT );
HB_FUNC( MANDA_NCN );
HB_FUNC( MANDA_ATV );
HB_FUNC_STATIC( MANDA_CRT );
HB_FUNC_STATIC( MANDA_CHQ );
HB_FUNC( CRIA_TEFTXT );
HB_FUNC( PEGA_TEXTOTEF );
HB_FUNC( ATV_OK );
HB_FUNC( MANDA_CNF );
HB_FUNC( FECHA_TEFTXT );
HB_FUNC( GRAVA_CAMPO );
HB_FUNC( TRATA_TEF );
HB_FUNC( PADM );
HB_FUNC_STATIC( MANDA_ADM );
HB_FUNC_STATIC( CHECK_ADM );
HB_FUNC_STATIC( CRITICA_ADM );
HB_FUNC( MOSTRA_CANC );
HB_FUNC( BLOQ_TECLADO );
HB_FUNC( IMP_COMPROVANTE );
HB_FUNC( IMP_ADM );
HB_FUNC( APAGA_INTPOS );
HB_FUNC( PNCONF );
HB_FUNC( IMP_CARTAO );
HB_FUNC( VERI_TRANSACAO );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( __KEYBOARD );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( FERASE );
HB_FUNC_EXTERN( SETCURSOR );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ALERT );
HB_FUNC_EXTERN( IBR_OK );
HB_FUNC_EXTERN( IBR_COMANDO );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( DIRECTORY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACTEF )
{ "PAC00TEF", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( PAC00TEF )}, NULL },
{ "CRLF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "DOC_CDREDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "TEF_ENV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_RET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_CARTAO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMP_CARTAO )}, NULL },
{ "BLOQ_TECLADO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLOQ_TECLADO )}, NULL },
{ "__KEYBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __KEYBOARD )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "CRITICA_CRT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRITICA_CRT )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "MVALOR_TRANS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_TEF_NOMREDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "MNOME_REDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOMEREDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "M_TEF_NUMTRA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_TRANSACAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQTD_PARC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_TEF_FINALIZA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFINAL_TRANSACAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MANDA_CNF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_CNF )}, NULL },
{ "CHECK_TO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHECK_TO )}, NULL },
{ "MANDA_NCN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_NCN )}, NULL },
{ "APAGA_INTPOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( APAGA_INTPOS )}, NULL },
{ "PEGA_TEXTOTEF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PEGA_TEXTOTEF )}, NULL },
{ "M_ARQTEF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHECK_CRT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHECK_CRT )}, NULL },
{ "FERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASE )}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIA_TEFTXT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRIA_TEFTXT )}, NULL },
{ "NHANDLE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GRAVA_CAMPO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GRAVA_CAMPO )}, NULL },
{ "M_TEF_NUM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FECHA_TEFTXT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FECHA_TEFTXT )}, NULL },
{ "OK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MANDA_ATV", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_ATV )}, NULL },
{ "SETCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCURSOR )}, NULL },
{ "SLINHAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "MANDA_CRT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_CRT )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "M_NUMEROCAIXA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MANDA_CHQ", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_CHQ )}, NULL },
{ "ARQTEF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "CONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEMPOXX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "ATV_OK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ATV_OK )}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "NVEZES", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBYTES", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRATA_TEF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRATA_TEF )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "STATUS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PADM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PADM )}, NULL },
{ "MTP_CARTAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_VIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_DIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_DIR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_DSE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_DSR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_UTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "DAT_TEF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VERI_TRANSACAO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VERI_TRANSACAO )}, NULL },
{ "MANDA_ADM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_ADM )}, NULL },
{ "CHECK_ADM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHECK_ADM )}, NULL },
{ "CRITICA_ADM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRITICA_ADM )}, NULL },
{ "IMP_ADM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMP_ADM )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "TXT_TRANSA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TXT_VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TXT_REDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "MOSTRA_CANC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MOSTRA_CANC )}, NULL },
{ "ALERT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALERT )}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEXTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IBR_OK", {HB_FS_PUBLIC}, {HB_FUNCNAME( IBR_OK )}, NULL },
{ "IBR_COMANDO", {HB_FS_PUBLIC}, {HB_FUNCNAME( IBR_COMANDO )}, NULL },
{ "IMP_COMPROVANTE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMP_COMPROVANTE )}, NULL },
{ "MPOS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "MHORA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDOCUMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCUPOM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERACOES", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SREL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "PNCONF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PNCONF )}, NULL },
{ "LIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINHAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_INTPOS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIRECTORY )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACTEF )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACTEF
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACTEF = hb_vm_SymbolInit_SACTEF;
   #pragma data_seg()
#endif

HB_FUNC( PAC00TEF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 4,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 9 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 3,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* CRLF */
	HB_P_PUSHSYMNEAR, 2,	/* TEF_VALOR */
	HB_P_DOSHORT, 2,
	HB_P_POPVARIABLE, 2, 0,	/* TEF_VALOR */
	HB_P_POPVARIABLE, 1, 0,	/* CRLF */
/* 00032 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00046) */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00114) */
/* 00048 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NVALORCARTAO 0*/
/* 00054 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'a', '!', ' ', '[', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00109 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00114 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
/* 00121 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_POPMEMVAR, 6, 0,	/* DOC_CDREDE */
/* 00130 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00159 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00189 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 10,	/* IMP_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CNUMEROCUPOM */
	HB_P_PUSHLOCALNEAR, 2,	/* CIND_TEF */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_DOSHORT, 3,
/* 00202 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 11,	/* BLOQ_TECLADO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_DOSHORT, 1,
/* 00213 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 12,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 00223 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 12,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00230 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '*', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00268 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHLOCALNEAR, 4,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00274 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CRITICA_CRT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 86, 0,	/* 86 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* MPOS 0*/
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 87 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'o', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00064 */ HB_P_LINEOFFSET, 2,	/* 88 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 91,	/* 91 (abs: 00184) */
/* 00095 */ HB_P_LINEOFFSET, 3,	/* 89 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'c', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', 'c', ':', 92, 't', 'e', 'f', '_', 'd', 'i', 'a', 'l', 92, 'r', 'e', 's', 'p', 92, 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00179 */ HB_P_LINEOFFSET, 4,	/* 90 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00184 */ HB_P_LINEOFFSET, 6,	/* 92 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00225 */ HB_P_LINEOFFSET, 7,	/* 93 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_POPLOCALNEAR, 6,	/* LINHAS */
/* 00235 */ HB_P_LINEOFFSET, 8,	/* 94 */
	HB_P_PUSHSYMNEAR, 19,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* LINHAS */
/* 00273 */ HB_P_LINEOFFSET, 9,	/* 95 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_INTPOS */
/* 00280 */ HB_P_LINEOFFSET, 10,	/* 96 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 6,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00359) */
/* 00293 */ HB_P_LINEOFFSET, 11,	/* 97 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00335 */ HB_P_LINEOFFSET, 12,	/* 98 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00351 */ HB_P_LINEOFFSET, 13,	/* 99 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 00286) */
/* 00359 */ HB_P_LINEOFFSET, 14,	/* 100 */
	HB_P_PUSHSYMNEAR, 21,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00388 */ HB_P_LINEOFFSET, 15,	/* 101 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00475) */
/* 00401 */ HB_P_LINEOFFSET, 16,	/* 102 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00470 */ HB_P_LINEOFFSET, 17,	/* 103 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00475 */ HB_P_LINEOFFSET, 19,	/* 105 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 00638) */
/* 00517 */ HB_P_LINEOFFSET, 20,	/* 106 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 107,	/* 107 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '0', '1', ']', ' ', '-', ' ', 'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'c', 'a', 'o', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', 'E', 's', 't', 'e', ' ', 'c', 'a', 'm', 'p', 'o', ' ', 'i', 'n', 'd', 'i', 'c', 'a', ' ', 'o', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'a', ' ', 's', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', ' ', 'q', 'u', 'e', ' ', 'e', 's', 't', 'a', 160, 's', 'e', 'n', 'd', 'o', ' ', 'f', 'e', 'i', 't', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00633 */ HB_P_LINEOFFSET, 21,	/* 107 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00638 */ HB_P_LINEOFFSET, 30,	/* 116 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '3', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00678 */ HB_P_LINEOFFSET, 31,	/* 117 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 00750) */
/* 00686 */ HB_P_LINEOFFSET, 32,	/* 118 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '0', '3', ']', ' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00745 */ HB_P_LINEOFFSET, 33,	/* 119 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00750 */ HB_P_LINEOFFSET, 39,	/* 125 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 25, 0,	/* MVALOR_TRANS */
/* 00772 */ HB_P_LINEOFFSET, 41,	/* 127 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '9', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00812 */ HB_P_LINEOFFSET, 42,	/* 128 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 00897) */
/* 00820 */ HB_P_LINEOFFSET, 43,	/* 129 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'n', 'e', 'g', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'o', 'u', ' ', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'o', ' ', 'u', 's', 'u', 'a', 'r', 'i', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00892 */ HB_P_LINEOFFSET, 44,	/* 130 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00897 */ HB_P_LINEOFFSET, 46,	/* 132 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 154, 0,	/* 154 (abs: 01075) */
/* 00924 */ HB_P_LINEOFFSET, 47,	/* 133 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00964 */ HB_P_LINEOFFSET, 48,	/* 134 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00998) */
/* 00972 */ HB_P_LINEOFFSET, 49,	/* 135 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 74,	/* 74 (abs: 01070) */
/* 00998 */ HB_P_LINEOFFSET, 51,	/* 137 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'n', 'e', 'g', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'o', 'u', ' ', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'o', ' ', 'u', 's', 'u', 'a', 'r', 'i', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01070 */ HB_P_LINEOFFSET, 53,	/* 139 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01075 */ HB_P_LINEOFFSET, 56,	/* 142 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01115 */ HB_P_LINEOFFSET, 57,	/* 143 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 118,	/* 118 (abs: 01239) */
/* 01123 */ HB_P_LINEOFFSET, 58,	/* 144 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '1', '0', ']', ' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'R', 'e', 'd', 'e', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', 'E', 's', 't', 'e', ' ', 'c', 'a', 'm', 'p', 'o', ' ', 'i', 'n', 'd', 'i', 'c', 'a', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'r', 'e', 'd', 'e', ' ', 'q', 'u', 'e', ' ', 't', 'r', 'a', 't', 'o', 'u', ' ', 'd', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01234 */ HB_P_LINEOFFSET, 59,	/* 145 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01239 */ HB_P_LINEOFFSET, 61,	/* 147 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
/* 01261 */ HB_P_LINEOFFSET, 62,	/* 148 */
	HB_P_PUSHSYMNEAR, 27,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 28, 0,	/* MNOME_REDE */
/* 01288 */ HB_P_LINEOFFSET, 63,	/* 149 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'A', 'M', 'E', 'X', '_', 'R', 'E', 'D', 'E', 'C', 'A', 'R', 'D', '_', 'V', 'I', 'S', 'A', 'N', 'E', 'T', '_', 'T', 'E', 'C', 'B', 'A', 'N', '_', 'H', 'I', 'P', 'E', 'R', 'C', 'A', 'R', 'D', '_', 'E', 'L', 'O', '_', 'V', 'I', 'S', 'A', 'E', 'L', 'E', 'T', 'R', 'O', 'N', '_', 'C', 'I', 'E', 'L', 'O', 0, 
	HB_P_POPVARIABLE, 29, 0,	/* NOMEREDE */
/* 01356 */ HB_P_LINEOFFSET, 72,	/* 158 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01396 */ HB_P_LINEOFFSET, 73,	/* 159 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 125,	/* 125 (abs: 01527) */
/* 01404 */ HB_P_LINEOFFSET, 74,	/* 160 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '1', '2', ']', ' ', '-', ' ', 'N', 'o', '.', ' ', 'd', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', 'I', 'n', 'd', 'i', 'c', 'a', ' ', 'o', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'e', ' ', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'i', 'a', ' ', '(', 'N', 'S', 'U', ' ', '-', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'i', 'a', 'l', ' ', 'U', 'n', 'i', 'c', 'o', ')', 0, 
	HB_P_DOSHORT, 1,
/* 01522 */ HB_P_LINEOFFSET, 75,	/* 161 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01527 */ HB_P_LINEOFFSET, 77,	/* 163 */
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 01624) */
/* 01550 */ HB_P_LINEOFFSET, 78,	/* 164 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'a', ' ', 'N', 'S', 'U', ' ', '-', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'i', 'a', 'l', ' ', 'U', 'n', 'i', 'c', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01619 */ HB_P_LINEOFFSET, 79,	/* 165 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01624 */ HB_P_LINEOFFSET, 81,	/* 167 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
/* 01646 */ HB_P_LINEOFFSET, 82,	/* 168 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* MNUM_TRANSACAO */
/* 01668 */ HB_P_LINEOFFSET, 84,	/* 170 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '8', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01708 */ HB_P_LINEOFFSET, 85,	/* 171 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01724) */
/* 01716 */ HB_P_LINEOFFSET, 86,	/* 172 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 33, 0,	/* MQTD_PARC */
	HB_P_JUMPNEAR, 113,	/* 113 (abs: 01835) */
/* 01724 */ HB_P_LINEOFFSET, 88,	/* 174 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 01808) */
/* 01745 */ HB_P_LINEOFFSET, 89,	/* 175 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'd', 'a', ' ', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01803 */ HB_P_LINEOFFSET, 90,	/* 176 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01808 */ HB_P_LINEOFFSET, 92,	/* 178 */
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 33, 0,	/* MQTD_PARC */
/* 01835 */ HB_P_LINEOFFSET, 94,	/* 180 */
	HB_P_PUSHVARIABLE, 33, 0,	/* MQTD_PARC */
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01850) */
/* 01844 */ HB_P_LINEOFFSET, 95,	/* 181 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 33, 0,	/* MQTD_PARC */
/* 01850 */ HB_P_LINEOFFSET, 97,	/* 183 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01890 */ HB_P_LINEOFFSET, 98,	/* 184 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 137, 0,	/* 137 (abs: 02033) */
/* 01899 */ HB_P_LINEOFFSET, 99,	/* 185 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 120,	/* 120 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '2', '7', ']', ' ', '-', ' ', 'F', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', 'E', 's', 't', 'e', ' ', 'c', 'a', 'm', 'p', 'o', ' ', 'c', 'o', 'n', 't', 'e', 'm', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'r', 'e', 'c', 'e', 'b', 'i', 'd', 'o', 's', ' ', 'd', 'o', ' ', 'm', 'o', 'd', 'u', 'l', 'o', ' ', 'T', 'E', 'F', ' ', 'q', 'u', 'e', ' ', 'e', 'x', 'e', 'c', 'u', 't', 'o', 'u', ' ', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02028 */ HB_P_LINEOFFSET, 100,	/* 186 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02033 */ HB_P_LINEOFFSET, 102,	/* 188 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 02117) */
/* 02054 */ HB_P_LINEOFFSET, 103,	/* 189 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'd', 'a', ' ', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02112 */ HB_P_LINEOFFSET, 104,	/* 190 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02117 */ HB_P_LINEOFFSET, 106,	/* 192 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
/* 02139 */ HB_P_LINEOFFSET, 107,	/* 193 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 35, 0,	/* MFINAL_TRANSACAO */
/* 02161 */ HB_P_LINEOFFSET, 109,	/* 195 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '8', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 02201 */ HB_P_LINEOFFSET, 110,	/* 196 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 02288) */
/* 02209 */ HB_P_LINEOFFSET, 111,	/* 197 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '2', '8', ']', ' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'l', 'i', 'n', 'h', 'a', 's', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02283 */ HB_P_LINEOFFSET, 112,	/* 198 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02288 */ HB_P_LINEOFFSET, 114,	/* 200 */
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 02398) */
/* 02311 */ HB_P_LINEOFFSET, 115,	/* 201 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 73,	/* 73 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'l', 'i', 'n', 'h', 'a', 's', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', ' ', 130, ' ', 'z', 'e', 'r', 'o', '!', ' ', 'N', 'a', 'o', ' ', 'h', 'a', 'v', 'e', 'r', 160, 'c', 'u', 'p', 'o', 'm', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02393 */ HB_P_LINEOFFSET, 116,	/* 202 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02398 */ HB_P_LINEOFFSET, 119,	/* 205 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 02438 */ HB_P_LINEOFFSET, 120,	/* 206 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_POP,
/* 02445 */ HB_P_LINEOFFSET, 125,	/* 211 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 02547) */
/* 02477 */ HB_P_LINEOFFSET, 126,	/* 212 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 151, 3,	/* 919 (abs: 03463) */
/* 02547 */ HB_P_LINEOFFSET, 127,	/* 213 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '2', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 02649) */
/* 02579 */ HB_P_LINEOFFSET, 128,	/* 214 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '2', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 49, 3,	/* 817 (abs: 03463) */
/* 02649 */ HB_P_LINEOFFSET, 129,	/* 215 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '3', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 02751) */
/* 02681 */ HB_P_LINEOFFSET, 130,	/* 216 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '3', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 203, 2,	/* 715 (abs: 03463) */
/* 02751 */ HB_P_LINEOFFSET, 131,	/* 217 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '4', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 02853) */
/* 02783 */ HB_P_LINEOFFSET, 132,	/* 218 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '4', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 101, 2,	/* 613 (abs: 03463) */
/* 02853 */ HB_P_LINEOFFSET, 133,	/* 219 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '5', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 02955) */
/* 02885 */ HB_P_LINEOFFSET, 134,	/* 220 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '5', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 255, 1,	/* 511 (abs: 03463) */
/* 02955 */ HB_P_LINEOFFSET, 135,	/* 221 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '6', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03057) */
/* 02987 */ HB_P_LINEOFFSET, 136,	/* 222 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '6', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 153, 1,	/* 409 (abs: 03463) */
/* 03057 */ HB_P_LINEOFFSET, 137,	/* 223 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '7', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03159) */
/* 03089 */ HB_P_LINEOFFSET, 138,	/* 224 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '7', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 51, 1,	/* 307 (abs: 03463) */
/* 03159 */ HB_P_LINEOFFSET, 139,	/* 225 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '8', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03261) */
/* 03191 */ HB_P_LINEOFFSET, 140,	/* 226 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '8', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 205, 0,	/* 205 (abs: 03463) */
/* 03261 */ HB_P_LINEOFFSET, 141,	/* 227 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '9', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 71,	/* 71 (abs: 03362) */
/* 03293 */ HB_P_LINEOFFSET, 142,	/* 228 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '9', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 103,	/* 103 (abs: 03463) */
/* 03362 */ HB_P_LINEOFFSET, 143,	/* 229 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '0', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 70,	/* 70 (abs: 03463) */
/* 03395 */ HB_P_LINEOFFSET, 144,	/* 230 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '0', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03463 */ HB_P_LINEOFFSET, 146,	/* 232 */
	HB_P_PUSHSYMNEAR, 11,	/* BLOQ_TECLADO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_DOSHORT, 1,
/* 03474 */ HB_P_LINEOFFSET, 148,	/* 234 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 172, 0,	/* 172 (abs: 03658) */
/* 03489 */ HB_P_LINEOFFSET, 149,	/* 235 */
	HB_P_PUSHSYMNEAR, 37,	/* MANDA_CNF */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03496 */ HB_P_LINEOFFSET, 150,	/* 236 */
	HB_P_PUSHSYMNEAR, 38,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 116,	/* 116 (abs: 03625) */
/* 03511 */ HB_P_LINEOFFSET, 151,	/* 237 */
	HB_P_PUSHSYMNEAR, 39,	/* MANDA_NCN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03518 */ HB_P_LINEOFFSET, 152,	/* 238 */
	HB_P_PUSHSYMNEAR, 38,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 83,	/* 83 (abs: 03614) */
/* 03533 */ HB_P_LINEOFFSET, 153,	/* 239 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 's', 'o', 'b', 'r', 'e', ' ', 'a', ' ', 'n', 'a', 'o', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', 0, 
	HB_P_DOSHORT, 1,
/* 03614 */ HB_P_LINEOFFSET, 155,	/* 241 */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 03648) */
/* 03625 */ HB_P_LINEOFFSET, 158,	/* 244 */
	HB_P_PUSHSYMNEAR, 11,	/* BLOQ_TECLADO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_DOSHORT, 1,
/* 03636 */ HB_P_LINEOFFSET, 159,	/* 245 */
	HB_P_PUSHSYMNEAR, 40,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03643 */ HB_P_LINEOFFSET, 160,	/* 246 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_JUMP, 81, 255,	/* -175 (abs: 03480) */
/* 03658 */ HB_P_LINEOFFSET, 162,	/* 248 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03663 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CHECK_TO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 252, 0,	/* 252 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 253 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00038 */ HB_P_LINEOFFSET, 2,	/* 254 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00068 */ HB_P_LINEOFFSET, 3,	/* 255 */
	HB_P_PUSHSYMNEAR, 41,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00078 */ HB_P_LINEOFFSET, 4,	/* 256 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_JUMPFALSENEAR, 125,	/* 125 (abs: 00207) */
/* 00084 */ HB_P_LINEOFFSET, 5,	/* 257 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 00207) */
/* 00110 */ HB_P_LINEOFFSET, 6,	/* 258 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 65,	/* 65 (abs: 00207) */
/* 00144 */ HB_P_LINEOFFSET, 7,	/* 259 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* TIPOP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00202 */ HB_P_LINEOFFSET, 8,	/* 260 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00207 */ HB_P_LINEOFFSET, 12,	/* 264 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00213 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( CHECK_CRT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 1,	/* 268 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 41,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00024) */
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 270 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00024 */ HB_P_LINEOFFSET, 4,	/* 272 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00103) */
/* 00030 */ HB_P_LINEOFFSET, 5,	/* 273 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 00103) */
/* 00050 */ HB_P_LINEOFFSET, 6,	/* 274 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00098 */ HB_P_LINEOFFSET, 7,	/* 275 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00103 */ HB_P_LINEOFFSET, 10,	/* 278 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00125) */
/* 00109 */ HB_P_LINEOFFSET, 11,	/* 279 */
	HB_P_PUSHSYMNEAR, 41,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00125) */
/* 00120 */ HB_P_LINEOFFSET, 12,	/* 280 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00125 */ HB_P_LINEOFFSET, 15,	/* 283 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00131 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MANDA_NCN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'G', 'e', 'r', 'a', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'N', 'A', 'O', ' ', 'C', 'O', 'N', 'F', 'I', 'R', 'M', 'A', 'C', 'A', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 00047 */ HB_P_LINEOFFSET, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00076 */ HB_P_LINEOFFSET, 2,	/* 290 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00106 */ HB_P_LINEOFFSET, 3,	/* 291 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_POPMEMVAR, 45, 0,	/* TIPO */
/* 00117 */ HB_P_LINEOFFSET, 4,	/* 292 */
	HB_P_PUSHSYMNEAR, 46,	/* CRIA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 47, 0,	/* NHANDLE */
/* 00127 */ HB_P_LINEOFFSET, 5,	/* 293 */
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 113,	/* 113 (abs: 00248) */
/* 00137 */ HB_P_LINEOFFSET, 6,	/* 294 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 97,	/* 97 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'n', 'a', 'o', ' ', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'N', 'C', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 00243 */ HB_P_LINEOFFSET, 7,	/* 295 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00248 */ HB_P_LINEOFFSET, 9,	/* 297 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00284) */
/* 00279 */ HB_P_LINEOFFSET, 10,	/* 298 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00284 */ HB_P_LINEOFFSET, 12,	/* 300 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 49, 0,	/* M_TEF_NUM */
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00317) */
/* 00312 */ HB_P_LINEOFFSET, 13,	/* 301 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00317 */ HB_P_LINEOFFSET, 15,	/* 303 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00350) */
/* 00345 */ HB_P_LINEOFFSET, 16,	/* 304 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00350 */ HB_P_LINEOFFSET, 18,	/* 306 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00383) */
/* 00378 */ HB_P_LINEOFFSET, 19,	/* 307 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00383 */ HB_P_LINEOFFSET, 21,	/* 309 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00416) */
/* 00411 */ HB_P_LINEOFFSET, 22,	/* 310 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00416 */ HB_P_LINEOFFSET, 24,	/* 312 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00450) */
/* 00445 */ HB_P_LINEOFFSET, 25,	/* 313 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00450 */ HB_P_LINEOFFSET, 27,	/* 315 */
	HB_P_PUSHSYMNEAR, 50,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 51, 0,	/* OK */
/* 00463 */ HB_P_LINEOFFSET, 28,	/* 316 */
	HB_P_PUSHVARIABLE, 51, 0,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00470 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MANDA_ATV )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00030 */ HB_P_LINEOFFSET, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00060 */ HB_P_LINEOFFSET, 3,	/* 325 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'T', 'V', 0, 
	HB_P_POPMEMVAR, 45, 0,	/* TIPO */
/* 00071 */ HB_P_LINEOFFSET, 4,	/* 326 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', 'S', 'T', 'S', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00095 */ HB_P_LINEOFFSET, 5,	/* 327 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00119 */ HB_P_LINEOFFSET, 7,	/* 329 */
	HB_P_PUSHSYMNEAR, 53,	/* SETCURSOR */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 00127 */ HB_P_LINEOFFSET, 8,	/* 330 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', ' ', 'G', ' ', 'U', ' ', 'A', ' ', 'R', ' ', 'D', ' ', 'E', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00152 */ HB_P_LINEOFFSET, 9,	/* 331 */
	HB_P_PUSHSYMNEAR, 46,	/* CRIA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 47, 0,	/* NHANDLE */
/* 00162 */ HB_P_LINEOFFSET, 10,	/* 332 */
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 00308) */
/* 00173 */ HB_P_LINEOFFSET, 11,	/* 333 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'f', 'a', 'z', ' ', 'o', ' ', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'd', 'e', ' ', 'a', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'o', 'e', 's', ' ', 'p', 'o', 'r', ' ', 'm', 'e', 'i', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'r', 't', 'a', 'o', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'C', 'R', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 00303 */ HB_P_LINEOFFSET, 12,	/* 334 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00308 */ HB_P_LINEOFFSET, 25,	/* 347 */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'0', '0', '0', '-', '0', '0', '0', ' ', '=', ' ', 'A', 'T', 'V', 13, 10, '0', '0', '1', '-', '0', '0', '0', ' ', '=', ' ', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', 13, 10, '9', '9', '9', '-', '9', '9', '9', ' ', '=', ' ', '0', 0, 
	HB_P_POPVARIABLE, 54, 0,	/* SLINHAS */
/* 00364 */ HB_P_LINEOFFSET, 26,	/* 348 */
	HB_P_PUSHSYMNEAR, 55,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHMEMVARREF, 54, 0,	/* SLINHAS */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 54, 0,	/* SLINHAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 3,
/* 00385 */ HB_P_LINEOFFSET, 27,	/* 349 */
	HB_P_PUSHSYMNEAR, 50,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 51, 0,	/* OK */
/* 00398 */ HB_P_LINEOFFSET, 28,	/* 350 */
	HB_P_PUSHVARIABLE, 51, 0,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00405 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( MANDA_CRT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 100, 1,	/* 356 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 357 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 58,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* GETLIST */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 57, 0,	/* GETLIST */
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 358 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'R', 'T', 0, 
	HB_P_POPMEMVAR, 45, 0,	/* TIPO */
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 359 */
	HB_P_PUSHSYMNEAR, 46,	/* CRIA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 47, 0,	/* NHANDLE */
/* 00045 */ HB_P_LINEOFFSET, 4,	/* 360 */
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 00191) */
/* 00056 */ HB_P_LINEOFFSET, 5,	/* 361 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'f', 'a', 'z', ' ', 'o', ' ', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'd', 'e', ' ', 'a', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'o', 'e', 's', ' ', 'p', 'o', 'r', ' ', 'm', 'e', 'i', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'r', 't', 'a', 'o', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'C', 'R', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 00186 */ HB_P_LINEOFFSET, 6,	/* 362 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00191 */ HB_P_LINEOFFSET, 8,	/* 364 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'R', 'T', 0, 
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00227) */
/* 00222 */ HB_P_LINEOFFSET, 9,	/* 365 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00227 */ HB_P_LINEOFFSET, 11,	/* 367 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 59, 0,	/* M_NUMEROCAIXA */
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00260) */
/* 00255 */ HB_P_LINEOFFSET, 12,	/* 368 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00260 */ HB_P_LINEOFFSET, 14,	/* 370 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '3', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00308) */
/* 00303 */ HB_P_LINEOFFSET, 15,	/* 371 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00308 */ HB_P_LINEOFFSET, 17,	/* 373 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00342) */
/* 00337 */ HB_P_LINEOFFSET, 18,	/* 374 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00342 */ HB_P_LINEOFFSET, 20,	/* 376 */
	HB_P_PUSHSYMNEAR, 50,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00354 */ HB_P_LINEOFFSET, 21,	/* 377 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00360 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( MANDA_CHQ )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 127, 1,	/* 383 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 384 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 58,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* GETLIST */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 57, 0,	/* GETLIST */
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 385 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'H', 'Q', 0, 
	HB_P_POPMEMVAR, 45, 0,	/* TIPO */
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 386 */
	HB_P_PUSHSYMNEAR, 46,	/* CRIA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 47, 0,	/* NHANDLE */
/* 00045 */ HB_P_LINEOFFSET, 4,	/* 387 */
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 00191) */
/* 00056 */ HB_P_LINEOFFSET, 5,	/* 388 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'f', 'a', 'z', ' ', 'o', ' ', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'd', 'e', ' ', 'a', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'o', 'e', 's', ' ', 'p', 'o', 'r', ' ', 'm', 'e', 'i', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'r', 't', 'a', 'o', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'C', 'R', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 00186 */ HB_P_LINEOFFSET, 6,	/* 389 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00191 */ HB_P_LINEOFFSET, 8,	/* 391 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'H', 'Q', 0, 
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00227) */
/* 00222 */ HB_P_LINEOFFSET, 9,	/* 392 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00227 */ HB_P_LINEOFFSET, 11,	/* 394 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 59, 0,	/* M_NUMEROCAIXA */
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00260) */
/* 00255 */ HB_P_LINEOFFSET, 12,	/* 395 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00260 */ HB_P_LINEOFFSET, 14,	/* 397 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_PUSHMEMVAR, 45, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00294) */
/* 00289 */ HB_P_LINEOFFSET, 15,	/* 398 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00294 */ HB_P_LINEOFFSET, 17,	/* 400 */
	HB_P_PUSHSYMNEAR, 50,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00306 */ HB_P_LINEOFFSET, 18,	/* 401 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00312 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CRIA_TEFTXT )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00030 */ HB_P_LINEOFFSET, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00060 */ HB_P_LINEOFFSET, 2,	/* 407 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00107 */ HB_P_LINEOFFSET, 3,	/* 408 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 00175) */
/* 00138 */ HB_P_LINEOFFSET, 4,	/* 409 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00175 */ HB_P_LINEOFFSET, 6,	/* 411 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 61, 0,	/* ARQTEF */
/* 00202 */ HB_P_LINEOFFSET, 7,	/* 412 */
	HB_P_PUSHSYMNEAR, 62,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* ARQTEF */
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 47, 0,	/* NHANDLE */
/* 00216 */ HB_P_LINEOFFSET, 8,	/* 413 */
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 00271) */
/* 00226 */ HB_P_LINEOFFSET, 9,	/* 414 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'C', 'r', 'i', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'T', 'E', 'F', ' ', '-', ' ', 'A', 'T', 'V', 0, 
	HB_P_DOSHORT, 1,
/* 00264 */ HB_P_LINEOFFSET, 10,	/* 415 */
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00271 */ HB_P_LINEOFFSET, 12,	/* 417 */
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00278 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PEGA_TEXTOTEF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 165, 1,	/* 421 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00038 */ HB_P_LINEOFFSET, 2,	/* 423 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00068 */ HB_P_LINEOFFSET, 3,	/* 424 */
	HB_P_PUSHLOCALNEAR, 1,	/* TIPO */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00082) */
/* 00076 */ HB_P_LINEOFFSET, 4,	/* 425 */
	HB_P_LOCALNEARSETINT, 1, 1, 0,	/* TIPO 1*/
/* 00082 */ HB_P_LINEOFFSET, 6,	/* 427 */
	HB_P_PUSHLOCALNEAR, 1,	/* TIPO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00119) */
/* 00090 */ HB_P_LINEOFFSET, 7,	/* 428 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', 's', 't', 's', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 00146) */
/* 00119 */ HB_P_LINEOFFSET, 9,	/* 430 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* M_ARQTEF */
/* 00146 */ HB_P_LINEOFFSET, 11,	/* 432 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 63, 0,	/* CONTA */
/* 00152 */ HB_P_LINEOFFSET, 12,	/* 433 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_POPVARIABLE, 64, 0,	/* TEMPOXX */
/* 00159 */ HB_P_LINEOFFSET, 14,	/* 435 */
	HB_P_PUSHLOCALNEAR, 1,	/* TIPO */
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00203) */
/* 00167 */ HB_P_LINEOFFSET, 15,	/* 436 */
	HB_P_PUSHSYMNEAR, 65,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00177 */ HB_P_LINEOFFSET, 16,	/* 437 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 00196) */
/* 00189 */ HB_P_LINEOFFSET, 17,	/* 438 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMPNEAR, 107,	/* 107 (abs: 00301) */
/* 00196 */ HB_P_LINEOFFSET, 19,	/* 440 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMPNEAR, 100,	/* 100 (abs: 00301) */
/* 00203 */ HB_P_LINEOFFSET, 23,	/* 444 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00222) */
/* 00215 */ HB_P_LINEOFFSET, 24,	/* 445 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMPNEAR, 81,	/* 81 (abs: 00301) */
/* 00222 */ HB_P_LINEOFFSET, 27,	/* 448 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', ' ', 'E', 's', 'p', 'e', 'r', 'a', 'n', 'd', 'o', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 'd', 'o', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', '.', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00278 */ HB_P_LINEOFFSET, 29,	/* 450 */
	HB_P_PUSHSYMNEAR, 65,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00289 */ HB_P_LINEOFFSET, 30,	/* 451 */
	HB_P_PUSHVARIABLE, 63, 0,	/* CONTA */
	HB_P_INC,
	HB_P_POPVARIABLE, 63, 0,	/* CONTA */
	HB_P_JUMP, 117, 255,	/* -139 (abs: 00159) */
/* 00301 */ HB_P_LINEOFFSET, 32,	/* 453 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00307 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( ATV_OK )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 201, 1,	/* 457 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 458 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 's', 'e', ' ', 'o', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'e', 's', 't', 'a', 'r', ' ', 'A', 'T', 'I', 'V', 'O', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00061 */ HB_P_LINEOFFSET, 3,	/* 460 */
	HB_P_PUSHSYMNEAR, 52,	/* MANDA_ATV */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 00077) */
/* 00070 */ HB_P_LINEOFFSET, 4,	/* 461 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
	HB_P_JUMPNEAR, 119,	/* 119 (abs: 00194) */
/* 00077 */ HB_P_LINEOFFSET, 7,	/* 464 */
	HB_P_PUSHSYMNEAR, 38,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'T', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 104,	/* 104 (abs: 00194) */
/* 00092 */ HB_P_LINEOFFSET, 8,	/* 465 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	'E', 'r', 'r', 'o', ' ', 'a', 'o', ' ', 't', 'e', 'n', 't', 'a', 'r', ' ', 'c', 'o', 'm', 'u', 'n', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', '!', ' ', ' ', 'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'T', 'E', 'F', ' ', 'n', 'a', 'o', ' ', 'e', 's', 't', 'a', ' ', 'a', 't', 'i', 'v', 'o', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00182 */ HB_P_LINEOFFSET, 9,	/* 466 */
	HB_P_PUSHSYMNEAR, 40,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00189 */ HB_P_LINEOFFSET, 10,	/* 467 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00194 */ HB_P_LINEOFFSET, 14,	/* 471 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00200 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MANDA_CNF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 222, 1,	/* 478 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'G', 'e', 'r', 'a', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00045 */ HB_P_LINEOFFSET, 1,	/* 479 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* ARQTEF */
/* 00071 */ HB_P_LINEOFFSET, 2,	/* 480 */
	HB_P_PUSHSYMNEAR, 62,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* NHANDLE */
/* 00082 */ HB_P_LINEOFFSET, 3,	/* 481 */
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 00198) */
/* 00091 */ HB_P_LINEOFFSET, 4,	/* 482 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 93,	/* 93 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'C', 'N', 'F', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00193 */ HB_P_LINEOFFSET, 5,	/* 483 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00198 */ HB_P_LINEOFFSET, 7,	/* 485 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00236) */
/* 00231 */ HB_P_LINEOFFSET, 8,	/* 486 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00236 */ HB_P_LINEOFFSET, 10,	/* 488 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 49, 0,	/* M_TEF_NUM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00271) */
/* 00266 */ HB_P_LINEOFFSET, 11,	/* 489 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00271 */ HB_P_LINEOFFSET, 13,	/* 491 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00306) */
/* 00301 */ HB_P_LINEOFFSET, 14,	/* 492 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00306 */ HB_P_LINEOFFSET, 16,	/* 494 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00341) */
/* 00336 */ HB_P_LINEOFFSET, 17,	/* 495 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00341 */ HB_P_LINEOFFSET, 19,	/* 497 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00376) */
/* 00371 */ HB_P_LINEOFFSET, 20,	/* 498 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00376 */ HB_P_LINEOFFSET, 22,	/* 500 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00412) */
/* 00407 */ HB_P_LINEOFFSET, 23,	/* 501 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00412 */ HB_P_LINEOFFSET, 25,	/* 503 */
	HB_P_PUSHSYMNEAR, 50,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 51, 0,	/* OK */
/* 00424 */ HB_P_LINEOFFSET, 26,	/* 504 */
	HB_P_PUSHVARIABLE, 51, 0,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00431 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( FECHA_TEFTXT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 253, 1,	/* 509 */
	HB_P_PUSHSYMNEAR, 21,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* LFECHA_OK */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 510 */
	HB_P_PUSHSYMNEAR, 65,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 233, 63, 10, 1,	/* 0.8, 10, 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00035 */ HB_P_LINEOFFSET, 2,	/* 511 */
	HB_P_PUSHLOCALNEAR, 2,	/* LFECHA_OK */
	HB_P_JUMPTRUENEAR, 69,	/* 69 (abs: 00108) */
/* 00041 */ HB_P_LINEOFFSET, 3,	/* 512 */
	HB_P_PUSHSYMNEAR, 67,	/* FERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 00108) */
/* 00052 */ HB_P_LINEOFFSET, 4,	/* 513 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'C', 'r', 'i', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 68,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* FERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00103 */ HB_P_LINEOFFSET, 5,	/* 514 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00108 */ HB_P_LINEOFFSET, 8,	/* 517 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_POPVARIABLE, 69, 0,	/* NVEZES */
/* 00115 */ HB_P_LINEOFFSET, 10,	/* 519 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 00183) */
/* 00146 */ HB_P_LINEOFFSET, 11,	/* 520 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00183 */ HB_P_LINEOFFSET, 13,	/* 522 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 70, 0,	/* NRET */
/* 00248 */ HB_P_LINEOFFSET, 14,	/* 523 */
	HB_P_PUSHSYMNEAR, 65,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHDOUBLE, 102, 102, 102, 102, 102, 102, 230, 63, 10, 1,	/* 0.7, 10, 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00268 */ HB_P_LINEOFFSET, 15,	/* 524 */
	HB_P_PUSHVARIABLE, 70, 0,	/* NRET */
	HB_P_JUMPTRUE, 158, 0,	/* 158 (abs: 00431) */
/* 00276 */ HB_P_LINEOFFSET, 16,	/* 525 */
	HB_P_PUSHVARIABLE, 69, 0,	/* NVEZES */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 136, 0,	/* 136 (abs: 00419) */
/* 00286 */ HB_P_LINEOFFSET, 17,	/* 526 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 82,	/* 82 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'r', 'e', 'n', 'o', 'm', 'e', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'o', 'r', 'i', 'g', 'i', 'n', 'a', 'l', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00377 */ HB_P_LINEOFFSET, 18,	/* 527 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00414 */ HB_P_LINEOFFSET, 19,	/* 528 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00419 */ HB_P_LINEOFFSET, 21,	/* 530 */
	HB_P_PUSHVARIABLE, 69, 0,	/* NVEZES */
	HB_P_DEC,
	HB_P_POPVARIABLE, 69, 0,	/* NVEZES */
	HB_P_JUMP, 199, 254,	/* -313 (abs: 00115) */
/* 00431 */ HB_P_LINEOFFSET, 25,	/* 534 */
	HB_P_PUSHSYMNEAR, 21,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00460 */ HB_P_LINEOFFSET, 26,	/* 535 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 00530) */
/* 00491 */ HB_P_LINEOFFSET, 27,	/* 536 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 188,	/* -68 (abs: 00460) */
/* 00530 */ HB_P_LINEOFFSET, 31,	/* 540 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00535 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GRAVA_CAMPO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 31, 2,	/* 543 */
	HB_P_LOCALNEARSETSTR, 5, 3, 0,	/* CRLFG 3*/
	13, 10, 0, 
/* 00013 */ HB_P_LINEOFFSET, 1,	/* 544 */
	HB_P_PUSHSYMNEAR, 55,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NFILEHANDLE */
	HB_P_PUSHLOCALNEAR, 2,	/* CCAMPO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CCONTEUDO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* CRLFG */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 71, 0,	/* NBYTES */
/* 00040 */ HB_P_LINEOFFSET, 2,	/* 545 */
	HB_P_PUSHVARIABLE, 71, 0,	/* NBYTES */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 73,	/* 73 (abs: 00120) */
/* 00049 */ HB_P_LINEOFFSET, 3,	/* 546 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'g', 'r', 'a', 'v', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'o', 'n', 't', 'e', 'u', 'd', 'o', ' ', 'd', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* TIPO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'!', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00115 */ HB_P_LINEOFFSET, 4,	/* 547 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00120 */ HB_P_LINEOFFSET, 6,	/* 549 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00125 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( TRATA_TEF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 47, 2,	/* 559 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 4,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 560 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 3,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* CRLF */
	HB_P_PUSHSYMNEAR, 2,	/* TEF_VALOR */
	HB_P_PUSHSYMNEAR, 49,	/* M_TEF_NUM */
	HB_P_PUSHSYMNEAR, 42,	/* M_ARQTEF */
	HB_P_PUSHSYMNEAR, 26,	/* M_TEF_NOMREDE */
	HB_P_PUSHSYMNEAR, 31,	/* M_TEF_NUMTRA */
	HB_P_PUSHSYMNEAR, 34,	/* M_TEF_FINALIZA */
	HB_P_DOSHORT, 7,
	HB_P_POPVARIABLE, 2, 0,	/* TEF_VALOR */
	HB_P_POPVARIABLE, 1, 0,	/* CRLF */
/* 00042 */ HB_P_LINEOFFSET, 3,	/* 562 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_POPVARIABLE, 59, 0,	/* M_NUMEROCAIXA */
/* 00053 */ HB_P_LINEOFFSET, 4,	/* 563 */
	HB_P_PUSHVARIABLE, 59, 0,	/* M_NUMEROCAIXA */
	HB_P_POPVARIABLE, 49, 0,	/* M_TEF_NUM */
/* 00061 */ HB_P_LINEOFFSET, 5,	/* 564 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 42, 0,	/* M_ARQTEF */
/* 00073 */ HB_P_LINEOFFSET, 6,	/* 565 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
/* 00085 */ HB_P_LINEOFFSET, 7,	/* 566 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
/* 00097 */ HB_P_LINEOFFSET, 8,	/* 567 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
/* 00109 */ HB_P_LINEOFFSET, 9,	/* 568 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00123) */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00191) */
/* 00125 */ HB_P_LINEOFFSET, 10,	/* 569 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NVALORCARTAO 0*/
/* 00131 */ HB_P_LINEOFFSET, 11,	/* 570 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'a', '!', ' ', '[', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00186 */ HB_P_LINEOFFSET, 12,	/* 571 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00191 */ HB_P_LINEOFFSET, 14,	/* 573 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
/* 00198 */ HB_P_LINEOFFSET, 15,	/* 574 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_POPMEMVAR, 6, 0,	/* DOC_CDREDE */
/* 00207 */ HB_P_LINEOFFSET, 19,	/* 578 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00236 */ HB_P_LINEOFFSET, 20,	/* 579 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00266 */ HB_P_LINEOFFSET, 21,	/* 580 */
	HB_P_PUSHSYMNEAR, 66,	/* ATV_OK */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00280) */
/* 00275 */ HB_P_LINEOFFSET, 22,	/* 581 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00280 */ HB_P_LINEOFFSET, 24,	/* 583 */
	HB_P_PUSHSYMNEAR, 56,	/* MANDA_CRT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00287 */ HB_P_LINEOFFSET, 25,	/* 584 */
	HB_P_PUSHSYMNEAR, 43,	/* CHECK_CRT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 86,	/* 86 (abs: 00380) */
/* 00296 */ HB_P_LINEOFFSET, 26,	/* 585 */
	HB_P_PUSHSYMNEAR, 14,	/* CRITICA_CRT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00310) */
/* 00305 */ HB_P_LINEOFFSET, 27,	/* 586 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00310 */ HB_P_LINEOFFSET, 30,	/* 589 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 00373) */
/* 00325 */ HB_P_LINEOFFSET, 31,	/* 590 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00373 */ HB_P_LINEOFFSET, 33,	/* 592 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 4,	/* OK */
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 00396) */
/* 00380 */ HB_P_LINEOFFSET, 36,	/* 595 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'N', 'a', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 00396 */ HB_P_LINEOFFSET, 38,	/* 597 */
	HB_P_PUSHSYMNEAR, 12,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 00406 */ HB_P_LINEOFFSET, 39,	/* 598 */
	HB_P_PUSHSYMNEAR, 12,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00413 */ HB_P_LINEOFFSET, 40,	/* 599 */
	HB_P_PUSHLOCALNEAR, 4,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00419 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PADM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 94, 2,	/* 606 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 607 */
	HB_P_PUSHSYMNEAR, 3,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* MTP_CARTAO */
	HB_P_DOSHORT, 1,
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 608 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPC */
	HB_P_POPVARIABLE, 76, 0,	/* MTP_CARTAO */
/* 00025 */ HB_P_LINEOFFSET, 3,	/* 609 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_POPVARIABLE, 1, 0,	/* CRLF */
/* 00035 */ HB_P_LINEOFFSET, 4,	/* 610 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 49, 0,	/* M_TEF_NUM */
/* 00043 */ HB_P_LINEOFFSET, 5,	/* 611 */
	HB_P_ZERO,
	HB_P_POPMEMVAR, 77, 0,	/* TEF_VIA */
/* 00049 */ HB_P_LINEOFFSET, 6,	/* 612 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 78, 0,	/* TEF_DIE */
/* 00057 */ HB_P_LINEOFFSET, 7,	/* 613 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 79, 0,	/* TEF_DIR */
/* 00065 */ HB_P_LINEOFFSET, 8,	/* 614 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 80, 0,	/* TEF_DSE */
/* 00073 */ HB_P_LINEOFFSET, 9,	/* 615 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 81, 0,	/* TEF_DSR */
/* 00081 */ HB_P_LINEOFFSET, 10,	/* 616 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 82, 0,	/* TEF_UTI */
/* 00089 */ HB_P_LINEOFFSET, 11,	/* 617 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 42, 0,	/* M_ARQTEF */
/* 00097 */ HB_P_LINEOFFSET, 12,	/* 618 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
/* 00105 */ HB_P_LINEOFFSET, 13,	/* 619 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
/* 00113 */ HB_P_LINEOFFSET, 14,	/* 620 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
/* 00121 */ HB_P_LINEOFFSET, 15,	/* 621 */
	HB_P_PUSHSYMNEAR, 83,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 84, 0,	/* DAT_TEF */
/* 00134 */ HB_P_LINEOFFSET, 16,	/* 622 */
	HB_P_ZERO,
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
/* 00140 */ HB_P_LINEOFFSET, 17,	/* 623 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00169 */ HB_P_LINEOFFSET, 18,	/* 624 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00199 */ HB_P_LINEOFFSET, 21,	/* 627 */
	HB_P_PUSHSYMNEAR, 85,	/* VERI_TRANSACAO */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
/* 00208 */ HB_P_LINEOFFSET, 57,	/* 663 */
	HB_P_PUSHSYMNEAR, 66,	/* ATV_OK */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00220) */
/* 00217 */ HB_P_LINEOFFSET, 58,	/* 664 */
	HB_P_ENDPROC,
/* 00220 */ HB_P_LINEOFFSET, 74,	/* 680 */
	HB_P_PUSHSYMNEAR, 86,	/* MANDA_ADM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00227 */ HB_P_LINEOFFSET, 75,	/* 681 */
	HB_P_PUSHSYMNEAR, 87,	/* CHECK_ADM */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 181, 3,	/* 949 (abs: 01183) */
/* 00237 */ HB_P_LINEOFFSET, 76,	/* 682 */
	HB_P_PUSHSYMNEAR, 88,	/* CRITICA_ADM */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 55, 3,	/* 823 (abs: 01067) */
/* 00247 */ HB_P_LINEOFFSET, 78,	/* 684 */
	HB_P_PUSHSYMNEAR, 89,	/* IMP_ADM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LIMITE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00258 */ HB_P_LINEOFFSET, 80,	/* 686 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 00515) */
/* 00265 */ HB_P_LINEOFFSET, 81,	/* 687 */
	HB_P_PUSHSYMNEAR, 37,	/* MANDA_CNF */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00272 */ HB_P_LINEOFFSET, 82,	/* 688 */
	HB_P_PUSHSYMNEAR, 38,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 113,	/* 113 (abs: 00398) */
/* 00287 */ HB_P_LINEOFFSET, 83,	/* 689 */
	HB_P_PUSHSYMNEAR, 39,	/* MANDA_NCN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00294 */ HB_P_LINEOFFSET, 84,	/* 690 */
	HB_P_PUSHSYMNEAR, 38,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 83,	/* 83 (abs: 00390) */
/* 00309 */ HB_P_LINEOFFSET, 85,	/* 691 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 's', 'o', 'b', 'r', 'e', ' ', 'a', ' ', 'n', 'a', 'o', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00390 */ HB_P_LINEOFFSET, 87,	/* 693 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMP, 18, 3,	/* 786 (abs: 01181) */
/* 00398 */ HB_P_LINEOFFSET, 90,	/* 696 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 00507) */
/* 00424 */ HB_P_LINEOFFSET, 91,	/* 697 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 00507) */
/* 00453 */ HB_P_LINEOFFSET, 92,	/* 698 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00507 */ HB_P_LINEOFFSET, 96,	/* 702 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMP, 157, 2,	/* 669 (abs: 01181) */
/* 00515 */ HB_P_LINEOFFSET, 99,	/* 705 */
	HB_P_PUSHSYMNEAR, 90,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 's', 'p', 'o', 'n', 'd', 'e', '!', ' ', 'D', 'e', 's', 'e', 'j', 'a', ' ', 't', 'e', 'n', 't', 'a', 'r', ' ', 'n', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', '?', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 1,	/* OPC */
/* 00580 */ HB_P_LINEOFFSET, 100,	/* 706 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPC */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00595) */
	HB_P_PUSHLOCALNEAR, 1,	/* OPC */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 202, 1,	/* 458 (abs: 01053) */
/* 00598 */ HB_P_LINEOFFSET, 101,	/* 707 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 91, 0,	/* TXT_TRANSA */
/* 00609 */ HB_P_LINEOFFSET, 102,	/* 708 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 92, 0,	/* TXT_VALOR */
/* 00620 */ HB_P_LINEOFFSET, 103,	/* 709 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 93, 0,	/* TXT_REDE */
/* 00631 */ HB_P_LINEOFFSET, 104,	/* 710 */
	HB_P_PUSHSYMNEAR, 94,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 00669) */
/* 00643 */ HB_P_LINEOFFSET, 105,	/* 711 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'N', 167, ' ', 0, 
	HB_P_PUSHVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 91, 0,	/* TXT_TRANSA */
/* 00669 */ HB_P_LINEOFFSET, 107,	/* 713 */
	HB_P_PUSHSYMNEAR, 94,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 00701) */
/* 00681 */ HB_P_LINEOFFSET, 108,	/* 714 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'R', 'e', 'd', 'e', ' ', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 93, 0,	/* TXT_REDE */
/* 00701 */ HB_P_LINEOFFSET, 110,	/* 716 */
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 00751) */
/* 00710 */ HB_P_LINEOFFSET, 111,	/* 717 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 95,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPMEMVAR, 92, 0,	/* TXT_VALOR */
/* 00751 */ HB_P_LINEOFFSET, 113,	/* 719 */
	HB_P_PUSHSYMNEAR, 96,	/* MOSTRA_CANC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 91, 0,	/* TXT_TRANSA */
	HB_P_PUSHMEMVAR, 92, 0,	/* TXT_VALOR */
	HB_P_PUSHMEMVAR, 93, 0,	/* TXT_REDE */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 4,
/* 00781 */ HB_P_LINEOFFSET, 114,	/* 720 */
	HB_P_PUSHSYMNEAR, 39,	/* MANDA_NCN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00788 */ HB_P_LINEOFFSET, 115,	/* 721 */
	HB_P_PUSHSYMNEAR, 38,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 83,	/* 83 (abs: 00884) */
/* 00803 */ HB_P_LINEOFFSET, 116,	/* 722 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 's', 'o', 'b', 'r', 'e', ' ', 'a', ' ', 'n', 'a', 'o', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00884 */ HB_P_LINEOFFSET, 118,	/* 724 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 00993) */
/* 00910 */ HB_P_LINEOFFSET, 119,	/* 725 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 00993) */
/* 00939 */ HB_P_LINEOFFSET, 120,	/* 726 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00993 */ HB_P_LINEOFFSET, 123,	/* 729 */
	HB_P_PUSHSYMNEAR, 40,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01000 */ HB_P_LINEOFFSET, 124,	/* 730 */
	HB_P_PUSHSYMNEAR, 96,	/* MOSTRA_CANC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 91, 0,	/* TXT_TRANSA */
	HB_P_PUSHMEMVAR, 92, 0,	/* TXT_VALOR */
	HB_P_PUSHMEMVAR, 93, 0,	/* TXT_REDE */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'e', 'c', 'l', 'e', ' ', '[', 'E', 'n', 't', 'e', 'r', ']', ' ', 'p', '/', ' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 4,
/* 01048 */ HB_P_LINEOFFSET, 125,	/* 731 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01053 */ HB_P_LINEOFFSET, 127,	/* 733 */
	HB_P_PUSHSYMNEAR, 65,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 207, 252,	/* -817 (abs: 00247) */
/* 01067 */ HB_P_LINEOFFSET, 132,	/* 738 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 01176) */
/* 01093 */ HB_P_LINEOFFSET, 133,	/* 739 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01176) */
/* 01122 */ HB_P_LINEOFFSET, 134,	/* 740 */
	HB_P_PUSHSYMNEAR, 97,	/* ALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 01176 */ HB_P_LINEOFFSET, 137,	/* 743 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01188) */
/* 01183 */ HB_P_LINEOFFSET, 140,	/* 746 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 01188 */ HB_P_LINEOFFSET, 142,	/* 748 */
	HB_P_PUSHSYMNEAR, 40,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01195 */ HB_P_LINEOFFSET, 143,	/* 749 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'o', 'p', 'c', 'a', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 01231 */ HB_P_LINEOFFSET, 144,	/* 750 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01237 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( MANDA_ADM )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 242, 2,	/* 754 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'M', 'a', 'n', 'd', 'a', 'n', 'd', 'o', ' ', 's', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', ' ', 'A', 'D', 'M', ' ', 'p', 'a', 'r', 'a', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00055 */ HB_P_LINEOFFSET, 1,	/* 755 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00084 */ HB_P_LINEOFFSET, 2,	/* 756 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00114 */ HB_P_LINEOFFSET, 3,	/* 757 */
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 61, 0,	/* ARQTEF */
/* 00136 */ HB_P_LINEOFFSET, 4,	/* 758 */
	HB_P_PUSHSYMNEAR, 62,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* ARQTEF */
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 47, 0,	/* NHANDLE */
/* 00150 */ HB_P_LINEOFFSET, 5,	/* 759 */
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00211) */
/* 00160 */ HB_P_LINEOFFSET, 6,	/* 760 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'C', 'r', 'i', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'T', 'E', 'F', ' ', '-', ' ', 'A', 'D', 'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'k', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 2,
/* 00206 */ HB_P_LINEOFFSET, 7,	/* 761 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00211 */ HB_P_LINEOFFSET, 9,	/* 763 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'D', 'M', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00242) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00242 */ HB_P_LINEOFFSET, 10,	/* 764 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 49, 0,	/* M_TEF_NUM */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00270) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00270 */ HB_P_LINEOFFSET, 11,	/* 765 */
	HB_P_PUSHSYMNEAR, 48,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00299) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00299 */ HB_P_LINEOFFSET, 12,	/* 766 */
	HB_P_PUSHSYMNEAR, 50,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 51, 0,	/* OK */
/* 00312 */ HB_P_LINEOFFSET, 13,	/* 767 */
	HB_P_PUSHVARIABLE, 51, 0,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00319 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( CHECK_ADM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 3, 3,	/* 771 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 772 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'h', 'e', 'c', 'a', 'n', 'd', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'o', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', '[', 'A', 'D', 'M', ']', 0, 
	HB_P_DOSHORT, 1,
/* 00056 */ HB_P_LINEOFFSET, 2,	/* 773 */
	HB_P_PUSHSYMNEAR, 41,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00071) */
/* 00066 */ HB_P_LINEOFFSET, 3,	/* 774 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00071 */ HB_P_LINEOFFSET, 5,	/* 776 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 00145) */
/* 00077 */ HB_P_LINEOFFSET, 6,	/* 777 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 00145) */
/* 00092 */ HB_P_LINEOFFSET, 7,	/* 778 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_EQUAL,
	HB_P_DOSHORT, 1,
/* 00140 */ HB_P_LINEOFFSET, 8,	/* 779 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00145 */ HB_P_LINEOFFSET, 11,	/* 782 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00167) */
/* 00151 */ HB_P_LINEOFFSET, 12,	/* 783 */
	HB_P_PUSHSYMNEAR, 41,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00167) */
/* 00162 */ HB_P_LINEOFFSET, 13,	/* 784 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00167 */ HB_P_LINEOFFSET, 16,	/* 787 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00173 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( CRITICA_ADM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 23, 3,	/* 791 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* MPOS 0*/
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 792 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00044 */ HB_P_LINEOFFSET, 2,	/* 793 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00074 */ HB_P_LINEOFFSET, 4,	/* 795 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 129, 1,	/* 385 (abs: 00488) */
/* 00106 */ HB_P_LINEOFFSET, 5,	/* 796 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'c', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00186 */ HB_P_LINEOFFSET, 6,	/* 797 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 00288) */
/* 00218 */ HB_P_LINEOFFSET, 7,	/* 798 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 203, 0,	/* 203 (abs: 00488) */
/* 00288 */ HB_P_LINEOFFSET, 8,	/* 799 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '2', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 71,	/* 71 (abs: 00389) */
/* 00320 */ HB_P_LINEOFFSET, 9,	/* 800 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '2', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 101,	/* 101 (abs: 00488) */
/* 00389 */ HB_P_LINEOFFSET, 10,	/* 801 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '3', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 69,	/* 69 (abs: 00488) */
/* 00421 */ HB_P_LINEOFFSET, 11,	/* 802 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '3', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00488 */ HB_P_LINEOFFSET, 14,	/* 805 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00529 */ HB_P_LINEOFFSET, 15,	/* 806 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_POPLOCALNEAR, 6,	/* LINHAS */
/* 00539 */ HB_P_LINEOFFSET, 16,	/* 807 */
	HB_P_PUSHSYMNEAR, 19,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* LINHAS */
/* 00577 */ HB_P_LINEOFFSET, 17,	/* 808 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_INTPOS */
/* 00584 */ HB_P_LINEOFFSET, 18,	/* 809 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 6,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00663) */
/* 00597 */ HB_P_LINEOFFSET, 19,	/* 810 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00639 */ HB_P_LINEOFFSET, 20,	/* 811 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00655 */ HB_P_LINEOFFSET, 21,	/* 812 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 00590) */
/* 00663 */ HB_P_LINEOFFSET, 22,	/* 813 */
	HB_P_PUSHSYMNEAR, 21,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00692 */ HB_P_LINEOFFSET, 23,	/* 814 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00779) */
/* 00705 */ HB_P_LINEOFFSET, 24,	/* 815 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 132, 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00774 */ HB_P_LINEOFFSET, 25,	/* 816 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00779 */ HB_P_LINEOFFSET, 27,	/* 818 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00819 */ HB_P_LINEOFFSET, 28,	/* 819 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 00869) */
/* 00827 */ HB_P_LINEOFFSET, 29,	/* 820 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'p', 'o', ' ', 'N', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', '[', '0', '0', '1', ']', 0, 
	HB_P_DOSHORT, 1,
/* 00864 */ HB_P_LINEOFFSET, 30,	/* 821 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00869 */ HB_P_LINEOFFSET, 32,	/* 823 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* M_TEF_NUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00972) */
/* 00899 */ HB_P_LINEOFFSET, 33,	/* 824 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'O', ' ', 'C', 'o', 'n', 't', 'e', 'u', 'd', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '0', '1', ']', ' ', 130, ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 't', 'e', ' ', 'd', 'o', ' ', 'C', 'o', 'n', 't', 'e', 'u', 'd', 'o', ' ', 'E', 'n', 'v', 'i', 'a', 'd', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00967 */ HB_P_LINEOFFSET, 34,	/* 825 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00972 */ HB_P_LINEOFFSET, 37,	/* 828 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '9', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01012 */ HB_P_LINEOFFSET, 38,	/* 829 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01062) */
/* 01020 */ HB_P_LINEOFFSET, 39,	/* 830 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'p', 'o', ' ', 'N', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', '[', '0', '0', '9', ']', 0, 
	HB_P_DOSHORT, 1,
/* 01057 */ HB_P_LINEOFFSET, 40,	/* 831 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01062 */ HB_P_LINEOFFSET, 42,	/* 833 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 166, 0,	/* 166 (abs: 01252) */
/* 01089 */ HB_P_LINEOFFSET, 43,	/* 834 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01129 */ HB_P_LINEOFFSET, 44,	/* 835 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01163) */
/* 01137 */ HB_P_LINEOFFSET, 45,	/* 836 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 01247) */
/* 01163 */ HB_P_LINEOFFSET, 47,	/* 838 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'A', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'n', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'a', 'c', 'e', 'i', 't', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'o', 'u', ' ', 'f', 'o', 'i', ' ', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'u', 's', 'u', 'a', 'r', 'i', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01247 */ HB_P_LINEOFFSET, 49,	/* 840 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01252 */ HB_P_LINEOFFSET, 52,	/* 843 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01292 */ HB_P_LINEOFFSET, 53,	/* 844 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01342) */
/* 01300 */ HB_P_LINEOFFSET, 54,	/* 845 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'p', 'o', ' ', 'N', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', '[', '0', '1', '0', ']', 0, 
	HB_P_DOSHORT, 1,
/* 01337 */ HB_P_LINEOFFSET, 55,	/* 846 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01342 */ HB_P_LINEOFFSET, 57,	/* 848 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'A', 'M', 'E', 'X', '_', 'R', 'E', 'D', 'E', 'C', 'A', 'R', 'D', '_', 'V', 'I', 'S', 'A', 'N', 'E', 'T', '_', 'T', 'E', 'C', 'B', 'A', 'N', '_', 'H', 'I', 'P', 'E', 'R', 'C', 'A', 'R', 'D', '_', 'E', 'L', 'O', '_', 'V', 'I', 'S', 'A', 'E', 'L', 'E', 'T', 'R', 'O', 'N', '_', 'C', 'I', 'E', 'L', 'O', 0, 
	HB_P_POPVARIABLE, 29, 0,	/* NOMEREDE */
/* 01410 */ HB_P_LINEOFFSET, 58,	/* 849 */
	HB_P_PUSHSYMNEAR, 27,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
/* 01437 */ HB_P_LINEOFFSET, 60,	/* 851 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01477 */ HB_P_LINEOFFSET, 61,	/* 852 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01509) */
/* 01485 */ HB_P_LINEOFFSET, 62,	/* 853 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 01517) */
/* 01509 */ HB_P_LINEOFFSET, 64,	/* 855 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
/* 01517 */ HB_P_LINEOFFSET, 66,	/* 857 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01557 */ HB_P_LINEOFFSET, 67,	/* 858 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 01657) */
/* 01565 */ HB_P_LINEOFFSET, 68,	/* 859 */
	HB_P_PUSHSYMNEAR, 94,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 01635) */
/* 01586 */ HB_P_LINEOFFSET, 69,	/* 860 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01630 */ HB_P_LINEOFFSET, 70,	/* 861 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01635 */ HB_P_LINEOFFSET, 72,	/* 863 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
/* 01657 */ HB_P_LINEOFFSET, 74,	/* 865 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '8', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01697 */ HB_P_LINEOFFSET, 75,	/* 866 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01747) */
/* 01705 */ HB_P_LINEOFFSET, 76,	/* 867 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'p', 'o', ' ', 'N', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', '[', '0', '2', '8', ']', 0, 
	HB_P_DOSHORT, 1,
/* 01742 */ HB_P_LINEOFFSET, 77,	/* 868 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01747 */ HB_P_LINEOFFSET, 79,	/* 870 */
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 168, 0,	/* 168 (abs: 01936) */
/* 01771 */ HB_P_LINEOFFSET, 80,	/* 871 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01811 */ HB_P_LINEOFFSET, 81,	/* 872 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01845) */
/* 01819 */ HB_P_LINEOFFSET, 82,	/* 873 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 88,	/* 88 (abs: 01931) */
/* 01845 */ HB_P_LINEOFFSET, 84,	/* 875 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 77,	/* 77 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'd', 'o', ' ', 'C', 'o', 'm', 'p', 'r', 'o', 'v', 'a', 'n', 't', 'e', ' ', 130, ' ', 'Z', 'e', 'r', 'o', '!', ' ', 'N', 'a', 'o', ' ', 'H', 'a', 'v', 'e', 'r', 'a', ' ', 'C', 'u', 'p', 'o', 'm', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01931 */ HB_P_LINEOFFSET, 86,	/* 877 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01936 */ HB_P_LINEOFFSET, 89,	/* 880 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01976 */ HB_P_LINEOFFSET, 90,	/* 881 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 02010) */
/* 01984 */ HB_P_LINEOFFSET, 91,	/* 882 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 43,	/* 43 (abs: 02051) */
/* 02010 */ HB_P_LINEOFFSET, 93,	/* 884 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02051 */ HB_P_LINEOFFSET, 95,	/* 886 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02056 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MOSTRA_CANC )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 123, 3,	/* 891 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'a', 'n', 'c', 'e', 'l', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'a', ' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', 0, 
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CREDE */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CTRANSACAO */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* CVALOR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* CRODAPE */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 99, 0,	/* TEXTO */
/* 00085 */ HB_P_LINEOFFSET, 1,	/* 892 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 99, 0,	/* TEXTO */
	HB_P_DOSHORT, 1,
/* 00095 */ HB_P_LINEOFFSET, 2,	/* 893 */
	HB_P_ENDPROC
/* 00098 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( BLOQ_TECLADO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 129, 3,	/* 897 */
	HB_P_PUSHLOCALNEAR, 1,	/* MBLOQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00053) */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 898 */
	HB_P_PUSHSYMNEAR, 100,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', 'C', 'B', 'r', '.', 'B', 'l', 'o', 'c', 'k', 'I', 'n', 'p', 'u', 't', 0, 
	HB_P_TRUE,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 00089) */
/* 00053 */ HB_P_LINEOFFSET, 3,	/* 900 */
	HB_P_PUSHSYMNEAR, 100,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', 'C', 'B', 'r', '.', 'B', 'l', 'o', 'c', 'k', 'I', 'n', 'p', 'u', 't', 0, 
	HB_P_FALSE,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 00089 */ HB_P_LINEOFFSET, 5,	/* 902 */
	HB_P_ENDPROC
/* 00092 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( IMP_COMPROVANTE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 140, 3,	/* 908 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 5,	/* IMPRIME_OK */
	HB_P_LOCALNEARSETSTR, 13, 1, 0,	/* TEXTO_TEF 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 14, 1, 0,	/* TEXTO_TEF1 1*/
	0, 
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* MVIA 1*/
/* 00023 */ HB_P_LINEOFFSET, 1,	/* 909 */
	HB_P_LOCALNEARSETINT, 6, 48, 0,	/* NCARAC 48*/
/* 00029 */ HB_P_LINEOFFSET, 2,	/* 910 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00058 */ HB_P_LINEOFFSET, 3,	/* 911 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00088 */ HB_P_LINEOFFSET, 4,	/* 912 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 82,	/* 82 (abs: 00199) */
/* 00119 */ HB_P_LINEOFFSET, 5,	/* 913 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'c', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00199 */ HB_P_LINEOFFSET, 7,	/* 915 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* LIN */
/* 00240 */ HB_P_LINEOFFSET, 8,	/* 916 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_POPLOCALNEAR, 9,	/* LINHAS */
/* 00250 */ HB_P_LINEOFFSET, 9,	/* 917 */
	HB_P_PUSHSYMNEAR, 19,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 9,	/* LINHAS */
/* 00288 */ HB_P_LINEOFFSET, 10,	/* 918 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_INTPOS */
/* 00295 */ HB_P_LINEOFFSET, 11,	/* 919 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 9,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00374) */
/* 00308 */ HB_P_LINEOFFSET, 12,	/* 920 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* LIN */
/* 00350 */ HB_P_LINEOFFSET, 13,	/* 921 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00366 */ HB_P_LINEOFFSET, 14,	/* 922 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 00301) */
/* 00374 */ HB_P_LINEOFFSET, 15,	/* 923 */
	HB_P_PUSHSYMNEAR, 21,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00403 */ HB_P_LINEOFFSET, 16,	/* 924 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00490) */
/* 00416 */ HB_P_LINEOFFSET, 17,	/* 925 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00485 */ HB_P_LINEOFFSET, 18,	/* 926 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00490 */ HB_P_LINEOFFSET, 20,	/* 928 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 'o', ' ', 'c', 'o', 'm', 'p', 'r', 'o', 'v', 'a', 'n', 't', 'e', ',', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00536 */ HB_P_LINEOFFSET, 21,	/* 929 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '9', '-', '0', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 103, 0,	/* MPOS */
/* 00577 */ HB_P_LINEOFFSET, 22,	/* 930 */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 149, 1,	/* 405 (abs: 00989) */
/* 00587 */ HB_P_LINEOFFSET, 23,	/* 931 */
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 35, 1,	/* 291 (abs: 00884) */
/* 00596 */ HB_P_LINEOFFSET, 24,	/* 932 */
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 00611 */ HB_P_LINEOFFSET, 25,	/* 933 */
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', 'a', '.', ' ', 'V', 'i', 'a', 0, 
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 00652 */ HB_P_LINEOFFSET, 26,	/* 934 */
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'O', 'O', ' ', 'd', 'o', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'v', 'i', 'n', 'c', 'u', 'l', 'a', 'd', 'o', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 00710 */ HB_P_LINEOFFSET, 27,	/* 935 */
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'c', 'o', 'm', 'p', 'r', 'a', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 95,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NVALOR */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 00782 */ HB_P_LINEOFFSET, 28,	/* 936 */
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 95,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NVALOR */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 00854 */ HB_P_LINEOFFSET, 29,	/* 937 */
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 00869 */ HB_P_LINEOFFSET, 30,	/* 938 */
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 00884 */ HB_P_LINEOFFSET, 33,	/* 941 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* C 0*/
/* 00890 */ HB_P_LINEOFFSET, 34,	/* 942 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* C 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 83,	/* 83 (abs: 00989) */
/* 00908 */ HB_P_LINEOFFSET, 35,	/* 943 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00934) */
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 00983) */
/* 00934 */ HB_P_LINEOFFSET, 38,	/* 946 */
	HB_P_PUSHSYMNEAR, 104,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 105,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 12,	/* CLINHA */
/* 00972 */ HB_P_LINEOFFSET, 39,	/* 947 */
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHLOCALNEAR, 12,	/* CLINHA */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 00981 */ HB_P_LINEOFFSET, 40,	/* 948 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* C 1*/
	HB_P_JUMPNEAR, 165,	/* -91 (abs: 00896) */
/* 00989 */ HB_P_LINEOFFSET, 42,	/* 950 */
	HB_P_LOCALNEARSETSTR, 14, 1, 0,	/* TEXTO_TEF1 1*/
	0, 
/* 00996 */ HB_P_LINEOFFSET, 43,	/* 951 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 244, 1,	/* 500 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 01074) */
/* 01011 */ HB_P_LINEOFFSET, 44,	/* 952 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHINT, 245, 1,	/* 501 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 12, 254,	/* -500*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* TEXTO_TEF1 */
/* 01047 */ HB_P_LINEOFFSET, 45,	/* 953 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_ONE,
	HB_P_PUSHINT, 243, 1,	/* 499 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TEXTO_TEF */
/* 01074 */ HB_P_LINEOFFSET, 47,	/* 955 */
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* MVIA 1*/
/* 01080 */ HB_P_LINEOFFSET, 48,	/* 956 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALOR */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01096) */
/* 01088 */ HB_P_LINEOFFSET, 49,	/* 957 */
	HB_P_LOCALNEARSETINT, 15, 2, 0,	/* MVIA 2*/
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 01102) */
/* 01096 */ HB_P_LINEOFFSET, 51,	/* 959 */
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* MVIA 1*/
/* 01102 */ HB_P_LINEOFFSET, 53,	/* 961 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TEXTO_TEF1 */
	HB_P_DOSHORT, 1,
/* 01111 */ HB_P_LINEOFFSET, 54,	/* 962 */
	HB_P_PUSHSYMNEAR, 106,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 107, 0,	/* MHORA */
/* 01121 */ HB_P_LINEOFFSET, 55,	/* 963 */
	HB_P_PUSHSYMNEAR, 104,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 107, 0,	/* MHORA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 104,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 107, 0,	/* MHORA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 107, 0,	/* MHORA */
/* 01170 */ HB_P_LINEOFFSET, 56,	/* 964 */
	HB_P_PUSHVARIABLE, 108, 0,	/* MDOCUMENTO */
	HB_P_POPVARIABLE, 109, 0,	/* NCUPOM */
/* 01178 */ HB_P_LINEOFFSET, 57,	/* 965 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_PUSHLOCALNEAR, 14,	/* TEXTO_TEF1 */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'O', 'M', 'P', 'R', 'O', 'V', 'A', 'N', 'T', 'E', ' ', 'D', 'E', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', 0, 
	HB_P_DOSHORT, 3,
/* 01216 */ HB_P_LINEOFFSET, 58,	/* 966 */
	HB_P_PUSHSYMNEAR, 100,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'E', 'C', 'F', '.', 'C', 'u', 'p', 'o', 'm', 'V', 'i', 'n', 'c', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PUSHLOCALNEAR, 2,	/* CCODFORMAPAGTO */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALOR */
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01258 */ HB_P_LINEOFFSET, 59,	/* 967 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 110, 0,	/* CO */
/* 01264 */ HB_P_LINEOFFSET, 60,	/* 968 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 110, 0,	/* CO */
	HB_P_PUSHVARIABLE, 110, 0,	/* CO */
	HB_P_PUSHLOCALNEAR, 15,	/* MVIA */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 213, 0,	/* 213 (abs: 01489) */
/* 01279 */ HB_P_LINEOFFSET, 61,	/* 969 */
	HB_P_PUSHSYMNEAR, 100,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'E', 'C', 'F', '.', ' ', 'L', 'i', 'n', 'h', 'a', 'C', 'u', 'p', 'o', 'm', 'V', 'i', 'n', 'c', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 01325 */ HB_P_LINEOFFSET, 63,	/* 971 */
	HB_P_PUSHSYMNEAR, 94,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TEXTO_TEF1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 01382) */
/* 01336 */ HB_P_LINEOFFSET, 64,	/* 972 */
	HB_P_PUSHSYMNEAR, 100,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'E', 'C', 'F', '.', ' ', 'L', 'i', 'n', 'h', 'a', 'C', 'u', 'p', 'o', 'm', 'V', 'i', 'n', 'c', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_PUSHLOCALNEAR, 14,	/* TEXTO_TEF1 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 01382 */ HB_P_LINEOFFSET, 67,	/* 975 */
	HB_P_PUSHVARIABLE, 110, 0,	/* CO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 01477) */
/* 01391 */ HB_P_LINEOFFSET, 68,	/* 976 */
	HB_P_PUSHSYMNEAR, 100,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'E', 'C', 'F', '.', ' ', 'L', 'i', 'n', 'h', 'a', 'C', 'u', 'p', 'o', 'm', 'V', 'i', 'n', 'c', 'u', 'l', 'a', 'd', 'o', 0, 
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 01446 */ HB_P_LINEOFFSET, 70,	/* 978 */
	HB_P_PUSHSYMNEAR, 100,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'E', 'C', 'F', '.', 'C', 'o', 'r', 't', 'a', 'P', 'a', 'p', 'e', 'l', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_DOSHORT, 2,
/* 01477 */ HB_P_LINEOFFSET, 72,	/* 980 */
	HB_P_PUSHVARIABLE, 110, 0,	/* CO */
	HB_P_INC,
	HB_P_POPVARIABLE, 110, 0,	/* CO */
	HB_P_JUMP, 40, 255,	/* -216 (abs: 01270) */
/* 01489 */ HB_P_LINEOFFSET, 73,	/* 981 */
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'E', 'C', 'F', '.', 'F', 'e', 'c', 'h', 'a', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 0, 
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_DOSHORT, 2,
/* 01519 */ HB_P_LINEOFFSET, 75,	/* 983 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 111, 0,	/* OPERACOES */
/* 01531 */ HB_P_LINEOFFSET, 76,	/* 984 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'C', 'F', '.', 'N', 'u', 'm', 'G', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 111, 0,	/* OPERACOES */
/* 01563 */ HB_P_LINEOFFSET, 77,	/* 985 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 112, 0,	/* SREL */
/* 01575 */ HB_P_LINEOFFSET, 78,	/* 986 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 101,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'C', 'F', '.', 'N', 'u', 'm', 'G', 'R', 'G', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 112, 0,	/* SREL */
/* 01607 */ HB_P_LINEOFFSET, 171,	/* 1079 */
	HB_P_PUSHSYMNEAR, 40,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01614 */ HB_P_LINEOFFSET, 172,	/* 1080 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01619 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( IMP_ADM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 12, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 63, 4,	/* 1087 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 5,	/* IMPRIME_OK */
	HB_P_LOCALNEARSETSTR, 13, 1, 0,	/* TEXTO_TEF 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 14, 1, 0,	/* TEXTO_TEF1 1*/
	0, 
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* MVIA 1*/
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* CO 0*/
/* 00027 */ HB_P_LINEOFFSET, 1,	/* 1088 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 58,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 113,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 114,	/* MIMP_TIPO */
	HB_P_DOSHORT, 2,
	HB_P_POPVARIABLE, 114, 0,	/* MIMP_TIPO */
/* 00042 */ HB_P_LINEOFFSET, 4,	/* 1091 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 113, 0,	/* MTIPO_IMP */
/* 00051 */ HB_P_LINEOFFSET, 6,	/* 1093 */
	HB_P_LOCALNEARSETINT, 6, 48, 0,	/* NCARAC 48*/
/* 00057 */ HB_P_LINEOFFSET, 7,	/* 1094 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 82,	/* 82 (abs: 00168) */
/* 00088 */ HB_P_LINEOFFSET, 8,	/* 1095 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'c', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00168 */ HB_P_LINEOFFSET, 10,	/* 1097 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* LIN */
/* 00209 */ HB_P_LINEOFFSET, 11,	/* 1098 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_POPLOCALNEAR, 9,	/* LINHAS */
/* 00219 */ HB_P_LINEOFFSET, 12,	/* 1099 */
	HB_P_PUSHSYMNEAR, 19,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 9,	/* LINHAS */
/* 00257 */ HB_P_LINEOFFSET, 13,	/* 1100 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_INTPOS */
/* 00264 */ HB_P_LINEOFFSET, 14,	/* 1101 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 9,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00343) */
/* 00277 */ HB_P_LINEOFFSET, 15,	/* 1102 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* LIN */
/* 00319 */ HB_P_LINEOFFSET, 16,	/* 1103 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00335 */ HB_P_LINEOFFSET, 17,	/* 1104 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 00270) */
/* 00343 */ HB_P_LINEOFFSET, 18,	/* 1105 */
	HB_P_PUSHSYMNEAR, 21,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00372 */ HB_P_LINEOFFSET, 19,	/* 1106 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00459) */
/* 00385 */ HB_P_LINEOFFSET, 20,	/* 1107 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00454 */ HB_P_LINEOFFSET, 21,	/* 1108 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00459 */ HB_P_LINEOFFSET, 23,	/* 1110 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 'o', ' ', 'c', 'o', 'm', 'p', 'r', 'o', 'v', 'a', 'n', 't', 'e', ',', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00505 */ HB_P_LINEOFFSET, 24,	/* 1111 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '9', '-', '0', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 103, 0,	/* MPOS */
/* 00546 */ HB_P_LINEOFFSET, 25,	/* 1112 */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 00808) */
/* 00556 */ HB_P_LINEOFFSET, 26,	/* 1113 */
	HB_P_PUSHSYMNEAR, 115,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'O', 'M', 'P', 'A', 'D', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00597) */
/* 00592 */ HB_P_LINEOFFSET, 27,	/* 1114 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00597 */ HB_P_LINEOFFSET, 29,	/* 1116 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* CO 0*/
/* 00603 */ HB_P_LINEOFFSET, 30,	/* 1117 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* CO 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* CO */
	HB_P_PUSHLOCALNEAR, 15,	/* MVIA */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 00737) */
/* 00616 */ HB_P_LINEOFFSET, 31,	/* 1118 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* C 0*/
/* 00622 */ HB_P_LINEOFFSET, 32,	/* 1119 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* C 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 91,	/* 91 (abs: 00729) */
/* 00640 */ HB_P_LINEOFFSET, 33,	/* 1120 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00666) */
	HB_P_JUMPNEAR, 59,	/* 59 (abs: 00723) */
/* 00666 */ HB_P_LINEOFFSET, 36,	/* 1123 */
	HB_P_PUSHSYMNEAR, 116,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 117,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 118,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 104,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 105,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 00721 */ HB_P_LINEOFFSET, 37,	/* 1124 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* C 1*/
	HB_P_JUMPNEAR, 157,	/* -99 (abs: 00628) */
/* 00729 */ HB_P_LINEOFFSET, 38,	/* 1125 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* CO 1*/
	HB_P_JUMPNEAR, 130,	/* -126 (abs: 00609) */
/* 00737 */ HB_P_LINEOFFSET, 39,	/* 1126 */
	HB_P_PUSHSYMNEAR, 119,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00746 */ HB_P_LINEOFFSET, 40,	/* 1127 */
	HB_P_PUSHSYMNEAR, 120,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 120,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 120,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 00787 */ HB_P_LINEOFFSET, 41,	/* 1128 */
	HB_P_PUSHSYMNEAR, 121,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'O', 'M', 'P', 'A', 'D', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 00808 */ HB_P_LINEOFFSET, 43,	/* 1130 */
	HB_P_PUSHSYMNEAR, 40,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00815 */ HB_P_LINEOFFSET, 44,	/* 1131 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00820 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( APAGA_INTPOS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 112, 4,	/* 1136 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 129, 0,	/* 129 (abs: 00162) */
/* 00036 */ HB_P_LINEOFFSET, 1,	/* 1137 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 00162) */
/* 00070 */ HB_P_LINEOFFSET, 2,	/* 1138 */
	HB_P_PUSHSYMNEAR, 90,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'T', 'e', 'n', 't', 'a', 'r', ' ', 'N', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00162) */
	HB_P_JUMP, 100, 255,	/* -156 (abs: 00003) */
/* 00162 */ HB_P_LINEOFFSET, 7,	/* 1143 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', 'S', 'T', 'S', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 129, 0,	/* 129 (abs: 00320) */
/* 00194 */ HB_P_LINEOFFSET, 8,	/* 1144 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', 'S', 'T', 'S', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 00320) */
/* 00228 */ HB_P_LINEOFFSET, 9,	/* 1145 */
	HB_P_PUSHSYMNEAR, 90,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', 'S', 'T', 'S', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'T', 'e', 'n', 't', 'a', 'r', ' ', 'N', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00320) */
	HB_P_JUMP, 198, 254,	/* -314 (abs: 00003) */
/* 00320 */ HB_P_LINEOFFSET, 17,	/* 1153 */
	HB_P_ENDPROC
/* 00323 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PNCONF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 135, 4,	/* 1159 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 68,	/* 68 (abs: 00101) */
/* 00035 */ HB_P_LINEOFFSET, 1,	/* 1160 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', ' ', 'n', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'o', ' ', 'd', 'i', 'r', 'e', 't', 'o', 'r', 'i', 'o', ' ', 'i', 'n', 'd', 'i', 'c', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00096 */ HB_P_LINEOFFSET, 2,	/* 1161 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00101 */ HB_P_LINEOFFSET, 4,	/* 1163 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPVARIABLE, 123, 0,	/* LIN */
/* 00143 */ HB_P_LINEOFFSET, 5,	/* 1164 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 124, 0,	/* LINHA */
	HB_P_POPVARIABLE, 125, 0,	/* LINHAS */
/* 00153 */ HB_P_LINEOFFSET, 6,	/* 1165 */
	HB_P_PUSHSYMNEAR, 19,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 125, 0,	/* LINHAS */
/* 00192 */ HB_P_LINEOFFSET, 7,	/* 1166 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 126, 0,	/* M_INTPOS */
/* 00200 */ HB_P_LINEOFFSET, 8,	/* 1167 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 124, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 124, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 125, 0,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00288) */
/* 00215 */ HB_P_LINEOFFSET, 9,	/* 1168 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHVARIABLE, 124, 0,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPVARIABLE, 123, 0,	/* LIN */
/* 00259 */ HB_P_LINEOFFSET, 10,	/* 1169 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 126, 0,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 123, 0,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00277 */ HB_P_LINEOFFSET, 11,	/* 1170 */
	HB_P_PUSHVARIABLE, 124, 0,	/* LINHA */
	HB_P_INC,
	HB_P_POPVARIABLE, 124, 0,	/* LINHA */
	HB_P_JUMPNEAR, 176,	/* -80 (abs: 00206) */
/* 00288 */ HB_P_LINEOFFSET, 12,	/* 1171 */
	HB_P_PUSHSYMNEAR, 21,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00317 */ HB_P_LINEOFFSET, 13,	/* 1172 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 126, 0,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00405) */
/* 00331 */ HB_P_LINEOFFSET, 14,	/* 1173 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 132, 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00400 */ HB_P_LINEOFFSET, 15,	/* 1174 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00405 */ HB_P_LINEOFFSET, 17,	/* 1176 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_POPVARIABLE, 1, 0,	/* CRLF */
/* 00415 */ HB_P_LINEOFFSET, 18,	/* 1177 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 126, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 103, 0,	/* MPOS */
/* 00457 */ HB_P_LINEOFFSET, 19,	/* 1178 */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00492) */
/* 00466 */ HB_P_LINEOFFSET, 20,	/* 1179 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 126, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 49, 0,	/* M_TEF_NUM */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00500) */
/* 00492 */ HB_P_LINEOFFSET, 22,	/* 1181 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 49, 0,	/* M_TEF_NUM */
/* 00500 */ HB_P_LINEOFFSET, 24,	/* 1183 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 126, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '3', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 103, 0,	/* MPOS */
/* 00542 */ HB_P_LINEOFFSET, 25,	/* 1184 */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 00585) */
/* 00551 */ HB_P_LINEOFFSET, 26,	/* 1185 */
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 126, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00591) */
/* 00585 */ HB_P_LINEOFFSET, 28,	/* 1187 */
	HB_P_ZERO,
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
/* 00591 */ HB_P_LINEOFFSET, 30,	/* 1189 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 126, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 103, 0,	/* MPOS */
/* 00633 */ HB_P_LINEOFFSET, 31,	/* 1190 */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00673) */
/* 00642 */ HB_P_LINEOFFSET, 32,	/* 1191 */
	HB_P_PUSHSYMNEAR, 27,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 126, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00681) */
/* 00673 */ HB_P_LINEOFFSET, 34,	/* 1193 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
/* 00681 */ HB_P_LINEOFFSET, 36,	/* 1195 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 126, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 103, 0,	/* MPOS */
/* 00723 */ HB_P_LINEOFFSET, 37,	/* 1196 */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00758) */
/* 00732 */ HB_P_LINEOFFSET, 38,	/* 1197 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 126, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00766) */
/* 00758 */ HB_P_LINEOFFSET, 40,	/* 1199 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
/* 00766 */ HB_P_LINEOFFSET, 42,	/* 1201 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 126, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 103, 0,	/* MPOS */
/* 00808 */ HB_P_LINEOFFSET, 43,	/* 1202 */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00843) */
/* 00817 */ HB_P_LINEOFFSET, 44,	/* 1203 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 126, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00851) */
/* 00843 */ HB_P_LINEOFFSET, 46,	/* 1205 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
/* 00851 */ HB_P_LINEOFFSET, 54,	/* 1213 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 91, 0,	/* TXT_TRANSA */
/* 00862 */ HB_P_LINEOFFSET, 55,	/* 1214 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 92, 0,	/* TXT_VALOR */
/* 00873 */ HB_P_LINEOFFSET, 56,	/* 1215 */
	HB_P_PUSHSYMNEAR, 73,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 93, 0,	/* TXT_REDE */
/* 00884 */ HB_P_LINEOFFSET, 58,	/* 1217 */
	HB_P_PUSHSYMNEAR, 94,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 29,	/* 29 (abs: 00923) */
/* 00896 */ HB_P_LINEOFFSET, 59,	/* 1218 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'N', 'o', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 91, 0,	/* TXT_TRANSA */
/* 00923 */ HB_P_LINEOFFSET, 61,	/* 1220 */
	HB_P_PUSHSYMNEAR, 94,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 29,	/* 29 (abs: 00962) */
/* 00935 */ HB_P_LINEOFFSET, 62,	/* 1221 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'R', 'e', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 93, 0,	/* TXT_REDE */
/* 00962 */ HB_P_LINEOFFSET, 64,	/* 1223 */
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 01018) */
/* 00971 */ HB_P_LINEOFFSET, 65,	/* 1224 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'V', 'a', 'l', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 95,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPMEMVAR, 92, 0,	/* TXT_VALOR */
/* 01018 */ HB_P_LINEOFFSET, 67,	/* 1226 */
	HB_P_PUSHSYMNEAR, 96,	/* MOSTRA_CANC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 91, 0,	/* TXT_TRANSA */
	HB_P_PUSHMEMVAR, 92, 0,	/* TXT_VALOR */
	HB_P_PUSHMEMVAR, 93, 0,	/* TXT_REDE */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 4,
/* 01048 */ HB_P_LINEOFFSET, 68,	/* 1227 */
	HB_P_PUSHSYMNEAR, 52,	/* MANDA_ATV */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 01062) */
/* 01057 */ HB_P_LINEOFFSET, 69,	/* 1228 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01062 */ HB_P_LINEOFFSET, 71,	/* 1230 */
	HB_P_PUSHSYMNEAR, 38,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'T', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 114,	/* 114 (abs: 01189) */
/* 01077 */ HB_P_LINEOFFSET, 72,	/* 1231 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 01186) */
/* 01103 */ HB_P_LINEOFFSET, 73,	/* 1232 */
	HB_P_PUSHSYMNEAR, 44,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01186) */
/* 01132 */ HB_P_LINEOFFSET, 74,	/* 1233 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 01186 */ HB_P_LINEOFFSET, 77,	/* 1236 */
	HB_P_ENDPROC,
/* 01189 */ HB_P_LINEOFFSET, 79,	/* 1238 */
	HB_P_PUSHSYMNEAR, 39,	/* MANDA_NCN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* M_TEF_NUM */
	HB_P_PUSHVARIABLE, 26, 0,	/* M_TEF_NOMREDE */
	HB_P_PUSHVARIABLE, 31, 0,	/* M_TEF_NUMTRA */
	HB_P_PUSHVARIABLE, 34, 0,	/* M_TEF_FINALIZA */
	HB_P_DOSHORT, 4,
/* 01208 */ HB_P_LINEOFFSET, 80,	/* 1239 */
	HB_P_PUSHSYMNEAR, 38,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 85,	/* 85 (abs: 01306) */
/* 01223 */ HB_P_LINEOFFSET, 81,	/* 1240 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'r', 'u', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 's', 'o', 'b', 'r', 'e', ' ', 'a', ' ', 'n', 'a', 'o', ' ', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01306 */ HB_P_LINEOFFSET, 83,	/* 1242 */
	HB_P_PUSHSYMNEAR, 96,	/* MOSTRA_CANC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 91, 0,	/* TXT_TRANSA */
	HB_P_PUSHMEMVAR, 92, 0,	/* TXT_VALOR */
	HB_P_PUSHMEMVAR, 93, 0,	/* TXT_REDE */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'e', 'c', 'l', 'e', ' ', '[', 'E', 'n', 't', 'e', 'r', ']', ' ', 'p', '/', ' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 4,
/* 01354 */ HB_P_LINEOFFSET, 84,	/* 1243 */
	HB_P_ENDPROC
/* 01357 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( IMP_CARTAO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 15, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 226, 4,	/* 1250 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 5,	/* IMPRIME_OK */
	HB_P_LOCALNEARSETSTR, 12, 1, 0,	/* TEXTO_TEF 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 13, 1, 0,	/* TEXTO_TEF1 1*/
	0, 
	HB_P_LOCALNEARSETINT, 14, 1, 0,	/* MVIA 1*/
	HB_P_LOCALNEARSETINT, 15, 48, 0,	/* NCARAC 48*/
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* I 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* M_AUX1 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MVLR_CUPOM 0*/
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MVLR_CARTAO 0*/
/* 00044 */ HB_P_LINEOFFSET, 1,	/* 1251 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 58,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 113,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 114,	/* MIMP_TIPO */
	HB_P_DOSHORT, 2,
	HB_P_POPVARIABLE, 114, 0,	/* MIMP_TIPO */
/* 00059 */ HB_P_LINEOFFSET, 4,	/* 1254 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 113, 0,	/* MTIPO_IMP */
/* 00068 */ HB_P_LINEOFFSET, 6,	/* 1256 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALOR */
	HB_P_POPLOCALNEAR, 18,	/* MVLR_CUPOM */
/* 00074 */ HB_P_LINEOFFSET, 7,	/* 1257 */
	HB_P_PUSHSYMNEAR, 127,	/* DIRECTORY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '*', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 17,	/* M_AUX1 */
/* 00110 */ HB_P_LINEOFFSET, 13,	/* 1263 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* M_INTPOS */
/* 00117 */ HB_P_LINEOFFSET, 14,	/* 1264 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* I 0*/
/* 00123 */ HB_P_LINEOFFSET, 15,	/* 1265 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_AUX1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 65, 4,	/* 1089 (abs: 01228) */
/* 00142 */ HB_P_LINEOFFSET, 16,	/* 1266 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00186 */ HB_P_LINEOFFSET, 17,	/* 1267 */
	HB_P_LOCALNEARSETSTR, 13, 1, 0,	/* TEXTO_TEF1 1*/
	0, 
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF1 */
	HB_P_POPLOCALNEAR, 12,	/* TEXTO_TEF */
/* 00197 */ HB_P_LINEOFFSET, 18,	/* 1268 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 15,	/* NCARAC */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* LIN */
/* 00237 */ HB_P_LINEOFFSET, 19,	/* 1269 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* LINHA */
	HB_P_POPLOCALNEAR, 8,	/* LINHAS */
/* 00247 */ HB_P_LINEOFFSET, 20,	/* 1270 */
	HB_P_PUSHSYMNEAR, 19,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 17,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 15,	/* NCARAC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* LINHAS */
/* 00284 */ HB_P_LINEOFFSET, 21,	/* 1271 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* M_INTPOS */
/* 00291 */ HB_P_LINEOFFSET, 22,	/* 1272 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 8,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 00369) */
/* 00304 */ HB_P_LINEOFFSET, 23,	/* 1273 */
	HB_P_PUSHSYMNEAR, 17,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 17,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 15,	/* NCARAC */
	HB_P_PUSHLOCALNEAR, 7,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* LIN */
/* 00345 */ HB_P_LINEOFFSET, 24,	/* 1274 */
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00361 */ HB_P_LINEOFFSET, 25,	/* 1275 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 186,	/* -70 (abs: 00297) */
/* 00369 */ HB_P_LINEOFFSET, 26,	/* 1276 */
	HB_P_PUSHSYMNEAR, 21,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 00388 */ HB_P_LINEOFFSET, 27,	/* 1277 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00475) */
/* 00401 */ HB_P_LINEOFFSET, 28,	/* 1278 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00470 */ HB_P_LINEOFFSET, 29,	/* 1279 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00475 */ HB_P_LINEOFFSET, 31,	/* 1281 */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '9', '-', '0', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 103, 0,	/* MPOS */
/* 00516 */ HB_P_LINEOFFSET, 32,	/* 1282 */
	HB_P_PUSHSYMNEAR, 30,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 104,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 23,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '9', '-', '0', '1', '3', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MVLR_CARTAO */
/* 00583 */ HB_P_LINEOFFSET, 34,	/* 1284 */
	HB_P_PUSHVARIABLE, 103, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 81, 2,	/* 593 (abs: 01183) */
/* 00593 */ HB_P_LINEOFFSET, 35,	/* 1285 */
	HB_P_LOCALNEARSETINT, 14, 2, 0,	/* MVIA 2*/
/* 00599 */ HB_P_LINEOFFSET, 36,	/* 1286 */
	HB_P_PUSHSYMNEAR, 115,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'P', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00640) */
	HB_P_JUMP, 72, 2,	/* 584 (abs: 01221) */
/* 00640 */ HB_P_LINEOFFSET, 39,	/* 1289 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 110, 0,	/* CO */
/* 00646 */ HB_P_LINEOFFSET, 40,	/* 1290 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 110, 0,	/* CO */
	HB_P_PUSHVARIABLE, 110, 0,	/* CO */
	HB_P_PUSHLOCALNEAR, 14,	/* MVIA */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 196, 1,	/* 452 (abs: 01110) */
/* 00661 */ HB_P_LINEOFFSET, 41,	/* 1291 */
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 62, 1,	/* 318 (abs: 00985) */
/* 00670 */ HB_P_LINEOFFSET, 42,	/* 1292 */
	HB_P_PUSHSYMNEAR, 116,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 117,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00686 */ HB_P_LINEOFFSET, 43,	/* 1293 */
	HB_P_PUSHSYMNEAR, 116,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 117,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 118,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', 'a', '.', ' ', 'V', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00737 */ HB_P_LINEOFFSET, 44,	/* 1294 */
	HB_P_PUSHSYMNEAR, 116,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 117,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 118,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'O', 'O', ' ', 'd', 'o', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'v', 'i', 'n', 'c', 'u', 'l', 'a', 'd', 'o', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00805 */ HB_P_LINEOFFSET, 45,	/* 1295 */
	HB_P_PUSHSYMNEAR, 116,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 117,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 118,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'c', 'o', 'm', 'p', 'r', 'a', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 95,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MVLR_CUPOM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00887 */ HB_P_LINEOFFSET, 46,	/* 1296 */
	HB_P_PUSHSYMNEAR, 116,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 117,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 118,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 95,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_CARTAO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00969 */ HB_P_LINEOFFSET, 47,	/* 1297 */
	HB_P_PUSHSYMNEAR, 116,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 117,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00985 */ HB_P_LINEOFFSET, 49,	/* 1299 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* C 0*/
/* 00991 */ HB_P_LINEOFFSET, 50,	/* 1300 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* C 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 91,	/* 91 (abs: 01098) */
/* 01009 */ HB_P_LINEOFFSET, 51,	/* 1301 */
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 01035) */
	HB_P_JUMPNEAR, 59,	/* 59 (abs: 01092) */
/* 01035 */ HB_P_LINEOFFSET, 54,	/* 1304 */
	HB_P_PUSHSYMNEAR, 116,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 117,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 118,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 104,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 105,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHVARIABLE, 98, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 01090 */ HB_P_LINEOFFSET, 55,	/* 1305 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* C 1*/
	HB_P_JUMPNEAR, 157,	/* -99 (abs: 00997) */
/* 01098 */ HB_P_LINEOFFSET, 56,	/* 1306 */
	HB_P_PUSHVARIABLE, 110, 0,	/* CO */
	HB_P_INC,
	HB_P_POPVARIABLE, 110, 0,	/* CO */
	HB_P_JUMP, 57, 254,	/* -455 (abs: 00652) */
/* 01110 */ HB_P_LINEOFFSET, 57,	/* 1307 */
	HB_P_PUSHSYMNEAR, 119,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01119 */ HB_P_LINEOFFSET, 58,	/* 1308 */
	HB_P_PUSHSYMNEAR, 120,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 120,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 120,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01160 */ HB_P_LINEOFFSET, 59,	/* 1309 */
	HB_P_PUSHSYMNEAR, 121,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'P', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01183 */ HB_P_LINEOFFSET, 61,	/* 1311 */
	HB_P_PUSHSYMNEAR, 13,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01219 */ HB_P_LINEOFFSET, 62,	/* 1312 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* I 1*/
	HB_P_JUMP, 184, 251,	/* -1096 (abs: 00129) */
/* 01228 */ HB_P_LINEOFFSET, 63,	/* 1313 */
	HB_P_PUSHSYMNEAR, 40,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01235 */ HB_P_LINEOFFSET, 64,	/* 1314 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01240 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VERI_TRANSACAO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 39, 5,	/* 1319 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 3,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 1320 */
	HB_P_PUSHLOCALNEAR, 1,	/* TEMPO */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00023) */
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 1321 */
	HB_P_LOCALNEARSETINT, 1, 1, 0,	/* TEMPO 1*/
/* 00023 */ HB_P_LINEOFFSET, 4,	/* 1323 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', ' ', 's', 'e', ' ', 'h', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00066 */ HB_P_LINEOFFSET, 5,	/* 1324 */
	HB_P_PUSHLOCALNEAR, 3,	/* OK */
	HB_P_JUMPFALSENEAR, 116,	/* 116 (abs: 00186) */
/* 00072 */ HB_P_LINEOFFSET, 6,	/* 1325 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 'q', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 8, 0,	/* TEF_ENV */
/* 00101 */ HB_P_LINEOFFSET, 7,	/* 1326 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', ':', 92, 'T', 'E', 'F', '_', 'D', 'i', 'a', 'l', 92, 'R', 'e', 's', 'p', 92, 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_RET */
/* 00131 */ HB_P_LINEOFFSET, 8,	/* 1327 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* M_ARQTEF */
/* 00158 */ HB_P_LINEOFFSET, 9,	/* 1328 */
	HB_P_PUSHSYMNEAR, 16,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00179) */
/* 00170 */ HB_P_LINEOFFSET, 10,	/* 1329 */
	HB_P_PUSHSYMNEAR, 122,	/* PNCONF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TEMPO */
	HB_P_DOSHORT, 1,
/* 00179 */ HB_P_LINEOFFSET, 12,	/* 1331 */
	HB_P_PUSHSYMNEAR, 40,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00186 */ HB_P_LINEOFFSET, 14,	/* 1333 */
	HB_P_PUSHSYMNEAR, 10,	/* IMP_CARTAO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00193 */ HB_P_LINEOFFSET, 15,	/* 1334 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 's', 'u', 'a', ' ', 'O', 'p', 'c', 'a', 'o', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00222 */ HB_P_LINEOFFSET, 16,	/* 1335 */
	HB_P_PUSHLOCALNEAR, 3,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00228 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

