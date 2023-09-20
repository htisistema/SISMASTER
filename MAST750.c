/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <MAST750.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\MAST750.PRG /q /oc:\HTI\sismaster\MAST750.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.15 09:05:01 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "MAST750.PRG"

HB_FUNC( MAST750 );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( HB_ISNULL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( TIME );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAST750 )
{ "MAST750", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAST750 )}, NULL },
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
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "MDATA_CKECKOUT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOBS_CKECKOUT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CONS_RESERVA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMANDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "HB_ISNULL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNULL )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAST750 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MAST750
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MAST750 = hb_vm_SymbolInit_MAST750;
   #pragma data_seg()
#endif

HB_FUNC( MAST750 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 16, 0,	/* 16 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'M', 'A', 'S', 'T', '7', '5', '0', 0, 
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* MQUARTO 0*/
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 17 */
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
	HB_P_PUSHSYMNEAR, 12,	/* __MVPRIVATE */
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
	HB_P_DOSHORT, 9,
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
	HB_P_POPVARIABLE, 8, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_POPVARIABLE, 6, 0,	/* MNUM_DOC */
	HB_P_POPVARIABLE, 4, 0,	/* MTRACO */
	HB_P_POPVARIABLE, 3, 0,	/* I */
	HB_P_POPVARIABLE, 2, 0,	/* ARET */
	HB_P_POPVARIABLE, 1, 0,	/* MNUM_MESA */
/* 00100 */ HB_P_LINEOFFSET, 3,	/* 19 */
	HB_P_PUSHSYMNEAR, 13,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'Q', 'T', 'O', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'H', 'E', 'C', 'K', ' ', 'O', 'U', 'T', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 14, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00152) */
/* 00147 */ HB_P_LINEOFFSET, 4,	/* 20 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00152 */ HB_P_LINEOFFSET, 6,	/* 22 */
	HB_P_PUSHSYMNEAR, 15,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'C', 'H', 'E', 'C', 'K', ' ', 'O', 'U', 'T', ' ', ' ', '[', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00191 */ HB_P_LINEOFFSET, 7,	/* 23 */
	HB_P_PUSHSYMNEAR, 16,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 17, 0,	/* GETLIST */
/* 00205 */ HB_P_LINEOFFSET, 9,	/* 25 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* MQUARTO 0*/
/* 00211 */ HB_P_LINEOFFSET, 10,	/* 26 */
	HB_P_PUSHSYMNEAR, 18,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 19, 0,	/* MDATA_CKECKOUT */
