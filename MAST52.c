/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <MAST52.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\MAST52.PRG /q /oc:\HTI\sismaster\MAST52.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.05.30 12:24:44 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "MAST52.PRG"

HB_FUNC( MAST52 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( DATE );
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
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( PADC );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAST52 )
{ "MAST52", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAST52 )}, NULL },
{ "MPRG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEXCLUIR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
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
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "Y", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "H", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PADC", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADC )}, NULL },
{ "M", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "C_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAST52 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MAST52
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MAST52 = hb_vm_SymbolInit_MAST52;
   #pragma data_seg()
#endif

HB_FUNC( MAST52 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 16, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MCOD_FUN 0*/
	HB_P_LOCALNEARSETSTR, 6, 1, 0,	/* MORDEM 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_LOCALNEARSETSTR, 8, 1, 0,	/* CCOMM 1*/
	0, 
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_GERAL 0*/
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* MTOT_PROD 0*/
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MGRU_PROD 0*/
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MGRU_GERAL 0*/
	HB_P_LOCALNEARSETSTR, 16, 2, 0,	/* MPROD_MAIS 2*/
	'N', 0, 
/* 00056 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'M', 'A', 'S', 'T', '5', '2', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 9,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 11,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 12,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MPRG */
	HB_P_PUSHSYMNEAR, 2,	/* MEXCLUIR */
	HB_P_PUSHSYMNEAR, 3,	/* MTIT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MPAG */
	HB_P_PUSHSYMNEAR, 6,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 7,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 8,	/* MARQ */
	HB_P_PUSHSYMNEAR, 10,	/* MTRACO */
	HB_P_DOSHORT, 9,
	HB_P_POPVARIABLE, 10, 0,	/* MTRACO */
	HB_P_POPVARIABLE, 8, 0,	/* MARQ */
	HB_P_POPVARIABLE, 7, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
	HB_P_POPVARIABLE, 2, 0,	/* MEXCLUIR */
	HB_P_POPVARIABLE, 1, 0,	/* MPRG */
/* 00145 */ HB_P_LINEOFFSET, 4,	/* 13 */
	HB_P_PUSHSYMNEAR, 13,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'O', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'F', 'U', 'N', 'C', 'I', 'O', 'N', 'A', 'R', 'I', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 14, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00203) */
/* 00198 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00203 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_PUSHSYMNEAR, 15,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'C', 'O', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'F', 'U', 'N', 'C', 'I', 'O', 'N', 'A', 'R', 'I', 'O', 'S', ' ', '[', 0, 
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00264 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_LOCALNEARSETINT, 1, 35, 0,	/* LBA 35*/
/* 00270 */ HB_P_LINEOFFSET, 9,	/* 18 */
	HB_P_LOCALNEARSETINT, 2, 70, 0,	/* CBA 70*/
/* 00276 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHSYMNEAR, 16,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 17, 0,	/* GETLIST */
/* 00290 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00298 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHSYMNEAR, 19,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* LBA */
	HB_P_PUSHLOCALNEAR, 2,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00311 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_PUSHSYMNEAR, 20,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00321 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MCOD_FUN 0*/
/* 00327 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* MTIPO_REL 2*/
	'A', 0, 
/* 00335 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_LOCALNEARSETSTR, 6, 2, 0,	/* MORDEM 2*/
	'A', 0, 
/* 00343 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 21,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_POPLOCALNEAR, 10,	/* MDATA1 */
/* 00355 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHSYMNEAR, 21,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 11,	/* MDATA2 */
/* 00364 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_LOCALNEARSETSTR, 16, 2, 0,	/* MPROD_MAIS 2*/
	'N', 0, 
/* 00372 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MGRU_PROD 0*/
	HB_P_PUSHLOCALNEAR, 14,	/* MGRU_PROD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 00388 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00435 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'a', ' ', 'e', 'm', ' ', 'B', 'r', 'a', 'n', 'c', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00494 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'[', 'R', ']', 'e', 's', 'u', 'm', 'o', ' ', 'o', 'u', ' ', '[', 'E', ']', 'x', 't', 'r', 'a', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00553 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 's', 'o', ' ', 'n', 'o', 's', ' ', '1', '0', '%', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00613 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'a', 't', 'a', ' ', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00673 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00733 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MCOD_FUN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00771) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00776) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'u', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00812 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_PUSHSYMNEAR, 29,	/* READMODAL */
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
/* 00834 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHSYMNEAR, 30,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00858) */
/* 00846 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHSYMNEAR, 31,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00853 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00858 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 246, 0,	/* 246 (abs: 01113) */
/* 00870 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 00877 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'g', 'r', 'u', 'p', 'o', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'g', 'r', 'a', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00955 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 01011) */
/* 00968 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'G', 'R', 'U', 'P', 'O', ' ', 'n', 'a', 'o', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 50, 253,	/* -718 (abs: 00290) */
/* 01011 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01020 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01042 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01050 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 01075 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 01113 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MPROD_MAIS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01151) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01156) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'p', 'r', 'o', 'd', '_', 'm', 'a', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MPROD_MAIS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01211 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MORDEM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01250) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01255) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 'r', 'd', 'e', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MORDEM */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', ',', 'C', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01308 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01347) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01352) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'A', ',', 'M', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MPROD_MAIS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01424 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01463) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01468) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01500) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01501) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01519 */ HB_P_LINEOFFSET, 51,	/* 60 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01558) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01563) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MDATA2 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01595) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01596) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01614 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 29,	/* READMODAL */
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
/* 01636 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHSYMNEAR, 30,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01651) */
	HB_P_JUMP, 178, 250,	/* -1358 (abs: 00290) */
/* 01651 */ HB_P_LINEOFFSET, 56,	/* 65 */
	HB_P_PUSHLOCALNEAR, 16,	/* MPROD_MAIS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01670) */
/* 01662 */ HB_P_LINEOFFSET, 57,	/* 66 */
	HB_P_LOCALNEARSETSTR, 9, 2, 0,	/* MTIPO_REL 2*/
	'S', 0, 
/* 01670 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 01724) */
/* 01681 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', '-', ' ', 'A', 'n', 'a', 'l', 'i', 't', 'i', 'c', 'o', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
	HB_P_JUMPNEAR, 103,	/* 103 (abs: 01825) */
/* 01724 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 01778) */
/* 01735 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', '-', ' ', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 01825) */
/* 01778 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', '-', ' ', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'M', 'e', 's', 'a', 's', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 01825 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 39,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 39,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 01872 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 81, 17,	/* 4433 (abs: 06314) */
/* 01884 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 01984 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 02054) */
/* 01995 */ HB_P_LINEOFFSET, 70,	/* 79 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 02021 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 02120) */
/* 02054 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 02120) */
/* 02065 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 02093 */ HB_P_LINEOFFSET, 74,	/* 83 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 02120 */ HB_P_LINEOFFSET, 76,	/* 85 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02169) */
/* 02131 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 02169 */ HB_P_LINEOFFSET, 79,	/* 88 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 225, 5,	/* 1505 (abs: 03683) */
/* 02181 */ HB_P_LINEOFFSET, 80,	/* 89 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 02188 */ HB_P_LINEOFFSET, 82,	/* 91 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02208 */ HB_P_LINEOFFSET, 83,	/* 92 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 02280) */
/* 02221 */ HB_P_LINEOFFSET, 84,	/* 93 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 61, 248,	/* -1987 (abs: 00290) */
/* 02280 */ HB_P_LINEOFFSET, 87,	/* 96 */
	HB_P_PUSHSYMNEAR, 40,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'V', '_', 'P', 'R', 'O', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02311) */
	HB_P_JUMP, 30, 248,	/* -2018 (abs: 00290) */
/* 02311 */ HB_P_LINEOFFSET, 90,	/* 99 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 02317 */ HB_P_LINEOFFSET, 91,	/* 100 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 02336 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02350 */ HB_P_LINEOFFSET, 93,	/* 102 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02379 */ HB_P_LINEOFFSET, 94,	/* 103 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02437 */ HB_P_LINEOFFSET, 95,	/* 104 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02474 */ HB_P_LINEOFFSET, 96,	/* 105 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02511 */ HB_P_LINEOFFSET, 97,	/* 106 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 02548 */ HB_P_LINEOFFSET, 98,	/* 107 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02584 */ HB_P_LINEOFFSET, 99,	/* 108 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 02617 */ HB_P_LINEOFFSET, 100,	/* 109 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02651 */ HB_P_LINEOFFSET, 101,	/* 110 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02675 */ HB_P_LINEOFFSET, 102,	/* 111 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_GERAL 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_POPLOCALNEAR, 4,	/* I */
/* 02685 */ HB_P_LINEOFFSET, 103,	/* 112 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 34, 3,	/* 802 (abs: 03503) */
/* 02704 */ HB_P_LINEOFFSET, 104,	/* 113 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02749 */ HB_P_LINEOFFSET, 105,	/* 114 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02778 */ HB_P_LINEOFFSET, 106,	/* 115 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02811 */ HB_P_LINEOFFSET, 107,	/* 116 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02861 */ HB_P_LINEOFFSET, 108,	/* 117 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02911 */ HB_P_LINEOFFSET, 109,	/* 118 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02970 */ HB_P_LINEOFFSET, 110,	/* 119 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03003 */ HB_P_LINEOFFSET, 111,	/* 120 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03036 */ HB_P_LINEOFFSET, 112,	/* 121 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03068 */ HB_P_LINEOFFSET, 113,	/* 122 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 03092 */ HB_P_LINEOFFSET, 114,	/* 123 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PROD */
/* 03107 */ HB_P_LINEOFFSET, 115,	/* 124 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 121, 1,	/* 377 (abs: 03494) */
/* 03120 */ HB_P_LINEOFFSET, 116,	/* 125 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03127 */ HB_P_LINEOFFSET, 117,	/* 126 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 03136 */ HB_P_LINEOFFSET, 118,	/* 127 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03155 */ HB_P_LINEOFFSET, 119,	/* 128 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03169 */ HB_P_LINEOFFSET, 120,	/* 129 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03198 */ HB_P_LINEOFFSET, 121,	/* 130 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03256 */ HB_P_LINEOFFSET, 122,	/* 131 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03293 */ HB_P_LINEOFFSET, 123,	/* 132 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03330 */ HB_P_LINEOFFSET, 124,	/* 133 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 03367 */ HB_P_LINEOFFSET, 125,	/* 134 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03403 */ HB_P_LINEOFFSET, 126,	/* 135 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 03436 */ HB_P_LINEOFFSET, 127,	/* 136 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03470 */ HB_P_LINEOFFSET, 128,	/* 137 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03494 */ HB_P_LINEOFFSET, 130,	/* 139 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* I 1*/
	HB_P_JUMP, 215, 252,	/* -809 (abs: 02691) */
/* 03503 */ HB_P_LINEOFFSET, 131,	/* 140 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 03550) */
/* 03515 */ HB_P_LINEOFFSET, 132,	/* 141 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03522 */ HB_P_LINEOFFSET, 133,	/* 142 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 03531 */ HB_P_LINEOFFSET, 134,	/* 143 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03550 */ HB_P_LINEOFFSET, 136,	/* 145 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03608 */ HB_P_LINEOFFSET, 137,	/* 146 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 223, 38,	/* 9951 (abs: 13631) */
/* 03683 */ HB_P_LINEOFFSET, 139,	/* 148 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* CONS_GRUP */
/* 03690 */ HB_P_LINEOFFSET, 140,	/* 149 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'g', 'r', 'u', 'p', 'o', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 7, 0,	/* CONS_GRUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03749 */ HB_P_LINEOFFSET, 141,	/* 150 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03821) */
/* 03762 */ HB_P_LINEOFFSET, 142,	/* 151 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 56, 242,	/* -3528 (abs: 00290) */
/* 03821 */ HB_P_LINEOFFSET, 145,	/* 154 */
	HB_P_PUSHSYMNEAR, 40,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'A', 'B', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03852) */
	HB_P_JUMP, 25, 242,	/* -3559 (abs: 00290) */
