/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <HTIPLUG.000>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\SISMASTER\HTIPLUG.000 /q /oc:\helio\sismaster\HTIPLUG.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2020.02.27 12:10:54 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "HTIPLUG.000"

HB_FUNC( MAIN );
HB_FUNC( SHOWCLUE );
HB_FUNC( VERI_PLUG );
HB_FUNC_INITSTATICS();
HB_FUNC_REGISTERGLOBAL();
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( WVW_GETPALETTE );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( WVW_SETICON );
HB_FUNC_EXTERN( WVW_SETGET );
HB_FUNC_EXTERN( WVW_SETVERTCARET );
HB_FUNC_EXTERN( WVW_SETMAINCOORD );
HB_FUNC_EXTERN( WVW_ENABLESHORTCUTS );
HB_FUNC_EXTERN( WVW_SETDEFLINESPACING );
HB_FUNC_EXTERN( WVW_SETPAINTREFRESH );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( HB_ISNULL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( WVW_SETFONT );
HB_FUNC_EXTERN( RDDSETDEFAULT );
HB_FUNC_EXTERN( SR_SETMULTILANG );
HB_FUNC_EXTERN( SR_SETBASELANG );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( FBCREATEDB );
HB_FUNC_EXTERN( SR_ADDCONNECTION );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_EXTERN( SR_SETACTIVECONNECTION );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( FIM );
HB_FUNC_EXTERN( HB_APARAMS );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( WVW_SBSETTEXT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( WVW_MINIMIZE );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( ROUND );
HB_FUNC_EXTERN( PADL );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( SQLRDD );
HB_FUNC_EXTERN( SR_FIREBIRD );
HB_FUNC_EXTERN( DBFCDX );
HB_FUNC_EXTERN( DBFFPT );
HB_FUNC_EXTERN( HB_CODEPAGE_PT850 );
HB_FUNC_EXTERN( HB_NOSTARTUPWINDOW );
HB_FUNC_EXTERN( HB_LANG_ES );
HB_FUNC_EXTERN( HB_CODEPAGE_ES );
HB_FUNC_EXTERN( HB_CODEPAGE_ESMWIN );
HB_FUNC_EXTERN( HB_CODEPAGE_ESWIN );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_HTIPLUG )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAIN )}, NULL },
{ "MVERSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVERSAO_ECF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSIT_TIP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SISTEMA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCHV_PRIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCHV_PUBLIC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAF_ECF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCNPJ_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIM_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MRAZAO_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEND_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOMP_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MBAIRRO_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCIDADE_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUF_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCEP_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAF_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFONE_HTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAF_VER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MINSC_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEND_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCID_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFONE_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUF_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SIS_CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TESC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCAMINHO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIP_TERM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMPRESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_TC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NTASK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_PRINCIPAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_LINE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_COLOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_GETPALETTE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_GETPALETTE )}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "WVW_SETICON", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETICON )}, NULL },
{ "WVW_SETGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETGET )}, NULL },
{ "WVW_SETVERTCARET", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETVERTCARET )}, NULL },
{ "WVW_SETMAINCOORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETMAINCOORD )}, NULL },
{ "WVW_ENABLESHORTCUTS", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_ENABLESHORTCUTS )}, NULL },
{ "WVW_SETDEFLINESPACING", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETDEFLINESPACING )}, NULL },
{ "WVW_SETPAINTREFRESH", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETPAINTREFRESH )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "HB_ISNULL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNULL )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_SETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETFONT )}, NULL },
{ "RDDSETDEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RDDSETDEFAULT )}, NULL },
{ "SR_SETMULTILANG", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SETMULTILANG )}, NULL },
{ "SR_SETBASELANG", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SETBASELANG )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "FBCREATEDB", {HB_FS_PUBLIC}, {HB_FUNCNAME( FBCREATEDB )}, NULL },
{ "CCONNSTRING", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_ADDCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ADDCONNECTION )}, NULL },
{ "__QUIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __QUIT )}, NULL },
{ "SR_SETACTIVECONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SETACTIVECONNECTION )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "VERI_PLUG", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VERI_PLUG )}, NULL },
{ "FIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIM )}, NULL },
{ "SHOWCLUE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SHOWCLUE )}, NULL },
{ "HB_APARAMS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_APARAMS )}, NULL },
{ "LISARRAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "CLASSNAME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_SBSETTEXT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SBSETTEXT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "WVW_MINIMIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_MINIMIZE )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "MHORAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_PARC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENTRADA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOTAL_G", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "Y", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ROUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROUND )}, NULL },
{ "PADL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADL )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "SQLRDD", {HB_FS_PUBLIC}, {HB_FUNCNAME( SQLRDD )}, NULL },
{ "SR_FIREBIRD", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_FIREBIRD )}, NULL },
{ "DBFCDX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFCDX )}, NULL },
{ "DBFFPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBFFPT )}, NULL },
{ "HB_CODEPAGE_PT850", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CODEPAGE_PT850 )}, NULL },
{ "HB_NOSTARTUPWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_NOSTARTUPWINDOW )}, NULL },
{ "HB_LANG_ES", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_LANG_ES )}, NULL },
{ "HB_CODEPAGE_ES", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CODEPAGE_ES )}, NULL },
{ "HB_CODEPAGE_ESMWIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CODEPAGE_ESMWIN )}, NULL },
{ "HB_CODEPAGE_ESWIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CODEPAGE_ESWIN )}, NULL },
{ "(_INITSTATICS00002)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, NULL },
{ "hb_REGISTERGLOBALS", {HB_FS_INITEXIT}, {hb_REGISTERGLOBALS}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_HTIPLUG )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_HTIPLUG
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_HTIPLUG = hb_vm_SymbolInit_HTIPLUG;
   #pragma data_seg()
#endif


#include "hbapi.h"

HB_ITEM_NEW( OAPP );

static const PHB_ITEM pConstantGlobals[] = {
                                             &OAPP 
                                           };
static PHB_ITEM *pGlobals = (PHB_ITEM *) pConstantGlobals;

HB_FUNC( MAIN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 20, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 26, 0,	/* 26 */
	HB_P_LOCALNEARSETSTR, 4, 10, 0,	/* MPRG 10*/
	'S', 'I', 'S', 'M', 'A', 'S', 'T', 'E', 'R', 0, 
	HB_P_LOCALNEARSETSTR, 11, 2, 0,	/* MTIP_T 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 17, 1, 0,	/* MARQ 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* MATRIZ */
	HB_P_LOCALNEARSETSTR, 19, 2, 0,	/* OP 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 20,	/* CAM_DBA */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* D 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 22,	/* M_AUX */
/* 00056 */ HB_P_LINEOFFSET, 38,	/* 64 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'v', '2', '0', '.', '0', '2', '.', '1', '2', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'2', '0', '1', '0', '.', '1', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'I', 'S', 'M', 'A', 'S', 'T', 'E', 'R', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'.', ':', ' ', 'S', 'I', 'S', 'M', 'A', 'S', 'T', 'E', 'R', ' ', ':', '.', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', ' ', 'A', 'u', 't', 'o', 'm', 'a', 'c', 'a', 'o', ' ', 'H', 'o', 't', 'e', 'l', ' ', 'e', ' ', 'R', 'e', 's', 't', 'a', 'u', 'r', 'a', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'.', ':', ' ', 'H', 'T', 'I', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', ' ', ':', '.', 0, 
	HB_P_PUSHSTR, 1, 1,	/* 257 */
	'E', '9', 'D', '4', 'E', '1', 'C', 'C', 'A', '4', '6', '4', 'B', '7', 'E', '8', '1', '1', 'C', '7', '7', '4', '6', 'E', '4', '3', 'B', '1', '1', '9', '4', '3', 'E', 'C', '2', 'A', '0', '3', '6', '6', '7', 'F', '7', '8', 'A', 'D', '6', '6', 'F', '0', '1', 'A', 'B', 'C', '5', '0', 'A', 'F', '1', '8', '8', 'F', 'F', '7', '6', 'C', '0', '8', '3', '8', '2', '9', 'B', '0', '7', 'A', 'A', '8', '1', '7', '5', 'E', '9', 'E', '1', 'F', '1', 'B', '1', '5', 'C', 'F', '3', 'A', '3', '9', 'E', '4', '8', '9', '5', '7', 'C', '7', '1', 'A', '4', '0', 'E', '1', '5', '7', '1', '3', 'E', '9', 'E', 'F', '3', '4', '5', 'E', '4', '0', '5', 'C', 'E', 'F', 'D', 'F', 'B', '5', '2', '5', '2', 'B', 'E', '3', '2', 'C', 'B', '1', '9', 'A', '7', '6', 'E', '2', '9', '1', 'C', '7', '9', '8', 'C', 'C', '0', '1', 'F', '6', '4', 'E', '1', '9', 'C', '5', 'F', '2', '5', '1', '9', '1', 'C', 'F', '4', '1', 'E', '6', '6', '6', 'A', 'E', '4', '7', '3', '8', '8', '3', '7', 'E', '2', 'F', 'B', '3', '7', '4', '6', '1', '2', '3', 'A', 'E', 'D', 'F', '8', '2', '1', '5', '7', '8', 'F', '0', '9', '4', '9', '6', 'C', '8', '1', '6', '3', '4', 'A', '6', 'D', '7', '8', '4', 'E', '4', 'F', 'B', 'B', '0', '8', '3', '7', 'C', '4', 'E', 'E', 'E', 'C', '3', 'B', 'A', 'E', 'F', '1', 'B', '3', 'F', '9', '4', 'C', '3', 0, 
	HB_P_PUSHSTR, 1, 1,	/* 257 */
	'C', 'C', '5', '5', 'E', '6', '2', '8', 'C', '3', 'C', '9', '0', 'F', '9', '3', 'E', '5', 'C', '7', 'B', '5', '5', '0', 'A', '9', '0', '7', '5', 'A', '5', '2', 'C', 'A', '9', '9', '9', 'A', '8', '9', 'D', '6', '4', '0', '6', 'C', 'B', 'D', 'E', 'A', '5', '5', '0', '8', 'C', 'F', '4', '1', '1', '2', 'E', '0', '0', 'B', '4', 'D', '0', '0', '5', '5', 'E', '2', 'D', 'E', 'A', '5', 'B', 'D', 'F', '7', 'E', '4', 'A', 'A', 'A', 'E', '4', 'C', '4', 'B', 'B', '4', 'C', '5', '8', '2', 'D', 'C', '0', 'E', 'B', 'A', '1', '4', '2', '3', '2', 'D', '2', '4', '4', '4', 'B', '9', '4', '9', 'A', '6', 'F', 'F', '2', 'D', 'D', '2', '3', 'F', 'D', '5', 'B', '4', 'C', 'D', 'B', 'E', 'A', 'E', '7', 'A', '8', '9', '2', '9', 'D', '6', 'A', '3', '7', '7', '4', 'F', '4', 'C', 'C', 'D', '7', '3', '7', '5', '2', '2', 'F', '0', '7', '3', 'E', '8', '6', 'F', '0', '7', '2', '4', 'E', 'E', '8', '8', '6', 'E', 'A', '4', '9', '3', '1', '1', '4', '7', '8', '0', 'E', 'D', 'D', '8', '7', 'C', '5', '9', 'A', '1', '7', '3', 'E', '0', '4', '9', '4', 'D', '3', 'F', '6', '4', 'D', 'F', 'F', '9', '1', 'A', 'A', '7', 'C', 'F', 'F', '6', 'F', 'D', '7', 'F', '1', 'D', '4', '6', 'A', 'E', '5', 'B', 'D', 'C', 'A', '4', '4', '1', '8', 'A', 'F', '8', 'E', '0', '2', '6', '1', '4', '9', '1', 'F', '6', '0', 'D', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'O', 'L', '4', '3', '2', '2', '0', '1', '1', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'1', '1', '1', '5', '6', '9', '8', '3', '0', '0', '0', '1', '7', '6', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'4', '1', '3', '0', '5', '5', '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'J', ' ', 'H', ' ', 'B', 'E', 'L', 'T', 'R', 'A', 'O', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', 'S', ' ', 'D', 'E', ' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'T', 'I', 'C', 'A', ' ', 'L', 'T', 'D', 'A', '.', ' ', '-', ' ', 'M', 'E', 0, 
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'R', 'A', 'C', 'A', ' ', 'F', 'R', 'A', 'N', 'C', 'E', 'L', 'I', 'N', 'O', ' ', 'A', 'R', 'A', 'U', 'J', 'O', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'6', '8', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'E', 'N', 'T', 'R', 'O', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'T', 'A', 'C', 'A', 'I', 'M', 'B', 'O', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', 'E', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'5', '5', '1', '4', '0', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'I', 'S', 'M', 'A', 'S', 'T', 'E', 'R', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '2', '8', '1', '.', '6', '8', '7', '8', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'2', '0', '1', '0', '.', '1', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTC */
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* WVW_GETPALETTE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 51,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MVERSAO */
	HB_P_PUSHSYMNEAR, 2,	/* MVERSAO_ECF */
	HB_P_PUSHSYMNEAR, 3,	/* MSIT_TIP */
	HB_P_PUSHSYMNEAR, 4,	/* SISTEMA */
	HB_P_PUSHSYMNEAR, 5,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 6,	/* MCHV_PRIV */
	HB_P_PUSHSYMNEAR, 7,	/* MCHV_PUBLIC */
	HB_P_PUSHSYMNEAR, 8,	/* MPAF_ECF */
	HB_P_PUSHSYMNEAR, 9,	/* MCNPJ_HTI */
	HB_P_PUSHSYMNEAR, 10,	/* MIM_HTI */
	HB_P_PUSHSYMNEAR, 11,	/* MRAZAO_HTI */
	HB_P_PUSHSYMNEAR, 12,	/* MEND_HTI */
	HB_P_PUSHSYMNEAR, 13,	/* MNUM_HTI */
	HB_P_PUSHSYMNEAR, 14,	/* MCOMP_HTI */
	HB_P_PUSHSYMNEAR, 15,	/* MBAIRRO_HTI */
	HB_P_PUSHSYMNEAR, 16,	/* MCIDADE_HTI */
	HB_P_PUSHSYMNEAR, 17,	/* MUF_HTI */
	HB_P_PUSHSYMNEAR, 18,	/* MCEP_HTI */
	HB_P_PUSHSYMNEAR, 19,	/* MPAF_HTI */
	HB_P_PUSHSYMNEAR, 20,	/* MFONE_HTI */
	HB_P_PUSHSYMNEAR, 21,	/* MPAF_VER */
	HB_P_PUSHSYMNEAR, 22,	/* MCGC_FIRM */
	HB_P_PUSHSYMNEAR, 23,	/* MINSC_FIRM */
	HB_P_PUSHSYMNEAR, 24,	/* MEND_FIRM */
	HB_P_PUSHSYMNEAR, 25,	/* MCID_FIRM */
	HB_P_PUSHSYMNEAR, 26,	/* MFONE_FIRM */
	HB_P_PUSHSYMNEAR, 27,	/* MUF_FIRM */
	HB_P_PUSHSYMNEAR, 28,	/* MENS */
	HB_P_PUSHSYMNEAR, 29,	/* SIS_CIDADE */
	HB_P_PUSHSYMNEAR, 30,	/* TESC */
	HB_P_PUSHSYMNEAR, 31,	/* MCAMINHO */
	HB_P_PUSHSYMNEAR, 32,	/* MTIP_TERM */
	HB_P_PUSHSYMNEAR, 33,	/* MCODEMPRESA */
	HB_P_PUSHSYMNEAR, 34,	/* M_TC */
	HB_P_PUSHSYMNEAR, 35,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 37,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 38,	/* NTASK */
	HB_P_PUSHSYMNEAR, 39,	/* MNUM_PRINCIPAL */
	HB_P_PUSHSYMNEAR, 40,	/* M_CFG */
	HB_P_PUSHSYMNEAR, 41,	/* M_SET */
	HB_P_PUSHSYMNEAR, 42,	/* CONS_EMP */
	HB_P_PUSHSYMNEAR, 43,	/* NCNN */
	HB_P_PUSHSYMNEAR, 44,	/* NCNN1 */
	HB_P_PUSHSYMNEAR, 45,	/* NCNN2 */
	HB_P_PUSHSYMNEAR, 46,	/* M_LINE */
	HB_P_PUSHSYMNEAR, 47,	/* M_QP */
	HB_P_PUSHSYMNEAR, 48,	/* NIVEL_ACESS */
	HB_P_PUSHSYMNEAR, 49,	/* M_COLOR */
	HB_P_DOSHORT, 48,
	HB_P_POPVARIABLE, 49, 0,	/* M_COLOR */
	HB_P_POPMEMVAR, 48, 0,	/* NIVEL_ACESS */
	HB_P_POPVARIABLE, 47, 0,	/* M_QP */
	HB_P_POPVARIABLE, 46, 0,	/* M_LINE */
	HB_P_POPVARIABLE, 45, 0,	/* NCNN2 */
	HB_P_POPVARIABLE, 44, 0,	/* NCNN1 */
	HB_P_POPVARIABLE, 43, 0,	/* NCNN */
	HB_P_POPVARIABLE, 42, 0,	/* CONS_EMP */
	HB_P_POPVARIABLE, 41, 0,	/* M_SET */
	HB_P_POPVARIABLE, 39, 0,	/* MNUM_PRINCIPAL */
	HB_P_POPVARIABLE, 37, 0,	/* COD_OPERADO */
	HB_P_POPVARIABLE, 35, 0,	/* MDATA_SIS */
	HB_P_POPVARIABLE, 34, 0,	/* M_TC */
	HB_P_POPVARIABLE, 33, 0,	/* MCODEMPRESA */
	HB_P_POPVARIABLE, 31, 0,	/* MCAMINHO */
	HB_P_POPVARIABLE, 21, 0,	/* MPAF_VER */
	HB_P_POPVARIABLE, 20, 0,	/* MFONE_HTI */
	HB_P_POPVARIABLE, 19, 0,	/* MPAF_HTI */
	HB_P_POPVARIABLE, 18, 0,	/* MCEP_HTI */
	HB_P_POPVARIABLE, 17, 0,	/* MUF_HTI */
	HB_P_POPVARIABLE, 16, 0,	/* MCIDADE_HTI */
	HB_P_POPVARIABLE, 15, 0,	/* MBAIRRO_HTI */
	HB_P_POPVARIABLE, 14, 0,	/* MCOMP_HTI */
	HB_P_POPVARIABLE, 13, 0,	/* MNUM_HTI */
	HB_P_POPVARIABLE, 12, 0,	/* MEND_HTI */
	HB_P_POPVARIABLE, 11, 0,	/* MRAZAO_HTI */
	HB_P_POPVARIABLE, 10, 0,	/* MIM_HTI */
	HB_P_POPVARIABLE, 9, 0,	/* MCNPJ_HTI */
	HB_P_POPVARIABLE, 8, 0,	/* MPAF_ECF */
	HB_P_POPVARIABLE, 7, 0,	/* MCHV_PUBLIC */
	HB_P_POPVARIABLE, 6, 0,	/* MCHV_PRIV */
	HB_P_POPVARIABLE, 5, 0,	/* MEMP_RESA */
	HB_P_POPVARIABLE, 4, 0,	/* SISTEMA */
	HB_P_POPVARIABLE, 3, 0,	/* MSIT_TIP */
	HB_P_POPVARIABLE, 2, 0,	/* MVERSAO_ECF */
	HB_P_POPVARIABLE, 1, 0,	/* MVERSAO */
/* 01148 */ HB_P_LINEOFFSET, 60,	/* 86 */
	HB_P_PUSHSYMNEAR, 52,	/* WVW_SETICON */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'i', 'c', 'o', 0, 
	HB_P_DOSHORT, 3,
/* 01167 */ HB_P_LINEOFFSET, 61,	/* 87 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_SETGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', 'D', 'D', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'D', 'B', 'F', 'C', 'D', 'X', 0, 
	HB_P_DOSHORT, 2,
/* 01189 */ HB_P_LINEOFFSET, 62,	/* 88 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_SETGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'O', 'D', 'E', 'P', 'A', 'G', 'E', 0, 
	HB_P_PUSHINT, 255, 0,	/* 255 */
	HB_P_DOSHORT, 2,
/* 01210 */ HB_P_LINEOFFSET, 63,	/* 89 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_SETGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'W', 'I', 'N', '_', 'R', 'O', 'W', 'S', 0, 
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
/* 01230 */ HB_P_LINEOFFSET, 64,	/* 90 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_SETGET */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'W', 'I', 'N', '_', 'C', 'O', 'L', 'S', 0, 
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_DOSHORT, 2,
/* 01250 */ HB_P_LINEOFFSET, 66,	/* 92 */
	HB_P_PUSHSYMNEAR, 54,	/* WVW_SETVERTCARET */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_DOSHORT, 1,
/* 01258 */ HB_P_LINEOFFSET, 67,	/* 93 */
	HB_P_PUSHSYMNEAR, 55,	/* WVW_SETMAINCOORD */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_DOSHORT, 1,
/* 01266 */ HB_P_LINEOFFSET, 70,	/* 96 */
	HB_P_PUSHSYMNEAR, 56,	/* WVW_ENABLESHORTCUTS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 01275 */ HB_P_LINEOFFSET, 71,	/* 97 */
	HB_P_PUSHSYMNEAR, 57,	/* WVW_SETDEFLINESPACING */
	HB_P_PUSHNIL,
	HB_P_PUSHDOUBLE, 0, 0, 0, 0, 0, 0, 248, 63, 10, 1,	/* 1.5, 10, 1 */
	HB_P_DOSHORT, 1,
/* 01293 */ HB_P_LINEOFFSET, 74,	/* 100 */
	HB_P_PUSHSYMNEAR, 58,	/* WVW_SETPAINTREFRESH */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01301 */ HB_P_LINEOFFSET, 75,	/* 101 */
	HB_P_PUSHSYMNEAR, 52,	/* WVW_SETICON */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'h', 't', 'i', '.', 'i', 'c', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 01319 */ HB_P_LINEOFFSET, 77,	/* 103 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHINT, 159, 0,	/* 159 */
	HB_P_DOSHORT, 2,
/* 01331 */ HB_P_LINEOFFSET, 78,	/* 104 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01346 */ HB_P_LINEOFFSET, 79,	/* 105 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01360 */ HB_P_LINEOFFSET, 80,	/* 106 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 60,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 01389) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01400) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 01402 */ HB_P_LINEOFFSET, 81,	/* 107 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01416 */ HB_P_LINEOFFSET, 82,	/* 108 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHINT, 158, 7,	/* 1950 */
	HB_P_DOSHORT, 2,
/* 01428 */ HB_P_LINEOFFSET, 84,	/* 110 */
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 35, 0,	/* MDATA_SIS */
/* 01438 */ HB_P_LINEOFFSET, 85,	/* 111 */
	HB_P_PUSHSYMNEAR, 61,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 14,	/* LIN */
/* 01473 */ HB_P_LINEOFFSET, 86,	/* 112 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 15,	/* LINHA */
	HB_P_POPLOCALNEAR, 16,	/* LINHAS */
/* 01483 */ HB_P_LINEOFFSET, 87,	/* 113 */
	HB_P_PUSHSYMNEAR, 63,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 16,	/* LINHAS */
/* 01515 */ HB_P_LINEOFFSET, 88,	/* 114 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 40, 0,	/* M_CFG */
/* 01523 */ HB_P_LINEOFFSET, 89,	/* 115 */
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 15,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 16,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 01644) */
/* 01536 */ HB_P_LINEOFFSET, 90,	/* 116 */
	HB_P_PUSHSYMNEAR, 61,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHLOCALNEAR, 15,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 14,	/* LIN */
/* 01572 */ HB_P_LINEOFFSET, 91,	/* 117 */
	HB_P_PUSHLOCALNEAR, 14,	/* LIN */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01612) */
/* 01586 */ HB_P_LINEOFFSET, 92,	/* 118 */
	HB_P_PUSHSYMNEAR, 64,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* M_CFG */
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* LIN */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 26,	/* 26 (abs: 01636) */
/* 01612 */ HB_P_LINEOFFSET, 94,	/* 120 */
	HB_P_PUSHSYMNEAR, 64,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* M_CFG */
	HB_P_PUSHSYMNEAR, 67,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* LIN */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 01636 */ HB_P_LINEOFFSET, 96,	/* 122 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 143,	/* -113 (abs: 01529) */
/* 01644 */ HB_P_LINEOFFSET, 97,	/* 123 */
	HB_P_PUSHSYMNEAR, 68,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 01667 */ HB_P_LINEOFFSET, 98,	/* 124 */
	HB_P_PUSHSYMNEAR, 69,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* M_CFG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 01776) */
/* 01679 */ HB_P_LINEOFFSET, 99,	/* 125 */
	HB_P_PUSHSYMNEAR, 70,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'F', 'a', 'v', 'o', 'r', ' ', 'v', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'I', 'N', 'I', ' ', 'o', 'u', ' ', 'e', 'n', 't', 'r', 'a', 'r', ' ', 'e', 'm', ' ', 'c', 'o', 'n', 't', 'a', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'a', ' ', 'H', 'T', 'I', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01771 */ HB_P_LINEOFFSET, 100,	/* 126 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01776 */ HB_P_LINEOFFSET, 101,	/* 127 */
	HB_P_PUSHSYMNEAR, 71,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* M_CFG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_LESS,
	HB_P_JUMPFALSE, 143, 0,	/* 143 (abs: 01932) */
/* 01792 */ HB_P_LINEOFFSET, 102,	/* 128 */
	HB_P_PUSHSYMNEAR, 70,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 126,	/* 126 */
	'F', 'a', 'v', 'o', 'r', ' ', 'v', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'C', 'F', 'G', '.', 'I', 'N', 'I', ' ', 'e', 's', 't', 'a', 'r', ' ', 'f', 'a', 'l', 't', 'a', 'n', 'd', 'o', ' ', 'a', 'l', 'g', 'u', 'm', 'a', 's', ' ', 'l', 'i', 'n', 'h', 'a', ' ', 'o', 'u', ' ', 'f', 'o', 'i', ' ', 'a', 'l', 't', 'e', 'r', 'a', 'd', 'a', 's', ' ', 'o', 'u', ' ', 'e', 'n', 't', 'r', 'a', 'r', ' ', 'e', 'm', ' ', 'c', 'o', 'n', 't', 'a', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'a', ' ', 'H', 'T', 'I', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01927 */ HB_P_LINEOFFSET, 103,	/* 129 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01932 */ HB_P_LINEOFFSET, 105,	/* 131 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 72, 0,	/* I */
/* 01938 */ HB_P_LINEOFFSET, 106,	/* 132 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_SETFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'l', 'u', 'c', 'i', 'd', 'a', ' ', 'c', 'o', 'n', 's', 'o', 'l', 'e', 0, 
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHINT, 188, 2,	/* 700 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 6,
/* 01972 */ HB_P_LINEOFFSET, 113,	/* 139 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 43, 0,	/* NCNN */
/* 01978 */ HB_P_LINEOFFSET, 115,	/* 141 */
	HB_P_PUSHSYMNEAR, 74,	/* RDDSETDEFAULT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'Q', 'L', 'R', 'D', 'D', 0, 
	HB_P_DOSHORT, 1,
/* 01994 */ HB_P_LINEOFFSET, 116,	/* 142 */
	HB_P_PUSHSYMNEAR, 75,	/* SR_SETMULTILANG */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
/* 02002 */ HB_P_LINEOFFSET, 117,	/* 143 */
	HB_P_PUSHSYMNEAR, 76,	/* SR_SETBASELANG */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 02011 */ HB_P_LINEOFFSET, 118,	/* 144 */
	HB_P_PUSHSYMNEAR, 77,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'E', 'N', 'T', 'A', 'N', 'D', 'O', ' ', 'C', 'O', 'N', 'E', 'X', 'A', 'O', ' ', 'C', 'O', 'M', ' ', 'O', ' ', 'B', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'D', 'A', 'D', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 02066 */ HB_P_LINEOFFSET, 120,	/* 146 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'T', 'e', 'n', 't', 'a', 'n', 'd', 'o', ' ', 'C', 'O', 'N', 'E', 'X', 'A', 'O', ' ', 'c', 'o', 'm', ' ', 'o', ' ', '1', 'o', '.', ' ', 'B', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'D', 'A', 'D', 'O', 'S', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', '[', 0, 
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	']', ',', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02177 */ HB_P_LINEOFFSET, 121,	/* 147 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02216) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 80,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'S', 'I', 'S', 'M', 'A', 'S', 'T', 'E', 'R', '.', 'G', 'D', 'B', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 02325) */
/* 02218 */ HB_P_LINEOFFSET, 122,	/* 148 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 81,	/* FBCREATEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'S', 'I', 'S', 'M', 'A', 'S', 'T', 'E', 'R', '.', 'G', 'D', 'B', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'Y', 'S', 'D', 'B', 'A', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 's', 't', 'e', 'r', 'k', 'e', 'y', 0, 
	HB_P_PUSHINT, 44, 1,	/* 300 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'S', 'O', '8', '8', '5', '9', '_', '1', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 02325) */
/* 02281 */ HB_P_LINEOFFSET, 123,	/* 149 */
	HB_P_PUSHSYMNEAR, 70,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'B', 'a', 'n', 'c', 'o', ' ', 'C', 'r', 'i', 'a', 'd', 'o', ' ', 'c', 'o', 'm', ' ', 'S', 'U', 'C', 'E', 'S', 'S', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 02315 */ HB_P_LINEOFFSET, 124,	/* 150 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_POPVARIABLE, 46, 0,	/* M_LINE */
/* 02325 */ HB_P_LINEOFFSET, 128,	/* 154 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 1,	/* MTC */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 02352) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MTC */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'G', 'D', 'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 118, 1,	/* 374 (abs: 02726) */
/* 02355 */ HB_P_LINEOFFSET, 130,	/* 156 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'F', 'I', 'R', 'E', 'B', 'I', 'R', 'D', '=', 0, 
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 71,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 246, 255,	/* -10*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 66,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MTC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	';', 'u', 'i', 'd', '=', 'S', 'Y', 'S', 'D', 'B', 'A', ';', 'p', 'w', 'd', '=', 'm', 'a', 's', 't', 'e', 'r', 'k', 'e', 'y', ';', 'c', 'h', 'a', 'r', 's', 'e', 't', '=', 'I', 'S', 'O', '8', '8', '5', '9', '_', '1', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 82, 0,	/* CCONNSTRING */
/* 02469 */ HB_P_LINEOFFSET, 131,	/* 157 */
	HB_P_PUSHSYMNEAR, 83,	/* SR_ADDCONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 82, 0,	/* CCONNSTRING */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 43, 0,	/* NCNN */
/* 02484 */ HB_P_LINEOFFSET, 132,	/* 158 */
	HB_P_PUSHVARIABLE, 43, 0,	/* NCNN */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSE, 52, 2,	/* 564 (abs: 03055) */
/* 02494 */ HB_P_LINEOFFSET, 133,	/* 159 */
	HB_P_PUSHSYMNEAR, 70,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'o', 'n', 'e', 'c', 't', 'a', 'r', ' ', 'a', 'o', ' ', 'B', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'D', 'A', 'D', 'O', 'S', '.', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'o', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 'd', 'e', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'I', 'N', 'I', ' ', '[', 0, 
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 97,	/* 97 */
	']', ' ', 'o', 'u', ' ', 's', 'e', ' ', 'o', ' ', 'F', 'I', 'R', 'E', 'B', 'I', 'R', 'D', ' ', 'e', 's', 't', 'a', 'r', ' ', 'I', 'n', 's', 't', 'a', 'l', 'a', 'd', 'o', ',', ' ', 'C', 'a', 's', 'o', ' ', 'n', 'a', 'o', ' ', 't', 'e', 'n', 'h', 'a', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', ' ', 'c', 'o', 'n', 't', 'a', 'c', 't', 'a', 'r', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'A', 'd', 'm', 'i', 'n', 'i', 's', 't', 'r', 'a', 'd', 'o', 'r', ' ', 'd', 'a', ' ', 'R', 'E', 'D', 'E', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02716 */ HB_P_LINEOFFSET, 134,	/* 160 */
	HB_P_PUSHSYMNEAR, 84,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 76, 1,	/* 332 (abs: 03055) */
/* 02726 */ HB_P_LINEOFFSET, 137,	/* 163 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'F', 'I', 'R', 'E', 'B', 'I', 'R', 'D', '=', 0, 
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	';', 'u', 'i', 'd', '=', 'S', 'Y', 'S', 'D', 'B', 'A', ';', 'p', 'w', 'd', '=', 'm', 'a', 's', 't', 'e', 'r', 'k', 'e', 'y', ';', 'c', 'h', 'a', 'r', 's', 'e', 't', '=', 'I', 'S', 'O', '8', '8', '5', '9', '_', '1', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 82, 0,	/* CCONNSTRING */
/* 02801 */ HB_P_LINEOFFSET, 138,	/* 164 */
	HB_P_PUSHSYMNEAR, 83,	/* SR_ADDCONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 82, 0,	/* CCONNSTRING */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 43, 0,	/* NCNN */
/* 02816 */ HB_P_LINEOFFSET, 139,	/* 165 */
	HB_P_PUSHVARIABLE, 43, 0,	/* NCNN */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 03055) */
/* 02826 */ HB_P_LINEOFFSET, 140,	/* 166 */
	HB_P_PUSHSYMNEAR, 70,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'o', 'n', 'e', 'c', 't', 'a', 'r', ' ', 'a', 'o', ' ', 'B', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'D', 'A', 'D', 'O', 'S', '.', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'o', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 'd', 'e', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'a', 's', 't', 'e', 'r', 'c', 'f', 'g', '.', 'I', 'N', 'I', ' ', '[', 0, 
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 97,	/* 97 */
	']', ' ', 'o', 'u', ' ', 's', 'e', ' ', 'o', ' ', 'F', 'I', 'R', 'E', 'B', 'I', 'R', 'D', ' ', 'e', 's', 't', 'a', 'r', ' ', 'I', 'n', 's', 't', 'a', 'l', 'a', 'd', 'o', ',', ' ', 'C', 'a', 's', 'o', ' ', 'n', 'a', 'o', ' ', 't', 'e', 'n', 'h', 'a', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', ' ', 'c', 'o', 'n', 't', 'a', 'c', 't', 'a', 'r', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'A', 'd', 'm', 'i', 'n', 'i', 's', 't', 'r', 'a', 'd', 'o', 'r', ' ', 'd', 'a', ' ', 'R', 'E', 'D', 'E', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03048 */ HB_P_LINEOFFSET, 141,	/* 167 */
	HB_P_PUSHSYMNEAR, 84,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03055 */ HB_P_LINEOFFSET, 144,	/* 170 */
	HB_P_PUSHSYMNEAR, 85,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* NCNN */
	HB_P_DOSHORT, 1,
/* 03065 */ HB_P_LINEOFFSET, 145,	/* 171 */
	HB_P_PUSHSYMNEAR, 86,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03072 */ HB_P_LINEOFFSET, 146,	/* 172 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 41, 0,	/* M_SET */
/* 03080 */ HB_P_LINEOFFSET, 147,	/* 173 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 41, 0,	/* M_SET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03123 */ HB_P_LINEOFFSET, 148,	/* 174 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	27, 0, 
	HB_P_POPVARIABLE, 30, 0,	/* TESC */
/* 03132 */ HB_P_LINEOFFSET, 149,	/* 175 */
	HB_P_PUSHSYMNEAR, 89,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MEMP_RESA */
/* 03144 */ HB_P_LINEOFFSET, 151,	/* 177 */
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 35, 0,	/* MDATA_SIS */
/* 03154 */ HB_P_LINEOFFSET, 152,	/* 178 */
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 32, 0,	/* MTIP_TERM */
/* 03165 */ HB_P_LINEOFFSET, 153,	/* 179 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 67,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 03200) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 90,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 03242) */
/* 03202 */ HB_P_LINEOFFSET, 154,	/* 180 */
	HB_P_PUSHSYMNEAR, 70,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 'M', 'P', 'R', 'E', 'S', 'A', ' ', 'S', 'E', 'M', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'I', 'E', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 165, 1,	/* 421 (abs: 03660) */
/* 03242 */ HB_P_LINEOFFSET, 156,	/* 182 */
	HB_P_PUSHSYMNEAR, 90,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 03299) */
