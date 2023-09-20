/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5NOT1.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\SAC5NOT1.PRG /q /oc:\HTI\sismaster\SAC5NOT1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.05.30 12:24:47 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5NOT1.PRG"

HB_FUNC( SAC5NOT1 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( VER_NAT );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5NOT1 )
{ "SAC5NOT1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5NOT1 )}, NULL },
{ "MCREDITO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNATUREZA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVLR_NOTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVLR_ICM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MIMP_PROD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "VER_NAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NAT )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "M_TOTNT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5NOT1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5NOT1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5NOT1 = hb_vm_SymbolInit_SAC5NOT1;
   #pragma data_seg()
#endif

HB_FUNC( SAC5NOT1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 41, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_LOCALNEARSETSTR, 2, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'N', 'O', 'T', '1', 0, 
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MTOT_ICMSUB 0*/
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MPESO_LIQ 0*/
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MPESO 0*/
	HB_P_LOCALNEARSETINT, 20, 0, 0,	/* MTOT_IPI 0*/
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MCOD_MERC 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 34,	/* M_MERC */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MTOT_QTDPROD 0*/
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MCP_NOTA 0*/
	HB_P_LOCALNEARSETINT, 37, 0, 0,	/* MCP_ICM 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_LOCALNEARSETINT, 39, 0, 0,	/* MDIA_CUST 0*/
	HB_P_LOCALNEARSETINT, 40, 0, 0,	/* MTOT_CUST 0*/
	HB_P_LOCALNEARSETINT, 41, 0, 0,	/* T 0*/
	HB_P_LOCALNEARSETINT, 42, 0, 0,	/* I 0*/
/* 00077 */ HB_P_LINEOFFSET, 3,	/* 15 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 11,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCREDITO */
	HB_P_PUSHSYMNEAR, 2,	/* MNATUREZA */
	HB_P_PUSHSYMNEAR, 3,	/* MVLR_NOTA */
	HB_P_PUSHSYMNEAR, 4,	/* MVLR_ICM */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 6,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 7,	/* MARQ */
	HB_P_PUSHSYMNEAR, 9,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 10,	/* MCOD_VEND */
	HB_P_DOSHORT, 9,
	HB_P_POPVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_POPVARIABLE, 7, 0,	/* MARQ */
	HB_P_POPVARIABLE, 6, 0,	/* MIMP_TIPO */
/* 00120 */ HB_P_LINEOFFSET, 5,	/* 17 */
	HB_P_PUSHSYMNEAR, 12,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'N', 'O', 'T', 'A', 'S', ' ', 'F', 'I', 'S', 'C', 'A', 'I', 'S', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'A', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 13, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00191) */
/* 00186 */ HB_P_LINEOFFSET, 6,	/* 18 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00191 */ HB_P_LINEOFFSET, 8,	/* 20 */
	HB_P_PUSHSYMNEAR, 14,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* MTRACO */
/* 00207 */ HB_P_LINEOFFSET, 9,	/* 21 */
	HB_P_LOCALNEARSETINT, 3, 10, 0,	/* LBA 10*/
/* 00213 */ HB_P_LINEOFFSET, 10,	/* 22 */
	HB_P_LOCALNEARSETINT, 4, 78, 0,	/* CBA 78*/
/* 00219 */ HB_P_LINEOFFSET, 11,	/* 23 */
	HB_P_PUSHSYMNEAR, 15,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 78,	/* 78 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'N', 'O', 'T', 'A', 'S', ' ', 'F', 'I', 'S', 'C', 'A', 'I', 'S', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'A', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00270 */ HB_P_LINEOFFSET, 13,	/* 25 */
	HB_P_PUSHSYMNEAR, 16,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00279 */ HB_P_LINEOFFSET, 15,	/* 27 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO_IMP */
/* 00288 */ HB_P_LINEOFFSET, 17,	/* 29 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCD */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00304) */
/* 00296 */ HB_P_LINEOFFSET, 18,	/* 30 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 00311) */
/* 00304 */ HB_P_LINEOFFSET, 20,	/* 32 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCD */
	HB_P_POPVARIABLE, 9, 0,	/* MCOD_CLI */
/* 00311 */ HB_P_LINEOFFSET, 22,	/* 34 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 1, 0,	/* MCREDITO */
/* 00320 */ HB_P_LINEOFFSET, 23,	/* 35 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MNATUREZA */
/* 00332 */ HB_P_LINEOFFSET, 24,	/* 36 */
	HB_P_PUSHMEMVAR, 17, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 225, 255,	/* -31*/
	HB_P_POPLOCALNEAR, 8,	/* MDATA1 */