/* 03852 */ HB_P_LINEOFFSET, 148,	/* 157 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 03858 */ HB_P_LINEOFFSET, 149,	/* 158 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03877 */ HB_P_LINEOFFSET, 150,	/* 159 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03891 */ HB_P_LINEOFFSET, 151,	/* 160 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 47, 0,	/* Y */
/* 03897 */ HB_P_LINEOFFSET, 152,	/* 161 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 47, 0,	/* Y */
	HB_P_PUSHVARIABLE, 47, 0,	/* Y */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 158, 8,	/* 2206 (abs: 06120) */
/* 03917 */ HB_P_LINEOFFSET, 153,	/* 162 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MGRU_GERAL 0*/
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_POPLOCALNEAR, 14,	/* MGRU_PROD */
/* 03927 */ HB_P_LINEOFFSET, 154,	/* 163 */
	HB_P_PUSHSTRSHORT, 164,	/* 164 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'u', 'm', '(', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'q', 't', 'd', ')', ',', 's', 'u', 'm', '(', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'q', 't', 'd', '*', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'p', 'r', 'e', 'c', 'o', ')', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ',', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', '.', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', '.', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 04221 */ HB_P_LINEOFFSET, 155,	/* 164 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 04278) */
/* 04232 */ HB_P_LINEOFFSET, 156,	/* 165 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 04278 */ HB_P_LINEOFFSET, 158,	/* 167 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'e', 's', 'c', 'r', 'i', ',', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 04362 */ HB_P_LINEOFFSET, 159,	/* 168 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 69,	/* 69 (abs: 04440) */
/* 04373 */ HB_P_LINEOFFSET, 160,	/* 169 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 04407 */ HB_P_LINEOFFSET, 161,	/* 170 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 76,	/* 76 (abs: 04514) */
/* 04440 */ HB_P_LINEOFFSET, 162,	/* 171 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 04514) */
/* 04451 */ HB_P_LINEOFFSET, 163,	/* 172 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 04487 */ HB_P_LINEOFFSET, 164,	/* 173 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 04514 */ HB_P_LINEOFFSET, 166,	/* 175 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 04521 */ HB_P_LINEOFFSET, 167,	/* 176 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04541 */ HB_P_LINEOFFSET, 168,	/* 177 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04557) */
	HB_P_JUMP, 20, 6,	/* 1556 (abs: 06110) */
