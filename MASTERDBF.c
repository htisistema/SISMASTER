/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <MASTERDBF.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\MASTERDBF.PRG /q /oc:\HTI\sismaster\MASTERDBF.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 11:11:37 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "MASTERDBF.PRG"

HB_FUNC( MASTERDBF );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SR_EXISTTABLE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( ADIREG );
HB_FUNC_EXTERN( CRIPTO );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( __DBAPP );
HB_FUNC_EXTERN( DBCOMMITALL );
HB_FUNC_EXTERN( DBUNLOCKALL );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MASTERDBF )
{ "MASTERDBF", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MASTERDBF )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SR_EXISTTABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_EXISTTABLE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "ADIREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADIREG )}, NULL },
{ "SEN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "SCOD_OP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SNOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIPTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CRIPTO )}, NULL },
{ "SSENHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SDATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SNIVEL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "__DBAPP", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBAPP )}, NULL },
{ "MVERSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "VER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RODAP1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "DBUNLOCKALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCKALL )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MASTERDBF )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MASTERDBF
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MASTERDBF = hb_vm_SymbolInit_MASTERDBF;
   #pragma data_seg()
#endif

HB_FUNC( MASTERDBF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* F 0*/
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 7 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00023 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_PUSHSYMNEAR, 2,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 3,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 4,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00045 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_PUSHSYMNEAR, 5,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'G', 'e', 'r', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', 's', ' ', 'd', 'e', ' ', 'd', 'a', 'd', 'o', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00090 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', '.', ' ', 'G', 'e', 'r', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00144 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 164, 5,	/* 1444 (abs: 01606) */
/* 00165 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'>', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00214 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_LOCALNEARSETSTR, 1, 16, 0,	/* MATRIZ 16*/
	's', 'c', 'o', 'd', '_', 'o', 'p', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
/* 00236 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'n', 'o', 'm', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00261 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00285 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 't', 'i', 'p', 'o', '_', 's', 'i', 's', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00313 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 's', 'e', 'n', 'h', 'a', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00338 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00363 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 's', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00396 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 's', 'c', 'o', 'm', '_', 'p', 'r', 'a', 'z', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00429 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 's', 'c', 'o', 'm', '_', 'o', 'p', 'e', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00462 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'c', 'o', 't', 'a', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00492 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'u', 'l', 't', '_', 'e', 'n', 't', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00516 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'u', 'l', 't', '_', 'f', 'i', 'm', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00540 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'n', 'i', 'v', 'e', 'l', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00565 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'h', 'o', 'r', 'a', '_', 'i', 'n', 'i', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00593 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'h', 'o', 'r', 'a', '_', 'f', 'i', 'm', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00621 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'u', 'l', 't', '_', 'e', '_', 'c', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00645 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'h', '_', 'i', '_', 'c', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00670 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'e', 'x', 'p', 'i', 'r', 'a', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00699 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'c', 'o', 'd', '_', 'a', 'u', 't', ' ', 'C', 'H', 'A', 'R', '(', '1', '7', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00727 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 's', 't', 'a', 't', 'u', 's', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00753 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'o', 'p', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00776 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 's', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00803 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 's', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00830 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 's', 'v', 'a', 'l', 'o', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00861 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'b', 'l', 'o', 'q', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00885 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'm', 'e', 'n', 's', 'a', 'g', 'e', 'm', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00915 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'a', 'm', 'b', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00943 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'o', 'c', '_', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 00972 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 's', 't', 'o', 'q', '_', 'm', 'i', 'n', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01000 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'e', 's', 't', 'o', 'q', '_', 'm', 'e', 'd', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01031 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'l', 'u', 'g', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01055 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01098 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01141 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01191 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01215 */ HB_P_LINEOFFSET, 43,	/* 49 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01275 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01445 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01469 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 3,
/* 01497 */ HB_P_LINEOFFSET, 47,	/* 53 */
	HB_P_PUSHSYMNEAR, 13,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01504 */ HB_P_LINEOFFSET, 48,	/* 54 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 15,	/* SCOD_OP */
/* 01516 */ HB_P_LINEOFFSET, 49,	/* 55 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'H', 'T', 'I', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', 'S', ' ', 'L', 'T', 'D', 'A', '.', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 16,	/* SNOME */
/* 01543 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHSYMNEAR, 17,	/* CRIPTO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'0', '7', '2', '5', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 18,	/* SSENHA */
/* 01561 */ HB_P_LINEOFFSET, 51,	/* 57 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 14,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 20,	/* SDATA_CAD */
/* 01570 */ HB_P_LINEOFFSET, 52,	/* 58 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 21,	/* SNIVEL */
/* 01580 */ HB_P_LINEOFFSET, 53,	/* 59 */
	HB_P_PUSHSYMNEAR, 22,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01587 */ HB_P_LINEOFFSET, 54,	/* 60 */
	HB_P_PUSHSYMNEAR, 23,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01594 */ HB_P_LINEOFFSET, 55,	/* 61 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 14,	/* SEN */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 24,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 01606 */ HB_P_LINEOFFSET, 57,	/* 63 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 169, 6,	/* 1705 (abs: 03329) */
/* 01627 */ HB_P_LINEOFFSET, 58,	/* 64 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'>', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01676 */ HB_P_LINEOFFSET, 59,	/* 65 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01683 */ HB_P_LINEOFFSET, 60,	/* 66 */
	HB_P_LOCALNEARSETSTR, 1, 13, 0,	/* MATRIZ 13*/
	'v', 'e', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
/* 01702 */ HB_P_LINEOFFSET, 61,	/* 67 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'r', 'a', 'z', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01732 */ HB_P_LINEOFFSET, 62,	/* 68 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'f', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01762 */ HB_P_LINEOFFSET, 63,	/* 69 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'o', 'm', 'e', '_', 'c', 'a', 'b', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01791 */ HB_P_LINEOFFSET, 64,	/* 70 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'e', 'n', 'd', '_', 'f', 'i', 'r', 'm', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01821 */ HB_P_LINEOFFSET, 65,	/* 71 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01850 */ HB_P_LINEOFFSET, 66,	/* 72 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01881 */ HB_P_LINEOFFSET, 67,	/* 73 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01911 */ HB_P_LINEOFFSET, 68,	/* 74 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01941 */ HB_P_LINEOFFSET, 69,	/* 75 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'u', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01970 */ HB_P_LINEOFFSET, 70,	/* 76 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'e', 'p', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 01999 */ HB_P_LINEOFFSET, 71,	/* 77 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'f', 'o', 'n', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02029 */ HB_P_LINEOFFSET, 72,	/* 78 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'e', 'm', 'a', 'i', 'l', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02059 */ HB_P_LINEOFFSET, 73,	/* 79 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'i', 'n', 's', 'c', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02089 */ HB_P_LINEOFFSET, 74,	/* 80 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'y', 's', 'd', 'a', 't', 'l', 'm', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02119 */ HB_P_LINEOFFSET, 75,	/* 81 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', 'i', 'n', 'i', ' ', ' ', ' ', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02145 */ HB_P_LINEOFFSET, 76,	/* 82 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02174 */ HB_P_LINEOFFSET, 77,	/* 83 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'r', 'o', 'd', 'a', 'p', '1', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02204 */ HB_P_LINEOFFSET, 78,	/* 84 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'r', 'o', 'd', 'a', 'p', '2', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02234 */ HB_P_LINEOFFSET, 79,	/* 85 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'l', 'i', '_', 'd', 'e', 'f', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02263 */ HB_P_LINEOFFSET, 80,	/* 86 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'h', 'v', '_', 'p', 'u', 'b', 'l', 'i', 'c', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', '6', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02294 */ HB_P_LINEOFFSET, 81,	/* 87 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'd', '5', '_', 'i', 'n', 'i', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02324 */ HB_P_LINEOFFSET, 82,	/* 88 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'e', 'r', 'i', 'e', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02354 */ HB_P_LINEOFFSET, 83,	/* 89 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 'z', '_', 'p', 'e', 'r', 'c', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02383 */ HB_P_LINEOFFSET, 84,	/* 90 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'u', 's', 'a', '_', 'g', 'r', 'u', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02412 */ HB_P_LINEOFFSET, 85,	/* 91 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'i', 'p', '_', 'l', 'a', 'n', 'c', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02441 */ HB_P_LINEOFFSET, 86,	/* 92 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '_', 'p', 'e', 's', 's', 'o', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02470 */ HB_P_LINEOFFSET, 87,	/* 93 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02513 */ HB_P_LINEOFFSET, 88,	/* 94 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02552 */ HB_P_LINEOFFSET, 89,	/* 95 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'a', 'c', 'e', 's', 's', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02581 */ HB_P_LINEOFFSET, 90,	/* 96 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'm', 'a', 's', 'c', '_', 'q', 't', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02609 */ HB_P_LINEOFFSET, 91,	/* 97 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'm', 'a', 's', 'c', '_', 'v', 'l', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02637 */ HB_P_LINEOFFSET, 92,	/* 98 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'i', 'c', 'm', '_', 'f', 'i', 'r', 'm', 'a', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02670 */ HB_P_LINEOFFSET, 93,	/* 99 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 's', 'i', 'm', 'p', '_', 'n', 'a', 'c', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02697 */ HB_P_LINEOFFSET, 94,	/* 100 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'C', 'N', 'P', 'J', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 02721 */ HB_P_LINEOFFSET, 95,	/* 101 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02764 */ HB_P_LINEOFFSET, 96,	/* 102 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02814 */ HB_P_LINEOFFSET, 97,	/* 103 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02838 */ HB_P_LINEOFFSET, 98,	/* 104 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02898 */ HB_P_LINEOFFSET, 99,	/* 105 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03068 */ HB_P_LINEOFFSET, 100,	/* 106 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03092 */ HB_P_LINEOFFSET, 102,	/* 108 */
	HB_P_PUSHSYMNEAR, 25,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', '.', 'd', 'b', 'f', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 03190) */
/* 03116 */ HB_P_LINEOFFSET, 103,	/* 109 */
	HB_P_PUSHSYMNEAR, 26,	/* DBUSEAREA */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'Q', 'L', 'R', 'D', 'D', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 't', 0, 
	HB_P_FALSE,
	HB_P_DOSHORT, 5,
/* 03151 */ HB_P_LINEOFFSET, 104,	/* 110 */
	HB_P_PUSHSYMNEAR, 27,	/* __DBAPP */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 10,
	HB_P_JUMPNEAR, 115,	/* 115 (abs: 03303) */
/* 03190 */ HB_P_LINEOFFSET, 106,	/* 112 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 't', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03219) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03219 */ HB_P_LINEOFFSET, 107,	/* 113 */
	HB_P_PUSHSYMNEAR, 13,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03226 */ HB_P_LINEOFFSET, 108,	/* 114 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MVERSAO */
	HB_P_PUSHSYMNEAR, 29,	/* SET */
	HB_P_POPALIASEDFIELDNEAR, 30,	/* VER */
/* 03235 */ HB_P_LINEOFFSET, 109,	/* 115 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* SET */
	HB_P_POPALIASEDFIELDNEAR, 31,	/* CABECALHO */
/* 03245 */ HB_P_LINEOFFSET, 110,	/* 116 */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'*', '*', '*', ' ', 'A', 'g', 'r', 'a', 'd', 'e', 'c', 'e', 'm', 'o', 's', ' ', 's', 'u', 'a', ' ', 'p', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ',', ' ', 'V', 'o', 'l', 't', 'e', ' ', 'S', 'e', 'm', 'p', 'r', 'e', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* SET */
	HB_P_POPALIASEDFIELDNEAR, 32,	/* RODAP1 */
/* 03303 */ HB_P_LINEOFFSET, 112,	/* 118 */
	HB_P_PUSHSYMNEAR, 33,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03310 */ HB_P_LINEOFFSET, 113,	/* 119 */
	HB_P_PUSHSYMNEAR, 34,	/* DBUNLOCKALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03317 */ HB_P_LINEOFFSET, 114,	/* 120 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 29,	/* SET */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 24,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 03329 */ HB_P_LINEOFFSET, 116,	/* 122 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03402 */ HB_P_LINEOFFSET, 117,	/* 123 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'c', 'o', 'n', 'f', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 100, 2,	/* 612 (abs: 04031) */
/* 03422 */ HB_P_LINEOFFSET, 118,	/* 124 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03493 */ HB_P_LINEOFFSET, 119,	/* 125 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 03500 */ HB_P_LINEOFFSET, 120,	/* 126 */
	HB_P_LOCALNEARSETSTR, 1, 16, 0,	/* MATRIZ 16*/
	'm', 'o', 'd', 'u', 'l', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
/* 03522 */ HB_P_LINEOFFSET, 121,	/* 127 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 03548 */ HB_P_LINEOFFSET, 122,	/* 128 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'n', 'i', 'v', 'e', 'l', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 03572 */ HB_P_LINEOFFSET, 123,	/* 129 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'a', 't', 'a', '_', 'a', 'l', 't', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 03596 */ HB_P_LINEOFFSET, 124,	/* 130 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'p', 'e', 'r', '_', 'a', 'l', 't', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 03623 */ HB_P_LINEOFFSET, 125,	/* 131 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 03666 */ HB_P_LINEOFFSET, 126,	/* 132 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03708 */ HB_P_LINEOFFSET, 127,	/* 133 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03757 */ HB_P_LINEOFFSET, 128,	/* 134 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03781 */ HB_P_LINEOFFSET, 129,	/* 135 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03840 */ HB_P_LINEOFFSET, 130,	/* 136 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04007 */ HB_P_LINEOFFSET, 131,	/* 137 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04031 */ HB_P_LINEOFFSET, 133,	/* 139 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'S', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04106 */ HB_P_LINEOFFSET, 134,	/* 140 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 's', 't', 'm', 'e', 's', 'a', 's', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 135, 2,	/* 647 (abs: 04772) */
/* 04128 */ HB_P_LINEOFFSET, 135,	/* 141 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'S', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04202 */ HB_P_LINEOFFSET, 136,	/* 142 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04209 */ HB_P_LINEOFFSET, 137,	/* 143 */
	HB_P_LOCALNEARSETSTR, 1, 13, 0,	/* MATRIZ 13*/
	't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
/* 04228 */ HB_P_LINEOFFSET, 138,	/* 144 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04253 */ HB_P_LINEOFFSET, 139,	/* 145 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04279 */ HB_P_LINEOFFSET, 140,	/* 146 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'd', 'a', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04299 */ HB_P_LINEOFFSET, 141,	/* 147 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'p', 'r', 'e', 'c', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04329 */ HB_P_LINEOFFSET, 142,	/* 148 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'o', 'p', 'e', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04352 */ HB_P_LINEOFFSET, 143,	/* 149 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04395 */ HB_P_LINEOFFSET, 144,	/* 150 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04439 */ HB_P_LINEOFFSET, 145,	/* 151 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'S', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04490 */ HB_P_LINEOFFSET, 146,	/* 152 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04514 */ HB_P_LINEOFFSET, 147,	/* 153 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'S', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04575 */ HB_P_LINEOFFSET, 148,	/* 154 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 156,	/* 156 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'S', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'S', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'S', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04748 */ HB_P_LINEOFFSET, 149,	/* 155 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04772 */ HB_P_LINEOFFSET, 151,	/* 157 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04846 */ HB_P_LINEOFFSET, 152,	/* 158 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 11, 6,	/* 1547 (abs: 06411) */
/* 04867 */ HB_P_LINEOFFSET, 153,	/* 159 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04940 */ HB_P_LINEOFFSET, 154,	/* 160 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04947 */ HB_P_LINEOFFSET, 155,	/* 161 */
	HB_P_LOCALNEARSETSTR, 1, 15, 0,	/* MATRIZ 15*/
	'c', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
/* 04968 */ HB_P_LINEOFFSET, 156,	/* 162 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 04994 */ HB_P_LINEOFFSET, 157,	/* 163 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05017 */ HB_P_LINEOFFSET, 158,	/* 164 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'd', 'a', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05037 */ HB_P_LINEOFFSET, 159,	/* 165 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'u', 's', 't', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05067 */ HB_P_LINEOFFSET, 160,	/* 166 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05100 */ HB_P_LINEOFFSET, 161,	/* 167 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05126 */ HB_P_LINEOFFSET, 162,	/* 168 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'a', 'l', 'd', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05156 */ HB_P_LINEOFFSET, 163,	/* 169 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'p', 'o', 'r', 't', 'a', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05183 */ HB_P_LINEOFFSET, 164,	/* 170 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '1', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05207 */ HB_P_LINEOFFSET, 165,	/* 171 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '2', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05231 */ HB_P_LINEOFFSET, 166,	/* 172 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '3', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05255 */ HB_P_LINEOFFSET, 167,	/* 173 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '4', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05279 */ HB_P_LINEOFFSET, 168,	/* 174 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '5', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05303 */ HB_P_LINEOFFSET, 169,	/* 175 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '6', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05327 */ HB_P_LINEOFFSET, 170,	/* 176 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '7', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05351 */ HB_P_LINEOFFSET, 171,	/* 177 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '8', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05375 */ HB_P_LINEOFFSET, 172,	/* 178 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'r', 'o', 'd', '9', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05399 */ HB_P_LINEOFFSET, 173,	/* 179 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'r', 'o', 'd', '1', '0', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05424 */ HB_P_LINEOFFSET, 174,	/* 180 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '1', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05453 */ HB_P_LINEOFFSET, 175,	/* 181 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '2', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05482 */ HB_P_LINEOFFSET, 176,	/* 182 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '3', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05511 */ HB_P_LINEOFFSET, 177,	/* 183 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '4', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05540 */ HB_P_LINEOFFSET, 178,	/* 184 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '5', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05569 */ HB_P_LINEOFFSET, 179,	/* 185 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '6', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05598 */ HB_P_LINEOFFSET, 180,	/* 186 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '7', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05627 */ HB_P_LINEOFFSET, 181,	/* 187 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '8', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05656 */ HB_P_LINEOFFSET, 182,	/* 188 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'q', 't', 'd', '9', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05685 */ HB_P_LINEOFFSET, 183,	/* 189 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'q', 't', 'd', '1', '0', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05715 */ HB_P_LINEOFFSET, 184,	/* 190 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'o', 'p', 'e', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05738 */ HB_P_LINEOFFSET, 185,	/* 191 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'g', 'r', 'u', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05762 */ HB_P_LINEOFFSET, 186,	/* 192 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05792 */ HB_P_LINEOFFSET, 187,	/* 193 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 'e', '1', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05823 */ HB_P_LINEOFFSET, 188,	/* 194 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05866 */ HB_P_LINEOFFSET, 189,	/* 195 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05905 */ HB_P_LINEOFFSET, 190,	/* 196 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'm', 'i', 'n', 'i', 'm', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05936 */ HB_P_LINEOFFSET, 191,	/* 197 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'm', 'a', 'x', 'i', 'm', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05967 */ HB_P_LINEOFFSET, 192,	/* 198 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'n', 'c', 'm', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 05989 */ HB_P_LINEOFFSET, 193,	/* 199 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'c', 's', 't', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06011 */ HB_P_LINEOFFSET, 194,	/* 200 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', '_', 'l', 'i', 'v', 'r', 'e', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06040 */ HB_P_LINEOFFSET, 195,	/* 201 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06083 */ HB_P_LINEOFFSET, 196,	/* 202 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06133 */ HB_P_LINEOFFSET, 197,	/* 203 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06157 */ HB_P_LINEOFFSET, 198,	/* 204 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06217 */ HB_P_LINEOFFSET, 199,	/* 205 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06387 */ HB_P_LINEOFFSET, 200,	/* 206 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06411 */ HB_P_LINEOFFSET, 202,	/* 208 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06478 */ HB_P_LINEOFFSET, 203,	/* 209 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 54, 6,	/* 1590 (abs: 08086) */
/* 06499 */ HB_P_LINEOFFSET, 204,	/* 210 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06564 */ HB_P_LINEOFFSET, 205,	/* 211 */
	HB_P_LOCALNEARSETSTR, 1, 28, 0,	/* MATRIZ 28*/
	'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
/* 06598 */ HB_P_LINEOFFSET, 206,	/* 212 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'r', 'a', 'z', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06625 */ HB_P_LINEOFFSET, 207,	/* 213 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06650 */ HB_P_LINEOFFSET, 208,	/* 214 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06676 */ HB_P_LINEOFFSET, 209,	/* 215 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 'l', 't', '_', 'c', 'o', 'm', 'p', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06702 */ HB_P_LINEOFFSET, 210,	/* 216 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06732 */ HB_P_LINEOFFSET, 211,	/* 217 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06760 */ HB_P_LINEOFFSET, 212,	/* 218 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06788 */ HB_P_LINEOFFSET, 213,	/* 219 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06811 */ HB_P_LINEOFFSET, 214,	/* 220 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'e', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06835 */ HB_P_LINEOFFSET, 215,	/* 221 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'p', 'o', 's', 't', 'a', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06863 */ HB_P_LINEOFFSET, 216,	/* 222 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'm', 'a', 'i', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06891 */ HB_P_LINEOFFSET, 217,	/* 223 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'e', 'l', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06917 */ HB_P_LINEOFFSET, 218,	/* 224 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'e', 'l', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06943 */ HB_P_LINEOFFSET, 219,	/* 225 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'a', 'x', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06968 */ HB_P_LINEOFFSET, 220,	/* 226 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'g', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 06993 */ HB_P_LINEOFFSET, 221,	/* 227 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'n', 's', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07019 */ HB_P_LINEOFFSET, 222,	/* 228 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'p', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07044 */ HB_P_LINEOFFSET, 223,	/* 229 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07073 */ HB_P_LINEOFFSET, 224,	/* 230 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'b', 'a', 'n', 'c', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07099 */ HB_P_LINEOFFSET, 225,	/* 231 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'p', 'r', 'a', 'z', 'o', '_', 'p', 'a', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07129 */ HB_P_LINEOFFSET, 226,	/* 232 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 't', '_', 'g', 'e', 'r', 'e', 'n', 't', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07161 */ HB_P_LINEOFFSET, 227,	/* 233 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 't', '_', 'v', 'e', 'n', 'd', 'e', 'd', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07193 */ HB_P_LINEOFFSET, 228,	/* 234 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 't', '_', 'f', 'a', 't', 'u', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07224 */ HB_P_LINEOFFSET, 229,	/* 235 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 't', '_', 'c', 'o', 'b', 'r', 'a', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07255 */ HB_P_LINEOFFSET, 230,	/* 236 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'l', 'i', 'm', 'i', 't', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07288 */ HB_P_LINEOFFSET, 231,	/* 237 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'o', 'b', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07313 */ HB_P_LINEOFFSET, 232,	/* 238 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07339 */ HB_P_LINEOFFSET, 233,	/* 239 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07365 */ HB_P_LINEOFFSET, 234,	/* 240 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07391 */ HB_P_LINEOFFSET, 235,	/* 241 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07417 */ HB_P_LINEOFFSET, 236,	/* 242 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07443 */ HB_P_LINEOFFSET, 237,	/* 243 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'o', 'c', 'a', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07469 */ HB_P_LINEOFFSET, 238,	/* 244 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'p', 'o', 'c', 'k', 'e', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07496 */ HB_P_LINEOFFSET, 239,	/* 245 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'f', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07526 */ HB_P_LINEOFFSET, 240,	/* 246 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07569 */ HB_P_LINEOFFSET, 241,	/* 247 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07598 */ HB_P_LINEOFFSET, 242,	/* 248 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'o', 'r', 'n', '_', 'd', 'e', 's', 'p', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 07627 */ HB_P_LINEOFFSET, 243,	/* 249 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07670 */ HB_P_LINEOFFSET, 244,	/* 250 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07720 */ HB_P_LINEOFFSET, 245,	/* 251 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07744 */ HB_P_LINEOFFSET, 246,	/* 252 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07804 */ HB_P_LINEOFFSET, 247,	/* 253 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 71,	/* 71 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', ' ', 'A', 'D', 'D', ' ', 'C', 'O', 'N', 'S', 'T', 'R', 'A', 'I', 'N', 'T', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', '_', 'P', 'K', ' ', 'P', 'R', 'I', 'M', 'A', 'R', 'Y', ' ', 'K', 'E', 'Y', ' ', '(', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07892 */ HB_P_LINEOFFSET, 248,	/* 254 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'F', 'O', 'R', 'N', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08062 */ HB_P_LINEOFFSET, 249,	/* 255 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08086 */ HB_P_LINEOFFSET, 252,	/* 258 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'C', 'L', 'I', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08153 */ HB_P_LINEOFFSET, 253,	/* 259 */
	HB_P_LOCALNEARSETSTR, 1, 18, 0,	/* MATRIZ 18*/
	'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 08177 */ HB_P_LINEOFFSET, 254,	/* 260 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08212 */ HB_P_LINEOFFSET, 255,	/* 261 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'r', 'a', 'z', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08239 */ HB_P_LINE, 6, 1,	/* 262 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'o', 'm', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08266 */ HB_P_LINE, 7, 1,	/* 263 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08293 */ HB_P_LINE, 8, 1,	/* 264 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08320 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08350 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08376 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'a', 's', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08405 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08434 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 'l', 't', '_', 'c', 'o', 'm', 'p', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08461 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'v', 'l', 'r', '_', 'c', 'o', 'm', 'p', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08497 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'a', 'n', 't', '_', 'p', 'e', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08526 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'a', 'n', 't', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08552 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', 'r', '_', 'a', 'n', 't', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08587 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'u', 'm', 'p', 'e', 'd', '_', 'm', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08617 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'u', 'l', 't', 'c', 'o', 'm', 'p', '_', 'm', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08645 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'l', 'r', 'c', 'o', 'm', 'p', '_', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08682 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 't', 'o', 't', '_', 'c', 'o', 'm', 'p', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08718 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'l', 't', '_', 'o', 'r', 'c', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08744 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08775 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08804 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', 'c', 'i', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08832 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08861 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08885 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'e', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08910 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'm', 'a', 'i', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08939 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'o', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08966 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'e', 'l', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 08993 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'e', 'l', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09020 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'a', 'x', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09046 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'g', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09072 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'n', 's', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09099 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'p', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09125 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'r', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09150 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'r', 'g', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09178 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'e', 'm', 'i', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09204 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'm', 'p', 'r', 'a', 'd', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09235 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'n', 't', 'a', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09265 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'p', 'r', 'a', 'z', 'o', '_', 'p', 'a', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09296 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'b', 'l', 'o', 'q', 'u', 'e', 'i', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09326 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'p', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09351 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'r', 'e', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09378 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'l', 'i', 'm', 'i', 't', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09412 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'a', 't', 'a', 'c', '_', 'v', 'a', 'r', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09443 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'd', 'i', 'a', '_', 'a', 't', 'r', 'a', 's', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09480 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'q', 't', 'd', '_', 'd', 'o', 'c', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09515 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'o', 'b', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09541 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'o', 'm', 'e', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09569 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', '1', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09597 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'o', 'm', 'e', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09625 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', '2', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09653 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'o', 'm', 'e', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09681 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', '3', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09709 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'o', 'm', 'e', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09737 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', '4', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09765 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'o', 'm', 'e', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09793 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'n', 'a', 's', '5', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09821 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09856 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'i', 'a', '1', '_', 'i', 'n', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09886 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'i', 'a', '1', '_', 'f', 'i', 'm', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09916 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'v', 'e', 'n', 'c', '1', '_', 'd', 'u', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09947 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'i', 'a', '2', '_', 'i', 'n', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 09977 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'i', 'a', '2', '_', 'f', 'i', 'm', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10007 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'v', 'e', 'n', 'c', '2', '_', 'd', 'u', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10038 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'e', 'm', 'p', 'r', 'e', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10068 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'a', 'r', 'g', 'o', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10098 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 's', 'a', 'l', 'a', 'r', 'i', 'o', '_', 'c', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10135 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'e', 'n', 'd', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10163 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10194 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10225 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'f', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10251 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'e', 'p', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10278 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'o', 'n', 'e', '_', 'c', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10308 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'o', 'n', 'e', '_', 'c', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10338 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'l', 'o', 'j', 'a', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10366 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 't', 'e', 'l', '_', 'l', 'o', 'j', 'a', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10398 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'e', 's', 'd', 'e', '1', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10423 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'l', 'o', 'j', 'a', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10451 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 't', 'e', 'l', '_', 'l', 'o', 'j', 'a', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10483 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'e', 's', 'd', 'e', '2', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10508 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'o', 'm', 'e', '_', 'r', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10538 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'o', 'n', 'e', '_', 'r', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10568 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'o', 'm', 'e', '_', 'r', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10598 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'o', 'n', 'e', '_', 'r', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10628 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'b', 'a', 'n', 'c', 'o', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10657 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 'g', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10683 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'n', 't', 'a', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10712 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'b', 'a', 'n', 'c', 'o', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10741 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 'g', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10767 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'n', 't', 'a', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10796 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'a', 'r', 't', 'a', 'o', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10826 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'o', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10852 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'e', 'n', 'c', '1', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10876 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'a', 'r', 't', 'a', 'o', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10906 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'o', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10932 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'e', 'n', 'c', '2', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10956 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'a', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 10982 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'm', 'a', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11008 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'e', 'n', 'd', '_', 'c', 'o', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11038 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', '_', 'c', 'o', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11071 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', '_', 'c', 'o', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11104 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'u', 'f', '_', 'c', 'o', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11132 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'e', 'p', '_', 'c', 'o', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11161 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'f', 'o', 'n', 'e', '_', 'c', 'o', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11192 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', 'v', 'e', 'n', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11221 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', 'o', 'p', 'e', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11250 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', 'f', 'o', 'r', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11279 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'r', 'e', 'g', 'i', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11307 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'a', 't', 'i', 'v', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11338 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'q', 't', 'd', 'v', 'i', 's', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '4', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11371 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'v', 'i', 's', 'i', 't', 'a', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11397 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', '_', 'o', 'b', 's', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11426 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', '_', 'o', 'b', 's', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11455 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', '_', 'o', 'b', 's', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11484 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'n', 'a', 't', 'u', 'r', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11519 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', '_', 'o', 'b', 's', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11548 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', '_', 'o', 'b', 's', '6', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11577 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', '_', 'o', 'b', 's', '7', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11606 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', '_', 'o', 'b', 's', '8', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11635 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', '_', 'o', 'b', 's', '9', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11664 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '0', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11694 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11724 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11754 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11784 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11814 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11844 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '6', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11874 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '7', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11904 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '8', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11934 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '1', '9', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11964 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', '_', 'o', 'b', 's', '2', '0', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 11994 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'c', 'o', 'n', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12024 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'p', 'o', 'c', 'k', 'e', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12052 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'f', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12083 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12111 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12145 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'b', 'l', 'o', 'q', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12173 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'o', 'b', 's', '_', 'b', 'l', 'o', 'q', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12204 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'r', 'o', 't', 'a', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12232 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'm', 'a', 'i', 'l', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12261 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'm', 'a', 'i', 'l', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12290 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'm', 'a', 'i', 'l', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12319 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'l', 'i', 'm', '_', 'a', 'n', 't', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12354 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12398 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12428 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'p', 'r', 'o', 'm', 'o', 't', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 12456 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'M', 'A', 'S', 'T', 'C', 'L', 'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 184, 1,	/* 440 (abs: 12914) */
/* 12477 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'C', 'L', 'I', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12543 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'L', 'I', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12586 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'C', 'L', 'I', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12636 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12661 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'C', 'L', 'I', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12721 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'L', 'I', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'L', 'I', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'C', 'L', 'I', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12889 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12914 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'P', 'R', 'O', 'F', 'I', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12981 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'r', 'o', 'f', 'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 253, 1,	/* 509 (abs: 13509) */
/* 13003 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_LOCALNEARSETSTR, 1, 20, 0,	/* MATRIZ 20*/
	'c', 'o', 'd', '_', 'p', 'r', 'o', 'f', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 13030 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'p', 'r', 'o', 'f', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 13058 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 13102 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 13132 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'P', 'R', 'O', 'F', 'I', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13176 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'P', 'R', 'O', 'F', 'I', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13227 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13252 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'P', 'R', 'O', 'F', 'I', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13313 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'P', 'R', 'O', 'F', 'I', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'P', 'R', 'O', 'F', 'I', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'P', 'R', 'O', 'F', 'I', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13484 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13509 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'U', 'F', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13576 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'a', 'c', 'u', 'f', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 224, 0,	/* 224 (abs: 13816) */
/* 13595 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'U', 'F', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13660 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_LOCALNEARSETSTR, 1, 18, 0,	/* MATRIZ 18*/
	'e', 's', 't', 'a', 'd', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
/* 13685 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 13709 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'p', 'e', 'r', 'c', 'e', 'n', 't', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '5', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 13743 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'U', 'F', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13791 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13816 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13894 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 76, 2,	/* 588 (abs: 14503) */
/* 13918 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13994 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14002 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_LOCALNEARSETSTR, 1, 16, 0,	/* MATRIZ 16*/
	'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', 0, 
/* 14025 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'd', 'a', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14046 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'h', 'o', 'r', 'a', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14070 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14114 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14160 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14213 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14238 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14301 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 159,	/* 159 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'N', 'U', 'M', 'M', 'O', 'V', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14478 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14503 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 'C', 'A', 'B', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14581 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'A', 'S', 'T', 'M', 'O', 'V', 'C', 'A', 'B', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 117, 2,	/* 629 (abs: 15231) */
/* 14605 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 'C', 'A', 'B', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14681 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14689 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_LOCALNEARSETSTR, 1, 10, 0,	/* MATRIZ 10*/
	'd', 'a', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
/* 14706 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'i', 'd', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14728 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 't', 'a', 't', 'u', 's', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14755 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'n', 'o', 'm', 'e', '_', 'c', 'o', 'm', 'a', 'n', 'd', 'a', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14788 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'm', 'e', 's', 'a', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14812 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'i', 'd', '_', 'u', 's', 'u', 'a', 'r', 'i', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14842 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'e', 's', 's', 'o', 'a', 's', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14869 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'o', 'b', 's', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14893 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 14917 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 'C', 'A', 'B', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14963 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 'C', 'A', 'B', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15016 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15041 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 'C', 'A', 'B', '_', 'i', 'd', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 'C', 'A', 'B', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '1', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'i', 'd', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'I', 'D', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 'C', 'A', 'B', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15206 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15231 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15306 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'M', 'A', 'S', 'T', 'M', 'O', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 62, 4,	/* 1086 (abs: 16410) */
/* 15327 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15400 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15408 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_LOCALNEARSETSTR, 1, 16, 0,	/* MATRIZ 16*/
	'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', 0, 
/* 15431 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15460 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'd', 'a', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15481 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'h', 'o', 'r', 'a', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15505 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15533 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15560 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'q', 't', 'd', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15589 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'p', 'r', 'e', 'c', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15620 */ HB_P_LINE, 235, 1,	/* 491 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15647 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'g', 'a', 'r', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15676 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'o', 'p', 'e', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15700 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'o', 'b', 's', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15724 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15748 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'p', 'o', 'r', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15773 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15801 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15829 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'q', 't', 'd', '_', 'p', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15857 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15884 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'e', 'z', '_', 'p', 'e', 'r', 'c', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15912 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'u', 's', 't', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15943 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15967 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'e', 'x', 'c', 'e', 'c', 'a', 'o', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 15995 */ HB_P_LINE, 249, 1,	/* 505 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16039 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16082 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16132 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16157 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16217 */ HB_P_LINE, 254, 1,	/* 510 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16385 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16410 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16485 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 110, 5,	/* 1390 (abs: 17895) */
/* 16508 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16581 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16589 */ HB_P_LINE, 5, 2,	/* 517 */
	HB_P_LOCALNEARSETSTR, 1, 13, 0,	/* MATRIZ 13*/
	'm', 'e', 's', 'a', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
/* 16609 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16633 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'd', 'a', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16654 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'n', 'o', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16678 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'u', 'm', '_', 'd', 'u', 'p', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16706 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'u', 'm', '_', 'b', 'a', 'n', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16733 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'o', 'd', '_', 'c', 't', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16759 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16789 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'v', 'e', 'n', 'c', 'i', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16811 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16842 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'i', 'p', 'o', '_', 'c', 'o', 'm', 'p', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16871 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'o', 'd', 'd', 'e', 's', 'p', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16898 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '1', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16926 */ HB_P_LINE, 18, 2,	/* 530 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '2', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16954 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 16982 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17009 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 'a', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17038 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'a', 'n', 'g', 'r', 'i', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17065 */ HB_P_LINE, 23, 2,	/* 535 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'o', 'p', '_', 'p', 'g', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17090 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'p', 'g', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17112 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'h', 'o', 'r', 'a', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17136 */ HB_P_LINE, 26, 2,	/* 538 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'u', 't', 'o', 'r', 'i', 'z', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17163 */ HB_P_LINE, 27, 2,	/* 539 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'c', 'o', 'm', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17198 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '6', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17232 */ HB_P_LINE, 29, 2,	/* 541 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'p', '_', 'd', 'e', 's', 'p', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17259 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'u', 'm', '_', 'p', 'd', 'v', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17286 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'u', 'm', '_', 'c', 'u', 'p', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17313 */ HB_P_LINE, 32, 2,	/* 544 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'f', 'e', 'c', 'h', 'a', 'd', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17340 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'p', '_', 'm', 'o', 'v', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17366 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 't', 'e', 'r', 'm', 'i', 'n', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17394 */ HB_P_LINE, 35, 2,	/* 547 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'c', '_', 's', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17417 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'o', 'b', 's', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17441 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 'f', 'e', 'c', 'h', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17468 */ HB_P_LINE, 38, 2,	/* 550 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17512 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17557 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17609 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17634 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17696 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 156,	/* 156 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'I', 'X', 'A', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17870 */ HB_P_LINE, 44, 2,	/* 556 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17895 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17903 */ HB_P_LINE, 47, 2,	/* 559 */
	HB_P_LOCALNEARSETSTR, 1, 13, 0,	/* MATRIZ 13*/
	't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
/* 17923 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17949 */ HB_P_LINE, 49, 2,	/* 561 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 17979 */ HB_P_LINE, 50, 2,	/* 562 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'd', 'u', 'p', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18014 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18041 */ HB_P_LINE, 52, 2,	/* 564 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'o', 'r', 'n', 'e', 'c', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18067 */ HB_P_LINE, 53, 2,	/* 565 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18095 */ HB_P_LINE, 54, 2,	/* 566 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', '_', 'c', 'p', 'f', 'c', 'n', 'p', 'j', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18125 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18149 */ HB_P_LINE, 56, 2,	/* 568 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'v', 'e', 'n', 'c', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18170 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18193 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 't', 'r', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18216 */ HB_P_LINE, 59, 2,	/* 571 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'o', 'p', 'e', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18239 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'b', 'a', 'n', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18264 */ HB_P_LINE, 61, 2,	/* 573 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'g', 'e', 'n', 'c', 'i', 'a', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18291 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', '_', 'c', ' ', 'C', 'H', 'A', 'R', '(', '1', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18315 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18346 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'v', 'l', 'p', 'a', 'g', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18378 */ HB_P_LINE, 65, 2,	/* 577 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'v', 'l', '_', 'i', 'p', 'i', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18410 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18444 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'j', 'u', 'r', 'o', 's', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18475 */ HB_P_LINE, 68, 2,	/* 580 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'j', 'u', 'r', 'o', 's', '_', 'd', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18508 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'a', 'g', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18532 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', '_', 'p', 'g', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18558 */ HB_P_LINE, 71, 2,	/* 583 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'm', 'o', 'v', '_', 'c', 'x', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18584 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'o', 'n', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18609 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'h', 'e', 'q', 'u', 'e', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18635 */ HB_P_LINE, 74, 2,	/* 586 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18663 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18690 */ HB_P_LINE, 76, 2,	/* 588 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '6', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18724 */ HB_P_LINE, 77, 2,	/* 589 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18752 */ HB_P_LINE, 78, 2,	/* 590 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'a', 'l', 't', '_', 'o', 'p', 'e', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18780 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'd', 'o', 'c', '_', 't', 'r', 'a', 'n', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18809 */ HB_P_LINE, 80, 2,	/* 592 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'a', 't', '_', 't', 'r', 'a', 'n', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18834 */ HB_P_LINE, 81, 2,	/* 593 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18862 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'o', 'r', 'n', '_', 'd', 'e', 's', 'p', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18892 */ HB_P_LINE, 83, 2,	/* 595 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18918 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'o', 'p', 'e', 'r', '_', 'p', 'a', 'r', 'c', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18947 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 18973 */ HB_P_LINE, 86, 2,	/* 598 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'o', 't', 'i', 'v', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19000 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'i', 'n', 'c', 'l', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19028 */ HB_P_LINE, 88, 2,	/* 600 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'o', 'b', 's', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19052 */ HB_P_LINE, 89, 2,	/* 601 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'o', 'b', 's', '1', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19077 */ HB_P_LINE, 90, 2,	/* 602 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'r', 'r', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19106 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'p', 'f', 'c', 'n', 'p', 'j', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19134 */ HB_P_LINE, 92, 2,	/* 604 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'l', 'i', 'n', '1', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19159 */ HB_P_LINE, 93, 2,	/* 605 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'l', 'i', 'n', '2', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19184 */ HB_P_LINE, 94, 2,	/* 606 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'l', 'i', 'n', '3', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19209 */ HB_P_LINE, 95, 2,	/* 607 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'l', 'i', 'n', '4', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19234 */ HB_P_LINE, 96, 2,	/* 608 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'l', 'i', 'n', '5', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19259 */ HB_P_LINE, 97, 2,	/* 609 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'h', 'o', 'r', 'a', '_', 'b', 'x', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19286 */ HB_P_LINE, 98, 2,	/* 610 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 19330 */ HB_P_LINE, 99, 2,	/* 611 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19405 */ HB_P_LINE, 100, 2,	/* 612 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 197, 1,	/* 453 (abs: 19877) */
/* 19427 */ HB_P_LINE, 101, 2,	/* 613 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19500 */ HB_P_LINE, 102, 2,	/* 614 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19544 */ HB_P_LINE, 103, 2,	/* 615 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19595 */ HB_P_LINE, 104, 2,	/* 616 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19620 */ HB_P_LINE, 105, 2,	/* 617 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19681 */ HB_P_LINE, 106, 2,	/* 618 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'R', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19852 */ HB_P_LINE, 107, 2,	/* 619 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19877 */ HB_P_LINE, 109, 2,	/* 621 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'C', 'R', 'E', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19952 */ HB_P_LINE, 110, 2,	/* 622 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'a', 's', 't', 'c', 'r', 'e', 'd', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 197, 1,	/* 453 (abs: 20424) */
/* 19974 */ HB_P_LINE, 111, 2,	/* 623 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'C', 'R', 'E', 'D', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20047 */ HB_P_LINE, 112, 2,	/* 624 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'R', 'E', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20091 */ HB_P_LINE, 113, 2,	/* 625 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'C', 'R', 'E', 'D', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20142 */ HB_P_LINE, 114, 2,	/* 626 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20167 */ HB_P_LINE, 115, 2,	/* 627 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'C', 'R', 'E', 'D', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20228 */ HB_P_LINE, 116, 2,	/* 628 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'R', 'E', 'D', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'R', 'E', 'D', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'C', 'R', 'E', 'D', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20399 */ HB_P_LINE, 117, 2,	/* 629 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20424 */ HB_P_LINE, 120, 2,	/* 632 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'm', 'a', 's', 't', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20499 */ HB_P_LINE, 121, 2,	/* 633 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 's', 't', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 245, 2,	/* 757 (abs: 21276) */
/* 20522 */ HB_P_LINE, 122, 2,	/* 634 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'm', 'a', 's', 't', 'c', 'a', 'r', 't', 'a', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20595 */ HB_P_LINE, 123, 2,	/* 635 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20603 */ HB_P_LINE, 124, 2,	/* 636 */
	HB_P_LOCALNEARSETSTR, 1, 15, 0,	/* MATRIZ 15*/
	'c', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
/* 20625 */ HB_P_LINE, 125, 2,	/* 637 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'a', 'r', 't', 'a', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20652 */ HB_P_LINE, 126, 2,	/* 638 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'i', 'g', 'l', 'a', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20677 */ HB_P_LINE, 127, 2,	/* 639 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'p', 'r', 'a', 'z', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20705 */ HB_P_LINE, 128, 2,	/* 640 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '5', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20738 */ HB_P_LINE, 129, 2,	/* 641 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20766 */ HB_P_LINE, 130, 2,	/* 642 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20796 */ HB_P_LINE, 131, 2,	/* 643 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'i', 'p', 'o', '_', 'v', 'e', 'n', 'd', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20826 */ HB_P_LINE, 132, 2,	/* 644 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 't', 'e', 'f', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20849 */ HB_P_LINE, 133, 2,	/* 645 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 20893 */ HB_P_LINE, 134, 2,	/* 646 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'R', 'T', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20938 */ HB_P_LINE, 135, 2,	/* 647 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'R', 'T', 'A', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20990 */ HB_P_LINE, 136, 2,	/* 648 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21015 */ HB_P_LINE, 137, 2,	/* 649 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'R', 'T', 'A', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21077 */ HB_P_LINE, 138, 2,	/* 650 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 156,	/* 156 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'R', 'T', 'A', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'R', 'T', 'A', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'C', 'A', 'R', 'T', 'A', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21251 */ HB_P_LINE, 139, 2,	/* 651 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21276 */ HB_P_LINE, 142, 2,	/* 654 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21351 */ HB_P_LINE, 143, 2,	/* 655 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 81, 5,	/* 1361 (abs: 22731) */
/* 21373 */ HB_P_LINE, 144, 2,	/* 656 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21446 */ HB_P_LINE, 145, 2,	/* 657 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21454 */ HB_P_LINE, 146, 2,	/* 658 */
	HB_P_LOCALNEARSETSTR, 1, 13, 0,	/* MATRIZ 13*/
	't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
/* 21474 */ HB_P_LINE, 147, 2,	/* 659 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21500 */ HB_P_LINE, 148, 2,	/* 660 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21530 */ HB_P_LINE, 149, 2,	/* 661 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'd', 'u', 'p', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21565 */ HB_P_LINE, 150, 2,	/* 662 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'i', 'p', '_', 'f', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21592 */ HB_P_LINE, 151, 2,	/* 663 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'o', 'r', 'n', 'e', 'c', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21618 */ HB_P_LINE, 152, 2,	/* 664 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21646 */ HB_P_LINE, 153, 2,	/* 665 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21670 */ HB_P_LINE, 154, 2,	/* 666 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'v', 'e', 'n', 'c', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21691 */ HB_P_LINE, 155, 2,	/* 667 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21714 */ HB_P_LINE, 156, 2,	/* 668 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'p', '_', 'p', 'g', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21739 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'b', 'a', 'n', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21764 */ HB_P_LINE, 158, 2,	/* 670 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'g', 'e', 'n', 'c', 'i', 'a', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21791 */ HB_P_LINE, 159, 2,	/* 671 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', '_', 'c', ' ', 'C', 'H', 'A', 'R', '(', '1', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21815 */ HB_P_LINE, 160, 2,	/* 672 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21846 */ HB_P_LINE, 161, 2,	/* 673 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'v', 'l', 'p', 'a', 'g', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21878 */ HB_P_LINE, 162, 2,	/* 674 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21912 */ HB_P_LINE, 163, 2,	/* 675 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'j', 'u', 'r', 'o', 's', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21943 */ HB_P_LINE, 164, 2,	/* 676 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'a', 'g', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21967 */ HB_P_LINE, 165, 2,	/* 677 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'o', 'n', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 21992 */ HB_P_LINE, 166, 2,	/* 678 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'o', 'b', 's', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22016 */ HB_P_LINE, 167, 2,	/* 679 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'o', 'b', 's', '_', 'b', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22042 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'b', 'a', 'n', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22068 */ HB_P_LINE, 169, 2,	/* 681 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'h', 'e', 'q', 'u', 'e', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22094 */ HB_P_LINE, 170, 2,	/* 682 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'n', 't', 'a', '_', 'c', ' ', 'C', 'H', 'A', 'R', '(', '1', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22122 */ HB_P_LINE, 171, 2,	/* 683 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22150 */ HB_P_LINE, 172, 2,	/* 684 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22177 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22205 */ HB_P_LINE, 174, 2,	/* 686 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'a', 'c', 'e', 'i', 't', 'e', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22231 */ HB_P_LINE, 175, 2,	/* 687 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', 'a', '_', 's', 'o', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22255 */ HB_P_LINE, 176, 2,	/* 688 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'r', 'e', 'c', 'e', 'b', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22281 */ HB_P_LINE, 177, 2,	/* 689 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'o', 'p', 'e', '_', 'r', 'e', 'c', 'e', 'b', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22310 */ HB_P_LINE, 178, 2,	/* 690 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22354 */ HB_P_LINE, 179, 2,	/* 691 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22398 */ HB_P_LINE, 180, 2,	/* 692 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22449 */ HB_P_LINE, 181, 2,	/* 693 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22474 */ HB_P_LINE, 182, 2,	/* 694 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22535 */ HB_P_LINE, 183, 2,	/* 695 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'D', 'U', 'P', 'P', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22706 */ HB_P_LINE, 184, 2,	/* 696 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22731 */ HB_P_LINE, 187, 2,	/* 699 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'I', 'D', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 22805 */ HB_P_LINE, 188, 2,	/* 700 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'i', 'd', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 101, 2,	/* 613 (abs: 23435) */
/* 22825 */ HB_P_LINE, 189, 2,	/* 701 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'C', 'I', 'D', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 22896 */ HB_P_LINE, 190, 2,	/* 702 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22904 */ HB_P_LINE, 191, 2,	/* 703 */
	HB_P_LOCALNEARSETSTR, 1, 16, 0,	/* MATRIZ 16*/
	'c', 'o', 'd', '_', 'c', 'i', 'd', ' ', 'C', 'H', 'A', 'R', '(', '7', ')', 0, 
/* 22927 */ HB_P_LINE, 192, 2,	/* 704 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22954 */ HB_P_LINE, 193, 2,	/* 705 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'c', 'e', 'p', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22977 */ HB_P_LINE, 194, 2,	/* 706 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'u', 'f', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 22999 */ HB_P_LINE, 195, 2,	/* 707 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'o', 'd', '_', 'o', 'p', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 23026 */ HB_P_LINE, 196, 2,	/* 708 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 23070 */ HB_P_LINE, 197, 2,	/* 709 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'I', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23112 */ HB_P_LINE, 198, 2,	/* 710 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'I', 'D', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23161 */ HB_P_LINE, 199, 2,	/* 711 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23186 */ HB_P_LINE, 200, 2,	/* 712 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'I', 'D', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23245 */ HB_P_LINE, 201, 2,	/* 713 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'I', 'D', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'I', 'D', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'I', 'D', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23410 */ HB_P_LINE, 202, 2,	/* 714 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23435 */ HB_P_LINE, 204, 2,	/* 716 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 23510 */ HB_P_LINE, 205, 2,	/* 717 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 72, 2,	/* 584 (abs: 24114) */
/* 23533 */ HB_P_LINE, 206, 2,	/* 718 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 23606 */ HB_P_LINE, 207, 2,	/* 719 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 23614 */ HB_P_LINE, 208, 2,	/* 720 */
	HB_P_LOCALNEARSETSTR, 1, 15, 0,	/* MATRIZ 15*/
	'c', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
/* 23636 */ HB_P_LINE, 209, 2,	/* 721 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'g', 'r', 'u', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 23662 */ HB_P_LINE, 210, 2,	/* 722 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 23687 */ HB_P_LINE, 211, 2,	/* 723 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 23731 */ HB_P_LINE, 212, 2,	/* 724 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23776 */ HB_P_LINE, 213, 2,	/* 725 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23828 */ HB_P_LINE, 214, 2,	/* 726 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23853 */ HB_P_LINE, 215, 2,	/* 727 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23915 */ HB_P_LINE, 216, 2,	/* 728 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 156,	/* 156 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'M', 'A', 'S', 'T', 'G', 'R', 'U', 'P', 'O', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24089 */ HB_P_LINE, 217, 2,	/* 729 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24114 */ HB_P_LINE, 219, 2,	/* 731 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 24203 */ HB_P_LINE, 220, 2,	/* 732 */
	HB_P_LOCALNEARSETSTR, 1, 18, 0,	/* MATRIZ 18*/
	'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 24228 */ HB_P_LINE, 221, 2,	/* 733 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 't', 'i', 'p', 'o', '_', 'n', 'o', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24259 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24291 */ HB_P_LINE, 223, 2,	/* 735 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'n', 'j', 'u', 'n', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24321 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'e', 'r', 'i', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24348 */ HB_P_LINE, 225, 2,	/* 737 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'm', 'o', 'd', 'e', 'l', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24376 */ HB_P_LINE, 226, 2,	/* 738 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'u', 'm', '_', 'e', 'c', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24406 */ HB_P_LINE, 227, 2,	/* 739 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24435 */ HB_P_LINE, 228, 2,	/* 740 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24461 */ HB_P_LINE, 229, 2,	/* 741 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24490 */ HB_P_LINE, 230, 2,	/* 742 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', 'i', 'g', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24518 */ HB_P_LINE, 231, 2,	/* 743 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24548 */ HB_P_LINE, 232, 2,	/* 744 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24577 */ HB_P_LINE, 233, 2,	/* 745 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24606 */ HB_P_LINE, 234, 2,	/* 746 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24636 */ HB_P_LINE, 235, 2,	/* 747 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24665 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24692 */ HB_P_LINE, 237, 2,	/* 749 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24721 */ HB_P_LINE, 238, 2,	/* 750 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'q', 'u', 'a', 'n', 't', 'd', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24755 */ HB_P_LINE, 239, 2,	/* 751 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24791 */ HB_P_LINE, 240, 2,	/* 752 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24826 */ HB_P_LINE, 241, 2,	/* 753 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'l', '_', 'f', 'a', 't', 'u', 'r', 'a', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24863 */ HB_P_LINE, 242, 2,	/* 754 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'p', 'r', '_', 'u', 'n', 'i', 't', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24898 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24934 */ HB_P_LINE, 244, 2,	/* 756 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', '_', 'm', 'e', 'r', 'c', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24969 */ HB_P_LINE, 245, 2,	/* 757 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 24999 */ HB_P_LINE, 246, 2,	/* 758 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25029 */ HB_P_LINE, 247, 2,	/* 759 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25064 */ HB_P_LINE, 248, 2,	/* 760 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25094 */ HB_P_LINE, 249, 2,	/* 761 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'o', 'n', 't', 'a', 'd', 'o', 'r', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25125 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25154 */ HB_P_LINE, 251, 2,	/* 763 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25184 */ HB_P_LINE, 252, 2,	/* 764 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'i', 'd', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25214 */ HB_P_LINE, 253, 2,	/* 765 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'u', 'f', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25242 */ HB_P_LINE, 254, 2,	/* 766 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'i', 'n', 's', 'c', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25273 */ HB_P_LINE, 255, 2,	/* 767 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'g', 'c', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25303 */ HB_P_LINE, 0, 3,	/* 768 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'p', 'f', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25333 */ HB_P_LINE, 1, 3,	/* 769 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'i', 'c', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25364 */ HB_P_LINE, 2, 3,	/* 770 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'i', 'c', 'm', '_', 'f', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25397 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'i', 'c', 'm', '_', 's', 'u', 'b', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25432 */ HB_P_LINE, 4, 3,	/* 772 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	',', 'v', 'l', 'r', '_', 'i', 'c', 'm', 's', 'u', 'b', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25470 */ HB_P_LINE, 5, 3,	/* 773 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	',', 'b', 'a', 's', 'e', '_', 'i', 'c', 'm', 's', 'u', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25508 */ HB_P_LINE, 6, 3,	/* 774 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25544 */ HB_P_LINE, 7, 3,	/* 775 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'i', 'a', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25570 */ HB_P_LINE, 8, 3,	/* 776 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'i', 'a', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25596 */ HB_P_LINE, 9, 3,	/* 777 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'i', 'a', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25622 */ HB_P_LINE, 10, 3,	/* 778 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'f', 'r', 'e', 't', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25655 */ HB_P_LINE, 11, 3,	/* 779 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'e', 'n', 'c', 'a', 'r', 'g', 'o', '_', 'f', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25692 */ HB_P_LINE, 12, 3,	/* 780 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'd', 'i', 's', 'p', '_', 'a', 's', 's', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25729 */ HB_P_LINE, 13, 3,	/* 781 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'd', 'e', 's', 'c', '1', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25762 */ HB_P_LINE, 14, 3,	/* 782 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'd', 'e', 's', 'c', '2', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25795 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'd', 'e', 's', 'c', '3', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25828 */ HB_P_LINE, 16, 3,	/* 784 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'i', 'p', 'i', '_', 'a', 'l', 'i', 'q', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25864 */ HB_P_LINE, 17, 3,	/* 785 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'i', 'p', 'i', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25895 */ HB_P_LINE, 18, 3,	/* 786 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'p', 'e', 's', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '8', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25926 */ HB_P_LINE, 19, 3,	/* 787 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'p', 'e', 's', 'o', '_', 'l', 'i', 'q', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '8', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25961 */ HB_P_LINE, 20, 3,	/* 788 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'a', 'l', 'i', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 25991 */ HB_P_LINE, 21, 3,	/* 789 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'b', 'e', 'b', 'i', 'd', 'a', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26024 */ HB_P_LINE, 22, 3,	/* 790 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26050 */ HB_P_LINE, 23, 3,	/* 791 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'i', 's', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26078 */ HB_P_LINE, 24, 3,	/* 792 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'i', 't', 't', 'r', 'i', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26107 */ HB_P_LINE, 25, 3,	/* 793 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'p', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26137 */ HB_P_LINE, 26, 3,	/* 794 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'o', 'n', 'd', '_', 'v', 'e', 'z', 'e', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26169 */ HB_P_LINE, 27, 3,	/* 795 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'o', 'n', 'd', '_', 'i', 'n', 't', 'e', 'v', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26201 */ HB_P_LINE, 28, 3,	/* 796 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'n', 'a', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26230 */ HB_P_LINE, 29, 3,	/* 797 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'h', 'a', 's', 's', 'i', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26260 */ HB_P_LINE, 30, 3,	/* 798 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26290 */ HB_P_LINE, 31, 3,	/* 799 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26320 */ HB_P_LINE, 32, 3,	/* 800 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26350 */ HB_P_LINE, 33, 3,	/* 801 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26380 */ HB_P_LINE, 34, 3,	/* 802 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26410 */ HB_P_LINE, 35, 3,	/* 803 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'a', 'n', 'c', 'e', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26438 */ HB_P_LINE, 36, 3,	/* 804 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26465 */ HB_P_LINE, 37, 3,	/* 805 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26492 */ HB_P_LINE, 38, 3,	/* 806 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26519 */ HB_P_LINE, 39, 3,	/* 807 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26546 */ HB_P_LINE, 40, 3,	/* 808 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26573 */ HB_P_LINE, 41, 3,	/* 809 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '6', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26600 */ HB_P_LINE, 42, 3,	/* 810 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'n', 'o', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26630 */ HB_P_LINE, 43, 3,	/* 811 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', 'r', '_', 'i', 'c', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26665 */ HB_P_LINE, 44, 3,	/* 812 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'b', 'a', 's', 'e', '_', 'i', 'c', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26701 */ HB_P_LINE, 45, 3,	/* 813 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'o', 'r', 'm', '_', 'e', 'l', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26731 */ HB_P_LINE, 46, 3,	/* 814 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'h', 'o', 'r', 'a', '_', 'm', 'o', 'v', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26761 */ HB_P_LINE, 47, 3,	/* 815 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 26805 */ HB_P_LINE, 48, 3,	/* 816 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'm', 'o', 'v', 'n', 't', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 197, 1,	/* 453 (abs: 27277) */
/* 26827 */ HB_P_LINE, 49, 3,	/* 817 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26900 */ HB_P_LINE, 50, 3,	/* 818 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 26944 */ HB_P_LINE, 51, 3,	/* 819 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 26995 */ HB_P_LINE, 52, 3,	/* 820 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27020 */ HB_P_LINE, 53, 3,	/* 821 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27081 */ HB_P_LINE, 54, 3,	/* 822 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27252 */ HB_P_LINE, 55, 3,	/* 823 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27277 */ HB_P_LINE, 57, 3,	/* 825 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 's', 't', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 205, 17,	/* 4557 (abs: 31851) */
/* 27297 */ HB_P_LINE, 58, 3,	/* 826 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'S', 'T', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27366 */ HB_P_LINE, 59, 3,	/* 827 */
	HB_P_LOCALNEARSETSTR, 1, 14, 0,	/* MATRIZ 14*/
	'c', 's', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
/* 27387 */ HB_P_LINE, 60, 3,	/* 828 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 27417 */ HB_P_LINE, 61, 3,	/* 829 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'i', 't', 't', 'r', 'i', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 27446 */ HB_P_LINE, 62, 3,	/* 830 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 27472 */ HB_P_LINE, 63, 3,	/* 831 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'o', 'p', 'e', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 27498 */ HB_P_LINE, 64, 3,	/* 832 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 27542 */ HB_P_LINE, 65, 3,	/* 833 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'S', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27584 */ HB_P_LINE, 66, 3,	/* 834 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'S', 'T', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27633 */ HB_P_LINE, 67, 3,	/* 835 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27658 */ HB_P_LINE, 68, 3,	/* 836 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'S', 'T', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27717 */ HB_P_LINE, 69, 3,	/* 837 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'S', 'T', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'S', 'T', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'S', 'T', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27882 */ HB_P_LINE, 70, 3,	/* 838 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27907 */ HB_P_LINE, 72, 3,	/* 840 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 104,	/* 104 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '0', '0', 39, ',', 39, 'T', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', ' ', 'I', 'n', 't', 'e', 'g', 'r', 'a', 'l', 'm', 'e', 'n', 't', 'e', 39, ',', 39, 'T', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28049 */ HB_P_LINE, 73, 3,	/* 841 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 141,	/* 141 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '1', '0', 39, ',', 39, 'T', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', ' ', 'e', ' ', 'c', 'o', 'm', ' ', 'c', 'o', 'b', 'r', 'a', 'n', '?', 'a', ' ', 'd', 'o', ' ', 'I', 'C', 'M', 'S', ' ', 'p', 'o', 'r', ' ', 's', 'u', 'b', 's', 't', 'i', 't', 'u', 'i', 'c', 'a', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', 39, ',', 39, 'F', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28228 */ HB_P_LINE, 74, 3,	/* 842 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 111,	/* 111 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '2', '0', 39, ',', 39, 'C', 'o', 'm', ' ', 'r', 'e', 'd', 'u', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'b', 'a', 's', 'e', ' ', 'd', 'e', ' ', 'c', 'a', 'l', 'c', 'u', 'l', 'o', 39, ',', 39, 'T', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28377 */ HB_P_LINE, 75, 3,	/* 843 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 155,	/* 155 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '3', '0', 39, ',', 39, 'I', 's', 'e', 'n', 't', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', ' ', 'e', ' ', 'c', 'o', 'm', ' ', 'c', 'o', 'b', 'r', 'a', 'n', '?', 'a', ' ', 'd', 'o', ' ', 'I', 'C', 'M', 'S', ' ', 'p', 'o', 'r', ' ', 's', 'u', 'b', 's', 't', 'i', 't', 'u', 'i', 'c', 'a', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', 39, ',', 39, 'I', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28570 */ HB_P_LINE, 76, 3,	/* 844 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 87,	/* 87 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '4', '0', 39, ',', 39, 'I', 's', 'e', 'n', 't', 'a', 39, ',', 39, 'I', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28695 */ HB_P_LINE, 77, 3,	/* 845 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 94,	/* 94 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '4', '1', 39, ',', 39, 'N', 'a', 'o', ' ', 'T', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', 39, ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28827 */ HB_P_LINE, 78, 3,	/* 846 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '5', '0', 39, ',', 39, 'S', 'u', 's', 'p', 'e', 'n', 's', 'a', 'o', 39, ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28955 */ HB_P_LINE, 79, 3,	/* 847 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 92,	/* 92 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '5', '1', 39, ',', 39, 'D', 'i', 'f', 'e', 'r', 'i', 'm', 'e', 'n', 't', 'o', 39, ',', 39, 'T', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 29085 */ HB_P_LINE, 80, 3,	/* 848 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 135,	/* 135 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '6', '0', 39, ',', 39, 'I', 'C', 'M', 'S', ' ', 'c', 'o', 'b', 'r', 'a', 'd', 'o', ' ', 'a', 'n', 't', 'e', 'r', 'i', 'o', 'r', 'm', 'e', 'n', 't', 'e', ' ', 'p', 'o', 'r', ' ', 's', 'u', 'b', 's', 't', 'i', 't', 'u', 'i', 'c', 'a', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', 39, ',', 39, 'F', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 29258 */ HB_P_LINE, 81, 3,	/* 849 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 155,	/* 155 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '7', '0', 39, ',', 39, 'C', 'o', 'm', ' ', 'r', 'e', 'd', 'u', 'c', 'a', 'o', ' ', 'b', 'a', 's', 'e', ' ', 'd', 'e', ' ', 'c', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'e', ' ', 'c', 'o', 'b', 'r', 'a', 'n', '?', 'a', ' ', 'd', 'o', ' ', 'I', 'C', 'M', 'S', ' ', 'p', 'o', 'r', ' ', 's', 'u', 'b', 's', 't', 'i', 't', 'u', 'i', 'c', 'a', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', 39, ',', 39, 'F', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 29451 */ HB_P_LINE, 82, 3,	/* 850 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 87,	/* 87 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '0', '9', '0', 39, ',', 39, 'O', 'u', 't', 'r', 'a', 's', 39, ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 29576 */ HB_P_LINE, 83, 3,	/* 851 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '1', '0', '1', 39, ',', 39, 'T', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'i', 'm', 'p', 'l', 'e', 's', ' ', 'N', 'a', 'c', 'i', 'o', 'n', 'a', 'l', ' ', 'c', 'o', 'm', ' ', 'p', 'e', 'r', 'm', 'i', 's', 's', '?', 'o', ' ', 'd', 'e', ' ', 'c', 'r', '?', 'd', 'i', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 29812 */ HB_P_LINE, 84, 3,	/* 852 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '1', '0', '2', 39, ',', 39, 'T', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'i', 'm', 'p', 'l', 'e', 's', ' ', 'N', 'a', 'c', 'i', 'o', 'n', 'a', 'l', ' ', 's', 'e', 'm', ' ', 'p', 'e', 'r', 'm', 'i', 's', 's', '?', 'o', ' ', 'd', 'e', ' ', 'c', 'r', '?', 'd', 'i', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30048 */ HB_P_LINE, 85, 3,	/* 853 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '1', '0', '3', 39, ',', 39, 'I', 's', 'e', 'n', '?', '?', 'o', ' ', 'd', 'o', ' ', 'I', 'C', 'M', 'S', ' ', 'n', 'o', ' ', 'S', 'i', 'm', 'p', 'l', 'e', 's', ' ', 'N', 'a', 'c', 'i', 'o', 'n', 'a', 'l', ' ', 'p', 'a', 'r', 'a', ' ', 'f', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 'r', 'e', 'c', 'e', 'i', 't', 'a', ' ', 'b', 'r', 'u', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30284 */ HB_P_LINE, 86, 3,	/* 854 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '2', '0', '1', 39, ',', 39, 'T', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'i', 'm', 'p', 'l', 'e', 's', ' ', 'N', 'a', 'c', 'i', 'o', 'n', 'a', 'l', ' ', 'c', 'o', 'm', ' ', 'p', 'e', 'r', 'm', 'i', 's', 's', '?', 'o', ' ', 'd', 'e', ' ', 'c', 'r', '?', 'd', 'i', 't', 'o', ' ', 'e', ' ', 'c', 'o', 'm', ' ', 'c', 'o', 'b', 'r', 'a', 'n', '?', 'a', ' ', 'd', 'o', ' ', 'I', 'C', 'M', 'S', ' ', 'p', 'o', 'r', ' ', 's', 'u', 'b', 's', 't', 'i', 't', 'u', 'i', '?', '?', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', '?', 'r', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30520 */ HB_P_LINE, 87, 3,	/* 855 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '2', '0', '2', 39, ',', 39, 'T', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'i', 'm', 'p', 'l', 'e', 's', ' ', 'N', 'a', 'c', 'i', 'o', 'n', 'a', 'l', ' ', 's', 'e', 'm', ' ', 'p', 'e', 'r', 'm', 'i', 's', 's', '?', 'o', ' ', 'd', 'e', ' ', 'c', 'r', '?', 'd', 'i', 't', 'o', ' ', 'e', ' ', 'c', 'o', 'm', ' ', 'c', 'o', 'b', 'r', 'a', 'n', '?', 'a', ' ', 'd', 'o', ' ', 'I', 'C', 'M', 'S', ' ', 'p', 'o', 'r', ' ', 's', 'u', 'b', 's', 't', 'i', 't', 'u', 'i', '?', '?', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', '?', 'r', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30756 */ HB_P_LINE, 88, 3,	/* 856 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '2', '0', '3', 39, ',', 39, 'I', 's', 'e', 'n', '?', '?', 'o', ' ', 'd', 'o', ' ', 'I', 'C', 'M', 'S', ' ', 'n', 'o', ' ', 'S', 'i', 'm', 'p', 'l', 'e', 's', ' ', 'N', 'a', 'c', 'i', 'o', 'n', 'a', 'l', ' ', 'p', 'a', 'r', 'a', ' ', 'f', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 'r', 'e', 'c', 'e', 'i', 't', 'a', ' ', 'b', 'r', 'u', 't', 'a', ' ', 'e', ' ', 'c', 'o', 'm', ' ', 'c', 'o', 'b', 'r', 'a', 'n', '?', 'a', ' ', 'd', 'o', ' ', 'I', 'C', 'M', 'S', ' ', 'p', 'o', 'r', ' ', 's', 'u', 'b', 's', 't', 'i', 't', 'u', 'i', '?', '?', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', '?', 'r', 'i', 'a', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30992 */ HB_P_LINE, 89, 3,	/* 857 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '3', '0', '0', 39, ',', 39, 'I', 'm', 'u', 'n', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 31228 */ HB_P_LINE, 90, 3,	/* 858 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '4', '0', '0', 39, ',', 39, 'N', '?', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'i', 'm', 'p', 'l', 'e', 's', ' ', 'N', 'a', 'c', 'i', 'o', 'n', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 31464 */ HB_P_LINE, 91, 3,	/* 859 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 198,	/* 198 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '5', '0', '0', 39, ',', 39, 'I', 'C', 'M', 'S', ' ', 'c', 'o', 'b', 'r', 'a', 'd', 'o', ' ', 'a', 'n', 't', 'e', 'r', 'i', 'o', 'r', 'm', 'e', 'n', 't', 'e', ' ', 'p', 'o', 'r', ' ', 's', 'u', 'b', 's', 't', 'i', 't', 'u', 'i', '?', '?', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', '?', 'r', 'i', 'a', ' ', '(', 's', 'u', 'b', 's', 't', 'i', 't', 'u', '?', 'd', 'o', ')', ' ', 'o', 'u', ' ', 'p', 'o', 'r', ' ', 'a', 'n', 't', 'e', 'c', 'i', 'p', 'a', '?', '?', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 39, ' ', ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 31700 */ HB_P_LINE, 92, 3,	/* 860 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 88,	/* 88 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', '(', 'c', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ',', 'd', 'a', 't', 'a', 'c', 'a', 'd', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 39, '9', '0', '0', 39, ',', 39, 'O', 'U', 'T', 'R', 'O', 'S', ' ', 39, ',', 39, 'N', 39, ',', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 31826 */ HB_P_LINE, 93, 3,	/* 861 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 31851 */ HB_P_LINE, 96, 3,	/* 864 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'n', 'o', 'n', 'f', 'c', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 7, 2,	/* 519 (abs: 32389) */
/* 31873 */ HB_P_LINE, 97, 3,	/* 865 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 's', 'a', 'c', 'n', 'o', 'n', 'f', 'c', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 31944 */ HB_P_LINE, 98, 3,	/* 866 */
	HB_P_LOCALNEARSETSTR, 1, 17, 0,	/* MATRIZ 17*/
	'n', 'u', 'm', 'e', 'r', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
/* 31968 */ HB_P_LINE, 99, 3,	/* 867 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32012 */ HB_P_LINE, 100, 3,	/* 868 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'N', 'O', 'N', 'F', 'C', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32056 */ HB_P_LINE, 101, 3,	/* 869 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'N', 'O', 'N', 'F', 'C', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32107 */ HB_P_LINE, 102, 3,	/* 870 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32132 */ HB_P_LINE, 103, 3,	/* 871 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'N', 'O', 'N', 'F', 'C', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32193 */ HB_P_LINE, 104, 3,	/* 872 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'N', 'O', 'N', 'F', 'C', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'N', 'O', 'N', 'F', 'C', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'N', 'O', 'N', 'F', 'C', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32364 */ HB_P_LINE, 105, 3,	/* 873 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32389 */ HB_P_LINE, 107, 3,	/* 875 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', 'N', 'C', 'M', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 196, 2,	/* 708 (abs: 33114) */
/* 32409 */ HB_P_LINE, 108, 3,	/* 876 */
	HB_P_LOCALNEARSETSTR, 1, 17, 0,	/* MATRIZ 17*/
	'c', 'o', 'd', 'i', 'g', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
/* 32433 */ HB_P_LINE, 109, 3,	/* 877 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32463 */ HB_P_LINE, 110, 3,	/* 878 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'e', 'r', 'c', '1', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32495 */ HB_P_LINE, 111, 3,	/* 879 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'e', 'r', 'c', '2', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32527 */ HB_P_LINE, 112, 3,	/* 880 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'e', 'r', 'c', '3', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32559 */ HB_P_LINE, 113, 3,	/* 881 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 'x', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32583 */ HB_P_LINE, 114, 3,	/* 882 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 't', 'a', 'b', 'e', 'l', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32611 */ HB_P_LINE, 115, 3,	/* 883 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'a', 'l', 'i', 'q', 'n', 'a', 'c', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32645 */ HB_P_LINE, 116, 3,	/* 884 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'a', 'l', 'i', 'q', 'i', 'm', 'p', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32679 */ HB_P_LINE, 117, 3,	/* 885 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'e', 's', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32705 */ HB_P_LINE, 118, 3,	/* 886 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 32749 */ HB_P_LINE, 119, 3,	/* 887 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'N', 'C', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32791 */ HB_P_LINE, 120, 3,	/* 888 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'N', 'C', 'M', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32840 */ HB_P_LINE, 121, 3,	/* 889 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32865 */ HB_P_LINE, 122, 3,	/* 890 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'N', 'C', 'M', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32924 */ HB_P_LINE, 123, 3,	/* 891 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'N', 'C', 'M', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'N', 'C', 'M', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'N', 'C', 'M', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33089 */ HB_P_LINE, 124, 3,	/* 892 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33114 */ HB_P_LINE, 126, 3,	/* 894 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'O', 'P', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33188 */ HB_P_LINE, 127, 3,	/* 895 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'a', 'c', 'o', 'p', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 107, 2,	/* 619 (abs: 33823) */
/* 33207 */ HB_P_LINE, 128, 3,	/* 896 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'O', 'P', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33279 */ HB_P_LINE, 129, 3,	/* 897 */
	HB_P_LOCALNEARSETSTR, 1, 19, 0,	/* MATRIZ 19*/
	'o', 'p', 'e', 'r', 'a', 'c', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 33305 */ HB_P_LINE, 130, 3,	/* 898 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'e', 's', 'c', 'r', '_', 'o', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 33336 */ HB_P_LINE, 131, 3,	/* 899 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'r', 'e', 'd', 'i', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 33365 */ HB_P_LINE, 132, 3,	/* 900 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'a', 'i', '_', 'e', 'n', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 33394 */ HB_P_LINE, 133, 3,	/* 901 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 33420 */ HB_P_LINE, 134, 3,	/* 902 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 33464 */ HB_P_LINE, 135, 3,	/* 903 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'O', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33505 */ HB_P_LINE, 136, 3,	/* 904 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'O', 'P', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33553 */ HB_P_LINE, 137, 3,	/* 905 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33578 */ HB_P_LINE, 138, 3,	/* 906 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'O', 'P', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33636 */ HB_P_LINE, 139, 3,	/* 907 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 144,	/* 144 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'O', 'P', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'O', 'P', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'O', 'P', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33798 */ HB_P_LINE, 140, 3,	/* 908 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33823 */ HB_P_LINE, 142, 3,	/* 910 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'N', 'O', 'T', 'A', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33897 */ HB_P_LINE, 143, 3,	/* 911 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'n', 'o', 't', 'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 73, 2,	/* 585 (abs: 34500) */
/* 33918 */ HB_P_LINE, 144, 3,	/* 912 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'N', 'O', 'T', 'A', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33990 */ HB_P_LINE, 145, 3,	/* 913 */
	HB_P_LOCALNEARSETSTR, 1, 15, 0,	/* MATRIZ 15*/
	'd', 'a', 't', 'a', '_', 'n', 't', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
/* 34012 */ HB_P_LINE, 146, 3,	/* 914 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34049 */ HB_P_LINE, 147, 3,	/* 915 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 's', 'e', 'r', 'i', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34085 */ HB_P_LINE, 148, 3,	/* 916 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34129 */ HB_P_LINE, 149, 3,	/* 917 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'N', 'O', 'T', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34172 */ HB_P_LINE, 150, 3,	/* 918 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'N', 'O', 'T', 'A', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34222 */ HB_P_LINE, 151, 3,	/* 919 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34247 */ HB_P_LINE, 152, 3,	/* 920 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'N', 'O', 'T', 'A', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34307 */ HB_P_LINE, 153, 3,	/* 921 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'N', 'O', 'T', 'A', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'N', 'O', 'T', 'A', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'N', 'O', 'T', 'A', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34475 */ HB_P_LINE, 154, 3,	/* 922 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34500 */ HB_P_LINE, 157, 3,	/* 925 */
	HB_P_LOCALNEARSETSTR, 1, 18, 0,	/* MATRIZ 18*/
	'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 34525 */ HB_P_LINE, 158, 3,	/* 926 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'i', 'p', '_', 's', 'e', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34554 */ HB_P_LINE, 159, 3,	/* 927 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 't', 'i', 'p', 'o', '_', 'n', 'o', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34585 */ HB_P_LINE, 160, 3,	/* 928 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'n', 'o', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34615 */ HB_P_LINE, 161, 3,	/* 929 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34647 */ HB_P_LINE, 162, 3,	/* 930 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'e', 'r', 'i', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34674 */ HB_P_LINE, 163, 3,	/* 931 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'm', 'o', 'd', 'e', 'l', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34702 */ HB_P_LINE, 164, 3,	/* 932 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'a', 'u', 'x', 'i', 'l', 'i', 'a', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34733 */ HB_P_LINE, 165, 3,	/* 933 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34762 */ HB_P_LINE, 166, 3,	/* 934 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34788 */ HB_P_LINE, 167, 3,	/* 935 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34817 */ HB_P_LINE, 168, 3,	/* 936 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34846 */ HB_P_LINE, 169, 3,	/* 937 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34876 */ HB_P_LINE, 170, 3,	/* 938 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'i', 'd', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34906 */ HB_P_LINE, 171, 3,	/* 939 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'u', 'f', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34934 */ HB_P_LINE, 172, 3,	/* 940 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'i', 'n', 's', 'c', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34965 */ HB_P_LINE, 173, 3,	/* 941 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'g', 'c', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 34995 */ HB_P_LINE, 174, 3,	/* 942 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'p', 'f', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35025 */ HB_P_LINE, 175, 3,	/* 943 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35055 */ HB_P_LINE, 176, 3,	/* 944 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', '_', 'b', 'a', 's', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35090 */ HB_P_LINE, 177, 3,	/* 945 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'v', 'l', '_', 'i', 'c', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35124 */ HB_P_LINE, 178, 3,	/* 946 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'v', 'l', '_', 'i', 'c', 'm', 's', 'u', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35160 */ HB_P_LINE, 179, 3,	/* 947 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	',', 'v', 'l', 'r', '_', 'i', 'c', 'm', 's', 'u', 'b', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35198 */ HB_P_LINE, 180, 3,	/* 948 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	',', 'b', 'a', 's', 'e', '_', 'i', 'c', 'm', 's', 'u', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35236 */ HB_P_LINE, 181, 3,	/* 949 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35272 */ HB_P_LINE, 182, 3,	/* 950 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'a', 'l', 'i', 'q', '_', 'i', 'c', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35308 */ HB_P_LINE, 183, 3,	/* 951 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', '_', 'n', 'o', 't', 'a', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35343 */ HB_P_LINE, 184, 3,	/* 952 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', '_', 'p', 'r', 'o', 'd', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35378 */ HB_P_LINE, 185, 3,	/* 953 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'e', 's', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35410 */ HB_P_LINE, 186, 3,	/* 954 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'p', 'e', 's', 'o', '_', 'l', 'i', 'q', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35446 */ HB_P_LINE, 187, 3,	/* 955 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 't', 'i', 'p', '_', 'f', 'r', 'e', 't', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35477 */ HB_P_LINE, 188, 3,	/* 956 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'f', 'r', 'e', 't', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35510 */ HB_P_LINE, 189, 3,	/* 957 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'e', 'n', 'c', 'a', 'r', 'g', 'o', '_', 'f', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35547 */ HB_P_LINE, 190, 3,	/* 958 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'd', 'i', 's', 'p', '_', 'a', 's', 's', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35584 */ HB_P_LINE, 191, 3,	/* 959 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'i', 'p', 'i', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35615 */ HB_P_LINE, 192, 3,	/* 960 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'n', 'a', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35644 */ HB_P_LINE, 193, 3,	/* 961 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'a', 'n', 'c', 'e', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35672 */ HB_P_LINE, 194, 3,	/* 962 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35699 */ HB_P_LINE, 195, 3,	/* 963 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35726 */ HB_P_LINE, 196, 3,	/* 964 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35753 */ HB_P_LINE, 197, 3,	/* 965 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35780 */ HB_P_LINE, 198, 3,	/* 966 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35807 */ HB_P_LINE, 199, 3,	/* 967 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '6', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35834 */ HB_P_LINE, 200, 3,	/* 968 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'n', 'u', 'm', '_', 'c', 'o', 'n', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35865 */ HB_P_LINE, 201, 3,	/* 969 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'h', 'n', 'f', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35893 */ HB_P_LINE, 202, 3,	/* 970 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'a', 'm', 'n', 'f', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '9', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35922 */ HB_P_LINE, 203, 3,	/* 971 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '7', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35949 */ HB_P_LINE, 204, 3,	/* 972 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '8', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 35976 */ HB_P_LINE, 205, 3,	/* 973 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '9', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36003 */ HB_P_LINE, 206, 3,	/* 974 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '0', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36031 */ HB_P_LINE, 207, 3,	/* 975 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36059 */ HB_P_LINE, 208, 3,	/* 976 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36087 */ HB_P_LINE, 209, 3,	/* 977 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36115 */ HB_P_LINE, 210, 3,	/* 978 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36143 */ HB_P_LINE, 211, 3,	/* 979 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36171 */ HB_P_LINE, 212, 3,	/* 980 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '6', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36199 */ HB_P_LINE, 213, 3,	/* 981 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '7', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36227 */ HB_P_LINE, 214, 3,	/* 982 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '8', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36255 */ HB_P_LINE, 215, 3,	/* 983 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '1', '9', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36283 */ HB_P_LINE, 216, 3,	/* 984 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '2', '0', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36311 */ HB_P_LINE, 217, 3,	/* 985 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'o', 'r', 'm', '_', 'e', 'l', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36341 */ HB_P_LINE, 218, 3,	/* 986 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 36385 */ HB_P_LINE, 220, 3,	/* 988 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 36459 */ HB_P_LINE, 221, 3,	/* 989 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 't', 'o', 't', 'n', 't', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 196, 1,	/* 452 (abs: 36930) */
/* 36481 */ HB_P_LINE, 222, 3,	/* 990 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 36553 */ HB_P_LINE, 224, 3,	/* 992 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36597 */ HB_P_LINE, 225, 3,	/* 993 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36648 */ HB_P_LINE, 226, 3,	/* 994 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36673 */ HB_P_LINE, 227, 3,	/* 995 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36734 */ HB_P_LINE, 228, 3,	/* 996 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36905 */ HB_P_LINE, 229, 3,	/* 997 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36930 */ HB_P_LINE, 231, 3,	/* 999 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37004 */ HB_P_LINE, 232, 3,	/* 1000 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'l', 'o', 'g', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 99, 4,	/* 1123 (abs: 38144) */
/* 37024 */ HB_P_LINE, 233, 3,	/* 1001 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'L', 'O', 'G', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37095 */ HB_P_LINE, 234, 3,	/* 1002 */
	HB_P_LOCALNEARSETSTR, 1, 16, 0,	/* MATRIZ 16*/
	'd', 'a', 't', 'a', '_', 's', 'i', 's', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
/* 37118 */ HB_P_LINE, 235, 3,	/* 1003 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'a', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37141 */ HB_P_LINE, 236, 3,	/* 1004 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'h', 'o', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37167 */ HB_P_LINE, 237, 3,	/* 1005 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37194 */ HB_P_LINE, 238, 3,	/* 1006 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'a', 'u', 't', '_', 'o', 'p', 'e', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37224 */ HB_P_LINE, 239, 3,	/* 1007 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37254 */ HB_P_LINE, 240, 3,	/* 1008 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37284 */ HB_P_LINE, 241, 3,	/* 1009 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37313 */ HB_P_LINE, 242, 3,	/* 1010 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37343 */ HB_P_LINE, 243, 3,	/* 1011 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37373 */ HB_P_LINE, 244, 3,	/* 1012 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37405 */ HB_P_LINE, 245, 3,	/* 1013 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'q', 'u', 'a', 'n', 't', 'd', '1', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '4', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37440 */ HB_P_LINE, 246, 3,	/* 1014 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'q', 'u', 'a', 'n', 't', 'd', '2', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '4', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37475 */ HB_P_LINE, 247, 3,	/* 1015 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'v', 'a', 'l', 'o', 'r', '1', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '4', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37509 */ HB_P_LINE, 248, 3,	/* 1016 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'v', 'a', 'l', 'o', 'r', '2', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '4', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37543 */ HB_P_LINE, 249, 3,	/* 1017 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'e', 'n', 'c', '1', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37567 */ HB_P_LINE, 250, 3,	/* 1018 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'e', 'n', 'c', '2', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37591 */ HB_P_LINE, 251, 3,	/* 1019 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'm', 'o', 'd', 'u', 'l', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37620 */ HB_P_LINE, 252, 3,	/* 1020 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37649 */ HB_P_LINE, 253, 3,	/* 1021 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'a', 'u', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37679 */ HB_P_LINE, 254, 3,	/* 1022 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37710 */ HB_P_LINE, 255, 3,	/* 1023 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 37754 */ HB_P_LINE, 0, 4,	/* 1024 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'L', 'O', 'G', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37796 */ HB_P_LINE, 1, 4,	/* 1025 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37845 */ HB_P_LINE, 2, 4,	/* 1026 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37870 */ HB_P_LINE, 3, 4,	/* 1027 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37929 */ HB_P_LINE, 4, 4,	/* 1028 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37954 */ HB_P_LINE, 5, 4,	/* 1029 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'L', 'O', 'G', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38119 */ HB_P_LINE, 6, 4,	/* 1030 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38144 */ HB_P_LINE, 8, 4,	/* 1032 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 38218 */ HB_P_LINE, 9, 4,	/* 1033 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'd', 'd', 'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 210, 2,	/* 722 (abs: 38959) */
/* 38240 */ HB_P_LINE, 10, 4,	/* 1034 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 38312 */ HB_P_LINE, 11, 4,	/* 1035 */
	HB_P_LOCALNEARSETSTR, 1, 26, 0,	/* MATRIZ 26*/
	'c', 'o', 'd', 'i', 'g', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
/* 38345 */ HB_P_LINE, 12, 4,	/* 1036 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'e', 's', 'c', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 38373 */ HB_P_LINE, 13, 4,	/* 1037 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'e', 's', 'c', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 38401 */ HB_P_LINE, 14, 4,	/* 1038 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 38445 */ HB_P_LINE, 15, 4,	/* 1039 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38489 */ HB_P_LINE, 16, 4,	/* 1040 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38540 */ HB_P_LINE, 17, 4,	/* 1041 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38565 */ HB_P_LINE, 18, 4,	/* 1042 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38626 */ HB_P_LINE, 19, 4,	/* 1043 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38651 */ HB_P_LINE, 20, 4,	/* 1044 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', ' ', 'A', 'D', 'D', ' ', 'C', 'O', 'N', 'S', 'T', 'R', 'A', 'I', 'N', 'T', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', '_', 'P', 'K', ' ', 'P', 'R', 'I', 'M', 'A', 'R', 'Y', ' ', 'K', 'E', 'Y', ' ', '(', 'c', 'o', 'd', 'i', 'g', 'o', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38738 */ HB_P_LINE, 21, 4,	/* 1045 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38763 */ HB_P_LINE, 22, 4,	/* 1046 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'A', 'D', 'D', 'E', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38934 */ HB_P_LINE, 23, 4,	/* 1047 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38959 */ HB_P_LINE, 25, 4,	/* 1049 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'E', 'X', 'C', 'E', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 39033 */ HB_P_LINE, 26, 4,	/* 1050 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'A', 'S', 'T', 'E', 'X', 'C', 'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 5, 1,	/* 261 (abs: 39313) */
/* 39055 */ HB_P_LINE, 27, 4,	/* 1051 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'E', 'X', 'C', 'E', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 39127 */ HB_P_LINE, 28, 4,	/* 1052 */
	HB_P_LOCALNEARSETSTR, 1, 13, 0,	/* MATRIZ 13*/
	'i', 'd', ' ', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', ' ', 0, 
/* 39147 */ HB_P_LINE, 29, 4,	/* 1053 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 39179 */ HB_P_LINE, 30, 4,	/* 1054 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'g', 'r', 'u', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 39206 */ HB_P_LINE, 31, 4,	/* 1055 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'p', 'r', 'e', 'c', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 39237 */ HB_P_LINE, 32, 4,	/* 1056 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'E', 'X', 'C', 'E', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39288 */ HB_P_LINE, 33, 4,	/* 1057 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39313 */ HB_P_LINE, 35, 4,	/* 1059 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'E', 'X', 'E', '_', 'I', 'T', 'E', 'N', 'S', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 39392 */ HB_P_LINE, 36, 4,	/* 1060 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'M', 'A', 'S', 'T', 'E', 'X', 'E', '_', 'I', 'T', 'E', 'N', 'S', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 62, 1,	/* 318 (abs: 39734) */
/* 39419 */ HB_P_LINE, 37, 4,	/* 1061 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'E', 'X', 'E', '_', 'I', 'T', 'E', 'N', 'S', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 39496 */ HB_P_LINE, 38, 4,	/* 1062 */
	HB_P_LOCALNEARSETSTR, 1, 13, 0,	/* MATRIZ 13*/
	'i', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
/* 39516 */ HB_P_LINE, 39, 4,	/* 1063 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 39552 */ HB_P_LINE, 40, 4,	/* 1064 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	',', 'i', 'd', '_', 'p', 'r', 'o', 'd', 'u', 't', 'o', '_', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 39591 */ HB_P_LINE, 41, 4,	/* 1065 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'i', 'd', '_', 'e', 'x', 'c', 'e', 'c', 'a', 'o', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 39622 */ HB_P_LINE, 42, 4,	/* 1066 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'i', 'd', '_', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 39653 */ HB_P_LINE, 44, 4,	/* 1068 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'E', 'X', 'E', '_', 'I', 'T', 'E', 'N', 'S', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39709 */ HB_P_LINE, 45, 4,	/* 1069 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39734 */ HB_P_LINE, 47, 4,	/* 1071 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'T', 'V', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 39810 */ HB_P_LINE, 48, 4,	/* 1072 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'T', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 178, 0,	/* 178 (abs: 40009) */
/* 39834 */ HB_P_LINE, 49, 4,	/* 1073 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'T', 'V', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 39908 */ HB_P_LINE, 50, 4,	/* 1074 */
	HB_P_LOCALNEARSETSTR, 1, 16, 0,	/* MATRIZ 16*/
	'm', 'e', 's', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
/* 39931 */ HB_P_LINE, 52, 4,	/* 1076 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'M', 'E', 'S', 'A', 'T', 'V', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39984 */ HB_P_LINE, 53, 4,	/* 1077 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 40009 */ HB_P_LINE, 56, 4,	/* 1080 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'M', 'A', 'S', 'T', 'R', 'E', 'S', 'E', 'R', 'V', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 40086 */ HB_P_LINE, 57, 4,	/* 1081 */
	HB_P_PUSHSYMNEAR, 8,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'M', 'A', 'S', 'T', 'R', 'E', 'S', 'E', 'R', 'V', 'A', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 87, 3,	/* 855 (abs: 40963) */
/* 40111 */ HB_P_LINE, 58, 4,	/* 1082 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* F */
	HB_P_LOCALNEARADDINT, 2, 1, 0,	/* F 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'M', 'A', 'S', 'T', 'R', 'E', 'S', 'E', 'R', 'V', 'A', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 40186 */ HB_P_LINE, 59, 4,	/* 1083 */
	HB_P_LOCALNEARSETSTR, 1, 17, 0,	/* MATRIZ 17*/
	'q', 'u', 'a', 'r', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
/* 40210 */ HB_P_LINE, 60, 4,	/* 1084 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40241 */ HB_P_LINE, 61, 4,	/* 1085 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'h', 'o', 'r', 'a', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40275 */ HB_P_LINE, 62, 4,	/* 1086 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'o', 'p', 'e', 'r', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40309 */ HB_P_LINE, 63, 4,	/* 1087 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'o', 'b', 's', '_', 'i', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40343 */ HB_P_LINE, 64, 4,	/* 1088 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40372 */ HB_P_LINE, 65, 4,	/* 1089 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'a', 't', 'a', '_', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40403 */ HB_P_LINE, 66, 4,	/* 1090 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'r', 'e', 's', 'e', 'r', 'v', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40433 */ HB_P_LINE, 67, 4,	/* 1091 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40464 */ HB_P_LINE, 68, 4,	/* 1092 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'd', 'a', 't', 'a', '_', 'f', 'i', 'n', 'a', 'l', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40493 */ HB_P_LINE, 69, 4,	/* 1093 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40525 */ HB_P_LINE, 70, 4,	/* 1094 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'r', 'e', 's', 'e', 'r', 'v', 'a', '_', 'f', 'o', 'r', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40560 */ HB_P_LINE, 71, 4,	/* 1095 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40592 */ HB_P_LINE, 72, 4,	/* 1096 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'S', 't', 'a', 't', 'u', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40620 */ HB_P_LINE, 73, 4,	/* 1097 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'a', 't', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'i', 'n', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40651 */ HB_P_LINE, 74, 4,	/* 1098 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'h', 'o', 'r', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'i', 'n', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40684 */ HB_P_LINE, 75, 4,	/* 1099 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'o', 'b', 's', '_', 'c', 'h', 'e', 'c', 'k', 'i', 'n', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40717 */ HB_P_LINE, 76, 4,	/* 1100 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'o', 'p', 'e', 'r', '_', 'c', 'h', 'e', 'c', 'k', 'i', 'n', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40750 */ HB_P_LINE, 77, 4,	/* 1101 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'a', 't', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40782 */ HB_P_LINE, 78, 4,	/* 1102 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'h', 'o', 'r', 'a', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40816 */ HB_P_LINE, 79, 4,	/* 1103 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'o', 'b', 's', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40850 */ HB_P_LINE, 80, 4,	/* 1104 */
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'o', 'p', 'e', 'r', '_', 'c', 'h', 'e', 'c', 'k', 'o', 'u', 't', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* MATRIZ */
/* 40884 */ HB_P_LINE, 81, 4,	/* 1105 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'M', 'A', 'S', 'T', 'R', 'E', 'S', 'E', 'R', 'V', 'A', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 40938 */ HB_P_LINE, 82, 4,	/* 1106 */
	HB_P_MESSAGE, 10, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 11,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 40963 */ HB_P_LINE, 89, 4,	/* 1113 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 40972 */ HB_P_LINE, 90, 4,	/* 1114 */
	HB_P_PUSHSYMNEAR, 2,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 3,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 4,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 40995 */ HB_P_LINE, 91, 4,	/* 1115 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 't', 0, 
	HB_P_DOSHORT, 2,
/* 41020 */ HB_P_LINE, 107, 4,	/* 1131 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 41028 */ HB_P_LINE, 108, 4,	/* 1132 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 41034 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

