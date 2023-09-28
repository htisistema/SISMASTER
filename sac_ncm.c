/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sac_ncm.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\sac_ncm.prg /q /oc:\HTI\sismaster\sac_ncm.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.27 10:14:50 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sac_ncm.prg"

HB_FUNC( SAC_NCM );
HB_FUNC( SAC_NCM1 );
HB_FUNC_INITSTATICS();
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( INDEXORD );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( WVW_PBSETFONT );
HB_FUNC_EXTERN( WVW_PBCREATE );
HB_FUNC_EXTERN( WVW_PBENABLE );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ELAPTIME );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( OP_SIMNAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC_NCM )
{ "SAC_NCM", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC_NCM )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "POINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_POS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "INDEXORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( INDEXORD )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_PBSETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBSETFONT )}, NULL },
{ "WVW_PBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBCREATE )}, NULL },
{ "SAC_NCM1", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC_NCM1 )}, NULL },
{ "WVW_PBENABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBENABLE )}, NULL },
{ "MCOD_BC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ELAPTIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( ELAPTIME )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "MOP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC_NCM )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC_NCM
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC_NCM = hb_vm_SymbolInit_SAC_NCM;
   #pragma data_seg()
#endif

HB_FUNC( SAC_NCM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 43, 5,	/* locals, params */
	HB_P_SFRAME, 46, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYDIM, 1, 0,	/* 1 */
	HB_P_POPLOCALNEAR, 18,	/* OCOLPROD */
	HB_P_LOCALNEARSETSTR, 24, 2, 0,	/* MOPCAO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* MPREC 0*/
	HB_P_LOCALNEARSETINT, 32, 1, 0,	/* MVLR_DOLAR 1*/
	HB_P_LOCALNEARSETSTR, 33, 2, 0,	/* STOP 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 38,	/* CONS_M */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 39,	/* M_PROD */
	HB_P_LOCALNEARSETSTR, 40, 3, 0,	/* MCONDICAO 3*/
	' ', ' ', 0, 
	HB_P_LOCALNEARSETSTR, 41, 1, 0,	/* MHORAS 1*/
	0, 
	HB_P_LOCALNEARSETINT, 43, 0, 0,	/* MVALOR_FATURA 0*/
	HB_P_LOCALNEARSETSTR, 46, 2, 0,	/* MINDICE 2*/
	' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 48,	/* MPESQUISA */
/* 00077 */ HB_P_LINEOFFSET, 5,	/* 17 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 3,	/* POINT */
	HB_P_PUSHSYMNEAR, 4,	/* M_POS */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 4, 0,	/* M_POS */
	HB_P_POPVARIABLE, 3, 0,	/* POINT */
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_FORN */
/* 00104 */ HB_P_LINEOFFSET, 6,	/* 18 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 28,	/* LOCAL4 */
/* 00114 */ HB_P_LINEOFFSET, 7,	/* 19 */
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* F4 2*/
	'*', 0, 
/* 00122 */ HB_P_LINEOFFSET, 8,	/* 20 */
	HB_P_LOCALNEARSETINT, 8, 6, 0,	/* F4LCI 6*/
/* 00128 */ HB_P_LINEOFFSET, 9,	/* 21 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* F4CCI 0*/
/* 00134 */ HB_P_LINEOFFSET, 10,	/* 22 */
	HB_P_LOCALNEARSETINT, 10, 22, 0,	/* F4LBA 22*/
/* 00140 */ HB_P_LINEOFFSET, 11,	/* 23 */
	HB_P_LOCALNEARSETINT, 11, 100, 0,	/* F4CBA 100*/
/* 00146 */ HB_P_LINEOFFSET, 12,	/* 24 */
	HB_P_PUSHSYMNEAR, 6,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 12,	/* F4MSELE */
/* 00155 */ HB_P_LINEOFFSET, 13,	/* 25 */
	HB_P_PUSHSYMNEAR, 7,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 13,	/* F4MORDE */
/* 00164 */ HB_P_LINEOFFSET, 14,	/* 26 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOLOR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 31,	/* MCOR_ANT */
/* 00173 */ HB_P_LINEOFFSET, 15,	/* 27 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00181 */ HB_P_LINEOFFSET, 16,	/* 28 */
	HB_P_PUSHSYMNEAR, 10,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'A', 'C', '_', 'N', 'C', 'M', 0, 
	HB_P_DOSHORT, 1,
/* 00198 */ HB_P_LINEOFFSET, 17,	/* 29 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'N', 'C', 'M', ' ', '/', ' ', 'C', 'E', 'S', 'T', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00240 */ HB_P_LINEOFFSET, 18,	/* 30 */
	HB_P_PUSHSYMNEAR, 13,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 00254 */ HB_P_LINEOFFSET, 23,	/* 35 */
	HB_P_PUSHSYMNEAR, 15,	/* WVW_PBSETFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'u', 'r', 'i', 'e', 'r', ' ', 'N', 'e', 'w', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00280 */ HB_P_LINEOFFSET, 24,	/* 36 */
	HB_P_PUSHSYMNEAR, 16,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'N', 'C', 'M', '/', 'C', 'E', 'S', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC_NCM1 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 47,	/* NBOTA */
/* 00326 */ HB_P_LINEOFFSET, 25,	/* 37 */
	HB_P_PUSHSYMNEAR, 18,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* NBOTA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 00337 */ HB_P_LINEOFFSET, 28,	/* 40 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 19, 0,	/* MCOD_BC */
/* 00349 */ HB_P_LINEOFFSET, 29,	/* 41 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPSTATIC, 1, 0,	/* MDESCRI */
/* 00361 */ HB_P_LINEOFFSET, 30,	/* 42 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 40,	/* MCONDICAO */
/* 00372 */ HB_P_LINEOFFSET, 31,	/* 43 */
	HB_P_PUSHSYMNEAR, 20,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_DOSHORT, 4,
/* 00385 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_PUSHSYMNEAR, 21,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'g', 'i', 't', 'e', ':', ' ', '[', 'C', 'T', 'R', 'L', '+', 'Y', ']', ' ', 'A', 'p', 'a', 'g', 'a', 'r', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00419 */ HB_P_LINEOFFSET, 33,	/* 45 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00427 */ HB_P_LINEOFFSET, 34,	/* 46 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'P', 'e', 's', 'q', 'u', 'i', 's', 'a', ' ', 'G', 'e', 'r', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00459 */ HB_P_LINEOFFSET, 35,	/* 47 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'C', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00491 */ HB_P_LINEOFFSET, 36,	/* 48 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'E', 'S', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00524 */ HB_P_LINEOFFSET, 37,	/* 49 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00533 */ HB_P_LINEOFFSET, 38,	/* 50 */
	HB_P_PUSHSYMNEAR, 24,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00548 */ HB_P_LINEOFFSET, 40,	/* 52 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', ' ', 'N', 'C', 'M', ' ', ' ', ' ', ' ', ' ', 'C', 'E', 'S', 'T', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'S', 'C', 'R', 'I', 'C', 'A', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 00595 */ HB_P_LINEOFFSET, 41,	/* 53 */
	HB_P_PUSHSYMNEAR, 24,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00610 */ HB_P_LINEOFFSET, 42,	/* 54 */
	HB_P_PUSHSYMNEAR, 24,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00625 */ HB_P_LINEOFFSET, 43,	/* 55 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00661 */ HB_P_LINEOFFSET, 44,	/* 56 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'T', 'e', 'm', 'p', 'o', ' ', 'd', 'a', ' ', 'P', 'e', 's', 'q', 'u', 'i', 's', 'a', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00757 */ HB_P_LINEOFFSET, 45,	/* 57 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00765 */ HB_P_LINEOFFSET, 48,	/* 60 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	48, 0,	/* MPESQUISA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00803) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00808) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'@', '!', 'K', 'S', '5', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00848 */ HB_P_LINEOFFSET, 49,	/* 61 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00885) */
	HB_P_PUSHSTATIC, 1, 0,	/* MDESCRI */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00891) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPSTATIC, 1, 0,	/* MDESCRI */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'@', '!', 'K', 'S', '1', '4', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 27, 0,	/* 27 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	2, 0,	/* MDCRI */
	48, 0,	/* MPESQUISA */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00938) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00955 */ HB_P_LINEOFFSET, 50,	/* 62 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	40, 0,	/* MCONDICAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00993) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00998) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'n', 'd', 'i', 'c', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'@', '!', 'K', 'S', '1', '4', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	48, 0,	/* MPESQUISA */
	HB_P_FALSE,
	HB_P_PUSHSTATIC, 1, 0,	/* MDESCRI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01051) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01068 */ HB_P_LINEOFFSET, 51,	/* 63 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 01090 */ HB_P_LINEOFFSET, 52,	/* 64 */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 01131) */
