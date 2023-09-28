/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <master_dbf.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\master_dbf.prg /q /oc:\HTI\sismaster\master_dbf.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.27 10:14:48 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "master_dbf.prg"

HB_FUNC( MASTER_DBF );
HB_FUNC( ALT_TB );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_BEGINTRANSACTION );
HB_FUNC_EXTERN( SR_COMMITTRANSACTION );
HB_FUNC_EXTERN( TRACELOG );
HB_FUNC_EXTERN( VALTOPRG );
HB_FUNC_EXTERN( SR_ROLLBACKTRANSACTION );
HB_FUNC_EXTERN( SR_ENDTRANSACTION );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_MASTER_DBF )
{ "MASTER_DBF", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MASTER_DBF )}, NULL },
{ "MDATA_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MATUALIZA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTELA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_VER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MATUAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTELA_BKP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_ARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_ARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMENSAGEM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMOV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_MOV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_MAT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MATRIZ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_CAIX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCAIX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_PROD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDATA_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "ALT_TB", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ALT_TB )}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVERSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SLINHAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "SR_BEGINTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_BEGINTRANSACTION )}, NULL },
{ "SR_COMMITTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_COMMITTRANSACTION )}, NULL },
{ "E", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRACELOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRACELOG )}, NULL },
{ "VALTOPRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTOPRG )}, NULL },
{ "SR_ROLLBACKTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ROLLBACKTRANSACTION )}, NULL },
{ "SR_ENDTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ENDTRANSACTION )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_MASTER_DBF )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_MASTER_DBF
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_MASTER_DBF = hb_vm_SymbolInit_MASTER_DBF;
   #pragma data_seg()
#endif

HB_FUNC( MASTER_DBF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 2, 11, 0,	/* MPRG 11*/
	'M', 'A', 'S', 'T', 'E', 'R', '_', 'D', 'B', 'F', 0, 
/* 00021 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 20,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MDATA_MERC */
	HB_P_PUSHSYMNEAR, 2,	/* MATUALIZA */
	HB_P_PUSHSYMNEAR, 3,	/* MMERC */
	HB_P_PUSHSYMNEAR, 4,	/* MTELA */
	HB_P_PUSHSYMNEAR, 5,	/* MDATA_VER */
	HB_P_PUSHSYMNEAR, 6,	/* MATUAL */
	HB_P_PUSHSYMNEAR, 7,	/* MTELA_BKP */
	HB_P_PUSHSYMNEAR, 8,	/* MDATA_ARQ */
	HB_P_PUSHSYMNEAR, 9,	/* MNOME_ARQ */
	HB_P_PUSHSYMNEAR, 10,	/* MMENSAGEM */
	HB_P_PUSHSYMNEAR, 11,	/* MMOV */
	HB_P_PUSHSYMNEAR, 12,	/* MDATA_MOV */
	HB_P_PUSHSYMNEAR, 13,	/* ARET */
	HB_P_PUSHSYMNEAR, 14,	/* M_MAT */
	HB_P_PUSHSYMNEAR, 15,	/* MATRIZ */
	HB_P_PUSHSYMNEAR, 16,	/* MDATA_CAIX */
	HB_P_PUSHSYMNEAR, 17,	/* MCAIX */
	HB_P_PUSHSYMNEAR, 18,	/* I */
	HB_P_PUSHSYMNEAR, 19,	/* CONS_PROD */
	HB_P_DOSHORT, 19,
	HB_P_POPVARIABLE, 19, 0,	/* CONS_PROD */
	HB_P_POPVARIABLE, 18, 0,	/* I */
	HB_P_POPVARIABLE, 15, 0,	/* MATRIZ */
	HB_P_POPVARIABLE, 14, 0,	/* M_MAT */
	HB_P_POPVARIABLE, 13, 0,	/* ARET */
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_POPVARIABLE, 9, 0,	/* MNOME_ARQ */
/* 00106 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00126) */
/* 00121 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00126 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'0', '2', '/', '0', '2', '/', '2', '0', '1', '5', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 16, 0,	/* MDATA_CAIX */
/* 00149 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'0', '8', '/', '1', '0', '/', '2', '0', '1', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 23, 0,	/* MDATA_SET */
/* 00172 */ HB_P_LINEOFFSET, 10,	/* 15 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'1', '1', '/', '0', '2', '/', '2', '0', '2', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 12, 0,	/* MDATA_MOV */
/* 00195 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'0', '7', '/', '0', '6', '/', '2', '0', '2', '2', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* MDATA_MERC */
/* 00218 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'r', 'q', 'u', 'i', 'v', 'o', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 00263) */
/* 00235 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 17, 0,	/* MCAIX */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 24, 0,	/* MSET */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MMOV */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 3, 0,	/* MMERC */
	HB_P_POPVARIABLE, 2, 0,	/* MATUALIZA */
	HB_P_JUMP, 240, 0,	/* 240 (abs: 00500) */
/* 00263 */ HB_P_LINEOFFSET, 15,	/* 20 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 17, 0,	/* MCAIX */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 24, 0,	/* MSET */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MMOV */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 3, 0,	/* MMERC */
	HB_P_POPVARIABLE, 2, 0,	/* MATUALIZA */
/* 00288 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 00322) */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 00340) */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'7', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 00419) */
/* 00342 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '2', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MDATA_VER */
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 00500) */
/* 00419 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '2', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MDATA_VER */
/* 00500 */ HB_P_LINEOFFSET, 23,	/* 28 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 12, 0,	/* MDATA_MOV */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00522) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MMOV */
	HB_P_POPVARIABLE, 2, 0,	/* MATUALIZA */