/* 00221 */ HB_P_LINEOFFSET, 11,	/* 27 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 20, 0,	/* MOBS_CKECKOUT */
/* 00233 */ HB_P_LINEOFFSET, 12,	/* 28 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'N', 'o', '.', 'Q', 'u', 'a', 'r', 't', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00264 */ HB_P_LINEOFFSET, 13,	/* 29 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00296 */ HB_P_LINEOFFSET, 14,	/* 30 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'a', 't', 'a', ' ', 'R', 'e', 's', 'e', 'r', 'v', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00328 */ HB_P_LINEOFFSET, 15,	/* 31 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'N', 'o', '.', ' ', 'R', 'e', 's', 'e', 'r', 'v', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00360 */ HB_P_LINEOFFSET, 16,	/* 32 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00392 */ HB_P_LINEOFFSET, 17,	/* 33 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00424 */ HB_P_LINEOFFSET, 18,	/* 34 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00456 */ HB_P_LINEOFFSET, 19,	/* 35 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'N', 'o', '.', 'R', 'e', 's', 'e', 'r', 'v', 'a', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00488 */ HB_P_LINEOFFSET, 20,	/* 36 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00520 */ HB_P_LINEOFFSET, 21,	/* 37 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'a', 't', 'a', ' ', 'C', 'h', 'e', 'c', 'k', 'i', 'n', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00552 */ HB_P_LINEOFFSET, 22,	/* 38 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'H', 'o', 'r', 'a', ' ', 'C', 'h', 'e', 'c', 'k', 'i', 'n', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00584 */ HB_P_LINEOFFSET, 23,	/* 39 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'O', 'p', 'e', 'r', '.', 'C', 'h', 'e', 'c', 'k', 'i', 'n', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00616 */ HB_P_LINEOFFSET, 24,	/* 40 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00648 */ HB_P_LINEOFFSET, 25,	/* 41 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'a', 't', 'a', ' ', 'C', 'h', 'e', 'c', 'k', 'O', 'U', 'T', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00680 */ HB_P_LINEOFFSET, 26,	/* 42 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00712 */ HB_P_LINEOFFSET, 27,	/* 43 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MQUARTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00750) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00755) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'r', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00791 */ HB_P_LINEOFFSET, 28,	/* 44 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 17, 0,	/* GETLIST */
/* 00813 */ HB_P_LINEOFFSET, 29,	/* 45 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00837) */
/* 00825 */ HB_P_LINEOFFSET, 30,	/* 46 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00832 */ HB_P_LINEOFFSET, 31,	/* 47 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00837 */ HB_P_LINEOFFSET, 33,	/* 49 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 30, 0,	/* CONS_RESERVA */
/* 00845 */ HB_P_LINEOFFSET, 34,	/* 50 */
	HB_P_PUSHSTRSHORT, 85,	/* 85 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'l', 'i', '.', 'r', 'a', 'z', 'a', 'o', ',', 'r', 'e', '.', 'q', 'u', 'a', 'r', 't', 'o', ',', ' ', 'd', 'a', 't', 'a', '_', 'r', 'e', 's', 'e', 'r', 'v', 'a', ',', 'r', 'e', 's', 'e', 'r', 'v', 'a', ',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ',', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ',', 0, 
	HB_P_POPVARIABLE, 31, 0,	/* COMANDO */
/* 00937 */ HB_P_LINEOFFSET, 35,	/* 51 */
	HB_P_PUSHVARIABLE, 31, 0,	/* COMANDO */
	HB_P_PUSHSTRSHORT, 140,	/* 140 */
	'(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'r', 'a', 'z', 'a', 'o', ' ', 'f', 'r', 'o', 'm', ' ', 'm', 'a', 's', 't', 'f', 'o', 'r', 'n', ' ', 'w', 'h', 'e', 'r', 'e', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 'r', 'e', '.', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ')', ',', ' ', 'r', 'e', 's', 'e', 'r', 'v', 'a', '_', 'f', 'o', 'r', 'n', ',', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'r', 'e', '.', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', ' ', 'd', 'a', 't', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'i', 'n', ',', 'h', 'o', 'r', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'i', 'n', ',', 'o', 'b', 's', '_', 'c', 'h', 'e', 'c', 'k', 'i', 'n', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* COMANDO */
/* 01088 */ HB_P_LINEOFFSET, 36,	/* 52 */
	HB_P_PUSHVARIABLE, 31, 0,	/* COMANDO */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', 'r', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* COMANDO */
/* 01120 */ HB_P_LINEOFFSET, 37,	/* 53 */
	HB_P_PUSHVARIABLE, 31, 0,	/* COMANDO */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'j', 'o', 'i', 'n', ' ', 'm', 'a', 's', 't', 'c', 'l', 'i', ' ', 'c', 'l', 'i', ' ', 'o', 'n', ' ', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'r', 'e', '.', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'r', 'e', '.', 'q', 'u', 'a', 'r', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MQUARTO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'r', 'e', '.', 's', 't', 'a', 't', 'u', 's', ' ', '=', ' ', 39, 'I', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* COMANDO */