/* 01102 */ HB_P_LINEOFFSET, 53,	/* 65 */
	HB_P_PUSHSYMNEAR, 32,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01109 */ HB_P_LINEOFFSET, 54,	/* 66 */
	HB_P_PUSHSYMNEAR, 13,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 01123 */ HB_P_LINEOFFSET, 55,	/* 67 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01131 */ HB_P_LINEOFFSET, 57,	/* 69 */
	HB_P_PUSHSYMNEAR, 33,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 41,	/* MHORAS */
/* 01140 */ HB_P_LINEOFFSET, 58,	/* 70 */
	HB_P_PUSHSYMNEAR, 21,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'o', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', ' ', 't', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'o', 'u', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01204 */ HB_P_LINEOFFSET, 59,	/* 71 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 01226) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* MDESCRI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01236) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MCONDICAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01241) */
	HB_P_JUMP, 123, 252,	/* -901 (abs: 00337) */
/* 01241 */ HB_P_LINEOFFSET, 62,	/* 74 */
	HB_P_LOCALNEARSETSTR, 36, 28, 0,	/* CCOMM 28*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'n', 'c', 'm', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 0, 
/* 01275 */ HB_P_LINEOFFSET, 63,	/* 75 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 135, 0,	/* 135 (abs: 01419) */
/* 01287 */ HB_P_LINEOFFSET, 66,	/* 78 */
	HB_P_PUSHLOCALNEAR, 36,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', ' ', 'c', 'e', 's', 't', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', ' ', 'd', 'e', 's', 'c', 'r', 'i', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* CCOMM */
	HB_P_JUMPNEAR, 106,	/* 106 (abs: 01523) */
