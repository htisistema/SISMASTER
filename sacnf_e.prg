#include "fileio.ch"
#include "commands.ch"

#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
//Static sENDER   := ''  ,;
Static SEM_ERRO := .F. ,;
sSECHORA := 0   ,;
sRETHORA := ''  ,;
sSECCOO  := 0   ,;
sNUMCUPOM:= ''  ,;
sSECEST  := 0   ,;
sESTADO  := ''  ,;
sMODELO  := ''
#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF
*********************************
* IMPRIMI NOTA FISCAL ELETRONICA
*********************************
FUNCTION sacnf_e(m_nota,via,texto)
**********************************
LOCAL mprg:='SACNF_E',;
      lci,cci,lba,cba,micm,mdoc,maux,;
      mdoc_aux,mcli_nota,mend_nota,mbai_nota,;
      mop_nota:='N',mcod_uax,mcont_prod:=0,mpeso:=0,mpeso_liq:=0,;
      cComm,aret,mcons_cid:={},mobs1,mobs2,mobs3,mobs4,mobs5,mobs6,mobs7,mobs8,;
      mobs9,mobs10,mobs11,mobs12,mobs13,mobs14,mobs15,mobs16,mobs17,mobs18,mobs19,mobs20,mcons_cli:={},;
      m_retorno:={},lin,linhas,linha,h:=0,mretorno:=' ',mcons_prod:={},mc_merc,mc_obs,m_obs,mpt,;
      mvlr_icmsub:=0,mbase_icmsub:=0,mpr_fat:=0,mcod_cid_emit:='',mcod_cid_dest:='',mcons_emit,mmen:='',m_ret:='',;
      mtot_imposto:=0,mbase_fcp := 0,mdif_aliq :=0,mvICMSUFDest := 0,mvICMSUFRemet:= 0,mtICMSUFDest := 0,mtICMSUFRemet:= 0,;
      mtFCPUFDest := 0,mdata_nfe:=CTOD('  /  /  '),mindIEDest:='',mtbase_fcp:=0,mdifal:=0

MEMVAR mcod_cli,mmodelo,mcod_nat1,msittrib,mdocumento
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0,marq_sai:='',mcam_nfe:='',mchnfe:=''
mensagem('INCICIANDO O NFe Aguarde um momento....')
marca := '*'
lci := 13
cci := 01
lba := 20
cba := 70
mtot_icm := 0
nota := mend_nota := mbai_nota := ' '
CLEAR GETS
IF ! mtipo_nota = 'N'
        mtot_quantd := ctot_quantd
        mtot_peso   := ctot_peso
        mtot_liq    := ctot_liq