/* 00522 */ HB_P_LINEOFFSET, 24,	/* 29 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 23, 0,	/* MDATA_SET */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00544) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 24, 0,	/* MSET */
	HB_P_POPVARIABLE, 2, 0,	/* MATUALIZA */
/* 00544 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 16, 0,	/* MDATA_CAIX */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00566) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 17, 0,	/* MCAIX */
	HB_P_POPVARIABLE, 2, 0,	/* MATUALIZA */
/* 00566 */ HB_P_LINEOFFSET, 26,	/* 31 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 1, 0,	/* MDATA_MERC */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00588) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 3, 0,	/* MMERC */
	HB_P_POPVARIABLE, 2, 0,	/* MATUALIZA */
/* 00588 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MATUALIZA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 96, 4,	/* 1120 (abs: 01718) */
/* 00601 */ HB_P_LINEOFFSET, 28,	/* 33 */
	HB_P_PUSHSYMNEAR, 28,	/* ALT_TB */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00608 */ HB_P_LINEOFFSET, 29,	/* 34 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MMERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 2,	/* 521 (abs: 01139) */
/* 00621 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'M', 'A', 'S', 'T', 'P', 'R', 'O', 'D', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 00679 */ HB_P_LINEOFFSET, 31,	/* 36 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 00723 */ HB_P_LINEOFFSET, 32,	/* 37 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'A', ' ', 'L', ' ', 'T', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 00776 */ HB_P_LINEOFFSET, 33,	/* 38 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'P', 'O', 'R', 'T', 'A', ' ', '-', ' ', 'N', ' ', '-', ' ', '2', ',', '0', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 00827 */ HB_P_LINEOFFSET, 34,	/* 39 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', '-', ' ', 'C', 'H', 'A', 'R', ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 00893 */ HB_P_LINEOFFSET, 35,	/* 40 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', 'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 00947 */ HB_P_LINEOFFSET, 36,	/* 41 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'C', 'O', 'D', '_', 'P', 'R', 'O', 'D', ' ', '-', ' ', 'C', 'H', 'A', 'R', ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01011 */ HB_P_LINEOFFSET, 37,	/* 42 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', 'N', 'T', ' ', 'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01067 */ HB_P_LINEOFFSET, 38,	/* 43 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', '-', ' ', 'C', 'H', 'A', 'R', ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'N', 'T', 'E', 'G', 'E', 'R', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01129 */ HB_P_LINEOFFSET, 39,	/* 44 */
	HB_P_PUSHSYMNEAR, 30,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01139 */ HB_P_LINEOFFSET, 41,	/* 46 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MMOV */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 65, 1,	/* 321 (abs: 01470) */
