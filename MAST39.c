/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <MAST39.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\sismaster\MAST39.PRG /q /oc:\helio\sismaster\MAST39.c /M /N 
 * Created: 2015.01.27 07:45:10 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "MAST39.PRG"

HB_FUNC( MAST39 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MAST39 )
{ "MAST39", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAST39 )}, NULL },
{ "MCOD_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDIA_RE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_RE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "CAR", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "CONS_CAIXA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MAST39 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MAST39
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MAST39 = hb_vm_SymbolInit_MAST39;
   #pragma data_seg()
#endif

HB_FUNC( MAST39 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 34, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'M', 'A', 'S', 'T', '3', '9', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_LOCALNEARSETSTR, 29, 2, 0,	/* MSINTETICO 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 31,	/* M_FINAN */
	HB_P_LOCALNEARSETSTR, 32, 2, 0,	/* MCOM_SEM 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* CONT_CAIXA 0*/
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MTOT_CR 0*/
/* 00051 */ HB_P_LINEOFFSET, 2,	/* 13 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 2,	/* MPAG */
	HB_P_PUSHSYMNEAR, 3,	/* MTIT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 6,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 7,	/* MARQ */
	HB_P_DOSHORT, 7,
	HB_P_POPVARIABLE, 7, 0,	/* MARQ */
	HB_P_POPVARIABLE, 6, 0,	/* MIMP_TIPO */
/* 00087 */ HB_P_LINEOFFSET, 4,	/* 15 */
	HB_P_PUSHSYMNEAR, 10,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'F', 'A', 'T', 'U', 'R', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'O', 'R', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 11, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00146) */
/* 00141 */ HB_P_LINEOFFSET, 5,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00146 */ HB_P_LINEOFFSET, 7,	/* 18 */
	HB_P_PUSHSYMNEAR, 12,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 16,	/* MTRACO */
/* 00161 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_LOCALNEARSETINT, 5, 5, 0,	/* LCI 5*/
/* 00167 */ HB_P_LINEOFFSET, 10,	/* 21 */
	HB_P_LOCALNEARSETINT, 6, 2, 0,	/* CCI 2*/
/* 00173 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_LOCALNEARSETINT, 7, 17, 0,	/* LBA 17*/
/* 00179 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_LOCALNEARSETINT, 8, 48, 0,	/* CBA 48*/
/* 00185 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00214) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00214 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 's', 't', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00244) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00244 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 's', 't', 'c', 'a', 'i', 'x', 'a', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'a', 'i', 'x', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00275) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00275 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_PUSHSYMNEAR, 14,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'F', 'a', 't', 'u', 'r', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00313 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHSYMNEAR, 15,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00326 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_PUSHSYMNEAR, 16,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00365 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_PUSHSYMNEAR, 17,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00373 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00427 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00481 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00535 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'p', 'r', 'e', '-', 'd', 'a', 't', 'a', 'd', 'o', ' ', 'R', '$', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00589 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00643 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00697 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 00765 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'O', 'T', 'A', 'L', ' ', 'D', 'O', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00819 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO_IMP */
/* 00830 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHLOCALNEAR, 1,	/* MDT1 */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00854) */
/* 00838 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHMEMVAR, 21, 0,	/* MDATA1 */
	HB_P_POPLOCALNEAR, 18,	/* MDATA_INI */
/* 00845 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHMEMVAR, 22, 0,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 00877) */
/* 00854 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 23,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_POPLOCALNEAR, 18,	/* MDATA_INI */
/* 00877 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 24, 0,	/* MDIA_RE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 25, 0,	/* MTOT_RE */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MQUANTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
/* 00933 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHMEMVAR, 26, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 15,	/* MDATA */
/* 00940 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_PUSHSYMNEAR, 27,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00950 */ HB_P_LINEOFFSET, 43,	/* 54 */
	HB_P_PUSHLOCALNEAR, 1,	/* MDT1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 171, 9,	/* 2475 (abs: 03431) */
/* 00959 */ HB_P_LINEOFFSET, 44,	/* 55 */
	HB_P_LOCALNEARSETSTR, 29, 2, 0,	/* MSINTETICO 2*/
	'N', 0, 
