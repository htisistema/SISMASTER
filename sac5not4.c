/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sac5not4.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\sac5not4.prg /q /oc:\HTI\sismaster\sac5not4.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.05.30 12:24:47 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sac5not4.prg"

HB_FUNC( SAC5NOT4 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5NOT4 )
{ "SAC5NOT4", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5NOT4 )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEICMS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MECONFIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEPIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEGERAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MICMS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONFIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGERAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5NOT4 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5NOT4
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5NOT4 = hb_vm_SymbolInit_SAC5NOT4;
   #pragma data_seg()
#endif

HB_FUNC( SAC5NOT4 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 20, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'N', 'O', 'T', '4', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_LOCALNEARSETSTR, 20, 2, 0,	/* MRESUMO 2*/
	' ', 0, 
/* 00040 */ HB_P_LINEOFFSET, 2,	/* 14 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00067 */ HB_P_LINEOFFSET, 4,	/* 16 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'A', 'P', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'O', 'S', 'T', 'O', 'S', ' ', '(', 'P', 'I', 'S', ',', ' ', 'C', 'O', 'N', 'F', 'I', 'S', ' ', 'E', ' ', 'I', 'C', 'M', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 7, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00157) */
/* 00152 */ HB_P_LINEOFFSET, 5,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00157 */ HB_P_LINEOFFSET, 7,	/* 19 */
	HB_P_PUSHSYMNEAR, 8,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MTRACO */
/* 00172 */ HB_P_LINEOFFSET, 8,	/* 20 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'N', 'O', 'T', 'A', 'S', ' ', 'F', 'I', 'S', 'C', 'A', 'I', 'S', ' ', 'I', 'N', 'T', 'E', 'R', 'E', 'S', 'T', 'A', 'D', 'U', 'A', 'I', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00231 */ HB_P_LINEOFFSET, 12,	/* 24 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00240 */ HB_P_LINEOFFSET, 14,	/* 26 */
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MTOTE_ICMS 0*/
	HB_P_PUSHLOCALNEAR, 19,	/* MTOTE_ICMS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MTOTE_CONFIS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MTOTE_PIS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* MTOTE_GERAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MTOT_ICMS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CONFIS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PIS */
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 00268 */ HB_P_LINEOFFSET, 15,	/* 27 */
	HB_P_PUSHMEMVAR, 10, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 225, 255,	/* -31*/
	HB_P_POPLOCALNEAR, 4,	/* MDATA1 */
/* 00278 */ HB_P_LINEOFFSET, 16,	/* 28 */
	HB_P_PUSHMEMVAR, 10, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 5,	/* MDATA2 */
/* 00285 */ HB_P_LINEOFFSET, 17,	/* 29 */
	HB_P_LOCALNEARSETSTR, 20, 2, 0,	/* MRESUMO 2*/
	'N', 0, 
/* 00293 */ HB_P_LINEOFFSET, 18,	/* 30 */
	HB_P_PUSHSYMNEAR, 11,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00340 */ HB_P_LINEOFFSET, 19,	/* 31 */
	HB_P_PUSHSYMNEAR, 12,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00355 */ HB_P_LINEOFFSET, 20,	/* 32 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00392 */ HB_P_LINEOFFSET, 21,	/* 33 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00430 */ HB_P_LINEOFFSET, 22,	/* 34 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'o', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00468 */ HB_P_LINEOFFSET, 24,	/* 36 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00506) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00511) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 19,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00553) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00554) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 20, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00572 */ HB_P_LINEOFFSET, 25,	/* 37 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00611) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00616) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	5, 0,	/* MDATA2 */
	4, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00658) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00659) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 20, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00677 */ HB_P_LINEOFFSET, 26,	/* 38 */
	HB_P_PUSHSYMNEAR, 15,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 18,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MRESUMO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00716) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00721) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'r', 'e', 's', 'u', 'm', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MRESUMO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 20, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 17, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00773 */ HB_P_LINEOFFSET, 27,	/* 39 */
	HB_P_PUSHSYMNEAR, 21,	/* READMODAL */
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
/* 00795 */ HB_P_LINEOFFSET, 28,	/* 40 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00851) */
/* 00807 */ HB_P_LINEOFFSET, 29,	/* 41 */
	HB_P_PUSHSYMNEAR, 23,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 's', 'a', 'i', '_', 'e', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'r', 'e', 'd', 'i', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'a', 't', 'u', 'r', 'e', 'z', 'a', 0, 
	HB_P_DOSHORT, 3,
	HB_P_JUMP, 231, 19,	/* 5095 (abs: 05943) */