/* 00342 */ HB_P_LINEOFFSET, 25,	/* 37 */
	HB_P_PUSHMEMVAR, 17, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 9,	/* MDATA2 */
/* 00349 */ HB_P_LINEOFFSET, 26,	/* 38 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* MCOD_AUX */
/* 00360 */ HB_P_LINEOFFSET, 27,	/* 39 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MCOD_NAT */
/* 00371 */ HB_P_LINEOFFSET, 28,	/* 40 */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* MCOD_NOTA 2*/
	'G', 0, 
/* 00379 */ HB_P_LINEOFFSET, 29,	/* 41 */
	HB_P_PUSHSYMNEAR, 18,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 00399 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_LOCALNEARSETINT, 40, 0, 0,	/* MTOT_CUST 0*/
	HB_P_PUSHLOCALNEAR, 40,	/* MTOT_CUST */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MDIA_CUST */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 37,	/* MCP_ICM */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MCP_NOTA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MTOT_QTDPROD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_IPI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_ICMSUB */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_ICM */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_NOTA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_QTD */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 4, 0,	/* MVLR_ICM */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 3, 0,	/* MVLR_NOTA */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 30,	/* MDIA_ICMSUB */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 29,	/* MDIA_NOTA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MDIA_IPI */
	HB_P_POPLOCALNEAR, 27,	/* MDIA_ICM */
/* 00460 */ HB_P_LINEOFFSET, 33,	/* 45 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_POPVARIABLE, 19, 0,	/* MIMP_PROD */
/* 00469 */ HB_P_LINEOFFSET, 34,	/* 46 */
	HB_P_LOCALNEARSETSTR, 32, 2, 0,	/* MSAI_ENT 2*/
	'S', 0, 
/* 00477 */ HB_P_LINEOFFSET, 35,	/* 47 */
	HB_P_LOCALNEARSETSTR, 31, 2, 0,	/* MCUPOM 2*/
	'G', 0, 
/* 00485 */ HB_P_LINEOFFSET, 36,	/* 48 */
	HB_P_PUSHSYMNEAR, 20,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00532 */ HB_P_LINEOFFSET, 37,	/* 49 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00583 */ HB_P_LINEOFFSET, 38,	/* 50 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00634 */ HB_P_LINEOFFSET, 39,	/* 51 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00686 */ HB_P_LINEOFFSET, 40,	/* 52 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00738 */ HB_P_LINEOFFSET, 41,	/* 53 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00790 */ HB_P_LINEOFFSET, 42,	/* 54 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'N', 'a', 't', 'u', 'r', 'e', 'z', 'a', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00842 */ HB_P_LINEOFFSET, 43,	/* 55 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00894 */ HB_P_LINEOFFSET, 44,	/* 56 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'[', 'G', ']', 'e', 'r', 'a', 'l', ' ', '[', 'C', ']', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a', ' ', '[', 'A', ']', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00946 */ HB_P_LINEOFFSET, 45,	/* 57 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', '[', 'N', ']', 'F', 'e', ' ', 'N', 'F', '[', 'C', ']', 'e', ' ', 'o', 'u', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00998 */ HB_P_LINEOFFSET, 46,	/* 58 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'[', 'S', ']', 'a', 'i', 'd', 'a', ' ', '[', 'E', ']', 'n', 't', 'r', 'a', 'd', 'a', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01050 */ HB_P_LINEOFFSET, 48,	/* 60 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01088) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01093) */
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
	8, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01135) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01136) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01154 */ HB_P_LINEOFFSET, 49,	/* 61 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01192) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01197) */
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
	9, 0,	/* MDATA2 */
	8, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01239) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01240) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01258 */ HB_P_LINEOFFSET, 50,	/* 62 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 29,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_ONE,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01329 */ HB_P_LINEOFFSET, 51,	/* 63 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01383) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 01395) */
	HB_P_PUSHSYMNEAR, 30,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01413 */ HB_P_LINEOFFSET, 52,	/* 64 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01452) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01457) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 31,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01518 */ HB_P_LINEOFFSET, 53,	/* 65 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MCOD_NAT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01557) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01562) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'n', 'a', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '.', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MCOD_NAT */
	HB_P_PUSHSYMNEAR, 32,	/* VER_NAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01616 */ HB_P_LINEOFFSET, 54,	/* 66 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'i', 'm', 'p', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MIMP_PROD */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01684 */ HB_P_LINEOFFSET, 55,	/* 67 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MCOD_NOTA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01723) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01728) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'n', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MCOD_NOTA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'G', ',', 'C', ',', 'A', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01784 */ HB_P_LINEOFFSET, 56,	/* 68 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MCUPOM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01823) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01828) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'c', 'u', 'p', 'o', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MCUPOM */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'N', ',', 'C', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01881 */ HB_P_LINEOFFSET, 57,	/* 69 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MSAI_ENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01920) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01925) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 's', 'a', 'i', '_', 'e', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MSAI_ENT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'E', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 28, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01980 */ HB_P_LINEOFFSET, 58,	/* 70 */
	HB_P_PUSHSYMNEAR, 33,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 25, 0,	/* GETLIST */
