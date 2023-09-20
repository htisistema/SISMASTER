/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <MAST700.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\MAST700.PRG /q /oc:\HTI\sismaster\MAST700.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.07.03 12:18:20 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "MAST700.PRG"

HB_FUNC( MAST700 );
HB_FUNC( LANC_QUARTO );
HB_FUNC( VER_STATUS );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( HB_ISNULL );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( CURDRIVE );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( CURDIR );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( SETMODE );
HB_FUNC_EXTERN( WVW_SETFONT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAST700 )
{ "MAST700", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAST700 )}, NULL },
{ "MNUM_MESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "MNUM_DOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCAMINHO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_RESERVA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_LUGAR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "HB_ISNULL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNULL )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MQTD_MESAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "CURDRIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURDRIVE )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "CURDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURDIR )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NPBID", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "ABRE_FECHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CONS_RESERVA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOCUPADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_QUARTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "POINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "Y", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "POSICAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMANDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "LANC_QUARTO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( LANC_QUARTO )}, NULL },
{ "MRESERVA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MRESERVA_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUMERO_RESERVA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "DATA_NUL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "SETMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETMODE )}, NULL },
{ "WVW_SETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETFONT )}, NULL },
{ "VER_STATUS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VER_STATUS )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAST700 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MAST700
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MAST700 = hb_vm_SymbolInit_MAST700;
   #pragma data_seg()
#endif

HB_FUNC( MAST700 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 13, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 17, 0,	/* 17 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'M', 'A', 'S', 'T', '7', '0', '0', 0, 
	HB_P_LOCALNEARSETSTR, 11, 2, 0,	/* MESPERA 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 12,	/* MPERIODO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 13,	/* DEMO_SET */
/* 00034 */ HB_P_LINEOFFSET, 1,	/* 18 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 5,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 13,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MNUM_MESA */
	HB_P_PUSHSYMNEAR, 2,	/* ARET */
	HB_P_PUSHSYMNEAR, 3,	/* I */
	HB_P_PUSHSYMNEAR, 4,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 6,	/* MNUM_DOC */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 8,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MARQ */
	HB_P_PUSHSYMNEAR, 11,	/* MCAMINHO */
	HB_P_PUSHSYMNEAR, 12,	/* M_RESERVA */
	HB_P_DOSHORT, 10,
	HB_P_POPVARIABLE, 12, 0,	/* M_RESERVA */
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
	HB_P_POPVARIABLE, 8, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_POPVARIABLE, 6, 0,	/* MNUM_DOC */
	HB_P_POPVARIABLE, 4, 0,	/* MTRACO */
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_POPVARIABLE, 2, 0,	/* ARET */
	HB_P_POPVARIABLE, 1, 0,	/* MNUM_MESA */
/* 00120 */ HB_P_LINEOFFSET, 2,	/* 19 */
	HB_P_PUSHSYMNEAR, 14,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'Q', 'T', 'O', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'R', 'E', 'S', 'E', 'R', 'V', 'A', ' ', 'D', 'E', ' ', 'Q', 'U', 'A', 'R', 'T', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 15, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00181) */
/* 00176 */ HB_P_LINEOFFSET, 3,	/* 20 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00181 */ HB_P_LINEOFFSET, 5,	/* 22 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* CONS_LUGAR */
/* 00189 */ HB_P_LINEOFFSET, 6,	/* 23 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 91,	/* 91 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'e', 's', 'a', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'Q', 39, ' ', 'A', 'N', 'D', ' ', '(', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'O', 'R', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 16, 0,	/* CONS_LUGAR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00300 */ HB_P_LINEOFFSET, 7,	/* 24 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00324 */ HB_P_LINEOFFSET, 8,	/* 25 */
	HB_P_PUSHSYMNEAR, 19,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_LUGAR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 00349) */
/* 00336 */ HB_P_LINEOFFSET, 9,	/* 26 */
	HB_P_PUSHSYMNEAR, 20,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_LUGAR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 21, 0,	/* MQTD_MESAS */
/* 00349 */ HB_P_LINEOFFSET, 11,	/* 28 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'R', 'E', 'S', 'E', 'R', 'V', 'A', ' ', 'D', 'E', ' ', 'Q', 'U', 'A', 'R', 'T', 'O', 'S', ' ', ' ', '[', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00397 */ HB_P_LINEOFFSET, 12,	/* 29 */
	HB_P_PUSHSYMNEAR, 23,	/* CURDRIVE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 24,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 11, 0,	/* MCAMINHO */
/* 00429 */ HB_P_LINEOFFSET, 13,	/* 30 */
	HB_P_PUSHSYMNEAR, 26,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 00443 */ HB_P_LINEOFFSET, 14,	/* 31 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 28, 0,	/* NPBID */
/* 00451 */ HB_P_LINEOFFSET, 15,	/* 32 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 3, 0,	/* I */
/* 00457 */ HB_P_LINEOFFSET, 16,	/* 33 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_PUSHVARIABLE, 21, 0,	/* MQTD_MESAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00494) */
/* 00472 */ HB_P_LINEOFFSET, 17,	/* 34 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* NPBID */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00483 */ HB_P_LINEOFFSET, 18,	/* 35 */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_JUMPNEAR, 227,	/* -29 (abs: 00463) */
/* 00494 */ HB_P_LINEOFFSET, 19,	/* 36 */
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 2,	/* MDATA_INICIAL */
/* 00503 */ HB_P_LINEOFFSET, 20,	/* 37 */
	HB_P_PUSHSYMNEAR, 31,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MDATA_FINAL */
/* 00523 */ HB_P_LINEOFFSET, 21,	/* 38 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 32, 0,	/* ABRE_FECHA */
/* 00531 */ HB_P_LINEOFFSET, 25,	/* 42 */
	HB_P_PUSHSYMNEAR, 33,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 6,
/* 00557 */ HB_P_LINEOFFSET, 26,	/* 43 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00589 */ HB_P_LINEOFFSET, 27,	/* 44 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00621 */ HB_P_LINEOFFSET, 28,	/* 45 */
	HB_P_PUSHSYMNEAR, 36,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00636 */ HB_P_LINEOFFSET, 29,	/* 46 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 119,	/* 119 */
	' ', 'Q', 'u', 'a', 'r', 't', 'o', ' ', 'R', 'e', 's', 'e', 'r', 'v', 'a', ' ', 'D', 'a', 't', 'a', ' ', 'e', ' ', 'N', 'o', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R', 'e', 's', 'e', 'r', 'v', 'a', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ' ', 'S', 't', 'a', 't', 'u', 's', 0, 
	HB_P_DOSHORT, 1,
/* 00772 */ HB_P_LINEOFFSET, 30,	/* 47 */
	HB_P_PUSHSYMNEAR, 36,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00787 */ HB_P_LINEOFFSET, 31,	/* 48 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MDATA_INICIAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00826) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00831) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 'c', 'i', 'a', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MDATA_INICIAL */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00870) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00871) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00889 */ HB_P_LINEOFFSET, 32,	/* 49 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDATA_FINAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00928) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00933) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* MDATA_FINAL */
	2, 0,	/* MDATA_INICIAL */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00972) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00973) */
	HB_P_TRUE,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 00988) */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00986) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00987) */
	HB_P_TRUE,
	HB_P_OR,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01006 */ HB_P_LINEOFFSET, 33,	/* 50 */
	HB_P_PUSHSYMNEAR, 41,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 01028 */ HB_P_LINEOFFSET, 34,	/* 51 */
	HB_P_PUSHSYMNEAR, 42,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01052) */