/* 01152 */ HB_P_LINEOFFSET, 42,	/* 47 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01209 */ HB_P_LINEOFFSET, 43,	/* 48 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01253 */ HB_P_LINEOFFSET, 44,	/* 49 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', ' ', 'A', ' ', 'L', ' ', 'T', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'R', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01314 */ HB_P_LINEOFFSET, 45,	/* 50 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'q', 't', 'd', ' ', 'N', ' ', '1', '2', ',', '3', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01359 */ HB_P_LINEOFFSET, 46,	/* 51 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'M', 'A', 'S', 'T', 'M', 'O', 'V', ' ', ' ', 'M', 'O', 'V', 'E', 'R', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01412 */ HB_P_LINEOFFSET, 47,	/* 52 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', ' ', ' ', ' ', '<', '<', ' ', 'P', 'o', 's', 'i', 'c', 'a', 'o', ' ', '2', '3', ' ', '-', '>', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01460 */ HB_P_LINEOFFSET, 48,	/* 53 */
	HB_P_PUSHSYMNEAR, 30,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01470 */ HB_P_LINEOFFSET, 50,	/* 55 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MSET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 114,	/* 114 (abs: 01594) */
/* 01482 */ HB_P_LINEOFFSET, 51,	/* 56 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01540 */ HB_P_LINEOFFSET, 52,	/* 57 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01584 */ HB_P_LINEOFFSET, 53,	/* 58 */
	HB_P_PUSHSYMNEAR, 30,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01594 */ HB_P_LINEOFFSET, 55,	/* 60 */
	HB_P_PUSHVARIABLE, 17, 0,	/* MCAIX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 114,	/* 114 (abs: 01718) */
/* 01606 */ HB_P_LINEOFFSET, 56,	/* 61 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01664 */ HB_P_LINEOFFSET, 57,	/* 62 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 10, 0,	/* MMENSAGEM */
/* 01708 */ HB_P_LINEOFFSET, 58,	/* 63 */
	HB_P_PUSHSYMNEAR, 30,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01718 */ HB_P_LINEOFFSET, 62,	/* 67 */
	HB_P_PUSHSYMNEAR, 31,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* M_CFG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 88, 3,	/* 856 (abs: 02586) */
/* 01733 */ HB_P_LINEOFFSET, 63,	/* 68 */
	HB_P_PUSHSYMNEAR, 32,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 01756 */ HB_P_LINEOFFSET, 66,	/* 71 */
	HB_P_PUSHSYMNEAR, 33,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 34, 0,	/* MARQ */