/* 03259 */ HB_P_LINEOFFSET, 157,	/* 183 */
	HB_P_PUSHSYMNEAR, 70,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 'M', 'P', 'R', 'E', 'S', 'A', ' ', 'S', 'E', 'M', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'I', 'E', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 108, 1,	/* 364 (abs: 03660) */
/* 03299 */ HB_P_LINEOFFSET, 160,	/* 186 */
	HB_P_LOCALNEARSETINT, 7, 80, 0,	/* NUM 80*/
/* 03305 */ HB_P_LINEOFFSET, 161,	/* 187 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_POPVARIABLE, 33, 0,	/* MCODEMPRESA */
/* 03316 */ HB_P_LINEOFFSET, 162,	/* 188 */
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 8,	/* MCGC_AUX */
/* 03328 */ HB_P_LINEOFFSET, 163,	/* 189 */
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 22, 0,	/* MCGC_FIRM */
/* 03341 */ HB_P_LINEOFFSET, 164,	/* 190 */
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 23, 0,	/* MINSC_FIRM */
/* 03354 */ HB_P_LINEOFFSET, 165,	/* 191 */
	HB_P_PUSHSYMNEAR, 91,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 91,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 24,	/* 24 (abs: 03426) */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PUSHSYMNEAR, 91,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 03429) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MEND_FIRM */