/* 01040 */ HB_P_LINEOFFSET, 35,	/* 52 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01047 */ HB_P_LINEOFFSET, 36,	/* 53 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01052 */ HB_P_LINEOFFSET, 38,	/* 55 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 12,	/* MPERIODO */
/* 01059 */ HB_P_LINEOFFSET, 39,	/* 56 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MPERIODO */
	HB_P_PUSHLOCALNEAR, 2,	/* MDATA_INICIAL */
	HB_P_DOSHORT, 2,
/* 01070 */ HB_P_LINEOFFSET, 40,	/* 57 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 3, 0,	/* I */
/* 01076 */ HB_P_LINEOFFSET, 41,	/* 58 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA_FINAL */
	HB_P_PUSHLOCALNEAR, 2,	/* MDATA_INICIAL */
	HB_P_MINUS,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01119) */
/* 01093 */ HB_P_LINEOFFSET, 42,	/* 59 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MPERIODO */
	HB_P_PUSHLOCALNEAR, 2,	/* MDATA_INICIAL */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01108 */ HB_P_LINEOFFSET, 43,	/* 60 */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_JUMPNEAR, 221,	/* -35 (abs: 01082) */
/* 01119 */ HB_P_LINEOFFSET, 45,	/* 62 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 44, 0,	/* CONS_RESERVA */
/* 01127 */ HB_P_LINEOFFSET, 46,	/* 63 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 45, 0,	/* MOCUPADO */
/* 01135 */ HB_P_LINEOFFSET, 47,	/* 64 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 12, 0,	/* M_RESERVA */
/* 01143 */ HB_P_LINEOFFSET, 48,	/* 65 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 46, 0,	/* M_QUARTO */
/* 01151 */ HB_P_LINEOFFSET, 49,	/* 66 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* CONS_LUGAR */
/* 01159 */ HB_P_LINEOFFSET, 50,	/* 67 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 13,	/* DEMO_SET */
/* 01166 */ HB_P_LINEOFFSET, 51,	/* 68 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 47, 0,	/* POINT */
	HB_P_POPVARIABLE, 3, 0,	/* I */
