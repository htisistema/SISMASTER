/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC142.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMASTER\SAC142.PRG /q /oc:\HTI\sismaster\SAC142.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.05.30 12:24:41 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC142.PRG"

HB_FUNC( SAC142 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC142 )
{ "SAC142", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC142 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC142 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC142
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC142 = hb_vm_SymbolInit_SAC142;
   #pragma data_seg()
#endif

HB_FUNC( SAC142 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '1', '4', '2', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MCONS_FORN */
/* 00022 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', 'e', ' ', 'O', 'U', 'T', 'R', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00059 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHSYMNEAR, 2,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00072 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00116 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 9,	/* DATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00159 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', '.', 'S', 'o', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 10,	/* RAZAO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00198 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 11,	/* ENDERECO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00237 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* BAIRRO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00276 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* CIDADE */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00315 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'U', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* UF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00354 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'E', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* CEP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00393 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'G', 'C', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* CGC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00432 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'I', 'n', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'E', 's', 't', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* INSC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00471 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* OBS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00510 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_FORN */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00584 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 00718) */
/* 00597 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 23,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 98,	/* 98 */
	'E', 's', 't', 'e', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', 't', 'e', 'm', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 's', 'e', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', ' ', 'a', ' ', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'v', 'a', 'i', ' ', 's', 'e', 'r', ' ', 'E', 'X', 'C', 'L', 'U', 'I', 'D', 'O', ' ', 'T', 'O', 'D', 'O', 'S', ' ', 'O', 'D', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00718) */
	HB_P_JUMP, 27, 1,	/* 283 (abs: 00998) */
/* 00718 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 23,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00774) */
	HB_P_JUMP, 227, 0,	/* 227 (abs: 00998) */
/* 00774 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00845 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00914 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', '=', ' ', 39, 'T', 39, 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00974 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00998 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHSYMNEAR, 24,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01005 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01010 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