/* 00851 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_PUSHSYMNEAR, 24,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00888 */ HB_P_LINEOFFSET, 33,	/* 45 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00902) */
	HB_P_JUMP, 100, 253,	/* -668 (abs: 00231) */
/* 00902 */ HB_P_LINEOFFSET, 36,	/* 48 */
	HB_P_PUSHSYMNEAR, 11,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', 'o', ' ', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00957 */ HB_P_LINEOFFSET, 37,	/* 49 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* CONS_MERC */
/* 00964 */ HB_P_LINEOFFSET, 38,	/* 50 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'm', 'e', 'r', 'c', ',', 'p', 'i', 's', ',', 'c', 'o', 'n', 'f', 'i', 's', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 11, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01043 */ HB_P_LINEOFFSET, 39,	/* 51 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 01097) */
/* 01056 */ HB_P_LINEOFFSET, 40,	/* 52 */
	HB_P_PUSHSYMNEAR, 28,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'a', 'o', ' ', 'E', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 161, 252,	/* -863 (abs: 00231) */
/* 01097 */ HB_P_LINEOFFSET, 43,	/* 55 */
	HB_P_PUSHSYMNEAR, 11,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'I', 'm', 't', 'e', 'r', 'r', 'o', 'm', 'p', 'e', ' ', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01172 */ HB_P_LINEOFFSET, 44,	/* 56 */
	HB_P_PUSHSYMNEAR, 29,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'O', 'T', 'A', '_', 'F', 'I', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01203) */
	HB_P_JUMP, 55, 252,	/* -969 (abs: 00231) */
/* 01203 */ HB_P_LINEOFFSET, 47,	/* 59 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* MPAG 0*/
/* 01209 */ HB_P_LINEOFFSET, 48,	/* 60 */
	HB_P_LOCALNEARSETSTR, 7, 53, 0,	/* MTIT 53*/
	'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'A', 'p', 'u', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'I', 'm', 'p', 'o', 's', 't', 'o', 's', ' ', 'P', 'I', 'S', ',', ' ', 'C', 'O', 'N', 'F', 'I', 'S', ' ', 'e', ' ', 'I', 'C', 'M', 'S', 0, 
/* 01268 */ HB_P_LINEOFFSET, 49,	/* 61 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MTIPO */
/* 01307 */ HB_P_LINEOFFSET, 50,	/* 62 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 31, 0,	/* I */
/* 01313 */ HB_P_LINEOFFSET, 51,	/* 63 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 31, 0,	/* I */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 138, 12,	/* 3210 (abs: 04540) */
/* 01333 */ HB_P_LINEOFFSET, 52,	/* 64 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 32, 0,	/* MEICMS */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 33, 0,	/* MECONFIS */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 34, 0,	/* MEPIS */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 35, 0,	/* MEGERAL */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 36, 0,	/* MICMS */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 37, 0,	/* MCONFIS */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 38, 0,	/* MPIS */
	HB_P_POPVARIABLE, 39, 0,	/* MGERAL */
/* 01367 */ HB_P_LINEOFFSET, 54,	/* 66 */
	HB_P_PUSHLOCALNEAR, 6,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01385) */
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 114, 1,	/* 370 (abs: 01755) */
/* 01388 */ HB_P_LINEOFFSET, 55,	/* 67 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* MPAG 1*/
/* 01394 */ HB_P_LINEOFFSET, 56,	/* 68 */
	HB_P_PUSHLOCALNEAR, 6,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01409) */