/* 01782 */ HB_P_LINEOFFSET, 83,	/* 88 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '1', ' ', 'C', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 'D', 'a', 'd', 'o', 's', '=', 0, 
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '2', ' ', 'C', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '3', ' ', 'C', ' ', 'm', 'd', '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '4', ' ', 'N', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'i', 's', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '5', ' ', 'C', ' ', 'P', 'o', 'r', 't', 'a', ' ', 'C', 'o', 'z', 'i', 'n', 'h', 'a', ' ', '(', 'P', 'r', 'o', 'd', '.', ')', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '6', ' ', 'C', ' ', 'P', 'o', 'r', 't', 'a', ' ', 'B', 'a', 'r', ' ', ' ', ' ', ' ', ' ', '(', 'P', 'r', 'o', 'd', '.', ')', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '7', ' ', 'C', ' ', 'P', 'o', 'r', 't', 'a', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', '(', 'P', 'r', 'o', 'd', '.', ')', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '8', ' ', 'C', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'a', 'r', 'q', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '9', ' ', 'C', ' ', 'P', 'o', 'r', 't', 'a', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '0', ' ', 'N', ' ', 'Q', 't', 'd', '.', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'p', '/', 'C', 'o', 'r', 't', 'e', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '1', ' ', 'C', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'F', 'o', 't', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '2', ' ', 'C', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'G', 'e', 'r', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '3', ' ', 'C', ' ', 'V', 'e', 'r', 's', 'a', 'o', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 35, 0,	/* MVERSAO */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '4', ' ', 'C', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'T', 'e', 'l', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '5', ' ', 'C', ' ', 'I', 'P', ' ', 'D', 'O', ' ', 'A', 'C', 'B', 'R', ' ', '(', 34, 'i', 'p', 34, ':', '3', '4', '3', '4', ')', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '6', ' ', 'C', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'N', 'F', 'E', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 29, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '7', ' ', 'C', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'C', 'B', 'R', 'M', 'O', 'N', 'I', 'T', 'O', 'R', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 37, 0,	/* SLINHAS */
/* 02555 */ HB_P_LINEOFFSET, 84,	/* 89 */
	HB_P_PUSHSYMNEAR, 38,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* MARQ */
	HB_P_PUSHMEMVARREF, 37, 0,	/* SLINHAS */
	HB_P_PUSHSYMNEAR, 31,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 37, 0,	/* SLINHAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 3,
/* 02576 */ HB_P_LINEOFFSET, 85,	/* 90 */
	HB_P_PUSHSYMNEAR, 32,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 02586 */ HB_P_LINEOFFSET, 88,	/* 93 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'S', 'E', 'T', ' ', 'v', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* MVERSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02639 */ HB_P_LINEOFFSET, 89,	/* 94 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02663 */ HB_P_LINEOFFSET, 90,	/* 95 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02668 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( ALT_TB )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 101, 0,	/* 101 */
	HB_P_PUSHSYMNEAR, 42,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00008 */ HB_P_LINEOFFSET, 1,	/* 102 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MMERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 158, 3,	/* 926 (abs: 00944) */
	HB_P_TRYBEGIN, 74, 0, 0,	/* 74 (abs: 00000095) */