/* 01176 */ HB_P_LINEOFFSET, 52,	/* 69 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_PUSHSYMNEAR, 20,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MPERIODO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 248, 0,	/* 248 (abs: 01441) */
/* 01196 */ HB_P_LINEOFFSET, 53,	/* 70 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 48, 0,	/* Y */
/* 01202 */ HB_P_LINEOFFSET, 54,	/* 71 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 48, 0,	/* Y */
	HB_P_PUSHVARIABLE, 48, 0,	/* Y */
	HB_P_PUSHVARIABLE, 21, 0,	/* MQTD_MESAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 214, 0,	/* 214 (abs: 01429) */
/* 01218 */ HB_P_LINEOFFSET, 56,	/* 73 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'q', 'u', 'a', 'r', 't', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'q', 'u', 'a', 'r', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* Y */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MPERIODO */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 16, 0,	/* CONS_LUGAR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01362 */ HB_P_LINEOFFSET, 57,	/* 74 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01386 */ HB_P_LINEOFFSET, 58,	/* 75 */
	HB_P_PUSHSYMNEAR, 19,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_LUGAR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 01417) */
/* 01398 */ HB_P_LINEOFFSET, 59,	/* 76 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* MOCUPADO */
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_LUGAR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 01429) */
/* 01417 */ HB_P_LINEOFFSET, 62,	/* 79 */
	HB_P_PUSHVARIABLE, 48, 0,	/* Y */
	HB_P_INC,
	HB_P_POPVARIABLE, 48, 0,	/* Y */
	HB_P_JUMP, 38, 255,	/* -218 (abs: 01208) */
/* 01429 */ HB_P_LINEOFFSET, 63,	/* 80 */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_JUMP, 0, 255,	/* -256 (abs: 01182) */
/* 01441 */ HB_P_LINEOFFSET, 64,	/* 81 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 3, 0,	/* I */
/* 01447 */ HB_P_LINEOFFSET, 65,	/* 82 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_PUSHVARIABLE, 21, 0,	/* MQTD_MESAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 90, 3,	/* 858 (abs: 02318) */
/* 01463 */ HB_P_LINEOFFSET, 66,	/* 83 */
	HB_P_PUSHSYMNEAR, 51,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* MOCUPADO */
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 52, 0,	/* POSICAO */
/* 01486 */ HB_P_LINEOFFSET, 67,	/* 84 */
	HB_P_PUSHVARIABLE, 52, 0,	/* POSICAO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 134, 2,	/* 646 (abs: 02139) */