/* 01402 */ HB_P_LINEOFFSET, 57,	/* 69 */
	HB_P_PUSHSYMNEAR, 41,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01409 */ HB_P_LINEOFFSET, 59,	/* 71 */
	HB_P_PUSHSYMNEAR, 42,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 8,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 01424 */ HB_P_LINEOFFSET, 60,	/* 72 */
	HB_P_PUSHLOCALNEAR, 20,	/* MRESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 66, 1,	/* 322 (abs: 01755) */
/* 01436 */ HB_P_LINEOFFSET, 61,	/* 73 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01450 */ HB_P_LINEOFFSET, 62,	/* 74 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01479 */ HB_P_LINEOFFSET, 63,	/* 75 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01514 */ HB_P_LINEOFFSET, 64,	/* 76 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 01554 */ HB_P_LINEOFFSET, 65,	/* 77 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', 'V', 'l', 'r', '.', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 01595 */ HB_P_LINEOFFSET, 66,	/* 78 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'I', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 01636 */ HB_P_LINEOFFSET, 67,	/* 79 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', 'V', 'l', 'r', '.', 'C', 'O', 'N', 'F', 'I', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 01677 */ HB_P_LINEOFFSET, 68,	/* 80 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'I', 'C', 'M', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 01718 */ HB_P_LINEOFFSET, 69,	/* 81 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 01732 */ HB_P_LINEOFFSET, 70,	/* 82 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01755 */ HB_P_LINEOFFSET, 73,	/* 85 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* CONS_MOVNT */
/* 01762 */ HB_P_LINEOFFSET, 74,	/* 86 */
	HB_P_PUSHSTRSHORT, 89,	/* 89 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 's', 'u', 'm', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ')', ',', 's', 'u', 'm', '(', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ')', '*', '(', 'i', 'c', 'm', '/', '1', '0', '0', ')', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 0, 
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 01858 */ HB_P_LINEOFFSET, 75,	/* 87 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 01919 */ HB_P_LINEOFFSET, 76,	/* 88 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 01959 */ HB_P_LINEOFFSET, 77,	/* 89 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'c', 'o', 'd', '_', 'n', 'o', 't', 'a', ' ', '=', ' ', 39, 'B', 39, ' ', 'A', 'N', 'D', ' ', '(', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '3', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '1', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02027 */ HB_P_LINEOFFSET, 78,	/* 90 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', 'A', 'N', 'D', ' ', '(', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02075 */ HB_P_LINEOFFSET, 79,	/* 91 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02105 */ HB_P_LINEOFFSET, 80,	/* 92 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02140 */ HB_P_LINEOFFSET, 81,	/* 93 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 9, 0,	/* CONS_MOVNT */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02161 */ HB_P_LINEOFFSET, 82,	/* 94 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* CONS_MOVNTE */
/* 02168 */ HB_P_LINEOFFSET, 83,	/* 95 */
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 's', 'u', 'm', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'u', 'n', 'i', 't', ')', ',', 's', 'u', 'm', '(', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'u', 'n', 'i', 't', ')', '*', '(', 'i', 'c', 'm', '_', 'a', 'l', 'i', 'q', '/', '1', '0', '0', ')', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 0, 
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02265 */ HB_P_LINEOFFSET, 84,	/* 96 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02326 */ HB_P_LINEOFFSET, 85,	/* 97 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02366 */ HB_P_LINEOFFSET, 86,	/* 98 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '3', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '1', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02411 */ HB_P_LINEOFFSET, 87,	/* 99 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', 'A', 'N', 'D', ' ', '(', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02459 */ HB_P_LINEOFFSET, 88,	/* 100 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'E', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02489 */ HB_P_LINEOFFSET, 89,	/* 101 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02524 */ HB_P_LINEOFFSET, 90,	/* 102 */
	HB_P_MESSAGE, 25, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 26,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 10, 0,	/* CONS_MOVNTE */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02545 */ HB_P_LINEOFFSET, 91,	/* 103 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02559 */ HB_P_LINEOFFSET, 92,	/* 104 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02583) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02588) */
	HB_P_JUMP, 153, 7,	/* 1945 (abs: 04530) */