/* 04557 */ HB_P_LINEOFFSET, 171,	/* 180 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04581 */ HB_P_LINEOFFSET, 172,	/* 181 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04645 */ HB_P_LINEOFFSET, 173,	/* 182 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04674 */ HB_P_LINEOFFSET, 174,	/* 183 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04732 */ HB_P_LINEOFFSET, 175,	/* 184 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04769 */ HB_P_LINEOFFSET, 176,	/* 185 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04806 */ HB_P_LINEOFFSET, 177,	/* 186 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 04843 */ HB_P_LINEOFFSET, 178,	/* 187 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04879 */ HB_P_LINEOFFSET, 179,	/* 188 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 04912 */ HB_P_LINEOFFSET, 180,	/* 189 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04946 */ HB_P_LINEOFFSET, 181,	/* 190 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04970 */ HB_P_LINEOFFSET, 182,	/* 191 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 50, 0,	/* M */
/* 04976 */ HB_P_LINEOFFSET, 183,	/* 192 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 50, 0,	/* M */
	HB_P_PUSHVARIABLE, 50, 0,	/* M */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* C_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 252, 3,	/* 1020 (abs: 06014) */
/* 04997 */ HB_P_LINEOFFSET, 184,	/* 193 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 05004 */ HB_P_LINEOFFSET, 185,	/* 194 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 51, 0,	/* C_MERC */
	HB_P_PUSHVARIABLE, 50, 0,	/* M */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05059 */ HB_P_LINEOFFSET, 186,	/* 195 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05075) */
	HB_P_JUMP, 164, 3,	/* 932 (abs: 06004) */