/* 01496 */ HB_P_LINEOFFSET, 69,	/* 86 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 44, 0,	/* CONS_RESERVA */
/* 01504 */ HB_P_LINEOFFSET, 70,	/* 87 */
	HB_P_PUSHSTRSHORT, 111,	/* 111 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'r', 'e', '.', 'q', 'u', 'a', 'r', 't', 'o', ',', ' ', 'r', 'e', '.', 'd', 'a', 't', 'a', '_', 'r', 'e', 's', 'e', 'r', 'v', 'a', ',', 'r', 'e', '.', 'r', 'e', 's', 'e', 'r', 'v', 'a', ',', 'r', 'e', '.', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ',', 'r', 'e', '.', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'r', 'e', '.', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'c', 'l', 'i', '.', 'r', 'a', 'z', 'a', 'o', ',', 'r', 'e', '.', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ',', 0, 
	HB_P_POPVARIABLE, 53, 0,	/* COMANDO */
/* 01622 */ HB_P_LINEOFFSET, 71,	/* 88 */
	HB_P_PUSHVARIABLE, 53, 0,	/* COMANDO */
	HB_P_PUSHSTRSHORT, 99,	/* 99 */
	'(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'r', 'a', 'z', 'a', 'o', ' ', 'f', 'r', 'o', 'm', ' ', 'm', 'a', 's', 't', 'f', 'o', 'r', 'n', ' ', 'w', 'h', 'e', 'r', 'e', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 'r', 'e', '.', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ')', ',', ' ', 'r', 'e', '.', 'r', 'e', 's', 'e', 'r', 'v', 'a', '_', 'f', 'o', 'r', 'n', ',', ' ', 'r', 'e', '.', 'v', 'a', 'l', 'o', 'r', ',', ' ', 'r', 'e', '.', 's', 't', 'a', 't', 'u', 's', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* COMANDO */
/* 01732 */ HB_P_LINEOFFSET, 72,	/* 89 */
	HB_P_PUSHVARIABLE, 53, 0,	/* COMANDO */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', 'r', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* COMANDO */
/* 01764 */ HB_P_LINEOFFSET, 73,	/* 90 */
	HB_P_PUSHVARIABLE, 53, 0,	/* COMANDO */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'j', 'o', 'i', 'n', ' ', 'm', 'a', 's', 't', 'c', 'l', 'i', ' ', 'c', 'l', 'i', ' ', 'o', 'n', ' ', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'r', 'e', '.', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'r', 'e', '.', 'q', 'u', 'a', 'r', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* MOCUPADO */
	HB_P_PUSHVARIABLE, 52, 0,	/* POSICAO */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* COMANDO */
/* 01852 */ HB_P_LINEOFFSET, 74,	/* 91 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 53, 0,	/* COMANDO */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 44, 0,	/* CONS_RESERVA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01873 */ HB_P_LINEOFFSET, 75,	/* 92 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02101 */ HB_P_LINEOFFSET, 76,	/* 93 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* M_RESERVA */
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 02119 */ HB_P_LINEOFFSET, 77,	/* 94 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* M_QUARTO */
	HB_P_PUSHMEMVAR, 44, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 170, 0,	/* 170 (abs: 02306) */
/* 02139 */ HB_P_LINEOFFSET, 80,	/* 97 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 107,	/* 107 */
	' ', ' ', ' ', ' ', '/', ' ', ' ', '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', ' ', ' ', '/', ' ', ' ', ' ', 'a', ' ', ' ', ' ', '/', ' ', ' ', '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '0', '.', '0', '0', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02273 */ HB_P_LINEOFFSET, 81,	/* 98 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* M_RESERVA */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
/* 02286 */ HB_P_LINEOFFSET, 82,	/* 99 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* M_QUARTO */
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 2,
/* 02306 */ HB_P_LINEOFFSET, 85,	/* 102 */
	HB_P_PUSHVARIABLE, 3, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_JUMP, 162, 252,	/* -862 (abs: 01453) */