/* 00967 */ HB_P_LINEOFFSET, 45,	/* 56 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01000 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01033 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01067 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'i', 'n', 't', 'e', 'i', 't', 'c', 'o', ' ', 'p', '/', 'm', 'e', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01101 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01139) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01144) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01186 */ HB_P_LINEOFFSET, 51,	/* 62 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MDATA_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01224) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01229) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	19, 0,	/* MDATA_FIM */
	18, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01274) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01275) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01293 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01346) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 01358) */
	HB_P_PUSHSYMNEAR, 34,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01376 */ HB_P_LINEOFFSET, 53,	/* 64 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MSINTETICO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01415) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01420) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MSINTETICO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01475 */ HB_P_LINEOFFSET, 54,	/* 65 */
	HB_P_PUSHSYMNEAR, 35,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 01497 */ HB_P_LINEOFFSET, 55,	/* 66 */
	HB_P_PUSHSYMNEAR, 36,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01521) */
/* 01509 */ HB_P_LINEOFFSET, 56,	/* 67 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01516 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01521 */ HB_P_LINEOFFSET, 59,	/* 70 */
	HB_P_PUSHSYMNEAR, 38,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '3', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 01579) */
/* 01540 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 't', 'i', 'r', 'a', 'd', 'a', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 32,	/* MCOM_SEM */
/* 01579 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_PUSHSYMNEAR, 40,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01614 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHSYMNEAR, 41,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 42,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01633 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 43,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01640 */ HB_P_LINEOFFSET, 68,	/* 79 */
	HB_P_PUSHSYMNEAR, 44,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 01680) */
/* 01649 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHSYMNEAR, 45,	/* CAR */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* CODIGO */
	HB_P_PUSHSYMNEAR, 45,	/* CAR */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* CARTAO */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 01670 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 218,	/* -38 (abs: 01640) */
/* 01680 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 49, 0,	/* CONS_CAIXA */
/* 01688 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 51, 0,	/* CCOMM */
/* 01766 */ HB_P_LINEOFFSET, 74,	/* 85 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 01822) */
/* 01778 */ HB_P_LINEOFFSET, 75,	/* 86 */
	HB_P_PUSHVARIABLE, 51, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 51, 0,	/* CCOMM */
/* 01822 */ HB_P_LINEOFFSET, 77,	/* 88 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MCOM_SEM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 01864) */
/* 01833 */ HB_P_LINEOFFSET, 78,	/* 89 */
	HB_P_PUSHVARIABLE, 51, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'A', 'N', 'D', ' ', 'c', '_', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MCOM_SEM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 51, 0,	/* CCOMM */
/* 01864 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_PUSHVARIABLE, 51, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'H', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'T', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'D', 'U', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'D', 'N', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'F', 'I', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'R', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'R', 'E', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 51, 0,	/* CCOMM */
/* 01984 */ HB_P_LINEOFFSET, 81,	/* 92 */
	HB_P_PUSHVARIABLE, 51, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'p', '_', 'm', 'o', 'v', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 't', 'p', '_', 'm', 'o', 'v', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 51, 0,	/* CCOMM */
/* 02047 */ HB_P_LINEOFFSET, 82,	/* 93 */
	HB_P_MESSAGE, 53, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 54,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 51, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 49, 0,	/* CONS_CAIXA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02068 */ HB_P_LINEOFFSET, 83,	/* 94 */
	HB_P_PUSHSYMNEAR, 55,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 02129) */
/* 02082 */ HB_P_LINEOFFSET, 84,	/* 95 */
	HB_P_PUSHSYMNEAR, 56,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 235, 248,	/* -1813 (abs: 00313) */
/* 02129 */ HB_P_LINEOFFSET, 87,	/* 98 */
	HB_P_PUSHSYMNEAR, 16,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 6,