/* 05075 */ HB_P_LINEOFFSET, 189,	/* 198 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* I 0*/
/* 05081 */ HB_P_LINEOFFSET, 190,	/* 199 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 137, 3,	/* 905 (abs: 06002) */
/* 05100 */ HB_P_LINEOFFSET, 191,	/* 200 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05145 */ HB_P_LINEOFFSET, 192,	/* 201 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05174 */ HB_P_LINEOFFSET, 193,	/* 202 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05207 */ HB_P_LINEOFFSET, 194,	/* 203 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05257 */ HB_P_LINEOFFSET, 195,	/* 204 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05307 */ HB_P_LINEOFFSET, 196,	/* 205 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05366 */ HB_P_LINEOFFSET, 197,	/* 206 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05399 */ HB_P_LINEOFFSET, 198,	/* 207 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05432 */ HB_P_LINEOFFSET, 199,	/* 208 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05464 */ HB_P_LINEOFFSET, 200,	/* 209 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 05488 */ HB_P_LINEOFFSET, 201,	/* 210 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PROD */
/* 05503 */ HB_P_LINEOFFSET, 202,	/* 211 */
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MGRU_GERAL */
/* 05527 */ HB_P_LINEOFFSET, 203,	/* 212 */
	HB_P_PUSHLOCALNEAR, 14,	/* MGRU_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MGRU_PROD */