/* 02588 */ HB_P_LINEOFFSET, 94,	/* 106 */
	HB_P_PUSHLOCALNEAR, 20,	/* MRESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 02662) */
/* 02599 */ HB_P_LINEOFFSET, 95,	/* 107 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02628 */ HB_P_LINEOFFSET, 96,	/* 108 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02662 */ HB_P_LINEOFFSET, 99,	/* 111 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 190, 1,	/* 446 (abs: 03119) */
/* 02676 */ HB_P_LINEOFFSET, 100,	/* 112 */
	HB_P_PUSHLOCALNEAR, 20,	/* MRESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 19, 1,	/* 275 (abs: 02960) */
/* 02688 */ HB_P_LINEOFFSET, 101,	/* 113 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'O', 'M', 'P', 'R', 'A', 'S', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02722 */ HB_P_LINEOFFSET, 102,	/* 114 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02775 */ HB_P_LINEOFFSET, 103,	/* 115 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02841 */ HB_P_LINEOFFSET, 104,	/* 116 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02907 */ HB_P_LINEOFFSET, 105,	/* 117 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02960 */ HB_P_LINEOFFSET, 107,	/* 119 */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 35, 0,	/* MEGERAL */
/* 02972 */ HB_P_LINEOFFSET, 108,	/* 120 */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPVARIABLE, 34, 0,	/* MEPIS */
/* 02997 */ HB_P_LINEOFFSET, 109,	/* 121 */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPVARIABLE, 33, 0,	/* MECONFIS */
/* 03022 */ HB_P_LINEOFFSET, 110,	/* 122 */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 32, 0,	/* MEICMS */
/* 03034 */ HB_P_LINEOFFSET, 112,	/* 124 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTOTE_GERAL */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* MTOTE_GERAL */
/* 03048 */ HB_P_LINEOFFSET, 113,	/* 125 */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOTE_PIS */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* MTOTE_PIS */
/* 03075 */ HB_P_LINEOFFSET, 114,	/* 126 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTE_CONFIS */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTOTE_CONFIS */
/* 03102 */ HB_P_LINEOFFSET, 115,	/* 127 */
	HB_P_PUSHLOCALNEAR, 19,	/* MTOTE_ICMS */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_MOVNTE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MTOTE_ICMS */
	HB_P_JUMP, 237, 0,	/* 237 (abs: 03353) */
/* 03119 */ HB_P_LINEOFFSET, 117,	/* 129 */
	HB_P_PUSHLOCALNEAR, 20,	/* MRESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 225, 0,	/* 225 (abs: 03353) */
/* 03131 */ HB_P_LINEOFFSET, 118,	/* 130 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'O', 'M', 'P', 'R', 'A', 'S', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03165 */ HB_P_LINEOFFSET, 119,	/* 131 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03212 */ HB_P_LINEOFFSET, 120,	/* 132 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03259 */ HB_P_LINEOFFSET, 121,	/* 133 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03306 */ HB_P_LINEOFFSET, 122,	/* 134 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03353 */ HB_P_LINEOFFSET, 125,	/* 137 */
	HB_P_PUSHSYMNEAR, 27,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 193, 1,	/* 449 (abs: 03813) */
/* 03367 */ HB_P_LINEOFFSET, 126,	/* 138 */
	HB_P_PUSHLOCALNEAR, 20,	/* MRESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 22, 1,	/* 278 (abs: 03654) */