/* 00025 */ HB_P_LINEOFFSET, 3,	/* 104 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'g', 'r', 'u', 'p', 'o', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00084 */ HB_P_LINEOFFSET, 4,	/* 105 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00091 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000121) */
/* 00095 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000095) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00102 */ HB_P_LINEOFFSET, 6,	/* 107 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00114 */ HB_P_LINEOFFSET, 7,	/* 108 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 80, 0, 0,	/* 80 (abs: 00000201) */
/* 00125 */ HB_P_LINEOFFSET, 10,	/* 111 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 'e', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00190 */ HB_P_LINEOFFSET, 11,	/* 112 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00197 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000227) */
/* 00201 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000201) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00208 */ HB_P_LINEOFFSET, 13,	/* 114 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00220 */ HB_P_LINEOFFSET, 14,	/* 115 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 81, 0, 0,	/* 81 (abs: 00000308) */
/* 00231 */ HB_P_LINEOFFSET, 17,	/* 118 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 'e', '1', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00297 */ HB_P_LINEOFFSET, 18,	/* 119 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00304 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000334) */
/* 00308 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000308) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00315 */ HB_P_LINEOFFSET, 20,	/* 121 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00327 */ HB_P_LINEOFFSET, 21,	/* 122 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 78, 0, 0,	/* 78 (abs: 00000412) */
/* 00338 */ HB_P_LINEOFFSET, 24,	/* 125 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'm', 'i', 'n', 'i', 'm', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00401 */ HB_P_LINEOFFSET, 25,	/* 126 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00408 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000438) */
/* 00412 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000412) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00419 */ HB_P_LINEOFFSET, 27,	/* 128 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00431 */ HB_P_LINEOFFSET, 28,	/* 129 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 78, 0, 0,	/* 78 (abs: 00000516) */
/* 00442 */ HB_P_LINEOFFSET, 31,	/* 132 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'm', 'a', 'x', 'i', 'm', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '3', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00505 */ HB_P_LINEOFFSET, 32,	/* 133 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00512 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000542) */
/* 00516 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000516) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00523 */ HB_P_LINEOFFSET, 34,	/* 135 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00535 */ HB_P_LINEOFFSET, 35,	/* 136 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 72, 0, 0,	/* 72 (abs: 00000614) */
/* 00546 */ HB_P_LINEOFFSET, 38,	/* 139 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'n', 'c', 'm', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00603 */ HB_P_LINEOFFSET, 39,	/* 140 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00610 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000640) */
/* 00614 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000614) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00621 */ HB_P_LINEOFFSET, 41,	/* 142 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00633 */ HB_P_LINEOFFSET, 42,	/* 143 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 72, 0, 0,	/* 72 (abs: 00000712) */
/* 00644 */ HB_P_LINEOFFSET, 45,	/* 146 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'c', 's', 't', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '4', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00701 */ HB_P_LINEOFFSET, 46,	/* 147 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00708 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000738) */
/* 00712 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000712) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00719 */ HB_P_LINEOFFSET, 48,	/* 149 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00731 */ HB_P_LINEOFFSET, 49,	/* 150 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 78, 0, 0,	/* 78 (abs: 00000816) */
/* 00742 */ HB_P_LINEOFFSET, 53,	/* 154 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'C', 'O', 'D', 'B', 'A', 'R', 'R', 'A', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00805 */ HB_P_LINEOFFSET, 54,	/* 155 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00812 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000842) */
/* 00816 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000816) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00823 */ HB_P_LINEOFFSET, 56,	/* 157 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00835 */ HB_P_LINEOFFSET, 57,	/* 158 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 76, 0, 0,	/* 76 (abs: 00000918) */
/* 00846 */ HB_P_LINEOFFSET, 60,	/* 161 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'A', 'D', 'D', ' ', 'd', 'e', 's', 'c', '_', 'l', 'i', 'v', 'r', 'e', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00907 */ HB_P_LINEOFFSET, 61,	/* 162 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00914 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000944) */
/* 00918 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000918) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 00925 */ HB_P_LINEOFFSET, 63,	/* 164 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00937 */ HB_P_LINEOFFSET, 64,	/* 165 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00944 */ HB_P_LINEOFFSET, 67,	/* 168 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00968 */ HB_P_LINEOFFSET, 68,	/* 169 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MMOV */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 2,	/* 750 (abs: 01728) */
	HB_P_TRYBEGIN, 75, 0, 0,	/* 75 (abs: 00001056) */