/* 01234 */ HB_P_LINEOFFSET, 38,	/* 54 */
	HB_P_MESSAGE, 34, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 35,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 31, 0,	/* COMANDO */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 30, 0,	/* CONS_RESERVA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01255 */ HB_P_LINEOFFSET, 39,	/* 55 */
	HB_P_MESSAGE, 34, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 35,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01279 */ HB_P_LINEOFFSET, 40,	/* 56 */
	HB_P_PUSHSYMNEAR, 36,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* CONS_RESERVA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 01338) */
/* 01291 */ HB_P_LINEOFFSET, 41,	/* 57 */
	HB_P_PUSHSYMNEAR, 37,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'R', 'E', 'S', 'E', 'R', 'V', 'A', ' ', 'd', 'e', 's', 's', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 150, 251,	/* -1130 (abs: 00205) */
/* 01338 */ HB_P_LINEOFFSET, 45,	/* 61 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01377 */ HB_P_LINEOFFSET, 46,	/* 62 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01401 */ HB_P_LINEOFFSET, 47,	/* 63 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01425 */ HB_P_LINEOFFSET, 48,	/* 64 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01449 */ HB_P_LINEOFFSET, 49,	/* 65 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01473 */ HB_P_LINEOFFSET, 50,	/* 66 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01513 */ HB_P_LINEOFFSET, 51,	/* 67 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01537 */ HB_P_LINEOFFSET, 52,	/* 68 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01579 */ HB_P_LINEOFFSET, 53,	/* 69 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01603 */ HB_P_LINEOFFSET, 54,	/* 70 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01627 */ HB_P_LINEOFFSET, 55,	/* 71 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01651 */ HB_P_LINEOFFSET, 56,	/* 72 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'm', 'd', 'a', 't', 'a', '_', 'c', 'k', 'e', 'c', 'k', 'o', 'u', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01708 */ HB_P_LINEOFFSET, 57,	/* 73 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'o', 'b', 's', '_', 'c', 'k', 'e', 'c', 'k', 'o', 'u', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01764 */ HB_P_LINEOFFSET, 58,	/* 74 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 17, 0,	/* GETLIST */
/* 01786 */ HB_P_LINEOFFSET, 59,	/* 75 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01810) */
/* 01798 */ HB_P_LINEOFFSET, 60,	/* 76 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01805 */ HB_P_LINEOFFSET, 61,	/* 77 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01810 */ HB_P_LINEOFFSET, 63,	/* 79 */
	HB_P_PUSHSYMNEAR, 39,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'C', 'H', 'E', 'C', 'K', ' ', 'O', 'U', 'T', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 01853 */ HB_P_LINEOFFSET, 64,	/* 80 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 135, 249,	/* -1657 (abs: 00205) */
/* 01865 */ HB_P_LINEOFFSET, 65,	/* 81 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', 'S', 'E', 'T', ' ', 'd', 'a', 't', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MDATA_CKECKOUT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOBS_CKECKOUT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'h', 'o', 'r', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* COMANDO */
/* 01982 */ HB_P_LINEOFFSET, 66,	/* 82 */
	HB_P_PUSHVARIABLE, 31, 0,	/* COMANDO */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', ' ', 'o', 'p', 'e', 'r', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', ' ', 's', 't', 'a', 't', 'u', 's', ' ', '=', ' ', 39, 'O', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* COMANDO */
/* 02039 */ HB_P_LINEOFFSET, 67,	/* 83 */
	HB_P_PUSHVARIABLE, 31, 0,	/* COMANDO */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'q', 'u', 'a', 'r', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* CONS_RESERVA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 31, 0,	/* COMANDO */
/* 02147 */ HB_P_LINEOFFSET, 68,	/* 84 */
	HB_P_MESSAGE, 34, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 35,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 31, 0,	/* COMANDO */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02165 */ HB_P_LINEOFFSET, 69,	/* 85 */
	HB_P_MESSAGE, 34, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 35,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 64, 248,	/* -1984 (abs: 00205) */
	HB_P_ENDPROC
/* 02193 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