/* 03379 */ HB_P_LINEOFFSET, 127,	/* 139 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'E', 'N', 'D', 'A', 'S', ' ', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03416 */ HB_P_LINEOFFSET, 128,	/* 140 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03469 */ HB_P_LINEOFFSET, 129,	/* 141 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03535 */ HB_P_LINEOFFSET, 130,	/* 142 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03601 */ HB_P_LINEOFFSET, 131,	/* 143 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03654 */ HB_P_LINEOFFSET, 133,	/* 145 */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 39, 0,	/* MGERAL */
/* 03666 */ HB_P_LINEOFFSET, 134,	/* 146 */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPVARIABLE, 38, 0,	/* MPIS */
/* 03691 */ HB_P_LINEOFFSET, 135,	/* 147 */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPVARIABLE, 37, 0,	/* MCONFIS */
/* 03716 */ HB_P_LINEOFFSET, 136,	/* 148 */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 36, 0,	/* MICMS */
/* 03728 */ HB_P_LINEOFFSET, 137,	/* 149 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_GERAL */
/* 03742 */ HB_P_LINEOFFSET, 138,	/* 150 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PIS */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PIS */
/* 03769 */ HB_P_LINEOFFSET, 139,	/* 151 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CONFIS */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CONFIS */
/* 03796 */ HB_P_LINEOFFSET, 140,	/* 152 */
	HB_P_PUSHLOCALNEAR, 15,	/* MTOT_ICMS */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MTOT_ICMS */
	HB_P_JUMP, 240, 0,	/* 240 (abs: 04050) */
/* 03813 */ HB_P_LINEOFFSET, 142,	/* 154 */
	HB_P_PUSHLOCALNEAR, 20,	/* MRESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 228, 0,	/* 228 (abs: 04050) */
/* 03825 */ HB_P_LINEOFFSET, 143,	/* 155 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'E', 'N', 'D', 'A', 'S', ' ', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03862 */ HB_P_LINEOFFSET, 144,	/* 156 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03909 */ HB_P_LINEOFFSET, 145,	/* 157 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03956 */ HB_P_LINEOFFSET, 146,	/* 158 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04003 */ HB_P_LINEOFFSET, 147,	/* 159 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04050 */ HB_P_LINEOFFSET, 150,	/* 162 */
	HB_P_PUSHLOCALNEAR, 20,	/* MRESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 213, 1,	/* 469 (abs: 04528) */
/* 04062 */ HB_P_LINEOFFSET, 151,	/* 163 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04099 */ HB_P_LINEOFFSET, 152,	/* 164 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04140 */ HB_P_LINEOFFSET, 153,	/* 165 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04181 */ HB_P_LINEOFFSET, 154,	/* 166 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04222 */ HB_P_LINEOFFSET, 155,	/* 167 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04263 */ HB_P_LINEOFFSET, 156,	/* 168 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'O', 'T', 'A', 'I', 'S', ' ', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04300 */ HB_P_LINEOFFSET, 157,	/* 169 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* MEGERAL */
	HB_P_PUSHVARIABLE, 39, 0,	/* MGERAL */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04353 */ HB_P_LINEOFFSET, 158,	/* 170 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* MEPIS */
	HB_P_PUSHVARIABLE, 38, 0,	/* MPIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04406 */ HB_P_LINEOFFSET, 159,	/* 171 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MECONFIS */
	HB_P_PUSHVARIABLE, 37, 0,	/* MCONFIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04459 */ HB_P_LINEOFFSET, 160,	/* 172 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MEICMS */
	HB_P_PUSHVARIABLE, 36, 0,	/* MICMS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04512 */ HB_P_LINEOFFSET, 161,	/* 173 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04528 */ HB_P_LINEOFFSET, 163,	/* 175 */
	HB_P_PUSHVARIABLE, 31, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 31, 0,	/* I */
	HB_P_JUMP, 110, 243,	/* -3218 (abs: 01319) */