/* 05542 */ HB_P_LINEOFFSET, 204,	/* 213 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 185, 1,	/* 441 (abs: 05993) */
/* 05555 */ HB_P_LINEOFFSET, 205,	/* 214 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05562 */ HB_P_LINEOFFSET, 206,	/* 215 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 05571 */ HB_P_LINEOFFSET, 207,	/* 216 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 05590 */ HB_P_LINEOFFSET, 208,	/* 217 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05604 */ HB_P_LINEOFFSET, 209,	/* 218 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05668 */ HB_P_LINEOFFSET, 210,	/* 219 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05697 */ HB_P_LINEOFFSET, 211,	/* 220 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05755 */ HB_P_LINEOFFSET, 212,	/* 221 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05792 */ HB_P_LINEOFFSET, 213,	/* 222 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05829 */ HB_P_LINEOFFSET, 214,	/* 223 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 05866 */ HB_P_LINEOFFSET, 215,	/* 224 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05902 */ HB_P_LINEOFFSET, 216,	/* 225 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 05935 */ HB_P_LINEOFFSET, 217,	/* 226 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05969 */ HB_P_LINEOFFSET, 218,	/* 227 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 05993 */ HB_P_LINEOFFSET, 220,	/* 229 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* I 1*/
	HB_P_JUMP, 112, 252,	/* -912 (abs: 05087) */
/* 06002 */ HB_P_LINEOFFSET, 221,	/* 230 */
	HB_P_PUSHVARIABLE, 50, 0,	/* M */
	HB_P_INC,
	HB_P_POPVARIABLE, 50, 0,	/* M */
	HB_P_JUMP, 251, 251,	/* -1029 (abs: 04982) */
/* 06014 */ HB_P_LINEOFFSET, 222,	/* 231 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MGRU_PROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06108 */ HB_P_LINEOFFSET, 223,	/* 232 */
	HB_P_PUSHVARIABLE, 47, 0,	/* Y */
	HB_P_INC,
	HB_P_POPVARIABLE, 47, 0,	/* Y */
	HB_P_JUMP, 90, 247,	/* -2214 (abs: 03903) */