/* 02002 */ HB_P_LINEOFFSET, 59,	/* 71 */
	HB_P_PUSHSYMNEAR, 34,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02017) */
	HB_P_JUMP, 133, 32,	/* 8325 (abs: 10339) */
/* 02017 */ HB_P_LINEOFFSET, 62,	/* 74 */
	HB_P_PUSHSYMNEAR, 35,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02026 */ HB_P_LINEOFFSET, 63,	/* 75 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MNATUREZA */
	HB_P_DOSHORT, 1,
/* 02045 */ HB_P_LINEOFFSET, 64,	/* 76 */
	HB_P_PUSHSYMNEAR, 35,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02053 */ HB_P_LINEOFFSET, 65,	/* 77 */
	HB_P_PUSHSYMNEAR, 36,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'O', 'T', 'A', '_', 'E', 'M', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02084) */
	HB_P_JUMP, 237, 248,	/* -1811 (abs: 00270) */
/* 02084 */ HB_P_LINEOFFSET, 68,	/* 80 */
	HB_P_PUSHSYMNEAR, 20,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02129 */ HB_P_LINEOFFSET, 69,	/* 81 */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MPAG 0*/
/* 02135 */ HB_P_LINEOFFSET, 70,	/* 82 */
	HB_P_LOCALNEARSETSTR, 22, 36, 0,	/* MTIT 36*/
	'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'N', 'o', 't', 'a', 's', ' ', 'F', 'i', 's', 'c', 'a', 'i', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'a', 's', 0, 
/* 02177 */ HB_P_LINEOFFSET, 71,	/* 83 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIPO */
/* 02216 */ HB_P_LINEOFFSET, 72,	/* 84 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 02262) */
/* 02228 */ HB_P_LINEOFFSET, 73,	/* 85 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIPO */
/* 02262 */ HB_P_LINEOFFSET, 75,	/* 87 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 02305) */
/* 02273 */ HB_P_LINEOFFSET, 76,	/* 88 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'C', 'o', 'd', '.', 'M', 'e', 'r', 'c', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIPO */
/* 02305 */ HB_P_LINEOFFSET, 79,	/* 91 */
	HB_P_PUSHLOCALNEAR, 31,	/* MCUPOM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 02325) */
	HB_P_PUSHLOCALNEAR, 31,	/* MCUPOM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 170, 20,	/* 5290 (abs: 07615) */
/* 02328 */ HB_P_LINEOFFSET, 80,	/* 92 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 39, 0,	/* M_TOTNT */
/* 02336 */ HB_P_LINEOFFSET, 82,	/* 94 */
	HB_P_PUSHSTRSHORT, 199,	/* 199 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 's', 'u', 'm', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ')', ',', 's', 'u', 'm', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', ')', ',', 's', 'u', 'm', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'i', 'p', 'i', ')', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'u', 'f', '_', 'c', 'l', 'i', ',', 'c', 'a', 'n', 'c', 'e', 'l', ',', 'S', 'U', 'M', '(', 'b', 'a', 's', 'e', '_', 'i', 'c', 'm', ')', ',', 'S', 'U', 'M', '(', 'v', 'l', 'r', '_', 'i', 'c', 'm', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'N', 'F', '%', 39, ' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 02579 */ HB_P_LINEOFFSET, 83,	/* 95 */
	HB_P_PUSHLOCALNEAR, 32,	/* MSAI_ENT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 02621) */
/* 02590 */ HB_P_LINEOFFSET, 84,	/* 96 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 42,	/* 42 (abs: 02661) */
/* 02621 */ HB_P_LINEOFFSET, 85,	/* 97 */
	HB_P_PUSHLOCALNEAR, 32,	/* MSAI_ENT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 02661) */