/* 03433 */ HB_P_LINEOFFSET, 166,	/* 192 */
	HB_P_PUSHSYMNEAR, 91,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 25, 0,	/* MCID_FIRM */
/* 03465 */ HB_P_LINEOFFSET, 167,	/* 193 */
	HB_P_PUSHSYMNEAR, 91,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* MFONE_FIRM */
/* 03483 */ HB_P_LINEOFFSET, 168,	/* 194 */
	HB_P_PUSHSYMNEAR, 91,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 29, 0,	/* SIS_CIDADE */
/* 03501 */ HB_P_LINEOFFSET, 169,	/* 195 */
	HB_P_PUSHSYMNEAR, 90,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 03538) */
/* 03518 */ HB_P_LINEOFFSET, 170,	/* 196 */
	HB_P_PUSHSYMNEAR, 91,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MEMP_RESA */
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 03556) */
/* 03538 */ HB_P_LINEOFFSET, 172,	/* 198 */
	HB_P_PUSHSYMNEAR, 91,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MEMP_RESA */
/* 03556 */ HB_P_LINEOFFSET, 175,	/* 201 */
	HB_P_PUSHSYMNEAR, 92,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 93,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 94,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 03578 */ HB_P_LINEOFFSET, 176,	/* 202 */
	HB_P_PUSHSYMNEAR, 95,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03616) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03616 */ HB_P_LINEOFFSET, 178,	/* 204 */
	HB_P_PUSHSYMNEAR, 96,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03624 */ HB_P_LINEOFFSET, 180,	/* 206 */
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 27, 0,	/* MUF_FIRM */
/* 03637 */ HB_P_LINEOFFSET, 181,	/* 207 */
	HB_P_PUSHSYMNEAR, 97,	/* VERI_PLUG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 12, 254,	/* -500 (abs: 03144) */
	HB_P_PUSHSYMNEAR, 98,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 255, 253,	/* -513 (abs: 03144) */