ENDIF
op_tela(01,40,46,120,' INFORMACOES ADICIONAIS DA NOTA FISCAL ELETRONICA',,'*')
//marq_sai := ALLTRIM(m_indiv[1,37])+"SAINFE.TXT"
WHILE .T.
        exibi_prg(mprg)
        mcons_cli := {}
        sr_getconnection():exec("SELECT * FROM mastcli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5)),,.t.,@mcons_cli)
        IF LEN(mcons_cli) = 0
                atencao('Nao foi encontrado o Cliente !!!!')
        ENDIF
        mcons_emi := {}
        sr_getconnection():exec("SELECT * FROM saccid WHERE cidade = "+sr_cdbvalue(RTRIM(m_set[1,9]))+" AND uf = "+sr_cdbvalue(RTRIM(m_set[1,10])),,.t.,@mcons_emi)
        IF LEN(mcons_emi) = 0 .OR. EMPTY(mcons_emi[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade da EMPRESA EMITENTE ** '+RTRIM(m_set[1,9])+'-'+RTRIM(m_set[1,10])+' nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cid_emit := mcons_emi[1,1]
        mcons_cid := {}
        sr_getconnection():exec("SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(mcons_cli[1,13]))+"OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(mcons_cli[1,14])),,.t.,@mcons_cid)
        IF LEN(mcons_cid) = 0 .OR. EMPTY(mcons_cid[1,1])
                atencao('Nao e Possivel a emissao desta nota pois o codigo da cidade do CLIENTE nao estar cadastrado !!!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mcod_cid_dest := mcons_cid[1,1]
        mobs1:=mobs2:=mobs3:=mobs4:=mobs5:=mobs6:=mobs7:=mobs8:=mobs9:=mobs10 :=SPACE(50)
        mobs11:=mobs12:=mobs13:=mobs14:=mobs15:=mobs16:=mobs17:=mobs18:=mobs19:=mobs20 :=SPACE(50)
        mretorno := mchnfe := m_ret := ''
        mvlr_icmsub := mbase_icmsub := mtot_imposto := mbase_fcp := mdif_aliq :=mvICMSUFDest := mvICMSUFRemet:= mtICMSUFDest := ;
        mtICMSUFRemet:= mtFCPUFDest := 0
        SET CENTURY ON
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        //mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')
        botao(00,01,04,79,,' VOLUMES')
        DEVPOS(01,01);DEVOUT('Quantidade Item:')
        DEVPOS(02,01);DEVOUT('Peso Bruto.....:')
        DEVPOS(03,01);DEVOUT('Peso Liquido...:')
        botao(06,01,28,79,,' OBSERVACAO NOTA')
        botao(30,01,45,79,,' Duplicatas ')
        DEVPOS(31,11);DEVOUT('Qt.Vezes:')
        DEVPOS(31,25);DEVOUT('Intervalos:')

        DEVPOS(32,11);DEVOUT('No.Dup.:')
        DEVPOS(32,33);DEVOUT('Venc.:')
        DEVPOS(32,52);DEVOUT('Vlr.:')

        DEVPOS(33,11);DEVOUT('No.Dup.:')
        DEVPOS(33,33);DEVOUT('Venc.:')
        DEVPOS(33,52);DEVOUT('Vlr.:')
        DEVPOS(34,11);DEVOUT('No.Dup.:')
        DEVPOS(34,33);DEVOUT('Venc.:')
        DEVPOS(34,52);DEVOUT('Vlr.:')
        DEVPOS(35,11);DEVOUT('No.Dup.:')
        DEVPOS(35,33);DEVOUT('Venc.:')
        DEVPOS(35,52);DEVOUT('Vlr.:')
        DEVPOS(36,11);DEVOUT('No.Dup.:')
        DEVPOS(36,33);DEVOUT('Venc.:')
        DEVPOS(36,52);DEVOUT('Vlr.:')
        DEVPOS(37,11);DEVOUT('No.Dup.:')
        DEVPOS(37,33);DEVOUT('Venc.:')
        DEVPOS(37,52);DEVOUT('Vlr.:')

        DEVPOS(38,11);DEVOUT('No.Dup.:')
        DEVPOS(38,33);DEVOUT('Venc.:')
        DEVPOS(38,52);DEVOUT('Vlr.:')

        DEVPOS(39,11);DEVOUT('No.Dup.:')
        DEVPOS(39,33);DEVOUT('Venc.:')
        DEVPOS(39,52);DEVOUT('Vlr.:')

        DEVPOS(40,11);DEVOUT('No.Dup.:')
        DEVPOS(40,33);DEVOUT('Venc.:')
        DEVPOS(40,52);DEVOUT('Vlr.:')

        DEVPOS(41,11);DEVOUT('No.Dup.:')
        DEVPOS(41,33);DEVOUT('Venc.:')
        DEVPOS(41,52);DEVOUT('Vlr.:')

        DEVPOS(42,11);DEVOUT('No.Dup.:')
        DEVPOS(42,33);DEVOUT('Venc.:')
        DEVPOS(42,52);DEVOUT('Vlr.:')

        DEVPOS(43,11);DEVOUT('No.Dup.:')
        DEVPOS(43,33);DEVOUT('Venc.:')
        DEVPOS(43,52);DEVOUT('Vlr.:')
	IF mtipo_nota = 'N'
	        mtot_quantd := LEN(m_nota)
        	mtot_icm := mtot_icmf:=mtot_peso:=mtot_liq:=mbase_icm:=i := 0
        	FOR i = 1 TO LEN(m_nota)
                        IF m_nota[i,5] = 0
                                LOOP
                        ENDIF
			mtot_liq := mtot_liq + (m_nota[i,18] * m_nota[i,5])
	                mtot_peso := mtot_peso + (m_nota[i,9] * m_nota[i,5])
        	NEXT
        ENDIF
        @ 01,18 GET mtot_quantd PICT '999,999.99'
        @ 02,18 GET mtot_peso PICT '99,999.999'
        @ 03,18 GET mtot_liq PICT '99,999.999'
        READ
	IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
	ENDIF
        mpis:=mconfis:=micms_desc:=0
        i := 0
        FOR i = 1 TO LEN(mpedidos)
                IF i <= 7
                        mobs7 := ALLTRIM(mobs1) + ','+mpedidos[i]
                ELSEIF i <= 14
                        mobs8 := ALLTRIM(mobs2) + ','+mpedidos[i]
                ELSEIF i <= 21
                        mobs9 := ALLTRIM(mobs3) + ','+mpedidos[i]
                ENDIF
        NEXT
        i := 0

        m_obs := {}
/*
        FOR i = 1 TO LEN(m_nota)
                mc_merc := {}
                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(m_nota[i,21]),,.t.,@mc_merc)
                IF LEN(mc_merc) > 0
                        IF ! EMPTY(mc_merc[1,66])
                                mpt := ASCAN(m_obs,mc_merc[1,66])
                                IF mpt > 0
                                        LOOP
                                ENDIF
                                AADD(m_obs,mc_merc[1,66])
                                mc_obs := {}
                                sr_getconnection():exec("SELECT * FROM sacobs WHERE cod_obs = "+sr_cdbvalue(mc_merc[1,66]),,.t.,@mc_obs)
                                IF LEN(mc_obs) > 0
                                        IF EMPTY(mobs1)
                                                mobs1 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs2)
                                                mobs2 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs3)
                                                mobs3 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs4)
                                                mobs4 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs5)
                                                mobs5 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs6)
                                                mobs6 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs7)
                                                mobs7 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs8)
                                                mobs8 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs9)
                                                mobs9 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs10)
                                                mobs10 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs11)
                                                mobs11 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs12)
                                                mobs12 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs13)
                                                mobs13 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs14)
                                                mobs14 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs15)
                                                mobs15 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs16)
                                                mobs16 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs17)
                                                mobs17 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs18)
                                                mobs18 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs19)
                                                mobs19 := mc_obs[1,1]
                                        ELSEIF EMPTY(mobs20)
                                                mobs11 := mc_obs[1,1]
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDIF
        NEXT
*/
        @ 07,1 GET mobs1 PICT '@!'
        @ 08,1 GET mobs2 PICT '@!'
        @ 09,1 GET mobs3 PICT '@!'
        @ 10,1 GET mobs4 PICT '@!'
        @ 11,1 GET mobs5 PICT '@!'
        @ 12,1 GET mobs6 PICT '@!'
        @ 13,1 GET mobs7 PICT '@!'
        @ 14,1 GET mobs8 PICT '@!'
        @ 15,1 GET mobs9 PICT '@!'
        @ 16,1 GET mobs10 PICT '@!'
        @ 17,1 GET mobs11 PICT '@!'
        @ 18,1 GET mobs12 PICT '@!'
        @ 19,1 GET mobs13 PICT '@!'
        @ 20,1 GET mobs14 PICT '@!'
        @ 21,1 GET mobs15 PICT '@!'
        @ 22,1 GET mobs16 PICT '@!'
        @ 23,1 GET mobs17 PICT '@!'
        @ 24,1 GET mobs18 PICT '@!'
        @ 25,1 GET mobs19 PICT '@!'
        @ 26,1 GET mobs20 PICT '@!'
        READ
        opcao := op_simnao('S','Confirma as observacoes:')
        IF opcao = 'N'
	        wvw_lclosewindow()
                RETURN NIL
        ENDIF

        IF via = '1'
        	aret:={}
                lExit := .T.
                while lExit
                               //sr_begintransaction()
                               //try
                                       sr_getconnection():exec( "select numero from sacnota where sr_recno = 1 for update with lock",,.t.,@aret)
                                       if len(aRet)  == 0
                              	                sr_getconnection():exec("insert into sacnota (numero,sr_deleted,serie,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ','1',1)",,.f.)
                              	                mdocumento = STRZERO(1,6)
                                       else
                                               mdocumento = STRZERO(VAL(aret[1,1])+1,6)
                                               mnum = strzero(VAL(aret[1,1])+1,6)
                      	                        sr_getconnection():exec("update sacnota set numero = " + sr_cdbvalue(mnum) + ",serie = " + sr_cdbvalue('1') +"  where sr_recno = 1 ",,.f.)
                                       endif
                                       sr_committransaction()
                                       lExit:=.F.
                               //catch e
                               //        tracelog(valtoprg())
                               //        sr_rollbacktransaction()
                               //end
                               //sr_endtransaction()
                end
                sr_getconnection():exec("COMMIT",,.f.)
                mprg := ALLTRIM(STR(VAL(mdocumento)))
                atencao('Foi Gerada a Nota Fiscal No.: '+mdocumento)
                wvw_lclosewindow()
                m_set[1,11] := STRTRAN(m_set[1,11],'-','')
                m_set[1,11] := STRTRAN(m_set[1,11],'.','')

                mcons_cli[1,26] := STRTRAN(mcons_cli[1,26],'-','')
                mcons_cli[1,26] := STRTRAN(mcons_cli[1,26],'.','')
                i := mbase_aux := mpr_fat := f := 0
                SR_BEGINTRANSACTION()
                        FOR i = 1 TO LEN(m_nota)
                                IF m_nota[i,5] = 0
                                        LOOP
                                ENDIF
	               	        mpr_fat := m_nota[i,7]
                                f++
                                //TRY
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(m_nota[i,21]),,.t.,@aret)
                                /*
                                IF msai_ent = 'S'
                                        ccomm :="UPDATE mastprod SET saldo = "+sr_cdbvalue(aret[1,55] - m_nota[i,5])
                                        IF EMPTY(mcons_cli[1,33])
                                                mbase_aux := iat((mpr_fat * m_nota[i,5])+((mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                        ELSE
                                                mbase_aux := iat(mpr_fat * m_nota[i,5],2)
                                        ENDIF
                                ELSE
                                        ccomm :="UPDATE mastprod SET saldo = "+sr_cdbvalue(aret[1,55] + m_nota[i,5])
                                        ccomm := ccomm +",icm = "+sr_cdbvalue(aret[1,60] + iat((m_nota[i,20]/100) * (mpr_fat * m_nota[i,5]),2))
                                        IF EMPTY(mcons_cli[1,33])
                                                mbase_aux := iat((mpr_fat * m_nota[i,5])+((mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)),2)
                                        ELSE
                                                mbase_aux := iat(mpr_fat * m_nota[i,5],2)
                                        ENDIF
                                ENDIF
                                ccomm := ccomm +",data_atu = "+sr_cdbvalue(mdata_sis)
                                ccomm := ccomm + " WHERE codigo = "+sr_cdbvalue(m_nota[i,21])
                                sr_getconnection():exec(ccomm,,.f.)
                                */

                                ccomm := 'INSERT INTO sacmovnt ('+;
                                'empresa        ,'+;//1
                                'modelo         ,'+;//2
                                'num_ped        ,'+;//3
                                'tipo_nota	,'+;//4
                                'documento      ,'+;//5
                                'serie    	,'+;//6
                                'codigo	        ,'+;//7
                                'produto        ,'+;//8
                                'unidade        ,'+;//11
                                'data_s_e       ,'+;//12
                                'ent_sai        ,'+;//13
                                'quantd 	,'+;//14
                                'pr_venda       ,'+;//15
                                'vl_vend        ,'+;//16
                                'cod_vend       ,'+;//17
                                'cod_cli        ,'+;//18
                                'cliente        ,'+;//19
                                'uf_cli 	,'+;//20
                                'cgc_cli        ,'+;//21
                                'cpf_cli        ,'+;//22
                                'insc_cli       ,'+;//23
                                'icm            ,'+;//24
                                'vl_fatura      ,'+;//27
                                'icm_f 	        ,'+;//28
                                'pr_unit        ,'+;//30
                                'frete 	        ,'+;//32
                                'encargo_f      ,'+;//33
                                'disp_asse      ,'+;//34
                                'tipo 	        ,'+;//35
                                'isento 	,'+;//36
                                'sittrib	,'+;//37                'desc1 	        ,'+;//38
                                'peso 	        ,'+;//39
                                'peso_liq       ,'+;//40
                                'bebida 	,'+;//42
                                'tp_venda       ,'+;//43
                                'cond_vezes     ,'+;//44
                                'cod_nat        ,'+;//46
                                'obs1           ,'+;//48
                                'obs2           ,'+;//49
                                'obs3           ,'+;//50
                                'obs4           ,'+;//51
                                'obs5           ,'+;//52
                                'obs6           ,'+;//53
                                'cod_nota       ,'+;//54
                                'norm_ele       ,'+;//55
                                'vlr_icm        ,'+;//57
                                'base_icm       ,'+;//58
                                'base_icmsu     ,'+;//59
                                'vlr_icmsub     ,'+;//60
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mcodempresa         )+','+; //1
                                sr_cdbvalue(mmodelo             )+','+; //2
                                sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //3
                                sr_cdbvalue(mtipo_nota          )+','+; //4
                                sr_cdbvalue('NF'+mdocumento     )+','+; //5
                                sr_cdbvalue(mserie_not          )+','+; //6
                                sr_cdbvalue(m_nota[i,19]        )+','+; //7
                                sr_cdbvalue(m_nota[i,2]         )+','+; //8
                                sr_cdbvalue(m_nota[i,6]         )+','+; //11
                                sr_cdbvalue(mdata               )+','+; //12
                                sr_cdbvalue(msai_ent            )+','+; //13
                                sr_cdbvalue(m_nota[i,3]         )+','+; //14
                                sr_cdbvalue(m_nota[i,4]         )+','+; //15
                                sr_cdbvalue(iat(mpr_fat,'T',4)    )+','+; //16
                                sr_cdbvalue(STRZERO(mcod_vend,3))+','+; //17
                                sr_cdbvalue(STRZERO(mcod_cli,5) )+','+; //18
                                sr_cdbvalue(mcliente            )+','+; //19
                                sr_cdbvalue(muf_cli             )+','+; //20
                                sr_cdbvalue(mcons_cli[1,21]     )+','+; //21
                                sr_cdbvalue(mcons_cli[1,23]     )+','+; //22
                                sr_cdbvalue(mcons_cli[1,22]     )+','+; //23
                                sr_cdbvalue(m_nota[i,20]        )+','+; //24
                                sr_cdbvalue(iat(mpr_fat,'T',2)    )+','+; //27
                                sr_cdbvalue(m_nota[i,13]     )+','+; //28
                                sr_cdbvalue(iat(mpr_fat,'T',2) )+','+; //30
                                sr_cdbvalue(mfrete           )+','+; //32
                                sr_cdbvalue(mencargo         )+','+; //33
                                sr_cdbvalue(mseguro          )+','+; //34
                                sr_cdbvalue('03'             )+','+; //35
                                sr_cdbvalue(m_nota[i,14]     )+','+; //36
                                sr_cdbvalue(m_nota[i,33]     )+','+; //37                sr_cdbvalue(m_nota[i,11]     )+','+; //38
                                sr_cdbvalue(m_nota[i,9]      )+','+; //39
                                sr_cdbvalue(m_nota[i,18]     )+','+; //40
                                sr_cdbvalue(m_nota[i,17]     )+','+; //42
                                sr_cdbvalue(mtp_vend         )+','+; //43
                                sr_cdbvalue(mcond_vezes      )+','+; //44
                                sr_cdbvalue(m_nota[i,34]     )+','+; //46
                                sr_cdbvalue(mobs1            )+','+; //48
                                sr_cdbvalue(mobs2            )+','+; //49
                                sr_cdbvalue(mobs3            )+','+; //50
                                sr_cdbvalue(mobs4            )+','+; //51
                                sr_cdbvalue(mobs5            )+','+; //52
                                sr_cdbvalue(mobs6            )+','+; //53
                                sr_cdbvalue(mcod_nota        )+','+; //54
                                sr_cdbvalue('E'              )+','   //55
                                IF mtipo_nota = 'N'
                                        mtot_icmf := mtot_icmf + iat(m_nota[i,13] * ((mpr_fat*(m_set[1,33]/100+1)) * m_nota[i,5]),'T',2)
                                        ccomm := ccomm + sr_cdbvalue(iat(((mpr_fat*(m_set[1,33]/100+1)) * m_nota[i,5])*.12,'T',2))+','
                                        IF VAL(m_nota[i,33]) = 40 .OR. VAL(m_nota[i,33])= 41 .OR. VAL(m_nota[i,33]) = 50
                                                mbase_icm := mbase_icm + 0
                                                mtot_icm := mtot_icm + 0
                                                ccomm := ccomm + sr_cdbvalue(0)+','
                                                ccomm := ccomm + sr_cdbvalue(0)+','
                                        ELSEIF  m_nota[i,20] > 0
                                                IF m_nota[i,25] = 'S'
                                                        mbase_icm = mbase_icm + iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),'T',2)
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),'T',2)
                                                        ccomm := ccomm + sr_cdbvalue(iat((m_nota[i,20]/100) * (((mpr_fat * m_nota[i,5])*m_nota[i,34])),'T',2))+','
                                                        ccomm := ccomm + sr_cdbvalue(iat((((mpr_fat * m_nota[i,5])*m_nota[i,34])),'T',2))+','
                                                ELSE
                                                        mbase_icm = mbase_icm + iat((mpr_fat * m_nota[i,5]),'T',2)
                                                        mtot_icm := mtot_icm + iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),'T',2)

                                                        ccomm := ccomm + sr_cdbvalue(iat((m_nota[i,20]/100) * (mpr_fat*m_nota[i,5]),'T',2))+','
                                                        ccomm := ccomm + sr_cdbvalue(iat((mpr_fat * m_nota[i,5]),'T',2))+','
                                                ENDIF
                                        ELSE
                                                ccomm := ccomm + sr_cdbvalue(0)+','
                                                ccomm := ccomm + sr_cdbvalue(0)+','
                                                mtot_icm := mtot_icm + 0
                                                mbase_icm 	:= mbase_icm + 0
                                        ENDIF
                                ELSE
                                        ccomm := ccomm + sr_cdbvalue(0)+','
                                        ccomm := ccomm + sr_cdbvalue(0)+','
                                        ccomm := ccomm + sr_cdbvalue(0)+','
                                ENDIF
                                //ccomm := ccomm + sr_cdbvalue(0)+','
                                ccomm := ccomm + sr_cdbvalue(0)+','
                                ccomm := ccomm + sr_cdbvalue(' ')+')'
                                sr_getconnection():exec(ccomm,,.f.)
                        NEXT
                        sr_committransaction()
                sr_endtransaction()
                sr_getconnection():exec("COMMIT",,.f.)
                mdoc_aux := mdocumento
                mbase_icm := mbase_icm + mfrete
                mtot_icm := mtot_icm + (mfrete * (m_set[1,33]/100))
                mtot_icm := iat(mtot_icm,2)
                sr_getconnection():exec('INSERT INTO sactotnt ('+;
                        'empresa  	,'+;//1
                        'modelo  	,'+;//2
                        'cod_nota 	,'+;//3
                        'tipo_nota 	,'+;//4
                        'num_ped 	,'+;//5
                        'documento 	,'+;//6
                        'serie     	,'+;//7
                        'emissao 	,'+;//8
                        'cod_cli 	,'+;//9
                        'cliente 	,'+;//10
                        'uf_cli 	,'+;//11
                        'cid_cli 	,'+;//12
                        'insc_cli 	,'+;//13
                        'cgc_cli 	,'+;//14
                        'cpf_cli 	,'+;//15
                        'cod_vend 	,'+;//16
                        'ent_sai 	,'+;//17
                        'vl_base        ,'+;//18
                        'vl_icm         ,'+;//19
                        'ipi            ,'+;//23
                        'peso           ,'+;//24
                        'peso_liq       ,'+;//25
                        'vl_nota        ,'+;//26
                        'vl_prod        ,'+;//27
                        'frete          ,'+;//28
                        'encargo_f      ,'+;//29
                        'disp_asse      ,'+;//30
                        'cod_nat        ,'+;//31
                        'obs1           ,'+;//32
                        'obs2           ,'+;//33
                        'obs3           ,'+;//34
                        'obs4           ,'+;//35
                        'obs5           ,'+;//36
                        'obs6           ,'+;//37
                        'obs7           ,'+;//38
                        'obs8           ,'+;//39
                        'obs9           ,'+;//40
                        'obs10          ,'+;//41
                        'obs11          ,'+;//42
                        'obs12          ,'+;//43
                        'obs13          ,'+;//44
                        'obs14  	,'+;//45
                        'obs15          ,'+;//46
                        'obs16          ,'+;//47
                        'obs17          ,'+;//48
                        'obs18          ,'+;//49
                        'obs19          ,'+;//50
                        'obs20          ,'+;//51
                        'norm_ele       ,'+;//52
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mcodempresa         )+','+; //1
                        sr_cdbvalue(mmodelo             )+','+; //2
                        sr_cdbvalue(mcod_nota           )+','+; //3
                        sr_cdbvalue(mtipo_nota          )+','+; //4
                        sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                        sr_cdbvalue('NF'+mdocumento     )+','+; //6
                        sr_cdbvalue(mserie_not          )+','+; //7 
                        sr_cdbvalue(mdata               )+','+; //8 
                        sr_cdbvalue(STRZERO(mcod_cli,5) )+','+; //9 
                        sr_cdbvalue(mcliente            )+','+; //10
                        sr_cdbvalue(muf_cli             )+','+; //11
                        sr_cdbvalue(mcid_cli            )+','+; //12
                        sr_cdbvalue(mcons_cli[1,22]     )+','+; //13
                        sr_cdbvalue(mcons_cli[1,21]     )+','+; //14
                        sr_cdbvalue(mcons_cli[1,23]     )+','+; //15
                        sr_cdbvalue(STRZERO(mcod_vend,3))+','+; //16
                        sr_cdbvalue(msai_ent            )+','+; //17
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',cbase_icm ,mbase_icm   ),2))+','+; //18
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_icm  ,mtot_icm    ),2))+','+; //19
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_ipi  ,mtot_ipi    ),2))+','+; //23
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_peso ,mtot_peso   ),2))+','+; //24
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_liq  ,mtot_liq    ),2))+','+; //25
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_nota ,(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mvlr_icmsub)),2))+','+; //26
                        sr_cdbvalue(iat(IF(mtipo_nota = 'C',ctot_prod ,IF(mtipo_nota = 'N',mtot_nota,mtot_prod) ),2))+','+; //27
                        sr_cdbvalue(mfrete   )+','+; //28
                        sr_cdbvalue(mencargo )+','+; //29
                        sr_cdbvalue(mseguro  )+','+; //30
                        sr_cdbvalue(mcod_nat )+','+; //31
                        sr_cdbvalue(mobs1    )+','+; //32
                        sr_cdbvalue(mobs2    )+','+; //33
                        sr_cdbvalue(mobs3    )+','+; //34
                        sr_cdbvalue(mobs4    )+','+; //35
                        sr_cdbvalue(mobs5    )+','+; //36
                        sr_cdbvalue(mobs6    )+','+; //37
                        sr_cdbvalue(mobs7    )+','+; //38
                        sr_cdbvalue(mobs8    )+','+; //39
                        sr_cdbvalue(mobs9    )+','+; //40
                        sr_cdbvalue(mobs10   )+','+; //41
                        sr_cdbvalue(mobs11   )+','+; //42
                        sr_cdbvalue(mobs12   )+','+; //43
                        sr_cdbvalue(mobs13   )+','+; //44
                        sr_cdbvalue(mobs14   )+','+; //45
                        sr_cdbvalue(mobs15   )+','+; //46
                        sr_cdbvalue(mobs16   )+','+; //47
                        sr_cdbvalue(mobs17   )+','+; //48
                        sr_cdbvalue(mobs18   )+','+; //49
                        sr_cdbvalue(mobs19   )+','+; //50
                        sr_cdbvalue(mobs20   )+','+; //51
                        sr_cdbvalue('E'      )+','+; //52
                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        //ATENCAO(ALLTRIM(mcons_cid[1,1]))
        //ATENCAO(ALLTRIM(mrefnfe) )
        mensagem('CRIANDO a Nota No. '+mdocumento)
                //mArq := FCREATE('ENTNFE.TMP')
        sLinhas     :=  '[Identificacao]'                  + m_qp
        mdata_nfe := DTOC(mdata)+' '+time()
        //atencao(mdata_nfe+' '+m_indiv[1,37])
        mtbase_fcp:=0
        m_set[1,11] := STRTRAN(m_set[1,11],'-','')
        m_set[1,11] := STRTRAN(m_set[1,11],'.','')
        mcons_cli[1,26] := STRTRAN(mcons_cli[1,26],'-','')
        mcons_cli[1,26] := STRTRAN(mcons_cli[1,26],'.','')
        IF ALLTRIM(mcons_cli[1,22]) = '' .OR. EMPTY(mcons_cli[1,22])
                mindIEDest := '9'
        ELSEIF ALLTRIM(mcons_cli[1,22]) = 'ISENTO'
                mindIEDest := '2'
        ELSE
                mindIEDest := '1'
        ENDIF
        sLinhas := sLinhas + 'NaturezaOperacao='+ALLTRIM(mnatureza)          + m_qp + ; //'Modelo='+ALLTRIM(mmodelo)                      + m_qp + ;
                        'Modelo=55'                      + m_qp + ;
                        'Serie='+ALLTRIM(STRZERO(VAL(mserie_not),2))    + m_qp + ;
                        'Codigo= 0'                                     + m_qp + ;
                        'Numero='+ALLTRIM(mdocumento)                   + m_qp + ;
                        'Serie='+ALLTRIM(STR(VAL(mserie_not)))          + m_qp + ;
                        'Emissao='+mdata_nfe                   + m_qp + ;
                        'Saida='+mdata_nfe                     + m_qp + ;
                        IF(msai_ent = 'S','Tipo=1','Tipo=0')            + m_qp + ;
                        IF(mtp_vend = 'AP','FormaPag=1',IF(mtp_vend = 'AV','FormaPag=0','FormaPag=2'))   + m_qp +;
                        'Finalidade='+mtipo_nfe                         + m_qp + ;
                        'idDest='+IF(mcons_cli[1,14] = ALLTRIM(m_set[1,10]),'1','2')          + m_qp + ;
                        'indFinal='+ALLTRIM(mindFinal)                  + m_qp + ;
                        'indPress='+ALLTRIM(mindPress)                  + m_qp + ;
                        'Tplmp=1'                                       + m_qp + ;
                        '[NFRef001]'                                    + m_qp + ;
                        'Tipo='+ALLTRIM(mtipo_sigla)                    + m_qp + ;
                        'IE='+ALLTRIM(mei)                              + m_qp + ;
                        'refNFe='+ALLTRIM(mrefnfe)                      + m_qp + ;
                        'refCTe='+ALLTRIM(mrefcte)                      + m_qp + ;
                        'ModECF='+ALLTRIM(mmodecf)                      + m_qp + ;
                        'nECF='+ALLTRIM(mnecf)                          + m_qp + ; //
                        'nCOO='+ALLTRIM(mncoo)                          + m_qp + ;
                        '[Emitente]'                                    + m_qp + ; //
                        'CNPJ='+mcgc_firm                               + m_qp + ; //'CNPJ=03726794000163'                           + m_qp + ; //
                        'IE='+ALLTRIM(m_set[1,14])                     + m_qp + ; //'IE=026954567'                                  + m_qp + ;
                        'Razao='+ALLTRIM(m_set[1,2])                  + m_qp + ;
                        'Fantasia='+ALLTRIM(m_set[1,3])               + m_qp + ;
                        'Fone='+ALLTRIM(m_set[1,12])                   + m_qp + ;
                        'CEP='+ALLTRIM(m_set[1,11])                    + m_qp + ;
                        'Logradouro='+ALLTRIM(m_set[1,5])             + m_qp + ;
                        'Numero='+ALLTRIM(m_set[1,6])                 + m_qp + ;
                        'Complemento='+ALLTRIM(m_set[1,7])            + m_qp + ;
                        'Bairro='+ALLTRIM(m_set[1,8])                 + m_qp + ;
                        'CidadeCod='+ALLTRIM(mcod_cid_emit)             + m_qp + ;
                        'Cidade='+ALLTRIM(m_set[1,9])                 + m_qp + ;
                        'UF='+ALLTRIM(m_set[1,10])                      + m_qp + ;
                        'CRT=0'                                         + m_qp + ;
                        '[Destinatario]'                                + m_qp + ;
                        IF( ! EMPTY(mcons_cli[1,21]),'CNPJ='+ALLTRIM(mcons_cli[1,21]),'CPF='+ALLTRIM(mcons_cli[1,23]))+ m_qp+;
                        'indIEDest='+mindIEDest                         + m_qp + ;
                        'IE='+ALLTRIM(mcons_cli[1,22])                  + m_qp + ;
                        'NomeRazao='+mcons_cli[1,1]+' - '+ALLTRIM(mcons_cli[1,2]) + m_qp + ;
                        'Fone='+ALLTRIM(mcons_cli[1,18])                          + m_qp + ;
                        'CEP='+SUBSTR(ALLTRIM(mcons_cli[1,15]),1,8)                           + m_qp + ;
                        'Logradouro='+ALLTRIM(mcons_cli[1,8])                    + m_qp + ;
                        'Numero='+RTRIM(mcons_cli[1,9])                         + m_qp + ;
                        'Complemento='+ALLTRIM(mcons_cli[1,10])                  + m_qp + ;
                        'Bairro='+ALLTRIM(mcons_cli[1,11])                        + m_qp + ;
                        'CidadeCod='+ALLTRIM(mcons_cid[1,1])                      + m_qp + ;
                        'Cidade='+ALLTRIM(mcons_cli[1,13])                        + m_qp + ;
                        'UF='+mcons_cli[1,14]                                     + m_qp
        m_email := mcons_cli[1,16]
        mbase_icm := i := 0
        FOR i = 1 TO LEN(m_nota)
                IF m_nota[i,5] = 0
                        LOOP
                ENDIF
                mpr_fat := iat(m_nota[i,4],'T',2)
                mcons_prod := {}
                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(m_nota[i,19]),,.t.,@mcons_prod)
                IF LEN(mcons_prod) = 0
                        LOOP
                ENDIF
                //atencao(transform(ver_ncm(mcons_prod[1,70],mcons_prod[1,68]),'999,999.99'))
                mtot_imposto := mtot_imposto + iat(((m_nota[i,3] * mpr_fat) * ((ver_ncm(mcons_prod[1,38])+18) / 100)),m_set[1,33])
                sLinhas := slinhas +    '[Produto'+STRZERO(i,3)+']'      + m_qp + ; //'CFOP='+STRTRAN(mcod_nat,'.','') + m_qp + ;
                                        'CFOP='+STRTRAN(m_nota[i,34],'.','') + m_qp + ;
                                        'Codigo='+STR(mcons_prod[1,1],5)+ m_qp + ;
                                        'Descricao='+ALLTRIM(m_nota[i,2])+;
                                        IF(m_set[1,14] = 'S',IF(LEN(ALLTRIM(mcons_prod[1,2])) >= 13,' - EAN: '+ALLTRIM(mcons_prod[1,2]),''),'')+ m_qp +;
                                        IF(m_set[1,14] = 'S',IF(LEN(ALLTRIM(mcons_prod[1,2])) >= 13,'EAN='+ALLTRIM(mcons_prod[1,2]),''),'EAN=')+ m_qp +;
                                        'NCM='+ALLTRIM(mcons_prod[1,38])+ m_qp
                                        //mcest := ALLTRIM(mcons_prod[1,114])
                                        //IF EMPTY(mcest)
                                                mcest := ver_cest(ALLTRIM(mcons_prod[1,38]))
                                        //ENDIF
                                        //ATENCAO(ver_cest(ALLTRIM(mcons_prod[1,70])))
                                        IF ! EMPTY(mcest)
                                                sLinhas := slinhas +'CEST='+mcest+ m_qp
                                        ENDIF
                                        sLinhas := slinhas +'Unidade='+ALLTRIM(mcons_prod[1,7])+ m_qp + ;
                                        'Quantidade='+STRTRAN(ALLTRIM(TRANSFORM(m_nota[i,3],m_set[1,31])),',','')+ m_qp + ;
                                        'ValorUnitario='+ALLTRIM(TRANSFORM(iat(mpr_fat,'T',2),STRTRAN(ALLTRIM(m_set[1,32]),',','')))+ m_qp + ;
                                        'ValorTotal='+ALLTRIM(TRANSFORM(iat(mpr_fat,'T',2)*m_nota[i,3],STRTRAN(ALLTRIM(m_set[1,32]),',','')))+ m_qp + ;
                                        '[ICMS'+STRZERO(i,3)+']'+ m_qp
                                        IF m_set[1,34] = 'S'
                                                /*
                                                sLinhas := slinhas +'CSOSN='+STRZERO(VAL(mcons_prod[1,68]),3)+ m_qp + ;
                                                                    'Origem='+SUBSTR(mcons_prod[1,68],1,1)+ m_qp +;
                                                                    'ModalidadeST=4'+ m_qp
                                                */
                                                sLinhas := slinhas +'CSOSN='+STRZERO(VAL(m_nota[i,33]),4)+ m_qp + ;
                                                                    'Origem='+SUBSTR(m_nota[i,33],1,1)+ m_qp +;
                                                                    'ModalidadeST=4'+ m_qp
                                        ELSE
                                                //sLinhas := slinhas + IF(LEN(ALLTRIM(mcons_prod[1,68])) > 3,'CST='+STRZERO(VAL(mcons_prod[1,68]),3),'CST='+STRZERO(VAL(mcons_prod[1,68]),2))+ m_qp
                                                sLinhas := slinhas + IF(LEN(ALLTRIM(m_nota[i,33])) > 3,'CST='+STRZERO(VAL(m_nota[i,33]),3),'CST='+STRZERO(VAL(m_nota[i,33]),2))+ m_qp
                                        ENDIF
                                        mtot_nota := mtot_nota + (iat(mpr_fat,'T',2)*m_nota[i,3])
                                        IF ! EMPTY(m_nota[i,20])
                                                IF EMPTY(mcons_cli[1,22])
                                                        IF VAL(m_nota[i,33]) = 40 .OR. VAL(m_nota[i,33])= 41 .OR. VAL(m_nota[i,33]) = 50
                                                                mbase_icm := mbase_icm + 0
                                                                mtot_icm := mtot_icm + 0
                                                        ELSE
                                                                mbase_icm := mbase_icm + iat((mpr_fat * m_nota[i,5])+((mpr_fat * m_nota[i,5]) * (m_nota[i,24]/100)),'T',2)
                                                        ENDIF
                                                        sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(iat((mpr_fat * m_nota[i,3])+((mpr_fat * m_nota[i,3]) * (m_nota[i,24]/100)),'T',2),'999999.99'))+ m_qp + ;
                                                                                'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,18],'999.99'))+ m_qp + ;
                                                                                'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,18]/100) * iat((mpr_fat * m_nota[i,3])+((mpr_fat * m_nota[i,3]) * (m_nota[i,24]/100)),'T',2),'T',2),'999999.99'))+ m_qp

                                                        mbase_fcp := iat((mpr_fat * m_nota[i,3])+((mpr_fat * m_nota[i,3]) * (m_nota[i,24]/100)),'T',2)

                                                ELSE
                                                        IF VAL(m_nota[i,33]) = 40 .OR. VAL(m_nota[i,33])= 41 .OR. VAL(m_nota[i,33]) = 50
                                                                mbase_icm := mbase_icm + 0
                                                                mtot_icm := mtot_icm + 0
                                                        ELSE
                                                                mbase_icm = mbase_icm + iat((mpr_fat * m_nota[i,3]),'T',2)
                                                        ENDIF
                                                        sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(iat((mpr_fat * m_nota[i,3]),'T',2),'999999.99'))+ m_qp + ;
                                                                                'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,18],'999.99'))+ m_qp + ;
                                                                                'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,18]/100) * iat((mpr_fat*m_nota[i,3]),'T',2),'T',2),'999999.99'))+ m_qp

                                                        mbase_fcp := iat((iat(mpr_fat) * m_nota[i,3]),2)
                                                ENDIF
                                        ELSE
                                                sLinhas := slinhas +    'vBC='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp + ;
                                                                        'pICMS='+ALLTRIM(TRANSFORM(m_nota[i,18],'999.99'))+ m_qp + ;
                                                                        'vICMS='+ALLTRIM(TRANSFORM(iat((m_nota[i,18]/100) * iat((mpr_fat*m_nota[i,3]),'T',2),'T',2),'999999.99'))+ m_qp
                                                mbase_fcp := 0
                                        ENDIF
                                        IF mcons_cli[1,14] <> m_set[1,10] .AND. mindFinal = '2'
                                                mdifal := (mbase_fcp * .18) - (mbase_fcp * .12)
                                                mvICMSUFDest := iat((mdifal * .4),'T')
                                                mvICMSUFRemet:= iat((mdifal * .6),'T')
                                                mtICMSUFDest := mtICMSUFDest + mvICMSUFDest
                                                mtICMSUFRemet:= mtICMSUFRemet + mvICMSUFRemet
                                                mtFCPUFDest := iat(mbase_fcp*.02)

                                                sLinhas := slinhas +'[ICMSUFDest'+STRZERO(i,3)+']'+ m_qp + ;
                                                                     'vBCUFDest='+ALLTRIM(TRANSFORM(mbase_fcp,'999999.99'))+ m_qp + ;
                                                                     'pFCPUFDest='+ALLTRIM(TRANSFORM(2,'999.99'))+ m_qp + ;
                                                                     'pICMSUFDest='+ALLTRIM(TRANSFORM(18,'999.99'))+ m_qp + ;
                                                                     'pICMSInter='+ALLTRIM(TRANSFORM(12,'999.99'))+ m_qp + ;
                                                                     'pICMSInterPart='+ALLTRIM(TRANSFORM(40,'999.99'))+ m_qp + ;
                                                                     'vFCPUFDest='+ALLTRIM(TRANSFORM(mbase_fcp*.02,'999999.99'))+ m_qp + ;
                                                                     'vICMSUFDest='+ALLTRIM(TRANSFORM(mvICMSUFDest,'999999.99'))+ m_qp + ;
                                                                     'vICMSUFRemet='+ALLTRIM(TRANSFORM(mvICMSUFRemet,'999999.99'))+ m_qp
                                        ENDIF
                                        */
                                        IF ! EMPTY(m_nota[i,24])
                                                sLinhas := slinhas +  '[IPI'+STRZERO(i,3)+']'+ m_qp + ;
                                                IF(LEN(ALLTRIM(m_nota[i,33])) > 3,'CST='+STRZERO(VAL(m_nota[i,33]),3),'CST='+STRZERO(VAL(m_nota[i,33]),2))+ m_qp + ;
                                                'vBC='+ALLTRIM(TRANSFORM(iat((iat(mpr_fat,'T',2) * m_nota[i,3]),'T',2),'999999.99'))+ m_qp + ;
                                                'pIPI='+ALLTRIM(TRANSFORM(m_nota[i,24],'999999.99'))+ m_qp + ;
                                                'vIPI='+ALLTRIM(TRANSFORM((iat(mpr_fat,'T')*m_nota[i,3])*(m_nota[i,24]/100),'999999.99'))+ m_qp
                                        ENDIF
        NEXT
        IF mtipo_nota = 'N'
                mtot_nota := mtot_nota  - (mpis+mconfis+micms_desc)
        ENDIF

        */
        sLinhas := slinhas + '[Total]'+ m_qp
        IF mtipo_nota = 'C'
                sLinhas := slinhas + 'BaseICMS='+ALLTRIM(TRANSFORM(cbase_icm,'999999.99'))+ m_qp + ;
                'ValorICMS='+ALLTRIM(TRANSFORM(ctot_icm,'999999.99'))+ m_qp+;
                'ValorProduto='+ALLTRIM(TRANSFORM(ctot_prod,'999999.99'))+ m_qp + ;
                'BaseICMSSubstituicao='+ALLTRIM(TRANSFORM(cbase_icmf,'999999.99'))+ m_qp + ;
                'ValorICMSSubstituicao='+ALLTRIM(TRANSFORM(ctot_icmf,'999999.99'))+ m_qp + ;
                'ValorFrete='+ALLTRIM(TRANSFORM(mfrete,'999999.99'))+ m_qp + ;
                'ValorSeguro='+ALLTRIM(TRANSFORM(mseguro,'999999.99'))+ m_qp + ;
                'ValorIPI='+ALLTRIM(TRANSFORM(ctot_ipi,'999999.99'))+ m_qp + ;
                'ValorOutrasDespesas='+ALLTRIM(TRANSFORM(mencargo,'999999.99'))+ m_qp + ;
                'ValorNota='+ALLTRIM(TRANSFORM(ctot_nota,'999999.99'))+ m_qp + ;
                'vICMSDeson='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp

        ELSE
                sLinhas := slinhas + 'BaseICMS='+ALLTRIM(TRANSFORM(mbase_icm,'999999.99'))+ m_qp + ;
                'ValorICMS='+ALLTRIM(TRANSFORM(mtot_icm,'999999.99'))+ m_qp

                IF mcons_cli[1,25] <> m_set[1,10]
                        sLinhas := slinhas + 'vFCPUFDest='+ALLTRIM(TRANSFORM(mtFCPUFDest,'999999.99'))+ m_qp + ;
                        'vICMSUFDest='+ALLTRIM(TRANSFORM(mtICMSUFDest,'999999.99'))+ m_qp + ;
                        'vICMSUFRemet='+ALLTRIM(TRANSFORM(mtICMSUFRemet,'999999.99'))+ m_qp
                ENDIF
                */
                sLinhas := slinhas + 'ValorProduto='+ALLTRIM(TRANSFORM(mtot_nota,'999999.99'))+ m_qp + ;
                'BaseICMSSubstituicao='+ALLTRIM(TRANSFORM(mbase_icmsub,'999999.99'))+ m_qp + ;
                'ValorICMSSubstituicao='+ALLTRIM(TRANSFORM(mvlr_icmsub,'999999.99'))+ m_qp + ;
                'ValorFrete='+ALLTRIM(TRANSFORM(mfrete,'999999.99'))+ m_qp + ;
                'ValorSeguro='+ALLTRIM(TRANSFORM(mseguro,'999999.99'))+ m_qp + ;
                'ValorIPI='+ALLTRIM(TRANSFORM(mtot_ipi,'999999.99'))+ m_qp + ;
                'ValorOutrasDespesas='+ALLTRIM(TRANSFORM(mencargo,'999999.99'))+ m_qp + ;
                'ValorNota='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mfrete + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp +;
                'vICMSDeson='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
                //'ValorNota='+ALLTRIM(TRANSFORM(mtot_nota + mtot_icmf + mfrete + mseguro + mencargo + mtot_ipi + mvlr_icmsub,'999999.99'))+ m_qp
        ENDIF
        mcons_cid := {}
        cComm := "SELECT * FROM saccid WHERE (cidade = "+sr_cdbvalue(RTRIM(mcons_cli[1,13]))+" OR cidade IS NULL) AND uf = "+sr_cdbvalue(RTRIM(mcons_cli[1,25]))
        sr_getconnection():exec(ccomm,,.t.,@mcons_cid)
        IF LEN(mcons_cid) > 0 .AND. ! EMPTY(mcons_cid[1,1])
                sLinhas := slinhas +    '[Transportador]'+ m_qp + ;
                                        'FretePorConta='+ALLTRIM(mfrete_trans)+ m_qp + ;
                                        'CnpjCpf='+ALLTRIM(mcgc_trans)+ m_qp + ;
                                        'NomeRazao='+ALLTRIM(mnome_trans)+ m_qp + ;
                                        'IE='+ALLTRIM(minsc_trans)+ m_qp + ;
                                        'Endereco='+ALLTRIM(mend_trans)+ m_qp + ;
                                        'Cidade='+ALLTRIM(mmun_trans)+ m_qp + ;
                                        'UF='+ALLTRIM(muf_trans)+ m_qp + ;
                                        'CidadeCod='+ m_qp + ;
                                        'Placa='+ALLTRIM(mplaca_trans)+ m_qp + ;
                                        'UFPlaca='+ALLTRIM(mpluf_trans)+ m_qp +;
                                        'RNTC='+ALLTRIM(mantt)+ m_qp
        ENDIF
        sLinhas := slinhas +    '[Volume001]'+ m_qp + ;
                                'Quantidade='+ALLTRIM(TRANSFORM(mtot_quantd,'999999'))+ m_qp + ;
                                'Especie='+ALLTRIM(mesp_trans)+ m_qp + ;
                                'Marca='+ALLTRIM(mmarca_trans)+ m_qp + ;
                                'Numeracao='+ALLTRIM(mnum_trans)+ m_qp + ;
                                'PesoLiquido='+ALLTRIM(TRANSFORM(mtot_liq,'999999.99'))+ m_qp + ;
                                'PesoBruto='+ALLTRIM(TRANSFORM(mtot_peso,'999999.99'))+ m_qp

        sLinhas := slinhas +    '[fatura]'+ m_qp + ;
                'nfat='+ALLTRIM(STR(VAL(SUBSTR(mcond_vezes,1,1)) + VAL(SUBSTR(mcond_vezes,2,2))))+ m_qp + ;
                'vorig='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mfrete + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp +;
                'vdesc=0'+ m_qp +;
                'vliq='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mfrete + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp

        IF mtipo_nfe = '3' .OR. mtipo_nfe = '4'
                sLinhas := slinhas +    '[pag001]'+ m_qp + ;
                                        'tpag=90'+ m_qp
        ELSE
                sLinhas := slinhas +    '[pag001]'+ m_qp + ;
                                        'tpIntegra=2'+ m_qp
                                        IF ! EMPTY(mnum_dup) .AND. ! EMPTY(mvenci)
                                                sLinhas := slinhas + 'tpag=05'+ m_qp + ;
                                                        'vpag='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mfrete + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp+;
                                                        'indpag=1'+ m_qp
                                        ELSE
                                                sLinhas := slinhas + 'tpag=01'+ m_qp + ;
                                                        'vpag='+ALLTRIM(TRANSFORM(iat(mtot_nota + mtot_icmf + mfrete + mseguro + mtot_ipi + mvlr_icmsub + mencargo),'999999.99'))+ m_qp+;
                                                        'indpag=0'+ m_qp
                                        ENDIF
                                        sLinhas := slinhas + 'vtroco='+ALLTRIM(TRANSFORM(0,'999999.99'))+ m_qp
        ENDIF

        IF ! EMPTY(mnum_dup) .AND. ! EMPTY(mvenci)
                sLinhas := slinhas +    '[Duplicata001]'+ m_qp + ;
                                        'Numero='+ALLTRIM(mnum_dup)+ m_qp + ;
                                        'DataVencimento='+DTOC(mvenci)+ m_qp + ;
                                        'Valor='+ALLTRIM(TRANSFORM(mvlr_dup,'999999.99'))+ m_qp
        ENDIF

        IF ! EMPTY(mnum_dup1) .AND. ! EMPTY(mvenci1)
                sLinhas := slinhas + '[Duplicata002]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup1)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci1)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup1,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup2) .AND. ! EMPTY(mvenci2)
                sLinhas := slinhas + '[Duplicata003]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup2)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci2)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup2,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup3) .AND. ! EMPTY(mvenci3)
                sLinhas := slinhas + '[Duplicata004]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup3)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci3)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup3,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup4) .AND. ! EMPTY(mvenci4)
                sLinhas := slinhas + '[Duplicata005]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup4)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci4)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup4,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup5) .AND. ! EMPTY(mvenci5)
                sLinhas := slinhas + '[Duplicata006]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup5)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci5)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup5,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup6) .AND. ! EMPTY(mvenci6)
                sLinhas := slinhas + '[Duplicata007]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup6)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci6)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup6,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup7) .AND. ! EMPTY(mvenci7)
                sLinhas := slinhas + '[Duplicata008]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup7)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci7)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup7,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup8) .AND. ! EMPTY(mvenci9)
                sLinhas := slinhas + '[Duplicata008]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup8)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci8)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup8,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup9) .AND. ! EMPTY(mvenci9)
                sLinhas := slinhas + '[Duplicata010]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup9)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci9)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup9,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup10) .AND. ! EMPTY(mvenci10)
                sLinhas := slinhas + '[Duplicata011]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup10)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci10)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup10,'999999.99'))+ m_qp
        ENDIF
        IF ! EMPTY(mnum_dup11) .AND. ! EMPTY(mvenci11)
                sLinhas := slinhas + '[Duplicata012]'+ m_qp + ;
                'Numero='+ALLTRIM(mnum_dup11)+ m_qp + ;
                'DataVencimento='+DTOC(mvenci11)+ m_qp + ;
                'Valor='+ALLTRIM(TRANSFORM(mvlr_dup11,'999999.99'))+ m_qp
        ENDIF
        sLinhas := slinhas +    '[DadosAdicionais]'+ m_qp + ;
                                'Complemento= >>> - Op.:'+cod_operado+' - Val Aprox Tributos R$:'+ALLTRIM(TRANSFORM(mtot_imposto,'999999.99'))+' ('+ALLTRIM(TRANSFORM((mtot_imposto/mtot_nota)*100,'999999.99'))+'%) Fonte: IBPT   '+mobs1+mobs2+mobs3+mobs4+mobs5+mobs6+mobs7+mobs8+mobs9+mobs10+mobs11+mobs12+mobs13+mobs14+mobs15+mobs16+mobs17+mobs18+mobs19+mobs20+ m_qp
        sLinhas := slinhas +    '[infRespTec]'+ m_qp + ;
                                'CNPJ='+mcnpj_hti+ m_qp + ;
                                'xContato=Jose Helio de Araujo Beltrao Junior'+ m_qp + ;
                                'email=helioaraujobeltrao@gmail.com'+ m_qp + ;
                                'fone=081992816878'

                                mretorno := IBR_comando('NFE.CriarNFe',{sLinhas},,3)
                                mensagem('CRIANDO A NFE No. '+mretorno)
                                IF  mretorno = ' '
                                        RETURN NIL
                                ELSE
                                        mretorno :=ALLTRIM(SUBSTR(mretorno,LEN(mretorno)-51))
                                ENDIF

                                mretorno := m_cfg[16]+mretorno

                                mensagem('ASSINANDO a Nota No. '+mretorno)
                                IF IBR_comando('NFE.AssinarNFe',{mretorno},,3) = ' '
                                        RETURN NIL
                                ENDIF

                                mensagem('VALIDANDO a Nota No. '+mretorno)
                                IF IBR_comando('NFE.ValidarNFe',{mretorno},,3) = ' '
                                        RETURN NIL
                                ENDIF
                                mensagem('ENVIANDO a Nota No. '+mretorno)
                                enviar_nfe(mretorno)

                                mensagem('IMPRIMINDO O DANFE No. '+mretorno)
                                mret := IBR_comando('NFE.ImprimirDanfe('+mretorno+')',,100)
                                //atencao(mret)
                SR_BEGINTRANSACTION()
                TRY
                IF ! EMPTY(mchnfe)
                                ccomm := "UPDATE sactotnt SET chnfe = " + sr_cdbvalue(mchnfe)
                                ccomm := ccomm +",camnfe = "+ sr_cdbvalue(mretorno)+" WHERE documento = " + sr_cdbvalue('NF'+mdocumento)
                                ccomm := ccomm + " AND serie = " + sr_cdbvalue(mserie_not)
                                ccomm := ccomm + " AND emissao = " + sr_cdbvalue(mdata)
                                ccomm := ccomm + " AND cod_cli = " + sr_cdbvalue(STRZERO(mcod_cli,5))
                        IF msai_ent = 'S'
                                ccomm := ccomm + " AND ent_sai = 'S'"
                        ELSEIF msai_ent = 'E'
                                ccomm := ccomm + " AND ent_sai = 'E'"
                        ENDIF
                        sr_getconnection():exec(ccomm,,.f.)
                ENDIF
                sr_getconnection():exec('COMMIT',,.f.)
                CATCH e
                        SR_ENDTRANSACTION()
                END

        IF ! EMPTY(m_email) .AND. op_simnao('S','Deseja enviar EMAIL para o Cliente') = 'S'
                op_tela(10,10,11,70,'Enviar EMAIL')
                DEVPOS(00,00);DEVOUT('Email de Destino:')
                @ 00,18 GET m_email VALID IF(EMPTY(m_email),.F.,.T.)
                READ
                IF LASTKEY() # 27
                        atencao('NFE.ENVIAREMAIL('+m_email+','+mretorno+',1)')
                        m_ret := IBR_comando('NFE.ENVIAREMAIL('+m_email+','+mretorno+',1)',,3)
                        atencao(m_ret)
                        wvw_lclosewindow()
                ELSE
                        wvw_lclosewindow()
                ENDIF
        ENDIF
        ASIZE(m_nota,0)
        CLEAR GETS
        RETURN NIL