/* 02632 */ HB_P_LINEOFFSET, 86,	/* 98 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', 39, 'E', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 02661 */ HB_P_LINEOFFSET, 88,	/* 100 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 77,	/* 77 (abs: 02748) */
/* 02673 */ HB_P_LINEOFFSET, 89,	/* 101 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 02716 */ HB_P_LINEOFFSET, 90,	/* 102 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'C', 'o', 'd', '.', 'C', 'l', 'i', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIPO */
/* 02748 */ HB_P_LINEOFFSET, 92,	/* 104 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_NOTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 02787) */
/* 02759 */ HB_P_LINEOFFSET, 93,	/* 105 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', 39, 'C', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 02787 */ HB_P_LINEOFFSET, 95,	/* 107 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_NOTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 02851) */
/* 02798 */ HB_P_LINEOFFSET, 96,	/* 108 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'A', 'N', 'D', ' ', '(', 'N', 'O', 'T', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 'C', 39, ' ', 'O', 'R', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 02851 */ HB_P_LINEOFFSET, 98,	/* 110 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD_NAT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 02897) */
/* 02862 */ HB_P_LINEOFFSET, 99,	/* 111 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'n', 'a', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD_NAT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 02897 */ HB_P_LINEOFFSET, 101,	/* 113 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 79,	/* 79 (abs: 02986) */
/* 02909 */ HB_P_LINEOFFSET, 102,	/* 114 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 02953 */ HB_P_LINEOFFSET, 103,	/* 115 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIPO */
/* 02986 */ HB_P_LINEOFFSET, 105,	/* 117 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 03037) */
/* 02997 */ HB_P_LINEOFFSET, 106,	/* 118 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03037 */ HB_P_LINEOFFSET, 108,	/* 120 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 87,	/* 87 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'c', 'a', 'n', 'c', 'e', 'l', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'u', 'f', '_', 'c', 'l', 'i', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03135 */ HB_P_LINEOFFSET, 109,	/* 121 */
	HB_P_MESSAGE, 42, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 43,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 39, 0,	/* M_TOTNT */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03156 */ HB_P_LINEOFFSET, 110,	/* 122 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_TOTNT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 95, 17,	/* 4447 (abs: 07615) */
/* 03171 */ HB_P_LINEOFFSET, 111,	/* 123 */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 03182 */ HB_P_LINEOFFSET, 112,	/* 124 */
	HB_P_LOCALNEARSETINT, 41, 0, 0,	/* T 0*/
/* 03188 */ HB_P_LINEOFFSET, 113,	/* 125 */
	HB_P_LOCALNEARSETINT, 41, 1, 0,	/* T 1*/
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_TOTNT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 183, 9,	/* 2487 (abs: 05692) */
/* 03208 */ HB_P_LINEOFFSET, 114,	/* 126 */
	HB_P_PUSHSYMNEAR, 45,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_PUSHSYMNEAR, 37,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 03230 */ HB_P_LINEOFFSET, 115,	/* 127 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MIMP_PROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 03484) */
/* 03243 */ HB_P_LINEOFFSET, 116,	/* 128 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03307 */ HB_P_LINEOFFSET, 117,	/* 129 */
	HB_P_PUSHLOCALNEAR, 32,	/* MSAI_ENT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 03349) */
/* 03318 */ HB_P_LINEOFFSET, 118,	/* 130 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 42,	/* 42 (abs: 03389) */
/* 03349 */ HB_P_LINEOFFSET, 119,	/* 131 */
	HB_P_PUSHLOCALNEAR, 32,	/* MSAI_ENT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 03389) */
/* 03360 */ HB_P_LINEOFFSET, 120,	/* 132 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', 39, 'E', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03389 */ HB_P_LINEOFFSET, 122,	/* 134 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 03440) */
/* 03400 */ HB_P_LINEOFFSET, 123,	/* 135 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03440 */ HB_P_LINEOFFSET, 125,	/* 137 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 34,	/* M_MERC */
/* 03447 */ HB_P_LINEOFFSET, 126,	/* 138 */
	HB_P_MESSAGE, 42, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 43,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 34, 0,	/* M_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03468 */ HB_P_LINEOFFSET, 127,	/* 139 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03484) */
	HB_P_JUMP, 156, 8,	/* 2204 (abs: 05685) */