/* 03660 */ HB_P_LINEOFFSET, 187,	/* 213 */
	HB_P_PUSHSYMNEAR, 84,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03667 */ HB_P_LINEOFFSET, 188,	/* 214 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03672 */
   };

   hb_vmExecute( pcode, symbols, &pGlobals );
}

HB_FUNC( SHOWCLUE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 255,	/* locals, params */
	HB_P_SFRAME, 143, 0,	/* symbol (_INITSTATICS) */
/* 00006 */ HB_P_BASELINE, 221, 0,	/* 221 */
	HB_P_PUSHSTATIC, 1, 0,	/* LPOSTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00024) */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 222 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 2, 0,	/* CMESSAGE */
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 224 */
	HB_P_PUSHLOCALREF, 1, 0,	/* XMESSAGE */
	HB_P_PUSHSYMNEAR, 100,	/* HB_APARAMS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FOREACH,
	HB_P_ENUMERATE,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 00270) */
/* 00039 */ HB_P_LINEOFFSET, 4,	/* 225 */
	HB_P_FALSE,
	HB_P_POPVARIABLE, 101, 0,	/* LISARRAY */
	HB_P_PUSHSYMNEAR, 102,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_FUNCTIONSHORT, 1,
/* 00052 */ HB_P_LINEOFFSET, 6,	/* 227 */
	HB_P_SWITCHCASE, 67, 0, 0, 0, 	/* 67 */
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00064) */
	HB_P_JUMP, 187, 0,	/* 187 (abs: 00248) */