/* 02191 */ HB_P_LINEOFFSET, 88,	/* 99 */
	HB_P_PUSHSYMNEAR, 17,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02199 */ HB_P_LINEOFFSET, 89,	/* 100 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02253 */ HB_P_LINEOFFSET, 90,	/* 101 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02307 */ HB_P_LINEOFFSET, 91,	/* 102 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02361 */ HB_P_LINEOFFSET, 92,	/* 103 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'p', 'r', 'e', '-', 'd', 'a', 't', 'a', 'd', 'o', ' ', 'R', '$', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02415 */ HB_P_LINEOFFSET, 93,	/* 104 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02469 */ HB_P_LINEOFFSET, 95,	/* 106 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02523 */ HB_P_LINEOFFSET, 96,	/* 107 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 02591 */ HB_P_LINEOFFSET, 97,	/* 108 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'O', 'T', 'A', 'L', ' ', 'D', 'O', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02645 */ HB_P_LINEOFFSET, 98,	/* 109 */
	HB_P_PUSHSYMNEAR, 40,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02680 */ HB_P_LINEOFFSET, 99,	/* 110 */
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* CONT_CAIXA 0*/
/* 02686 */ HB_P_LINEOFFSET, 100,	/* 111 */
	HB_P_LOCALNEARSETINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 55,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 146, 2,	/* 658 (abs: 03361) */
/* 02706 */ HB_P_LINEOFFSET, 101,	/* 112 */
	HB_P_PUSHSYMNEAR, 58,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 02729 */ HB_P_LINEOFFSET, 102,	/* 113 */
	HB_P_PUSHSYMNEAR, 17,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02738 */ HB_P_LINEOFFSET, 103,	/* 114 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02778) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 02839) */
/* 02780 */ HB_P_LINEOFFSET, 104,	/* 115 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
/* 02796 */ HB_P_LINEOFFSET, 105,	/* 116 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 4, 2,	/* 516 (abs: 03352) */
/* 02839 */ HB_P_LINEOFFSET, 106,	/* 117 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02879) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 02940) */
/* 02881 */ HB_P_LINEOFFSET, 107,	/* 118 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
/* 02897 */ HB_P_LINEOFFSET, 108,	/* 119 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 159, 1,	/* 415 (abs: 03352) */
/* 02940 */ HB_P_LINEOFFSET, 109,	/* 120 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 03101) */
/* 02960 */ HB_P_LINEOFFSET, 110,	/* 121 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
/* 02976 */ HB_P_LINEOFFSET, 111,	/* 122 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 02982 */ HB_P_LINEOFFSET, 112,	/* 123 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03022 */ HB_P_LINEOFFSET, 113,	/* 124 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 55,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 58, 1,	/* 314 (abs: 03352) */
/* 03041 */ HB_P_LINEOFFSET, 114,	/* 125 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 03093) */
/* 03062 */ HB_P_LINEOFFSET, 115,	/* 126 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 6, 1,	/* 262 (abs: 03352) */
/* 03093 */ HB_P_LINEOFFSET, 118,	/* 129 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 03028) */
/* 03101 */ HB_P_LINEOFFSET, 119,	/* 130 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 03136) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03197) */
/* 03138 */ HB_P_LINEOFFSET, 120,	/* 131 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
/* 03154 */ HB_P_LINEOFFSET, 121,	/* 132 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 158, 0,	/* 158 (abs: 03352) */
/* 03197 */ HB_P_LINEOFFSET, 122,	/* 133 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 03274) */
/* 03216 */ HB_P_LINEOFFSET, 123,	/* 134 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
/* 03232 */ HB_P_LINEOFFSET, 124,	/* 135 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 03352) */
/* 03274 */ HB_P_LINEOFFSET, 125,	/* 136 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03352) */
/* 03293 */ HB_P_LINEOFFSET, 126,	/* 137 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MTOT_RE */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 25, 0,	/* MTOT_RE */
/* 03311 */ HB_P_LINEOFFSET, 127,	/* 138 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MTOT_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03352 */ HB_P_LINEOFFSET, 134,	/* 145 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_JUMP, 102, 253,	/* -666 (abs: 02692) */
/* 03361 */ HB_P_LINEOFFSET, 135,	/* 146 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 25, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03423 */ HB_P_LINEOFFSET, 136,	/* 147 */
	HB_P_PUSHSYMNEAR, 17,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03431 */ HB_P_LINEOFFSET, 138,	/* 149 */
	HB_P_PUSHSYMNEAR, 40,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'P', 'r', 'e', 's', 's', 'i', 'o', 'n', 'e', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 't', 'e', 'c', 'l', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 03480 */ HB_P_LINEOFFSET, 139,	/* 150 */
	HB_P_PUSHSYMNEAR, 60,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 03488 */ HB_P_LINEOFFSET, 140,	/* 151 */
	HB_P_PUSHSYMNEAR, 61,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'A', 'T', 'U', 'R', 'A', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03518) */
	HB_P_JUMP, 126, 243,	/* -3202 (abs: 00313) */
