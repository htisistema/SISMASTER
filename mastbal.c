/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <mastbal.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\mastbal.prg /q /oc:\HTI\sismaster\mastbal.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.05.30 12:24:46 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "mastbal.prg"

HB_FUNC( MASTBAL );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( F4_MERC );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( OP_SIMNAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MASTBAL )
{ "MASTBAL", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MASTBAL )}, NULL },
{ "MPRG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MTP_OP_REL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "F4_MERC", {HB_FS_PUBLIC}, {HB_FUNCNAME( F4_MERC )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MASTBAL )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MASTBAL
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MASTBAL = hb_vm_SymbolInit_MASTBAL;
   #pragma data_seg()
#endif

HB_FUNC( MASTBAL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* MPRECO 0*/
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* MCUSTO 0*/
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MQTD 0*/
/* 00027 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'M', 'A', 'S', 'T', 'B', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 6,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MPRG */
	HB_P_PUSHSYMNEAR, 2,	/* MTIT */
	HB_P_PUSHSYMNEAR, 3,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MPAG */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_MERC */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_MERC */
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
	HB_P_POPVARIABLE, 1, 0,	/* MPRG */
/* 00077 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_PUSHSYMNEAR, 7,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00133) */
/* 00128 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00133 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_OP */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 00213) */
/* 00141 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', 'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', '*', '*', '*', ' ', 'S', ' ', 'A', ' ', 'I', ' ', 'D', ' ', 'A', ' ', 'S', ' ', '*', '*', '*', ' ', ' ', '[', 0, 
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
	HB_P_JUMPNEAR, 76,	/* 76 (abs: 00287) */
/* 00213 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	' ', 'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', '*', '*', '*', ' ', 'E', ' ', 'N', ' ', 'T', ' ', 'R', ' ', 'A', ' ', 'D', ' ', 'A', ' ', 'S', ' ', '*', '*', '*', ' ', ' ', '[', 0, 
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00287 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_LOCALNEARSETINT, 2, 35, 0,	/* LBA 35*/
/* 00293 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_LOCALNEARSETINT, 3, 70, 0,	/* CBA 70*/
/* 00299 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 10,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 11, 0,	/* GETLIST */
/* 00313 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 12,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00321 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00334 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 14,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00344 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MQTD 0*/
	HB_P_PUSHLOCALNEAR, 8,	/* MQTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* MCUSTO */
	HB_P_POPLOCALNEAR, 6,	/* MPRECO */
/* 00357 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_POPVARIABLE, 15, 0,	/* MTP_OP_REL */
/* 00366 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_MERC */
/* 00372 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00419 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00461 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'd', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00504 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'Q', 'u', 'a', 't', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00568 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00611 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'C', 'u', 's', 't', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00654 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00712 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 23,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 11, 0,	/* GETLIST */
/* 00734 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00758) */
/* 00746 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00753 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00758 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 87,	/* 87 (abs: 00855) */
/* 00770 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 27,	/* F4_MERC */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00777 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_MERC */
/* 00784 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_JUMP, 149, 0,	/* 149 (abs: 01001) */
/* 00855 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 136, 0,	/* 136 (abs: 01001) */
/* 00868 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_MERC */
/* 00875 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00943 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 31,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 01001) */
/* 00956 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 32,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'N', 'A', 'O', ' ', 'E', 'x', 'i', 's', 't', 'e', ' ', 'n', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 83, 253,	/* -685 (abs: 00313) */
/* 01001 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01025) */
/* 01013 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01020 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01025 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01053 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01076 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01118 */ HB_P_LINEOFFSET, 54,	/* 62 */
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 6,	/* MPRECO */
/* 01129 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* MCUSTO */
/* 01140 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MQTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01179) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01184) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'q', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01224 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MPRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01263) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01268) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'p', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01309 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MCUSTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01348) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01353) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'c', 'u', 's', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01395 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 23,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 11, 0,	/* GETLIST */
/* 01417 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 35,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 36, 0,	/* OPCAO */
/* 01465 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01487) */
	HB_P_PUSHVARIABLE, 36, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01492) */
	HB_P_JUMP, 104, 251,	/* -1176 (abs: 00313) */
/* 01492 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_OP */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01554) */
/* 01500 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'S', 'E', 'T', ' ', 's', 'a', 'l', 'd', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 8,	/* MQTD */
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 37, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 01606) */
/* 01554 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'S', 'E', 'T', ' ', 's', 'a', 'l', 'd', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 8,	/* MQTD */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 37, 0,	/* CCOMM */
/* 01606 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHVARIABLE, 37, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MPRECO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 37, 0,	/* CCOMM */
/* 01639 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_PUSHVARIABLE, 37, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	',', 'c', 'u', 's', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MCUSTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 37, 0,	/* CCOMM */
/* 01668 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHVARIABLE, 37, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 37, 0,	/* CCOMM */
/* 01708 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 37, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01726 */ HB_P_LINEOFFSET, 73,	/* 81 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 99, 250,	/* -1437 (abs: 00313) */
	HB_P_ENDPROC
/* 01754 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