/* 04540 */ HB_P_LINEOFFSET, 164,	/* 176 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 04554 */ HB_P_LINEOFFSET, 165,	/* 177 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04586 */ HB_P_LINEOFFSET, 166,	/* 178 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'D', 'A', ' ', 'A', 'P', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'I', 'M', 'P', 'O', 'S', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 04661 */ HB_P_LINEOFFSET, 167,	/* 179 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04693 */ HB_P_LINEOFFSET, 168,	/* 180 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04731 */ HB_P_LINEOFFSET, 169,	/* 181 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 04770 */ HB_P_LINEOFFSET, 170,	/* 182 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'I', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 04812 */ HB_P_LINEOFFSET, 171,	/* 183 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'V', 'l', 'r', '.', 'C', 'O', 'N', 'F', 'I', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 04854 */ HB_P_LINEOFFSET, 172,	/* 184 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'I', 'C', 'M', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 04896 */ HB_P_LINEOFFSET, 173,	/* 185 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04928 */ HB_P_LINEOFFSET, 174,	/* 186 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'O', 'M', 'P', 'R', 'A', 'S', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04964 */ HB_P_LINEOFFSET, 175,	/* 187 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOTE_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05012 */ HB_P_LINEOFFSET, 176,	/* 188 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTOTE_PIS */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05060 */ HB_P_LINEOFFSET, 177,	/* 189 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTE_CONFIS */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05108 */ HB_P_LINEOFFSET, 178,	/* 190 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTOTE_ICMS */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05156 */ HB_P_LINEOFFSET, 179,	/* 191 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'E', 'N', 'D', 'A', 'S', ' ', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05192 */ HB_P_LINEOFFSET, 180,	/* 192 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05240 */ HB_P_LINEOFFSET, 181,	/* 193 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PIS */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05288 */ HB_P_LINEOFFSET, 182,	/* 194 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CONFIS */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05336 */ HB_P_LINEOFFSET, 183,	/* 195 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MTOT_ICMS */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05384 */ HB_P_LINEOFFSET, 184,	/* 196 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05420 */ HB_P_LINEOFFSET, 185,	/* 197 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05461 */ HB_P_LINEOFFSET, 186,	/* 198 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05502 */ HB_P_LINEOFFSET, 187,	/* 199 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05543 */ HB_P_LINEOFFSET, 188,	/* 200 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05584 */ HB_P_LINEOFFSET, 189,	/* 201 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'O', 'T', 'A', 'I', 'S', ' ', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05620 */ HB_P_LINEOFFSET, 190,	/* 202 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTOTE_GERAL */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_GERAL */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05671 */ HB_P_LINEOFFSET, 191,	/* 203 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTOTE_PIS */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05722 */ HB_P_LINEOFFSET, 192,	/* 204 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTE_CONFIS */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CONFIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05773 */ HB_P_LINEOFFSET, 193,	/* 205 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTOTE_ICMS */
	HB_P_PUSHLOCALNEAR, 15,	/* MTOT_ICMS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05824 */ HB_P_LINEOFFSET, 194,	/* 206 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 05850 */ HB_P_LINEOFFSET, 195,	/* 207 */
	HB_P_PUSHSYMNEAR, 43,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 05864 */ HB_P_LINEOFFSET, 196,	/* 208 */
	HB_P_PUSHSYMNEAR, 41,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05871 */ HB_P_LINEOFFSET, 197,	/* 209 */
	HB_P_PUSHSYMNEAR, 49,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05880 */ HB_P_LINEOFFSET, 198,	/* 210 */
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 05921 */ HB_P_LINEOFFSET, 199,	/* 211 */
	HB_P_PUSHSYMNEAR, 51,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'O', 'T', 'A', '_', 'F', 'I', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 05943 */ HB_P_LINEOFFSET, 203,	/* 215 */
	HB_P_PUSHSYMNEAR, 52,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05950 */ HB_P_LINEOFFSET, 204,	/* 216 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05955 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