/* 03518 */ HB_P_LINEOFFSET, 143,	/* 154 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 2, 0,	/* MPAG */
/* 03524 */ HB_P_LINEOFFSET, 144,	/* 155 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'A', 'T', 'U', 'R', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 03543 */ HB_P_LINEOFFSET, 145,	/* 156 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03598) */
/* 03555 */ HB_P_LINEOFFSET, 146,	/* 157 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', '-', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 03598 */ HB_P_LINEOFFSET, 148,	/* 159 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 03638 */ HB_P_LINEOFFSET, 150,	/* 161 */
	HB_P_PUSHSYMNEAR, 62,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 03654 */ HB_P_LINEOFFSET, 152,	/* 163 */
	HB_P_PUSHSYMNEAR, 63,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03668 */ HB_P_LINEOFFSET, 153,	/* 164 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03697 */ HB_P_LINEOFFSET, 154,	/* 165 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03727 */ HB_P_LINEOFFSET, 155,	/* 166 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'h', 'e', 'q', 'u', 'e', ' ', 'A', 'v', 'i', 's', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03762 */ HB_P_LINEOFFSET, 156,	/* 167 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'h', 'q', '.', 'P', 'r', 'e', '-', 'D', 'a', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03798 */ HB_P_LINEOFFSET, 157,	/* 168 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03826 */ HB_P_LINEOFFSET, 158,	/* 169 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03857 */ HB_P_LINEOFFSET, 160,	/* 171 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'R', 'e', 'c', '.', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03892 */ HB_P_LINEOFFSET, 161,	/* 172 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'D', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03932 */ HB_P_LINEOFFSET, 162,	/* 173 */
	HB_P_PUSHSYMNEAR, 63,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 03946 */ HB_P_LINEOFFSET, 163,	/* 174 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03969 */ HB_P_LINEOFFSET, 165,	/* 176 */
	HB_P_LOCALNEARSETINT, 27, 0, 0,	/* MTOT_FIN 0*/
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
/* 03991 */ HB_P_LINEOFFSET, 166,	/* 177 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDATA_AUX */
/* 04003 */ HB_P_LINEOFFSET, 167,	/* 178 */
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 30,	/* MMES */
/* 04029 */ HB_P_LINEOFFSET, 168,	/* 179 */
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* CONT_CAIXA 0*/
/* 04035 */ HB_P_LINEOFFSET, 169,	/* 180 */
	HB_P_LOCALNEARSETINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 55,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 75, 8,	/* 2123 (abs: 06175) */
/* 04055 */ HB_P_LINEOFFSET, 170,	/* 181 */
	HB_P_PUSHLOCALNEAR, 29,	/* MSINTETICO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 61, 3,	/* 829 (abs: 04893) */
/* 04067 */ HB_P_LINEOFFSET, 171,	/* 182 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDATA_AUX */
/* 04080 */ HB_P_LINEOFFSET, 172,	/* 183 */
	HB_P_PUSHLOCALNEAR, 26,	/* MDATA_AUX */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 179, 1,	/* 435 (abs: 04529) */
/* 04097 */ HB_P_LINEOFFSET, 173,	/* 184 */
	HB_P_PUSHSYMNEAR, 58,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04120 */ HB_P_LINEOFFSET, 174,	/* 185 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 04160) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 04197) */
