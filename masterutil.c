/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <masterutil.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\masterutil.prg /q /oc:\HTI\sismaster\masterutil.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.27 10:14:48 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "masterutil.prg"

HB_FUNC( MASTERUTIL );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ATENCAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MASTERUTIL )
{ "MASTERUTIL", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MASTERUTIL )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MASTERUTIL )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MASTERUTIL
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MASTERUTIL = hb_vm_SymbolInit_MASTERUTIL;
   #pragma data_seg()
#endif

HB_FUNC( MASTERUTIL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 14, 0,	/* 14 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* I 0*/
/* 00010 */ HB_P_LINEOFFSET, 2,	/* 16 */
	HB_P_PUSHVARIABLE, 1, 0,	/* COD_OPERADO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00029) */
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00029 */ HB_P_LINEOFFSET, 5,	/* 19 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* MCONS_EST */
/* 00036 */ HB_P_LINEOFFSET, 6,	/* 20 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 2, 0,	/* MCONS_EST */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00079 */ HB_P_LINEOFFSET, 7,	/* 21 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'O', 'N', 'V', 'E', 'R', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00117 */ HB_P_LINEOFFSET, 9,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'R', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00158 */ HB_P_LINEOFFSET, 10,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'R', 'e', 's', 't', 'a', 'n', 't', 'e', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00200 */ HB_P_LINEOFFSET, 12,	/* 26 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 8, 0,	/* OPCAO */
/* 00237 */ HB_P_LINEOFFSET, 13,	/* 27 */
	HB_P_PUSHVARIABLE, 8, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00259) */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00273) */
/* 00261 */ HB_P_LINEOFFSET, 14,	/* 28 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00268 */ HB_P_LINEOFFSET, 15,	/* 29 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00273 */ HB_P_LINEOFFSET, 17,	/* 31 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* I 0*/
/* 00279 */ HB_P_LINEOFFSET, 18,	/* 32 */
	HB_P_LOCALNEARSETINT, 1, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_PUSHSYMNEAR, 11,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MCONS_EST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 180, 0,	/* 180 (abs: 00475) */
/* 00298 */ HB_P_LINEOFFSET, 19,	/* 33 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'u', 'p', 'd', 'a', 't', 'e', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 's', 'e', 't', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MCONS_EST */
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 12,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MCONS_EST */
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00392 */ HB_P_LINEOFFSET, 20,	/* 34 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00425 */ HB_P_LINEOFFSET, 21,	/* 35 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MCONS_EST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 1,	/* I */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00466 */ HB_P_LINEOFFSET, 22,	/* 36 */
	HB_P_LOCALNEARADDINT, 1, 1, 0,	/* I 1*/
	HB_P_JUMP, 69, 255,	/* -187 (abs: 00285) */
/* 00475 */ HB_P_LINEOFFSET, 23,	/* 37 */
	HB_P_MESSAGE, 2, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 3,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00499 */ HB_P_LINEOFFSET, 24,	/* 38 */
	HB_P_PUSHSYMNEAR, 14,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'o', 'n', 'v', 'e', 'r', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'b', 'a', 'n', 'c', 'o', ' ', 'd', 'e', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'r', 'e', 'a', 'l', 'i', 'z', 'a', 'd', 'a', ' ', 'c', 'o', 'm', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00562 */ HB_P_LINEOFFSET, 25,	/* 39 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00569 */ HB_P_LINEOFFSET, 26,	/* 40 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00574 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