ENDDO
RETURN NIL
*********************** F I M **********************************
* FUNCAO P/RENVIAR NFE
**********************
FUNCTION sac_nfe(mtp_nf)
************************
LOCAL m_aux1:={},m_demo:={},mmotivo:=SPACE(20),mdat_ini,mdat_fim,m_caminho:={},mcaminho:='',mcons_nota := {},mtipo:=0,marq_sai := '',;
      m_inutilizar:={},mcons_mov:={},mnum_ini := 0,mnum_fim := 0,;
      mjust := SPACE(40),mmodelo := '  ',mchave:=SPACE(44),mnota_xml :='',mtipo_nota := SPACE(4),;
      mano,mmes

PRIVATE mchnfe:='',m_email:=SPACE(60),mdocumento:='',mcamnfe := ''
mdat_ini := mdat_fim := CTOD('  /  /  ')
WHILE .T.
        op_tela(10,03,23,70,'Opcoes para NFE',,'*')
        exibi_prg('SACNF_E/SAC_NFE')
        mensagem('INCICIANDO O ACBR Aguarde um momento....')
        IF ! IBR_INIT(ALLTRIM(m_cfg[15]))
                atencao('Nao e possivel INICIALIZAR o ACBRMONITORPLUS pelo TCP-IP, verificar se estar instalado...')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('ATIVANDO O ACBR Aguarde um momento....')
        IF ! IBR_OK( IBR_COMANDO( 'NFE.Ativo',,25))
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
        IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                wvw_lclosewindow();RETURN NIL
        ENDIF
        mensagem('Escolha a Opcao')
        limpa(00,00,30,140)
        setcor(1)
        botao1(1,01,3,14)
        botao1(1,17,3,30)
        botao1(1,33,3,46)
        botao1(1,49,3,62)
        botao1(5,01,7,14)
        botao1(5,17,7,30)
        botao1(5,33,7,46)
        botao1(5,49,7,62)
        botao1(9,01,11,14)
        botao1(9,17,11,30)
        botao1(9,33,11,46)
        @ 2,03 PROMPT  ' ASSINAR  '
        @ 2,19 PROMPT  ' VALIDAR  '
        @ 2,35 PROMPT  ' ENVIAR   '
        @ 2,51 PROMPT  ' IMPRIMIR '
        @ 6,03 PROMPT  ' CANCELAR '
        @ 6,19 PROMPT  ' COPIAR XML '
        @ 6,35 PROMPT  ' LER XML '
        @ 6,51 PROMPT  ' CONSULTA  '
        @ 10,01 PROMPT ' ENVIAR EMAIL '
        @ 10,19 PROMPT ' INUTILIZAR '
        IF mtp_nf = 'MDFE'
                @ 10,35 PROMPT '  ENCERRAR '
        ENDIF
        //@ 10,35 PROMPT ' NFe/NFCe VERIFICAR CANCEL '
        SET INTEN ON
        MENU TO mtipo
                wvw_lclosewindow()
        IF LASTKEY() = 27
                RETURN NIL
        ENDIF
        IF mtipo = 10
                m_inutilizar:={}
                mnum_ini := mnum_fim := 0
                mano := '  '
                mjust := SPACE(40)
                IF mtp_nf = 'NF'
                        mmodelo := '55'
                ELSEIF mtp_nf = 'NFC'
                        mmodelo := '65'
                ENDIF
                mcaminho := ' '
                op_tela(10,10,15,90,'Inutilizando')
                DEVPOS(01,01);DEVOUT('No.Inicial...:')
                DEVPOS(02,01);DEVOUT('No.Final.....:')
                DEVPOS(03,01);DEVOUT('Ano Emissao..:')
                DEVPOS(04,01);DEVOUT('Justificativa:')
                @ 01,16 GET mnum_ini PICT '99999'
                @ 02,16 GET mnum_fim PICT '99999'
                @ 03,16 GET mano PICT '99'
                @ 04,16 GET mjust PICT '@!'
                READ
                IF LASTKEY() = 27
                        fecha_tela()
                        LOOP
                ENDIF
                WHILE mnum_ini <= mnum_fim
                        mensagem('Verificando o No.: '+STRZERO(mnum_ini,6))
                        mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+mano+','+mmodelo+',1,'+STR(mnum_ini)+','+STR(mnum_ini)+')',,3)
                        IF ! EMPTY(mretorno)
                                        lin := MEMOLINE(mretorno,110,1,,)
                                        linhas := linha := 0
                                        linhas := MLCOUNT(mretorno,110)
                                        FOR linha = 1 TO  linhas
                                                lin := MEMOLINE(mretorno,110,linha,,)