/* 00985 */ HB_P_LINEOFFSET, 70,	/* 171 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'A', 'D', 'D', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '3', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01045 */ HB_P_LINEOFFSET, 71,	/* 172 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01052 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001082) */
/* 01056 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001056) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01063 */ HB_P_LINEOFFSET, 73,	/* 174 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01075 */ HB_P_LINEOFFSET, 74,	/* 175 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 76, 0, 0,	/* 76 (abs: 00001158) */
/* 01086 */ HB_P_LINEOFFSET, 77,	/* 178 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'A', 'D', 'D', ' ', 'd', 'e', 'z', '_', 'p', 'e', 'r', 'c', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01147 */ HB_P_LINEOFFSET, 78,	/* 179 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01154 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001184) */
/* 01158 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001158) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01165 */ HB_P_LINEOFFSET, 80,	/* 181 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01177 */ HB_P_LINEOFFSET, 81,	/* 182 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 76, 0, 0,	/* 76 (abs: 00001260) */
/* 01188 */ HB_P_LINEOFFSET, 84,	/* 185 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'A', 'D', 'D', ' ', 'c', 'u', 's', 't', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01249 */ HB_P_LINEOFFSET, 85,	/* 186 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01256 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001286) */
/* 01260 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001260) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01267 */ HB_P_LINEOFFSET, 87,	/* 188 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01279 */ HB_P_LINEOFFSET, 88,	/* 189 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 72, 0, 0,	/* 72 (abs: 00001358) */
/* 01290 */ HB_P_LINEOFFSET, 91,	/* 192 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'A', 'D', 'D', ' ', 't', 'i', 'p', 'o', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01347 */ HB_P_LINEOFFSET, 92,	/* 193 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01354 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001384) */
/* 01358 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001358) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01365 */ HB_P_LINEOFFSET, 94,	/* 195 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01377 */ HB_P_LINEOFFSET, 95,	/* 196 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 76, 0, 0,	/* 76 (abs: 00001460) */
/* 01388 */ HB_P_LINEOFFSET, 98,	/* 199 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'A', 'D', 'D', ' ', 'e', 'x', 'c', 'e', 'c', 'a', 'o', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01449 */ HB_P_LINEOFFSET, 99,	/* 200 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01456 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001486) */
/* 01460 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001460) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01467 */ HB_P_LINEOFFSET, 101,	/* 202 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01479 */ HB_P_LINEOFFSET, 102,	/* 203 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 74, 0, 0,	/* 74 (abs: 00001560) */
/* 01490 */ HB_P_LINEOFFSET, 105,	/* 206 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 'A', 'D', 'D', ' ', 'p', 'l', 'u', 'g', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', '2', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01549 */ HB_P_LINEOFFSET, 106,	/* 207 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01556 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001586) */
/* 01560 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001560) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01567 */ HB_P_LINEOFFSET, 108,	/* 209 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01579 */ HB_P_LINEOFFSET, 109,	/* 210 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01586 */ HB_P_LINEOFFSET, 111,	/* 212 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_TRYBEGIN, 68, 0, 0,	/* 68 (abs: 00001678) */
/* 01614 */ HB_P_LINEOFFSET, 113,	/* 214 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'D', 'R', 'O', 'P', ' ', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01667 */ HB_P_LINEOFFSET, 114,	/* 215 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01674 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001704) */
/* 01678 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001678) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01685 */ HB_P_LINEOFFSET, 116,	/* 217 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01697 */ HB_P_LINEOFFSET, 117,	/* 218 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01704 */ HB_P_LINEOFFSET, 119,	/* 220 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01728 */ HB_P_LINEOFFSET, 173,	/* 274 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01752 */ HB_P_LINEOFFSET, 174,	/* 275 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MSET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 170, 3,	/* 938 (abs: 02700) */
	HB_P_TRYBEGIN, 78, 0, 0,	/* 78 (abs: 00001843) */
