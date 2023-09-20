/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <MAST40.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\MAST40.PRG /q /oc:\HTI\sismaster\MAST40.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.05.30 12:24:44 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "MAST40.PRG"

HB_FUNC( MAST40 );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( LASTKEY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAST40 )
{ "MAST40", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAST40 )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAST40 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MAST40
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MAST40 = hb_vm_SymbolInit_MAST40;
   #pragma data_seg()
#endif

HB_FUNC( MAST40 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETSTR, 2, 6, 0,	/* MPRG 6*/
	'S', 'A', 'C', '4', '0', 0, 
	HB_P_LOCALNEARSETSTR, 3, 27, 0,	/* MTITULO 27*/
	'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'S', 'O', 'L', 'I', 'C', 'I', 'T', 'A', 'D', 'O', ' ', 'N', 'O', ' ', 'D', 'I', 'A', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* POINT 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* M_MOV */
/* 00061 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00095) */
/* 00090 */ HB_P_LINEOFFSET, 3,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00095 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* GETLIST */
/* 00109 */ HB_P_LINEOFFSET, 6,	/* 15 */
	HB_P_PUSHSYMNEAR, 5,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00126 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* M_MOV */
/* 00133 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'S', 'U', 'M', '(', 'q', 't', 'd', ')', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 86,	/* 86 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'q', 't', 'd', ',', 'q', 't', 'd', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 7, 0,	/* M_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00310 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHSYMNEAR, 10,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 00379) */
/* 00323 */ HB_P_LINEOFFSET, 11,	/* 20 */
	HB_P_PUSHSYMNEAR, 11,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'd', 'i', 'a', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00367 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 12,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00374 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00379 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00388 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHSYMNEAR, 14,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00396 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 15, 0,	/* I */
/* 00402 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* DEMO_SET */
/* 00409 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 15, 0,	/* I */
	HB_P_PUSHVARIABLE, 15, 0,	/* I */
	HB_P_PUSHSYMNEAR, 10,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 87,	/* 87 (abs: 00513) */
/* 00428 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSYMNEAR, 17,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_MOV */
	HB_P_PUSHVARIABLE, 15, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* M_MOV */
	HB_P_PUSHVARIABLE, 15, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 18,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_MOV */
	HB_P_PUSHVARIABLE, 15, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00502 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHVARIABLE, 15, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 15, 0,	/* I */
	HB_P_JUMPNEAR, 160,	/* -96 (abs: 00415) */
/* 00513 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSYMNEAR, 19,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'<', 'E', 'S', 'C', '>', ' ', 'o', 'u', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'R', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00549 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 20,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 6,	/* POINT */
/* 00570 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHSYMNEAR, 21,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00592) */
	HB_P_PUSHSYMNEAR, 21,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 43, 255,	/* -213 (abs: 00379) */
/* 00595 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 12,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00602 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00607 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