//NomeArquivo=C:\HELIO\siachb\NFE\24494200000106\NFe\201808\Inu\26182449420000010655001000000074000000074-procInutNFe.xml
                                                IF SUBSTR(lin,1,12) = 'NomeArquivo='
                                                        mcaminho := SUBSTR(lin,13)
                                                        EXIT
                                                ENDIF
                                        NEXT

                                //atencao(mretorno)
                                sr_getconnection():exec('INSERT INTO nfe_inutilizada ('+;
                                'JUSTIFICATIVA,'+;//1
                                'ANO          ,'+;//2
                                'MODELO       ,'+;//3
                                'SERIE        ,'+;//4
                                'NUMERO       ,'+;//4
                                'CAMINHO      )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mjust)+','+; //1
                                sr_cdbvalue(mano )+','+; //2
                                sr_cdbvalue(mmodelo)+','+; //3
                                sr_cdbvalue('1' )+','+; //4
                                sr_cdbvalue(STRZERO(mnum_ini,6))+','+;
                                sr_cdbvalue(mcaminho)+')',,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        //ELSE
                        //        atencao(mretorno)
                        ENDIF
                        mnum_ini++
                ENDDO
                wvw_lclosewindow()
                LOOP
        ENDIF
        op_tela(0,15,50,110,IF(mtp_nf = 'NF','Arquivos NF-e (XML)','Arquivos NFC-e (XML)'),,1)
        limpa(00,00,50,100)
        DEVPOS(00,01);DEVOUT('Tipo da Nota...:')
                DrawLabel(00,23,'[NFE] - [NFCE] - [MDFE] - [CTE] - [CCE]',210,, 'Arial',15,7)
        DEVPOS(01,01);DEVOUT('Digite o ANO...:')
        DEVPOS(02,01);DEVOUT('Digite o MES...:')
        DEVPOS(03,01);DEVOUT('Caminho dos XML:')
        @ 04,00 TO 04,100
        setcor(3)
        DEVPOS(05,00);DEVOUT(' N.Nota                  Arquivo XML                                                 Data')
        setcor(1)
        @ 06,00 TO 06,110
        SET CENTURY ON
        mano := SUBSTR(DTOC(mdata_sis),7,4)
        mmes := SUBSTR(DTOC(mdata_sis),4,2)
        SET CENTURY OFF
        IF mtp_nf = 'NF'
                mtipo_nota := 'NFE '
        ELSEIF mtp_nf = 'NFC'
                mtipo_nota := 'NFCE'
        ELSEIF mtp_nf = 'MDFE'
                mtipo_nota := 'MDFE'
        ELSEIF mtp_nf = 'CCE'
                mtipo_nota := 'CCE '
        ENDIF
        mcaminho := ''
        @ 00,18 GET mtipo_nota PICT '@!' VALID mtipo_nota $ 'NFE ,NFCE,MDFE,CTE ,CCE '
        @ 01,18 GET mano PICT '9999'
        @ 02,18 GET mmes PICT '99'
        //@ 00,40 GET mdat_fim VALID IF(mdat_fim < mdat_ini,.F.,.T.)
        READ
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        mtipo_nota := ALLTRIM(mtipo_nota)
        mcaminho := ALLTRIM(m_cfg[16])+m_set[1,35]+'\'+mtipo_nota+'\'+mano+mmes+'\'+mtipo_nota+'\'
        @ 03,18 GET mcaminho PICT '@!'
        READ
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        /*
        IF EMPTY(mdat_ini)
                mdat_ini := CTOD('01/01/94')
                mdat_fim := DATE()
        ENDIF
        */
        m_aux1:={}
        m_demo:={}
        m_caminho:={}
        CLEAR GETS

        IF mtipo_nota = 'MDFE'
                m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*-mdfe.xml','D')
        ELSEIF mtipo_nota = 'CCE'
                m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*-procEventoNFe.xml','D')
        ELSE
                m_aux1 := DIRECTORY(ALLTRIM(mcaminho)+'*-nfe.xml','D')
        ENDIF
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        IF mtipo_nota # 'MDFE' .AND. mtipo_nota # 'CCE'
                                IF mtipo_nota = 'NFE' .AND. SUBSTR(m_aux1[i,1],21,2) = '65'
                                        LOOP
                                ELSEIF mtipo_nota = 'NFCE' .AND. SUBSTR(m_aux1[i,1],21,2) = '55'
                                        LOOP
                                ENDIF
                        ENDIF
                        AADD(m_demo,' '+SUBSTR(m_aux1[i,1],29,6)+'  '+m_aux1[i,1]+'                      '+DTOC(m_aux1[i,3]))
                        AADD(m_caminho,m_aux1[i,1])
                NEXT
        ELSE
                atencao('Nao existe nenhuma NFE neste Caminho: '+ALLTRIM(mcaminho))
                fecha_tela()
                LOOP
        ENDIF
        IF LEN(m_caminho) = 0
                atencao('Nao existe nenhuma NOTA....')
                LOOP
        ENDIF
        //m_demosort := ASORT(m_demo,,, { |x, y| x[1] < y[1] })
        m_demosort := m_demo
	point := 0
        mensagem('<CTRL + Page Down> p/Ultima Nota - Escolha a Nota e pressione <ENTER>')
        @ 46,00 TO 46,110
        DEVPOS(47,01);DEVOUT('TOTAL DE NOTAS FISCAIS:')
        @ 48,00 TO 48,110
        setcor(3)
        DEVPOS(47,25);DEVOUT(ALLTRIM(TRANSFORM(LEN(m_demo),'999,999,999')))
        point := ACHOICE(7,0,45,99,m_demosort,,,point)
        setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        fecha_tela()
                        LOOP
                CASE LASTKEY() = 13
			mnota_xml := ALLTRIM(SUBSTR(m_demosort[point],10,73))
                        IF mtipo = 1
                                mensagem('ASSINANDO a Nota No. '+mnota_xml)
                                mretorno := IBR_COMANDO('NFE.AssinarNFe('+ALLTRIM(mcaminho)+mnota_xml+')',,3)
                                atencao(mretorno)
                                fecha_tela()
                        ELSEIF mtipo = 2
                                mensagem('VALIDANDO a Nota No. '+mnota_xml)
                                mretorno := NFE_comando('NFE.ValidarNFe('+ALLTRIM(mcaminho)+mnota_xml+')',,3)
                                atencao(mretorno)
                                fecha_tela()
                        ELSEIF mtipo = 3
                                mensagem('ENVIANDO a Nota No. '+mnota_xml)
                                IF mtp_nf = 'MDFE'
                                        mretorno := IBR_comando('MDFE.ENVIARMDFe('+ALLTRIM(mcaminho)+mnota_xml+')',,120)
                                        atencao(mretorno)
                                        mensagem('Aguarde um momento estar Imprimindo a Nota No. '+mnota_xml)
                                        mretorno := IBR_comando('MDFE.IMPRIMIRDAMDFE('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,)
                                        atencao(mretorno)
                                        mretorno := IBR_comando('MDFE.IMPRIMIRDAMDFEPDF('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,)
                                ELSE
                                        mdocumento := SUBSTR(mnota_xml,29,6)
                                        enviar_nfe(ALLTRIM(mcaminho)+mnota_xml,IF(mtp_nf = 'NF','NF','NFCE'),1)
                                        mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+mnota_xml+')',,20,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        atencao(mretorno)
                                        mretorno := IBR_comando('NFE.ImprimirDanfePDF('+ALLTRIM(mcaminho)+mnota_xml+')',,20,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 4
                                IF mtp_nf = 'MDFE'
                                        mensagem('Aguarde um momento estar Imprimindo a Nota No. '+mnota_xml)
                                        mretorno := IBR_comando('MDFE.IMPRIMIRDAMDFE('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,)
                                        WVW_SetMousePos(,10,10)
                                        atencao(mretorno)
                                        mretorno := IBR_comando('MDFE.IMPRIMIRDAMDFEPDF('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,)
                                        WVW_SetMousePos(,10,10)
                                ELSEIF mtp_nf = 'CCE'
                                        mensagem('Aguarde um momento estar Imprimindo a Nota No. '+mnota_xml)
                                        mretorno := IBR_comando('NFe.ImprimirEvento('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        WVW_SetMousePos(,10,10)
                                        atencao(mretorno)
                                        mretorno := IBR_comando('NFe.ImprimirEventoPDF('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        WVW_SetMousePos(,10,10)
                                ELSE
                                        mensagem('Aguarde um momento estar Imprimindo a Nota No. '+mnota_xml)
                                        //mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(mcaminho)+ALLTRIM(SUBSTR(m_demosort[point],10,53))+')',,120,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        WVW_SetMousePos(,10,10)
                                        atencao(mretorno)
                                        mretorno := IBR_comando('NFE.ImprimirDanfePDF('+ALLTRIM(mcaminho)+mnota_xml+')',,120,,,ALLTRIM(mcaminho)+'HTIfirma.jpg')
                                        WVW_SetMousePos(,10,10)
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 5
                                mmotivo:=SPACE(20)
                                op_tela(10,10,11,50,'MOTIVO DO CANCELAMENTO Nota: '+SUBSTR(m_demo[point],2,6))
                                mensagem('Motivo com no <<< minimo 15 caracteres >>>')
                                @ 01,05 GET mmotivo PICT '@!' VALID IF(EMPTY(mmotivo) .OR. LEN(ALLTRIM(mmotivo)) < 15,.F.,.T.)
                                READ
                                IF LEN(mmotivo) <15
                                        atencao('O motivo nao foi aceito estar com menos de 15 caracteres...')
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                mopcao := op_simnao('N','Confirma o CANCELAMENTO da nota CHAVE de No. '+SUBSTR(mnota_xml,1,44)+':')
                                IF LASTKEY() = 27 .OR. mopcao = 'N'
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                IF mtp_nf = 'MDFE'
                                        //MDFE.CANCELARMDFE(nChaveMDFE,nDados,[nCNPJ])
                                        mretorno := IBR_comando('MDFE.CANCELARMDFE('+SUBSTR(mnota_xml,1,AT('-',mnota_xml)-1)+','+ALLTRIM(mmotivo)+')',,3)
                                        atencao(mretorno)
                                ELSE
                                        mretorno := IBR_comando('NFE.CANCELARNFE('+SUBSTR(mnota_xml,1,AT('-',mnota_xml)-1)+','+ALLTRIM(mmotivo)+')',,3)
                                        IF 'OK: Rejeicao' $ mretorno
                                                atencao(mretorno)
                                        ELSE    //IF 'xEvento=Cancelamento homologado'
                                                mcons_mov:={}
                                                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(mnota_xml,29,6))+" AND ent_sai = 'S'",,.t.,@mcons_mov)
                                                IF LEN(mcons_mov) = 0
                                                        atencao('Esta nota nao se encontra em nossos arquivos')
                                                        LOOP
                                                ENDIF
                                                mcons_mov:={}
                                                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(mnota_xml,29,6))+" AND ent_sai = 'S'",,.t.,@mcons_mov)
                                                IF LEN(mcons_mov) > 0
                                                        i:=0
                                                        FOR i = 1 TO LEN(mcons_mov)
                                                                aret:={}
                                                                sr_getconnection():exec("SELECT saldo_fis FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_mov[i,11]),,.t.,@aret)
                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis  = "+sr_cdbvalue(aret[1,1] + mcons_mov[i,19])+" WHERE cod_merc = "+sr_cdbvalue(mcons_mov[i,11]),,.f.)
                                                        NEXT
                                                ENDIF
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel  = 'C' WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(mnota_xml,29,6))+" AND ent_sai = 'S'",,.f.)
                                        sr_getconnection():exec("UPDATE sactotnt SET cancel  = 'C' WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(mnota_xml,29,6))+" AND ent_sai = 'S'",,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                ENDIF
                                fecha_tela()
                                wvw_lclosewindow()
                        ELSEIF mtipo = 6
                                mcaminho := SPACE(60)
                                op_tela(05,10,07,80,'Caminho do destino do(s) Arquivo(s)')
                                mensagem('Digite o caminho Ex: C:\SIAC')
                                DEVPOS(01,01);DEVOUT('Caminho:')
                                @ 01,COL()+1 GET mcaminho PICT '@!' VALID IF(EMPTY(mcaminho),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                FOR i = 1 TO LEN(m_caminho)
                                        //atencao('COPY '+ALLTRIM(mcaminho)+m_caminho[i]+" "+ALLTRIM(mcaminho))
                                        MYRUN('COPY '+ALLTRIM(mcaminho)+m_caminho[i]+" "+ALLTRIM(mcaminho))
                                NEXT
                                atencao('Foi copiado '+ALLTRIM(TRANSFORM(LEN(m_caminho),'999,999,999'))+' Arquivos para o Caminho: '+ALLTRIM(mcaminho)+' com sucesso...')
                                fecha_tela()
                                wvw_lclosewindow()
                        ELSEIF mtipo = 7
                                //ATENCAO('Lendo a NFE: '+ALLTRIM(mcaminho)+mnota_xml)
                                mretorno := NFE_comando('NFe.LerNFe('+ALLTRIM(mcaminho)+mnota_xml+')',,3)
                                ATENCAO(MRETORNO)
                                IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
                                        IBR_comando('NFe.NFeToTXT('+ALLTRIM(mcaminho)+mnota_xml+','+ALLTRIM(mcaminho)+mnota_xml+SUBSTR(mnota_xml,29,6)+'.txt)',,3)
                                        MYRUN('NOTEPAD '+ALLTRIM(mcaminho)+mnota_xml+SUBSTR(mnota_xml,29,6)+'.txt')
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 8
                                mdocumento := SUBSTR(mnota_xml,29,6)
                                mcaminho :=ALLTRIM(mcaminho)+mnota_xml
                                IF mtp_nf = 'MDFE'
                                        mretorno := IBR_comando('MDFE.CONSULTARMDFE('+mcaminho+')',,3)
                                        atencao(mretorno)
                                ELSE
                                        mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                                        atencao(mretorno)
                                        IF 'Autorizado o uso da NF-e' $ mretorno
                                                //atencao('Autorizado o uso da NF-e')
                                                IF mtp_nf = 'NFCE'
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ' WHERE documento = "+sr_cdbvalue('CP'+mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ELSE
                                                        sr_getconnection():exec("UPDATE sacmovnt SET cancel = ' ' WHERE documento = "+sr_cdbvalue('NF'+mdocumento),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ENDIF
                                        //NFe.LerNFe(cArqXML)
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 9
                                mcaminho :=ALLTRIM(mcaminho)+mnota_xml
                                op_tela(10,10,11,70,'Enviar EMAIL')
                                DEVPOS(00,00);DEVOUT('Email de Destino:')
                                @ 00,18 GET m_email VALID IF(EMPTY(m_email),.F.,.T.)
                                READ
                                IF LASTKEY() # 27
                                        m_ret := IBR_comando('NFE.ENVIAREMAIL('+m_email+','+mcaminho+',1)',,3)
                                        atencao(m_ret)
                                        fecha_tela()
                                        wvw_lclosewindow()
                                ELSE
                                        fecha_tela()
                                        wvw_lclosewindow()
                                ENDIF
                        ELSEIF mtipo = 11
                                mcaminho :=ALLTRIM(mcaminho)+mnota_xml
                                mcons_mov:={}
                                mdocumento := STR(VAL(SUBSTR(mnota_xml,29,6)))
                                //atencao("SELECT * FROM sacmdfe WHERE nmdf = "+sr_cdbvalue(mdocumento))
                                sr_getconnection():exec("SELECT * FROM sacmdfe WHERE nmdf = "+sr_cdbvalue(ALLTRIM(mdocumento)),,.t.,@mcons_mov)
                                IF LEN(mcons_mov) = 0
                                        atencao('Esta nota de No.: '+mdocumento+' nao se encontra em nossos arquivos')
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                IF LASTKEY() # 27
                                        m_ret := IBR_comando('MDFE.ENCERRARMDFE',{mcaminho,DTOC(mdata_sis),ALLTRIM(mcons_mov[1,12])},,.T.)
                                        atencao(m_ret)
                                        wvw_lclosewindow()
                                ELSE
                                        wvw_lclosewindow()
                                ENDIF
                        ENDIF
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
/*
* FUNCAO P/RENVIAR NFE
**********************
FUNCTION sac_nfe(mtp_nf)
******************
LOCAL m_aux1:={},m_demo:={},mmotivo:=SPACE(20),mdat_ini,mdat_fim,m_caminho:={},mcaminho:='',mcons_nota := {},mtipo:=0,marq_sai := '',;
      m_inutilizar:={},mcons_mov:={},mnum_ini := 0,mnum_fim := 0,mano := '  ',;
      mjust := SPACE(40),mmodelo := '  '

PRIVATE mchnfe:='',m_email:=SPACE(60),mdocumento:=''
mdat_ini := mdat_fim := CTOD('  /  /  ')
WHILE .T.
        op_tela(10,03,23,65,'Opcoes para NFE',,'*')
        exibi_prg('SACNF_E/SAC_NFE')
        mensagem('INCICIANDO O ACBR Aguarde um momento....')
        IF ! IBR_INIT(ALLTRIM(m_cfg[15]))
                atencao('Nao e possivel INICIALIZAR o ACBRMONITORPLUS pelo TCP-IP, verificar se estar instalado...')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('ATIVANDO O ACBR Aguarde um momento....')
        IF ! IBR_OK( IBR_COMANDO( 'NFE.Ativo',,25))
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
        IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                wvw_lclosewindow();RETURN NIL
        ENDIF
        mensagem('Escolha a Opcao')
        limpa(00,00,30,140)
        setcor(1)
        botao1(1,01,3,14)
        botao1(1,17,3,30)
        botao1(1,33,3,46)
        botao1(1,49,3,62)
        botao1(5,01,7,14)
        botao1(5,17,7,30)
        botao1(5,33,7,46)
        botao1(5,49,7,62)
        botao1(9,01,11,14)
        botao1(9,17,11,30)
        @ 2,03 PROMPT  ' ASSINAR  '
        @ 2,19 PROMPT  ' VALIDAR  '
        @ 2,35 PROMPT  ' ENVIAR   '
        @ 2,51 PROMPT  ' IMPRIMIR '
        @ 6,03 PROMPT  ' CANCELAR '
        @ 6,19 PROMPT  ' COPIAR XML '
        @ 6,35 PROMPT  ' LER XML '
        @ 6,51 PROMPT  ' CONSULTA  '
        @ 10,01 PROMPT ' ENVIAR EMAIL '
        @ 10,19 PROMPT ' INUTILIZAR '
        SET INTEN ON
        MENU TO mtipo
        wvw_lclosewindow()
        IF LASTKEY() = 27
                RETURN NIL
        ENDIF
        IF mtipo = 10
                m_inutilizar:={}
                mnum_ini := mnum_fim := 0
                mano := '  '
                mjust := SPACE(40)
                IF mtp_nf = 'NF'
                        mmodelo := '55'
                ELSE
                        mmodelo := '65'
                ENDIF
                mcaminho := ' '
                op_tela(10,10,15,90,'Inutilizando')
                DEVPOS(01,01);DEVOUT('No.Inicial...:')
                DEVPOS(02,01);DEVOUT('No.Final.....:')
                DEVPOS(03,01);DEVOUT('Ano Emissao..:')
                DEVPOS(04,01);DEVOUT('Justificativa:')
                @ 01,16 GET mnum_ini PICT '99999'
                @ 02,16 GET mnum_fim PICT '99999'
                @ 03,16 GET mano PICT '99'
                @ 04,16 GET mjust PICT '@!'
                READ
                WHILE mnum_ini <= mnum_fim
                        mensagem('Verificando o No.: '+STRZERO(mnum_ini,6))
                        mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+mano+','+mmodelo+',1,'+STR(mnum_ini)+','+STR(mnum_ini)+')',,3,,1)
                        IF ! EMPTY(mretorno)
                                        lin := MEMOLINE(mretorno,110,1,,)
                                        linhas := linha := 0
                                        linhas := MLCOUNT(mretorno,110)
                                        FOR linha = 1 TO  linhas
                                                lin := MEMOLINE(mretorno,110,linha,,)
//NomeArquivo=C:\HELIO\siachb\NFE\24494200000106\NFe\201808\Inu\26182449420000010655001000000074000000074-procInutNFe.xml
                                                IF SUBSTR(lin,1,12) = 'NomeArquivo='
                                                        mcaminho := SUBSTR(lin,13)
                                                        EXIT
                                                ENDIF
                                        NEXT

                                //atencao(mretorno)
                                sr_getconnection():exec('INSERT INTO nfe_inutilizada ('+;
                                'JUSTIFICATIVA,'+;//1
                                'ANO          ,'+;//2
                                'MODELO       ,'+;//3
                                'SERIE        ,'+;//4
                                'NUMERO       ,'+;//4
                                'CAMINHO      )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(mjust)+','+; //1
                                sr_cdbvalue(mano )+','+; //2
                                sr_cdbvalue(mmodelo)+','+; //3
                                sr_cdbvalue('1'                      )+','+; //4
                                sr_cdbvalue(STRZERO(mnum_ini,6))+','+;
                                sr_cdbvalue(mcaminho)+')',,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        //ELSE
                        //        atencao(mretorno)
                        ENDIF
                        mnum_ini++
                ENDDO
                wvw_lclosewindow()
                LOOP
        ENDIF
        op_tela(01,15,49,90,IF(mtp_nf = 'NF','Arquivos NF-e (XML)','Arquivos NFC-e (XML)'),,1)
        limpa(00,00,50,100)
        DEVPOS(00,01);DEVOUT('Caminho dos XML:')
        //DEVPOS(00,28);DEVOUT('Data Final:')
        @ 01,00 TO 01,100
        setcor(3)
        DEVPOS(02,00);DEVOUT(' N.Nota                  Arquivo XML                             Data')
        setcor(1)
        @ 03,00 TO 03,90
        @ 00,18 GET m_cfg[16]
        //@ 00,40 GET mdat_fim VALID IF(mdat_fim < mdat_ini,.F.,.T.)
        READ
        IF LASTKEY() = 27
                fecha_tela()
                LOOP
        ENDIF
        m_aux1:={}
        m_demo:={}
        m_caminho:={}
        CLEAR GETS
        m_aux1 := DIRECTORY(ALLTRIM(m_cfg[16])+'*-nfe.xml','D')
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        IF mtp_nf = 'NF' .AND. SUBSTR(m_aux1[i,1],21,2) = '65'
                                LOOP
                        ELSEIF mtp_nf = 'CP' .AND. SUBSTR(m_aux1[i,1],21,2) = '55'
                                LOOP
                        ENDIF
                        AADD(m_demo,' '+SUBSTR(m_aux1[i,1],38,6)+'  '+m_aux1[i,1]+'  '+DTOC(m_aux1[i,3]))
                        AADD(m_caminho,m_aux1[i,1])
                NEXT
        ELSE
                atencao('Nao existe nenhuma NFE neste Caminho: '+ALLTRIM(m_cfg[16]))
                fecha_tela()
                LOOP
        ENDIF
        point := 0
        mensagem('<CTRL + Page Down> p/Ultima Nota - Escolha a Nota e pressione <ENTER>')
        @ 46,00 TO 46,90
        DEVPOS(47,01);DEVOUT('TOTAL DE NOTAS FISCAIS:')
        @ 48,00 TO 48,90
        setcor(3)
        DEVPOS(47,25);DEVOUT(ALLTRIM(TRANSFORM(LEN(m_demo),'999,999,999')))
        point := ACHOICE(4,0,45,79,m_demo,,,point)
        setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        fecha_tela()
                        LOOP
                CASE LASTKEY() = 13
                        IF mtipo = 1
                                mensagem('ASSINANDO a Nota No. '+m_caminho[point])
                                mretorno := IBR_COMANDO('NFE.AssinarNFe('+ALLTRIM(m_cfg[16])+m_caminho[point]+')',,3)
                                atencao(mretorno)
                                fecha_tela()
                        ELSEIF mtipo = 2
                                mensagem('VALIDANDO a Nota No. '+m_caminho[point])
                                mretorno := NFE_comando('NFE.ValidarNFe('+ALLTRIM(m_cfg[16])+m_caminho[point]+')',,3)
                                atencao(mretorno)
                                fecha_tela()
                        ELSEIF mtipo = 3
                                mensagem('ENVIANDO a Nota No. '+m_caminho[point])
                                mdocumento := SUBSTR(m_caminho[point],38,6)
                                enviar_nfe(ALLTRIM(m_cfg[16])+m_caminho[point],IF(mtp_nf = 'NF','NF','NFCE'))
                                mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(m_cfg[16])+m_caminho[point]+')',,20,,,ALLTRIM(m_cfg[16])+'HTIfirma.jpg')
                                atencao(mretorno)
                                mretorno := IBR_comando('NFE.ImprimirDanfePDF('+ALLTRIM(m_cfg[16])+m_caminho[point]+')',,20,,,ALLTRIM(m_cfg[16])+'HTIfirma.jpg')
                                fecha_tela()
                        ELSEIF mtipo = 4
                                mensagem('Aguarde um momento estar Imprimindo a Nota No. '+m_caminho[point])
                                mretorno := IBR_comando('NFE.ImprimirDanfe('+ALLTRIM(m_cfg[16])+m_caminho[point]+')',,120,,,ALLTRIM(m_cfg[16])+'HTIfirma.jpg')
                                atencao(mretorno)
                                mretorno := IBR_comando('NFE.ImprimirDanfePDF('+ALLTRIM(m_cfg[16])+m_caminho[point]+')',,120,,,ALLTRIM(m_cfg[16])+'HTIfirma.jpg')
                                fecha_tela()
                        ELSEIF mtipo = 5
                                mmotivo:=SPACE(20)
                                op_tela(10,10,11,50,'MOTIVO DO CANCELAMENTO Nota: '+SUBSTR(m_demo[point],2,6))
                                mensagem('Motivo com no <<< minimo 15 caracteres >>>')
                                @ 01,05 GET mmotivo PICT '@!' VALID IF(EMPTY(mmotivo) .OR. LEN(ALLTRIM(mmotivo)) < 15,.F.,.T.)
                                READ
                                IF LEN(mmotivo) <15
                                        atencao('O motivo nao foi aceito estar com menos de 15 caracteres...')
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                mopcao := op_simnao('N','Confirma o CANCELAMENTO da nota CHAVE de No. '+SUBSTR(m_caminho[point],1,44)+':')
                                IF LASTKEY() = 27 .OR. mopcao = 'N'
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                mretorno := IBR_comando('NFE.CANCELARNFE('+SUBSTR(m_caminho[point],1,AT('-',m_caminho[point])-1)+','+ALLTRIM(mmotivo)+')',,3)
                                atencao(mretorno)
                                mcons_mov:={}
                                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(m_caminho[point],38,6))+" AND ent_sai = 'S'",,.t.,@mcons_mov)
                                IF LEN(mcons_mov) = 0
                                        atencao('Esta nota nao se encontra em nossos arquivos')
                                        LOOP
                                ENDIF
                                mcons_mov:={}
                                sr_getconnection():exec("SELECT * FROM sacmovnt WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(m_caminho[point],38,6))+" AND ent_sai = 'S' AND NOT cancel = 'C'",,.t.,@mcons_mov)
                                IF LEN(mcons_mov) = 0
                                        i:=0
                                        FOR i = 1 TO LEN(mcons_mov)
                                                aret:={}
                                                sr_getconnection():exec("SELECT saldo_fis FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_mov[i,11]),,.t.,@aret)
                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_fis  = "+sr_cdbvalue(aret[1,1] + mcons_mov[i,19])+" WHERE cod_merc = "+sr_cdbvalue(mcons_mov[i,11]),,.f.)
                                        NEXT
                                ENDIF
                                sr_getconnection():exec("COMMIT",,.f.)
                                sr_getconnection():exec("UPDATE sacmovnt SET cancel  = 'C' WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(m_caminho[point],38,6))+" AND ent_sai = 'S'",,.f.)
                                sr_getconnection():exec("UPDATE sactotnt SET cancel  = 'C' WHERE documento = "+sr_cdbvalue(mtp_nf+SUBSTR(m_caminho[point],38,6))+" AND ent_sai = 'S'",,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                                fecha_tela()
                                wvw_lclosewindow()
                        ELSEIF mtipo = 6
                                mcaminho := SPACE(60)
                                op_tela(05,10,07,80,'Caminho do destino do(s) Arquivo(s)')
                                mensagem('Digite o caminho Ex: C:\SIAC')
                                DEVPOS(01,01);DEVOUT('Caminho:')
                                @ 01,COL()+1 GET mcaminho PICT '@!' VALID IF(EMPTY(mcaminho),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                FOR i = 1 TO LEN(m_caminho)
                                        //atencao('COPY '+ALLTRIM(m_indiv[1,40])+m_caminho[i]+" "+ALLTRIM(mcaminho))
                                        MYRUN('COPY '+ALLTRIM(m_cfg[16])+m_caminho[i]+" "+ALLTRIM(mcaminho))
                                NEXT
                                atencao('Foi copiado '+ALLTRIM(TRANSFORM(LEN(m_caminho),'999,999,999'))+' Arquivos para o Caminho: '+ALLTRIM(mcaminho)+' com sucesso...')
                                fecha_tela()
                                wvw_lclosewindow()
                        ELSEIF mtipo = 7
                                //ATENCAO('Lendo a NFE: '+ALLTRIM(m_cfg[16])+m_caminho[point])
                                mretorno := NFE_comando('NFe.LerNFe('+ALLTRIM(m_cfg[16])+m_caminho[point]+')',,3)
                                ATENCAO(MRETORNO)
                                IF 'S' = op_simnao('S','Deseja Editar o arquivo:')
                                        IBR_comando('NFe.NFeToTXT('+ALLTRIM(m_cfg[16])+m_caminho[point]+','+ALLTRIM(m_cfg[16])+m_caminho[point]+SUBSTR(m_caminho[point],38,6)+'.txt)',,3)
                                        MYRUN('NOTEPAD '+ALLTRIM(m_cfg[16])+m_caminho[point]+SUBSTR(m_caminho[point],38,6)+'.txt')
                                ENDIF
                                fecha_tela()
                        ELSEIF mtipo = 8
                                mcaminho:=SPACE(60)
                                op_tela(05,10,07,90,'Consultando a NFE')
                                //DEVPOS(01,01);DEVOUT(ALLTRIM(m_cfg[16])+m_caminho[point])
                                //mretorno := NFE_comando('NFE.ConsultarNFe('+ALLTRIM(m_indiv[1,40])+m_caminho[point]+')',,3)
                                DEVPOS(01,01);DEVOUT(ALLTRIM(SUBSTR(m_caminho[point],1,AT('-',m_caminho[point])-1)))
                                mcaminho :=ALLTRIM(m_cfg[16])+m_caminho[point]
                                @ 01,01 GET mcaminho
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                                atencao(mretorno)
                                wvw_lclosewindow()
                                fecha_tela()
                                //NFe.LerNFe(cArqXML)
                        ELSEIF mtipo = 9
                                mcaminho :=ALLTRIM(m_cfg[16])+m_caminho[point]
                                op_tela(10,10,11,70,'Enviar EMAIL')
                                DEVPOS(00,00);DEVOUT('Email de Destino:')
                                @ 00,18 GET m_email VALID IF(EMPTY(m_email),.F.,.T.)
                                READ
                                IF LASTKEY() # 27
                                        m_ret := IBR_comando('NFE.ENVIAREMAIL('+m_email+','+mcaminho+',1)',,3)
                                        atencao(m_ret)
                                        fecha_tela()
                                        wvw_lclosewindow()
                                ELSE
                                        fecha_tela()
                                        wvw_lclosewindow()
                                ENDIF
                        ENDIF
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*/
******************************* f i m *********************************************
* FUNCAO P/nfe_inutilizar
**********************
FUNCTION nfe_inutilizar()
******************
LOCAL m_aux1:={},m_demo:={},mmotivo:=SPACE(20),mdat_ini,mdat_fim,m_caminho:={},mcaminho:='',mcons_nota := {},mtipo:=0,marq_sai := '',;
      m_inutilizar:={}
PRIVATE mchnfe:='',m_email:=SPACE(60),mdocumento:=''
op_tela(01,15,49,90,'ARQUIVOS NFE (XML)',,1)
exibi_prg('SACNF_E/SAC_NFE')
//marq_sai := ALLTRIM(m_indiv[1,37])+"SAINFE.TXT"
//ENDIF
mdat_ini := mdat_fim := CTOD('  /  /  ')
WHILE .T.
        limpa(00,00,50,100)
        DEVPOS(00,01);DEVOUT('Caminho dos XML:')
        //DEVPOS(00,28);DEVOUT('Data Final:')
        @ 01,00 TO 01,100
        setcor(3)
        DEVPOS(02,00);DEVOUT(' N.Nota                  Arquivo XML                             Data')
        setcor(1)
        @ 03,00 TO 03,90

        @ 00,18 GET m_cfg[16]
        //@ 00,40 GET mdat_fim VALID IF(mdat_fim < mdat_ini,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        /*
        IF EMPTY(mdat_ini)
                mdat_ini := CTOD('01/01/94')
                mdat_fim := DATE()
        ENDIF
        */
        m_aux1:={}
        m_demo:={}
        m_caminho:={}
        CLEAR GETS
        m_aux1 := DIRECTORY(ALLTRIM(m_cfg[16])+'*-nfe.xml','D')
        IF LEN(m_aux1) > 0
                i := 0
                FOR i = 1 TO LEN(m_aux1)
                        AADD(m_demo,' '+SUBSTR(m_aux1[i,1],38,6)+'  '+m_aux1[i,1]+'  '+DTOC(m_aux1[i,3]))
                        AADD(m_caminho,m_aux1[i,1])
                NEXT
        ELSE
                atencao('Nao existe nenhuma NFE neste Caminho: '+ALLTRIM(m_cfg[16]))
                LOOP
        ENDIF
        point := 0
        mensagem('<CTRL + Page Down> p/Ultima Nota - Escolha a Nota e pressione <ENTER>')
        @ 46,00 TO 46,90
        DEVPOS(47,01);DEVOUT('TOTAL DE NOTAS FISCAIS:')
        @ 48,00 TO 48,90
        setcor(3)
        DEVPOS(47,25);DEVOUT(ALLTRIM(TRANSFORM(LEN(m_demo),'999,999,999')))
        point := ACHOICE(4,0,45,79,m_demo,,,point)
        setcor(1)
        DO CASE
                CASE LASTKEY()=27
                        LOOP
                CASE LASTKEY() = 13
                        mensagem('INCICIANDO O ACBR Aguarde um momento....')
                        IF ! IBR_INIT(ALLTRIM(m_cfg[15]))
                                atencao('Nao e possivel INICIALIZAR o ACBRMONITORPLUS pelo TCP-IP, verificar se estar instalado...')
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                        mensagem('ATIVANDO O ACBR Aguarde um momento....')
                        IF ! IBR_OK( IBR_COMANDO( 'NFE.Ativo',,25))
                                wvw_lclosewindow()
                                RETURN NIL
                        ENDIF
                        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
                        IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                                //wvw_lclosewindow();RETURN NIL
                        ENDIF
                        opcao := op_simnao('S','Confirma o PROCESSO DE INUTILIZACAO DAS NF-e e NFC-e:')
                        IF opcao = 'N' .OR. LASTKEY() = 27
                                EXIT
                        ENDIF
                        m_inutilizar:={}
                        op_tela(05,10,07,90,'Inutilizando NFE')
                        FOR i = 1 TO LEN(m_caminho)
                                DEVPOS(01,01);DEVOUT(ALLTRIM(SUBSTR(m_caminho[i],1,AT('-',m_caminho[i])-1)))
                                mcaminho :=ALLTRIM(m_cfg[16])+m_caminho[i]
                                DEVPOS(01,01);DEVOUT(mcaminho)
                                //mretorno := IBR_comando('NFE.ConsultarNFe('+mcaminho+')',,3)
                                //IF ! 'Autorizado o uso da NF-e' $ mretorno
                                        mretorno := IBR_comando('NFE.InutilizarNFe('+SUBSTR(mcgc_firm,1,2)+SUBSTR(mcgc_firm,4,3)+SUBSTR(mcgc_firm,8,3)+SUBSTR(mcgc_firm,12,4)+SUBSTR(mcgc_firm,17,2)+',Error de dados na nota,'+SUBSTR(m_caminho[i],3,2)+','+SUBSTR(m_caminho[i],21,2)+',1,'+SUBSTR(m_caminho[i],38,6)+','+SUBSTR(m_caminho[i],38,6)+')',,3,,1)
                                        IF ! EMPTY(mretorno)
                                        sr_getconnection():exec('INSERT INTO nfe_inutilizada ('+;
                                                'JUSTIFICATIVA,'+;//1
                                                'ANO          ,'+;//2
                                                'MODELO       ,'+;//3
                                                'SERIE        ,'+;//4
                                                'NUMERO       ,'+;//4
                                                'CAMINHO      )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue('Error de dados na nota' )+','+; //1
                                                sr_cdbvalue(SUBSTR(m_caminho[i],3,2) )+','+; //2
                                                sr_cdbvalue(SUBSTR(m_caminho[i],21,2))+','+; //3
                                                sr_cdbvalue('1'                      )+','+; //4
                                                sr_cdbvalue(SUBSTR(m_caminho[i],38,6))+','+;
                                                sr_cdbvalue(mcaminho)+')',,.f.)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                        ENDIF
                                //ENDIF
                        NEXT
                        wvw_lclosewindow()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