/* 00064 */ HB_P_LINEOFFSET, 7,	/* 228 */
	HB_P_SWITCHCASE, 77, 0, 0, 0, 	/* 77 */
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00076) */
	HB_P_JUMP, 175, 0,	/* 175 (abs: 00248) */
/* 00076 */ HB_P_LINEOFFSET, 9,	/* 230 */
	HB_P_SWITCHCASE, 78, 0, 0, 0, 	/* 78 */
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 00104) */
/* 00085 */ HB_P_LINEOFFSET, 10,	/* 231 */
	HB_P_PUSHSYMNEAR, 103,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 104,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_JUMP, 147, 0,	/* 147 (abs: 00248) */
/* 00104 */ HB_P_LINEOFFSET, 12,	/* 233 */
	HB_P_SWITCHCASE, 68, 0, 0, 0, 	/* 68 */
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00126) */
/* 00113 */ HB_P_LINEOFFSET, 13,	/* 234 */
	HB_P_PUSHSYMNEAR, 105,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_JUMPNEAR, 124,	/* 124 (abs: 00248) */
/* 00126 */ HB_P_LINEOFFSET, 15,	/* 236 */
	HB_P_SWITCHCASE, 76, 0, 0, 0, 	/* 76 */
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00159) */
/* 00135 */ HB_P_LINEOFFSET, 16,	/* 237 */
	HB_P_PUSHLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00149) */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'.', 'T', '.', 0, 
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00155) */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'.', 'F', '.', 0, 
	HB_P_POPLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_JUMPNEAR, 91,	/* 91 (abs: 00248) */