/* 03484 */ HB_P_LINEOFFSET, 131,	/* 143 */
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03502) */
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 190, 1,	/* 446 (abs: 03948) */
/* 03505 */ HB_P_LINEOFFSET, 132,	/* 144 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* MPAG 1*/
/* 03511 */ HB_P_LINEOFFSET, 133,	/* 145 */
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03526) */
/* 03519 */ HB_P_LINEOFFSET, 134,	/* 146 */
	HB_P_PUSHSYMNEAR, 47,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03526 */ HB_P_LINEOFFSET, 136,	/* 148 */
	HB_P_PUSHSYMNEAR, 48,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03541 */ HB_P_LINEOFFSET, 137,	/* 149 */
	HB_P_PUSHSYMNEAR, 49,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03555 */ HB_P_LINEOFFSET, 138,	/* 150 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03584 */ HB_P_LINEOFFSET, 139,	/* 151 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', 'o', '.', ' ', 'N', 'o', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03614 */ HB_P_LINEOFFSET, 140,	/* 152 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'N', 'o', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03646 */ HB_P_LINEOFFSET, 141,	/* 153 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'B', 'a', 's', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03684 */ HB_P_LINEOFFSET, 142,	/* 154 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'I', 'C', 'M', 0, 
	HB_P_DOSHORT, 1,
/* 03722 */ HB_P_LINEOFFSET, 143,	/* 155 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', 's', 't', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03760 */ HB_P_LINEOFFSET, 144,	/* 156 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'I', 'P', 'I', 0, 
	HB_P_DOSHORT, 1,
/* 03798 */ HB_P_LINEOFFSET, 145,	/* 157 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', 't', '.', 'M', 'e', 'r', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03836 */ HB_P_LINEOFFSET, 146,	/* 158 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03895 */ HB_P_LINEOFFSET, 148,	/* 160 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'F', 0, 
	HB_P_DOSHORT, 1,
/* 03925 */ HB_P_LINEOFFSET, 149,	/* 161 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03948 */ HB_P_LINEOFFSET, 151,	/* 163 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 03973) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MDIA_NOTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 27, 2,	/* 539 (abs: 04512) */
/* 03976 */ HB_P_LINEOFFSET, 152,	/* 164 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04011 */ HB_P_LINEOFFSET, 153,	/* 165 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04049 */ HB_P_LINEOFFSET, 154,	/* 166 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04087 */ HB_P_LINEOFFSET, 155,	/* 167 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04125 */ HB_P_LINEOFFSET, 156,	/* 168 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04163 */ HB_P_LINEOFFSET, 157,	/* 169 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04201 */ HB_P_LINEOFFSET, 158,	/* 170 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 51,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MDIA_NOTA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04238 */ HB_P_LINEOFFSET, 159,	/* 171 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04276 */ HB_P_LINEOFFSET, 161,	/* 173 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MDIA_ICM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04321 */ HB_P_LINEOFFSET, 162,	/* 174 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MDIA_ICMSUB */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04366 */ HB_P_LINEOFFSET, 163,	/* 175 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MDIA_IPI */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04411 */ HB_P_LINEOFFSET, 164,	/* 176 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MDIA_CUST */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04456 */ HB_P_LINEOFFSET, 165,	/* 177 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04481 */ HB_P_LINEOFFSET, 166,	/* 178 */
	HB_P_LOCALNEARSETINT, 39, 0, 0,	/* MDIA_CUST 0*/
	HB_P_PUSHLOCALNEAR, 39,	/* MDIA_CUST */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 30,	/* MDIA_ICMSUB */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 29,	/* MDIA_NOTA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MDIA_IPI */
	HB_P_POPLOCALNEAR, 27,	/* MDIA_ICM */
/* 04500 */ HB_P_LINEOFFSET, 167,	/* 179 */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 04512 */ HB_P_LINEOFFSET, 169,	/* 181 */
	HB_P_PUSHSYMNEAR, 49,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04526 */ HB_P_LINEOFFSET, 170,	/* 182 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04555 */ HB_P_LINEOFFSET, 171,	/* 183 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04583 */ HB_P_LINEOFFSET, 172,	/* 184 */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 56, 1,	/* 312 (abs: 04911) */
/* 04602 */ HB_P_LINEOFFSET, 173,	/* 185 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 51,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04635 */ HB_P_LINEOFFSET, 174,	/* 186 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04679 */ HB_P_LINEOFFSET, 175,	/* 187 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04723 */ HB_P_LINEOFFSET, 176,	/* 188 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04767 */ HB_P_LINEOFFSET, 177,	/* 189 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04811 */ HB_P_LINEOFFSET, 178,	/* 190 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04855 */ HB_P_LINEOFFSET, 179,	/* 191 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'N', 'O', 'T', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', ' ', 'F', 'O', 'I', ' ', 'C', 'A', 'N', 'C', 'E', 'L', 'A', 'D', 'A', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 232, 1,	/* 488 (abs: 05396) */
/* 04911 */ HB_P_LINEOFFSET, 181,	/* 193 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 51,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04952 */ HB_P_LINEOFFSET, 182,	/* 194 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05004 */ HB_P_LINEOFFSET, 183,	/* 195 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05056 */ HB_P_LINEOFFSET, 184,	/* 196 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05100 */ HB_P_LINEOFFSET, 185,	/* 197 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05152 */ HB_P_LINEOFFSET, 186,	/* 198 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05204 */ HB_P_LINEOFFSET, 187,	/* 199 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 25, 0,	/* 25 */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05256 */ HB_P_LINEOFFSET, 188,	/* 200 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_ICM */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_ICM */
/* 05272 */ HB_P_LINEOFFSET, 189,	/* 201 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_NOTA */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_NOTA */
/* 05288 */ HB_P_LINEOFFSET, 190,	/* 202 */
	HB_P_LOCALNEARADDINT, 17, 0, 0,	/* MTOT_ICMSUB 0*/
