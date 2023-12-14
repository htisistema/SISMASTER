/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <MAST203.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\MAST203.PRG /q /oc:\HTI\sismaster\MAST203.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.14 10:06:45 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "MAST203.PRG"

HB_FUNC( MAST203 );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( SETMODE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( WVW_SETFONT );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( HB_ISNULL );
HB_FUNC_EXTERN( SUB_BANNER );
HB_FUNC_EXTERN( TIMEOUT );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ELAPTIME );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAST203 )
{ "MAST203", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAST203 )}, NULL },
{ "MPRG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETMODE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETMODE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "WVW_SETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETFONT )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "HB_ISNULL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNULL )}, NULL },
{ "SUB_BANNER", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUB_BANNER )}, NULL },
{ "TIMEOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIMEOUT )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "MCONT_DOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "ELAPTIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( ELAPTIME )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAST203 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MAST203
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MAST203 = hb_vm_SymbolInit_MAST203;
   #pragma data_seg()
#endif

HB_FUNC( MAST203 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 17, 0,	/* 17 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* M_MESA */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* I 0*/
/* 00020 */ HB_P_LINEOFFSET, 2,	/* 19 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'M', 'A', 'S', 'T', '2', '0', '3', 0, 
	HB_P_PUSHSYMNEAR, 3,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 8,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MPRG */
	HB_P_PUSHSYMNEAR, 2,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 5,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 6,	/* MARQ */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 6, 0,	/* MARQ */
	HB_P_POPVARIABLE, 5, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_POPVARIABLE, 2, 0,	/* MTRACO */
	HB_P_POPVARIABLE, 1, 0,	/* MPRG */
/* 00086 */ HB_P_LINEOFFSET, 4,	/* 21 */
	HB_P_PUSHSYMNEAR, 9,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'N', 'T', 'R', 'E', 'G', 'A', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 10, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00142) */
/* 00137 */ HB_P_LINEOFFSET, 5,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00142 */ HB_P_LINEOFFSET, 9,	/* 26 */
	HB_P_PUSHSYMNEAR, 11,	/* SETMODE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 2,
/* 00153 */ HB_P_LINEOFFSET, 10,	/* 27 */
	HB_P_PUSHSYMNEAR, 12,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'E', 'N', 'T', 'R', 'E', 'G', 'A', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', ' ', '[', 0, 
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00202 */ HB_P_LINEOFFSET, 11,	/* 28 */
	HB_P_PUSHSYMNEAR, 13,	/* WVW_SETFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'l', 'u', 'c', 'i', 'd', 'a', ' ', 'c', 'o', 'n', 's', 'o', 'l', 'e', 0, 
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHINT, 132, 3,	/* 900 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 6,
/* 00236 */ HB_P_LINEOFFSET, 13,	/* 30 */
	HB_P_LOCALNEARSETINT, 2, 35, 0,	/* LBA 35*/
/* 00242 */ HB_P_LINEOFFSET, 14,	/* 31 */
	HB_P_LOCALNEARSETINT, 3, 99, 0,	/* CBA 99*/
/* 00248 */ HB_P_LINEOFFSET, 15,	/* 32 */
	HB_P_PUSHSYMNEAR, 14,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 00262 */ HB_P_LINEOFFSET, 17,	/* 34 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00270 */ HB_P_LINEOFFSET, 18,	/* 35 */
	HB_P_PUSHSYMNEAR, 17,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00283 */ HB_P_LINEOFFSET, 19,	/* 36 */
	HB_P_PUSHSYMNEAR, 18,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00293 */ HB_P_LINEOFFSET, 21,	/* 38 */
	HB_P_PUSHSYMNEAR, 17,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_ADDINT, 253, 255,	/* -3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_DOSHORT, 4,
/* 00313 */ HB_P_LINEOFFSET, 22,	/* 39 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_MERC */
/* 00320 */ HB_P_LINEOFFSET, 23,	/* 40 */
	HB_P_PUSHSYMNEAR, 19,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00376 */ HB_P_LINEOFFSET, 25,	/* 42 */
	HB_P_MESSAGE, 20, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 21,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 236,	/* 236 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ',', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'q', 't', 'd', ',', 'p', 'r', 'e', 'c', 'o', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'o', 'd', '_', 'g', 'a', 'r', 'c', 'o', ',', 'o', 'p', 'e', 'r', ',', 'o', 'b', 's', ',', 'd', 'a', 't', '_', 'p', 'a', 'g', ',', 'p', 'o', 'r', 't', 'a', ',', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', '(', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'A', 'N', 'D', ' ', 'p', 'o', 'r', 't', 'a', ' ', 'L', 'I', 'K', 'E', ' ', 39, '%', '4', '%', 39, ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00632 */ HB_P_LINEOFFSET, 27,	/* 44 */
	HB_P_PUSHSYMNEAR, 22,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 175, 0,	/* 175 (abs: 00816) */
/* 00644 */ HB_P_LINEOFFSET, 28,	/* 45 */
	HB_P_PUSHSYMNEAR, 23,	/* SUB_BANNER */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', ' ', ' ', ' ', 'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', 0, 
	HB_P_DOSHORT, 3,
/* 00679 */ HB_P_LINEOFFSET, 29,	/* 46 */
	HB_P_PUSHSYMNEAR, 23,	/* SUB_BANNER */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', ' ', ' ', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', 0, 
	HB_P_DOSHORT, 3,
/* 00713 */ HB_P_LINEOFFSET, 30,	/* 47 */
	HB_P_PUSHSYMNEAR, 23,	/* SUB_BANNER */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'N', 'T', 'R', 'E', 'G', 'E', '.', '.', '.', 0, 
	HB_P_DOSHORT, 3,
/* 00745 */ HB_P_LINEOFFSET, 31,	/* 48 */
	HB_P_PUSHSYMNEAR, 24,	/* TIMEOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00754 */ HB_P_LINEOFFSET, 32,	/* 49 */
	HB_P_PUSHSYMNEAR, 19,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'e', 'c', 'l', 'e', ' ', '[', 'E', 'S', 'C', ']', ' ', 'p', '/', ' ', 'a', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00791 */ HB_P_LINEOFFSET, 33,	/* 50 */
	HB_P_PUSHSYMNEAR, 25,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00800 */ HB_P_LINEOFFSET, 34,	/* 51 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 59, 7,	/* 1851 (abs: 02661) */
	HB_P_JUMP, 59, 7,	/* 1851 (abs: 02664) */
/* 00816 */ HB_P_LINEOFFSET, 39,	/* 56 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 27, 0,	/* MCONT_DOC */
	HB_P_POPLOCALNEAR, 6,	/* I */
/* 00825 */ HB_P_LINEOFFSET, 40,	/* 57 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* M_MESA */
/* 00832 */ HB_P_LINEOFFSET, 41,	/* 58 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* M_POS */
/* 00839 */ HB_P_LINEOFFSET, 42,	/* 59 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_PUSHSYMNEAR, 28,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 175, 0,	/* 175 (abs: 01030) */
/* 00858 */ HB_P_LINEOFFSET, 44,	/* 61 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* M_MESA */
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* ELAPTIME */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 33,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00977 */ HB_P_LINEOFFSET, 45,	/* 62 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 6,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 01012 */ HB_P_LINEOFFSET, 46,	/* 63 */
	HB_P_PUSHVARIABLE, 27, 0,	/* MCONT_DOC */
	HB_P_INC,
	HB_P_POPVARIABLE, 27, 0,	/* MCONT_DOC */
/* 01021 */ HB_P_LINEOFFSET, 47,	/* 64 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* I 1*/
	HB_P_JUMP, 74, 255,	/* -182 (abs: 00845) */
/* 01030 */ HB_P_LINEOFFSET, 48,	/* 65 */
	HB_P_PUSHSYMNEAR, 19,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01077 */ HB_P_LINEOFFSET, 49,	/* 66 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01086 */ HB_P_LINEOFFSET, 50,	/* 67 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 01108 */ HB_P_LINEOFFSET, 51,	/* 68 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01133 */ HB_P_LINEOFFSET, 52,	/* 69 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'Q', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01156 */ HB_P_LINEOFFSET, 53,	/* 70 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 36,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'O', 'B', 'S', 'E', 'R', 'V', 'A', 'C', 'A', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 01190 */ HB_P_LINEOFFSET, 54,	/* 71 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 36,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'G', 'c', 0, 
	HB_P_DOSHORT, 1,
/* 01217 */ HB_P_LINEOFFSET, 55,	/* 72 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 36,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'T', 'e', 'm', 'p', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01246 */ HB_P_LINEOFFSET, 56,	/* 73 */
	HB_P_PUSHSYMNEAR, 37,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 01261 */ HB_P_LINEOFFSET, 57,	/* 74 */
	HB_P_PUSHSYMNEAR, 37,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 01282 */ HB_P_LINEOFFSET, 58,	/* 75 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01314 */ HB_P_LINEOFFSET, 59,	/* 76 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01322 */ HB_P_LINEOFFSET, 60,	/* 77 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* MCONT_DOC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01351 */ HB_P_LINEOFFSET, 61,	/* 78 */
	HB_P_PUSHSYMNEAR, 39,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_ADDINT, 253, 255,	/* -3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 5,	/* M_MESA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 7,	/* POINT */
/* 01379 */ HB_P_LINEOFFSET, 64,	/* 81 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01394) */
	HB_P_JUMP, 249, 4,	/* 1273 (abs: 02664) */
/* 01394 */ HB_P_LINEOFFSET, 66,	/* 83 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 169, 251,	/* -1111 (abs: 00293) */
/* 01407 */ HB_P_LINEOFFSET, 67,	/* 84 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSYMNEAR, 40,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'E', 'N', 'T', 'R', 'E', 'G', 'A', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 181, 4,	/* 1205 (abs: 02661) */
/* 01459 */ HB_P_LINEOFFSET, 68,	/* 85 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_MERC */
/* 01466 */ HB_P_LINEOFFSET, 69,	/* 86 */
	HB_P_MESSAGE, 20, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 21,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 142,	/* 142 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ',', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'q', 't', 'd', ',', 'p', 'r', 'e', 'c', 'o', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'o', 'd', '_', 'g', 'a', 'r', 'c', 'o', ',', 'o', 'p', 'e', 'r', ',', 'o', 'b', 's', ',', 'd', 'a', 't', '_', 'p', 'a', 'g', ',', 'p', 'o', 'r', 't', 'a', ',', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 7,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 7,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', '(', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01740 */ HB_P_LINEOFFSET, 70,	/* 87 */
	HB_P_MESSAGE, 20, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 21,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'S', 'E', 'T', ' ', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', '=', ' ', 39, 'P', 39, ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 7,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 7,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', '(', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'A', 'N', 'D', ' ', 'p', 'o', 'r', 't', 'a', ' ', 'L', 'I', 'K', 'E', ' ', 39, '%', '4', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01940 */ HB_P_LINEOFFSET, 71,	/* 88 */
	HB_P_PUSHSYMNEAR, 42,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'C', 'H', '_', 'P', 'A', 'R', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 01973) */
/* 01968 */ HB_P_LINEOFFSET, 72,	/* 89 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01973 */ HB_P_LINEOFFSET, 74,	/* 91 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 01988 */ HB_P_LINEOFFSET, 75,	/* 92 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 02004 */ HB_P_LINEOFFSET, 77,	/* 94 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'M', 'e', 's', 'a', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02047 */ HB_P_LINEOFFSET, 78,	/* 95 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '-', 0, 
	HB_P_DOSHORT, 2,
/* 02063 */ HB_P_LINEOFFSET, 79,	/* 96 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 02078 */ HB_P_LINEOFFSET, 80,	/* 97 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02093 */ HB_P_LINEOFFSET, 82,	/* 99 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02117 */ HB_P_LINEOFFSET, 83,	/* 100 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 02132 */ HB_P_LINEOFFSET, 84,	/* 101 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 02148 */ HB_P_LINEOFFSET, 85,	/* 102 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_DOSHORT, 2,
/* 02198 */ HB_P_LINEOFFSET, 86,	/* 103 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02226 */ HB_P_LINEOFFSET, 87,	/* 104 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02280) */
/* 02242 */ HB_P_LINEOFFSET, 88,	/* 105 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02280 */ HB_P_LINEOFFSET, 90,	/* 107 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02338 */ HB_P_LINEOFFSET, 91,	/* 108 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '-', 0, 
	HB_P_DOSHORT, 2,
/* 02354 */ HB_P_LINEOFFSET, 92,	/* 109 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 02369 */ HB_P_LINEOFFSET, 93,	/* 110 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	15, 0, 
	HB_P_DOSHORT, 1,
/* 02394 */ HB_P_LINEOFFSET, 94,	/* 111 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02418 */ HB_P_LINEOFFSET, 95,	/* 112 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	18, 0, 
	HB_P_DOSHORT, 1,
/* 02443 */ HB_P_LINEOFFSET, 96,	/* 113 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'G', 'a', 'r', 'c', 'o', 'n', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02487 */ HB_P_LINEOFFSET, 98,	/* 115 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	15, 0, 
	HB_P_DOSHORT, 1,
/* 02512 */ HB_P_LINEOFFSET, 99,	/* 116 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02536 */ HB_P_LINEOFFSET, 100,	/* 117 */
	HB_P_PUSHSYMNEAR, 34,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHMEMVAR, 47, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	18, 0, 
	HB_P_DOSHORT, 1,
/* 02565 */ HB_P_LINEOFFSET, 101,	/* 118 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02574 */ HB_P_LINEOFFSET, 102,	/* 119 */
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02615 */ HB_P_LINEOFFSET, 103,	/* 120 */
	HB_P_PUSHSYMNEAR, 50,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'C', 'H', '_', 'P', 'A', 'R', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 02637 */ HB_P_LINEOFFSET, 104,	/* 121 */
	HB_P_MESSAGE, 20, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 21,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 192, 246,	/* -2368 (abs: 00293) */
/* 02664 */ HB_P_LINEOFFSET, 110,	/* 127 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 02685) */
	HB_P_PUSHSYMNEAR, 22,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSE, 137, 246,	/* -2423 (abs: 00262) */
/* 02688 */ HB_P_LINEOFFSET, 114,	/* 131 */
	HB_P_PUSHSYMNEAR, 51,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02695 */ HB_P_LINEOFFSET, 115,	/* 132 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02700 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