/* 06120 */ HB_P_LINEOFFSET, 224,	/* 233 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 06181) */
/* 06132 */ HB_P_LINEOFFSET, 225,	/* 234 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06139 */ HB_P_LINEOFFSET, 226,	/* 235 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 06148 */ HB_P_LINEOFFSET, 227,	/* 236 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 06167 */ HB_P_LINEOFFSET, 228,	/* 237 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06181 */ HB_P_LINEOFFSET, 230,	/* 239 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06239 */ HB_P_LINEOFFSET, 231,	/* 240 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 152, 28,	/* 7320 (abs: 13631) */
/* 06314 */ HB_P_LINEOFFSET, 233,	/* 242 */
	HB_P_PUSHLOCALNEAR, 9,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 116, 15,	/* 3956 (abs: 10279) */
/* 06326 */ HB_P_LINEOFFSET, 234,	/* 243 */
	HB_P_PUSHSTRSHORT, 99,	/* 99 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'u', 'm', '(', 'q', 't', 'd', ')', ',', 's', 'u', 'm', '(', 'q', 't', 'd', '*', 'p', 'r', 'e', 'c', 'o', ')', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 06464 */ HB_P_LINEOFFSET, 235,	/* 244 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 06513) */
/* 06475 */ HB_P_LINEOFFSET, 236,	/* 245 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 06513 */ HB_P_LINEOFFSET, 238,	/* 247 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	' ', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 06565 */ HB_P_LINEOFFSET, 239,	/* 248 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 06635) */
/* 06576 */ HB_P_LINEOFFSET, 240,	/* 249 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 06602 */ HB_P_LINEOFFSET, 241,	/* 250 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 06701) */
/* 06635 */ HB_P_LINEOFFSET, 242,	/* 251 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 06701) */
/* 06646 */ HB_P_LINEOFFSET, 243,	/* 252 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 06674 */ HB_P_LINEOFFSET, 244,	/* 253 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 06701 */ HB_P_LINEOFFSET, 247,	/* 256 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 246, 4,	/* 1270 (abs: 07980) */
/* 06713 */ HB_P_LINEOFFSET, 248,	/* 257 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 06720 */ HB_P_LINEOFFSET, 250,	/* 259 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06740 */ HB_P_LINEOFFSET, 251,	/* 260 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 06812) */
/* 06753 */ HB_P_LINEOFFSET, 252,	/* 261 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 137, 230,	/* -6519 (abs: 00290) */
/* 06812 */ HB_P_LINEOFFSET, 255,	/* 264 */
	HB_P_PUSHLOCALNEAR, 16,	/* MPROD_MAIS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 06854) */
/* 06823 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_PUSHSYMNEAR, 52,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 06854 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHSYMNEAR, 40,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'V', '_', 'P', 'R', 'O', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 06886) */
	HB_P_JUMP, 63, 230,	/* -6593 (abs: 00290) */
/* 06886 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 06893 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 06913 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06928 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06958 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 07017 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07055 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'e', 'c', 'o', ' ', 'M', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 07093 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 07131 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 07156 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_GERAL 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_POPLOCALNEAR, 4,	/* I */
/* 07167 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 98, 2,	/* 610 (abs: 07794) */
/* 07187 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07232 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07261 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07295 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07346 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07406 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07457 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 07473 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PROD */
/* 07489 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 28, 1,	/* 284 (abs: 07784) */
/* 07503 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07511 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 07521 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 07541 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07556 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07586 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 07645 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07683 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'e', 'c', 'o', ' ', 'M', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 07721 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 07759 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 07784 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* I 1*/
	HB_P_JUMP, 151, 253,	/* -617 (abs: 07174) */
/* 07794 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 07845) */
/* 07807 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07815 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 07825 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 07845 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07904 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 22, 22,	/* 5654 (abs: 13631) */
/* 07980 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* CONS_GRUP */
/* 07988 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'g', 'r', 'u', 'p', 'o', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 7, 0,	/* CONS_GRUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08048 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 08122) */
/* 08062 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 107, 225,	/* -7829 (abs: 00290) */
/* 08122 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 40,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'A', 'B', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 08154) */
	HB_P_JUMP, 75, 225,	/* -7861 (abs: 00290) */