/* 01419 */ HB_P_LINEOFFSET, 68,	/* 80 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* MDESCRI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 01473) */
/* 01431 */ HB_P_LINEOFFSET, 69,	/* 81 */
	HB_P_PUSHLOCALNEAR, 36,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTATIC, 1, 0,	/* MDESCRI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* CCOMM */
/* 01473 */ HB_P_LINEOFFSET, 71,	/* 83 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MCONDICAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 01523) */
/* 01484 */ HB_P_LINEOFFSET, 72,	/* 84 */
	HB_P_PUSHLOCALNEAR, 36,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'c', 'e', 's', 't', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MCONDICAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* CCOMM */
/* 01523 */ HB_P_LINEOFFSET, 75,	/* 87 */
	HB_P_PUSHLOCALNEAR, 36,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* CCOMM */
/* 01549 */ HB_P_LINEOFFSET, 76,	/* 88 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 38,	/* CONS_M */
/* 01556 */ HB_P_LINEOFFSET, 77,	/* 89 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 36,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 38, 0,	/* CONS_M */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01576 */ HB_P_LINEOFFSET, 78,	/* 90 */
	HB_P_PUSHSYMNEAR, 38,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* CONS_M */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 01630) */
/* 01589 */ HB_P_LINEOFFSET, 79,	/* 91 */
	HB_P_PUSHSYMNEAR, 39,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 246, 250,	/* -1290 (abs: 00337) */
/* 01630 */ HB_P_LINEOFFSET, 82,	/* 94 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 39,	/* M_PROD */
/* 01637 */ HB_P_LINEOFFSET, 83,	/* 95 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 4, 0,	/* M_POS */
/* 01645 */ HB_P_LINEOFFSET, 84,	/* 96 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 3, 0,	/* POINT */
/* 01651 */ HB_P_LINEOFFSET, 85,	/* 97 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* CONS_M */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01681 */ HB_P_LINEOFFSET, 86,	/* 98 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* ELAPTIME */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MHORAS */
	HB_P_PUSHSYMNEAR, 33,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01709 */ HB_P_LINEOFFSET, 87,	/* 99 */
	HB_P_LOCALNEARSETINT, 19, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 19,	/* I */
	HB_P_PUSHSYMNEAR, 38,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* CONS_M */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 01796) */
/* 01727 */ HB_P_LINEOFFSET, 90,	/* 102 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* M_PROD */
	HB_P_PUSHLOCALNEAR, 38,	/* CONS_M */
	HB_P_PUSHLOCALNEAR, 19,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* CONS_M */
	HB_P_PUSHLOCALNEAR, 19,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* CONS_M */
	HB_P_PUSHLOCALNEAR, 19,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01771 */ HB_P_LINEOFFSET, 91,	/* 103 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 38,	/* CONS_M */
	HB_P_PUSHLOCALNEAR, 19,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01788 */ HB_P_LINEOFFSET, 92,	/* 104 */
	HB_P_LOCALNEARADDINT, 19, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 177,	/* -79 (abs: 01715) */
