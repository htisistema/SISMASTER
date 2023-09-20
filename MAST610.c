/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <MAST610.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\MAST610.PRG /q /oc:\HTI\sismaster\MAST610.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.05.30 12:24:44 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "MAST610.PRG"

HB_FUNC( MAST610 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SR_CDBVALUE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAST610 )
{ "MAST610", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAST610 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "MOP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAST610 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MAST610
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MAST610 = hb_vm_SymbolInit_MAST610;
   #pragma data_seg()
#endif

HB_FUNC( MAST610 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '6', '1', '0', 0, 
	HB_P_LOCALNEARSETSTR, 3, 24, 0,	/* MTITULO 24*/
	'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* POINT 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* M_SET */
	HB_P_LOCALNEARSETSTR, 8, 1, 0,	/* MSERIE 1*/
	0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MCOD_ACESS */
/* 00073 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_PUSHSYMNEAR, 2,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 3, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00107) */
/* 00102 */ HB_P_LINEOFFSET, 3,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00107 */ HB_P_LINEOFFSET, 6,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 00121 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00138 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* M_SET */
/* 00145 */ HB_P_LINEOFFSET, 9,	/* 18 */
	HB_P_MESSAGE, 7, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 8,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 7, 0,	/* M_SET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00188 */ HB_P_LINEOFFSET, 11,	/* 20 */
	HB_P_PUSHSYMNEAR, 9,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 8,	/* MSERIE */
/* 00197 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 10,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00206 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00214 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* DEMO_SET */
/* 00221 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'D', ' ', 'A', ' ', ' ', ' ', 'E', ' ', 'M', ' ', 'P', ' ', 'R', ' ', 'E', ' ', 'S', ' ', 'A', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00289 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00347 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '3', ' ', '-', ' ', 'S', 'e', 'r', 'i', 'e', ' ', 'd', 'o', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00428 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '6', ' ', '-', ' ', 'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00514 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '2', ' ', '-', ' ', 'R', 'a', 'z', 'a', 'o', ' ', 'S', 'o', 'c', 'i', 'a', 'l', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00595 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '3', ' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00676 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '5', ' ', '-', ' ', 'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00757 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '6', ' ', '-', ' ', 'N', 'u', 'm', 'e', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00838 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '7', ' ', '-', ' ', 'C', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00919 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '8', ' ', '-', ' ', 'B', 'a', 'i', 'r', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01000 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '9', ' ', '-', ' ', 'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01081 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '0', ' ', '-', ' ', 'E', 's', 't', 'a', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01162 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '1', ' ', '-', ' ', 'C', 'E', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01243 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '2', ' ', '-', ' ', 'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01324 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '3', ' ', '-', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01405 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '3', ' ', '-', ' ', 'C', 'N', 'P', 'J', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01486 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '4', ' ', '-', ' ', 'I', 'n', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'E', 's', 't', 'a', 'd', 'u', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01567 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '0', ' ', '-', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'A', 'c', 'e', 's', 's', 'o', ' ', 'd', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01648 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01706 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'o', ' ', 'e', ' ', 's', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01746 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 01804 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '4', ' ', '-', ' ', 'U', 't', 'i', 'l', 'i', 'z', 'a', 'r', ' ', '[', 'R', ']', 'a', 'z', 'a', 'o', ' ', 'S', 'o', 'c', 'i', 'a', 'l', ' ', 'o', 'u', ' ', '[', 'F', ']', 'a', 'n', 't', 'a', 's', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01885 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '7', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01966 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '0', ' ', '-', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02047 */ HB_P_LINEOFFSET, 39,	/* 48 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '4', ' ', '-', ' ', 'C', 'o', 'b', 'r', 'a', 'r', ' ', 'o', 's', ' ', '1', '0', '%', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02128 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '5', ' ', '-', ' ', 'U', 's', 'a', 'r', ' ', 'o', 's', ' ', 'G', 'R', 'U', 'P', 'O', 'S', ' ', 'p', 'a', 'r', 'a', ' ', 'l', 'a', 'n', 'c', 'a', 'r', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02209 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '6', ' ', '-', ' ', 'M', 'o', 'd', 'o', ' ', 'd', 'e', ' ', 'l', 'a', 'n', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', '[', '1', ',', '2', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02290 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '7', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'e', 's', 's', 'o', 'a', 's', ' ', 'n', 'a', ' ', 'M', 'e', 's', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02371 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '1', ' ', '-', ' ', 'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'd', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', ' ', '(', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', ')', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02452 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '2', ' ', '-', ' ', 'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'd', 'o', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', '.', '.', '.', '.', '.', '.', '(', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', ')', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02533 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '3', ' ', '-', ' ', 'I', 'C', 'M', 'S', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02628 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '4', ' ', '-', ' ', 'O', 'p', 't', 'a', 'n', 't', 'e', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'I', 'M', 'P', 'L', 'E', 'S', ' ', 'N', 'A', 'C', 'I', 'O', 'N', 'A', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02709 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02756 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_PUSHSYMNEAR, 16,	/* ACHOICE */
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
/* 02777 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 23,	/* 6127 (abs: 08914) */
/* 02790 */ HB_P_LINEOFFSET, 51,	/* 60 */
	HB_P_PUSHSYMNEAR, 18,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 19, 0,	/* MOP */
/* 02808 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 225, 0,	/* 225 (abs: 03045) */
/* 02823 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', 'A', 'Z', 'A', 'O', ' ', 'S', 'O', 'C', 'I', 'A', 'L', ' ', 'D', 'A', ' ', 'E', 'M', 'P', 'R', 'E', 'S', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 02869 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'R', 'A', 'Z', 'A', 'O', ' ', 'S', 'O', 'C', 'I', 'A', 'L', ' ', 'D', 'A', ' ', 'E', 'M', 'P', 'R', 'E', 'S', 'A', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02911 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02991 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 03013 */ HB_P_LINEOFFSET, 70,	/* 79 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03035) */
/* 03025 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 228, 244,	/* -2844 (abs: 00188) */
/* 03035 */ HB_P_LINEOFFSET, 74,	/* 83 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 218, 244,	/* -2854 (abs: 00188) */
/* 03045 */ HB_P_LINEOFFSET, 76,	/* 85 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 227, 0,	/* 227 (abs: 03284) */
/* 03060 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'O', 'M', 'E', ' ', 'F', 'A', 'N', 'T', 'A', 'S', 'I', 'A', ' ', 'D', 'A', ' ', 'E', 'M', 'P', 'R', 'E', 'S', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 03107 */ HB_P_LINEOFFSET, 78,	/* 87 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'N', 'O', 'M', 'E', ' ', 'F', 'A', 'N', 'T', 'A', 'S', 'I', 'A', ' ', 'D', 'A', ' ', 'E', 'M', 'P', 'R', 'E', 'S', 'A', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03150 */ HB_P_LINEOFFSET, 79,	/* 88 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03230 */ HB_P_LINEOFFSET, 80,	/* 89 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 03252 */ HB_P_LINEOFFSET, 81,	/* 90 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03274) */
/* 03264 */ HB_P_LINEOFFSET, 82,	/* 91 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 245, 243,	/* -3083 (abs: 00188) */
/* 03274 */ HB_P_LINEOFFSET, 85,	/* 94 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 235, 243,	/* -3093 (abs: 00188) */
/* 03284 */ HB_P_LINEOFFSET, 87,	/* 96 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 217, 0,	/* 217 (abs: 03513) */
/* 03299 */ HB_P_LINEOFFSET, 88,	/* 97 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'N', 'D', 'E', 'R', 'E', 'C', 'O', ' ', 'D', 'A', ' ', 'E', 'M', 'P', 'R', 'E', 'S', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 03341 */ HB_P_LINEOFFSET, 89,	/* 98 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'E', 'N', 'D', 'E', 'R', 'E', 'C', 'O', ' ', 'D', 'A', ' ', 'E', 'M', 'P', 'R', 'E', 'S', 'A', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03379 */ HB_P_LINEOFFSET, 90,	/* 99 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03459 */ HB_P_LINEOFFSET, 91,	/* 100 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 03481 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03503) */
/* 03493 */ HB_P_LINEOFFSET, 93,	/* 102 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 16, 243,	/* -3312 (abs: 00188) */
/* 03503 */ HB_P_LINEOFFSET, 96,	/* 105 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 6, 243,	/* -3322 (abs: 00188) */
/* 03513 */ HB_P_LINEOFFSET, 98,	/* 107 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 191, 0,	/* 191 (abs: 03716) */
/* 03528 */ HB_P_LINEOFFSET, 99,	/* 108 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'N', 'U', 'M', 'E', 'R', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 03557 */ HB_P_LINEOFFSET, 100,	/* 109 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', 'U', 'M', 'E', 'R', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03582 */ HB_P_LINEOFFSET, 101,	/* 110 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03662 */ HB_P_LINEOFFSET, 102,	/* 111 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 03684 */ HB_P_LINEOFFSET, 103,	/* 112 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03706) */
/* 03696 */ HB_P_LINEOFFSET, 104,	/* 113 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 69, 242,	/* -3515 (abs: 00188) */
/* 03706 */ HB_P_LINEOFFSET, 107,	/* 116 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 59, 242,	/* -3525 (abs: 00188) */
/* 03716 */ HB_P_LINEOFFSET, 109,	/* 118 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 201, 0,	/* 201 (abs: 03929) */
/* 03731 */ HB_P_LINEOFFSET, 110,	/* 119 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'O', 'M', 'P', 'L', 'E', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 03765 */ HB_P_LINEOFFSET, 111,	/* 120 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'O', 'M', 'P', 'L', 'E', 'M', 'E', 'N', 'T', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03795 */ HB_P_LINEOFFSET, 112,	/* 121 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03875 */ HB_P_LINEOFFSET, 113,	/* 122 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 03897 */ HB_P_LINEOFFSET, 114,	/* 123 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03919) */
/* 03909 */ HB_P_LINEOFFSET, 115,	/* 124 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 112, 241,	/* -3728 (abs: 00188) */
/* 03919 */ HB_P_LINEOFFSET, 118,	/* 127 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 102, 241,	/* -3738 (abs: 00188) */
/* 03929 */ HB_P_LINEOFFSET, 120,	/* 129 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 191, 0,	/* 191 (abs: 04132) */
/* 03944 */ HB_P_LINEOFFSET, 121,	/* 130 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'A', 'I', 'R', 'R', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 03973 */ HB_P_LINEOFFSET, 122,	/* 131 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'B', 'A', 'I', 'R', 'R', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03998 */ HB_P_LINEOFFSET, 123,	/* 132 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04078 */ HB_P_LINEOFFSET, 124,	/* 133 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 04100 */ HB_P_LINEOFFSET, 125,	/* 134 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04122) */
/* 04112 */ HB_P_LINEOFFSET, 126,	/* 135 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 165, 240,	/* -3931 (abs: 00188) */
/* 04122 */ HB_P_LINEOFFSET, 129,	/* 138 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 155, 240,	/* -3941 (abs: 00188) */
/* 04132 */ HB_P_LINEOFFSET, 131,	/* 140 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 191, 0,	/* 191 (abs: 04335) */
/* 04147 */ HB_P_LINEOFFSET, 132,	/* 141 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'I', 'D', 'A', 'D', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 04176 */ HB_P_LINEOFFSET, 133,	/* 142 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'I', 'D', 'A', 'D', 'E', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04201 */ HB_P_LINEOFFSET, 134,	/* 143 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04281 */ HB_P_LINEOFFSET, 135,	/* 144 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 04303 */ HB_P_LINEOFFSET, 136,	/* 145 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04325) */
/* 04315 */ HB_P_LINEOFFSET, 137,	/* 146 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 218, 239,	/* -4134 (abs: 00188) */
/* 04325 */ HB_P_LINEOFFSET, 140,	/* 149 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 208, 239,	/* -4144 (abs: 00188) */
/* 04335 */ HB_P_LINEOFFSET, 142,	/* 151 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 191, 0,	/* 191 (abs: 04538) */
/* 04350 */ HB_P_LINEOFFSET, 143,	/* 152 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'E', 'S', 'T', 'A', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 04379 */ HB_P_LINEOFFSET, 144,	/* 153 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'S', 'T', 'A', 'D', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04404 */ HB_P_LINEOFFSET, 145,	/* 154 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04484 */ HB_P_LINEOFFSET, 146,	/* 155 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 04506 */ HB_P_LINEOFFSET, 147,	/* 156 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04528) */
/* 04518 */ HB_P_LINEOFFSET, 148,	/* 157 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 15, 239,	/* -4337 (abs: 00188) */
/* 04528 */ HB_P_LINEOFFSET, 151,	/* 160 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 5, 239,	/* -4347 (abs: 00188) */
/* 04538 */ HB_P_LINEOFFSET, 153,	/* 162 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 189, 0,	/* 189 (abs: 04739) */
/* 04553 */ HB_P_LINEOFFSET, 154,	/* 163 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ' ', 'E', ' ', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 04581 */ HB_P_LINEOFFSET, 155,	/* 164 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', ' ', 'E', ' ', 'P', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04605 */ HB_P_LINEOFFSET, 156,	/* 165 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04685 */ HB_P_LINEOFFSET, 157,	/* 166 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 04707 */ HB_P_LINEOFFSET, 158,	/* 167 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04729) */
/* 04719 */ HB_P_LINEOFFSET, 159,	/* 168 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 70, 238,	/* -4538 (abs: 00188) */
/* 04729 */ HB_P_LINEOFFSET, 162,	/* 171 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 60, 238,	/* -4548 (abs: 00188) */
/* 04739 */ HB_P_LINEOFFSET, 164,	/* 173 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 195, 0,	/* 195 (abs: 04946) */
/* 04754 */ HB_P_LINEOFFSET, 165,	/* 174 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'E', 'L', 'E', 'F', 'O', 'N', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 04785 */ HB_P_LINEOFFSET, 166,	/* 175 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'E', 'L', 'E', 'F', 'O', 'N', 'E', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04812 */ HB_P_LINEOFFSET, 167,	/* 176 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04892 */ HB_P_LINEOFFSET, 168,	/* 177 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 04914 */ HB_P_LINEOFFSET, 169,	/* 178 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04936) */
/* 04926 */ HB_P_LINEOFFSET, 170,	/* 179 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 119, 237,	/* -4745 (abs: 00188) */
/* 04936 */ HB_P_LINEOFFSET, 173,	/* 182 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 109, 237,	/* -4755 (abs: 00188) */
/* 04946 */ HB_P_LINEOFFSET, 175,	/* 184 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 186, 0,	/* 186 (abs: 05144) */
/* 04961 */ HB_P_LINEOFFSET, 176,	/* 185 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'M', 'A', 'I', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 04989 */ HB_P_LINEOFFSET, 177,	/* 186 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'M', 'A', 'I', 'L', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05014 */ HB_P_LINEOFFSET, 178,	/* 187 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05090 */ HB_P_LINEOFFSET, 179,	/* 188 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 05112 */ HB_P_LINEOFFSET, 180,	/* 189 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 05134) */
/* 05124 */ HB_P_LINEOFFSET, 181,	/* 190 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 177, 236,	/* -4943 (abs: 00188) */
/* 05134 */ HB_P_LINEOFFSET, 184,	/* 193 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 167, 236,	/* -4953 (abs: 00188) */
/* 05144 */ HB_P_LINEOFFSET, 186,	/* 195 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 215, 0,	/* 215 (abs: 05371) */
/* 05159 */ HB_P_LINEOFFSET, 187,	/* 196 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'N', 'S', 'C', 'R', 'I', 'C', 'A', 'O', ' ', 'E', 'S', 'T', 'A', 'D', 'U', 'A', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 05200 */ HB_P_LINEOFFSET, 188,	/* 197 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'I', 'N', 'S', 'C', 'R', 'I', 'C', 'A', 'O', ' ', 'E', 'S', 'T', 'A', 'D', 'U', 'A', 'L', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05237 */ HB_P_LINEOFFSET, 189,	/* 198 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05317 */ HB_P_LINEOFFSET, 190,	/* 199 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 05339 */ HB_P_LINEOFFSET, 191,	/* 200 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 05361) */
/* 05351 */ HB_P_LINEOFFSET, 192,	/* 201 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 206, 235,	/* -5170 (abs: 00188) */
/* 05361 */ HB_P_LINEOFFSET, 195,	/* 204 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 196, 235,	/* -5180 (abs: 00188) */
/* 05371 */ HB_P_LINEOFFSET, 197,	/* 206 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 25, 1,	/* 281 (abs: 05664) */
/* 05386 */ HB_P_LINEOFFSET, 198,	/* 207 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'U', 't', 'i', 'l', 'i', 'z', 'a', 'r', ' ', '[', 'R', ']', 'a', 'z', 'a', 'o', ' ', 'S', 'o', 'c', 'i', 'a', 'l', ' ', 'o', 'u', ' ', '[', 'F', ']', 'a', 'n', 't', 'a', 's', 'i', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 05446 */ HB_P_LINEOFFSET, 199,	/* 208 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'U', 't', 'i', 'l', 'i', 'z', 'a', 'r', ' ', '[', 'R', ']', 'a', 'z', 'a', 'o', ' ', 'S', 'o', 'c', 'i', 'a', 'l', ' ', 'o', 'u', ' ', '[', 'F', ']', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05501 */ HB_P_LINEOFFSET, 200,	/* 209 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'F', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05610 */ HB_P_LINEOFFSET, 201,	/* 210 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 05632 */ HB_P_LINEOFFSET, 202,	/* 211 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 05654) */
/* 05644 */ HB_P_LINEOFFSET, 203,	/* 212 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 169, 234,	/* -5463 (abs: 00188) */
/* 05654 */ HB_P_LINEOFFSET, 206,	/* 215 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 159, 234,	/* -5473 (abs: 00188) */
/* 05664 */ HB_P_LINEOFFSET, 208,	/* 217 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 05930) */
/* 05679 */ HB_P_LINEOFFSET, 209,	/* 218 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 05722 */ HB_P_LINEOFFSET, 210,	/* 219 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', '[', 'S', ',', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05767 */ HB_P_LINEOFFSET, 211,	/* 220 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05876 */ HB_P_LINEOFFSET, 212,	/* 221 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 05898 */ HB_P_LINEOFFSET, 213,	/* 222 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 05920) */
/* 05910 */ HB_P_LINEOFFSET, 214,	/* 223 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 159, 233,	/* -5729 (abs: 00188) */
/* 05920 */ HB_P_LINEOFFSET, 217,	/* 226 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 149, 233,	/* -5739 (abs: 00188) */
/* 05930 */ HB_P_LINEOFFSET, 219,	/* 228 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 209, 0,	/* 209 (abs: 06151) */
/* 05945 */ HB_P_LINEOFFSET, 220,	/* 229 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 05983 */ HB_P_LINEOFFSET, 221,	/* 230 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06017 */ HB_P_LINEOFFSET, 222,	/* 231 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06097 */ HB_P_LINEOFFSET, 223,	/* 232 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 06119 */ HB_P_LINEOFFSET, 224,	/* 233 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06141) */
/* 06131 */ HB_P_LINEOFFSET, 225,	/* 234 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 194, 232,	/* -5950 (abs: 00188) */
/* 06141 */ HB_P_LINEOFFSET, 228,	/* 237 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 184, 232,	/* -5960 (abs: 00188) */
/* 06151 */ HB_P_LINEOFFSET, 230,	/* 239 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 06177) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 29, 0,	/* COD_OPERADO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 191, 0,	/* 191 (abs: 06368) */
/* 06180 */ HB_P_LINEOFFSET, 231,	/* 240 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'N', 'P', 'J', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 06207 */ HB_P_LINEOFFSET, 232,	/* 241 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'N', 'P', 'J', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06234 */ HB_P_LINEOFFSET, 233,	/* 242 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06314 */ HB_P_LINEOFFSET, 234,	/* 243 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 06336 */ HB_P_LINEOFFSET, 235,	/* 244 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06358) */
/* 06348 */ HB_P_LINEOFFSET, 236,	/* 245 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 233, 231,	/* -6167 (abs: 00188) */
/* 06358 */ HB_P_LINEOFFSET, 239,	/* 248 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 223, 231,	/* -6177 (abs: 00188) */
/* 06368 */ HB_P_LINEOFFSET, 241,	/* 250 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 241, 0,	/* 241 (abs: 06621) */
/* 06383 */ HB_P_LINEOFFSET, 242,	/* 251 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'b', 'r', 'a', 'r', ' ', 'o', 's', ' ', '1', '0', '%', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 06419 */ HB_P_LINEOFFSET, 243,	/* 252 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'b', 'r', 'a', 'r', ' ', 'o', 's', ' ', '1', '0', '%', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06458 */ HB_P_LINEOFFSET, 244,	/* 253 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06567 */ HB_P_LINEOFFSET, 245,	/* 254 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 06589 */ HB_P_LINEOFFSET, 246,	/* 255 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06611) */
/* 06601 */ HB_P_LINEOFFSET, 247,	/* 256 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 236, 230,	/* -6420 (abs: 00188) */
/* 06611 */ HB_P_LINEOFFSET, 250,	/* 259 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 226, 230,	/* -6430 (abs: 00188) */
/* 06621 */ HB_P_LINEOFFSET, 252,	/* 261 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 32, 1,	/* 288 (abs: 06921) */
/* 06636 */ HB_P_LINEOFFSET, 253,	/* 262 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'U', 's', 'a', 'r', ' ', 'o', 's', ' ', 'G', 'R', 'U', 'P', 'O', 'S', ' ', 'p', 'a', 'r', 'a', ' ', 'l', 'a', 'n', 'c', 'a', 'r', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 06694 */ HB_P_LINEOFFSET, 254,	/* 263 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'U', 's', 'a', 'r', ' ', 'o', 's', ' ', 'G', 'R', 'U', 'P', 'O', 'S', ' ', 'p', 'a', 'r', 'a', ' ', 'l', 'a', 'n', 'c', 'a', 'r', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'S', ',', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06754 */ HB_P_LINEOFFSET, 255,	/* 264 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06863 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 06886 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 06910) */
/* 06899 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 193, 229,	/* -6719 (abs: 00188) */
/* 06910 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 182, 229,	/* -6730 (abs: 00188) */
/* 06921 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 1,	/* 257 (abs: 07191) */
/* 06937 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'l', 'a', 'n', 'c', 'a', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 06979 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'l', 'a', 'n', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', '[', '1', ',', '2', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07023 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', ',', '2', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07133 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 07156 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 07180) */
/* 07169 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 179, 228,	/* -6989 (abs: 00188) */
/* 07180 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 168, 228,	/* -7000 (abs: 00188) */
/* 07191 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 41, 1,	/* 297 (abs: 07501) */
/* 07207 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'e', 's', 's', 'o', 'a', 's', ' ', 'n', 'a', ' ', 'M', 'e', 's', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 07269 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'e', 's', 's', 'o', 'a', 's', ' ', 'n', 'a', ' ', 'M', 'e', 's', 'a', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07333 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07443 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 07466 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 07490) */
/* 07479 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 125, 227,	/* -7299 (abs: 00188) */
/* 07490 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 114, 227,	/* -7310 (abs: 00188) */
/* 07501 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 1,	/* 262 (abs: 07776) */
/* 07517 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'A', 'c', 'e', 's', 's', 'o', ' ', 'd', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 07569 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'A', 'c', 'e', 's', 's', 'o', ' ', 'd', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07616 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07693) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 07694) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07718 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 07741 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 07765) */
/* 07754 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 106, 226,	/* -7574 (abs: 00188) */
/* 07765 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 95, 226,	/* -7585 (abs: 00188) */
/* 07776 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 26, 1,	/* 282 (abs: 08071) */
/* 07792 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'd', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 07848 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'd', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07899 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07982) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 07983) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08013 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 08036 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 08060) */
/* 08049 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 67, 225,	/* -7869 (abs: 00188) */
/* 08060 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 56, 225,	/* -7880 (abs: 00188) */
/* 08071 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 16, 1,	/* 272 (abs: 08356) */
/* 08087 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'd', 'a', ' ', 'V', 'A', 'L', 'O', 'R', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 08138 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'd', 'a', ' ', 'V', 'A', 'L', 'O', 'R', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08184 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08267) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 08268) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08298 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 08321 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 08345) */
/* 08334 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 38, 224,	/* -8154 (abs: 00188) */
/* 08345 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 27, 224,	/* -8165 (abs: 00188) */
/* 08356 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 250, 0,	/* 250 (abs: 08619) */
/* 08372 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'I', 'C', 'M', 'S', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 08410 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'C', 'M', 'S', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ' ', '(', '%', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08447 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08530) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 08531) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08561 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 08584 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 08608) */
/* 08597 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 31, 223,	/* -8417 (abs: 00188) */
/* 08608 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 20, 223,	/* -8428 (abs: 00188) */
/* 08619 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 205, 5,	/* 1485 (abs: 10117) */
/* 08635 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 6,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'O', 'p', 't', 'a', 'n', 't', 'e', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'I', 'M', 'P', 'L', 'E', 'S', ' ', 'N', 'A', 'C', 'I', 'O', 'N', 'A', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 08688 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'O', 'p', 't', 'a', 'n', 't', 'e', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'I', 'M', 'P', 'L', 'E', 'S', ' ', 'N', 'A', 'C', 'I', 'O', 'N', 'A', 'L', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08742 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 22,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 23,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_SET */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08825) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 08826) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 25,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 5, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08856 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* GETLIST */
/* 08879 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 08903) */
/* 08892 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 248, 221,	/* -8712 (abs: 00188) */
/* 08903 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 237, 221,	/* -8723 (abs: 00188) */
/* 08914 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 17,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 223, 221,	/* -8737 (abs: 00188) */
/* 08928 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MSERIE */
/* 08991 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 31,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', 's', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'o', 'e', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 250, 3,	/* 1018 (abs: 10055) */
/* 09040 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_MESSAGE, 7, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 8,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'S', 'E', 'T', ' ', ' ', 'v', 'e', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'r', 'a', 'z', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'n', 'o', 'm', 'e', '_', 'c', 'a', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'e', 'n', 'd', '_', 'f', 'i', 'r', 'm', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'u', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'e', 'p', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'o', 'n', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'e', 'm', 'a', 'i', 'l', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'i', 'n', 's', 'c', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'y', 's', 'd', 'a', 't', 'l', 'm', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'a', 't', 'a', 'i', 'n', 'i', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'r', 'o', 'd', 'a', 'p', '1', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'r', 'o', 'd', 'a', 'p', '2', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'l', 'i', '_', 'd', 'e', 'f', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'e', 'z', '_', 'p', 'e', 'r', 'c', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'u', 's', 'a', '_', 'g', 'r', 'u', 'p', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'i', 'p', '_', 'l', 'a', 'n', 'c', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'q', 't', 'd', '_', 'p', 'e', 's', 's', 'o', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'o', 'd', '_', 'a', 'c', 'e', 's', 's', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'm', 'a', 's', 'c', '_', 'q', 't', 'd', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'm', 'a', 's', 'c', '_', 'v', 'l', 'r', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'i', 'c', 'm', '_', 'f', 'i', 'r', 'm', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'e', 'r', 'i', 'e', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MSERIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'n', 'p', 'j', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'S', 'I', 'M', 'P', '_', 'N', 'A', 'C', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10030 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_MESSAGE, 7, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 8,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10055 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* M_SET */
/* 10063 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_MESSAGE, 7, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 8,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 7, 0,	/* M_SET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10107 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 10120) */
	HB_P_JUMP, 55, 217,	/* -9929 (abs: 00188) */
/* 10120 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 10126 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