/* 00159 */ HB_P_LINEOFFSET, 18,	/* 239 */
	HB_P_SWITCHCASE, 79, 0, 0, 0, 	/* 79 */
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00192) */
/* 00168 */ HB_P_LINEOFFSET, 19,	/* 240 */
	HB_P_MESSAGE, 106, 0,	/* CLASSNAME */
	HB_P_PUSHLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'O', 'b', 'j', 'e', 'c', 't', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_JUMPNEAR, 58,	/* 58 (abs: 00248) */
/* 00192 */ HB_P_LINEOFFSET, 21,	/* 242 */
	HB_P_SWITCHCASE, 66, 0, 0, 0, 	/* 66 */
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00217) */
/* 00201 */ HB_P_LINEOFFSET, 22,	/* 243 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* XMESSAGE 8*/
	'{', '|', '|', '.', '.', '.', '}', 0, 
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 00248) */
/* 00217 */ HB_P_LINEOFFSET, 24,	/* 245 */
	HB_P_SWITCHCASE, 65, 0, 0, 0, 	/* 65 */
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00238) */
/* 00226 */ HB_P_LINEOFFSET, 25,	/* 246 */
	HB_P_TRUE,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 101, 0,	/* LISARRAY */
	HB_P_POPSTATIC, 1, 0,	/* LPOSTP */
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 00248) */
/* 00238 */ HB_P_LINEOFFSET, 27,	/* 248 */
	HB_P_LOCALNEARSETSTR, 1, 4, 0,	/* XMESSAGE 4*/
	'N', 'I', 'L', 0, 
	HB_P_POP,
/* 00249 */ HB_P_LINEOFFSET, 30,	/* 251 */
	HB_P_PUSHSTATIC, 2, 0,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* XMESSAGE */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPSTATIC, 2, 0,	/* CMESSAGE */
/* 00265 */ HB_P_LINEOFFSET, 31,	/* 252 */
	HB_P_JUMP, 24, 255,	/* -232 (abs: 00035) */
	HB_P_ENDENUMERATE,
/* 00271 */ HB_P_LINEOFFSET, 32,	/* 253 */
	HB_P_PUSHSYMNEAR, 107,	/* WVW_SBSETTEXT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'*', ' ', 0, 
	HB_P_PUSHSTATIC, 2, 0,	/* CMESSAGE */
	HB_P_PLUS,
	HB_P_DOSHORT, 3,
/* 00289 */ HB_P_LINEOFFSET, 33,	/* 254 */
	HB_P_PUSHNIL,
	HB_P_POPSTATIC, 1, 0,	/* LPOSTP */
/* 00295 */ HB_P_LINEOFFSET, 34,	/* 255 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00300 */
   };

   hb_vmExecute( pcode, symbols, &pGlobals );
}

HB_FUNC( VERI_PLUG )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 3, 1,	/* 259 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MPED_MERC */
	HB_P_PUSHSYMNEAR, 108,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* MTRACO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* MPED_EXE */
/* 00029 */ HB_P_LINEOFFSET, 1,	/* 260 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 89,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSYMNEAR, 112,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 109,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 110,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 111,	/* MARQ */
	HB_P_PUSHSYMNEAR, 31,	/* MCAMINHO */
	HB_P_DOSHORT, 4,
	HB_P_POPVARIABLE, 31, 0,	/* MCAMINHO */
	HB_P_POPVARIABLE, 111, 0,	/* MARQ */
	HB_P_POPVARIABLE, 110, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 109, 0,	/* MTIPO_IMP */
/* 00071 */ HB_P_LINEOFFSET, 2,	/* 261 */
	HB_P_PUSHSYMNEAR, 113,	/* WVW_MINIMIZE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00078 */ HB_P_LINEOFFSET, 4,	/* 263 */
	HB_P_PUSHSYMNEAR, 114,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 247, 16,	/* 4343 (abs: 04431) */
/* 00091 */ HB_P_LINEOFFSET, 5,	/* 264 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* CONS_PROD */
/* 00098 */ HB_P_LINEOFFSET, 6,	/* 265 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', '=', ' ', 39, 39, 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 2, 0,	/* CONS_PROD */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00180 */ HB_P_LINEOFFSET, 7,	/* 266 */
	HB_P_PUSHSYMNEAR, 69,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 140, 6,	/* 1676 (abs: 01865) */
/* 00192 */ HB_P_LINEOFFSET, 8,	/* 267 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 171,	/* 171 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'S', 'E', 'T', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ')', ',', 'd', 'e', 's', 'c', 'r', 'i', ' ', '=', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'd', 'e', 's', 'c', 'r', 'i', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ')', ',', 'h', 'o', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 116,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00424 */ HB_P_LINEOFFSET, 9,	/* 268 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 203,	/* 203 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'S', 'E', 'T', ' ', 'e', 'x', 'c', 'e', 'c', 'a', 'o', ' ', '=', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'd', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'e', 'x', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'i', 'd', ' ', '=', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'I', 'D', '_', 'E', 'X', 'C', 'E', 'C', 'A', 'O', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'e', 'x', 'e', '_', 'i', 't', 'e', 'n', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'i', 'd', '_', 'p', 'r', 'o', 'd', 'u', 't', 'o', '_', 'p', 'e', 'd', 'i', 'd', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', 'A', 'N', 'D', ' ', 'i', 'd', '_', 'p', 'e', 'd', 'i', 'd', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'n', 'u', 'm', '_', 'd', 'o', 'c', ')', ')', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00656 */ HB_P_LINEOFFSET, 10,	/* 269 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00680 */ HB_P_LINEOFFSET, 11,	/* 270 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 72, 0,	/* I */
/* 00686 */ HB_P_LINEOFFSET, 12,	/* 271 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 72, 0,	/* I */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_PUSHSYMNEAR, 71,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 138, 4,	/* 1162 (abs: 01865) */
/* 00706 */ HB_P_LINEOFFSET, 13,	/* 272 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MPED_MERC */
/* 00713 */ HB_P_LINEOFFSET, 14,	/* 273 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MPED_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00787 */ HB_P_LINEOFFSET, 15,	/* 274 */
	HB_P_PUSHSYMNEAR, 69,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MPED_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00801) */
	HB_P_JUMP, 33, 4,	/* 1057 (abs: 01855) */