/* 01796 */ HB_P_LINEOFFSET, 96,	/* 108 */
	HB_P_PUSHSYMNEAR, 42,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHLOCALNEAR, 39,	/* M_PROD */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPVARIABLE, 3, 0,	/* POINT */
/* 01820 */ HB_P_LINEOFFSET, 99,	/* 111 */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01835) */
	HB_P_JUMP, 41, 250,	/* -1495 (abs: 00337) */
/* 01835 */ HB_P_LINEOFFSET, 101,	/* 113 */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 28, 250,	/* -1508 (abs: 00337) */
	HB_P_JUMP, 25, 250,	/* -1511 (abs: 00337) */
	HB_P_ENDPROC
/* 01852 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC_NCM1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 126, 0,	/* 126 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00012 */ HB_P_LINEOFFSET, 1,	/* 127 */
	HB_P_PUSHSYMNEAR, 10,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'A', 'C', '_', 'N', 'C', 'M', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00030 */ HB_P_LINEOFFSET, 2,	/* 128 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', ' ', 'N', 'C', 'M', '/', 'C', 'E', 'S', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00067 */ HB_P_LINEOFFSET, 3,	/* 129 */
	HB_P_PUSHSYMNEAR, 13,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 00081 */ HB_P_LINEOFFSET, 5,	/* 131 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* MNCM */
/* 00092 */ HB_P_LINEOFFSET, 6,	/* 132 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MCEST */
/* 00103 */ HB_P_LINEOFFSET, 7,	/* 133 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 0, 2,	/* 512 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MDESCRI */
/* 00115 */ HB_P_LINEOFFSET, 8,	/* 134 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'C', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00147 */ HB_P_LINEOFFSET, 9,	/* 135 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'E', 'S', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00180 */ HB_P_LINEOFFSET, 10,	/* 136 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'E', 'S', 'C', 'R', 'I', 'C', 'A', 'O', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00213 */ HB_P_LINEOFFSET, 11,	/* 137 */
	HB_P_PUSHSYMNEAR, 9,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00221 */ HB_P_LINEOFFSET, 14,	/* 140 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* MNCM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00259) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00264) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'n', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00301 */ HB_P_LINEOFFSET, 15,	/* 141 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MCEST */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00340) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00345) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'c', 'e', 's', 't', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00382 */ HB_P_LINEOFFSET, 16,	/* 142 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDESCRI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00421) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00426) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'@', '!', 'K', 'S', '8', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00464 */ HB_P_LINEOFFSET, 17,	/* 143 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 00486 */ HB_P_LINEOFFSET, 18,	/* 144 */
	HB_P_PUSHSYMNEAR, 44,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'd', 'o', ' ', 'N', 'C', 'M', '/', 'C', 'E', 'S', 'T', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 45, 0,	/* MOP */
/* 00535 */ HB_P_LINEOFFSET, 19,	/* 145 */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00557) */
	HB_P_PUSHVARIABLE, 45, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00588) */
/* 00559 */ HB_P_LINEOFFSET, 20,	/* 146 */
	HB_P_PUSHSYMNEAR, 32,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00566 */ HB_P_LINEOFFSET, 21,	/* 147 */
	HB_P_PUSHSYMNEAR, 13,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 00580 */ HB_P_LINEOFFSET, 22,	/* 148 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00588 */ HB_P_LINEOFFSET, 29,	/* 155 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'n', 'c', 'm', ' ', '(', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'c', 'e', 's', 't', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MNCM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MCEST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDESCRI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00720 */ HB_P_LINEOFFSET, 30,	/* 156 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00744 */ HB_P_LINEOFFSET, 33,	/* 159 */
	HB_P_PUSHSYMNEAR, 32,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00751 */ HB_P_LINEOFFSET, 34,	/* 160 */
	HB_P_PUSHSYMNEAR, 13,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 00765 */ HB_P_LINEOFFSET, 35,	/* 161 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00773 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 46, 0, 2, 0,	/* symbol (_INITSTATICS), 2 statics */
	HB_P_SFRAME, 46, 0,	/* symbol (_INITSTATICS) */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_POPSTATIC, 1, 0,	/* MDESCRI */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_POPSTATIC, 2, 0,	/* MDESCRI1 */
	HB_P_ENDPROC
/* 00049 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