/* 05294 */ HB_P_LINEOFFSET, 191,	/* 203 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_IPI */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_IPI */
/* 05310 */ HB_P_LINEOFFSET, 194,	/* 206 */
	HB_P_PUSHLOCALNEAR, 27,	/* MDIA_ICM */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MDIA_ICM */
/* 05326 */ HB_P_LINEOFFSET, 195,	/* 207 */
	HB_P_PUSHLOCALNEAR, 29,	/* MDIA_NOTA */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MDIA_NOTA */
/* 05342 */ HB_P_LINEOFFSET, 196,	/* 208 */
	HB_P_LOCALNEARADDINT, 30, 0, 0,	/* MDIA_ICMSUB 0*/
/* 05348 */ HB_P_LINEOFFSET, 197,	/* 209 */
	HB_P_PUSHLOCALNEAR, 28,	/* MDIA_IPI */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 28,	/* MDIA_IPI */
/* 05364 */ HB_P_LINEOFFSET, 198,	/* 210 */
	HB_P_PUSHLOCALNEAR, 39,	/* MDIA_CUST */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MDIA_CUST */
/* 05380 */ HB_P_LINEOFFSET, 199,	/* 211 */
	HB_P_PUSHLOCALNEAR, 40,	/* MTOT_CUST */
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 40,	/* MTOT_CUST */
/* 05396 */ HB_P_LINEOFFSET, 222,	/* 234 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_TOTNT */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05430 */ HB_P_LINEOFFSET, 223,	/* 235 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* MTOT_QTD 1*/
/* 05436 */ HB_P_LINEOFFSET, 224,	/* 236 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05458) */
	HB_P_PUSHVARIABLE, 19, 0,	/* MIMP_PROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 225, 0,	/* 225 (abs: 05683) */
/* 05461 */ HB_P_LINEOFFSET, 225,	/* 237 */
	HB_P_LOCALNEARSETINT, 42, 0, 0,	/* I 0*/
/* 05467 */ HB_P_LINEOFFSET, 226,	/* 238 */
	HB_P_LOCALNEARSETINT, 42, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 200, 0,	/* 200 (abs: 05683) */
/* 05486 */ HB_P_LINEOFFSET, 227,	/* 239 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'V', 'l', 'r', '.', 'U', 'n', 'i', 't', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05659 */ HB_P_LINEOFFSET, 228,	/* 240 */
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_QTDPROD */
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MTOT_QTDPROD */
/* 05674 */ HB_P_LINEOFFSET, 229,	/* 241 */
	HB_P_LOCALNEARADDINT, 42, 1, 0,	/* I 1*/
	HB_P_JUMP, 49, 255,	/* -207 (abs: 05473) */
/* 05683 */ HB_P_LINEOFFSET, 231,	/* 243 */
	HB_P_LOCALNEARADDINT, 41, 1, 0,	/* T 1*/
	HB_P_JUMP, 65, 246,	/* -2495 (abs: 03194) */