/* 02318 */ HB_P_LINEOFFSET, 87,	/* 104 */
	HB_P_PUSHSYMNEAR, 57,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02326 */ HB_P_LINEOFFSET, 88,	/* 105 */
	HB_P_PUSHSYMNEAR, 58,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'<', 'E', 'S', 'C', '>', ' ', 'o', 'u', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'R', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02362 */ HB_P_LINEOFFSET, 89,	/* 106 */
	HB_P_PUSHSYMNEAR, 59,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_PUSHLOCALNEAR, 13,	/* DEMO_SET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPVARIABLE, 47, 0,	/* POINT */
/* 02386 */ HB_P_LINEOFFSET, 91,	/* 108 */
	HB_P_PUSHSYMNEAR, 42,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 02407) */
/* 02398 */ HB_P_LINEOFFSET, 92,	/* 109 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 69,	/* 69 (abs: 02474) */
/* 02407 */ HB_P_LINEOFFSET, 94,	/* 111 */
	HB_P_PUSHSYMNEAR, 42,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 02449) */
/* 02419 */ HB_P_LINEOFFSET, 95,	/* 112 */
	HB_P_PUSHSYMNEAR, 60,	/* LANC_QUARTO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* M_QUARTO */
	HB_P_PUSHVARIABLE, 47, 0,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 12, 0,	/* M_RESERVA */
	HB_P_PUSHVARIABLE, 47, 0,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 02440 */ HB_P_LINEOFFSET, 96,	/* 113 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 02474) */
/* 02449 */ HB_P_LINEOFFSET, 100,	/* 117 */
	HB_P_PUSHSYMNEAR, 42,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 120, 248,	/* -1928 (abs: 00531) */
/* 02462 */ HB_P_LINEOFFSET, 101,	/* 118 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02469 */ HB_P_LINEOFFSET, 102,	/* 119 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02474 */ HB_P_LINEOFFSET, 105,	/* 122 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02479 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( LANC_QUARTO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 126, 0,	/* 126 */
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* MOPCAO 1*/
	0, 
/* 00011 */ HB_P_LINEOFFSET, 4,	/* 130 */
	HB_P_PUSHSYMNEAR, 26,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 27, 0,	/* GETLIST */
/* 00025 */ HB_P_LINEOFFSET, 5,	/* 131 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'Q', 'U', 'A', 'R', 'T', 'O', ' ', 'N', 'o', '.', ' ', '[', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MNUM_QUARTO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00063 */ HB_P_LINEOFFSET, 7,	/* 133 */
	HB_P_PUSHSYMNEAR, 57,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00071 */ HB_P_LINEOFFSET, 8,	/* 134 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00104 */ HB_P_LINEOFFSET, 9,	/* 135 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'R', 'e', 's', 'e', 'r', 'v', 'a', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00138 */ HB_P_LINEOFFSET, 10,	/* 136 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'R', 'e', 's', 'e', 'r', 'v', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00172 */ HB_P_LINEOFFSET, 11,	/* 137 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00206 */ HB_P_LINEOFFSET, 12,	/* 138 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'R', 'e', 's', 'e', 'r', 'v', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00240 */ HB_P_LINEOFFSET, 13,	/* 139 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00274 */ HB_P_LINEOFFSET, 14,	/* 140 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00308 */ HB_P_LINEOFFSET, 15,	/* 141 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00342 */ HB_P_LINEOFFSET, 16,	/* 142 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00376 */ HB_P_LINEOFFSET, 17,	/* 143 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00409 */ HB_P_LINEOFFSET, 19,	/* 145 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MRESE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 113, 6,	/* 1649 (abs: 02067) */
/* 00421 */ HB_P_LINEOFFSET, 21,	/* 147 */
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* MDATA_INCLUSAO */
/* 00430 */ HB_P_LINEOFFSET, 22,	/* 148 */
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 7,	/* MDATA_RESERVA */
/* 00439 */ HB_P_LINEOFFSET, 23,	/* 149 */
	HB_P_PUSHSYMNEAR, 31,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 5,	/* MDATA_FIM */
	HB_P_POPLOCALNEAR, 4,	/* MDATA_INI */