/* 08154 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 08161 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 08181 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08196 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 48, 0,	/* H */
/* 08203 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 48, 0,	/* H */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 65, 7,	/* 1857 (abs: 10078) */
/* 08224 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MGRU_GERAL 0*/
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_POPLOCALNEAR, 14,	/* MGRU_PROD */
/* 08235 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSTRSHORT, 164,	/* 164 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'u', 'm', '(', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'q', 't', 'd', ')', ',', 's', 'u', 'm', '(', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'q', 't', 'd', '*', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'p', 'r', 'e', 'c', 'o', ')', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ',', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', '.', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', '.', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 08530 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 08589) */
/* 08542 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 08589 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'e', 's', 'c', 'r', 'i', ',', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 08674 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 08755) */
/* 08686 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 08721 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 79,	/* 79 (abs: 08832) */
/* 08755 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 08832) */
/* 08767 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 08804 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 08832 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 08840 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08861 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08878) */
	HB_P_JUMP, 169, 4,	/* 1193 (abs: 10068) */
/* 08878 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08903 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08968 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08998 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 09057 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09095 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'e', 'c', 'o', ' ', 'M', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 09133 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 09171 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 09196 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHLOCALNEAR, 16,	/* MPROD_MAIS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 09239) */
/* 09208 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 52,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 09239 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* I 0*/
/* 09246 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 195, 2,	/* 707 (abs: 09970) */
/* 09266 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09311 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 09340 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 09374 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09425 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09485 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09536 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 09552 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PROD */
/* 09568 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MGRU_GERAL */
/* 09584 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHLOCALNEAR, 14,	/* MGRU_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MGRU_PROD */
/* 09600 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 93, 1,	/* 349 (abs: 09960) */
/* 09614 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09622 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 09632 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 09652 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09667 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09732 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09762 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 09821 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09859 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'e', 'c', 'o', ' ', 'M', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 09897 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 09935 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 09960 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* I 1*/
	HB_P_JUMP, 54, 253,	/* -714 (abs: 09253) */
/* 09970 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MGRU_PROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10065 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_INC,
	HB_P_POPVARIABLE, 48, 0,	/* H */
	HB_P_JUMP, 183, 248,	/* -1865 (abs: 08210) */
/* 10078 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 10144) */
/* 10091 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10099 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 10109 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 10129 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10144 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10203 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 27, 13,	/* 3355 (abs: 13631) */
/* 10279 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSTRSHORT, 93,	/* 93 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', ',', 's', 'u', 'm', '(', 'q', 't', 'd', ')', ',', 's', 'u', 'm', '(', 'q', 't', 'd', '*', 'p', 'r', 'e', 'c', 'o', ')', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 10412 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 10463) */
/* 10424 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 10463 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', ',', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 10504 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 10534 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'M', 'e', 's', 'a', 's', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 10561 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHLOCALNEAR, 6,	/* MORDEM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 79, 4,	/* 1103 (abs: 11674) */
/* 10574 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 10582 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10603 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 10677) */
/* 10617 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 112, 215,	/* -10384 (abs: 00290) */
/* 10677 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHLOCALNEAR, 16,	/* MPROD_MAIS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 10720) */
/* 10689 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 52,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 10720 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 40,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'V', '_', 'P', 'R', 'O', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 10752) */
	HB_P_JUMP, 37, 215,	/* -10459 (abs: 00290) */
/* 10752 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 10759 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 10779 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10794 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'M', 'e', 's', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 10824 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10862 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'e', 'c', 'o', ' ', 'M', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 10900 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 10938 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 10963 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_GERAL 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_POPLOCALNEAR, 4,	/* I */
/* 10974 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 241, 1,	/* 497 (abs: 11488) */
/* 10994 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'M', 'e', 's', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11019 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 11048 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11099 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11159 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11210 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 11226 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PROD */
/* 11242 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 225, 0,	/* 225 (abs: 11478) */
/* 11256 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11264 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 11274 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 11294 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 11309 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'M', 'e', 's', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 11339 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 11377 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'e', 'c', 'o', ' ', 'M', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 11415 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 11453 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 11478 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* I 1*/
	HB_P_JUMP, 8, 254,	/* -504 (abs: 10981) */