/* 05692 */ HB_P_LINEOFFSET, 232,	/* 244 */
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05710) */
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 190, 1,	/* 446 (abs: 06156) */
/* 05713 */ HB_P_LINEOFFSET, 233,	/* 245 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* MPAG 1*/
/* 05719 */ HB_P_LINEOFFSET, 234,	/* 246 */
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05734) */
/* 05727 */ HB_P_LINEOFFSET, 235,	/* 247 */
	HB_P_PUSHSYMNEAR, 47,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05734 */ HB_P_LINEOFFSET, 237,	/* 249 */
	HB_P_PUSHSYMNEAR, 48,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 05749 */ HB_P_LINEOFFSET, 238,	/* 250 */
	HB_P_PUSHSYMNEAR, 49,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05763 */ HB_P_LINEOFFSET, 239,	/* 251 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05792 */ HB_P_LINEOFFSET, 240,	/* 252 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', 'o', '.', ' ', 'N', 'o', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05822 */ HB_P_LINEOFFSET, 241,	/* 253 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'N', 'o', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05854 */ HB_P_LINEOFFSET, 242,	/* 254 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'B', 'a', 's', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 05892 */ HB_P_LINEOFFSET, 243,	/* 255 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'I', 'C', 'M', 0, 
	HB_P_DOSHORT, 1,
/* 05930 */ HB_P_LINEOFFSET, 244,	/* 256 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', 's', 't', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05968 */ HB_P_LINEOFFSET, 245,	/* 257 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'I', 'P', 'I', 0, 
	HB_P_DOSHORT, 1,
/* 06006 */ HB_P_LINEOFFSET, 246,	/* 258 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', 't', '.', 'M', 'e', 'r', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06044 */ HB_P_LINEOFFSET, 247,	/* 259 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06103 */ HB_P_LINEOFFSET, 249,	/* 261 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'F', 0, 
	HB_P_DOSHORT, 1,
/* 06133 */ HB_P_LINEOFFSET, 250,	/* 262 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 06156 */ HB_P_LINEOFFSET, 252,	/* 264 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 06191 */ HB_P_LINEOFFSET, 253,	/* 265 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06229 */ HB_P_LINEOFFSET, 254,	/* 266 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 06267 */ HB_P_LINEOFFSET, 255,	/* 267 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 06305 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 06344 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 06383 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 51,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MDIA_NOTA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06421 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06460 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MDIA_ICM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06506 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MDIA_ICMSUB */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06552 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MDIA_IPI */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06598 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MDIA_CUST */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06644 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 06670 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_LOCALNEARSETINT, 39, 0, 0,	/* MDIA_CUST 0*/
	HB_P_PUSHLOCALNEAR, 39,	/* MDIA_CUST */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 30,	/* MDIA_ICMSUB */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 29,	/* MDIA_NOTA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MDIA_IPI */
	HB_P_POPLOCALNEAR, 27,	/* MDIA_ICM */
/* 06690 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06724 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'Q', 'u', 'a', 'n', 't', 'd', '.', 'N', 'o', 't', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06762 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_QTD */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06799 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'd', 'a', 's', ' ', 'N', 'o', 't', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06846 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_NOTA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06894 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'-', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 'C', 'M', 39, 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06946 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_ICM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06994 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'd', 'a', 's', ' ', 'C', 'u', 's', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07041 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MTOT_CUST */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07089 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'I', 'C', 'M', ' ', 'S', 'U', 'B', 'S', 'T', 'I', 'T', 'U', 'T', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07136 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_ICMSUB */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07184 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'-', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'I', 'P', 'I', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07225 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_IPI */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07273 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'P', 'e', 's', 'o', ' ', 'L', 'i', 'q', 'u', 'i', 'd', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07320 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MPESO_LIQ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07369 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'-', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'P', 'e', 's', 'o', ' ', 'B', 'r', 'u', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07417 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPESO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07466 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'Q', 'u', 'a', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07514 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_QTDPROD */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07565 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 07592 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 49,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 07607 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 47,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07615 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHLOCALNEAR, 31,	/* MCUPOM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 07636) */
	HB_P_PUSHLOCALNEAR, 31,	/* MCUPOM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 231, 9,	/* 2535 (abs: 10171) */