/* 00801 */ HB_P_LINEOFFSET, 18,	/* 277 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPED_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'4', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 00831) */
	HB_P_PUSHLOCALNEAR, 3,	/* MPED_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00836) */
	HB_P_JUMP, 8, 4,	/* 1032 (abs: 01865) */
/* 00836 */ HB_P_LINEOFFSET, 21,	/* 280 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* MPED_EXE */
/* 00843 */ HB_P_LINEOFFSET, 22,	/* 281 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'e', 'x', 'c', 'e', 'c', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 5, 0,	/* MPED_EXE */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00957 */ HB_P_LINEOFFSET, 23,	/* 282 */
	HB_P_PUSHSYMNEAR, 117,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 00973 */ HB_P_LINEOFFSET, 24,	/* 283 */
	HB_P_PUSHSYMNEAR, 118,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'M', 'P', '_', 'P', 'R', 'O', 'D', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01004) */
	HB_P_JUMP, 96, 3,	/* 864 (abs: 01865) */
/* 01004 */ HB_P_LINEOFFSET, 28,	/* 287 */
	HB_P_PUSHSYMNEAR, 119,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 01020 */ HB_P_LINEOFFSET, 29,	/* 288 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'M', 'e', 's', 'a', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 121,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01087 */ HB_P_LINEOFFSET, 30,	/* 289 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'a', 't', 'a', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 105,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'H', 'o', 'r', 'a', 's', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 116,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01153 */ HB_P_LINEOFFSET, 31,	/* 290 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01176 */ HB_P_LINEOFFSET, 32,	/* 291 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 121,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01233 */ HB_P_LINEOFFSET, 33,	/* 292 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MPED_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01261 */ HB_P_LINEOFFSET, 34,	/* 293 */
	HB_P_PUSHSYMNEAR, 69,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MPED_EXE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01304) */
/* 01272 */ HB_P_LINEOFFSET, 35,	/* 294 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MPED_EXE */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 01304 */ HB_P_LINEOFFSET, 37,	/* 296 */
	HB_P_PUSHSYMNEAR, 90,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 01362) */
/* 01322 */ HB_P_LINEOFFSET, 38,	/* 297 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01362 */ HB_P_LINEOFFSET, 40,	/* 299 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 122,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01426 */ HB_P_LINEOFFSET, 41,	/* 300 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01449 */ HB_P_LINEOFFSET, 42,	/* 301 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'G', 'a', 'r', 'c', 'o', 'n', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01495 */ HB_P_LINEOFFSET, 43,	/* 302 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01541 */ HB_P_LINEOFFSET, 44,	/* 303 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	15, 0, 
	HB_P_DOSHORT, 1,
/* 01566 */ HB_P_LINEOFFSET, 45,	/* 304 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01589 */ HB_P_LINEOFFSET, 46,	/* 305 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	18, 0, 
	HB_P_DOSHORT, 1,
/* 01618 */ HB_P_LINEOFFSET, 47,	/* 306 */
	HB_P_PUSHSYMNEAR, 123,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01627 */ HB_P_LINEOFFSET, 48,	/* 307 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01668 */ HB_P_LINEOFFSET, 49,	/* 308 */
	HB_P_PUSHSYMNEAR, 124,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'M', 'P', '_', 'P', 'R', 'O', 'D', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHSYMNEAR, 67,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 121,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MPED_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_DOSHORT, 3,
/* 01712 */ HB_P_LINEOFFSET, 50,	/* 309 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'S', 'E', 'T', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', '=', ' ', 39, '*', 39, ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01829 */ HB_P_LINEOFFSET, 51,	/* 310 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01853 */ HB_P_LINEOFFSET, 52,	/* 311 */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 72, 0,	/* I */
	HB_P_JUMP, 110, 251,	/* -1170 (abs: 00692) */
/* 01865 */ HB_P_LINEOFFSET, 54,	/* 313 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* CONS_CONTA */
/* 01872 */ HB_P_LINEOFFSET, 55,	/* 314 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', 'c', 'a', 'b', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 't', 'a', 't', 'u', 's', ' ', '=', ' ', 39, 'C', 'O', 'N', 'T', 'A', 39, 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 1, 0,	/* CONS_CONTA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01940 */ HB_P_LINEOFFSET, 56,	/* 315 */
	HB_P_PUSHSYMNEAR, 69,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_CONTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 166, 9,	/* 2470 (abs: 04419) */
/* 01952 */ HB_P_LINEOFFSET, 57,	/* 316 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'S', 'E', 'T', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', '(', 'S', 'E', 'L', 'E', 'C', 'T', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ')', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_CONTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02091 */ HB_P_LINEOFFSET, 58,	/* 317 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02115 */ HB_P_LINEOFFSET, 59,	/* 318 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 72, 0,	/* I */
/* 02121 */ HB_P_LINEOFFSET, 60,	/* 319 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 72, 0,	/* I */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_PUSHSYMNEAR, 71,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_CONTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 233, 8,	/* 2281 (abs: 04419) */
/* 02141 */ HB_P_LINEOFFSET, 61,	/* 320 */
	HB_P_PUSHSYMNEAR, 116,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 125, 0,	/* MHORAS */
/* 02151 */ HB_P_LINEOFFSET, 62,	/* 321 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 126, 0,	/* CONS_PARC */
/* 02159 */ HB_P_LINEOFFSET, 63,	/* 322 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_CONTA */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 126, 0,	/* CONS_PARC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02233 */ HB_P_LINEOFFSET, 64,	/* 323 */
	HB_P_PUSHSYMNEAR, 69,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 126, 0,	/* CONS_PARC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 116, 8,	/* 2164 (abs: 04407) */
/* 02246 */ HB_P_LINEOFFSET, 65,	/* 324 */
	HB_P_PUSHSYMNEAR, 118,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'C', 'H', '_', 'P', 'A', 'R', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 02279) */
/* 02274 */ HB_P_LINEOFFSET, 66,	/* 325 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02279 */ HB_P_LINEOFFSET, 68,	/* 327 */
	HB_P_PUSHMEMVAR, 126, 0,	/* CONS_PARC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 127, 0,	/* MENTRADA */
/* 02292 */ HB_P_LINEOFFSET, 69,	/* 328 */
	HB_P_PUSHSYMNEAR, 80,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'h', 't', 'i', 'c', 'a', 'b', 'e', '.', 'j', 'p', 'g', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 02373) */
/* 02315 */ HB_P_LINEOFFSET, 70,	/* 329 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	27, 34, 'h', 't', 'i', 'c', 'a', 'b', 'e', '.', 'j', 'p', 'g', 34, 0, 
	HB_P_DOSHORT, 1,
/* 02347 */ HB_P_LINEOFFSET, 71,	/* 330 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 87,	/* 87 (abs: 02458) */
/* 02373 */ HB_P_LINEOFFSET, 73,	/* 332 */
	HB_P_PUSHSYMNEAR, 119,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 02389 */ HB_P_LINEOFFSET, 74,	/* 333 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	18, 0, 
	HB_P_DOSHORT, 1,
/* 02411 */ HB_P_LINEOFFSET, 75,	/* 334 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MEMP_RESA */
	HB_P_DOSHORT, 1,