/* 11488 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 11539) */
/* 11501 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11509 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 11519 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 11539 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11598 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 168, 7,	/* 1960 (abs: 13631) */
/* 11674 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* CONS_GRUP */
/* 11682 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'g', 'r', 'u', 'p', 'o', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 7, 0,	/* CONS_GRUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 11742 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 11816) */
/* 11756 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 253, 210,	/* -11523 (abs: 00290) */
/* 11816 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 40,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'A', 'B', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 11848) */
	HB_P_JUMP, 221, 210,	/* -11555 (abs: 00290) */
/* 11848 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 11855 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 11875 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 11890 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 48, 0,	/* H */
/* 11897 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 48, 0,	/* H */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 238, 5,	/* 1518 (abs: 13433) */
/* 11918 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MGRU_GERAL 0*/
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_POPLOCALNEAR, 14,	/* MGRU_PROD */
/* 11929 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSTRSHORT, 142,	/* 142 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', ',', 's', 'u', 'm', '(', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'q', 't', 'd', ')', ',', 's', 'u', 'm', '(', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'q', 't', 'd', '*', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'p', 'r', 'e', 'c', 'o', ')', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ',', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', '_', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', '.', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', '.', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 12202 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 12261) */
/* 12214 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'g', 'r', 'u', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_FUN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 12261 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', ',', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 12302 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'n', 'u', 'm', '_', 'l', 'o', 'c', 'a', 'l', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CCOMM */
/* 12332 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'M', 'e', 's', 'a', 's', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 12359 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 12367 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 8,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12388 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12405) */
	HB_P_JUMP, 253, 3,	/* 1021 (abs: 13423) */
/* 12405 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 12430 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 12495 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'M', 'e', 's', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 12525 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 12563 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'e', 'c', 'o', ' ', 'M', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 12601 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 12639 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 12664 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHLOCALNEAR, 16,	/* MPROD_MAIS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 12707) */
/* 12676 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHSYMNEAR, 52,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 12707 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* I 0*/
/* 12714 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_PUSHSYMNEAR, 37,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 82, 2,	/* 594 (abs: 13325) */
/* 12734 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHSYMNEAR, 22,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'M', 'e', 's', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12759 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 12788 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 12839 */ HB_P_LINE, 235, 1,	/* 491 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 12899 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 12950 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 12966 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PROD */
/* 12982 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MGRU_GERAL */
/* 12998 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_PUSHLOCALNEAR, 14,	/* MGRU_PROD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 4,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MGRU_PROD */
/* 13014 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 34, 1,	/* 290 (abs: 13315) */
/* 13028 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 13036 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 13046 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 13066 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 13081 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'G', 'R', 'U', 'P', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_GRUP */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 13146 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'M', 'e', 's', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 13176 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 13214 */ HB_P_LINE, 249, 1,	/* 505 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'e', 'c', 'o', ' ', 'M', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
/* 13252 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 13290 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 13315 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* I 1*/
	HB_P_JUMP, 167, 253,	/* -601 (abs: 12721) */
/* 13325 */ HB_P_LINE, 254, 1,	/* 510 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MGRU_PROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MGRU_GERAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13420 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHVARIABLE, 48, 0,	/* H */
	HB_P_INC,
	HB_P_POPVARIABLE, 48, 0,	/* H */
	HB_P_JUMP, 10, 250,	/* -1526 (abs: 11904) */
/* 13433 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 13499) */
/* 13446 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 13454 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MPAG */
/* 13464 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 41,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 13484 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHSYMNEAR, 42,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 13499 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13558 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13631 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_PUSHSYMNEAR, 46,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 13639 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHSYMNEAR, 53,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 13649 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_PUSHSYMNEAR, 54,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 54,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 54,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 13691 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHSYMNEAR, 55,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'O', 'V', '_', 'P', 'R', 'O', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 144, 203,	/* -13424 (abs: 00290) */
	HB_P_ENDPROC
/* 13718 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