/* 00462 */ HB_P_LINEOFFSET, 24,	/* 150 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 61, 0,	/* MRESERVA */
/* 00474 */ HB_P_LINEOFFSET, 25,	/* 151 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MVALOR 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MVALOR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MCLIENTE */
	HB_P_POPLOCALNEAR, 9,	/* MFORNECEDOR */
/* 00487 */ HB_P_LINEOFFSET, 26,	/* 152 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 62, 0,	/* MRESERVA_FORN */
/* 00499 */ HB_P_LINEOFFSET, 27,	/* 153 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MOBS_INCLUSAO */
/* 00510 */ HB_P_LINEOFFSET, 28,	/* 154 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 63, 0,	/* NUMERO_RESERVA */
/* 00518 */ HB_P_LINEOFFSET, 29,	/* 155 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'm', 'a', 'x', '(', 'r', 'e', 's', 'e', 'r', 'v', 'a', ')', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'r', 'e', 's', 'e', 'r', 'v', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 63, 0,	/* NUMERO_RESERVA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00575 */ HB_P_LINEOFFSET, 30,	/* 156 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00599 */ HB_P_LINEOFFSET, 33,	/* 159 */
	HB_P_PUSHSYMNEAR, 19,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NUMERO_RESERVA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00626) */
/* 00611 */ HB_P_LINEOFFSET, 34,	/* 160 */
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 61, 0,	/* MRESERVA */
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 00653) */
/* 00626 */ HB_P_LINEOFFSET, 36,	/* 162 */
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 61, 0,	/* MRESERVA */
/* 00653 */ HB_P_LINEOFFSET, 38,	/* 164 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* MRESERVA */
	HB_P_DOSHORT, 1,
/* 00672 */ HB_P_LINEOFFSET, 40,	/* 166 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA_INCLUSAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00710) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00715) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'm', 'd', 'a', 't', 'a', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00752 */ HB_P_LINEOFFSET, 41,	/* 167 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA_RESERVA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00791) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00796) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'd', 'a', 't', 'a', '_', 'r', 'e', 's', 'e', 'r', 'v', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00832 */ HB_P_LINEOFFSET, 42,	/* 168 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MFORNECEDOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00871) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00876) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MFORNECEDOR */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00919) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00930) */
	HB_P_PUSHSYMNEAR, 65,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00948 */ HB_P_LINEOFFSET, 43,	/* 169 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'r', 'e', 's', 'e', 'r', 'v', 'a', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01004 */ HB_P_LINEOFFSET, 44,	/* 170 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCLIENTE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01043) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01048) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01089) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01100) */
	HB_P_PUSHSYMNEAR, 66,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01118 */ HB_P_LINEOFFSET, 45,	/* 171 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01157) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01162) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01194 */ HB_P_LINEOFFSET, 46,	/* 172 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MDATA_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01233) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01238) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01270 */ HB_P_LINEOFFSET, 47,	/* 173 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01309) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01314) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01354 */ HB_P_LINEOFFSET, 48,	/* 174 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MOBS_INCLUSAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01393) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01398) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'o', 'b', 's', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 40, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01434 */ HB_P_LINEOFFSET, 49,	/* 175 */
	HB_P_PUSHSYMNEAR, 41,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 27, 0,	/* GETLIST */
/* 01456 */ HB_P_LINEOFFSET, 50,	/* 176 */
	HB_P_PUSHSYMNEAR, 42,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01480) */
/* 01468 */ HB_P_LINEOFFSET, 51,	/* 177 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01475 */ HB_P_LINEOFFSET, 52,	/* 178 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01480 */ HB_P_LINEOFFSET, 54,	/* 180 */
	HB_P_PUSHSYMNEAR, 31,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 67, 0,	/* DATA_NUL */
/* 01501 */ HB_P_LINEOFFSET, 55,	/* 181 */
	HB_P_PUSHSYMNEAR, 68,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'a', ' ', 'R', 'E', 'S', 'E', 'R', 'V', 'A', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MOPCAO */