/* 04162 */ HB_P_LINEOFFSET, 175,	/* 186 */
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_CH_P */
/* 04178 */ HB_P_LINEOFFSET, 176,	/* 187 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_JUMP, 57, 1,	/* 313 (abs: 04507) */
/* 04197 */ HB_P_LINEOFFSET, 177,	/* 188 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 04237) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 04274) */
/* 04239 */ HB_P_LINEOFFSET, 178,	/* 189 */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MDIA_CH */
/* 04255 */ HB_P_LINEOFFSET, 179,	/* 190 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_JUMP, 236, 0,	/* 236 (abs: 04507) */
/* 04274 */ HB_P_LINEOFFSET, 180,	/* 191 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 04328) */
/* 04293 */ HB_P_LINEOFFSET, 181,	/* 192 */
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MDIA_CART */
/* 04309 */ HB_P_LINEOFFSET, 182,	/* 193 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_JUMP, 182, 0,	/* 182 (abs: 04507) */
/* 04328 */ HB_P_LINEOFFSET, 183,	/* 194 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 04363) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 04399) */
/* 04365 */ HB_P_LINEOFFSET, 184,	/* 195 */
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MDIA_DUP */
/* 04381 */ HB_P_LINEOFFSET, 185,	/* 196 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_JUMPNEAR, 110,	/* 110 (abs: 04507) */
/* 04399 */ HB_P_LINEOFFSET, 186,	/* 197 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 04452) */
/* 04418 */ HB_P_LINEOFFSET, 187,	/* 198 */
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MDIA_DIN */
/* 04434 */ HB_P_LINEOFFSET, 188,	/* 199 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 04507) */
/* 04452 */ HB_P_LINEOFFSET, 189,	/* 200 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 04507) */
/* 04471 */ HB_P_LINEOFFSET, 190,	/* 201 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MDIA_RE */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MDIA_RE */
/* 04489 */ HB_P_LINEOFFSET, 191,	/* 202 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MTOT_RE */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 25, 0,	/* MTOT_RE */
/* 04507 */ HB_P_LINEOFFSET, 193,	/* 204 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
/* 04513 */ HB_P_LINEOFFSET, 194,	/* 205 */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 55,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 66, 254,	/* -446 (abs: 04080) */
/* 04529 */ HB_P_LINEOFFSET, 198,	/* 209 */
	HB_P_LOCALNEARADDINT, 34, 255, 255,	/* CONT_CAIXA -1*/
/* 04535 */ HB_P_LINEOFFSET, 199,	/* 210 */
	HB_P_PUSHSYMNEAR, 63,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04549 */ HB_P_LINEOFFSET, 200,	/* 211 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDATA_AUX */
	HB_P_DOSHORT, 1,
/* 04572 */ HB_P_LINEOFFSET, 201,	/* 212 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04614 */ HB_P_LINEOFFSET, 202,	/* 213 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04656 */ HB_P_LINEOFFSET, 203,	/* 214 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04698 */ HB_P_LINEOFFSET, 204,	/* 215 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04740 */ HB_P_LINEOFFSET, 205,	/* 216 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04782 */ HB_P_LINEOFFSET, 206,	/* 217 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MDIA_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04825 */ HB_P_LINEOFFSET, 207,	/* 218 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 24, 0,	/* MDIA_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 116, 3,	/* 884 (abs: 05774) */
/* 04893 */ HB_P_LINEOFFSET, 209,	/* 220 */
	HB_P_PUSHLOCALNEAR, 30,	/* MMES */
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 206, 1,	/* 462 (abs: 05383) */
/* 04924 */ HB_P_LINEOFFSET, 210,	/* 221 */
	HB_P_PUSHSYMNEAR, 58,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04947 */ HB_P_LINEOFFSET, 211,	/* 222 */
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 30,	/* MMES */
/* 04974 */ HB_P_LINEOFFSET, 212,	/* 223 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 05014) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 05051) */
/* 05016 */ HB_P_LINEOFFSET, 213,	/* 224 */
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_CH_P */
/* 05032 */ HB_P_LINEOFFSET, 214,	/* 225 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_JUMP, 57, 1,	/* 313 (abs: 05361) */
/* 05051 */ HB_P_LINEOFFSET, 215,	/* 226 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 05091) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 05128) */
/* 05093 */ HB_P_LINEOFFSET, 216,	/* 227 */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MDIA_CH */
/* 05109 */ HB_P_LINEOFFSET, 217,	/* 228 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_JUMP, 236, 0,	/* 236 (abs: 05361) */
/* 05128 */ HB_P_LINEOFFSET, 218,	/* 229 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 05182) */
/* 05147 */ HB_P_LINEOFFSET, 219,	/* 230 */
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MDIA_CART */
/* 05163 */ HB_P_LINEOFFSET, 220,	/* 231 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_JUMP, 182, 0,	/* 182 (abs: 05361) */
/* 05182 */ HB_P_LINEOFFSET, 221,	/* 232 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 05217) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 05253) */
/* 05219 */ HB_P_LINEOFFSET, 222,	/* 233 */
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MDIA_DUP */
/* 05235 */ HB_P_LINEOFFSET, 223,	/* 234 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_JUMPNEAR, 110,	/* 110 (abs: 05361) */
/* 05253 */ HB_P_LINEOFFSET, 224,	/* 235 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 05306) */
/* 05272 */ HB_P_LINEOFFSET, 225,	/* 236 */
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MDIA_DIN */
/* 05288 */ HB_P_LINEOFFSET, 226,	/* 237 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 05361) */
/* 05306 */ HB_P_LINEOFFSET, 227,	/* 238 */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 05361) */
/* 05325 */ HB_P_LINEOFFSET, 228,	/* 239 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MDIA_RE */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MDIA_RE */
/* 05343 */ HB_P_LINEOFFSET, 229,	/* 240 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MTOT_RE */
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 25, 0,	/* MTOT_RE */
/* 05361 */ HB_P_LINEOFFSET, 231,	/* 242 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
/* 05367 */ HB_P_LINEOFFSET, 232,	/* 243 */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 55,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 25, 254,	/* -487 (abs: 04893) */
/* 05383 */ HB_P_LINEOFFSET, 236,	/* 247 */
	HB_P_LOCALNEARADDINT, 34, 255, 255,	/* CONT_CAIXA -1*/