/* 02435 */ HB_P_LINEOFFSET, 76,	/* 335 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02458 */ HB_P_LINEOFFSET, 78,	/* 337 */
	HB_P_PUSHSYMNEAR, 119,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 02474 */ HB_P_LINEOFFSET, 79,	/* 338 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'N', 'P', 'J', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 22, 0,	/* MCGC_FIRM */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02508 */ HB_P_LINEOFFSET, 80,	/* 339 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'M', 'e', 's', 'a', '/', 'Q', 'u', 'a', 'r', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 126, 0,	/* CONS_PARC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 121,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 126, 0,	/* CONS_PARC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02575 */ HB_P_LINEOFFSET, 82,	/* 341 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02598 */ HB_P_LINEOFFSET, 95,	/* 354 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02621 */ HB_P_LINEOFFSET, 96,	/* 355 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 126, 0,	/* CONS_PARC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '-', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 105,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'G', 'c', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 126, 0,	/* CONS_PARC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02716 */ HB_P_LINEOFFSET, 97,	/* 356 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02739 */ HB_P_LINEOFFSET, 98,	/* 357 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'C', 'o', 'd', '.', ' ', ' ', ' ', 'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02780 */ HB_P_LINEOFFSET, 99,	/* 358 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'U', 'n', 'i', 't', '.', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 't', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 02840 */ HB_P_LINEOFFSET, 100,	/* 359 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02863 */ HB_P_LINEOFFSET, 102,	/* 361 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* CONS_PROD */
/* 02870 */ HB_P_LINEOFFSET, 104,	/* 363 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 's', 'u', 'm', '(', 'q', 't', 'd', ')', ',', 'p', 'r', 'e', 'c', 'o', ',', 'e', 'x', 'c', 'e', 'c', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_CONTA */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 114,	/* 114 */
	' ', 'A', 'N', 'D', ' ', '(', 'N', 'O', 'T', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 39, 'K', 'G', 39, ' ', 'O', 'R', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'p', 'r', 'e', 'c', 'o', ',', 'p', 'r', 'e', 'c', 'o', ',', 'e', 'x', 'c', 'e', 'c', 'a', 'o', ',', 'e', 'x', 'c', 'e', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 2, 0,	/* CONS_PROD */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03098 */ HB_P_LINEOFFSET, 105,	/* 364 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 128, 0,	/* MTOTAL_G */
	HB_P_POPVARIABLE, 129, 0,	/* Y */
/* 03108 */ HB_P_LINEOFFSET, 106,	/* 365 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 129, 0,	/* Y */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_PUSHSYMNEAR, 71,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 33, 1,	/* 289 (abs: 03414) */
/* 03128 */ HB_P_LINEOFFSET, 107,	/* 366 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03179 */ HB_P_LINEOFFSET, 108,	/* 367 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 122,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'x', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 122,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 122,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03314 */ HB_P_LINEOFFSET, 111,	/* 370 */
	HB_P_PUSHSYMNEAR, 90,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 03367) */
/* 03332 */ HB_P_LINEOFFSET, 112,	/* 371 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 03367 */ HB_P_LINEOFFSET, 114,	/* 373 */
	HB_P_PUSHVARIABLE, 128, 0,	/* MTOTAL_G */
	HB_P_PUSHSYMNEAR, 130,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 128, 0,	/* MTOTAL_G */
/* 03402 */ HB_P_LINEOFFSET, 115,	/* 374 */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_INC,
	HB_P_POPVARIABLE, 129, 0,	/* Y */
	HB_P_JUMP, 215, 254,	/* -297 (abs: 03114) */
/* 03414 */ HB_P_LINEOFFSET, 116,	/* 375 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* CONS_PROD */
/* 03421 */ HB_P_LINEOFFSET, 117,	/* 376 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 118,	/* 118 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', '(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'd', 'e', 's', 'c', 'r', 'i', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'p', 'r', 'o', 'd', ' ', 'w', 'h', 'e', 'r', 'e', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ')', ',', 'q', 't', 'd', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'd', 'o', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_CONTA */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 39, 'K', 'G', 39, 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 2, 0,	/* CONS_PROD */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03597 */ HB_P_LINEOFFSET, 118,	/* 377 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 129, 0,	/* Y */
/* 03603 */ HB_P_LINEOFFSET, 119,	/* 378 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 129, 0,	/* Y */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_PUSHSYMNEAR, 71,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 236, 0,	/* 236 (abs: 03856) */
/* 03623 */ HB_P_LINEOFFSET, 120,	/* 379 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03674 */ HB_P_LINEOFFSET, 121,	/* 380 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 122,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'x', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 122,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 122,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03809 */ HB_P_LINEOFFSET, 122,	/* 381 */
	HB_P_PUSHVARIABLE, 128, 0,	/* MTOTAL_G */
	HB_P_PUSHSYMNEAR, 130,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* CONS_PROD */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 128, 0,	/* MTOTAL_G */
/* 03844 */ HB_P_LINEOFFSET, 124,	/* 383 */
	HB_P_PUSHVARIABLE, 129, 0,	/* Y */
	HB_P_INC,
	HB_P_POPVARIABLE, 129, 0,	/* Y */
	HB_P_JUMP, 12, 255,	/* -244 (abs: 03609) */
/* 03856 */ HB_P_LINEOFFSET, 125,	/* 384 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 03916 */ HB_P_LINEOFFSET, 134,	/* 393 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', ' ', 'O', ' ', 'T', ' ', 'A', ' ', 'L', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 122,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 128, 0,	/* MTOTAL_G */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03988 */ HB_P_LINEOFFSET, 136,	/* 395 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04011 */ HB_P_LINEOFFSET, 141,	/* 400 */
	HB_P_PUSHSYMNEAR, 90,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 54,	/* 54 (abs: 04080) */
/* 04028 */ HB_P_LINEOFFSET, 142,	/* 401 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04051 */ HB_P_LINEOFFSET, 143,	/* 402 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04080 */ HB_P_LINEOFFSET, 145,	/* 404 */
	HB_P_PUSHSYMNEAR, 90,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 04126) */
/* 04097 */ HB_P_LINEOFFSET, 146,	/* 405 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04126 */ HB_P_LINEOFFSET, 148,	/* 407 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04149 */ HB_P_LINEOFFSET, 149,	/* 408 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 131,	/* PADL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'H', 'T', 'I', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', ' ', '-', ' ', 0, 
	HB_P_PUSHVARIABLE, 20, 0,	/* MFONE_HTI */
	HB_P_PLUS,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04199 */ HB_P_LINEOFFSET, 150,	/* 409 */
	HB_P_PUSHSYMNEAR, 78,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHMEMVAR, 40, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 79,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 04227 */ HB_P_LINEOFFSET, 151,	/* 410 */
	HB_P_PUSHSYMNEAR, 123,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04236 */ HB_P_LINEOFFSET, 152,	/* 411 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 04277 */ HB_P_LINEOFFSET, 153,	/* 412 */
	HB_P_PUSHSYMNEAR, 124,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'C', 'H', '_', 'P', 'A', 'R', 'C', '.', 'T', 'X', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 04299 */ HB_P_LINEOFFSET, 154,	/* 413 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'm', 'a', 's', 't', 'm', 'o', 'v', 'c', 'a', 'b', ' ', 'S', 'E', 'T', ' ', 's', 't', 'a', 't', 'u', 's', ' ', '=', ' ', 39, 'A', 'B', 'E', 'R', 'T', 'O', 39, ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'i', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 115,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_CONTA */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04383 */ HB_P_LINEOFFSET, 155,	/* 414 */
	HB_P_MESSAGE, 87, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 88,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04407 */ HB_P_LINEOFFSET, 157,	/* 416 */
	HB_P_PUSHVARIABLE, 72, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 72, 0,	/* I */
	HB_P_JUMP, 15, 247,	/* -2289 (abs: 02127) */
/* 04419 */ HB_P_LINEOFFSET, 160,	/* 419 */
	HB_P_PUSHSYMNEAR, 132,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 2, 239,	/* -4350 (abs: 00078) */
/* 04431 */ HB_P_LINEOFFSET, 162,	/* 421 */
	HB_P_PUSHSYMNEAR, 84,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04438 */ HB_P_LINEOFFSET, 163,	/* 422 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04443 */
   };

   hb_vmExecute( pcode, symbols, &pGlobals );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 143, 0, 2, 0,	/* symbol (_INITSTATICS), 2 statics */
	HB_P_SFRAME, 143, 0,	/* symbol (_INITSTATICS) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPSTATIC, 2, 0,	/* CMESSAGE */
	HB_P_ENDPROC
/* 00015 */
   };

   hb_vmExecute( pcode, symbols, &pGlobals );
}

HB_FUNC_REGISTERGLOBAL()
{
   hb_vmRegisterGlobals( &pGlobals, 1 );
}