/* 01547 */ HB_P_LINEOFFSET, 56,	/* 182 */
	HB_P_PUSHLOCALNEAR, 3,	/* MOPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01568) */
	HB_P_PUSHSYMNEAR, 42,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01573) */
	HB_P_JUMP, 29, 250,	/* -1507 (abs: 00063) */
/* 01573 */ HB_P_LINEOFFSET, 78,	/* 204 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 228,	/* 228 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 'm', 'a', 's', 't', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', '(', 'q', 'u', 'a', 'r', 't', 'o', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', 'h', 'o', 'r', 'a', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'd', 'a', 't', 'a', '_', 'r', 'e', 's', 'e', 'r', 'v', 'a', ',', 'r', 'e', 's', 'e', 'r', 'v', 'a', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ',', 'r', 'e', 's', 'e', 'r', 'v', 'a', '_', 'f', 'o', 'r', 'n', ',', 'v', 'a', 'l', 'o', 'r', ',', 's', 't', 'a', 't', 'u', 's', ',', 'o', 'p', 'e', 'r', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', 'o', 'b', 's', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', 'o', 'b', 's', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ',', 'h', 'o', 'r', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ',', 'o', 'p', 'e', 'r', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MNUM_QUARTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA_INCLUSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCLIENTE */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA_RESERVA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* MRESERVA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MFORNECEDOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* MRESERVA_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 70, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MOBS_INCLUSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 47, 248,	/* -2001 (abs: 00063) */
/* 02067 */ HB_P_LINEOFFSET, 82,	/* 208 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 63, 0,	/* NUMERO_RESERVA */
/* 02075 */ HB_P_LINEOFFSET, 83,	/* 209 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'q', 'u', 'a', 'r', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MNUM_QUARTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MRESE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 63, 0,	/* NUMERO_RESERVA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02172 */ HB_P_LINEOFFSET, 84,	/* 210 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02196 */ HB_P_LINEOFFSET, 85,	/* 211 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02219 */ HB_P_LINEOFFSET, 86,	/* 212 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02243 */ HB_P_LINEOFFSET, 87,	/* 213 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02267 */ HB_P_LINEOFFSET, 88,	/* 214 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02291 */ HB_P_LINEOFFSET, 89,	/* 215 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02315 */ HB_P_LINEOFFSET, 90,	/* 216 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02339 */ HB_P_LINEOFFSET, 91,	/* 217 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02363 */ HB_P_LINEOFFSET, 92,	/* 218 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02387 */ HB_P_LINEOFFSET, 93,	/* 219 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 02423 */ HB_P_LINEOFFSET, 94,	/* 220 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 63, 0,	/* NUMERO_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02447 */ HB_P_LINEOFFSET, 95,	/* 221 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 's', 's', 'i', 'o', 'n', 'e', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 't', 'e', 'c', 'l', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02504 */ HB_P_LINEOFFSET, 96,	/* 222 */
	HB_P_PUSHSYMNEAR, 72,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 02512 */ HB_P_LINEOFFSET, 97,	/* 223 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02519 */ HB_P_LINEOFFSET, 98,	/* 224 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02524 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VER_STATUS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 236, 0,	/* 236 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* VERSTATUS */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 237 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 's', 't', 'a', 't', 'u', 's', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'q', 'u', 'a', 'r', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'A', 'N', 'D', ' ', '(', 's', 't', 'a', 't', 'u', 's', ' ', '=', ' ', 39, 'R', 39, ' ', 'O', 'R', ' ', 's', 't', 'a', 't', 'u', 's', ' ', '=', ' ', 39, 'I', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 2, 0,	/* VERSTATUS */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00125 */ HB_P_LINEOFFSET, 2,	/* 238 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00149 */ HB_P_LINEOFFSET, 3,	/* 239 */
	HB_P_PUSHSYMNEAR, 19,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* VERSTATUS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00170) */
/* 00160 */ HB_P_LINEOFFSET, 4,	/* 240 */
	HB_P_PUSHLOCALNEAR, 2,	/* VERSTATUS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00170 */ HB_P_LINEOFFSET, 6,	/* 242 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00178 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