/* 07639 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MPAG 0*/
/* 07646 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 38,	/* M_CUPOM */
/* 07654 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 's', 'u', 'm', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ')', ',', 's', 'u', 'm', '(', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ')', ' ', '*', ' ', '(', 'i', 'c', 'm', '/', '1', '0', '0', ')', ')', ',', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'C', 'P', '%', 39, ' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 07867 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_NOTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 07908) */
/* 07879 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', 39, 'C', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 07908 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCOD_NOTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 07974) */
/* 07920 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'A', 'N', 'D', ' ', '(', 'N', 'O', 'T', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 'C', 39, ' ', 'O', 'R', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 07974 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 08027) */
/* 07986 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 08027 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'c', 'a', 'n', 'c', 'e', 'l', ',', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 08129 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_MESSAGE, 42, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 43,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 38, 0,	/* M_CUPOM */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08151 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 216, 7,	/* 2008 (abs: 10171) */
/* 08166 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_LOCALNEARSETINT, 42, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 100, 4,	/* 1124 (abs: 09307) */
/* 08186 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 45,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_PUSHSYMNEAR, 37,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 08208 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 08227) */
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 217, 0,	/* 217 (abs: 08444) */
/* 08230 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* MPAG 1*/
/* 08237 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 08254) */
/* 08246 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 47,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08254 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 48,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 08270 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 49,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08285 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 08315 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', 'o', '.', 'C', 'u', 'p', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 08346 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'C', 'u', 'p', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 08381 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'I', 'C', 'M', 0, 
	HB_P_DOSHORT, 1,
/* 08420 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08444 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08474 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08502 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 165, 0,	/* 165 (abs: 08683) */
/* 08521 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 08542 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 51,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08585 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08637 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'U', 'P', 'O', 'M', ' ', 'C', 'A', 'N', 'C', 'E', 'L', 'A', 'D', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 97,	/* 97 (abs: 08778) */
/* 08683 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 51,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 08726 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08778 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHLOCALNEAR, 36,	/* MCP_NOTA */
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MCP_NOTA */
/* 08794 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHLOCALNEAR, 37,	/* MCP_ICM */
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 37,	/* MCP_ICM */
/* 08810 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHVARIABLE, 19, 0,	/* MIMP_PROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 1,	/* 476 (abs: 09297) */
/* 08824 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_PUSHLOCALNEAR, 42,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 08888 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHLOCALNEAR, 32,	/* MSAI_ENT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 08932) */
/* 08900 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 44,	/* 44 (abs: 08974) */
/* 08932 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHLOCALNEAR, 32,	/* MSAI_ENT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 08974) */
/* 08944 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', 39, 'E', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 08974 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 09027) */
/* 08986 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 40,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 09027 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 34,	/* M_MERC */
/* 09035 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_MESSAGE, 42, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 43,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 34, 0,	/* M_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 09057 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 27,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 230, 0,	/* 230 (abs: 09297) */
/* 09070 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_LOCALNEARSETINT, 41, 0, 0,	/* T 0*/
/* 09077 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_LOCALNEARSETINT, 41, 1, 0,	/* T 1*/
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 203, 0,	/* 203 (abs: 09297) */
/* 09097 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'V', 'l', 'r', '.', 'U', 'n', 'i', 't', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09271 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_QTDPROD */
	HB_P_PUSHLOCALNEAR, 34,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 41,	/* T */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MTOT_QTDPROD */
/* 09287 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_LOCALNEARADDINT, 41, 1, 0,	/* T 1*/
	HB_P_JUMP, 46, 255,	/* -210 (abs: 09084) */
/* 09297 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_LOCALNEARADDINT, 42, 1, 0,	/* I 1*/
	HB_P_JUMP, 149, 251,	/* -1131 (abs: 08173) */
/* 09307 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 09326) */
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 217, 0,	/* 217 (abs: 09543) */
/* 09329 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_LOCALNEARADDINT, 21, 1, 0,	/* MPAG 1*/
/* 09336 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 09353) */
/* 09345 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 47,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09353 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 48,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 09369 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 49,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09384 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09414 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', 'o', '.', 'C', 'u', 'p', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 09445 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'C', 'u', 'p', 'o', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 09480 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'I', 'C', 'M', 0, 
	HB_P_DOSHORT, 1,
/* 09519 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 09543 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09577 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'u', 'p', 'o', 'n', 's', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09625 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_CUPOM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09673 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'o', 't', 'a', 'l', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'C', 'u', 'p', 'o', 'n', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09721 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MCP_NOTA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09769 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'o', 't', 'a', 'l', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 'C', 'M', 39, 'S', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09817 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MCP_ICM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09865 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09899 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'O', 'T', 'A', 'L', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'C', 'U', 'P', 'O', 'M', ' ', '+', ' ', 'N', 'F', 'E', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09957 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MCP_NOTA */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_NOTA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10010 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'O', 'T', 'A', 'L', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'C', 'U', 'P', 'O', 'M', ' ', '+', ' ', 'N', 'F', 'E', ' ', 'D', 'E', ' ', 'I', 'C', 'M', 39, 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 10068 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 50,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MCP_ICM */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_ICM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10121 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 10148 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 49,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 10163 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 47,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10171 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 54,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 10181 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 55,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 55,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 55,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 10223 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 56,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'O', 'T', 'A', '_', 'E', 'M', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 10246 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 57,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 's', 'a', 'i', '_', 'e', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'r', 'e', 'd', 'i', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'a', 't', 'u', 'r', 'e', 'z', 'a', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'i', 'm', 'p', '_', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 'r', 'q', '_', 'p', 'r', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'm', 'p', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'p', 'o', 'r', 't', 'a', '_', 'i', 'm', 'p', 0, 
	HB_P_DOSHORT, 7,
	HB_P_JUMP, 174, 216,	/* -10066 (abs: 00270) */
/* 10339 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 58,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10347 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 10353 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