/* 05389 */ HB_P_LINEOFFSET, 237,	/* 248 */
	HB_P_PUSHSYMNEAR, 63,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05403 */ HB_P_LINEOFFSET, 238,	/* 249 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MMES */
	HB_P_DOSHORT, 1,
/* 05426 */ HB_P_LINEOFFSET, 239,	/* 250 */
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 30,	/* MMES */
/* 05453 */ HB_P_LINEOFFSET, 240,	/* 251 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05495 */ HB_P_LINEOFFSET, 241,	/* 252 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05537 */ HB_P_LINEOFFSET, 242,	/* 253 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05579 */ HB_P_LINEOFFSET, 243,	/* 254 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05621 */ HB_P_LINEOFFSET, 244,	/* 255 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05663 */ HB_P_LINEOFFSET, 245,	/* 256 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MDIA_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05706 */ HB_P_LINEOFFSET, 246,	/* 257 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 24, 0,	/* MDIA_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05774 */ HB_P_LINEOFFSET, 249,	/* 260 */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* MDIA_FIN 0*/
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_POPLOCALNEAR, 20,	/* MDIA_DIN */
/* 05796 */ HB_P_LINEOFFSET, 250,	/* 261 */
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 103, 1,	/* 359 (abs: 06165) */
/* 05809 */ HB_P_LINEOFFSET, 251,	/* 262 */
	HB_P_PUSHSYMNEAR, 68,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05816 */ HB_P_LINEOFFSET, 252,	/* 263 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* MPAG */
/* 05825 */ HB_P_LINEOFFSET, 253,	/* 264 */
	HB_P_PUSHSYMNEAR, 62,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 05841 */ HB_P_LINEOFFSET, 254,	/* 265 */
	HB_P_PUSHSYMNEAR, 63,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05855 */ HB_P_LINEOFFSET, 255,	/* 266 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05884 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05915 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'h', 'e', 'q', 'u', 'e', ' ', 'A', 'v', 'i', 's', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05951 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'h', 'q', '.', 'P', 'r', 'e', '-', 'D', 'a', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05988 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 06017 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 06049 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'R', 'e', 'c', '.', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 06085 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'D', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 06126 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 63,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06141 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 06165 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_JUMP, 173, 247,	/* -2131 (abs: 04041) */
/* 06175 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 06223) */
/* 06188 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 68,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06196 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* MPAG */
/* 06206 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 62,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 06223 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 63,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06238 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06277 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06313 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06349 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06385 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06421 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06457 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06494 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'O', 'T', 'A', 'L', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06529 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06572 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06615 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06658 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06701 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06744 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MTOT_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06788 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 25, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06854 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 55,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 84, 1,	/* 340 (abs: 07206) */
/* 06869 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', 'S', ' ', 'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 06945 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 06952 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 55,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 07078) */
/* 06971 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07019 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 07069 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 139,	/* -117 (abs: 06959) */
/* 07078 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 07118 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07168 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 07206 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 68,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07214 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 69,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 07224 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 70,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 70,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 70,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 07266 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 71,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'A', 'T', 'U', 'R', 'A', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 07288 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07296 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 07302 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