/* 01769 */ HB_P_LINEOFFSET, 176,	/* 277 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'u', 's', 'a', '_', 'g', 'r', 'u', 'p', 'o', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01832 */ HB_P_LINEOFFSET, 177,	/* 278 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01839 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001869) */
/* 01843 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001843) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01850 */ HB_P_LINEOFFSET, 179,	/* 280 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01862 */ HB_P_LINEOFFSET, 180,	/* 281 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 77, 0, 0,	/* 77 (abs: 00001946) */
/* 01873 */ HB_P_LINEOFFSET, 183,	/* 284 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 't', 'i', 'p', '_', 'l', 'a', 'n', 'c', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01935 */ HB_P_LINEOFFSET, 184,	/* 285 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01942 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001972) */
/* 01946 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001946) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 01953 */ HB_P_LINEOFFSET, 186,	/* 287 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01965 */ HB_P_LINEOFFSET, 187,	/* 288 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 79, 0, 0,	/* 79 (abs: 00002051) */
/* 01976 */ HB_P_LINEOFFSET, 190,	/* 291 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'q', 't', 'd', '_', 'p', 'e', 's', 's', 'o', 'a', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02040 */ HB_P_LINEOFFSET, 191,	/* 292 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02047 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002077) */
/* 02051 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002051) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 02058 */ HB_P_LINEOFFSET, 193,	/* 294 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02070 */ HB_P_LINEOFFSET, 194,	/* 295 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 78, 0, 0,	/* 78 (abs: 00002155) */
/* 02081 */ HB_P_LINEOFFSET, 197,	/* 298 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'm', 'a', 's', 'c', '_', 'q', 't', 'd', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02144 */ HB_P_LINEOFFSET, 198,	/* 299 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02151 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002181) */
/* 02155 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002155) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 02162 */ HB_P_LINEOFFSET, 200,	/* 301 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02174 */ HB_P_LINEOFFSET, 201,	/* 302 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 78, 0, 0,	/* 78 (abs: 00002259) */
/* 02185 */ HB_P_LINEOFFSET, 204,	/* 305 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'm', 'a', 's', 'c', '_', 'v', 'l', 'r', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02248 */ HB_P_LINEOFFSET, 205,	/* 306 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02255 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002285) */
/* 02259 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002259) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 02266 */ HB_P_LINEOFFSET, 207,	/* 308 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02278 */ HB_P_LINEOFFSET, 208,	/* 309 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 80, 0, 0,	/* 80 (abs: 00002365) */
/* 02289 */ HB_P_LINEOFFSET, 211,	/* 312 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'i', 'c', 'm', '_', 'f', 'i', 'r', 'm', 'a', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ',', '2', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02354 */ HB_P_LINEOFFSET, 212,	/* 313 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02361 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002391) */
/* 02365 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002365) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 02372 */ HB_P_LINEOFFSET, 214,	/* 315 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02384 */ HB_P_LINEOFFSET, 215,	/* 316 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 77, 0, 0,	/* 77 (abs: 00002468) */
/* 02395 */ HB_P_LINEOFFSET, 218,	/* 319 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 's', 'i', 'm', 'p', '_', 'n', 'a', 'c', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02457 */ HB_P_LINEOFFSET, 219,	/* 320 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02464 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002494) */
/* 02468 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002468) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 02475 */ HB_P_LINEOFFSET, 221,	/* 322 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02487 */ HB_P_LINEOFFSET, 222,	/* 323 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 74, 0, 0,	/* 74 (abs: 00002568) */
/* 02498 */ HB_P_LINEOFFSET, 225,	/* 326 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'C', 'N', 'P', 'J', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', '4', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02557 */ HB_P_LINEOFFSET, 226,	/* 327 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02564 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002594) */
/* 02568 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002568) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 02575 */ HB_P_LINEOFFSET, 228,	/* 329 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02587 */ HB_P_LINEOFFSET, 229,	/* 330 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 80, 0, 0,	/* 80 (abs: 00002674) */
/* 02598 */ HB_P_LINEOFFSET, 232,	/* 333 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'd', 'e', 's', 'c', '_', 'm', 'a', 'x', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02663 */ HB_P_LINEOFFSET, 233,	/* 334 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02670 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002700) */
/* 02674 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002674) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 02681 */ HB_P_LINEOFFSET, 235,	/* 336 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02693 */ HB_P_LINEOFFSET, 236,	/* 337 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02700 */ HB_P_LINEOFFSET, 239,	/* 340 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02724 */ HB_P_LINEOFFSET, 240,	/* 341 */
	HB_P_PUSHVARIABLE, 17, 0,	/* MCAIX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 102,	/* 102 (abs: 02836) */
	HB_P_TRYBEGIN, 74, 0, 0,	/* 74 (abs: 00002810) */
/* 02740 */ HB_P_LINEOFFSET, 242,	/* 343 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'm', 'a', 's', 't', 'c', 'a', 'i', 'x', 'a', ' ', 'A', 'D', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'e', 'c', 'h', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02799 */ HB_P_LINEOFFSET, 243,	/* 344 */
	HB_P_PUSHSYMNEAR, 43,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02806 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002836) */
/* 02810 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002810) */
	HB_P_POPVARIABLE, 44, 0,	/* E */
/* 02817 */ HB_P_LINEOFFSET, 245,	/* 346 */
	HB_P_PUSHSYMNEAR, 45,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02829 */ HB_P_LINEOFFSET, 246,	/* 347 */
	HB_P_PUSHSYMNEAR, 47,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02836 */ HB_P_LINEOFFSET, 249,	/* 350 */
	HB_P_PUSHSYMNEAR, 48,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02843 */ HB_P_LINEOFFSET, 250,	/* 351 */
	HB_P_MESSAGE, 39, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 40,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02867 */ HB_P_LINEOFFSET, 251,	/* 352 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02872 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

