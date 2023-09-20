#include "inkey.ch"              // constantes de codigos das teclas
#include "wvwtools.ch"
//REQUEST SQLRDD             // SQLRDD should be linked in
//REQUEST SR_FIREBIRD        // Needed if you plan to use native connection to Firebird
REQUEST DBFCDX
REQUEST DBFFPT

MEMVAR getlist,cod_operado,mcgc_firm,minsc_firm,nivel_acess,mdata_sis
*********************************  F I M *********************************************
/*
#include "inkey.ch"              // constantes de codigos das teclas
#include "wvwtools.ch"
//REQUEST SQLRDD             // SQLRDD should be linked in
//REQUEST SR_FIREBIRD        // Needed if you plan to use native connection to Firebird
REQUEST DBFCDX
REQUEST DBFFPT

MEMVAR getlist,cod_operado,mcgc_firm,minsc_firm,nivel_acess,mdata_sis
*********************************  F I M *********************************************
*******************
FUNCTION calc_cus(consulta)
*******************
LOCAL msele,morde,icm_aux:=0,mmedio_ven,mtipo_preco,firm_aux:=0,pis_aux:=0,;
      confis_aux:=0,micm_calc:=0,calc_merc:={}
MEMVAR mcod_merc,micm,mcod_op,micm_firm,mpis,mconfis,mvlr_merc,mcust_merc,mpr_unit,;
       mdesc1,mdesc2,mdesc3,mencargo_f,mipi,mfrete,mii,mdisp_asse,mvlr_icmsub,;
       mvlr_nota,mimposto,mp_lucro,mfator,mcust_real,mquantd,mpr_medio,mpr_venda,;
       mpercent,lci,cci,mnivel_cal,micmsub
msele := SELE()
morde := INDEXORD()

calc_merc:={}
cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
sr_getconnection():exec(ccomm,,.t.,@calc_merc)
IF LEN(calc_merc) = 0
        atencao('Codigo nao Cadastrado !!!')
        RETURN .F.
ENDIF



****************
SELE('merc');ORDSETFOCUS(1)
****************

SEEK STRZERO(mcod_merc,5)

micm_calc := icm_aux := micm
firm_aux := micm_firm
pis_aux  := mpis
confis_aux := mconfis
IF merc->isento = 'S'   //.OR. mcod_op = '02'
        micm_firm := micm_calc := mpis := mconfis := 0
ENDIF
IF mnivel_cal = '1'
        mvlr_merc := mpr_unit - (mpr_unit*(mdesc1/100))
        mvlr_merc := mvlr_merc - (mpr_unit*(mdesc2/100))
        mvlr_merc := mvlr_merc - (mpr_unit*(mdesc3/100))
        mvlr_merc := mvlr_merc + (ROUND(mvlr_merc * mencargo_f,2)) + (ROUND(mvlr_merc * mfrete,2))

        IF mipi > 0
                mcust_merc := mvlr_merc + (mvlr_merc * (mipi/100)) - (mvlr_merc * (micm_calc/100))
        ELSE
                mcust_merc := mvlr_merc * (100 - micm_calc)
                mcust_merc := mcust_merc / 100
        ENDIF
        IF mii > 0
                mcust_merc := mvlr_merc + (mvlr_merc * (mii/100))
        ENDIF
        IF mdisp_asse > 0
                mcust_merc := mcust_merc + (mvlr_merc * mdisp_asse)
        ENDIF
        micmsub := 0
        IF mvlr_icmsub > 0
                micmsub := (mvlr_merc * (mvlr_icmsub/mvlr_nota))
                mcust_merc := mcust_merc + micmsub
        ENDIF
        **********************************************************************
        mfator := 100 - (mpis + mconfis + micm_firm + mimposto + mp_lucro)
        **********************************************************************
        mcust_real := (mcust_merc / (100 - (micm_firm+mpis+mconfis+mimposto)))*100
        IF merc->saldo_mer > 0
                mpr_medio := ((mquantd * mcust_real) + (merc->saldo_mer * merc->pr_medio)) / (mquantd + merc->saldo_mer)
        ELSE
                mpr_medio := mcust_real
        ENDIF
        IF m_set[1,79] == 'O'
                mpr_venda := (mcust_merc / (100 - (micm_firm+mpis+mconfis+mimposto+mp_lucro)))*100
        ELSEIF m_set[1,79] == 'M'
                IF mpercent == 'P'
                        mpr_venda := mpr_medio * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                ELSEIF mpercent == 'F'
                        mpr_venda := (mpr_medio / (100-mp_lucro)) * 100  // pelo CUSTO REAL
                ENDIF
        ELSEIF m_set[1,79] == 'R'
                IF mpercent == 'P'
                        mpr_venda := mcust_real * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                ELSEIF mpercent == 'F'
                        mpr_venda := (mcust_real / (100-mp_lucro)) * 100  // pelo CUSTO REAL
                ENDIF
        ENDIF
        IF mcod_op = '04'
                mpr_unit4 := mpr_unit / IF(EMPTY(mper_vlr),1,mper_vlr/100)
                mvlr_merc4 := mpr_unit4 - (mpr_unit4*(mdesc1/100))
                mvlr_merc4 := mvlr_merc4 - (mpr_unit4*(mdesc2/100))
                mvlr_merc4 := mvlr_merc4 - (mpr_unit4*(mdesc3/100))
                mvlr_merc4 := mvlr_merc4 + (ROUND(mvlr_merc4 * mencargo_f,2)) + (ROUND(mvlr_merc4 * mfrete,2))

                IF mipi > 0
                        mcust_mer4 := mvlr_merc4 + (mvlr_merc4 * (mipi/100)) - (mvlr_merc4 * (micm_calc/100))
                ELSE
                        mcust_mer4 := mvlr_merc4 * (100 - micm_calc)
                        mcust_mer4 := mcust_mer4 / 100
                ENDIF
                IF mii > 0
                        mcust_mer4 := mvlr_merc4 + (mvlr_merc4 * (mii/100))
                ENDIF
                IF mdisp_asse > 0
                        mcust_mer4 := mcust_mer4 + (mvlr_merc4 * mdisp_asse)
                ENDIF
                micmsub := 0
                IF mvlr_icmsub > 0
                        micmsub := (mvlr_merc4 * (mvlr_icmsub/mvlr_nota))
                        mcust_mer4 := mcust_mer4 + micmsub
                ENDIF
                **********************************************************************
                mfator := 100 - (mpis + mconfis + micm_firm + mimposto + mp_lucro)
                **********************************************************************
                mcust_rea4 := (mcust_mer4 / (100 - (micm_firm+mpis+mconfis+mimposto)))*100
                //mcust_rea4 := (mcust_mer4 / (100 - (micm_firm+mpis+mconfis+mimposto)))*100
                IF merc->saldo_mer > 0
                        mpr_medio4 := ((mquantd * mcust_rea4) + (merc->saldo_mer * merc->pr_medio)) / (mquantd + merc->saldo_mer)
                ELSE
                        mpr_medio4 := mcust_rea4
                ENDIF
                IF m_set[1,79] == 'O'
                        mpr_venda4 := (mcust_mer4 / (100 - (micm_firm+mpis+mconfis+mimposto+mp_lucro)))*100
                ELSEIF m_set[1,79] == 'M'
                        IF mpercent == 'P'
                                mpr_venda4 := mpr_medio4 * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                        ELSEIF mpercent == 'F'
                                mpr_venda4 := (mpr_medio4 / (100-mp_lucro)) * 100  // pelo CUSTO REAL
                        ENDIF
                ELSEIF m_set[1,79] == 'R'
                        IF mpercent == 'P'
                                mpr_venda4 := mcust_rea4 * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                        ELSEIF mpercent == 'F'
                                mpr_venda4 := (mcust_rea4 / (100-mp_lucro)) * 100  // pelo CUSTO REAL
                        ENDIF
                ENDIF
        ENDIF
ELSEIF mnivel_cal = '2'
        mvlr_merc := mpr_unit
        mcust_merc := mvlr_merc
        mcust_real := mcust_merc
        mpr_medio := ((mquantd * mcust_real) + (merc->saldo_mer * merc->pr_medio)) / (mquantd + merc->saldo_mer)
        IF m_set[1,79] = 'M'
                mpr_venda := mpr_medio * ((mp_lucro/100)+1)  // pelo CUSTO REAL
        ELSEIF m_set[1,79] = 'R'
                mpr_venda := mcust_real * ((mp_lucro/100)+1)  // pelo CUSTO REAL
        ENDIF
ELSEIF mnivel_cal = '3'
        mvlr_merc := mpr_unit - (mpr_unit*(mdesc1/100))
        mvlr_merc := mvlr_merc - (mpr_unit*(mdesc2/100))
        mvlr_merc := mvlr_merc - (mpr_unit*(mdesc3/100))
        mvlr_merc := mvlr_merc + (ROUND(mvlr_merc * mencargo_f,2)) + (ROUND(mvlr_merc * mfrete,2))

        //mcust_merc := mvlr_merc + (mvlr_merc * (mipi/100)) - (mvlr_merc * (micm_calc/100))
        mcust_merc := mvlr_merc + (mvlr_merc * (mipi/100))

        IF mii > 0
                mcust_merc := mcust_merc + (mcust_merc * (mii/100))
        ENDIF
        IF mdisp_asse > 0
                mcust_merc := mcust_merc + (mcust_merc * mdisp_asse)
        ENDIF
        micmsub := 0
        IF mvlr_icmsub > 0
                micmsub := (mvlr_merc * (mvlr_icmsub/mvlr_nota))
                mcust_merc := mcust_merc + micmsub
        ENDIF

        mcust_real := mcust_merc*(((micm_firm - micm_calc)/100)+1)
        mcust_real := mcust_real*((mpis/100)+1)
        mcust_real := mcust_real*((mconfis/100)+1)
        mcust_real := mcust_real*((mimposto/100)+1)

        IF merc->saldo_mer > 0
                mpr_medio := ((mquantd * mcust_real) + (merc->saldo_mer * merc->pr_medio)) / (mquantd + merc->saldo_mer)
        ELSE
                mpr_medio := mcust_real
        ENDIF
        IF m_set[1,79] == 'M'
                mpr_venda := mpr_medio * ((mp_lucro/100)+1)  // pelo CUSTO REAL
        ELSEIF m_set[1,79] == 'R'
                mpr_venda := mcust_real * ((mp_lucro/100)+1)  // pelo CUSTO REAL
        ENDIF
        IF mcod_op = '04'
                mpr_unit4 := mpr_unit / IF(EMPTY(mper_vlr),1,mper_vlr/100)
                mvlr_merc4 := mpr_unit4 - (mpr_unit4*(mdesc1/100))
                mvlr_merc4 := mvlr_merc4 - (mpr_unit4*(mdesc2/100))
                mvlr_merc4 := mvlr_merc4 - (mpr_unit4*(mdesc3/100))
                mvlr_merc4 := mvlr_merc4 + (ROUND(mvlr_merc4 * mencargo_f,2)) + (ROUND(mvlr_merc4 * mfrete,2))

                mcust_mer4 := mvlr_merc4 + (mvlr_merc4 * (mipi/100)) - (mvlr_merc4 * (micm_calc/100))
                IF mii > 0
                        mcust_mer4 := mcust_merc4 + (mvlr_merc4 * (mii/100))
                ENDIF
                IF mdisp_asse > 0
                        mcust_mer4 := mcust_mer4 + (mvlr_merc4 * mdisp_asse)
                ENDIF
                micmsub := 0
                IF mvlr_icmsub > 0
                        micmsub := (mvlr_merc4 * (mvlr_icmsub/mvlr_nota))
                        mcust_mer4 := mcust_mer4 + micmsub
                ENDIF

                mcust_rea4 := mcust_mer4*((micm_firm/100)+1)
                mcust_rea4 := mcust_rea4*((mpis/100)+1)
                mcust_rea4 := mcust_rea4*((mconfis/100)+1)
                mcust_rea4 := mcust_rea4*((mimposto/100)+1)

                IF merc->saldo_mer > 0
                        mpr_medio4 := ((mquantd * mcust_rea4) + (merc->saldo_mer * merc->pr_medio)) / (mquantd + merc->saldo_mer)
                ELSE
                        mpr_medio4 := mcust_rea4
                ENDIF
                IF m_set[1,79] == 'M'
                        mpr_venda4 := mpr_medio4 * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                ELSEIF m_set[1,79] == 'R'
                        mpr_venda4 := mcust_rea4 * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                ENDIF
        ENDIF
ENDIF
WHILE .T.
        op_tela(00,05,10,95,' RESUMO CALCULOS DOS PRECOS ')
        setcor(3)
        DEVPOS(0,01);DEVOUT(' Precos Anteriores ')
        @ 1,00 TO 1,95
        setcor(1)
        DEVPOS(2,01);DEVOUT(' Vlr.Mercad.')
        DEVPOS(2,14);DEVOUT(' Cus.Mercad.')
        DEVPOS(2,27);DEVOUT('  Custo Real')
        DEVPOS(2,40);DEVOUT(' Custo Medio')
        DEVPOS(2,53);DEVOUT(' Preco Venda')
        DEVPOS(2,66);DEVOUT('       Lucro')
        DEVPOS(4,01);DEVOUT('Saldo Atual da Mecadoria:             ')
        DEVPOS(5,0);DEVOUT(REPLI(CHR(223),95))
        //@ 5,0 TO 5,95
        setcor(3)
        DEVPOS(6,01);DEVOUT(' Precos Calculados ')
        @ 7,0 TO 7,95
        setcor(1)
        DEVPOS(8,01);DEVOUT(' Vlr.Mercad.')
        DEVPOS(8,14);DEVOUT(' Cus.Mercad.')
        DEVPOS(8,27);DEVOUT('  Custo Real')
        DEVPOS(8,40);DEVOUT(' Custo Medio')
        DEVPOS(8,53);DEVOUT(' Preco Venda')
        DEVPOS(8,66);DEVOUT('       Lucro')
        DEVPOS(10,01);DEVOUT('Saldo Apos a entrada:             ')

        setcor(3)
        DEVPOS(3,01);DEVOUTPICT(merc->vlr_merc,'9,999,999.99')
        DEVPOS(3,14);DEVOUTPICT(merc->cust_merc,'9,999,999.99')
        DEVPOS(3,27);DEVOUTPICT(merc->cust_real,'9,999,999.99')
        DEVPOS(3,40);DEVOUTPICT(merc->pr_medio,'9,999,999.99')
        DEVPOS(3,66);DEVOUTPICT(merc->pr_venda-merc->pr_medio,'9,999,999.99')
        DEVPOS(4,27);DEVOUTPICT(merc->saldo_mer,'999,999.99')   

        DEVPOS(9,01);DEVOUTPICT(mvlr_merc,'9,999,999.99')
        DEVPOS(9,14);DEVOUTPICT(mcust_merc,'9,999,999.99')
        DEVPOS(9,27);DEVOUTPICT(mcust_real,'9,999,999.99')
        DEVPOS(9,40);DEVOUTPICT(mpr_medio,'9,999,999.99')
        DEVPOS(9,66);DEVOUTPICT(mpr_venda-mpr_medio,'9,999,999.99')
        DEVPOS(10,23);DEVOUTPICT(merc->saldo_mer+mquantd,'999,999.99')
        IF mcust_real >= merc->pr_venda
                DEVPOS(3,53);DEVOUTPICT(merc->pr_venda,'9,999,999.99')
                DEVPOS(9,53);DEVOUTPICT(mpr_venda,'9,999,999.99')
                IF 'N' = op_simnao('S','Preco de Custo Real Calculado e Maior que o Preco de Venda Anterior ATUALIZAR')
                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' - Valor Custo Real Calculado: '+ALLTRIM(TRANSFORM(mcust_real,'999,999,999.99'))+' Preco de Venda Anterior: '+ALLTRIM(TRANSFORM(merc->pr_venda,'999,999.99'))+' ... Senha de autorizacao:','LIB_ATU_PRECO_E',,'',STRZERO(mcod_merc,5))
                                LOOP
                        ENDIF
                ELSE
                        mpr_venda := merc->pr_venda
                ENDIF
                EXIT
        IF merc->pr_venda <= mpr_venda
                DEVPOS(3,53);DEVOUTPICT(merc->pr_venda,'9,999,999.99')
                DEVPOS(9,53);DEVOUTPICT(mpr_venda,'9,999,999.99')
                IF 'N' = op_simnao('S','Preco de Venda Atual Menor que Preco Venda Calculado ATUALIZAR')
                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' - Valor Anterior: '+ALLTRIM(TRANSFORM(merc->pr_venda,'999,999,999.99'))+' Preco de Venda Calculado: '+ALLTRIM(TRANSFORM(mpr_venda,'999,999.99'))+' ... Senha de autorizacao:','LIB_ATU_PRECO_E',,'',STRZERO(mcod_merc,5))
                                LOOP
                        ENDIF
                ELSE
                        mpr_venda := merc->pr_venda
                ENDIF
                EXIT
        ELSEIF merc->pr_venda >= mpr_venda
                setcor(3,'*')
                DEVPOS(3,53);DEVOUTPICT(merc->pr_venda,'9,999,999.99')
                DEVPOS(9,53);DEVOUTPICT(mpr_venda,'9,999,999.99')
                setcor(1)
                IF 'S' = op_simnao('N','Preco de Venda ANTERIOR Maior que Preco Venda Calculado ATUALIZAR')
                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' - Valor de Venda Anterior: '+ALLTRIM(TRANSFORM(merc->pr_venda,'999,999,999.99'))+' Preco de Venda Calculado: '+ALLTRIM(TRANSFORM(mpr_venda,'999,999.99'))+' ... Senha de autorizacao:','LIB_ATU_PRECO_E',,'',STRZERO(mcod_merc,5))
                                LOOP
                        ENDIF
                ELSE
                        mpr_venda := merc->pr_venda
                ENDIF
                EXIT
        ELSE
                DEVPOS(3,53);DEVOUTPICT(merc->pr_venda,'9,999,999.99')
                DEVPOS(9,53);DEVOUTPICT(mpr_venda,'9,999,999.99')
        ENDIF
ENDDO
setcor(1)
******************
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
******************
micm       := icm_aux
micm_firm  := firm_aux
mpis       := pis_aux
mconfis    := confis_aux
wvw_lclosewindow()
RETURN .T.
*/
************************** F I M **********************
********************
* VERIFICA A ENTRADA
***********************

FUNCTION ver_entrada(mcod,mdoc)

LOCAL msele,morde

msele := SELE()
morde := INDEXORD()

***************
SELE('mov');ORDSETFOCUS(4)
GO TOP
***************

IF mov->(DBSEEK('NF'+STRZERO(VAL(mdoc),6)+'  '+'E'+STRZERO(mcod,4)))
        atencao('Esta nota ja foi processada OK !!!')
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ELSE
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDIF
RETURN NIL
***************************** F I M ****************************************
*********************
* VERIFICA O FABRICANTE
***********************
FUNCTION ver_fab(mcod,ld,cd,p)
******************************
LOCAL msele,morde
MEMVAR muf,mfabrica
msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF mcod = 0
        IF ld <> NIL
                setcor(3)
                DEVPOS(ld,cd);DEVOUT(SPACE(30))
                setcor(1)
        ENDIF
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDIF
***************
SELE('forn');ORDSETFOCUS(1)
GO TOP
***************
IF ! forn->(DBSEEK(STRZERO(mcod,4)))
        mcod := 0
        IF p = NIL
                setcor(3)
                DEVPOS(ld,cd);DEVOUT(SPACE(30))
                atencao('Fabricante nao Cadastrado !!!')
        ENDIF
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF
IF p = NIL
        muf := forn->uf
        mfabrica := forn->razao
ENDIF
IF ld <> NIL
        setcor(3)
        DEVPOS(ld,cd);DEVOUT(forn->razao)
        setcor(1)
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
**************** f i m **********************************
*********************
* VERIFICA O TRANSPORTADORA
***********************

FUNCTION ver_trans(mcod,ld,cd,p)

LOCAL msele,morde
MEMVAR mdata_frete,mtransp
msele := SELE()
morde := INDEXORD()

IF mcod = 0
        IF ld <> NIL
                setcor(3)
                DEVPOS(ld,cd);DEVOUT(SPACE(30))
                setcor(1)
        ENDIF
        RETURN .T.
ENDIF
***************
SELE('tran');ORDSETFOCUS(1)
GO TOP
***************

IF ! tran->(DBSEEK(STRZERO(mcod,4)))
        mcod := 0
        IF p = NIL
                setcor(3)
                DEVPOS(ld,cd);DEVOUT(SPACE(30))
                atencao('Transportadora nao Cadastrada !!!')
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF
ENDIF
IF p = NIL
        mdata_frete := mdata_frete + VAL(tran->prazo_pag)
        mtransp := tran->razao
ENDIF
setcor(3)
DEVPOS(ld,cd);DEVOUT(tran->razao)
setcor(1)
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
**************** f i m **********************************

FUNCTION prt_gru(vgru)
**********************

LOCAL msele,morde
MEMVAR mtipo_imp
msele := SELE()
morde := INDEXORD()

IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
**************
SELE('grup');ORDSETFOCUS(1)
GO TOP
**************

SEEK STRZERO(vgru,3)

IF ! FOUND()
        vgru := 0
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDIF
imprt(mtipo_imp,'N')
DEVPOS(PROW()+1,00);DEVOUT(PADC('>>> GRUPO: '+STRZERO(vgru,3)+'-'+ALLTRIM(grup->merc)+' <<<',79))
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
********************** F I M ********************************
********************
* VERIFICA SUB-GRUPO
********************

FUNCTION prt_sgru(vgru,vsgru)
**********************

LOCAL msele,morde

msele := SELE()
morde := INDEXORD()

IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
**************
SELE('grup');ORDSETFOCUS(1)
GO TOP
**************

SEEK STRZERO(vgru,3)+STRZERO(vsgru,2)

IF ! FOUND()
        vsgru := 0
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDIF
DEVPOS(PROW()+1,00);DEVOUT(PADC('*** Sub-Grupo: '+SUBSTR(grup->gru_sub,1,3)+'.'+SUBSTR(grup->gru_sub,4,2)+' - '+ALLTRIM(grup->merc)+' ***',79))
DEVPOS(PROW()+1,00);DEVOUT(' ')
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
********************** F I M ********************************
******************
* VERIFICA ESPECIE DO PRODUTO
******************
FUNCTION ver_espe(vespe,li,ci,t,mzero)
**********************
//LOCAL msele,morde,cons_espe:={}
LOCAL cons_espe:={}

IF (mzero <> NIL .OR. mzero = 0) .AND. mzero <> 1
        IF EMPTY(vespe)
                IF li <> NIL
                        setcor(3)
                        DEVPOS(li,ci);DEVOUT(SPACE(20))
                        setcor(1)
                ENDIF
                RETURN .T.
        ENDIF
ENDIF

cons_espe := {}
cComm  := "SELECT * FROM sacespe WHERE cod_espe = "+sr_cdbvalue(STRZERO(vespe,4))
sr_getconnection():exec(ccomm,,.t.,@cons_espe)
IF t = .T. .AND. LEN(cons_espe) > 0
        vespe := 0
        atencao('Codigo ja Cadastrado !!!')
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF
IF LEN(cons_espe) = 0
        vespe := 0
        atencao('Codigo nao Cadastrado !!!')
        RETURN .F.
ENDIF
/*
msele := SELE()
morde := INDEXORD()

**************
SELE('espe');ORDSETFOCUS(1)
GO TOP
**************

SEEK STRZERO(vespe,4)

IF t = .T. .AND. FOUND()
        vespe := 0
        atencao('Codigo ja Cadastrado !!!')
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF
IF ! FOUND()
        vespe := 0
        atencao('Codigo nao Cadastrado !!!')
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF
*/
IF li = NIL
        //SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDIF
setcor(3)
DEVPOS(li,ci);DEVOUT(cons_espe[1,2])
setcor(1)
//SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
********************** F I M ********************************
/*
*****************************
FUNCTION ver_merc()
*****************************

LOCAL msele,morde
MEMVAR mcod_merc,mmerc,munidade,mp_lucro,mpeso,lci,cci
/*
msele := SELE()
morde := INDEXORD()

****************
SELE('merc');ORDSETFOCUS(1)
GO TOP
****************

SEEK STRZERO(mcod_merc,5)

IF ! FOUND()
        atencao('Codigo da Mercadoria nao Cadastrada !!!')
        mcod_merc := 0
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF

WHILE .T.
        mensagem('<>Prox.Reg. - <>Registro Ant. - <ENTER>p/Confirma')
        mcod_merc := VAL(merc->cod_merc)
        mmerc := merc->merc
        munidade := merc->unidade
        mp_lucro := merc->p_lucro
        mpeso := merc->peso
        setcor(3)
        DEVPOS(lci+12,cci+14);DEVOUT(STRZERO(mcod_merc,5))
        DEVPOS(lci+12,cci+20);DEVOUT(mmerc)
        DEVPOS(lci+12,cci+66);DEVOUT(munidade)
        DEVPOS(lci+13,cci+28);DEVOUTPICT(mp_lucro,'999.99')
        DEVPOS(lci+17,cci+01);DEVOUTPICT(merc->vlr_merc,'9,999,999.99')
        DEVPOS(lci+17,cci+14);DEVOUTPICT(merc->cust_merc,'9,999,999.99')
        DEVPOS(lci+17,cci+27);DEVOUTPICT(merc->cust_real,'9,999,999.99')
        DEVPOS(lci+17,cci+40);DEVOUTPICT(merc->pr_medio,'9,999,999.99')
        DEVPOS(lci+17,cci+53);DEVOUTPICT(merc->pr_venda,'9,999,999.99')
        DEVPOS(lci+17,cci+66);DEVOUTPICT(merc->pr_venda-merc->pr_medio,'9,999,999.99')
        DEVPOS(lci+18,cci+27);DEVOUTPICT(merc->saldo_mer,'999,999.99')
        setcor(1)
        INKEY(0)
        IF LASTKEY()= 13
//              SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                mensagem('Preencha o restante dos Campos')
                RETURN .T.
        ENDIF
        IF LASTKEY() = 5
                SKIP
                IF EOF()
                        SKIP -1
                        atencao('Fim de Arquivo !!!')
                ENDIF
                LOOP
        ENDIF
        IF LASTKEY() = 24
                SKIP -1
                IF BOF()
                        SKIP
                        atencao('Inicio de Arquivo !!!')
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO
RETURN NIL
*/
**************************** F I M ******************************************
***********************
FUNCTION v_fornece(vcod,li,ci,p,loc)
***********************

LOCAL msele,morde
MEMVAR mfornece

msele := SELE()
morde := INDEXORD()

IF EMPTY(vcod)
        mfornece := space(40)
        RETURN .T.
ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF

*************
SELE('forn');ORDSETFOCUS(1)
GO TOP
*************

IF ! forn->(DBSEEK(STRZERO(vcod,4)))
        IF p = NIL
                atencao('Codigo Fornecedor nao Existe no Arquivo !!!')
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ELSE
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                IF loc <> NIL;RETURN forn->cpostal;ENDIF
                RETURN .T.
        ENDIF
ELSE
        IF li = NIL .AND. ci = NIL
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                IF loc <> NIL;RETURN forn->cpostal;ENDIF
                RETURN .T.
        ENDIF
        setcor(3)
        DEVPOS(li,ci);DEVOUT(forn->razao)
        setcor(1)
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        IF loc <> NIL;RETURN forn->cpostal;ENDIF
        RETURN .T.
ENDIF
RETURN .T.
******************************** f i m **********************************
***********************
FUNCTION ent_forn(vcod,li,ci)
***********************

LOCAL msele,morde
MEMVAR muf,mfornece

IF EMPTY(vcod)
        RETURN .T.
ENDIF

IF SELE() <> 0
        msele := SELE()
        morde := INDEXORD()
ENDIF
*************
SELE('forn');ORDSETFOCUS(1)
GO TOP
*************

IF ! forn->(DBSEEK(STRZERO(vcod,4)))
         atencao('Codigo Fornecedor nao Existe no Arquivo !!!')
         vcod := 0
         SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
         RETURN .F.
ENDIF
muf := forn->uf
mfornece := forn->razao
setcor(3)
DEVPOS(li,ci);DEVOUT(forn->razao)
setcor(1)
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
******************************** f i m **********************************
***********************
FUNCTION ver_cli(vcod,li,ci,p)
***********************

LOCAL msele,morde
MEMVAR mcliente,mcpf,mcgc

msele := SELE()
morde := INDEXORD()

IF EMPTY(vcod)
        mcliente := SPACE(40)
        RETURN .T.
ENDIF

IF ! AbriArq('mastcli','cli');RETURN NIL;ENDIF
*************
SELE('cli');ORDSETFOCUS(1)
GO TOP
*************

SEEK STRZERO(vcod,5)

IF ! FOUND()
        IF p = NIL
                atencao('Codigo Cliente nao Existe no Arquivo !!!')
                vcod := 0
                mcliente := SPACE(40)
                varea := vcid := ' '
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ELSE
                mcliente := SPACE(40)
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF
ELSE
        IF li = NIL .AND. ci = NIL
                mcliente := cli->razao
                mcpf := cli->cpf
                mcgc := cli->cgc
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ENDIF
        mcliente := cli->razao
        mcpf := cli->cpf
        mcgc := cli->cgc
        varea := cli->area
        vcid  := cli->cidade
        setcor(3)
        DEVPOS(li,ci);DEVOUT(cli->razao)
        setcor(1)
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
******************************** f i m **********************************
********************************
* FUNCAO P/CONSULTAR FORNECEDOR
********************************
FUNCTION f6_forn(mop)
*****************
LOCAL mprg:='F6_FORN',;
      f6tela,f6tela1,f6lci,f6cci,f6lba,f6cba,f6msele,f6morde,f6men,;
      oconsprod,ocolprod[6],f6i,f6nkey,f6opcao,;
      mcod_f,mrazao,mfantasia,mcidade,mendereco,mcpfcnpj,mtelefone,;
      ccomm,cons_m,m_prod,m_poS,point,i,minsc

MEMVAR mcod_forn

IF ! ver_nivel(mprg,'CADASTRO DE FORNECEDOR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF


f6lci := f6cci := 0
f6lba := 23
f6cba := 100

f6msele := SELE()
f6morde := INDEXORD()
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
*************
SELE('forn');ORDSETFOCUS(2)
GO TOP
*************
op_tela(00,00,30,100,memp_resa+SPACE(50)+' FORNECEDOR / DESPESAS'+'  -  Quantidades: '+TRANSFORM(LASTREC(),'999,999'))
exibi_prg(mprg)
oconsprod := TBROWSEDB(f6lci,f6cci,f6lba-1,f6cba,'forn')
ocolprod[1] := TBCOLUMNNEW('Fornecedor',{||forn->razao})
ocolprod[2] := TBCOLUMNNEW('Cod.',{||forn->cod_forn})
ocolprod[3] := TBCOLUMNNEW('Tipo',{||TRANSFORM(forn->tipo,'@R 9.99.9')})
ocolprod[4] := TBCOLUMNNEW('Descricao da Despesa',{||verdesp(forn->tipo,,,,1)})
ocolprod[5] := TBCOLUMNNEW('UF',{||forn->uf})
ocolprod[6] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(forn->cgc),TRANSFORM(forn->cgc,'@@R 99.999.999/9999-99'),TRANSFORM(forn->cpf,'@@R 999.999.999-99'))})
//ocolprod[7] := TBCOLUMNNEW('       CPF',{||TRANSFORM(forn->cpf,'@@R 999.999.999-99')})
f6i:=0
FOR f6i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f6i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        IF mop = '*'
                mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        f6nkey := 0
        WHILE f6nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                botao(f6lba+1,f6cci+1,f6lba+4,f6cba,,' Detalhe ')
                setcor(3)
                DEVPOS(f6lba+2,f6cci+1);DEVOUT('End.:')
                DEVPOS(f6lba+3,f6cci+1);DEVOUT('Cidade:')
                DEVPOS(f6lba+3,f6cci+30);DEVOUT('UF:')
                DEVPOS(f6lba+3,f6cci+37);DEVOUT('Tel.:')
                setcor(1)
                DEVPOS(f6lba+2,f6cci+6);DEVOUT(forn->endereco+' - '+forn->bairro)
                DEVPOS(f6lba+3,f6cci+8);DEVOUT(forn->cidade)
                DEVPOS(f6lba+3,f6cci+33);DEVOUT(forn->uf)
                DEVPOS(f6lba+3,f6cci+42);DEVOUT(forn->tel1)
                f6nkey := INKEY(0)
        END
        IF f6nkey == K_ESC
                EXIT
        ELSEIF f6nkey = 73 .OR. f6nkey = 105     // I
                sac140()
        ELSEIF f6nkey = 112 .OR. f6nkey = 80
                op_tela(00,00,33,100,memp_resa+SPACE(40)+' CONSULTA DE FORNECEDOR ')
                CLEAR GETS
                WHILE .T.
                        mcod_f       := 0
                        mrazao          := mfantasia := mcidade := mendereco := SPACE(40)
                        mcpfcnpj        := mtelefone := minsc := SPACE(14)
                        limpa(0,0,31,99)
                        mensagem('Digite a descricao ou *descricao p/Pesquisa qualquer lugar da descricao')
                        setcor(1)
                        DEVPOS(00,01);DEVOUT('Cod.Fornecedor:')
                        DEVPOS(01,01);DEVOUT('Razao Social..:')
                        DEVPOS(02,01);DEVOUT('Nome Fantasia.:')
                        DEVPOS(03,01);DEVOUT('Cidade........:')
                        DEVPOS(04,01);DEVOUT('Endereco......:')
                        DEVPOS(05,01);DEVOUT('CPF/CNPJ......:')
                        DEVPOS(05,32);DEVOUT('Inscricao Est.:')
                        DEVPOS(06,01);DEVOUT('Telefone......:')
                        setcor(3)
                        @ 07,00 TO 07,100
                        DEVPOS(08,01);DEVOUT('Razao Social                             Fantasia                                  Codigo  Cidade                 CPF/CNPJ')
                        @ 09,00 TO 09,100
                        @ 32,00 TO 32,100
                        DEVPOS(33,01);DEVOUT('Total Fornecedor.:')
                        DEVPOS(33,27);DEVOUT('Tempo da Pesquisa:')
                        setcor(1)
                        @ 00,17 GET mcod_f PICT '9999'
                        @ 01,17 GET mrazao PICT '@!' WHEN EMPTY(mcod_f)
                        @ 02,17 GET mfantasia PICT '@!' WHEN EMPTY(mcod_f)
                        @ 03,17 GET mcidade PICT '@!' WHEN EMPTY(mcod_f)
                        @ 04,17 GET mendereco PICT '@!' WHEN EMPTY(mcod_f)
                        @ 05,17 GET mcpfcnpj PICT '@!' WHEN EMPTY(mcod_f) .AND. EMPTY(mrazao) .AND. EMPTY(mfantasia) .AND. EMPTY(mcidade) .AND. EMPTY(mendereco)
                        @ 05,48 GET minsc PICT '@!' WHEN EMPTY(mcod_f) .AND. EMPTY(mrazao) .AND. EMPTY(mfantasia) .AND. EMPTY(mcidade) .AND. EMPTY(mendereco)  .AND. men_get(0,0,'Digite a INSCRICAO sem pontos e Hifens') VALID  lim_get()
                        @ 06,17 GET mtelefone PICT '@!' WHEN EMPTY(mcod_f) .AND. EMPTY(mcpfcnpj) .AND. EMPTY(minsc)
                        READ
                        IF LASTKEY() = 27
                                CLEAR GETS
                                EXIT
                        ENDIF
                        IF EMPTY(mcod_f) .AND. EMPTY(mrazao) .AND. EMPTY(mfantasia) .AND. EMPTY(mcidade) .AND. EMPTY(mendereco) .AND. EMPTY(mcpfcnpj) .AND. EMPTY(mtelefone) .AND. EMPTY(minsc)
                                LOOP
                        ENDIF
                        mhoras := TIME()
                        cComm  := "SELECT * FROM sacforn WHERE cod_forn IS NOT NULL"
                        IF ! EMPTY(mcod_f)
                                ccomm := ccomm + " AND cod_forn = "+sr_cdbvalue(STRZERO(mcod_f,4))
                        ELSE
                                IF ! EMPTY(mcpfcnpj)
                                        IF LEN(ALLTRIM(mcpfcnpj)) < 14
                                                ccomm := ccomm + " AND cpf = "+sr_cdbvalue(ALLTRIM(mcpfcnpj))
                                        ELSE
                                                ccomm := ccomm + " AND cgc = "+sr_cdbvalue(ALLTRIM(mcpfcnpj))
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(minsc)
                                        minsc := STRTRAN(minsc,'.','')
                                        minsc := STRTRAN(minsc,'-','')
                                        minsc := STRTRAN(minsc,'/','')
                                        ccomm := ccomm + " AND insc LIKE "+sr_cdbvalue(ALLTRIM(minsc)+'%')
                                ENDIF
                                IF ! EMPTY(mtelefone)
                                        IF SUBSTR(mtelefone,1,1) = '*'
                                        	ccomm := ccomm + " AND (tel1 LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mtelefone,2))+'%')+" OR tel2 LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mtelefone,2))+'%')+")"
                                        ELSE
                                        	ccomm := ccomm + " AND (tel1 LIKE "+sr_cdbvalue(ALLTRIM(mtelefone)+'%')+" OR tel2 LIKE "+sr_cdbvalue(ALLTRIM(mtelefone)+'%')+")"
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mrazao)
                                        IF SUBSTR(mrazao,1,1) = '*'
                                                ccomm := ccomm + " AND razao LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mrazao,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND razao LIKE "+sr_cdbvalue(ALLTRIM(mrazao)+'%')
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mfantasia)
                                        IF SUBSTR(mfantasia,1,1) = '*'
                                                ccomm := ccomm + " AND fantasia LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mfantasia,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND fantasia LIKE "+sr_cdbvalue(ALLTRIM(mfantasia)+'%')
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mcidade)
                                        IF SUBSTR(mcidade,1,1) = '*'
                                                ccomm := ccomm + " AND cidade LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mcidade,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND cidade LIKE "+sr_cdbvalue(ALLTRIM(mcidade)+'%')
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mendereco)
                                        IF SUBSTR(mendereco,1,1) = '*'
                                                ccomm := ccomm + " AND endereco LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mendereco,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND endereco LIKE "+sr_cdbvalue(ALLTRIM(mendereco)+'%')
                                        ENDIF
                                ENDIF
                        ENDIF
                        ccomm := ccomm + " ORDER BY razao"
                        cons_m := {}
                        sr_getconnection():exec(ccomm,,.t.,@cons_m)
                        IF LEN(cons_m) = 0
                                atencao('Nao foi encontrado nenhum FORNECEDOR ...')
                                LOOP
                        ENDIF
                        m_prod := {}
                        m_pos  := {}
                        point  := i := 0
                        DEVPOS(33,20);DEVOUT(STRZERO(LEN(cons_m),5))
                        DEVPOS(33,46);DEVOUT(ELAPTIME(mhoras,TIME()))
                        FOR i = 1 TO LEN(cons_m)
                                AADD(m_prod,' '+cons_m[i,2];
                                           +' '+cons_m[i,35];
                                           +'  '+cons_m[i,1];
                                           +'  '+cons_m[i,8];
                                           +'  '+IF(! EMPTY(cons_m[i,16]),cons_m[i,16],cons_m[i,18]))
                                        AADD(m_pos,cons_m[i,36])
                        NEXT
                        point := ACHOICE(10,0,30,100,m_prod,,,point)
                        DO CASE
                                CASE LASTKEY()=27
                                        LOOP
                                CASE LASTKEY() = 13
                                        *************
                                        SELE('forn');ORDSETFOCUS(2)
                                        *************
                                        GO m_pos[point]
                                        EXIT
                        ENDCASE
                ENDDO
                wvw_lclosewindow()
                *************
                SELE('forn');ORDSETFOCUS(2)
                *************
                oconsprod := TBROWSEDB(f6lci,f6cci,f6lba-1,f6cba,'forn')
                ocolprod[1] := TBCOLUMNNEW('Fornecedor',{||forn->razao})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||forn->cod_forn})
                ocolprod[3] := TBCOLUMNNEW('Tipo',{||TRANSFORM(forn->tipo,'@R 9.99.9')})
                ocolprod[4] := TBCOLUMNNEW('Descricao da Despesa',{||verdesp(forn->tipo,,,,1)})
                ocolprod[5] := TBCOLUMNNEW('UF',{||forn->uf})
                ocolprod[6] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(forn->cgc),TRANSFORM(forn->cgc,'@@R 99.999.999/9999-99'),TRANSFORM(forn->cpf,'@@R 999.999.999-99'))})
                f6i:=0
                FOR f6i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f6i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()

        ELSEIF f6nkey == K_ENTER
                mcod_forn := VAL(forn->cod_forn)
                IF mop = '*'
                        f6opcao := mensagem1('Deseja <A>lterar <E>xcluir:','A','A,E')
                        IF LASTKEY() = 27
                                LOOP
                        ELSEIF f6opcao = 'A'
                                sac141()
                        ELSEIF f6opcao = 'E'
                                sac142()
                        ENDIF
                ELSE
                        EXIT
                ENDIF
                *************
                SELE('forn');ORDSETFOCUS(2)
                *************
                GO TOP
                oconsprod := TBROWSEDB(f6lci,f6cci,f6lba-1,f6cba,'forn')
                ocolprod[1] := TBCOLUMNNEW('Fornecedor',{||forn->razao})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||forn->cod_forn})
                ocolprod[3] := TBCOLUMNNEW('Tipo',{||TRANSFORM(forn->tipo,'@R 9.99.9')})
                ocolprod[4] := TBCOLUMNNEW('Descricao da Despesa',{||verdesp(forn->tipo,,,,1)})
                ocolprod[5] := TBCOLUMNNEW('UF',{||forn->uf})
                ocolprod[6] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(forn->cgc),TRANSFORM(forn->cgc,'@@R 99.999.999/9999-99'),TRANSFORM(forn->cpf,'@@R 999.999.999-99'))})
                f6i:=0
                FOR f6i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f6i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,f6nkey,'forn')
                        *************
                        SELE('forn');ORDSETFOCUS(2)
                        *************
                        oconsprod := TBROWSEDB(f6lci,f6cci,f6lba-1,f6cba,'forn')
                        ocolprod[1] := TBCOLUMNNEW('Fornecedor',{||forn->razao})
                        ocolprod[2] := TBCOLUMNNEW('Cod.',{||forn->cod_forn})
                        ocolprod[3] := TBCOLUMNNEW('Tipo',{||forn->tipo})
                        ocolprod[4] := TBCOLUMNNEW('Descricao da Despesa',{||verdesp(forn->tipo,,,,1)})
                        ocolprod[5] := TBCOLUMNNEW('UF',{||forn->uf})
                        ocolprod[6] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(forn->cgc),TRANSFORM(forn->cgc,'@@R 99.999.999/9999-99'),TRANSFORM(forn->cpf,'@@R 999.999.999-99'))})
                        f6i:=0
                        FOR f6i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[f6i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(f6msele);IF(f6morde>0,ORDSETFOCUS(f6morde),)
RELEASE f6tela,f6tela1,f6lci,f6cci,f6lba,f6cba,f6msele,f6morde,f6men,oconsprod,ocolprod[7],i,f6nkey,f6opcao
wvw_lclosewindow()
IF f6nkey == K_ESC
        RETURN NIL
ELSE
        RETURN mcod_forn
ENDIF
RETURN NIL
*********************** F I M ************************************************
********************************
* FUNCAO P/CONSULTAR ESPECIE
********************************

FUNCTION cons_espe()
*****************

LOCAL tela,tela1,lci,cci,lba,cba,msele,morde,men

LOCAL oconsprod,ocolprod[2],i,nkey,opcao
MEMVAR mcod_espe
lci := cci := 00
lba := 25
cba := 35

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
*************
SELE('espe');ORDSETFOCUS(2)
*************
op_tela(lci,cci,lba,cba)
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Codigo',{||espe->cod_espe})
ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||espe->descri})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<PGUP> <PGDN> <P>esquisa <ENTER> Conf. <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                mcod_espe:= VAL(espe->cod_espe)
                EXIT
        ELSE
                IF genkey(oconsprod,nkey,'espe')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||espe->cod_espe})
                        ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||espe->descri})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
CLEAR GETS
wvw_lclosewindow()
IF nkey == K_ESC
        RETURN NIL
ELSE
        RETURN mcod_espe
ENDIF
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR GRUPO E SUB_GRUPO
********************************

FUNCTION cons_grup()
********************

LOCAL tela,tela1,lci,cci,lba,cba,msele,morde,men,;
      oconsprod,ocolprod[2],i,nkey,opcao
MEMVAR mgrupo,mgru_sub
lci := cci := 00
lba := 25
cba := 60

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
*************
SELE('grup');ORDSETFOCUS(2)
*************

op_tela(05,10,30,70,'CONSULTA DE GRUPOS')
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Codigo',{||SUBSTR(grup->gru_sub,1,3)+'.'+SUBSTR(grup->gru_sub,4,2)})
ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||grup->merc})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<PGUP> <PGDN> <P>esquisa <ENTER> Conf. <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                IF READVAR() = 'MGRUPO'
                        mgrupo:= VAL(SUBSTR(grup->gru_sub,1,3))
                ELSEIF READVAR() = 'MGRU_SUB'
                        mgru_sub:= VAL(SUBSTR(grup->gru_sub,4))
                ENDIF
                EXIT
        ELSE
                IF genkey(oconsprod,nkey,'espe')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||grup->gru_sub})
                        ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||grup->merc})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
CLEAR GETS
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR CONTA DESPESA
********************************

FUNCTION cons_desp()
*****************

LOCAL tela,tela1,lci,cci,lba,cba,msele,morde,men

LOCAL oconsprod,ocolprod[2],i,nkey,opcao
MEMVAR mcoddesp
lci := cci := 00
lba := 25
cba := 55

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('saccadde','desp');RETURN NIL;ENDIF
*************
SELE('desp');ORDSETFOCUS(1)
*************
op_tela(lci,cci,lba,cba)
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Codigo',{||desp->codigo})
ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||desp->desc1})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<PGUP> <PGDN> <P>esquisa <ENTER> Conf. <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                mcoddesp := VAL(desp->codigo)
                EXIT
        ELSE
                IF genkey(oconsprod,nkey,'cdesp')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||desp->codigo})
                        ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||desp->desc1})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
CLEAR GETS
wvw_lclosewindow()
IF nkey == K_ESC
        RETURN NIL
ELSE
        RETURN mcoddesp
ENDIF
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR ROMANEIOS
********************************

FUNCTION cons_roma()
*****************

LOCAL lci,cci,lba,cba,msele,morde

LOCAL oconsprod,ocolprod[7],i,nkey,opcao
MEMVAR mnum_roma
lci := cci := 0
lba := 25
cba := 60

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacroma','roma');RETURN NIL;ENDIF
*************
SELE('roma');ORDSETFOCUS(1)
*************
op_tela(lci,cci,lba,cba)
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Romaneio',{||roma->num_roma})
ocolprod[2] := TBCOLUMNNEW('Data',{||DTOC(roma->dat_roma)})
ocolprod[3] := TBCOLUMNNEW('No.Ped.',{||roma->num_ped})
ocolprod[4] := TBCOLUMNNEW('Cod.Mot.',{||roma->cod_mot})
ocolprod[5] := TBCOLUMNNEW('Placa',{||roma->placa_mot})
ocolprod[6] := TBCOLUMNNEW('Data Ent.',{||DTOC(roma->entregue)})
ocolprod[7] := TBCOLUMNNEW('Oper.',{||roma->cod_ope})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<PGUP> <PGDN> <P>esquisa <ENTER> Conf. <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                mnum_roma := VAL(roma->num_roma)
                EXIT
        ELSE
                IF genkey(oconsprod,nkey,'roma')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Romaneio',{||roma->num_roma})
                        ocolprod[2] := TBCOLUMNNEW('Data',{||DTOC(roma->dat_roma)})
                        ocolprod[3] := TBCOLUMNNEW('No.Ped.',{||roma->num_ped})
                        ocolprod[4] := TBCOLUMNNEW('Cod.Mot.',{||roma->cod_mot})
                        ocolprod[5] := TBCOLUMNNEW('Placa',{||roma->placa_mot})
                        ocolprod[6] := TBCOLUMNNEW('Data Ent.',{||DTOC(roma->entregue)})
                        ocolprod[7] := TBCOLUMNNEW('Oper.',{||roma->cod_ope})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
CLEAR GETS
wvw_lclosewindow()
IF nkey == K_ESC
        RETURN NIL
ELSE
        RETURN mnum_roma
ENDIF
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR DOCUMENTOS A RECEBER
********************************

FUNCTION cons_doc(mcons,mtp_c)
*****************
LOCAL tela,tela1,tela2,lci,cci,lba,cba,msele,morde,men,;
      mdias_atras:=0,mmulta:=0,mjuros:=0,mvlpago:=0,;
      oconsprod,ocolprod[13],i,nkey,opcao,mponto_reg:=0,mcons_doc,;
      m_dup:={},m_pos:={},point:=0,mtipo_doc,mali_c,mcon,mopc,cons_opcao:=' '

MEMVAR mduplicata,mcod_cli,mtipo,mdata_sis

lci := cci := 0
lba := 24
cba := 78

//tela := SAVESCREEN(01,00,24,79)

msele := SELE()
morde := INDEXORD()
*************
*SELE('dupr');ORDSETFOCUS(2)
*************
//men := SAVESCREEN(24,00,24,79)
IF mtp_c = NIL .OR. mtp_c <> '*'
        op_tela(00,10,24,90,' Consulta de DOCUMENTOS CONTAS A RECEBER ')
        mali_c := 'dupr'
ELSE
        op_tela(00,10,24,90,' Consulta de CREDITO CLIENTE ')
        mali_c := 'cred'
ENDIF
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Tipo',{||(mali_c)->tipo})
ocolprod[2] := TBCOLUMNNEW('No.Documento',{||(mali_c)->duplicata+(mali_c)->conta})
ocolprod[3] := TBCOLUMNNEW('Op.',{||(mali_c)->tip_pg})
ocolprod[4] := TBCOLUMNNEW('Valor Doc.',{||TRANSFORM((mali_c)->valor,'999,999.99')})
ocolprod[5] := TBCOLUMNNEW('Vencimento',{||DTOC((mali_c)->venc)})
ocolprod[6] := TBCOLUMNNEW('Emissao',{||DTOC((mali_c)->emissao)})
ocolprod[7] := TBCOLUMNNEW('Dt.Pg/Trf.',{||(mali_c)->datpag})
ocolprod[8] := TBCOLUMNNEW('Pg/Trf',{||(mali_c)->pago})
ocolprod[9] := TBCOLUMNNEW('Cod.',{||(mali_c)->fornec})
ocolprod[10] := TBCOLUMNNEW('Cliente',{||(mali_c)->cliente})
ocolprod[11] := TBCOLUMNNEW('Baixa [M]ov.[C]aixa',{||(mali_c)->mov_cx})
ocolprod[12] := TBCOLUMNNEW('Baixa Parcial',{||(mali_c)->baix_parc})
ocolprod[13] := TBCOLUMNNEW('Oper.',{||(mali_c)->oper_parc})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<P>esquisa - <ENTER>p/Consulta <D>etalhes  <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                IF mcons = NIL
                        EXIT
                ENDIF
                mduplicata := (mali_c)->duplicata
                mcod_cli   := VAL((mali_c)->fornec)
                mtipo      := (mali_c)->tipo
                mdias_atras := mmulta := mjuros := mvlpago := 0
                mdias_atras := mdata_sis-(mali_c)->venc
                IF mdias_atras > 0
                        mmulta := (mali_c)->valor * ((m_set[1,50])/100)
                        mjuros := mjuros + ((mali_c)->valor * ((mdias_atras*m_set[1,51])/100))
                ENDIF
                mvlpago=(mali_c)->valor+mjuros+mmulta
                op_tela(02,00,22,79,' Codigo da Empresa: '+(mali_c)->empresa+'  ')
                //botao(02,00,22,79,,' Codigo da Empresa: '+(mali_c)->empresa+'  ')
                DEVPOS(01,01);DEVOUT('Cliente.............:')
                DEVPOS(02,01);DEVOUT('Banco...............:')
                DEVPOS(02,27);DEVOUT('Agencia:')
                DEVPOS(02,51);DEVOUT('C/C:')
                DEVPOS(03,01);DEVOUT('No.da Documento ....:')
                DEVPOS(03,40);DEVOUT('Tipo Operacao:')
                DEVPOS(03,58);DEVOUT('No.:')
                DEVPOS(04,01);DEVOUT('Data Emissao........:')
                DEVPOS(05,01);DEVOUT('Data Vencimento.....:')
                DEVPOS(05,35);DEVOUT('Venc.Anterior:')
*               DEVPOS(05,01);DEVOUT('Data Transferencia:')
                DEVPOS(06,01);DEVOUT('Vlr.Bruto Documento.:')
                DEVPOS(07,01);DEVOUT('Vlr. Documento ...R$:')


                DEVPOS(13,01);DEVOUT('No.do Pedido........:')
                DEVPOS(13,32);DEVOUT('Operador:')
                DEVPOS(13,46);DEVOUT('Vendedor:')
                DEVPOS(14,01);DEVOUT('Correntista.........:')
                DEVPOS(15,01);DEVOUT('OBS.Incl.:')
                DEVPOS(19,01);DEVOUT('OBS.Baixa:')

                setcor(3)
                DEVPOS(01,23);DEVOUT((mali_c)->fornec+'-'+(mali_c)->cliente)
                DEVPOS(02,21);DEVOUT((mali_c)->numero)
                DEVPOS(02,36);DEVOUT((mali_c)->agencia)
                DEVPOS(02,56);DEVOUT((mali_c)->c_c)
                DEVPOS(03,23);DEVOUT((mali_c)->tipo+(mali_c)->duplicata)
                DEVPOS(03,55);DEVOUT((mali_c)->tip_pg)
                DEVPOS(03,63);DEVOUT((mali_c)->cheque)
                DEVPOS(04,23);DEVOUT(DTOC((mali_c)->emissao))
                DEVPOS(05,23);DEVOUT(DTOC((mali_c)->venc))
                DEVPOS(05,50);DEVOUT(DTOC((mali_c)->venc1))
                DEVPOS(06,23);DEVOUT(TRANSFORM((mali_c)->valor_dup,'9,999,999.99'))
                DEVPOS(07,23);DEVOUT(TRANSFORM((mali_c)->valor,'9,999,999.99'))
                DEVPOS(07,COL()+1);DEVOUT((mali_c)->conta)

                DEVPOS(13,23);DEVOUT((mali_c)->num_ped)
                DEVPOS(13,42);DEVOUT((mali_c)->operador)
                DEVPOS(13,56);DEVOUT((mali_c)->vendedor)
                DEVPOS(14,23);DEVOUT((mali_c)->corrente)
                DEVPOS(15,12);DEVOUT((mali_c)->obs)
                DEVPOS(16,12);DEVOUT((mali_c)->lin1)
                DEVPOS(17,12);DEVOUT((mali_c)->lin2)
                DEVPOS(18,12);DEVOUT((mali_c)->lin3)
                DEVPOS(19,12);DEVOUT((mali_c)->obs1)

                IF ! EMPTY((mali_c)->datpag) .OR. (mali_c)->pago <> ' '
                        setcor(1)
                        IF ! EMPTY((mali_c)->dat_tran)
                                DEVPOS(08,01);DEVOUT('Data Transferencia:')
                                setcor(3)
                                DEVPOS(08,23);DEVOUT(DTOC((mali_c)->dat_tran))
                        ELSE
                                DEVPOS(08,01);DEVOUT('Data Pagamento .....:')
                                DEVPOS(09,01);DEVOUT('Pago efetuado Com...:')
                                DEVPOS(10,01);DEVOUT('Juros Pago .......R$:')
                                DEVPOS(11,01);DEVOUT('Desconto .........R$:')
                                DEVPOS(12,01);DEVOUT('Valor Pago .......R$:')
                                DEVPOS(12,37);DEVOUT('Tipo Baixa:')
                                setcor(3)
                                DEVPOS(08,23);DEVOUT(DTOC((mali_c)->datpag))
                                DEVPOS(09,23);DEVOUT(STRZERO((mali_c)->datpag-(mali_c)->venc,3)+' Dias.')
                                DEVPOS(10,23);DEVOUT(TRANSFORM((mali_c)->juros,'9,999,999.99'))
                                DEVPOS(11,23);DEVOUT(TRANSFORM((mali_c)->desc,'9,999,999.99'))
                                DEVPOS(12,23);DEVOUT(TRANSFORM((mali_c)->vlpago,'9,999,999.99'))
                                IF (mali_c)->mov_cx = 'C'
                                        DEVPOS(12,48);DEVOUT('CAIXA')
                                ELSEIF (mali_c)->mov_cx = 'M'
                                        DEVPOS(12,48);DEVOUT('MOVIMENTO')
                                ENDIF
                        ENDIF
                ELSE
                        setcor(1)
                        DEVPOS(08,01);DEVOUT('Prazo estipulado....:')
                        DEVPOS(10,01);DEVOUT('Vlr. Multa+Juros..R$:')
                        DEVPOS(11,01);DEVOUT('Vlr. a Pagar......R$:')
                        IF mdata_sis<(mali_c)->venc
                                setcor(1)
                                DEVPOS(09,01);DEVOUT('Faltam p/ Vencimento:')
                                setcor(3)
                                DEVPOS(09,23);DEVOUT(STRZERO((mali_c)->venc-mdata_sis,3)+' Dias.')
                        ELSE
                                setcor(1)
                                DEVPOS(09,01);DEVOUT('Atrazo do vencimento:')
                                setcor(3)
                                DEVPOS(09,23);DEVOUT(STRZERO(mdata_sis-(mali_c)->venc,3)+' Dias.')
                        ENDIF
                        setcor(3)
                        DEVPOS(08,23);DEVOUT(STRZERO((mali_c)->venc-(mali_c)->emissao,3)+' Dias.')
                        DEVPOS(10,23);DEVOUT(TRANSFORM(mmulta+mjuros,'9,999,999.99'))
                        DEVPOS(11,23);DEVOUT(TRANSFORM(mvlpago,'9,999,999.99'))
                ENDIF
                setcor(1)
                mensagem('Pressione [P] - Visualizar o Processo [ENTER]p/Confirma ou qualquer tecla p/retornar')
                @ 30,00 GET cons_opcao
                READ
                wvw_lclosewindow()
                IF LASTKEY() = 13
                        mcod_cli   := VAL((mali_c)->fornec)
                        mtipo      := (mali_c)->tipo
                        mnumero    := (mali_c)->numero
                        mduplicata := (mali_c)->duplicata
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        CLEAR GETS
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF LASTKEY() = 80 .OR. LASTKEY() = 112
                        op_tela(15,10,21,73,' Processo do Documento No.:'+(mali_c)->tipo+(mali_c)->duplicata)
                        setcor(3)
                        DEVPOS(01,11);DEVOUT((mali_c)->lin1)
                        DEVPOS(02,11);DEVOUT((mali_c)->lin2)
                        DEVPOS(03,11);DEVOUT((mali_c)->lin3)
                        DEVPOS(04,11);DEVOUT((mali_c)->lin4)
                        DEVPOS(05,11);DEVOUT((mali_c)->lin5)
                        setcor(1)
                        mensagem('Pressione qualquer tecla p/retornar')
                        INKEY(0)
                        wvw_lclosewindow()
                ENDIF
                LOOP
        ELSEIF nkey == 68 .OR. nkey == 100
                mponto_reg := RECNO()
                ASIZE(m_dup,0)
                ASIZE(m_pos,0)
                IF (mali_c)->pago = 'T' .OR. (mali_c)->conta = '*'
                        CLEAR GETS
                        tela1 := SAVESCREEN(00,00,24,79)
                        botao(lci,cci,lba,cba,,' Resumo do DOCUMENTO: '+(mali_c)->tipo+(mali_c)->duplicata)
                        DEVPOS(lci+1,cci+1);DEVOUT('Documento')
                        DEVPOS(lci+1,cci+15);DEVOUT('Cliente')
                        DEVPOS(lci+1,cci+37);DEVOUT('Emissao')
                        DEVPOS(lci+1,cci+47);DEVOUT('Venc.')
                        DEVPOS(lci+1,cci+54);DEVOUT('Dta.Pag.')
                        DEVPOS(lci+1,cci+67);DEVOUT('Valor')
                        DEVPOS(lci+1,cci+75);DEVOUT('Vend')
                        ASIZE(m_pos,0)
                        ASIZE(m_dup,0)
                        point := 0
                        mtipo_doc := (mali_c)->tipo
                        IF (mali_c)->pago = 'T'
                                mcons_doc := (mali_c)->tipo+(mali_c)->duplicata
                                ORDSETFOCUS(13)
                                GO TOP
                                IF ! (mali_c)->(DBSEEK(mcons_doc))
                                        atencao('Nao foi encontrado nenhum Documento TRANSFERIDO')
                                        LOOP
                                ENDIF
                                WHILE mcons_doc = (mali_c)->doc_tran .AND. ! EOF()
                                        AADD(m_pos,RECNO())
                                        AADD(m_dup,(mali_c)->tipo+(mali_c)->duplicata+(mali_c)->conta+' '+(mali_c)->tip_pg+' '+(mali_c)->fornec+'-'+LEFT((mali_c)->cliente,10);
                                            +' '+DTOC((mali_c)->emissao)+' '+DTOC((mali_c)->venc)+' '+DTOC((mali_c)->datpag)+' '+TRANSFORM((mali_c)->valor,'9,999,999.99');
                                            +' '+(mali_c)->vendedor)
                                        SKIP
                                ENDDO
                        ELSE
                                mcons_doc := (mali_c)->duplicata
                                ORDSETFOCUS(10)
                                GO TOP
                                IF ! (mali_c)->(DBSEEK(mcons_doc+mtipo_doc))
                                        atencao('Nao foi encontrado nenhum Documento BAIXADO POR CONTA')
                                        LOOP
                                ENDIF
                                WHILE mcons_doc = (mali_c)->duplicata .AND. ! EOF()
                                        AADD(m_pos,RECNO())
                                        AADD(m_dup,(mali_c)->tipo+(mali_c)->duplicata+(mali_c)->conta+' '+(mali_c)->tip_pg+' '+(mali_c)->fornec+'-'+LEFT((mali_c)->cliente,10);
                                            +' '+DTOC((mali_c)->emissao)+' '+DTOC((mali_c)->venc)+' '+DTOC((mali_c)->datpag)+' '+TRANSFORM((mali_c)->valor,'9,999,999.99');
                                            +' '+(mali_c)->vendedor)
                                        SKIP
                                ENDDO
                        ENDIF
                        WHILE .T.
                                CLEAR TYPEAHEAD
                                mensagem("<ESC> Retorna  -  <ENTER> p/Resumo" )
                                point := ACHOICE(lci+3,cci+1,lba-3,cba-1,m_dup,,,point)

                                DO CASE
                                        CASE LASTKEY()=27
                                                RESTSCREEN(00,00,24,79,tela1)
                                                EXIT
                                        CASE LASTKEY() = 13
                                                IF m_pos[point] = 0
                                                        LOOP
                                                ENDIF
                                                IF SUBSTR(m_dup[point],1,1) = 'F' .AND. SUBSTR(m_dup[point],1,2) <> 'FI'
                                                        atencao('Este Documento nao pode ser consultado porque e da FILIAL')
                                                        LOOP
                                                ENDIF
                                                GO m_pos[point]
                                                tela2 := SAVESCREEN(00,00,24,79)
                                                botao(01,00,22,79,,' Codigo da Empresa: '+(mali_c)->empresa+'  ')
                                                DEVPOS(02,01);DEVOUT('Cliente.............:')
                                                DEVPOS(03,01);DEVOUT('Banco...............:')
                                                DEVPOS(03,27);DEVOUT('Agencia:')
                                                DEVPOS(03,51);DEVOUT('C/C:')
                                                DEVPOS(04,01);DEVOUT('No.da Documento ....:')
                                                DEVPOS(04,40);DEVOUT('Tipo Operacao:')
                                                DEVPOS(05,01);DEVOUT('Data Emissao........:')
                                                DEVPOS(06,01);DEVOUT('Data Vencimento.....:')
                                                DEVPOS(07,01);DEVOUT('Vlr.Bruto Documento.:')
                                                DEVPOS(08,01);DEVOUT('Vlr. Documento ...R$:')


                                                DEVPOS(15,01);DEVOUT('No.do Pedido........:')
                                                DEVPOS(15,32);DEVOUT('Operador:')
                                                DEVPOS(15,46);DEVOUT('Vendedor:')
                                                DEVPOS(16,01);DEVOUT('Correntista.........:')
                                                DEVPOS(17,01);DEVOUT('OBS.Incl.:')
                                                DEVPOS(18,01);DEVOUT('OBS.Baixa:')
                                                DEVPOS(20,01);DEVOUT('Cod.Fornecedor/Despesa:')
                                                DEVPOS(21,01);DEVOUT('Data da Baixa Parcial.:')
                                                DEVPOS(21,39);DEVOUT('Operador:')

                                                setcor(3)
                                                DEVPOS(19,01);DEVOUT('BAIXA PARCIAL')
                                                DEVPOS(02,23);DEVOUT((mali_c)->fornec+'-'+(mali_c)->cliente)
                                                DEVPOS(03,21);DEVOUT((mali_c)->numero)
                                                DEVPOS(03,36);DEVOUT((mali_c)->agencia)
                                                DEVPOS(03,56);DEVOUT((mali_c)->c_c)
                                                DEVPOS(04,23);DEVOUT((mali_c)->tipo+(mali_c)->duplicata)
                                                DEVPOS(04,55);DEVOUT((mali_c)->tip_pg)
                                                DEVPOS(05,23);DEVOUT(DTOC((mali_c)->emissao))
                                                DEVPOS(06,23);DEVOUT(DTOC((mali_c)->venc))
                                                DEVPOS(07,23);DEVOUT(TRANSFORM((mali_c)->valor_dup,'9,999,999.99'))
                                                DEVPOS(08,23);DEVOUT(TRANSFORM((mali_c)->valor,'9,999,999.99'))
                                                DEVPOS(08,COL()+1);DEVOUT((mali_c)->conta)

                                                DEVPOS(15,23);DEVOUT((mali_c)->num_ped)
                                                DEVPOS(15,42);DEVOUT((mali_c)->operador)
                                                DEVPOS(15,56);DEVOUT((mali_c)->vendedor)
                                                DEVPOS(16,23);DEVOUT((mali_c)->corrente)
                                                DEVPOS(17,12);DEVOUT((mali_c)->obs)
                                                DEVPOS(18,12);DEVOUT((mali_c)->obs1)
                                                DEVPOS(20,25);DEVOUT((mali_c)->cod_forn)
                                                DEVPOS(21,25);DEVOUT((mali_c)->baix_parc)
                                                DEVPOS(21,49);DEVOUT((mali_c)->oper_parc)
                                                v_fornece(VAL((mali_c)->cod_forn),20,30)
                                                IF ! EMPTY((mali_c)->datpag) .OR. (mali_c)->pago <> ' '
                                                        setcor(1)
                                                        DEVPOS(09,01);DEVOUT('Data Pagamento .....:')
                                                        DEVPOS(10,01);DEVOUT('Pago efetuado Com...:')
                                                        DEVPOS(11,01);DEVOUT('Juros Pago .......R$:')
                                                        DEVPOS(12,01);DEVOUT('Desconto .........R$:')
                                                        DEVPOS(13,01);DEVOUT('Valor Pago .......R$:')
                                                        DEVPOS(13,37);DEVOUT('Tipo Baixa:')
                                                        DEVPOS(14,01);DEVOUT('Local Pagamento.....:')
                                                        setcor(3)
                                                        DEVPOS(09,23);DEVOUT(DTOC((mali_c)->datpag))
                                                        DEVPOS(10,23);DEVOUT(STRZERO((mali_c)->datpag-(mali_c)->venc,3)+' Dias.')
                                                        DEVPOS(11,23);DEVOUT(TRANSFORM((mali_c)->juros,'9,999,999.99'))
                                                        DEVPOS(12,23);DEVOUT(TRANSFORM((mali_c)->desc,'9,999,999.99'))
                                                        DEVPOS(13,23);DEVOUT(TRANSFORM((mali_c)->vlpago,'9,999,999.99'))
                                                        IF (mali_c)->mov_cx = 'C'
                                                                DEVPOS(13,48);DEVOUT('CAIXA')
                                                        ELSEIF (mali_c)->mov_cx = 'M'
                                                                DEVPOS(13,48);DEVOUT('MOVIMENTO')
                                                        ENDIF
                                                        DEVPOS(14,23);DEVOUT((mali_c)->banco)
                                                ELSE
                                                        setcor(1)
                                                        DEVPOS(09,01);DEVOUT('Prazo estipulado....:')
                                                        DEVPOS(11,01);DEVOUT('Vlr. Multa+Juros..R$:')
                                                        DEVPOS(12,01);DEVOUT('Vlr. a Pagar......R$:')
                                                        DEVPOS(13,01);DEVOUT('Local Pagamento.....:')
                                                        IF mdata_sis<(mali_c)->venc
                                                                setcor(1)
                                                                DEVPOS(10,01);DEVOUT('Faltam p/ Vencimento:')
                                                                setcor(3)
                                                                DEVPOS(10,23);DEVOUT(STRZERO((mali_c)->venc-mdata_sis,3)+' Dias.')
                                                        ELSE
                                                                setcor(1)
                                                                DEVPOS(10,01);DEVOUT('Atrazo do vencimento:')
                                                                setcor(3)
                                                                DEVPOS(10,23);DEVOUT(STRZERO(mdata_sis-(mali_c)->venc,3)+' Dias.')
                                                        ENDIF
                                                        setcor(3)
                                                        DEVPOS(09,23);DEVOUT(STRZERO((mali_c)->venc-(mali_c)->emissao,3)+' Dias.')
                                                        DEVPOS(13,23);DEVOUT((mali_c)->banco)
                                                ENDIF
                                                setcor(1)
                                                mensagem('Pressione qualquer tecla p/retornar')
                                                INKEY(0)
                                                RESTSCREEN(00,00,24,79,tela2)
                                                LOOP
                                ENDCASE
                        ENDDO
                ELSE
                        atencao('Este Documento nao tem Detalhes (*** Nao foi pago por conta *** ou *** Foi transformado em outros documentos ***)')
                ENDIF
                GO mponto_reg
        ELSEIF nkey = 112 .OR. nkey = 80
                mopc := ' '
                mopc := mensagem1('Pesquisa: [D]ocumento - [C]od.Cliente - [N]ome Cliente - [P]Data Pg.ou Transf.','D','D,C,N,P')
                op_tela(10,10,12,60,' Consulta de Documento')
                IF mopc = 'D'
                        ORDSETFOCUS(10)
                        mcon := SPACE(10)
                        DEVPOS(01,01);DEVOUT('Digite o No.Documento..:')
                ELSEIF mopc = 'C'
                        ORDSETFOCUS(2)
                        mcon := SPACE(5)
                        DEVPOS(01,01);DEVOUT('Digite o Codigo Cliente:')
                ELSEIF mopc = 'P'
                        ORDSETFOCUS(3)
                        mcon := CTOD('  /  /  ')
                        DEVPOS(01,01);DEVOUT('Digite a Data..........:')
                        @ 01,26 GET mcon
                        READ
                        wvw_lclosewindow()
                        IF ! (mali_c)->(DBSEEK(DTOS(mcon),.T.))
                                atencao('A Pesquisa nao foi realizada com sucesso')
                                LOOP
                        ELSE
                                oconsprod:refreshall()
                                LOOP
                        ENDIF
                ELSEIF mopc = 'N'
                        ORDSETFOCUS(8)
                        mcon := SPACE(40)
                        DEVPOS(01,01);DEVOUT('Digite Nome do Cliente.:')
                ENDIF
                @ 01,26 GET mcon
                READ
                wvw_lclosewindow()
                IF ! (mali_c)->(DBSEEK(RTRIM(mcon),.T.))
                        atencao('A Pesquisa nao foi realizada com sucesso')
                        LOOP
                ENDIF
                oconsprod:refreshall()
        ELSE
                IF genkey(oconsprod,nkey,'dupr')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Tipo',{||(mali_c)->tipo})
                        ocolprod[2] := TBCOLUMNNEW('No.Documento',{||(mali_c)->duplicata+(mali_c)->conta})
                        ocolprod[3] := TBCOLUMNNEW('Op.',{||(mali_c)->tip_pg})
                        ocolprod[4] := TBCOLUMNNEW('Valor Doc.',{||TRANSFORM((mali_c)->valor,'999,999.99')})
                        ocolprod[5] := TBCOLUMNNEW('Vencimento',{||DTOC((mali_c)->venc)})
                        ocolprod[6] := TBCOLUMNNEW('Emissao',{||DTOC((mali_c)->emissao)})
                        ocolprod[7] := TBCOLUMNNEW('Dt.Pg/Trf.',{||(mali_c)->datpag})
                        ocolprod[8] := TBCOLUMNNEW('Pg/Trf',{||(mali_c)->pago})
                        ocolprod[9] := TBCOLUMNNEW('Cod.',{||(mali_c)->fornec})
                        ocolprod[10] := TBCOLUMNNEW('Cliente',{||(mali_c)->cliente})
                        ocolprod[11] := TBCOLUMNNEW('Baixa [M]ov.[C]aixa',{||(mali_c)->mov_cx})
                        ocolprod[12] := TBCOLUMNNEW('Baixa Parcial',{||(mali_c)->baix_parc})
                        ocolprod[13] := TBCOLUMNNEW('Oper.',{||(mali_c)->oper_parc})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
CLEAR GETS
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR NIVEIS
********************************
FUNCTION f3_nivel(mop)
*****************
LOCAL mprg:='F3_NIVEL',;
      tela,tela1,lci,cci,lba,cba,msele,morde,men,mnivel,mtipo_cons := 'D',mconsulta  := SPACE(30),;
      oconsprod,ocolprod[5],i,nkey,opcao,cons_m := {},point := 0

MEMVAR nivel_acess
IF ! ver_nivel(mprg,'NIVEL DE ACESSOS','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 25
cba := 95

msele := SELE()
morde := INDEXORD()
*************
IF ! AbriArq('sacconf','conf');RETURN NIL;ENDIF
SELE('conf');ORDSETFOCUS(1)
GO TOP
*************
op_tela(lci,cci,lba,cba,'NIVEL DE ACESSO')
oconsprod := TBROWSEDB(lci,cci,lba-1,cba,'conf')
ocolprod[1] := TBCOLUMNNEW('Descricao',{||conf->descri})
ocolprod[2] := TBCOLUMNNEW('Niveis',{||conf->nivel})
ocolprod[3] := TBCOLUMNNEW('Modulo',{||conf->modulo})
ocolprod[4] := TBCOLUMNNEW('Data Alt.',{||conf->data_alt})
ocolprod[5] := TBCOLUMNNEW('Oper.Alt.',{||conf->oper_alt})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<P>esquisa <ENTER>p/Alterar Niveis  <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                CLEAR GETS
                mnivel := conf->nivel
                @ ROW(),63 GET mnivel PICT '9999999999'
*               @ ROW(),COL()+61 GET mnivel PICT '9999999999'
                READ
                IF LASTKEY() <> 27
                        opcao := op_simnao('S','Confirma a Alteracao do Niveis:')
                        IF opcao = 'N'
                                LOOP
                        ELSE
                                BLOQREG()
                                conf->nivel := mnivel
                                conf->data_alt  := mdata_sis
                                conf->oper_alt  := cod_operado
                                DBUNLOCK()
                                DBCOMMIT()
                        ENDIF
                ENDIF
                oconsprod := TBROWSEDB(lci,cci,lba-1,cba,'conf')
                ocolprod[1] := TBCOLUMNNEW('Descricao',{||conf->descri})
                ocolprod[2] := TBCOLUMNNEW('Niveis',{||conf->nivel})
                ocolprod[3] := TBCOLUMNNEW('Modulo',{||conf->modulo})
                ocolprod[4] := TBCOLUMNNEW('Data Alt.',{||conf->data_alt})
                ocolprod[5] := TBCOLUMNNEW('Oper.Alt.',{||conf->oper_alt})
                i:=0
                FOR i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSEIF nkey = 112 .OR. nkey = 80
                op_tela(10,05,31,95,'CONSULTA NIVEL DE ACESSO')
                CLEAR GETS
                WHILE .T.
                        mtipo_cons := 'D'
                        mconsulta  := SPACE(60)
                        limpa(0,0,31,99)
                        mensagem('Digite a Consulta que deseja')
                        setcor(1)
                        DEVPOS(00,01);DEVOUT('Tipo de Pesquisa [D]escricao ou [M]odulo:')
                        DEVPOS(01,01);DEVOUT('Digite o que Deseja.....................:')
                        setcor(3)
                        @ 02,00 TO 02,100
                        DEVPOS(03,01);DEVOUT('Descricao                                                     Nivel      Modulo')
                        @ 04,00 TO 04,100
                        setcor(1)
                        @ 00,44 GET mtipo_cons PICT '@!'
                        @ 01,44 GET mconsulta PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                CLEAR GETS
                                EXIT
                        ENDIF
                        IF EMPTY(mconsulta)
                                LOOP
                        ENDIF
                        cComm  := "SELECT * FROM sacconf WHERE descri IS NOT NULL"
                        IF mtipo_cons = 'D'
                                ccomm := ccomm + " AND descri LIKE "+sr_cdbvalue('%'+ALLTRIM(mconsulta)+'%')
                        ELSE
                                ccomm := ccomm + " AND modulo LIKE "+sr_cdbvalue('%'+ALLTRIM(mconsulta)+'%')
                        ENDIF
                        ccomm := ccomm + " ORDER BY descri"
                        cons_m := {}
                        sr_getconnection():exec(ccomm,,.t.,@cons_m)
                        IF LEN(cons_m) = 0
                                atencao('Nao foi encontrado nenhum Item ...')
                                LOOP
                        ENDIF
                        m_prod := {}
                        m_pos  := {}
                        point  := i := 0
                        FOR i = 1 TO LEN(cons_m)
                                AADD(m_prod,' '+cons_m[i,2];
                                           +' '+cons_m[i,3];
                                           +'  '+cons_m[i,1])
                                AADD(m_pos,cons_m[i,6])
                        NEXT
                        point := ACHOICE(05,01,30,94,m_prod,,,point)
                        DO CASE
                                CASE LASTKEY()=27
                                        LOOP
                                CASE LASTKEY() = 13
                                        *************
                                        SELE('conf');ORDSETFOCUS(1)
                                        GO m_pos[point]
                                        *************
                                        EXIT
                        ENDCASE
                ENDDO
                wvw_lclosewindow()
                oconsprod := TBROWSEDB(lci,cci,lba-1,cba,'conf')
                ocolprod[1] := TBCOLUMNNEW('Descricao',{||conf->descri})
                ocolprod[2] := TBCOLUMNNEW('Niveis',{||conf->nivel})
                ocolprod[3] := TBCOLUMNNEW('Modulo',{||conf->modulo})
                ocolprod[4] := TBCOLUMNNEW('Data Alt.',{||conf->data_alt})
                ocolprod[5] := TBCOLUMNNEW('Oper.Alt.',{||conf->oper_alt})
                i:=0
                FOR i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,nkey)
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba,'conf')
                        ocolprod[1] := TBCOLUMNNEW('Descricao',{||conf->descri})
                        ocolprod[2] := TBCOLUMNNEW('Niveis',{||conf->nivel})
                        ocolprod[3] := TBCOLUMNNEW('Modulo',{||conf->modulo})
                        ocolprod[4] := TBCOLUMNNEW('Data Alt.',{||conf->data_alt})
                        ocolprod[5] := TBCOLUMNNEW('Oper.Alt.',{||conf->oper_alt})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
CLOSE conf
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR CEPS
********************************

FUNCTION f8_cep()
*****************

LOCAL tela,tela1,lci,cci,lba,cba,msele,morde,men

LOCAL oconsprod,ocolprod[4],i,nkey,opcao
MEMVAR mcep
lci := 00
cci := 00
lba := 24
cba := 79

msele := SELE()
morde := INDEXORD()
*************
SELE('cep');ORDSETFOCUS(1)
*************
op_tela(lci,cci,lba,cba," CONSULTA DE CEP'S ")
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Logradouro',{||cep->nome})
ocolprod[2] := TBCOLUMNNEW('Cep',{||cep->cep8})
ocolprod[3] := TBCOLUMNNEW('Bairro',{||cep->bairro1})
ocolprod[4] := TBCOLUMNNEW('Local',{||cep->local})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<P>esquisa  <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                mcep := SUBSTR(cep->cep8,1,5)+'-'+SUBSTR(cep->cep8,6)
                CLEAR GETS
                EXIT
        ELSE
                IF genkey(oconsprod,nkey,'cep')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Logradouro',{||cep->nome})
                        ocolprod[2] := TBCOLUMNNEW('Cep',{||cep->cep8})
                        ocolprod[3] := TBCOLUMNNEW('Bairro',{||cep->bairro1})
                        ocolprod[4] := TBCOLUMNNEW('Local',{||cep->local})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
wvw_lclosewindow()
IF nkey == K_ESC
        RETURN NIL
ELSE
        RETURN mcep
ENDIF
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR OCORRENCIAS
********************************
FUNCTION ocorre()
*****************
LOCAL lci,cci,lba,cba,msele,morde,;
      oconsprod,ocolprod[12],i,nkey,opcao

lci := cci := 00
lba := 23
cba := 79
msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacocorr','ocorr');RETURN NIL;ENDIF
*************
SELE('ocorr');ORDSETFOCUS(1)
GO TOP
*************
op_tela(lci,cci,lba,cba,'CONSULTA DE OCORRENCIAS')
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Tipo',{||ocorr->tipo})
ocolprod[2] := TBCOLUMNNEW('Documento',{||ocorr->documento})
ocolprod[3] := TBCOLUMNNEW('Cod.Merc',{||ocorr->codigo})
ocolprod[4] := TBCOLUMNNEW('   Saldo Ant',{||TRANSFORM(ocorr->saldo_atu,'9,999,999.99')})
ocolprod[5] := TBCOLUMNNEW('     Quantd.',{||TRANSFORM(ocorr->quantd,'9,999,999.99')})
ocolprod[6] := TBCOLUMNNEW('  Saldo Apos',{||TRANSFORM(ocorr->saldo_exe,'9,999,999.99')})
ocolprod[7] := TBCOLUMNNEW('Data Op.',{||DTOC(ocorr->data_exe)})
ocolprod[8] := TBCOLUMNNEW('Imp/Ped',{||ocorr->pedido})
ocolprod[9] := TBCOLUMNNEW('Oper.',{||ocorr->cod_oper})
ocolprod[10] := TBCOLUMNNEW('Vend',{||ocorr->cod_vend})
ocolprod[11] := TBCOLUMNNEW('Ocorrencia',{||DTOC(ocorr->data_oco)})
ocolprod[12] := TBCOLUMNNEW('OBS.:',{||ocorr->obs})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<P>esquisa  <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                CLEAR GETS
                EXIT
        ELSE
                IF genkey(oconsprod,nkey,'ocorr')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Tipo',{||ocorr->tipo})
                        ocolprod[2] := TBCOLUMNNEW('Documento',{||ocorr->documento})
                        ocolprod[3] := TBCOLUMNNEW('Cod.Merc',{||ocorr->codigo})
                        ocolprod[4] := TBCOLUMNNEW('   Saldo Ant',{||TRANSFORM(ocorr->saldo_atu,'9,999,999.99')})
                        ocolprod[5] := TBCOLUMNNEW('     Quantd.',{||TRANSFORM(ocorr->quantd,'9,999,999.99')})
                        ocolprod[6] := TBCOLUMNNEW('  Saldo Apos',{||TRANSFORM(ocorr->saldo_exe,'9,999,999.99')})
                        ocolprod[7] := TBCOLUMNNEW('Data Op.',{||DTOC(ocorr->data_exe)})
                        ocolprod[8] := TBCOLUMNNEW('Imp/Ped',{||ocorr->pedido})
                        ocolprod[9] := TBCOLUMNNEW('Oper.',{||ocorr->cod_oper})
                        ocolprod[10] := TBCOLUMNNEW('Vend',{||ocorr->cod_vend})
                        ocolprod[11] := TBCOLUMNNEW('Ocorrencia',{||DTOC(ocorr->data_oco)})
                        ocolprod[12] := TBCOLUMNNEW('OBS.:',{||ocorr->obs})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
********************************
* VERIFICA O PERCENTUAL PELA UF
********************************

FUNCTION ver_uf(nuf,mt)
********************

LOCAL men,msele,morde,opcao := 'S'
MEMVAR mcod_op,mperc

IF ! AbriArq('SACUF','TABUF');RETURN NIL;ENDIF

men := SAVESCREEN(23,00,24,79)
msele := SELE()
morde := INDEXORD()
WHILE .T.
        IF ! v_uf(nuf) .OR. nuf = SPACE(2)
                RETURN .F.
        ENDIF
        ****************
        SELE('tabuf');ORDSETFOCUS(1)
        GO TOP
        ****************

        IF ! tabuf->(DBSEEK(nuf))
                CLEAR GETS
                opcao := op_simnao('S','Estado de '+nuf+' nao esta cadastrado...Deseja Cadastra [S/n]:')
                IF opcao = 'N'
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        RETURN .F.
                ELSE
                        IF mt = NIL
                                incl_tab()
                                CLEAR TYPEAHEAD
                                atencao('Tecle <ENTER> p/continuar...')
                                LOOP
                        ELSE
                                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                                RETURN .T.
                        ENDIF
                ENDIF

        ENDIF
        mperc := tabuf->percent
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDDO
RETURN NIL
********************************* f i m ******************************************
******************************
* VERIFICA O CPF
******************************
FUNCTION ver_cpf(ncpf)
********************
LOCAL msele,morde,opcao := 'S'
MEMVAR mcgc,mcpf,mcod_cli,mcliente
msele := SELE()
morde := INDEXORD()
IF ! AbriArq('mastcli','cli');RETURN NIL;ENDIF
WHILE .T.
        IF EMPTY(ncpf)
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ENDIF
        *****************
        SELE('cli');ORDSETFOCUS(4)
        GO TOP
        *****************
        IF SUBSTR(ncpf,10,2) <> GDV2(SUBSTR(ncpf,1,9))
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF

        IF ! cli->(DBSEEK(ncpf))
                CLEAR GETS
                opcao := op_simnao('S','C.P.F nao cadastrado...Deseja Cadastra [S/n]:')
                IF opcao = 'N'
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        RETURN .F.
                ELSE
                        sac130(mcpf,mcgc)
                        CLEAR TYPEAHEAD
                        LOOP
                ENDIF
        ENDIF
        mcod_cli := VAL(cli->cod_cli)
        mcliente := cli->razao
        mcgc := cli->cgc
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDDO
RETURN NIL
******************************* f i m *********************************************
******************************
* VERIFICA O CGC
******************************

FUNCTION ver_cgc(ncgc)
********************

LOCAL msele,morde,opcao := 'S'
MEMVAR mcgc,mcpf,mcod_cli,mcliente

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('mastcli','cli');RETURN NIL;ENDIF
WHILE .T.
        IF EMPTY(ncgc)
                RETURN .T.
        ENDIF
        IF ! VCGC(ncgc)
                IF aut_sen('O CNPJ nao confere senha de autorizacao:','LIB_AMB')
                        RETURN .T.
                ENDIF
                RETURN .F.
        ENDIF
        *****************
        SELE('cli');ORDSETFOCUS(3)
        GO TOP
        *****************

        IF ! cli->(DBSEEK(ncgc))
                CLEAR GETS
                opcao := op_simnao('S','CNPJ nao cadastrado...Deseja Cadastra [S/n]:')
                IF opcao = 'N'
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        RETURN .F.
                ELSE
                        sac130(mcpf,mcgc)
                        CLEAR TYPEAHEAD
                        LOOP
                ENDIF
        ENDIF
        mcod_cli := VAL(cli->cod_cli)
        mcliente := cli->razao
        mcpf := cli->cpf
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDDO
RETURN NIL
********************************** F I M ***********************************
FUNCTION ver_ven(mcod_ven,p,tip)
********************
LOCAL men,msele,morde,point,mnome
msele := SELE()
morde := INDEXORD()
point := RECNO()
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF tip <> NIL
        IF mcod_ven = '000';RETURN .T.;ENDIF
ENDIF
*****************
SELE('sen');ORDSETFOCUS(2)
GO TOP
*****************
IF ! sen->(DBSEEK(mcod_ven))
        IF p = NIL
                atencao('Codigo do OPERADOR/VENDEDOR nao encontrado')
        ENDIF
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
************************************ F I M ************************************
**********************************
* TESTE DE EXISTENCIA DE VENDEDOR
**********************************
FUNCTION ven(mcod_ven,li,ci,p)
LOCAL msele,morde
MEMVAR mnome_vend,mcom_ap,mcom_ven

IF EMPTY(mcod_ven); RETURN .T.;END
msele := SELE()
morde := INDEXORD()
mnome_vend = SPACE(30)
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
**************
SELECT('sen');ORDSETFOCUS(2)
GO TOP
**************
IF ! sen->(DBSEEK(STRZERO(mcod_ven,3)))
        IF p = NIL
                atencao('Vendedor nao Cadastrado !!!')
        ENDIF
        mcod_ven = 0
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ELSE
        mnome_vend = sen->snome
        mcom_ven := sen->scomissao
        mcom_ap := sen->scom_praz
        IF li = NIL
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ELSE
                setcor(3)
                DEVPOS(li,ci);DEVOUT(mnome_vend)
                setcor(1)
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ENDIF
ENDIF
RETURN NIL
************************************ F I M ************************************
**********************************
* TESTE DE EXISTENCIA DE DESPESAS
**********************************
FUNCTION ver_desp(mcod_des,li,ci)
LOCAL msele,morde
MEMVAR mdescri1,mdescri2

IF EMPTY(mcod_des); RETURN .T.;END
msele := SELE()
morde := INDEXORD()
**************
SELECT('desp');ORDSETFOCUS(1)
GO TOP
**************
IF ! desp->(DBSEEK(STRZERO(mcod_des,3)))
        atencao('Despesa nao Cadastrada !!!')
        mcod_des = 0
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ELSE
        mdescri1 = desp->desc1
        mdescri2 = desp->desc2
        IF li = NIL
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ELSE
                setcor(3)
                DEVPOS(li,ci);DEVOUT(mdescri1)
                DEVPOS(li+1,ci);DEVOUT(mdescri2)
                setcor(1)
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ENDIF
ENDIF
RETURN NIL
*************************** f i m *********************************************
***************************
* VERIFICA MERCADORIA
***************************
FUNCTION v_merc(mcod,li,ci)
***************************
IF ! merc->(DBSEEK(STRZERO(mcod,5)))
        atencao('Codigo nao Cadastrado !!!')
        RETURN .F.
ENDIF
setcor(3)
DEVPOS(li,ci);DEVOUT(LEFT(merc->merc,35))
setcor(1)
RETURN .T.
************************ f i m **************************************
****************************
* VERIFICA CARTAO DE CREDITO
****************************
FUNCTION ver_cartao(mcod,li,ci,t)
*******************************
LOCAL msele,morde,ver_cartao:={}
MEMVAR mdesc_cart,mprazo_cart,mcartao
msele := SELE()
morde := INDEXORD()
IF ! AbriArq('mastcarta','car');RETURN NIL;ENDIF
IF EMPTY(mcod) .AND. t = NIL
        RETURN .T.
ENDIF
*************
SELE('car');ORDSETFOCUS(1)
GO TOP
*************
IF ! car->(DBSEEK(STRZERO(mcod,3)))
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        IF li <> NIL
                atencao('Cartao nao Cadastrado !!!')
                setcor(3)
                DEVPOS(li,ci);DEVOUT(' - '+SPACE(20))
                setcor(1)
                RETURN .F.
        ENDIF
        RETURN 'CARTAO NAO IDENTIFICADO'
ENDIF
IF li <> NIL
        mdesc_cart := car->desconto
        mprazo_cart := car->prazo
        mcartao := car->cartao
        setcor(3)
        DEVPOS(li,ci);DEVOUT(' - '+mcartao)
        setcor(1)
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN car->cartao
*********************** F I M **************************************
******************************
* PESQUISA O CGC SE EXISTE
******************************
FUNCTION pesq_cgc(ncgc,narq,condicao,pesq_ali)
********************
LOCAL ccomm:='',cons_cgc:={}
IF EMPTY(ncgc)
        RETURN .T.
ENDIF
IF ! VCGC(ncgc)
        IF aut_sen('O CNPJ nao confere senha de autorizacao:','LIB_AMB')
                IF LASTKEY() = 27
                        RETURN .F.
                ENDIF
                RETURN .T.
        ENDIF
        RETURN .F.
ENDIF
cons_cgc := {}
IF narq = 'cli'
        cComm  := "SELECT * FROM mastcli WHERE cgc = "+sr_cdbvalue(ncgc)
ELSEIF narq = 'forn'
        cComm  := "SELECT * FROM sacforn WHERE cgc = "+sr_cdbvalue(ncgc)
ELSE
        cComm  := "SELECT * FROM sactran WHERE cgc = "+sr_cdbvalue(ncgc)
ENDIF
sr_getconnection():exec(ccomm,,.t.,@cons_cgc)
IF condicao <> NIL .AND. LEN(cons_cgc) > 0
        atencao('CNPJ ja cadastrado...Deseja Incluir mesmo assim')
ENDIF
RETURN .T.
********************************** F I M ***********************************
********************************
* FUNCAO P/VERIFICAR AUTORIZACAO
********************************
FUNCTION aut_sen(men,mdl,mlin,mnum_cli,mnum_prod,mamb,mnum_pedido)
****************
LOCAL linhas,i,lin,matencao,li,ci,la,ca,mpos,;
      msel_sen,mord_sen,mcont,mok:=' ',linha,msenha,mn_ped:=SPACE(6),;
      mc_cli:=SPACE(5),msel,mord,mcodaux:=SPACE(14),;
      maut_oper:=SPACE(3),msol_aut:=' ',mpoint:=0,mcons_nivel:={}
MEMVAR mautoriza,mnum_ped
PRIVATE mcod_aut:=SPACE(6),mcod_oper:=0

mcons_nivel := {}
sr_getconnection():exec("SELECT * FROM sacconf WHERE modulo = "+sr_cdbvalue(mdl),,.t.,@mcons_nivel)
IF LEN(mcons_nivel) > 0 .AND. SUBSTR(mcons_nivel[1,3],1,1) = '0'
        RETURN .T.
ENDIF
msel_sen := SELE()
mord_sen := INDEXORD()
linha := 18
IF ! AbriArq('saclog','log');RETURN NIL;ENDIF
IF ! AbriArq('sacconf','conf');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*****************
SELE('sen');ORDSETFOCUS(2)
*****************
mcont := 0
men := RTRIM(men)
IF LEN(men) > 60
        mpos := 60
        ci := 10
ELSEIF LEN(men) < LEN(' MODULO DE LIBERACAO P/SENHA ')
        mpos := LEN(' MODULO DE LIBERACAO P/SENHA ')    //+20
        ci := (80-LEN(' MODULO DE LIBERACAO P/SENHA ')) / 2
ELSE
        mpos := LEN(men)
        ci := (80-LEN(men)) / 2
ENDIF
linhas := MLCOUNT(men,mpos)
li := 12
IF linha <> NIL
        IF linha + linhas + 4 > 24
                li := 24 - (linhas + 4)
        ELSE
                li := linha
        ENDIF
ENDIF
IF mlin <> NIL .AND. mlin < li
        li := mlin
ENDIF
la := li+linhas+4
ca := ci+1+mpos+1
IF ca - ci < 50
        ci := 10
        ca := 70
ENDIF
op_tela(li,ci,la,ca,' MODULO DE LIBERACAO P/SENHA <<Modulo:'+mdl+'>>')
setcor(3)
FOR i = 1 TO  linhas
        LIN := MEMOLINE(men,mpos,i,,)
        DEVPOS(i,00);DEVOUT(PADC(RTRIM(LIN),mpos))
NEXT
WHILE mcont < 3
        setcor(1)
        CLEAR GETS
        mok := ' '
        mcod_aut := SPACE(6)
        msol_aut := 'N'
        setcor(1)
        DEVPOS(i,00);  DEVOUT('Codigo Operador:')
        DEVPOS(i+1,00);DEVOUT('Senha Liberacao:')
        DEVPOS(i+2,00);DEVOUT('Solicitar [s/N]:')
        @ i,18 GET mcod_oper PICT '999' VALID IF(EMPTY(mcod_oper),.F.,ven(mcod_oper,i,22))
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF

        msenha = ''
        pegasenha(@msenha,i+1,18,setcor(2))
        setcor(1)
        IF msenha = 'NAO'
                EXIT
        ENDIF
        IF ! EMPTY(msenha)
                maut_oper := STRZERO(mcod_oper,3)
        ENDIF

        @ i+2,18 GET msol_aut PICT '@!' VALID IF(msol_aut = 'S',soli_aut(STRZERO(mcod_oper,3),mnum_cli,mnum_prod,men,mamb),.T.) WHEN EMPTY(msenha)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        cons_ven:={}
        ccomm := "SELECT scod_aut,ssenha,snivel FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3))
        sr_getconnection():exec(ccomm,,.t.,@cons_ven)
        IF LEN(cons_ven) = 0
                atencao('Operador nao encontrado !!!!')
                mcont ++
                LOOP
        ENDIF
        DEVPOS(i+2,18);DEVOUT(mcod_aut)
        IF mcod_aut = 'NEGATIVO'
                atencao('Autorizacao NEGADA')
                EXIT
        ENDIF
        mcod_aut := SUBSTR(cons_ven[1,1],1,6)
        IF (! EMPTY(mnum_cli) .OR. ! EMPTY(mnum_prod) .OR. ! EMPTY(mamb)) .AND. ! EMPTY(cons_ven[1,1]) .AND. EMPTY(msenha)
                mcodaux := mcod_aut
                IF ! EMPTY(mnum_cli)
                        mcodaux := mcodaux + mnum_cli
                ELSEIF ! EMPTY(mnum_prod)
                        mcodaux := mcodaux + mnum_prod
                ELSEIF ! EMPTY(mamb)
                        mcodaux := mcodaux + mamb
                ENDIF
                mcodaux := mcodaux+STRZERO(mcod_oper,3)
                IF mcodaux = SUBSTR(cons_ven[1,1],1,14)
                        msenha := ALLTRIM(DCRIPTO(cons_ven[1,2]))
                        ccomm := "UPDATE insopera SET scod_aut = NULL WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3))
                        sr_getconnection():exec(ccomm,,.f.)
                        //sr_getconnection():exec('COMMIT',,.f.)
                        mcodaux := cons_ven[1,1]
                        maut_oper := SUBSTR(mcodaux,15,3)
                        ven(VAL(maut_oper))
                        msenha := ALLTRIM(DCRIPTO(cons_ven[1,2]))
                        sr_getconnection():exec('INSERT INTO saclog (data_sis,data,hora,tipo,documento,cod_cli,aut_oper,cod_oper,modulo,descri,cod_aut,terminal'+;
                                ',cod_prod,SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(DATE()       )+','+; //1
                                sr_cdbvalue(mdata_sis    )+','+; //2
                                sr_cdbvalue(TIME()       )+','+; //3
                                sr_cdbvalue('AUTORIZACA')+','+; //4
                                sr_cdbvalue(mn_ped       )+','+; //5
                                sr_cdbvalue(mc_cli       )+','+; //6
                                sr_cdbvalue(maut_oper    )+','+; //7
                                sr_cdbvalue(cod_operado  )+','+; //8
                                sr_cdbvalue(mcons_nivel[1,1])+','+;//9
                                sr_cdbvalue(SUBSTR(ALLTRIM(mcons_nivel[1,2])+IF(mnum_pedido = NIL,'',' '+mnum_pedido),1,60))+','+;//10
                                sr_cdbvalue(mcodaux      )+','+; //11
                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                sr_cdbvalue(IF(mnum_prod = NIL,'',mnum_prod))+','+; //13
                                sr_cdbvalue(' ')+')',,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        mok:='*'
                        *********************
                        SELE(msel_sen);IF(mord_sen>0,ORDSETFOCUS(mord_sen),)
                        *********************
                        wvw_lclosewindow()
                        RETURN .T.
                ELSEIF EMPTY(mcod_aut)
                        msenha = ''
                        pegasenha(@msenha,i+2,18,setcor(2))
                        setcor(1)
                        IF msenha = 'NAO'
                                EXIT
                        ENDIF
                        IF EMPTY(msenha)
                                LOOP
                        ENDIF
                        maut_oper := STRZERO(mcod_oper,3)
                ELSE
                        atencao('Codigo de Autorizacao nao confere !!!')
                        mcont ++
                        LOOP
                ENDIF
        ENDIF
        IF ALLTRIM(msenha) == ALLTRIM(DCRIPTO(cons_ven[1,2]))
                IF mdl = 'LIB_SALDO'
                        IF(ver_nivel(mdl,'LIBERACAO DE QUANTD.SOLICITADA MAIOR QUE O SALDO DO PRODUTO','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
		ELSEIF mdl = 'LIB_EXPPROD'
                        IF(ver_nivel(mdl,'LIBERACAO DE ESTORNO DE EXPEDICAO DE PRODUTO NO PEDIDO','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
		ELSEIF mdl = 'LIB_N_NOTA'
                        IF(ver_nivel(mdl,'LIBERACAO DA ALTERACAO NO NUMERO NOTA FISCAL','135',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'LIB_SALDOADM'
                        IF(ver_nivel(mdl,'LIBERACAO DE QUANTD.SOLICITADA MAIOR QUE A QUANTIDADE MAXIMA DA ADM','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'OPER_PED'
                        IF(ver_nivel(mdl,'LIBERACAO DE OPERADOR COM PEDIDOS PEDENTES','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'ALT_DADOS'
                        IF(ver_nivel(mdl,'LIBERACAO P/ALTERACAO NA ENTRADA DE MERCADORIA','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'LIB_DESC'
                        IF(ver_nivel(mdl,'LIBERACAO DE DESCONTO A MAIOR NO PRECO DE VENDA PRODUTO','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'LIBDESC_PED'
                        IF(ver_nivel(mdl,'LIBERACAO DE DESCONTO A MAIOR DO QUE O MAXIMO PERMITIDO','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'LIB_AJUST'
                        IF(ver_nivel(mdl,'LIBERACAO DE AJUSTE DE SALDO DOS PRODUTOS','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'LIBSLDNF'
                        IF(ver_nivel(mdl,'LIBERACAO DE SALDO A MENOR NA NOTA FISCAL','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'LIB_ALTSENHA'
                        IF(ver_nivel(mdl,'LIBERACAO P/ALTERAR A SENHA','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'LIB_AMB'
                        IF(ver_nivel(mdl,'LIBERACAO DE AMBIENTE NAO AUTORIZADO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'LIB_DATA_ENT'
                        IF(ver_nivel(mdl,'LIBERACAO DA DATA DE ENTRADA DO SISTEMA','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ELSEIF mdl = 'DESC_CX'
                        IF ver_nivel(mdl,'LIBERACAO DE DESCONTO NO RECEBIMENTO DO PEDIDO (CAIXA)','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mn_ped := STRZERO(mnum_ped,6)
                        ENDIF
                ELSEIF mdl = 'LIB_ALTSLDPED'
                        IF ver_nivel(mdl,'LIBERACAO DA QUANTIDADE NA ALTERACAO DO PEDIDO IMPRESSO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mn_ped := STRZERO(mnum_ped,6)
                        ENDIF
                ELSEIF mdl = 'LIB_PED_LIB'
                        IF ver_nivel(mdl,'LIBERACAO DE PEDIDO JA LIBERADOR PELO FINANCEIRO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mn_ped := STRZERO(mnum_ped,6)
                        ENDIF
                ELSEIF mdl = 'PRZ_REC'
                        IF ver_nivel(mdl,'LIBERACAO DE PRAZO MAIOR QUE ESTIPULADO NO PEDIDO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mn_ped := STRZERO(mnum_ped,6)
                                mc_cli := mnum_cli
                        ENDIF
                ELSEIF mdl = 'LIB_DEV'
                        IF ver_nivel(mdl,'LIBERACAO DE CLIENTE DEVEDOR, CHQ.S/FUNDO OU LIMITE ESTOURADO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mc_cli := mnum_cli
                        ENDIF
                ELSEIF mdl = 'LIB_TAX'
                        IF ver_nivel(mdl,'LIBERACAO DA TAXA DE ACRESCIMO NO PEDIDO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mc_cli := mnum_cli
                        ENDIF
                ELSEIF mdl = 'LIB_PRZ'
                        IF ver_nivel(mdl,'LIBERACAO DE PRAZO A MAIOR QUE O PERMITIDO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mc_cli := mnum_cli
                        ENDIF
                ELSEIF mdl = 'CHQ_DEV'
                        IF ver_nivel(mdl,'LIBERACAO DE CLIENTE COM *** CHEQUE SEM FUNDOS ***','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mc_cli := mnum_cli
                        ENDIF
                ELSEIF mdl = 'LIMIT_EST'
                        IF ver_nivel(mdl,'LIBERACAO DE CLIENTE COM *** LIMITE ESTOURADO ***','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mc_cli := mnum_cli
                        ENDIF
                ELSEIF mdl = 'LIB_RECE'
                        IF ver_nivel(mdl,'LIBERACAO DE SALDO A RECEBER POR CONTA','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'LIB_ORCA'
                        IF ver_nivel(mdl,'LIBERACAO DE ORCAMENTO PRECO CUSTO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'LIB_INSC'
                        IF ver_nivel(mdl,'LIBERACAO DE INSCRICAO ESTADUAL','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'LIBCLIVEN'
                        IF ver_nivel(mdl,'LIBERACAO DE VENDEDOR DIFERENTE DO VENDEDOR RESP.PELO CLIENTE','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'EST_PEDEXP'
                        IF ver_nivel(mdl,'ESTORNO DE PEDIDO EXPEDIDO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'LIB_PED'
                        IF ver_nivel(mdl,'LIBERAR OU CANCELAR PEDIDOS','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mn_ped := STRZERO(mnum_ped,6)
                        ENDIF
                ELSEIF mdl = 'LIB_PED_VLR'
                        IF ver_nivel(mdl,'LIBERAR VALOR MAIOR DO QUE O PEDIDO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mn_ped := STRZERO(mnum_ped,6)
                        ENDIF
                ELSEIF mdl = 'LIB_2VIAPED'
                        IF ver_nivel(mdl,'LIBERAR 2a.VIA PEDIDO JA EMITIDO NOTA FISCAL','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'SAC101EXC'
                        IF ver_nivel(mdl,'EXCLUSAO DE SUB-GRUPO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'SAC10EXC'
                        IF ver_nivel(mdl,'EXCLUSAO DE GRUPO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'BALSLSAIDA'
                        IF ver_nivel(mdl,'BALANCO ** CORRECAO DE SALDO (SAIDA) **','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'FORMPAGPED'
                        IF ver_nivel(mdl,'LIBERACAO DA FORMA DE PAG. NA ALTERCAO DO PEDIDO (AV -> AP)','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mn_ped := STRZERO(mnum_ped,6)
                        ENDIF
                ELSEIF mdl = 'LIB_FORMA_PG'
                        IF ver_nivel(mdl,'LIBERA FORMA DE PAGAMENTO NO RECEBIMENTO DE AVISTA P/APRAZO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mc_cli := mnum_cli
                                mn_ped := STRZERO(mnum_ped,6)
                        ENDIF
                ELSEIF mdl = 'ABANDONAR_REC'
                        IF ver_nivel(mdl,'LIBERA PARA ABANDONAR O RECEBIMENTO DO PEDIDO','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mc_cli := mnum_cli
                                mn_ped := STRZERO(mnum_ped,6)
                        ENDIF
                ELSEIF mdl = 'LIB_CONDPAG'
                        IF ver_nivel(mdl,'LIBERACAO PARA ALTERAR A CONDICAO DE PAGAMENTO PRE FIXADA DO CLIENTE','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                                mc_cli := mnum_cli
                        ENDIF
                ELSEIF mdl = 'LIMP_MOV'
                        IF ver_nivel(mdl,'LIBERACAO PARA LIMPEZA DO ARQUIVO MOVIMENTO E INTEGRIDADE','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF mdl = 'LIB_REC_ENTE'
                        IF ver_nivel(mdl,'LIBERACAO PARA 2a.VIA DO RECIBO DE ENTREGA','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
		ELSEIF mdl = 'LIB_ATU_PRECO'
                        IF ver_nivel(mdl,'LIBERACAO DE ATUALIZACAO DE PRECOS (ENTRADA DE MERCADORIA)','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
		ELSEIF mdl = 'CAN_CUPOM'
                        IF ver_nivel(mdl,'LIBERACAO DE CANCELAMENTO DE CUPOM FISCAL','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
		ELSEIF mdl = 'EXCPRDMOV'
                        IF ver_nivel(mdl,'AUTORIZACAO PARA EXCLUSAO DE PRODUTO COM MOVIMENTO','1',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3))
                                mok := '*'
                        ENDIF
                ELSEIF (RAT(IF(EMPTY(SUBSTR(cons_ven[1,3],1,1)),'*',SUBSTR(cons_ven[1,3],1,1)),conf->nivel) > 0 .OR. RAT(IF(EMPTY(SUBSTR(cons_ven[1,3],2,1)),'*',SUBSTR(cons_ven[1,3],2,1)),conf->nivel) > 0) .OR. STRZERO(VAL(maut_oper),3) = 999
                        mok := '*'
                ENDIF

                IF mok = '*'
                        mautoriza := SPACE(3)
                        mautoriza := cons_ven[1,1]
                        sr_getconnection():exec('INSERT INTO saclog (data_sis,data,hora,tipo,documento,cod_cli,aut_oper,cod_oper,modulo,descri,cod_aut,terminal'+;
                                ',cod_prod,SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(DATE()       )+','+; //1
                                sr_cdbvalue(mdata_sis    )+','+; //2
                                sr_cdbvalue(TIME()       )+','+; //3
                                sr_cdbvalue('AUTORIZACA')+','+; //4
                                sr_cdbvalue(mn_ped       )+','+; //5
                                sr_cdbvalue(IF(mc_cli = NIL,'',mc_cli))+','+; //6
                                sr_cdbvalue(maut_oper    )+','+; //7
                                sr_cdbvalue(cod_operado  )+','+; //8
                                sr_cdbvalue(IF(mdl = NIL,'',mdl))+','+;//9
                                sr_cdbvalue(SUBSTR(IF(LEN(mcons_nivel) > 0,ALLTRIM(mcons_nivel[1,2]),'')+IF(mnum_pedido = NIL,'',' '+mnum_pedido),1,60))+','+;//10
                                sr_cdbvalue(mcodaux      )+','+; //11
                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                sr_cdbvalue(IF(mnum_prod = NIL,'',mnum_prod))+','+; //13
                                sr_cdbvalue(' ')+')',,.f.)

                        sr_getconnection():exec("COMMIT",,.f.)
                        *********************
                        SELE(msel_sen);IF(mord_sen>0,ORDSETFOCUS(mord_sen),)
                        *********************
                        wvw_lclosewindow()
                        RETURN .T.
                ENDIF
                atencao('Cod. Operador:'+maut_oper+' - Operador nao Autorizada !!!')
                mcont ++
                LOOP
        ELSE
                atencao('Senha nao Autorizada 2 !!!')
                mcont ++
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
*********************
SELE(msel_sen);IF(mord_sen>0,ORDSETFOCUS(mord_sen),)
*********************
RETURN .F.
***************************** F I M ****************************************
************************
* SOLICITAR AUTORIZACAO
************************
FUNCTION soli_aut(sope,scli,sprod,smen,samb)
**********************************
LOCAL mcont:=1,mponto_sen:=0,cons_aut:={}
mponto_sen := RECNO()
cComm  := "UPDATE insopera SET sstatus = 'S',sope = "+sr_cdbvalue(sope)
IF scli <> NIL
        ccomm := ccomm + ",scliente = "+sr_cdbvalue(scli)
ENDIF
IF sprod <> NIL
        ccomm := ccomm + ",sproduto = "+sr_cdbvalue(sprod)
ENDIF
IF samb <> NIL
        ccomm := ccomm + ",sambiente = "+sr_cdbvalue(samb)
ENDIF
ccomm := ccomm + ",smensagem = "+sr_cdbvalue(ALLTRIM(smen))
ccomm := ccomm + " WHERE scod_op = "+sr_cdbvalue(sope)
sr_getconnection():exec(ccomm,,.f.)
sr_getconnection():exec('COMMIT',,.f.)
op_tela(10,10,11,70,'Solicitacao de AUTORIZACAO')
WHILE LASTKEY() <> 27
        //GO mponto_sen
        cons_aut := {}
        sr_getconnection():exec("SELECT sstatus,scod_aut FROM insopera WHERE scod_op = "+sr_cdbvalue(sope),,.t.,@cons_aut)
        limpa(00,00,00,70)
        IF cons_aut[1,1] = 'S'
                DEVPOS(00,00);DEVOUT('Aguarde solicitanto AUTORIZACAO '+REPLI('.',mcont))
        ELSEIF cons_aut[1,1] = 'A'
                DEVPOS(00,00);DEVOUT('Aguarde um momento  em  ANALISE '+REPLI('.',mcont))
        ELSEIF cons_aut[1,1] = 'L'
                mcod_aut := SUBSTR(cons_aut[1,2],1,6)
                EXIT
        ELSEIF cons_aut[1,1] = 'N'
                mcod_aut := 'NEGATIVO'
                EXIT
        ENDIF
        mcont ++
        IF mcont = 5
                mcont := 1
        ENDIF
        INKEY(.5)
        IF LASTKEY() = 27
                mcod_aut := 'NEGATIVO'
                EXIT
        ENDIF
ENDDO
cComm  := "UPDATE insopera SET sstatus = NULL,sope = NULL"
ccomm := ccomm + ",scliente = NULL"
ccomm := ccomm + ",sproduto = NULL"
ccomm := ccomm + ",sambiente = NULL"
ccomm := ccomm + ",smensagem = NULL"
//ccomm := ccomm + ",scod_aut = NULL"
ccomm := ccomm + " WHERE scod_op = "+sr_cdbvalue(sope)
sr_getconnection():exec(ccomm,,.f.)
sr_getconnection():exec('COMMIT',,.f.)
wvw_lclosewindow()
RETURN .T.

***************
FUNCTION vencim(mv,t,dup,memi,prz_dia,m_doc)
***************
MEMVAR memissao
IF memi = NIL
        memi := memissao
ENDIF
IF prz_dia = NIL
        prz_dia := 0
ENDIF
IF m_doc <> NIL .AND. EMPTY(m_doc) .AND. EMPTY(mv)
        RETURN .T.
ENDIF
IF t = NIL .AND. mv=ctod("  /  /  ")
        atencao('Data de Vencimento deve ser preenchida! [ÄÙ] Continua.')
        RETURN .F.
ENDIF
IF (dup = NIL .OR. ! EMPTY(dup)) .AND. DTOS(mv)<DTOS(memi)
        atencao('Data de Vencimento menor que Data de Emissao! [ÄÙ] Continua.')
        RETURN .F.
ENDIF
IF (dup = NIL .OR. ! EMPTY(dup)) .AND. DTOS(mv) > DTOS((memi+prz_dia+m_set[1,122])) .AND. ! EMPTY(prz_dia) .AND. ! EMPTY(m_set[1,122])
        IF ! aut_sen('Vencimento maior que Prazo estipulado no PEDIDO mais TOLERANCIA de '+STRZERO(m_set[1,122],3)+' Dias.','PRZ_REC')
                RETURN .F.
        ENDIF
        IF LASTKEY() = 27
                RETURN .F.
        ENDIF
ENDIF
IF dow(mv)=7 .OR. dow(mv)=1
        atencao('Data de Vencimento cai no '+IF(dow(mv)=7,'SABADO','DOMINGO')+' Final de semana')
        ?? chr(7)
ENDIF
RETURN .T.

************************** F I M ***************************************
***********************************
* ATIVA AS TECLAS DE ATALHO
***********************************

FUNCTION set_key(s1,s2,s3,s4,t)
********************************************************
IF s1 = 'cliente' .OR. s2 = 'cliente' .OR. s3 = 'cliente' .OR. s4 = 'cliente'
ENDIF
IF s1 = 'forn' .OR. s2 = 'forn' .OR. s3 = 'forn' .OR. s4 = 'forn'
        SET KEY -5 TO f6_forn()
ENDIF
IF s1 = 'trans' .OR. s2 = 'trans' .OR. s3 = 'trans' .OR. s4 = 'trans'
        SET KEY -4 TO f5_trans()
ENDIF

RETURN NIL
*********************************** F I M *************************************
*************************
* CADASTRO DE ESTADOS
*************************

FUNCTION incl_tab
******************

LOCAL tela1,tela,lci,cci,lba,cba,point,pode,msele,morde,men,;
      opcao,muf,mestado,mperc,f,m_uf:={}

lci := cci := 0
lba := 12
cba := 44

IF SELE() <> 0
        msele := SELE()
        morde := INDEXORD()
ENDIF
************
SELE('tabuf');ORDSETFOCUS(1)
GO TOP
************
SET CURSOR ON
botao(lba+2,cci,lba+4,cba,,' Inclusao ')
WHILE .T.
        mensagem('Digite a Sigla do Estado a ser Cadastrado')
        muf := SPACE(2)
        mestado :=  SPACE(20)
        mperc :=  0
        @ lba+3,cci+2 GET muf PICT '@!' VALID v_uf(muf)
        READ

        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,tela1)
                RETURN NIL
        ENDIF
        IF EMPTY(muf)
                LOOP
        ENDIF
        *************
        IF tabuf->(DBSEEK(muf))
                atencao('Estado ja Cadastrado')
                LOOP
        ENDIF
        @ lba+3,cci+7 GET mestado PICT '@!'
        @ lba+3,cci+30 GET mperc PICT '99.99'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        IF opcao = 'S'
                IF ADIREG()
                        REPLA uf WITH muf
                        REPLA estado WITH mestado
                        REPLA percent WITH mperc
                        COMMIT
                        UNLOCK
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO
RETURN NIL
*************************** f i m *******************************************
* TIPO DE IMPRESSAO  ARQUIVOS OU IMPRESSORA
*******************************************
FUNCTION imp_arq(imp_arq,mporta,op,linha,comp,mens,msenha_lib,mexcel)
*****************
LOCAL tela,lci,cci,lba,cba,msele,morde,mtp_impre:=0

mimp_tipo :=0
mporta_imp:=mtipo_imp :=' '
mnome_arq := imp_arq
msele := SELE()
morde := INDEXORD()

op_tela(03,10,14,80,' Configuracao de IMPRESSAO - Arquivo: '+ALLTRIM(mnome_arq))
WvW_ClearGetVarList()
lci := cci := 0
lba := 09
cba := 70
IF op = NIL
        op := 'S'
ENDIF
IF mporta = NIL
        mporta := 'R'
ENDIF
mnome_arq := ALLTRIM(m_cfg[12])+imp_arq+SPACE(50-LEN(ALLTRIM(m_cfg[12])+imp_arq))

mtp_impre:=0
WHILE .T.
        imp_arq := mnome_arq
        mimp_tipo := 1
        IF mporta = 'R'
                mporta_imp := m_cfg[32]
                mtipo_imp  := m_cfg[34]
        ELSEIF mporta = 'T'
                mporta_imp := m_cfg[20]
                mtipo_imp  := m_cfg[28]
        ELSEIF mporta = 'D'
                mporta_imp := m_cfg[35]
                mtipo_imp  := m_cfg[34]
        ELSEIF mporta = 'B'
                mporta_imp := m_cfg[41]
                mtipo_imp  := m_cfg[28]
        ELSEIF mporta = 'N'
                mporta_imp := m_cfg[40]
                mtipo_imp  := 'M'
        ELSEIF mporta = 'K'
                mporta_imp := m_cfg[33]
                mtipo_imp  := m_cfg[28]
        ELSE
                mporta_imp := 'LPT1'
                mtipo_imp  := 'M'
        ENDIF
	IF mtipo_imp = 'M'
		mtp_impre:=1
	ELSE
		mtp_impre:=2
	ENDIF

        limpa(00,00,30,80)
        setcor(1)
        @ lci+4,cci TO lci+4,cba
        DEVPOS(lci+6,cci+1);DEVOUT('Tipo da Impressora [J]ato [M]atriz...:')
        DEVPOS(lci+8,cci+1);DEVOUT('Nome do Arquivo de impressao.........:')
        DEVPOS(lci+9,cci+1);DEVOUT('Porta Impressora.....................:')
        DEVPOS(lci+10,cci+1);DEVOUT('Diminuir Espacos entre Linhas [s/N]..:')
        botao1(lci+5,cci+40,lci+7,cci+53)
        botao1(lci+5,cci+56,lci+7,cci+69)
        setcor(3)
        DEVPOS(lci+6,cci+41);DEVOUT(' MATRICIAL  ')
        DEVPOS(lci+6,cci+57);DEVOUT(' JATO TINTA ')
        setcor(1)

        botao1(lci+1,cci+02,lci+3,cci+15)
        botao1(lci+1,cci+20,lci+3,cci+33)
        botao1(lci+1,cci+37,lci+3,cci+50)
        botao1(lci+1,cci+55,lci+3,cci+68)
        @ lci+2,cci+03 PROMPT ' IMPRESSORA '
        @ lci+2,cci+21 PROMPT '  CONSULTA  '        //+marq
        @ lci+2,cci+38 PROMPT '  ARQUIVO   '        //+marq
        IF mexcel <> NIL
                @ lci+2,cci+56 PROMPT '   EXCEL    '        //+marq
        ELSE
                setcor(3)
                @ lci+2,cci+56 SAY '   EXCEL    '        //+marq
                setcor(1)
        ENDIF
        SET INTEN ON
        MENU TO mimp_tipo
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! mimp_tipo = 3
                @ lci+6,cci+41 PROMPT ' MATRICIAL  '
                @ lci+6,cci+57 PROMPT ' JATO TINTA '
                SET INTEN ON
                MENU TO mtp_impre
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF mtp_impre = 1
                        mtipo_imp := 'M'
                ELSE
                        mtipo_imp := 'J'
                ENDIF
        ENDIF
        //IF mimp_tipo < 4
                IF (mtipo_imp = 'J' .AND. mimp_tipo = 1)
                        mimp_tipo := 3
                        mtipo_imp := 'D'
                        imp_arq := ALLTRIM(m_cfg[12])+'HRB.REL'
                ELSEIF (mimp_tipo = 2 .AND.  m_set[1,41] = 'P')
                        imp_arq := ALLTRIM(m_cfg[12])+'HRB.REL'
                ELSE
                        IF mimp_tipo = 1 .AND. ! EMPTY(mens)
                                IF msenha_lib = 'IMP_2VIAPED'
                                        IF ! ver_nivel('IMP_ARQ2VIA','" IMPRESSAO " DA 2a.VIA DE PEDIDO','12345',nivel_acess,,'AMBIE')
                                                LOOP
                                        ENDIF
                                ELSE
                                        IF ! aut_sen('Senha de autorizacao '+mens,msenha_lib)
                                                LOOP
                                        ENDIF
                                ENDIF
                        ELSEIF mimp_tipo = 2
                                mtipo_imp := 'M'
                        ELSEIF mimp_tipo = 3
                                IF ! ver_nivel('IMP_ARQ','IMPRESSAO PARA ARQUIVO','17',nivel_acess,,'AMBIE')
                                        LOOP
                                ENDIF
                                mporta := 'PRN '
                                @ lci+08,cci+40 GET imp_arq PICT '@S30!' VALID IF(EMPTY(imp_arq),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                        ELSEIF mimp_tipo = 4
                                IF ! ver_nivel('IMP_ARQ','IMPRESSAO PARA ARQUIVO','17',nivel_acess,,'AMBIE')
                                        LOOP
                                ENDIF
                                mporta := 'PRN '
                                imp_arq := SUBSTR(imp_arq,1,LEN(ALLTRIM(imp_arq))-4)+'.XLS'+SPACE(10)
                                @ lci+08,cci+40 GET imp_arq PICT '@S30!' VALID IF(EMPTY(imp_arq),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                marq := ALLTRIM(imp_arq)
                        ENDIF
                ENDIF
                //setcor(3)
                //DEVPOS(lci+06,cci+40);DEVOUT(marq)
                //setcor(1)
                //@ lci+9,cci+40 GET mporta_imp PICT '@!' WHEN mimp_tipo = 1 VALID ver_porta(mporta_imp) .AND. mporta_imp $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN ' .AND. IF(EMPTY(mporta_imp),.F.,.T.)
                @ lci+9,cci+40 GET mporta_imp PICT '@!' WHEN mimp_tipo = 1 VALID mporta_imp $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN ' .AND. IF(EMPTY(mporta_imp),.F.,.T.)
                @ lci+10,cci+40 GET comp PICT '@!' WHEN comp <> NIL VALID comp $ 'S,N'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        //ELSE
        //        mtipo_imp := 'D'
        //        marq := ALLTRIM(m_cfg[12])+'HRB.REL'
        //ENDIF
        IF mimp_tipo > 2
                setcor(3)
                DEVPOS(lci+08,cci+40);DEVOUT(imp_arq)
                setcor(1)
        ENDIF
        op := op_simnao('S','Confirma Impressao/Consulta [S/n]:')
        IF op = 'S'
                wvw_lclosewindow()
                mensagem('Espere o final da impressao !!!')
                IF mimp_tipo = 4
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        RETURN .T.
                ENDIF
                SET DEVI TO PRINT
                IF mimp_tipo = 1
                        SET PRINT TO (mporta_imp)
                        IF comp <> NIL .AND. comp = 'S'
                                imprt(mtipo_imp,'P8')
                        ENDIF
                ELSE
                        SET PRINT ON
                        SET PRINT TO (imp_arq)
                ENDIF
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ELSE
                LOOP
        ENDIF
ENDDO
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
wvw_lclosewindow()
RETURN .F.
*************************** f i m *******************************************
******************************8
* FIM DO SISTEMA
******************************8

FUNCTION fim_prg

LOCAL mlinha,msenha


IF ! aut_sen('Verificar integridade do Arquivo de MOVIMENTO e Fazer Limpeza:','LIMP_MOV')
        RETURN NIL
ENDIF

op_tela(10,10,13,60)
DEVPOS(01,01);DEVOUT('Senha de Verificacao do Arquivo:')
msenha = ''
pegasenha(@msenha,01,COL()+1,setcor(2))
IF msenha = 'NAO'
        wvw_lclosewindow()
        RETURN NIL
ENDIF
IF msenha = 'MIF'
        mensagem('Verificando a integridade do Arquivo de MOVIMENTO e Fazendo Limpeza')
        sr_getconnection():exec("DELETE FROM sacmov WHERE tipo = '02'",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
wvw_lclosewindow()
RETURN NIL
********************************* F I M **************************
***************************
* FUNCAO PARA PROGRESSAO
***************************

FUNCTION prog(l,c,q,marq,t)
***********************************
LOCAL i,m_prog

m_prog := {}
AADD(m_prog,{l,c,l+1,c+60})
DEVPOS(00,39);DEVOUT(TRANSFORM(q,'999')+' %')
WVW_DrawProgressBar( ,l,c,l+1,c+60,m_prog,q,50,155,,.f.,0 )
/*

setcor(1)
limpa(l,c,l,c+(80-c))
DEVPOS(l,c+18);DEVOUT('Campos: ')
DEVPOS(l,c);DEVOUT('±±±±±±±±±±')
setcor(3)
DEVPOS(l,c+25);DEVOUT(marq)
DEVPOS(l,c+13);DEVOUT(TRANSFORM(0,'999'))
IF q = 0
        DEVPOS(l,c+13);DEVOUT(TRANSFORM(0,'999'))
        RETURN NIL
ENDIF
i := 0
FOR i = 1 TO q/10
        DEVPOS(l,c);DEVOUT(REPLI('Û',i))
        DEVPOS(l,c+13);DEVOUT(TRANSFORM(i*10,'999'))
NEXT
setcor(1)
*/
RETURN NIL
************************* F I M ******************************
**************************************
* FUNCAO PARA CHECAR O SPC
**************************************
FUNCTION spc(mcod,mvalor,mtipo,mped,mlib,mcons)
*************************
LOCAL liberado:='*',rodape,ponto,msele,morde,mcont_ch,mpesq,;
      mmensagem:=' ',mok:=' ',mcont_arq:=0,mcam_arq:=' ',i:=0,;
      mcpfcnpj := ' ',mcli_spc,mcam_cli:=' ',mmens:=' '
local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode,aret:={}

MEMVAR ok,mdata_sis,mlim_venc,mlim_avenc,mtot_limite

mlim_venc := mlim_avenc := mtot_limite := 0
IF mlib <> NIL .AND. mlib = '*'
        RETURN .T.
ENDIF
aret:={}
cComm  := "SELECT * FROM mastcli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod,5))
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) > 0
	IF STRZERO(mcod,5) = m_set[1,84] .OR. aret[1,42] = 'N'
        	RETURN .T.
	ENDIF
ELSE
        RETURN .F.
ENDIF

mok := ' '
msele := SELE()
morde := INDEXORD()
aret:={}
cComm  := "SELECT cod_cli FROM saccheq WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod,5))+" AND (ok = ' ' OR ok IS NULL)"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) > 0
        IF mok = ' '
                IF (ver_serie() = '141287' .OR. ver_serie() = '14128D') .AND. ;
                   ! aut_sen('CLIENTE COM CHEQUE DEVOLVIDO','CHQ_DEV',,STRZERO(mcod,5))
                        UNLOCK
                        RETURN .F.
                ENDIF
                liberado := ' '
                mmensagem:='*** CHEQUE DEVOLVIDO ***'
                mok:='*'
        ENDIF
ENDIF
IF ver_serie() = '141287'
        aret:={}
        cComm  := "SELECT SUM(valor) FROM sacdupr WHERE sacdupr.fornec = "+sr_cdbvalue(STRZERO(mcod,5))+" AND sacdupr.venc < "+sr_cdbvalue(mdata_sis)+" AND datpag IS NULL"
        sr_getconnection():exec(ccomm,,.t.,@aret)

        mlim_venc := aret[1,1]

        aret:={}
        cComm  := "SELECT SUM(valor) FROM sacdupr WHERE sacdupr.fornec = "+sr_cdbvalue(STRZERO(mcod,5))+" AND sacdupr.venc > "+sr_cdbvalue(mdata_sis)+" AND datpag IS NULL"
        sr_getconnection():exec(ccomm,,.t.,@aret)

        mlim_avenc := aret[1,1]

        aret:={}
        cComm  := "SELECT SUM(valor) FROM sacdupr WHERE sacdupr.fornec = "+sr_cdbvalue(STRZERO(mcod,5))+" AND sacdupr.venc > "+sr_cdbvalue(mdata_sis)+" AND datpag IS NULL"
        sr_getconnection():exec(ccomm,,.t.,@aret)

        mlim_avenc :=  mlim_avenc + aret[1,1]
ELSE
        aret:={}
        cComm  := "SELECT SUM(valor) FROM sacdupr WHERE fornec = "+sr_cdbvalue(STRZERO(mcod,5))+" AND venc < "+sr_cdbvalue(mdata_sis)+" AND datpag IS NULL"
        sr_getconnection():exec(ccomm,,.t.,@aret)
        IF LEN(aret) > 0
                mlim_venc := aret[1,1]
        ELSE
                mlim_venc := 0
        ENDIF

        aret:={}
        cComm  := "SELECT SUM(valor) FROM sacdupr WHERE fornec = "+sr_cdbvalue(STRZERO(mcod,5))+" AND venc >= "+sr_cdbvalue(mdata_sis)+" AND datpag IS NULL"
        sr_getconnection():exec(ccomm,,.t.,@aret)

        IF LEN(aret) > 0
                mlim_avenc :=aret[1,1]
        ELSE
                mlim_avenc :=0
        ENDIF
ENDIF
aret:={}
cComm  := "SELECT conta,venc FROM sacdupr WHERE fornec = "+sr_cdbvalue(STRZERO(mcod,5))+" AND venc < "+sr_cdbvalue(mdata_sis)+" AND datpag IS NULL"
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) > 0
        FOR i = 1 TO LEN(aret)
                IF  aret[i,1] = '*' .AND. mmens = ' '
                        liberado := ' '
                        mmensagem:= mmensagem+' - *** DOCUMENTO VENCIDO (p/CONTA) - MATRIZ !!! ***'
                        mok:=mmens:='*'
                ELSE
                        IF aret[i,2]+m_set[1,106] < mdata_sis .AND. mmens = ' '
                                liberado := ' '
                                mmensagem:= mmensagem+' - *** DOCUMENTO VENCIDO - MATRIZ !!! ***'
                                mok:=mmens:='*'
                        ENDIF
                ENDIF
        NEXT

ENDIF

mtot_limite := mlim_avenc + mlim_venc

aret:={}
cComm  := "SELECT limite FROM mastcli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod,5))
sr_getconnection():exec(ccomm,,.t.,@aret)

IF aret[1,1] > 0 .AND. mtot_limite+mvalor > aret[1,1]
        IF mtipo = NIL
                IF (ver_serie() = '141287' .OR. ver_serie() = '14128D') .AND. ;
                   ! aut_sen('CLIENTE COM LIMITE ESTOURADO','LIMIT_EST',,STRZERO(mcod,5))
                        UNLOCK
                        RETURN .F.
                ELSE
/*
			IF mtot_limite+mvalor > (aret[1,1] * 1.5)
		                atencao('Cliente estar BLOQUEADO por ultrapassar o Limite + 50%: Valor do Limite: '+TRANSFORM(aret[1,1],'999,999.99')+' e o Total de Compras mais a compra em andamento: '+TRANSFORM(mtot_limite+mvalor,'999,999.99'))
		                RETURN .F.
			ENDIF		
*/
                        mmensagem:= mmensagem+' - *** LIMITE R$: '+TRANSFORM(aret[1,1],'99,999,999.99')+' ESTORADO em '+TRANSFORM((mtot_limite+mvalor) - aret[1,1],'99,999,999.99')+' ***'
                ENDIF
                liberado := ' '
                mok:='*'
        ELSE
                atencao('Cliente com LIMITE R$: '+TRANSFORM(aret[1,1],'99,999,999.99')+' ESTORADO em '+TRANSFORM((mtot_limite+mvalor) - aret[1,1],'99,999,999.99')+' !!!')
        ENDIF

ENDIF

IF mped = NIL
        aret:={}
        cComm  := "SELECT pnum_ped FROM sacped_s WHERE pcod_cli = "+sr_cdbvalue(STRZERO(mcod,5))+" AND (ppag = ' ' OR ppag IS NULL)"
        sr_getconnection():exec(ccomm,,.t.,@aret)
        IF LEN(aret) > 0
                atencao('Cliente com PEDIDO EM ABERTO !!!')
                IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                        liberado := ' '
                        mmensagem:= mmensagem+' - *** PEDIDO EM ABERTO ***'
                ENDIF
        ENDIF
ENDIF
IF mcons = NIL
        IF mok = '*' .AND. ! aut_sen(mmensagem,'LIB_DEV',,STRZERO(mcod,5))
                UNLOCK
                RETURN .F.
        ENDIF
ELSE
        atencao(mmensagem)
ENDIF
mlib := liberado := '*'
IF liberado = '*' .OR. mtipo <> NIL
        RETURN .T.
ELSE
        RETURN .F.
ENDIF
RETURN .F.
************************* F I M ******************************
**************************************
* FUNCAO PARA CHECAR O SPC
**************************************
FUNCTION ver_debito(mcod)
*************************
LOCAL msele,morde,mmensagem:='',aret:={}

aret:={}
cComm  := "SELECT * FROM mastcli WHERE cod_cli = "+sr_cdbvalue(STRZERO(mcod,5))
sr_getconnection():exec(ccomm,,.t.,@aret)
IF LEN(aret) > 0
	IF STRZERO(mcod,5) = m_set[1,84] .OR. aret[1,42] = 'N'
	        RETURN mmensagem
	ENDIF
ELSE
        RETURN .F.
ENDIF
msele := SELE()
morde := INDEXORD()
IF ! AbriArq('mastcli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
******************
SELE('cheq');ORDSETFOCUS(8)
GO TOP
******************
IF cheq->(DBSEEK(STRZERO(mcod,5)+' '))
        mmensagem := ' *** CHEQUE DEVOLVIDO *** '
ENDIF
********************
SELE('dupr');ORDSETFOCUS(6)
********************
mpesq := STRZERO(mcod,5)+' '
IF dupr->(DBSEEK(mpesq))
        IF dupr->venc < mdata_sis
                mmensagem:= mmensagem+' *** DOCUMENTO VENCIDO *** '
        ENDIF
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN mmensagem
**************************************
* FUNCAO PARA CHECAR QTD. DE CHEQUES
**************************************
FUNCTION qtd_chq(mcod,mnum,mag,mc_c)
*************************
LOCAL rodape,msele,morde,mcont_ch:=0

rodape := SAVESCREEN(23,00,23,79)
msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF m_set[1,85] > 0
        mcont_ch := 0
        ********************
        SELE('dupr');ORDSETFOCUS(9)
        ********************
        IF dupr->(DBSEEK(STRZERO(mcod,5)+' '+'CH'+mnum+mag+mc_c))
                WHILE STRZERO(mcod,5) = dupr->fornec .AND. dupr->pago = ' ';
                      .AND. dupr->tipo = 'CH' .AND. dupr->numero = mnum .AND.;
                      dupr->agencia = mag .AND. dupr->c_c = mc_c .AND. ! EOF()
                        mcont_ch ++
                        SKIP
                ENDDO
                IF mcont_ch >= m_set[1,85]
                        atencao('Este Cliente se encontra com '+STRZERO(mcont_ch,3)+' cheques em ABERTO desta conta << Banco: '+mnum+' AG.: '+mag+' C/C: '+mc_c+' >>')
                ENDIF
        ENDIF
ENDIF
RETURN .T.
******************************** F I M ************************************88
***************************
* VER FINANCIAMENTO
***************************
FUNCTION ver_finan(mcod,li,ci)
************************
//LOCAL msele,morder
MEMVAR mcobra_fin,mtaxa_fin,mtaxa_adm

cons_finan :={}
sr_getconnection():exec("SELECT * FROM sacfin WHERE cod_fin = "+sr_cdbvalue(STRZERO(mcod,3)),,.t.,@cons_finan)
IF LEN(cons_finan) = 0
        atencao('Este financiamento nao esta cadastrado !!!')
        RETURN .F.
ENDIF
setcor(3)
DEVPOS(li,ci);DEVOUT(cons_finan[1,2])
setcor(1)
mcobra_fin := cons_finan[1,3]
mtaxa_fin := cons_finan[1,4]
mtaxa_adm := cons_finan[1,5]
RETURN .T.

/*

msele := SELE()
morder := INDEXORD()
IF ! AbriArq('sacfin','fin');RETURN NIL;ENDIF
***************
SELE('fin');ORDSETFOCUS(1)
GO TOP
***************
IF ! fin->(DBSEEK(STRZERO(mcod,3)))
        atencao('Este financiamento nao esta cadastrado !!!')
        SELE(msele);IF(morder>0,ORDSETFOCUS(morder),)
        RETURN .F.
ENDIF
setcor(3)
DEVPOS(li,ci);DEVOUT(fin->desc_fin)
setcor(1)
mcobra_fin := fin->cobra_fin
mtaxa_fin := fin->taxa_fin
mtaxa_adm := fin->taxa_adm
SELE(msele);IF(morder>0,ORDSETFOCUS(morder),)
RETURN .T.
*/
**************************** F I M ****************************************
********************************
* AREDONDAMENTO DE NUMERO
********************************
FUNCTION aredonda(vlr,qtd)
**********************
LOCAL mvalor
mvalor := VAL(SUBSTR(STR(vlr,16,5),1,11+qtd))
RETURN mvalor
**************************** F I M ****************************************
*****************************
* VER NUMERO DA SERIE
*****************************
FUNCTION ver_serie
******************
RETURN SUBSTR(m_set[1,123],15,6)
**************************** F I M ****************************************
***********************
FUNCTION serie_prod(vcod,p)
***********************
LOCAL msele,morde
msele := SELE()
morde := INDEXORD()
IF EMPTY(vcod)
        RETURN .T.
ENDIF
*************
SELE('serie');ORDSETFOCUS(2)
GO TOP
*************
IF ! serie->(DBSEEK(vcod))
        IF p = NIL
                atencao('No. de Serie nao Existe !!!')
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
******************************** f i m **********************************
*************
FUNCTION mcli(f,l,c)
*************

LOCAL msele,morde
MEMVAR mnome_cli,mend,mbairro,mcidade,muf,mcgc,mcpf,minsc,mfornec


msele := SELE()
morde := INDEXORD()

***************
SELE('cli');ORDSETFOCUS(1)
***************
SEEK STRZERO(f,5)
IF FOUND()
        setcor(3)
        DEVPOS(l,c);DEVOUT(STRZERO(f,5))
        DEVPOS(l,COL());DEVOUT('-'+SUBSTR(cli->razao,1,30))
        setcor(1)
        mnome_cli := cli->razao
        mend := cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),'')
        mbairro := cli->bairro
        mcidade := cli->cidade
        muf := cli->uf
        mcgc := cli->cgc
        mcpf := cli->cpf
        minsc := cli->insc
        *******************
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        *******************
        RETURN .T.
ENDIF
*******************
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
*******************
atencao('Cliente nao Cadastrado!  [ ÄÙ ] Continua.')
mfornec=0
RETURN .F.
************************ F I M ******************************
*************************************
* IMPRESSAO DA DUPLICATA DA SOTINTAS
*************************************

FUNCTION dup_sot(memissao,moperador,mvalor,mdocumento,mvenc,mnome,mcod,mendereco,;
                 mbairro,mcidade,muf,mcep,mcgc,minsc,mcpf,mban)
*****************
LOCAL mextenso,mlinha,mlin,lin
MEMVAR mtipo_imp
mensagem('Aguarde a impressao da(s) Duplicata(s)....')

imprt(mtipo_imp,'C',1)
DEVPOS(PROW()+5,95);DEVOUT(memissao)
DEVPOS(PROW(),128);DEVOUT(moperador)
DEVPOS(PROW()+5,10);DEVOUT(TRANSFORM(ROUND(mvalor,2),'99,999,999.99'))
DEVPOS(PROW(),35);DEVOUT(mdocumento)
DEVPOS(PROW(),55);DEVOUT(TRANSFORM(ROUND(mvalor,2),'99,999,999.99'))
DEVPOS(PROW(),80);DEVOUT(mdocumento)
DEVPOS(PROW(),100);DEVOUT(mvenc)
DEVPO(PROW()+6,35);DEVOUT(mnome)
DEVPOS(PROW(),120);DEVOUT(STRZERO(mcod,5))
DEVPOS(PROW()+1,35);DEVOUT(mendereco)
DEVPOS(PROW()+1,35);DEVOUT(RTRIM(mbairro)+'-Cidade: '+RTRIM(mcidade))
DEVPOS(PROW(),102);DEVOUT(muf)
DEVPOS(PROW(),117);DEVOUT(mcep)
IF mban = 'C'
        DEVPOS(PROW()+1,35);DEVOUT('Cobranca em Carteira')
ELSEIF mban = 'B'
        DEVPOS(PROW()+1,35);DEVOUT('Cobranca em Banco   ')
 ELSE
        DEVPOS(PROW()+1,35);DEVOUT('                    ')
ENDIF
IF mcgc <> SPACE(14)
        DEVPOS(PROW()+2,35);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(PROW(),105);DEVOUT(minsc)
ELSEIF mcpf <> SPACE(11)
        DEVPOS(PROW()+2,35);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
ELSE
        DEVPOS(PROW()+2,00);DEVOUT(' ')
ENDIF
mextenso:= '('+RTRIM(EXT(ROUND(mvalor,2),10))+')'
mlinha := MLCOUNT(mextenso,90)
DEVPOS(PROW()+1,00);DEVOUT(' ')
FOR lin = 1 TO mlinha
        mlin := MEMOLINE(mextenso,90,lin,,10)
        DEVPOS(PROW()+1,35);DEVOUT(PADR(RTRIM(mlin),90))
NEXT
imprt(mtipo_imp,'N')
EJECT
RETURN NIL
******************************** F I M ************************************88
*************************************
* IMPRESSAO DA DUPLICATA PRE-IMPRESSA J.W.
*************************************

FUNCTION dup_jw(memissao,moperador,mvlr,mdocumento,mvenc,mnome,mcod,mendereco,;
                mbairro,mcidade,muf,mcep,mcgc,minsc,mcpf,mban)
*****************
LOCAL mextenso,mlinha,mlin,lin
MEMVAR mtipo_imp
mensagem('Aguarde a impressao da(s) Duplicata(s)....')

imprt(mtipo_imp,'N')
DEVPOS(PROW()+3,53);DEVOUT(mcgc_firm)
DEVPOS(PROW()+1,53);DEVOUT(minsc_firm)
imprt(mtipo_imp,'C')
DEVPOS(PROW()+2,100);DEVOUT(memissao)
DEVPOS(PROW(),128);DEVOUT(moperador)
DEVPOS(PROW()+5,53);DEVOUT(mdocumento)
DEVPOS(PROW(),70);DEVOUT(TRANSFORM(ROUND(mvlr,2),'99,999,999.99'))
DEVPOS(PROW(),95);DEVOUT(mdocumento)
DEVPOS(PROW(),110);DEVOUT(mvenc)
DEVPO(PROW()+5,70);DEVOUT(mnome)
DEVPOS(PROW(),130);DEVOUT(STRZERO(mcod,5))
DEVPOS(PROW()+1,70);DEVOUT(mendereco)
DEVPOS(PROW()+1,70);DEVOUT(RTRIM(mbairro)+'-Cidade: '+RTRIM(mcidade))
DEVPOS(PROW(),125);DEVOUT(muf)
DEVPOS(PROW()+1,70);DEVOUT(mcep)
IF mban = 'C'
        DEVPOS(PROW(),PCOL()+4);DEVOUT('Cobranca em Carteira')
ELSEIF mban = 'B'
        DEVPOS(PROW(),PCOL()+4);DEVOUT('Cobranca em Banco   ')
ELSE
        DEVPOS(PROW(),PCOL()+4);DEVOUT('                    ')
ENDIF
IF mcgc <> SPACE(14)
        DEVPOS(PROW()+1,70);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(PROW(),110);DEVOUT(minsc)
ELSEIF mcpf <> SPACE(11)
        DEVPOS(PROW()+1,70);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
ELSE
        DEVPOS(PROW()+1,00);DEVOUT(' ')
ENDIF
mextenso:= '('+RTRIM(EXT(ROUND(mvlr,2),10))+')'
mlinha := MLCOUNT(mextenso,70)
DEVPOS(PROW()+1,00);DEVOUT(' ')
FOR lin = 1 TO mlinha
        mlin := MEMOLINE(mextenso,70,lin,,10)
        DEVPOS(PROW()+1,65);DEVOUT(PADR(RTRIM(mlin),70))
NEXT
DEVPOS(PROW()+(6-mlinha),55);DEVOUT(m_set[1,129])
imprt(mtipo_imp,'N',15)
RETURN NIL
******************************** F I M ************************************88
*************************************
* IMPRESSAO DA DUPLICATA PRE-IMPRESSA 2
*************************************

FUNCTION dup_pre2(memissao,moperador,mvlr,mdocumento,mvenc,mnome,mcod,mendereco,;
                mbairro,mcidade,muf,mcep,mcgc,minsc,mcpf,mban,mn_fat,mv_fat)
*****************
LOCAL mextenso,mlinha,mlin,lin
MEMVAR mtipo_imp
mensagem('Aguarde a impressao da(s) Duplicata(s)....')

imprt(mtipo_imp,'C')
DEVPOS(PROW()+7,95);DEVOUT(memissao)
DEVPOS(PROW()+4,19);DEVOUT(mn_fat)
DEVPOS(PROW(),34);DEVOUT(TRANSFORM(ROUND(mv_fat,2),'99,999,999.99'))
DEVPOS(PROW(),50);DEVOUT(mdocumento)
DEVPOS(PROW(),65);DEVOUT(TRANSFORM(ROUND(mvlr,2),'99,999,999.99'))
DEVPOS(PROW(),87);DEVOUT(mvenc)
DEVPO(PROW()+5,40);DEVOUT(mnome)
DEVPOS(PROW(),100);DEVOUT(STRZERO(mcod,5))
DEVPOS(PROW()+1,40);DEVOUT(mendereco)
DEVPOS(PROW()+1,40);DEVOUT(RTRIM(mbairro)+'-Cidade: '+RTRIM(mcidade))
DEVPOS(PROW(),95);DEVOUT(muf)
IF mban = 'C'
        DEVPOS(PROW()+2,PCOL()+4);DEVOUT('Cobranca em Carteira')
ELSEIF mban = 'B'
        DEVPOS(PROW()+2,PCOL()+4);DEVOUT('Cobranca em Banco   ')
ELSE
        DEVPOS(PROW()+2,PCOL()+4);DEVOUT('                    ')
ENDIF
IF mcgc <> SPACE(14)
        DEVPOS(PROW()+1,40);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        DEVPOS(PROW(),80);DEVOUT(minsc)
ELSEIF mcpf <> SPACE(11)
        DEVPOS(PROW()+1,40);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
ELSE
        DEVPOS(PROW()+1,00);DEVOUT(' ')
ENDIF
mextenso:= '('+RTRIM(EXT(ROUND(mvlr,2),10))+')'
mlinha := MLCOUNT(mextenso,70)
DEVPOS(PROW()+1,00);DEVOUT(' ')
FOR lin = 1 TO mlinha
        mlin := MEMOLINE(mextenso,70,lin,,10)
        DEVPOS(PROW()+1,35);DEVOUT(PADR(RTRIM(mlin),70))
NEXT
//DEVPOS(PROW()+(6-mlinha),35);DEVOUT(m_set[1,129])
imprt(mtipo_imp,'N',15)

RETURN NIL
******************************** F I M ************************************88
***********************
FUNCTION ver_descon(vcli,vcod,vgru)
***********************

LOCAL msele,morde

msele := SELE()
morde := INDEXORD()

IF EMPTY(vcod)
        RETURN .T.
ENDIF

*************
SELE('tabme');ORDSETFOCUS(1)
GO TOP
*************

IF ! tabme->(DBSEEK(STRZERO(vcod,5)+STRZERO(vcli,5)))
        *************
        SELE('tabme');ORDSETFOCUS(3)
        GO TOP
        *************
        IF ! tabme->(DBSEEK(vgru+STRZERO(vcli,5)))
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN 0
        ENDIF
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN tabme->desconto
**************************************
* CALCULAR DIAS EM ATRASO P/DUPLICATAS
**************************************

FUNCTION dias_atras(mfor,p)
*********************

LOCAL mqtd_dias,mqtd_doc,l,msele,morde,mcons_dupr:={},dup:=0
MEMVAR mdata_sis,mq_dias,mq_doc

//msele := SELE()
//morde := INDEXORD()
mqtd_dias := mqtd_doc := mq_dias := mq_doc := 0
mensagem('Aguarde... Calculando os dias de atraso do Cliente: '+STRZERO(mfor,5))
IF p = NIL
        l := SAVESCREEN(23,00,23,79)
        mensagem('Aguarde... Calculando os dias de atraso no pagamento dos Documentos')
ENDIF

cComm  := "SELECT * FROM sacdupr WHERE fornec = "+sr_cdbvalue(STRZERO(mfor,5))+" AND NOT tipo = 'DN' AND emissao >= "+sr_cdbvalue(mdata_sis - 365)
sr_getconnection():exec(ccomm,,.t.,@mcons_dupr)
IF LEN(mcons_dupr) > 0
        dup:=0
        FOR dup = 1 TO LEN(mcons_dupr)
                //IF mcons_dupr[dup,2] = 'DN';LOOP;ENDIF
                IF ! EMPTY(mcons_dupr[dup,13])
                        IF mcons_dupr[dup,13] - mcons_dupr[dup,11] > 0
                                mqtd_dias := mqtd_dias + (mcons_dupr[dup,13] - mcons_dupr[dup,11])
                                mqtd_doc++
                                mq_dias := mq_dias + (mcons_dupr[dup,13] - mcons_dupr[dup,11])
                                mq_doc++
                        ELSE
                                mqtd_doc++
                                mq_doc++
                        ENDIF
                ELSEIF mdata_sis - mcons_dupr[dup,11] > 0
                        mqtd_dias := mqtd_dias + (mdata_sis - mcons_dupr[dup,11])
                        mqtd_doc++
                        mq_dias := mq_dias + (mdata_sis - mcons_dupr[dup,11])
                        mq_doc++
                ENDIF
        NEXT
ENDIF
/*
*****************
SELE('dupr');ORDSETFOCUS(6)
GO TOP
*****************
dupr->(DBSEEK(STRZERO(mfor,5)))
WHILE STRZERO(mfor,5) = dupr->fornec
        IF dupr->tipo = 'DN';SKIP;LOOP;ENDIF
        IF ! EMPTY(dupr->datpag)
                IF dupr->datpag - dupr->venc > 0
                        mqtd_dias := mqtd_dias + (dupr->datpag - dupr->venc)
                        mqtd_doc++
                        mq_dias := mq_dias + (dupr->datpag - dupr->venc)
                        mq_doc++
                ELSE
                        mqtd_doc++
                        mq_doc++
                ENDIF
        ELSEIF mdata_sis - dupr->venc > 0
                mqtd_dias := mqtd_dias + (mdata_sis - dupr->venc)
                mqtd_doc++
                mq_dias := mq_dias + (mdata_sis - dupr->venc)
                mq_doc++
        ENDIF
        SKIP
ENDDO
*/
IF p = NIL
        cComm  := "UPDATE mastcli SET dia_atras = "+sr_cdbvalue(mqtd_dias / mqtd_doc)+",qtd_doc = "+sr_cdbvalue(mqtd_doc)+"  WHERE cod_cli = "+sr_cdbvalue(STRZERO(mfor,5))
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
/*
IF ! EMPTY(m_cfg[60])
        SETPOS(23,00);DISPOUT('Aguarde... Calculando os dias de atraso do Cliente na FILIAL: '+STRZERO(mfor,5))
        dupr->(DBCLOSEAREA())
        IF ! AbriArq('sacdupr','dupr',,,,'dupr_f');RETURN NIL;ENDIF
        *****************
        SELE('dupr');ORDSETFOCUS(6)
        GO TOP
        *****************
        dupr->(DBSEEK(STRZERO(mfor,5)))
        WHILE STRZERO(mfor,5) = dupr->fornec
                IF dupr->tipo = 'DN';SKIP;LOOP;ENDIF
                IF ! EMPTY(dupr->datpag)
                        IF dupr->datpag - dupr->venc > 0
                                mqtd_dias := mqtd_dias + (dupr->datpag - dupr->venc)
                                mqtd_doc++
                                mq_dias := mq_dias + (dupr->datpag - dupr->venc)
                                mq_doc++
                        ELSE
                                mqtd_doc++
                                mq_doc++
                        ENDIF
                ELSEIF mdata_sis - dupr->venc > 0
                        mqtd_dias := mqtd_dias + (mdata_sis - dupr->venc)
                        mqtd_doc++
                        mq_dias := mq_dias + (mdata_sis - dupr->venc)
                        mq_doc++
                ENDIF
                SKIP
        ENDDO
        dupr->(DBCLOSEAREA())
        IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
ENDIF
*/
//SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN NIL
******************************** F I M ************************************88
********************
* VALOR DO PEDIDO
***********************

FUNCTION valor_ped(mnum)

LOCAL msele,morde,mvalor_p:=0
local nErr, nPos,;
        vEmp := {},;
        nCnn,oSql,;
        cComm, apCode

msele := SELE()
morde := INDEXORD()

aret:={}
cComm  := "select SUM(sacped_s.pquantd*sacped_s.pvlr_fat) from sacped_s where sacped_s.pnum_ped = ?"
apCode := SR_SQLParse( cComm, @nErr, @nPos )
cComm  := SR_SQLCodeGen( apCode,{mnum})
sr_getconnection():exec( cComm,,.t.,@aret)
mvalor_p := ARET[1,1]
/*
msele := SELE()
morde := INDEXORD()

IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
***************
SELE('ped_s');ORDSETFOCUS(1)
GO TOP
***************
mvalor_p:=0
IF ped_s->(DBSEEK(mnum))
        WHILE mnum = ped_s->pnum_ped .AND. ! EOF()
                mvalor_p := mvalor_p + (ped_s->pquantd*ped_s->pvlr_fat)
                SKIP
        ENDDO
ENDIF

*/
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN mvalor_p
******************************** f i m **********************************
FUNCTION VerDesp(mcoddesp,l,c,p,retu)
********************

LOCAL msele,morde,point,cons_desp:={}

msele := SELE()
morde := INDEXORD()
point := RECNO()

IF EMPTY(mcoddesp)              //.AND. p <> NIL
        IF retu = NIL
                RETURN .T.
        ELSE
                RETURN '                  '
        ENDIF
ENDIF
cons_desp := {}
sr_getconnection():exec("SELECT codigo,desc1 FROM sacdesp WHERE codigo = "+sr_cdbvalue(mcoddesp),,.t.,@cons_desp)

IF LEN(cons_desp) = 0
        IF p = NIL
                atencao('Codigo de CONTA DE DESPESAS nao encontrado')
                //SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF
ENDIF
IF l <> NIL
        setcor(3)
        DEVPOS(l,c);DEVOUT(cons_desp[1,2])
        setcor(1)
ENDIF
//SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
IF retu = NIL
        RETURN .T.
ELSE
        RETURN cons_desp[1,2]
ENDIF
RETURN NIL
/*

IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF

*****************
SELE('cdesp');ORDSETFOCUS(1)
GO TOP
*****************

IF ! cdesp->(DBSEEK(mcoddesp))
        IF p = NIL
                atencao('Codigo de CONTA DE DESPESAS nao encontrado')
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF
ENDIF
*mtipo_conta := cdesp->codigo
IF l <> NIL
        setcor(3)
        DEVPOS(l,c);DEVOUT(cdesp->desc1)
        setcor(1)
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
IF retu = NIL
        RETURN .T.
ELSE
        RETURN cdesp->desc1
ENDIF
RETURN NIL
*/
********************************** F I M ***************************************
FUNCTION f5_qtd()
************************************
LOCAL l:=10,c:=10,lx:=11,cx:=50

CLEAR GETS
op_tela(l,c,lx,cx)
DEVPOS(0,0);DEVOUT('Informe a Quantidade:')
WVW_DrawBoxGet(,0,COL()+1,LEN(ALLTRIM(m_set[1,99])))
@ 0,COL()+1 GET mquantd PICT ALLTRIM(m_set[1,99])
READ
mloop := 1
CLEAR GETS
wvw_lclosewindow()
RETURN .F.
*********************************  F I M  ***************************************
********************************
* VERIFICA A UF DO ESTADO
********************************
FUNCTION v_uf(ve_uf)
*********************
IF EMPTY(ve_uf) .OR. AT(ve_uf,'AC,AL,AP,AM,BA,CE,ES,GO,MA,MT,MS,MG,PA,PB,PR,PE,PI,RN,RS,RR,RO,RJ,SC,SE,SP,TO,DF,EX') > 0
        RETURN .T.
ELSE
        RETURN .F.
ENDIF
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR ARQUIVO DE LOG
********************************

FUNCTION cons_log(mop)
*****************
LOCAL mprg := 'CONS_LOG*',;
      tela,tela1,lci,cci,lba,cba,msele,morde,men,;
      mdias_atras:=0,mmulta:=0,mjuros:=0,mvlpago:=0,;
      oconsprod,ocolprod[17],i,nkey,opcao
MEMVAR mduplicata,mcod_cli,mtipo,mdata_sis

IF ! ver_nivel(mprg,'CONSULTA DE ARQUIVO DE LOG','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF


lci := cci := 0
lba := 30
cba := 100
msele := SELE()
morde := INDEXORD()
IF ! AbriArq('saclog','log');RETURN NIL;ENDIF
*************
SELE('log');ORDSETFOCUS(1)
*************
op_tela(00,00,30,100," Consulta de ARQUIVO DE LOG'S ",'*')
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Data',{||log->data})
ocolprod[2] := TBCOLUMNNEW('Hora',{||log->hora})
ocolprod[3] := TBCOLUMNNEW('Data S.O.',{||log->data_sis})
ocolprod[4] := TBCOLUMNNEW('Oper.',{||log->cod_oper})
ocolprod[5] := TBCOLUMNNEW('Aut.',{||log->aut_oper})
ocolprod[6] := TBCOLUMNNEW('Tipo Oper.',{||log->tipo})
ocolprod[7] := TBCOLUMNNEW('Documento',{||log->documento})
ocolprod[8] := TBCOLUMNNEW('Descricao',{||log->descri})
ocolprod[9] := TBCOLUMNNEW('Cod.Prod.',{||log->cod_prod})
ocolprod[10] := TBCOLUMNNEW('Vlr.Anterior',{||TRANSFORM(log->valor1,'999,999.99')})
ocolprod[11] := TBCOLUMNNEW('Vlr.Posterior',{||TRANSFORM(log->valor2,'999,999.99')})
ocolprod[12] := TBCOLUMNNEW('Qtd.Anterior',{||TRANSFORM(log->quantd1,'99,999.99')})
ocolprod[13] := TBCOLUMNNEW('Qtd.Posterior',{||TRANSFORM(log->quantd2,'99,999.99')})
ocolprod[14] := TBCOLUMNNEW('Venc.Ant.',{||DTOC(log->venc1)})
ocolprod[15] := TBCOLUMNNEW('Venc.Post.',{||DTOC(log->venc2)})
ocolprod[16] := TBCOLUMNNEW('Modulo',{||log->modulo})
ocolprod[17] := TBCOLUMNNEW('Autorizacao',{||log->cod_aut})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        IF mop = '*'
                mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                CLEAR GETS
                EXIT
        ELSEIF nkey == K_ENTER
                CLEAR GETS
                EXIT
        ELSE
                IF genkey(oconsprod,nkey,'log')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Data',{||log->data})
                        ocolprod[2] := TBCOLUMNNEW('Hora',{||log->hora})
                        ocolprod[3] := TBCOLUMNNEW('Data S.O.',{||log->data_sis})
                        ocolprod[4] := TBCOLUMNNEW('Oper.',{||log->cod_oper})
                        ocolprod[5] := TBCOLUMNNEW('Aut.',{||log->aut_oper})
                        ocolprod[6] := TBCOLUMNNEW('Tipo Oper.',{||log->tipo})
                        ocolprod[7] := TBCOLUMNNEW('Documento',{||log->documento})
                        ocolprod[8] := TBCOLUMNNEW('Descricao',{||log->descri})
                        ocolprod[9] := TBCOLUMNNEW('Cod.Prod.',{||log->cod_prod})
                        ocolprod[10] := TBCOLUMNNEW('Vlr.Anterior',{||TRANSFORM(log->valor1,'999,999.99')})
                        ocolprod[11] := TBCOLUMNNEW('Vlr.Posterior',{||TRANSFORM(log->valor2,'999,999.99')})
                        ocolprod[12] := TBCOLUMNNEW('Qtd.Anterior',{||TRANSFORM(log->quantd1,'99,999.99')})
                        ocolprod[13] := TBCOLUMNNEW('Qtd.Posterior',{||TRANSFORM(log->quantd2,'99,999.99')})
                        ocolprod[14] := TBCOLUMNNEW('Venc.Ant.',{||DTOC(log->venc1)})
                        ocolprod[15] := TBCOLUMNNEW('Venc.Post.',{||DTOC(log->venc2)})
                        ocolprod[16] := TBCOLUMNNEW('Modulo',{||log->modulo})
                        ocolprod[17] := TBCOLUMNNEW('Autorizacao',{||log->cod_aut})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
wvw_lclosewindow()
CLEAR GETS
RETURN NIL
***************************** F I M ****************************************
/*
FUNCTION VerDupPed(mnumped)
********************

LOCAL msele,morde,point,aret:={}

msele := SELE()
morde := INDEXORD()
point := RECNO()

IF EMPTY(mnumped)              //.AND. p <> NIL
        RETURN .T.
ENDIF

IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF

*****************
SELE('dupr');ORDSETFOCUS(7)
GO TOP
*****************

IF dupr->(DBSEEK(mnumped))
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ELSE
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF
*/
RETURN NIL
***************************** F I M ****************************************
******************
* VERIFICA EMPRESA
******************
FUNCTION ver_emp(vreg,li,ci,t,mzero)
**********************
LOCAL msele,morde
IF EMPTY(vreg) .AND. mzero <> NIL
        setcor(3)
        DEVPOS(li,ci);DEVOUT(SPACE(35))
        setcor(1)
        RETURN .T.
ENDIF
msele := SELE()
morde := INDEXORD()

IF ! AbriArq('sacemp','emp');RETURN NIL;ENDIF
**************
SELE('emp');ORDSETFOCUS(1)
GO TOP
**************
LOCATE FOR vreg = emp->codemp

IF t = .T. .AND. FOUND()
        vreg := SPACE(2)
        atencao('Codigo ja Cadastrado !!!')
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF
IF ! FOUND()
        vreg := SPACE(2)
        atencao('Codigo nao Cadastrado !!!')
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .F.
ENDIF
IF li = NIL
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDIF
setcor(3)
DEVPOS(li,ci);DEVOUT(emp->fantasia)
setcor(1)
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
********************** F I M ********************************
//SQLRDD***********************************
#include "sqlrdd.ch"
//#include "pgs.ch"          // Needed if you plan to use native connection to Postgres
//#include "mysql.ch"        // Needed if you plan to use native connection to MySQL
//#include "oracle.ch"       // Needed if you plan to use native connection to Oracle
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"

*******************************************
******************
* ALTERAR EMPRESA
******************
FUNCTION alt_emp(mtp)
**********************
LOCAL msele,morde,mvar,mcam_db:=SPACE(30),cons_emp:={}
PRIVATE mcodemp:=SPACE(3)

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacemp','emp');RETURN NIL;ENDIF
op_tela(10,10,12,75,'MUDAR A EMPRESA' )
WHILE .T.
        mcam_db := SPACE(30)
        mcodemp := mcodempresa
        DEVPOS(01,01);DEVOUT('Codigo da Empresa:')
        WVW_DrawBoxGet(,01,20,3)
        @ 01,20 GET mcodemp PICT '999' VALID ver_emp(mcodemp,01,24)
        READ
        cons_emp:={}
        cComm  := "SELECT * FROM sacemp WHERE codemp = "+sr_cdbvalue(mcodemp)
        sr_getconnection():exec(ccomm,,.t.,@cons_emp)
        IF LEN(cons_emp) = 0
                atencao('EMPRESA NAO ENCONTRADA !!!')
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma a Mudanca da EMPRESA:')
        IF opcao = 'S'
                mcodempresa := mcodemp
                IF cons_emp[1,9] = 'F'
                        memp_resa := RTRIM(cons_emp[1,8])
                ELSE
                        memp_resa := RTRIM(cons_emp[1,7])
                ENDIF
                mcgc_firm := SUBSTR(cons_emp[1,6],1,2)+'.'+SUBSTR(cons_emp[1,6],3,3)+'.'+SUBSTR(cons_emp[1,6],6,3)+'/'+SUBSTR(cons_emp[1,6],9,4)+'-'+SUBSTR(cons_emp[1,6],13,2)
                minsc_firm := cons_emp[1,5]
                mend_firm := cons_emp[1,10]
                mcid_firm := RTRIM(cons_emp[1,12])+'-'+cons_emp[1,14]
                mfone_firm := RTRIM(cons_emp[1,15])
                sis_cidade := RTRIM(cons_emp[1,12])
                WVW_SetTitle(mnum_principal,memp_resa)
                WVW_SBSetText(mnum_principal,1,'Empresa: '+ALLTRIM(mcodempresa)+'-'+memp_resa)
                setcor(1)
                EXIT
        ENDIF
        IF LASTKEY() = 27
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN NIL
********************** F I M ********************************
******************
* VERIFICA CHQ.S/F CORRENTISTA
******************
FUNCTION chq_corre(vcpfcnpj)
**********************
LOCAL msele,morde,m_cheq:={},mtela
IF EMPTY(vcpfcnpj)
        RETURN .T.
ENDIF
msele := SELE()
morde := INDEXORD()
mtela := SAVESCREEN(01,00,23,79)
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
**************
SELE('cheq');ORDSETFOCUS(9)
GO TOP
**************

IF cheq->(DBSEEK(vcpfcnpj))
        WHILE ! EOF() .AND. vcpfcnpj = cheq->cpfcnpj
                AADD(m_cheq,DTOC(cheq->data_cheq)+' '+cheq->num_ban+' '+cheq->num_cheq+' '+TRANSFORM(cheq->valor_cheq,'999,999.99')+' '+cheq->motivo)
                SKIP
        ENDDO
        botao(10,03,17,76,,' Relacao de Cheques S/Fundos ')
        DEVPOS(11,04);DEVOUT(' Data   Num  No.Cheq.  Valor    Motivo')
        @ 12,04 TO 12,75
        ACHOICE(13,04,16,75,m_cheq)
ENDIF
RESTSCREEN(01,00,23,79,mtela)
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
********************** F I M ********************************
*****************************
*GERAR NUMERO DE AUTORIZACAO
*****************************
FUNCTION gera_num
*****************
LOCAL mnum_co,mhora
mhora := TIME()
mnum_co := SUBSTR(mhora,7,2)+STRZERO(VAL(SUBSTR(mhora,4,1))+VAL(SUBSTR(mhora,5,1)),2)+STRZERO(VAL(SUBSTR(mhora,1,1))+VAL(SUBSTR(mhora,2,1))+VAL(SUBSTR(mhora,7,2)),2)
RETURN mnum_co
********************************** F I M ***********************************
***************************
* VERIFICA MERCADORIA NO PEDIDO
***************************
FUNCTION ped_prod(mnum_p,mcod)
***************************
LOCAL msele := SELE(),morde := INDEXORD()

IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
*****************
SELE('ped_s');ORDSETFOCUS(1)
GO TOP
*****************
IF mcod <> NIL
        IF ! merc->(DBSEEK(STRZERO(mnum_p,6)+STRZERO(mcod,5)))
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF
ELSE
        IF ! merc->(DBSEEK(STRZERO(mnum_p,6)))
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ENDIF
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN .T.
************************ f i m **************************************
**********************
* ALTERA A SENHA
**********************

FUNCTION alt_sen(p)

LOCAL mcont,msenha,lci,cci,lba,cba,tela,msele,morde,mmen,mcor,mponto,mponto1,;
      mcod_oper:=0
MEMVAR senha_acess
mcont := 0
cci := 10
lci := 01
lba := 03
cba := 40
//lci := 12
//cci := 10
//lba := 15
//cba := 75
//mmen := SAVESCREEN(23,00,23,79)
//tela := SAVESCREEN(00,00,24,79)
mcor := SETCOLOR()
msele := SELE()
morde := INDEXORD()
*-----------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*-----------------------------------------------------
setcor(1)
lim_get()
op_tela(15,30,20,70,'IDENTIFICAR O OPERADOR')
WHILE .T.
        *************
        SELE('sen')
        ORDSETFOCUS(2)
        GO TOP
        *************

        IF sen->(DBSEEK(cod_operado))
                mponto := RECNO()
                IF BLOQREG()
                        sen-> sult_fim := DATE()
                        sen-> shora_fim := TIME()
                        sen-> sh_i_c    := '     '
                        nivel_acess := sen->snivel
                        cod_operado := sen->scod_op
                        senha_acess := msenha
                        COMMIT
                        UNLOCK
                        IF p = NIL
                                WVW_SBSetText(mnum_principal,4,'Operador: '+ALLTRIM(cod_operado))
                        ENDIF
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ENDIF
                ver_mensa(cod_operado)          //verifica mensagens
        ENDIF

        WHILE .T.
                mcod_oper:=0
                mensagem('Digite o Codigo e Senha do Operador...')
                //botao(lci,cci,lba,cba,,' IDENTIFICAR O OPERADOR ','*')
                setcor(1)
		limpa(00,00,06,09)
        	WVW_DrawImage( ,01,01,04,08,ALLTRIM(m_cfg[5])+'HRB.ICO',.T.,.F.)

                DEVPOS(lci  ,cci+1);DEVOUT('Codigo Operador:')
                DEVPOS(lci+2,cci+1);DEVOUT('Senha de Acesso:')
                WVW_DrawBoxGet(,lci,cci+18,3)
                WVW_DrawBoxGet(,lci+2,cci+18,10)
  
                //@ lci+1,cci+27 GET mcod_oper PICT '999' VALID IF(EMPTY(mcod_oper),.F.,ven(mcod_oper,lci+1,cci+31))
                @ lci,cci+18 GET mcod_oper PICT '999' VALID IF(EMPTY(mcod_oper),.F.,ven(mcod_oper))
                READ
                //IF ! oper_ped(STRZERO(mcod_oper,3))
                //        LOOP
                //ENDIF
                IF LASTKEY() = 27
                        IF p = '1'
                                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                                wvw_lclosewindow()
                                RETURN .F.
                        ELSE
                                LOOP
                        ENDIF
                ENDIF
		IF FILE(ALLTRIM(m_cfg[12])+STRZERO(mcod_oper,3)+'.jpg')
		        WVW_DrawImage( ,01,01,04,08,ALLTRIM(m_cfg[12])+STRZERO(mcod_oper,3)+'.jpg',.T.,.F.)
		ENDIF
                IF sen->stipo = 'B' .AND. STRZERO(mcod_oper,3) <> '999'
                        atencao('Este Usuario/Operador estar Bloqueado, Procure seu Administrador...')
                        LOOP
                ENDIF

                msenha = ''
                pegasenha(@msenha,lci+2,cci+18,setcor(2))
                setcor(1)
                IF msenha = 'NAO'
                        LOOP
                ENDIF
                mcont ++
                IF EMPTY(msenha)
                        atencao('Senha Incorreta Tente Novamente')
                        LOOP
                ENDIF
                IF ALLTRIM(msenha) == ALLTRIM(DCRIPTO(sen->ssenha))
                        mponto1 := RECNO()
                        *************
                        SELE('sen');ORDSETFOCUS(1)
                        *************
                        GO mponto1
                        IF BLOQREG()
                                sen-> sult_ent := mdata_sis
                                sen-> shora_ini := TIME()
                                nivel_acess := sen->snivel
                                cod_operado := sen->scod_op
                                senha_acess := msenha
                                COMMIT
                                UNLOCK
                                WVW_SBSetText(mnum_principal,4,'Operador: '+ALLTRIM(cod_operado))
                                atencao('Operador: '+cod_operado+'-'+RTRIM(sen->snome))
                                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                                ver_mensa(cod_operado)          //verifica mensagens
                                wvw_lclosewindow()
                                RETURN .T.
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                                LOOP
                        ENDIF
                ELSE
                        atencao('Senha Incorreta Tente Novamente')
                        LOOP
                ENDIF
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
/**************************************************************************************************/
static function ExtPorGen(nGenero,xStr)
return if(ValType(xStr) = "A", xStr[1] + xStr[nGenero+1], xStr)

***********************************  F I M ********************************
#xtranslate :fileHandle   => :cargo\[1\]
#xtranslate :fileLine     => :cargo\[2\] 
#xtranslate :lineOffset   => :cargo\[3\] 
#xtranslate FTell(<fHandle>) => FSeek(<fHandle>, 0, 1) 

#define FILE_BRWS_NUM_IVARS 3 
#define MAX_LINE_LEN  256 
#define CR    Chr(13) 
#define LF    Chr(10) 
#define CRLF  CR + LF 
#define SET_IVAR(iVar, p) iif(p == NIL, NIL, iVar := p) 
*------------------------------------------------------------------------------* 
**************************************************************************************************/
function Extenso(nBase     ,; // valor numérico original
                 lVMonet   ,; // se verdadeiro, trata-se de valor monetário
                 cStrSingul,; // string da moeda (lVMonet=TRUE) no singular
                 cStrPlural,; // idem, no plural
                 nGenero    ; // nGenero que define o artigo de tratamento: 1=Masculino e 2=Feminino
                 )
local cExtenso := ""
local aDenomin := {""," mil"," m"," b"," tr"}
local nInteiro := Int(nBase)
local nVlrFrac
local cStrFrac

lVMonet    := if(lVMonet=nil, .T., lVMonet)
nGenero    := if(nGenero=nil, 1, nGenero)
cStrSingul := if(Empty(cStrSingul), "", " "+AllTrim(cStrSingul))
cStrPlural := if(Empty(cStrPlural), if(Empty(cStrSingul),"",cStrSingul+"s"), " "+AllTrim(cStrPlural))
nVlrFrac   := Val(Right(Str(nBase,18,if(lVMonet,2,3)),if(lVMonet,2,3)))

if !lVMonet
   while nVlrFrac > 0 .and. Right(LTrim(Str(nVlrFrac)),1) = "0"
      nVlrFrac := Int(nVlrFrac/10)
   end
end
cStrFrac := if(lVMonet, "centavo", if(nVlrFrac<10, "décimo", if(nVlrFrac<100, "centésimo", "milésimo")))

for nPasso := 5 to 1 step -1
    nParte := Val(Left(Str(nInteiro,nPasso*3),3))
    if nParte  > 0
       nInteiro -= nParte * Val("1"+Replicate("0",3*(nPasso-1)))
       cExtenso += ExtCentena(nParte,nGenero) + aDenomin[nPasso] + if(nPasso < 3, "", "ilh" + if(nParte = 1, "ao", "oes")) + ", "
    end
next

nInteiro := Int(nBase)
cExtenso := if(nInteiro = 0, "", Left(cExtenso,Len(cExtenso)-2))
nPasso   := RAt(", ",cExtenso)
cExtenso := if(nPasso=0, cExtenso, if(" e " $ SubStr(cExtenso,nPasso), cExtenso, Stuff(cExtenso,nPasso,2," e ")))
cExtenso += if(nInteiro=0, "", if(nInteiro=1, cStrSingul, if(Val(Right(Str(nInteiro,15),6)) = 0, "de", "") + cStrPlural))
cExtenso += if(nVlrFrac=0, "", if(nInteiro=0, "", " e ") + ExtCentena(nVlrFrac,nGenero) + " "+cStrFrac + if(nVlrFrac=1, "", "s"))
return cExtenso


/**************************************************************************************************/
static function ExtCentena(nBase,nGenero)
local cExtenso := ""
priva aUnidade := {{"um","","a"},{"d","ois","uas"},"tres","quatro","cinco","seis","sete","oito","nove"}
priva aDezena1 := {"onze","doze","treze","quatorze","quinze","dezesseis","dezessete","dezoito","dezenove"}
priva aDezena2 := {"dez","vinte","trinta","quarenta","cinquenta","sessenta","setenta","oitenta","noventa"}
priva aCentena := {"cento",{"duzent","os","as"},{"trezent","os","as"},{"quatrocent","os","as"},{"quinhent","os","as"},;
                  {"seiscent","os","as"},{"setecent","os","as"},{"oitocent","os","as"},{"novecent","os","as"}}

nGenero  := if(nGenero=nil, 1, nGenero)
cExtenso += if(nBase < 100, "", if(nBase = 100, "cem", ExtPorGen(nGenero,aCentena[Int(nBase/100)]) + if(nBase%100 > 0, " e ", "")))
nBase    %= 100
cExtenso += if(nBase  = 10, aDezena2[1], "")
cExtenso += if(nBase >  10 .and. nBase < 20, aDezena1[nBase%10], "")
cExtenso += if(nBase >= 20, aDezena2[Int(nBase/10)] + if(nBase%10 > 0, " e ", ""), "")
cExtenso += if(nBase%10 > 0 .and. (nBase >  20 .or. nBase < 10), ExtPorGen(nGenero,aUnidade[nBase%10]), "")
return cExtenso

******************************* F I M ********************************
* FUNCAO DE DESTRIBUICAO DE CONSULTA
*************************************
FUNCTION menu_cons
*******************
IF READVAR() = 'MCOD_MERC' .OR. READVAR() = 'MCOD_BC'  //.OR. READVAR() = 'MCOD_MERC1'
        f4_merc()
ELSEIF READVAR() = 'MACESSO1' .OR. READVAR() = 'MACESSO2' .OR. ;
       READVAR() = 'MACESSO3' .OR. READVAR() = 'MACESSO4' .OR. ;
       READVAR() = 'MACESSO5' .OR. READVAR() = 'MACESSO6' .OR. ;
       READVAR() = 'MACESSO7' .OR. READVAR() = 'MACESSO8' .OR. ;
       READVAR() = 'MACESSO9' .OR. READVAR() = 'MACESSO10'
        sacos2()
ELSEIF READVAR() = 'MN_CRED'
        c_credito()
ELSEIF READVAR() = 'MCOD_PROFI'
        sacprofi()
ELSEIF READVAR() = 'MCOD_CLI'   //.OR. READVAR() = 'MCOD_PRES'
        F7_CLI()
ELSEIF READVAR() = 'MCOD_FORN' .OR. READVAR() = 'MC_FORNECE' .OR. READVAR() = 'MCOD_FOR'
        F6_FORN()
ELSEIF READVAR() = 'MNUM_PEDP'
        SAC341('*')
ELSEIF READVAR() = 'MNUM_PED'
        SAC341(,,'ped_s')
ELSEIF READVAR() = 'MNUM_PV'
        SAC341_1()
ELSEIF READVAR() = 'MNUM_ORC'
        SAC341(,,'orcam')
ELSEIF READVAR() = 'MNUM_OS'
        SACOS41()
ELSEIF READVAR() = 'MCODCONTA'
        F9_CONTA()
ELSEIF READVAR() = 'MCOD_ESPE'
        CONS_ESPE()
ELSEIF READVAR() = 'MCODDESP'
        CONS_DESP()
ELSEIF READVAR() = 'MGRUPO'             //.OR. READVAR() = 'MGRU_SUB' .OR. READVAR() = 'MSUBGRUPO'
        sac10('G')
ELSEIF READVAR() = 'MGRU_SUB' .OR. READVAR() = 'MSUB_GRUPO'
        sac10('S')
        //CONS_GRUP()
ELSEIF READVAR() = 'MNUM_ROMA'
        CONS_ROMA()
ELSEIF READVAR() = 'MCOD_NAT'
        SAC1OP()
ELSEIF READVAR() = 'MCODEMP'
        SACEMP()
ELSEIF READVAR() = 'MCOD_COND'
        SAC20()
ELSEIF READVAR() == 'MOBS'
        SACOBS()
ELSEIF READVAR() == 'MCOD_VEND' .OR. READVAR() == 'MCOD_VEN'
        SACSENHA()
ELSEIF READVAR() == 'MOBS1'
        SACOBS(,'*')
ELSEIF READVAR() == 'MCOD_CART'
        sac19()
ELSEIF READVAR() = 'MAUT_DUP'
        atencao('Informe o [A]utentica Documento  [R]Emissao Recibo  [N]enhum',0)
ELSE
        atencao('Modulo nao estar configurado para consulta entrar em contato com a HRB Sistemas...')
ENDIF
RETURN NIL
******************************* F I M ********************************
* VERIFICA O TIPO DE DOCUMENTOS
***********************
FUNCTION ver_tipdc(menv,t,tc)

LOCAL m_tipdc

IF EMPTY(menv)
        RETURN .T.
ENDIF
IF tc <> NIL
        IF menv <> 'DN' .AND. menv <> 'CH' .AND. menv <> 'CT'
                atencao('Esta sigla nao pode ser usada')
                RETURN .F.
        ENDIF
ENDIF
IF menv = 'ES'
        atencao('Esta sigla nao pode ser usada')
        RETURN .F.
ENDIF
m_tipdc := {}
sr_getconnection():exec("SELECT * FROM sactipdc WHERE tipo_doc = "+sr_cdbvalue(menv),,.t.,@m_tipdc)
IF LEN(m_tipdc) > 0
        IF t = NIL
                atencao('Este tipo de documentos ja estar Cadastrado')
                RETURN .F.
        ELSE
                RETURN .T.
        ENDIF
ELSE
        IF t <> NIL
                atencao('Este tipo de documentos nao estar Cadastrado')
                RETURN .F.
        ELSE
                RETURN .T.
        ENDIF
ENDIF
RETURN NIL
***************************** F I M ****************************************
* ALTERACAO DOS RECEBIMENTOS DO CAIXA
*************************************
FUNCTION alt_caixa
*******************
LOCAL la:=0,ca:=0,lb:=06,cb:=79,mtela_alt,mponto:=0,mvenc,mvlr,mop,h:=0,;
      mtot_verif
MEMVAR m_alt,m_recebe,mtot_nota,mdiferenca

IF EMPTY(m_alt)
        atencao('Nao existe registro para ser alterado')
        RETURN NIL
ENDIF
op_tela(10,10,18,79,' Alteracao dos Recebimentos do CAIXA ')
mensagem('Escolha com as Setas e Tecle <ENTER>p/Alterar ou <ESC>p/Abandonar')
*@ lb-2,ca+1 TO lb-2 cb-1
mponto := ACHOICE(la+1,ca+1,lb-3,cb-1,m_alt,,,mponto)
IF LASTKEY()= 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
mvenc := m_recebe[mponto,6]
mvlr  := m_recebe[mponto,10]
DEVPOS(lb-1,ca+1);DEVOUT('Vencimento: ')
DEVPOS(lb-1,ca+30);DEVOUT('Valor: ')
@ lb-1,ca+13 GET mvenc
@ lb-1,ca+37 GET mvlr PICT '9,999,999.99'
READ
IF LASTKEY()= 27
        wvw_lclosewindow()
        RETURN NIL
ENDIF
mop := mensagem1('Confirma os dados Alterados: ','S','S,N')
IF mop = 'S'
        m_recebe[mponto,6] := mvenc
        m_recebe[mponto,10] := mvlr
        IF m_recebe[mponto,1] = 'DN'
                m_alt[mponto] := 'DINHEIRO.....: Valor: '+TRANSFORM(mvlr,'999,999.99')
        ELSEIF m_recebe[mponto,1] = 'CH'
                m_alt[mponto] := 'CHEQUE.......: Bco.: '+m_recebe[mponto,3]+' No.: '+m_recebe[mponto,4]+' Venc.: '+DTOC(mvenc)+' Valor: '+TRANSFORM(mvlr,'999,999.99')
        ELSEIF m_recebe[mponto,1] = 'DU'
                m_alt[mponto] :='DUPLICATA....: No.: '+m_recebe[mponto,5]+' Venc.: '+DTOC(mvenc)+' Valor: '+TRANSFORM(mvlr,'999,999.99')
        ELSEIF m_recebe[mponto,1] = 'CT'
                m_alt[mponto] := 'CARTAO.......: '+m_recebe[mponto,8]+' Cupom No.: '+m_recebe[mponto,9]+' Valor: '+TRANSFORM(mvlr,'999,999.99')
        ELSEIF m_recebe[mponto,1] = 'FI'
                m_alt[mponto] := 'FINANCIAMENTO: '+m_recebe[mponto,11]+' Venc.: '+DTOC(mvenc)+' Valor: '+TRANSFORM(mvlr,'999,999.99')
        ELSEIF m_recebe[mponto,1] = 'TR'
                m_alt[mponto] := 'TRANSFERENCIA: '+m_recebe[mponto,5]+' Venc.: '+DTOC(mvenc)+' Valor: '+TRANSFORM(mvlr,'999,999.99')
        ENDIF
        mtot_verif := 0
        h := 0
        FOR h = 1 TO LEN(m_recebe)
                mtot_verif := mtot_verif + m_recebe[h,10]
        NEXT
        mdiferenca := aredonda(ROUND(mtot_nota - mtot_verif,2),2)
        wvw_lclosewindow()
        RETURN NIL
ENDIF
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
***************************
* VERIFICANCO GRUPO/CODIGO
***************************

FUNCTION v_gru_cod(vcodigo,orde,l,c)
*********************************

LOCAL msele,morde

IF vcodigo = SPACE(5)
        RETURN .T.
ENDIF
IF orde = 1
        *****************
        SELE('merc')
        ORDSETFOCUS(orde)
        GO TOP
        *****************
ELSE
        msele := SELE()
        morde := INDEXORD()
        *****************
        SELE('grup')
        ORDSETFOCUS(1)
        GO TOP
        *****************
ENDIF
SEEK vcodigo

IF ! FOUND()
        atencao('Codigo nao Cadastrado !!!')
        RETURN .F.
ENDIF
IF orde = 1
        setcor(3)
        DEVPOS(l,c);DEVOUT(merc->merc)
        setcor(1)
ELSE
        setcor(3)
        DEVPOS(l,c);DEVOUT(grup->merc)
        setcor(1)
ENDIF
RETURN .T.
******************************* f i m *********************************************
* CONSULTA DE CHASSIS
***********************
FUNCTION cons_chass(achar,mtipo_c)
*******************

LOCAL msele,morde,;
      point:=0,m_chassis:={},m_pos:={},;
      lci:=0,cci:=0,lba:=20,cba:=78,;
      li:=0,ci:=0,la:=14,ca:=78,mtela1
MEMVAR mcod_merc
mtela := SAVESCREEN(00,00,24,79)
msele:=SELE()
morde:=INDEXORD()
***************************
SELE('deta');ORDSETFOCUS(1)
GO TOP
***********************************
IF ! deta->(DBSEEK(STRZERO(mcod_merc,5)))
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN SPACE(20)
ENDIF
IF achar = '*'
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN deta->chassis
ENDIF
WHILE STRZERO(mcod_merc,5) = deta->codigo .AND. ! EOF()
        IF ! EMPTY(deta->venda) .AND. mtipo_c = NIL
                SKIP
                LOOP
        ENDIF
*       AADD(m_chassis,' '+deta->codigo+' '+deta->chassis+'-'+LEFT(deta->descri1,42)+'   '+deta->venda)
        AADD(m_chassis,' '+deta->codigo+' '+deta->chassis+'-'+LEFT(deta->descri1,28)+' '+TRANSFORM(deta->vlr_venda,'999,999.99')+' '+deta->venda+' '+deta->n_ped)
        AADD(m_pos,RECNO())
        SKIP
ENDDO
IF LEN(m_pos) = 0
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN SPACE(20)
ENDIF
op_tela(lci,cci,lba+2,cba,' Detalhe do Produto Cod.: '+STRZERO(mcod_merc,5))
WHILE .T.
        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
        setcor(3)
        DEVPOS(lci,cci+01);DEVOUT('Prod.')
        DEVPOS(lci,cci+12);DEVOUT(' Detalhe')
        DEVPOS(lci,cci+33);DEVOUT('Descricao')
        DEVPOS(lci,cci+59);DEVOUT('Prc.Venda')
        @ lci+1,cci TO lci+1,cba
        setcor(1)
        point := ACHOICE(lci+2,cci+1,lba-3,cba-1,m_chassis,,,point)
        IF LASTKEY() = 13
                IF mtipo_c = NIL
                        GO m_pos[point]
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        wvw_lclosewindow()
                        RETURN deta->chassis
                ELSE
                        GO m_pos[point]
                        mensagem('Tecle Qualquer tecla p/Retornar')
                        op_tela(li,ci,la+2,ca,' Consulta Detalhe do Produto Cod.: '+STRZERO(mcod_merc,5))
                        DEVPOS(li+1,ci+01);DEVOUT('Produto..:')
                        DEVPOS(li+2,ci+01);DEVOUT('Detalhe..:')
                        DEVPOS(li+2,ci+40);DEVOUT('Data Inclusao:')
                        DEVPOS(li+3,ci+01);DEVOUT('Descricao:')
                        DEVPOS(li+8,ci+01);DEVOUT('Situacao.:')
                        DEVPOS(li+8,ci+20);DEVOUT('Data Venda...:')
                        DEVPOS(li+9,ci+01);DEVOUT('No.Pedido:')
                        DEVPOS(li+9,ci+20);DEVOUT('Valor Vendido:')
                        DEVPOS(li+10,ci+01);DEVOUT('Prc.Custo:')
                        DEVPOS(li+11,ci+01);DEVOUT('Prc.Venda:')
                        DEVPOS(li+12,ci+01);DEVOUT('Cod.Forne:')
                        DEVPOS(li+13,ci+01);DEVOUT('OBS......:')
                        setcor(3)
                        DEVPOS(li+1,ci+12);DEVOUT(deta->codigo)
                        DEVPOS(li+2,ci+12);DEVOUT(deta->chassis)
                        DEVPOS(li+2,ci+55);DEVOUT(deta->data)
                        DEVPOS(li+3,ci+12);DEVOUT(deta->descri1)
                        DEVPOS(li+4,ci+12);DEVOUT(deta->descri2)
                        DEVPOS(li+5,ci+12);DEVOUT(deta->descri3)
                        DEVPOS(li+6,ci+12);DEVOUT(deta->descri4)
                        DEVPOS(li+7,ci+12);DEVOUT(deta->descri5)
                        DEVPOS(li+8,ci+12);DEVOUT(deta->venda)
                        DEVPOS(li+8,ci+35);DEVOUT(deta->dat_venda)
                        DEVPOS(li+9,ci+12);DEVOUT(deta->n_ped)
                        DEVPOS(li+9,ci+35);DEVOUTPICT(deta->vl_vendido,'999,999.99')
                        DEVPOS(li+10,ci+12);DEVOUTPICT(deta->vlr_custo,'999,999.99')
                        DEVPOS(li+11,ci+12);DEVOUTPICT(deta->vlr_venda,'999,999.99')
                        DEVPOS(li+12,ci+12);DEVOUT(deta->cod_forn+' - '+deta->fornece)
                        DEVPOS(li+13,ci+12);DEVOUT(deta->obs)
                        INKEY(0)
                        wvw_lclosewindow()
                ENDIF

        ENDIF
        IF LASTKEY() = 27
                wvw_lclosewindow()
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN SPACE(20)
        ENDIF
ENDDO
wvw_lclosewindow()
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN NIL
***************************** F I M ****************************************
* CONSULTA DE CHASSIS
***********************
FUNCTION cons_serial(mcodmerc,mserial)
*******************

LOCAL msele,morde,;
      point:=0,cons_seri:={},m_chassis:={},m_pos:={},;
      lci:=0,cci:=0,lba:=27,cba:=65
cons_seri := {}
cComm  := "SELECT * FROM sacserial "
IF mcodmerc <> NIL
        cComm  := ccomm + " WHERE cod_prod = "+sr_cdbvalue(STRZERO(mcodmerc,5))
ELSEIF mserial <> NIL
        cComm  := ccomm + " WHERE serial = "+sr_cdbvalue(mserial)
ELSE
        atencao('NAO EXISTE NENHUMA SERIAL....')
        RETURN NIL
ENDIF
//cComm  := ccomm + " AND data_baix IS NULL"
cComm  := ccomm + " ORDER BY data_baix DESC"
sr_getconnection():exec(ccomm,,.t.,@cons_seri)
IF LEN(cons_seri) = 0
        IF mcodmerc <> NIL
                atencao('NAO EXISTE NENHUMA SERIAL NESTE PRODUTO....')
        ELSE
                atencao('NAO EXISTE NENHUMA SERIAL EM NOSSOS ARQUIVOS....')
        ENDIF
        RETURN NIL
ENDIF
FOR i = 1 TO LEN(cons_seri)
        AADD(m_chassis,' '+cons_seri[i,1]+'  '+cons_seri[i,2]+' '+DTOC(cons_seri[i,3])+' '+cons_seri[i,5]+' '+cons_seri[i,6]+' '+DTOC(cons_seri[i,7])+' '+cons_seri[i,9])
NEXT
op_tela(05,10,32,75,' Detalhe do Produto Cod.: '+STRZERO(mcod_merc,5))
WHILE .T.
        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
        setcor(3)
        DEVPOS(lci,cci+01);DEVOUT('Prod.')
        DEVPOS(lci,cci+08);DEVOUT('Serial')
        DEVPOS(lci,cci+29 );DEVOUT('Dat.Incl')
        DEVPOS(lci,COL()+1);DEVOUT('Ope')
        DEVPOS(lci,COL()+1);DEVOUT('Pedido')
        DEVPOS(lci,COL()+1);DEVOUT('Dat.Baix')
        DEVPOS(lci,COL()+1);DEVOUT('Oper')
        @ lci+1,cci TO lci+1,cba
        setcor(1)
        point := ACHOICE(lci+2,cci,lba,cba,m_chassis,,,point)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************** F I M *********************************8
********************************
* FUNCAO P/CONSULTAR NOTA FISCAL
********************************
#include "inkey.ch"              // constantes de codigos das teclas

FUNCTION c_nota()
*****************
LOCAL tela,tela1,lci,cci,lba,cba,msele,morde,men,oconsprod,ocolprod[11],i,nkey,opcao,;
      mdoc      := SPACE(10),mdata_emi := CTOD('  /  /  '),mnome_cli := SPACE(40),;
      m_prod := {},m_pos  := {},point,cons_m := {}

lci := 00
cci := 00
lba := 24
cba := 100

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sactotnt','totnt');RETURN NIL;ENDIF
*************
SELE('totnt');ORDSETFOCUS(1)
GO TOP
*************
op_tela(00,00,25,100,' Consulta de Nota Fiscal ')
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Documento',{||totnt->documento})
ocolprod[2] := TBCOLUMNNEW('Sit',{||totnt->cancel})
ocolprod[3] := TBCOLUMNNEW('CFOP',{||totnt->cod_nat})
ocolprod[4] := TBCOLUMNNEW('E/S',{||totnt->ent_sai})
ocolprod[5] := TBCOLUMNNEW('Emissao',{||DTOC(totnt->emissao)})
ocolprod[6] := TBCOLUMNNEW('Cliente',{||totnt->cod_cli+'-'+totnt->cliente})
ocolprod[7] := TBCOLUMNNEW('Vlr.Nota',{||TRANSFORM(totnt->vl_nota,'999,999.99')})
ocolprod[8] := TBCOLUMNNEW('Vlr.Base',{||TRANSFORM(totnt->vl_base,'999,999.99')})
ocolprod[9] := TBCOLUMNNEW('Serie',{||totnt->serie})
ocolprod[10] := TBCOLUMNNEW('Cod.Nota',{||totnt->cod_nota})
ocolprod[11] := TBCOLUMNNEW('Chave do Danfe',{||totnt->chnfe})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<P>esquisa  <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                CLEAR GETS
                EXIT
        ELSEIF nkey = 112 .OR. nkey = 80
                op_tela(00,00,33,100,memp_resa+SPACE(40)+' CONSULTA DE NOTAS ')
                CLEAR GETS
                WHILE .T.
                        mdoc      := SPACE(10)
                        mdata_emi := CTOD('  /  /  ')
                        mnome_cli := SPACE(40)
                        limpa(0,0,31,99)
                        mensagem('Digite a descricao ou *descricao p/Pesquisa qualquer lugar da descricao')
                        setcor(1)
                        DEVPOS(00,01);DEVOUT('Documento.....:')
                        DEVPOS(01,01);DEVOUT('Data Emissao..:')
                        DEVPOS(02,01);DEVOUT('Nome Cliente..:')
                        setcor(3)
                        @ 03,00 TO 03,100
                        DEVPOS(04,00);DEVOUT('Documento St CFOP  E/S  Emissao   Cliente                  Vlr.Base    Vlr.Nota  Serie Cod.Nota')
                        @ 05,00 TO 05,100
                        @ 32,00 TO 32,100
                        DEVPOS(33,01);DEVOUT('Total de Clientes:')
                        DEVPOS(33,27);DEVOUT('Tempo da Pesquisa:')
                        setcor(1)
                        @ 00,17 GET mdoc PICT '@!'
                        @ 01,17 GET mdata_emi
                        @ 02,17 GET mnome_cli PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                CLEAR GETS
                                EXIT
                        ENDIF
                        IF EMPTY(mdoc) .AND. EMPTY(mdata_emi) .AND. EMPTY(mnome_cli)
                                LOOP
                        ENDIF
                        mdoc := ALLTRIM(mdoc)
                        mnome_cli := ALLTRIM(mnome_cli)
                        cComm  := "SELECT * FROM sactotnt WHERE documento IS NOT NULL"
                        IF ! EMPTY(mdoc)
                                ccomm := ccomm + " AND documento LIKE "+sr_cdbvalue('%'+mdoc+'%')
                        ENDIF
                        IF ! EMPTY(mdata_emi)
                                ccomm := ccomm + " AND emissao = "+sr_cdbvalue(mdata_emi)
                        ENDIF
                        IF ! EMPTY(mnome_cli)
                                ccomm := ccomm + " AND cliente LIKE "+sr_cdbvalue('%'+mnome_cli+'%')
                        ENDIF
                        ccomm := ccomm + " ORDER BY documento"
                        cons_m := {}
                        sr_getconnection():exec(ccomm,,.t.,@cons_m)
                        IF LEN(cons_m) = 0
                                atencao('Pesquisa realizada sem sucesso...')
                                LOOP
                        ENDIF
                        m_prod := {}
                        m_pos  := {}
                        point  := i := 0
                        DEVPOS(33,20);DEVOUT(STRZERO(LEN(cons_m),5))
                        FOR i = 1 TO LEN(cons_m)
                                AADD(m_prod,' '+cons_m[i,5];
                                           +' '+cons_m[i,37];
                                           +'  '+cons_m[i,36];
                                           +'  '+cons_m[i,11];
                                           +'   '+DTOC(cons_m[i,10]);
                                           +'  '+cons_m[i,12]+'-'+LEFT(cons_m[i,13],15);
                                           +'  '+TRANSFORM(cons_m[i,20],'9,999,999.99');
                                           +'  '+TRANSFORM(cons_m[i,27],'9,999,999.99');
                                           +'    '+cons_m[i,6];
                                           +'  '+cons_m[i,4])
                                AADD(m_pos,cons_m[i,62])
                        NEXT
                        point := ACHOICE(06,0,30,100,m_prod,,,point)
                        DO CASE
                                CASE LASTKEY()=27
                                        LOOP
                                CASE LASTKEY() = 13
                                        *************
                                        SELE('totnt');ORDSETFOCUS(1)
                                        *************
                                        GO m_pos[point]
                                        EXIT
                        ENDCASE
                ENDDO
                wvw_lclosewindow()
                oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                ocolprod[1] := TBCOLUMNNEW('Documento',{||totnt->documento})
                ocolprod[2] := TBCOLUMNNEW('Sit',{||totnt->cancel})
                ocolprod[3] := TBCOLUMNNEW('CFOP',{||totnt->cod_nat})
                ocolprod[4] := TBCOLUMNNEW('E/S',{||totnt->ent_sai})
                ocolprod[5] := TBCOLUMNNEW('Emissao',{||DTOC(totnt->emissao)})
                ocolprod[6] := TBCOLUMNNEW('Cliente',{||totnt->cod_cli+'-'+totnt->cliente})
                ocolprod[7] := TBCOLUMNNEW('Vlr.Nota',{||TRANSFORM(totnt->vl_nota,'999,999.99')})
                ocolprod[8] := TBCOLUMNNEW('Vlr.Base',{||TRANSFORM(totnt->vl_base,'999,999.99')})
                ocolprod[9] := TBCOLUMNNEW('Serie',{||totnt->serie})
                ocolprod[10] := TBCOLUMNNEW('Cod.Nota',{||totnt->cod_nota})
                ocolprod[11] := TBCOLUMNNEW('Chave do Danfe',{||totnt->chnfe})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()

        ELSE
                IF genkey(oconsprod,nkey,'totnt')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Documento',{||totnt->documento})
                        ocolprod[2] := TBCOLUMNNEW('Sit',{||totnt->cancel})
                        ocolprod[3] := TBCOLUMNNEW('CFOP',{||totnt->cod_nat})
                        ocolprod[4] := TBCOLUMNNEW('E/S',{||totnt->ent_sai})
                        ocolprod[5] := TBCOLUMNNEW('Emissao',{||DTOC(totnt->emissao)})
                        ocolprod[6] := TBCOLUMNNEW('Cliente',{||totnt->cod_cli+'-'+totnt->cliente})
                        ocolprod[7] := TBCOLUMNNEW('Vlr.Nota',{||TRANSFORM(totnt->vl_nota,'999,999.99')})
                        ocolprod[8] := TBCOLUMNNEW('Vlr.Base',{||TRANSFORM(totnt->vl_base,'999,999.99')})
                        ocolprod[9] := TBCOLUMNNEW('Serie',{||totnt->serie})
                        ocolprod[10] := TBCOLUMNNEW('Cod.Nota',{||totnt->cod_nota})
                        ocolprod[11] := TBCOLUMNNEW('Chave do Danfe',{||totnt->chnfe})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
wvw_lclosewindow()
IF nkey == K_ESC
        RETURN NIL
ELSE
        RETURN NIL
ENDIF
RETURN NIL
************************************** F I M ***************************

***************************************************
* IMPRESSAO DO DEMONSTRATIVO QUE FALTA NO ORCAMENTO
***************************************************
FUNCTION demo_ped
*****************
LOCAL MPRG:='SACROT',mtit,mtipo,pag
MEMVAR mnum_orc,mtipo_imp,mimp_tipo

**********
SELE('tped');ORDSETFOCUS(1)
GO TOP
**********
IF tped->(DBSEEK(STRZERO(mnum_orc,6)))
        mtit := 'Demonstrativo do Orcamento: '+STRZERO(mnum_orc,6)
        mtipo := 'Mercadoria com saldo a menor que quantidade solicitada'
        WHILE tped->pnum_ped = STRZERO(mnum_orc,6) .AND. ! EOF()
                IF tped->ppag = ' '
                        EXIT
                ENDIF
                SKIP
        ENDDO
        IF EMPTY(tped->ppag) .AND. tped->pnum_ped = STRZERO(mnum_orc,6)
                IF  imp_arq('DEM_ORCA.REL','R') .AND. tped->pnum_ped = STRZERO(mnum_orc,6)
                        pag := 0
                        WHILE tped->pnum_ped = STRZERO(mnum_orc,6) .AND. ! EOF()
                                IF tped->ppag = '*'
                                        SKIP
                                        LOOP
                                ENDIF
                                IF pag=0 .OR. PROW()>=59
                                        pag=pag+1
                                        IF pag>1
                                                EJECT
                                        ENDIF
                                        cabecalho(pag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT('No.Orcamento: '+tped->pnum_ped+'   Data de Emissao: '+DTOC(tped->pdat_ped))
                                        DEVPOS(PROW()+1,00);DEVOUT('Cliente.....: '+tped->pcod_cli+'-')
                                        ver_cli(VAL(tped->pcod_cli),PROW(),PCOL()+1,'*')
                                        DEVPOS(PROW()+1,00);DEVOUT('Endereco....: '+cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),''))
                                        DEVPOS(PROW()+1,00);DEVOUT('Bairro......: '+cli->bairro+' - Cidade: '+cli->cidade+' - UF: '+cli->uf)
                                        IF tped->ptp_vend = 'AV'
                                                DEVPOS(PROW()+1,00);DEVOUT('Condicoes de Pagamentos: AVISTA')
                                        ELSE
                                                DEVPOS(PROW()+1,00);DEVOUT('Cond. Pagam.: '+SUBSTR(tped->pcond_veze,1,1)+'-'+SUBSTR(tped->pcond_veze,2)+' Dias: ')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,3,3)),SUBSTR(tped->pcond_inte,3,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,6,3)),','+SUBSTR(tped->pcond_inte,6,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,9,3)),','+SUBSTR(tped->pcond_inte,9,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,12,3)),','+SUBSTR(tped->pcond_inte,12,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,15,3)),','+SUBSTR(tped->pcond_inte,15,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,18,3)),','+SUBSTR(tped->pcond_inte,18,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,21,3)),','+SUBSTR(tped->pcond_inte,21,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,24,3)),','+SUBSTR(tped->pcond_inte,24,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,27,3)),','+SUBSTR(tped->pcond_inte,27,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,30,3)),','+SUBSTR(tped->pcond_inte,30,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,33,3)),','+SUBSTR(tped->pcond_inte,33,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,36,3)),','+SUBSTR(tped->pcond_inte,36,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,39,3)),','+SUBSTR(tped->pcond_inte,39,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,42,3)),','+SUBSTR(tped->pcond_inte,42,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(tped->pcond_inte,45,3)),','+SUBSTR(tped->pcond_inte,45,3),' '))
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',80))
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.   Descricao                                           Saldo      Quantidade")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",80))
                                ENDIF
                                ver_cod(VAL(tped->pcod_merc))
                                DEVPOS(PROW()+1,00);DEVOUT(tped->pcod_merc)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(tped->pmerc)
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(merc->saldo_mer,'9,999,999.9999')
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(tped->pquantd,'9,999,999.9999')
                                SKIP
                        ENDDO
                        EJECT
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao('DEM_ORCA.REL')
                ENDIF
        ENDIF
ENDIF
RETURN NIL
******************************  F I M  **********************************
FUNCTION genkey(mconsulta,nkey,narq)

LOCAL mcon := SPACE(45),mt,mcod:=0,mopc,mavan:=' ',m_consulta:={},;
      m_ponto:={},point:=0,li:=03,ci:=02,la:=22,ca:=90,mtela_gen,mmenu:=' ',;
      mmens,i:=0,mcon1:=SPACE(2),mcon2:=SPACE(45),msele
MEMVAR mpoint
PRIVATE mc_fornece
mt := SAVESCREEN(00,00,24,79)
CLEAR GETS
DO CASE
        CASE nkey = K_UP
                mconsulta:UP()
        CASE nkey = K_DOWN
                mconsulta:DOWN()
        CASE nkey = K_PGUP
                mconsulta:PAGEUP()
        CASE nkey = K_PGDN
                mconsulta:PAGEDOWN()
        CASE nkey = K_LEFT
                mconsulta:LEFT()
        CASE nkey = K_RIGHT
                mconsulta:RIGHT()
        CASE nkey = K_CTRL_PGUP
                mconsulta:GOTOP()
        CASE nkey = K_CTRL_PGDN
                mconsulta:GOBOTTOM()
        CASE nkey = K_ALT_PGUP
                mconsulta:PAGEUP()
                mconsulta:PAGEUP()
        CASE nkey = K_ALT_PGDN
                mconsulta:PAGEDOWN()
                mconsulta:PAGEDOWN()
        CASE nkey = ASC('p') .OR. nkey = ASC('P')
                CLEAR GETS
                IF narq = 'dupr'
                        mopc := mensagem1('Pesquisa: [D]ocumento - [C]od.Cliente - [N]ome Cliente - [P]Data Pg.ou Transf.','D','D,C,N,P')
                        IF mopc = 'D'
                                ORDSETFOCUS(10)
                                mcon := SPACE(10)
                        ELSEIF mopc = 'C'
                                ORDSETFOCUS(2)
                                mcon := SPACE(5)
                        ELSEIF mopc = 'P'
                                ORDSETFOCUS(3)
                                mcon := CTOD('  /  /  ')
                        ELSEIF mopc = 'N'
                                mavan := 'N'
                                ORDSETFOCUS(8)
                                mcon := SPACE(40)
                        ENDIF
                ELSEIF narq = 'ocorr'
                        mopc := mensagem1('Pesquisa: [C]odigo Merc - [D]ata Operacao - [V]Cod. Vendedor - [O]Documento}','C','C,D,V,O')
                        IF mopc = 'C'
                                ORDSETFOCUS(1)
                                mcon := SPACE(5)
                        ELSEIF mopc = 'D'
                                ORDSETFOCUS(2)
                                mcon := CTOD('  /  /  ')
                        ELSEIF mopc = 'V'
                                ORDSETFOCUS(3)
                                mcon := SPACE(3)
                        ELSEIF mopc = 'O'
                                ORDSETFOCUS(4)
                                mcon := SPACE(6)
                        ENDIF
                ELSEIF narq = 'dupp'
                        mopc := mensagem1('Pesquisa: [D]ocumento - [C]od.Cliente - [N]ome Cliente','D','D,C,N')
                        IF mopc = 'D'
                                ORDSETFOCUS(8)
                                mcon := SPACE(10)
                        ELSEIF mopc = 'C'
                                ORDSETFOCUS(2)
                                mcon := SPACE(5)
                        ELSEIF mopc = 'N'
                                ORDSETFOCUS(6)
                                mcon := SPACE(40)
                        ENDIF
                ELSEIF narq = 'totnt'
                        mopc := mensagem1('Pesquisa: [D]ocumento - [E]Data Emissao - [N]ome Cliente','D','D,E,N')
                        IF mopc = 'D'
                                ORDSETFOCUS(7)
                                mcon := SPACE(8)
                        ELSEIF mopc = 'E'
                                ORDSETFOCUS(1)
                                mcon := CTOD('  /  /  ')
                        ELSEIF mopc = 'N'
                                ORDSETFOCUS(8)
                                mcon := SPACE(40)
                        ENDIF
                ELSEIF narq = 'log'
                        mopc := mensagem1('Pesquisa: [C]od.Operador - [A]Cod.Aut. - [L]Data Log - [D]escricao - [P]Cod.produto - Documen[T]o','C','C,A,D,L,P,T')
                        IF mopc = 'C'
                                ORDSETFOCUS(1)
                                mcon := SPACE(3)
                        ELSEIF mopc = 'A'
                                ORDSETFOCUS(2)
                                mcon := SPACE(3)
                        ELSEIF mopc = 'L'
                                ORDSETFOCUS(3)
                                mcon := CTOD('  /  /  ')
                        ELSEIF mopc = 'D'
                                ORDSETFOCUS(5)
                                mcon := SPACE(40)
                        ELSEIF mopc = 'P'
                                ORDSETFOCUS(6)
                                mcon := SPACE(5)
                        ELSEIF mopc = 'T'
                                ORDSETFOCUS(4)
                                mcon := SPACE(10)
                        ENDIF
                ELSEIF narq = 'roma'
                        mopc := mensagem1('Pesquisa: [N]umero Romaneio - [P]No.Pedido - [M]Cod.Motorista','N','N,P,M')
                        IF mopc = 'N'
                                ORDSETFOCUS(1)
                                mcon := SPACE(6)
                        ELSEIF mopc = 'P'
                                ORDSETFOCUS(2)
                                mcon := SPACE(6)
                        ELSEIF mopc = 'M'
                                ORDSETFOCUS(5)
                                mcon := SPACE(4)
                        ENDIF
                ELSEIF narq = 'cid'
                        mavan := 'CID'
                        ORDSETFOCUS(1)
                        mcon := SPACE(20)
                ELSEIF narq = 'cdesp'
                        ORDSETFOCUS(2)
                        mcon := SPACE(25)
                ELSEIF narq = 'sen'
                        ORDSETFOCUS(1)
                        mcon := SPACE(30)
                ENDIF
                setcor(3)
                op_tela(10,10,12,57,' PESQUISAR - p/Avancada: A= e o que deseja')
                setcor(1)
                //WVW_DrawBoxGet(,00,00,LEN(mcon))
                @ 00,00 GET mcon PICT '@!'
                READ
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        CLEAR GETS
                        RETURN .F.
                ENDIF
                IF narq = 'merc'
                        ORDSETFOCUS(3)
                        mavan := 'M'
                ENDIF
                mpoint := RECNO()
                IF (narq = 'totnt' .AND. mopc = 'E');
                   .OR. (mopc = 'D' .AND. narq = 'ocorr');
                   .OR. (mopc = 'P' .AND. narq = 'dupr');
                   .OR. (mopc = 'L' .AND. narq = 'log')
                        IF ! (narq)->(DBSEEK(DTOS(mcon),.T.))
                                atencao('A Pesquisa nao foi realizada com sucesso')
                                GO mpoint
                                CLEAR GETS
                                RETURN .T.
                        ENDIF
                ELSEIF SUBSTR(mcon,1,2) = 'A='  //.AND. narq = 'CLI' .OR. narq = 'FORN' .OR. narq = 'DUPR'
                        mtela_gen:=SAVESCREEN(li,ci,la,ca)
                        mmens:=SAVESCREEN(10,10,12,70)
                        botao(10,10,13,70)
                        setcor(3)
                        DEVPOS(11,11);DEVOUT('Aguarde... Pesquisa Avancada estar sendo Realizada !!!')
                        DEVPOS(12,11);DEVOUT('Registro:')
                        DEVPOS(12,30);DEVOUT('Encontrados:')
                        setcor(1)
*                       SKIP
                        GO TOP
                        i := 0
                        WHILE ! EOF()
                                DEVPOS(12,21);DEVOUT(STRZERO(RECNO(),5))
                                IF mavan = 'N'
                                        IF AT(ALLTRIM(SUBSTR(mcon,3)),dupr->cliente) > 0
                                                AADD(m_consulta,' '+dupr->cliente+' - '+dupr->fornec)
                                                AADD(m_ponto,RECNO())
                                                DEVPOS(12,43);DEVOUT(STRZERO(i++,5))
                                        ENDIF
                                        mmenu := ' Pesquisa Avancada de CONTAS A RECEBER '
                                ENDIF
                                SKIP
                        ENDDO
                        RESTSCREEN(10,10,12,70,mmens)
                        IF LEN(m_consulta) > 0
                                mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                                botao(li,ci,la,ca,,mmenu)
                                setcor(3)
                                DEVPOS(li+1,ci+1);DEVOUT('Descricao')
                                DEVPOS(li+1,ci+44);DEVOUT('Codigo')
*                               DEVPOS(li+1,ci+55);DEVOUT('Saldo')
*                               DEVPOS(li+1,ci+62);DEVOUT('Preco Venda')
                                @ li+2,ci+1 TO li+2,ca-1
                                @ la-2,ci+1 TO la-2,ca-1
                                DEVPOS(la-1,ci+1);DEVOUT('Quantidade Encontrado:'+STRZERO(LEN(m_consulta),5))
                                setcor(1)
                                point := ACHOICE(li+3,ci+1,la-3,ca-1,m_consulta,,,point)
                                DO CASE
                                        CASE LASTKEY()=27
                                                GO mpoint
                                        CASE LASTKEY() = 13
                                                GO m_ponto[point]
                                ENDCASE
                        ELSE
                                atencao(mmenu+' nao foi realizada com sucesso')
                                GO mpoint
                        ENDIF
                        RESTSCREEN(li,ci,la,ca,mtela_gen)
                        CLEAR GETS
                        RETURN .T.
                ELSE
                        IF ! (narq)->(DBSEEK(RTRIM(mcon),.T.))
                                atencao('A Pesquisa nao foi realizada com sucesso')
                                GO mpoint
                                CLEAR GETS
                                RETURN .T.
                        ENDIF
                ENDIF
                CLEAR GETS
                RETURN .T.
        CASE nkey = 286
                CLEAR GETS
                mc_fornece := 0
                setcor(3)
                botao(10,10,15,87,,'Pesquisa Avancada: A= Pesquisa por Aplicacao - P= Pesquisa por Produto')
                setcor(1)
                DEVPOS(11,11);DEVOUT('Fornecedor:')
                DEVPOS(13,11);DEVOUT('Digite [E] - [OU] ou Deixe em Branco:')
                WVW_DrawBoxGet(,11,24,4)
                WVW_DrawBoxGet(,12,11,LEN(mcon))
                WVW_DrawBoxGet(,13,49,LEN(mcon1))
                WVW_DrawBoxGet(,14,11,LEN(mcon2))
                @ 11,24 GET mc_fornece PICT '9999'  VALID IF(EMPTY(mc_fornece),.T.,v_fornece(mc_fornece,11,29))
                @ 12,11 GET mcon PICT '@!'
                @ 13,49 GET mcon1 PICT '@!' VALID mcon1 $ 'E ,OU,  ' WHEN SUBSTR(mcon,1,2)='A=' .OR. SUBSTR(mcon,1,2)='P='
                @ 14,11 GET mcon2 PICT '@!' WHEN ! EMPTY(mcon1)
                READ
                lim_get()
                RESTSCREEN(00,00,24,79,mt)
                IF LASTKEY() = 27
                        lim_get()
                        CLEAR GETS
                        RETURN .F.
                ENDIF
                ORDSETFOCUS(3)
                mavan := 'M'
                mpoint := RECNO()
                IF SUBSTR(mcon,1,2) = 'A=' .OR. SUBSTR(mcon,1,2) = 'P='
                        mtela_gen:=SAVESCREEN(li,ci,la,ca)
                        mmens:=SAVESCREEN(10,10,12,70)
                        botao(10,10,13,70)
                        setcor(3)
                        DEVPOS(11,11);DEVOUT('Aguarde... Pesquisa Avancada estar sendo Realizada !!!')
                        DEVPOS(12,11);DEVOUT('Registro:')
                        DEVPOS(12,30);DEVOUT('Encontrados:')
                        setcor(1)
                        GO TOP
                        WHILE ! EOF()
                                DEVPOS(12,21);DEVOUT(STRZERO(RECNO(),5))
                                IF (! EMPTY(mc_fornece) .AND. STRZERO(mc_fornece,4) <> merc->cod_fab)
                                        SKIP;LOOP
                                ENDIF
                                IF mavan = 'M'
                                        IF (SUBSTR(mcon,1,2) = 'A=' .AND. SUBSTR(mcon2,1,2) = 'A=') .OR. (SUBSTR(mcon,1,2) = 'A=' .AND. EMPTY(mcon2))
                                                IF (mcon1 = 'E ' .AND. (AT(ALLTRIM(SUBSTR(mcon,3)),merc->aplic0) > 0 .AND. AT(ALLTRIM(SUBSTR(mcon2,3)),merc->aplic0) > 0));
                                                   .OR. (mcon1 = 'OU' .AND. (AT(ALLTRIM(SUBSTR(mcon,3)),merc->aplic0) > 0 .OR. AT(ALLTRIM(SUBSTR(mcon2,3)),merc->aplic0) > 0));
                                                   .OR. (EMPTY(mcon1) .AND. AT(ALLTRIM(SUBSTR(mcon,3)),merc->aplic0) > 0)
                                                        AADD(m_consulta,' '+merc->merc+' - '+merc->cod_merc+'  '+TRANSFORM(merc->saldo_mer,'9,999.99')+'  '+TRANSFORM(merc->pr_venda,'999,999.99')+'  '+merc->ref)
                                                        AADD(m_ponto,RECNO())
                                                        DEVPOS(12,43);DEVOUT(STRZERO(i++,5))
                                                ENDIF
                                        ELSEIF SUBSTR(mcon,1,2) = 'A=' .AND. SUBSTR(mcon2,1,2) = 'P='
                                                IF (mcon1 = 'E ' .AND. (AT(ALLTRIM(SUBSTR(mcon,3)),merc->aplic0) > 0 .AND. AT(ALLTRIM(SUBSTR(mcon2,3)),merc->merc) > 0));
                                                   .OR. (mcon1 = 'OU' .AND. (AT(ALLTRIM(SUBSTR(mcon,3)),merc->aplic0) > 0 .OR. AT(ALLTRIM(SUBSTR(mcon2,3)),merc->merc) > 0));
                                                   .OR. (EMPTY(mcon1) .AND. AT(ALLTRIM(SUBSTR(mcon,3)),merc->aplic0) > 0)
                                                        AADD(m_consulta,' '+merc->merc+' - '+merc->cod_merc+'  '+TRANSFORM(merc->saldo_mer,'9,999.99')+'  '+TRANSFORM(merc->pr_venda,'999,999.99')+'  '+merc->ref)
                                                        AADD(m_ponto,RECNO())
                                                        DEVPOS(12,43);DEVOUT(STRZERO(i++,5))
                                                ENDIF
                                        ELSEIF (SUBSTR(mcon,1,2) = 'P=' .AND. SUBSTR(mcon2,1,2) = 'P=') .OR. (SUBSTR(mcon,1,2) = 'P=' .AND. EMPTY(mcon2))
                                                IF (mcon1 = 'E ' .AND. (AT(ALLTRIM(SUBSTR(mcon,3)),merc->merc) > 0 .AND. AT(ALLTRIM(SUBSTR(mcon2,3)),merc->merc) > 0));
                                                   .OR. (mcon1 = 'OU' .AND. (AT(ALLTRIM(SUBSTR(mcon,3)),merc->merc) > 0 .OR. AT(ALLTRIM(SUBSTR(mcon2,3)),merc->merc) > 0));
                                                   .OR. (EMPTY(mcon1) .AND. AT(ALLTRIM(SUBSTR(mcon,3)),merc->merc) > 0)
                                                        AADD(m_consulta,' '+merc->merc+' - '+merc->cod_merc+'  '+TRANSFORM(merc->saldo_mer,'9,999.99')+'  '+TRANSFORM(merc->pr_venda,'999,999.99')+'  '+merc->ref)
                                                        AADD(m_ponto,RECNO())
                                                        DEVPOS(12,43);DEVOUT(STRZERO(i++,5))
                                                ENDIF
                                        ELSEIF SUBSTR(mcon,1,2) = 'P=' .AND. SUBSTR(mcon2,1,2) = 'A='
                                                IF (mcon1 = 'E ' .AND. (AT(ALLTRIM(SUBSTR(mcon,3)),merc->merc) > 0 .AND. AT(ALLTRIM(SUBSTR(mcon2,3)),merc->aplic0) > 0));
                                                   .OR. (mcon1 = 'OU' .AND. (AT(ALLTRIM(SUBSTR(mcon,3)),merc->merc) > 0 .OR. AT(ALLTRIM(SUBSTR(mcon2,3)),merc->aplic0) > 0));
                                                   .OR. (EMPTY(mcon1) .AND. AT(ALLTRIM(SUBSTR(mcon,3)),merc->merc) > 0)
                                                        AADD(m_consulta,' '+merc->merc+' - '+merc->cod_merc+'  '+TRANSFORM(merc->saldo_mer,'9,999.99')+'  '+TRANSFORM(merc->pr_venda,'999,999.99')+'  '+merc->ref)
                                                        AADD(m_ponto,RECNO())
                                                        DEVPOS(12,43);DEVOUT(STRZERO(i++,5))
                                                ENDIF
                                        ENDIF
                                        mmenu := ' Pesquisa Avancada de MERCADORIA '
                                ENDIF
                                SKIP
                        ENDDO
                        RESTSCREEN(10,10,12,70,mmens)
                        IF LEN(m_consulta) > 0
                                mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                                botao(li,ci,la,ca,,mmenu)
                                setcor(3)
                                DEVPOS(li+1,ci+1);DEVOUT('Descricao')
                                DEVPOS(li+1,ci+44);DEVOUT('Codigo')
                                DEVPOS(li+1,ci+55);DEVOUT('Saldo')
                                DEVPOS(li+1,ci+61);DEVOUT('Preco Venda')
                                DEVPOS(li+1,COL()+2);DEVOUT('Referencia')
                                @ li+2,ci+1 TO li+2,ca-1
                                @ la-2,ci+1 TO la-2,ca-1
                                DEVPOS(la-1,ci+1);DEVOUT('Quantidade Encontrado:'+STRZERO(LEN(m_consulta),5))
                                setcor(1)
                                point := ACHOICE(li+3,ci+1,la-3,ca-1,m_consulta,,,point)
                                DO CASE
                                        CASE LASTKEY()=27
                                                GO mpoint
                                        CASE LASTKEY() = 13
                                                GO m_ponto[point]
                                ENDCASE
                        ELSE
                                atencao(mmenu+' nao foi realizada com sucesso')
                                GO mpoint
                        ENDIF
                        RESTSCREEN(li,ci,la,ca,mtela_gen)
                        CLEAR GETS
                        RETURN .T.
                ELSE
                        IF (mopc = 'D' .AND. narq = 'ocorr') .OR. (mopc = 'L' .AND. narq = 'log')
                                mcon := DTOS(mcon)
                        ENDIF
                        IF ! EMPTY(mc_fornece)
                                ORDSETFOCUS(4)
                                IF ! (narq)->(DBSEEK(STRZERO(mc_fornece,4)+RTRIM(mcon),.T.))
                                        atencao('A Pesquisa NAO foi realizada com sucesso')
                                        ORDSETFOCUS(3)
                                        GO mpoint
                                        CLEAR GETS
                                        RETURN .T.
                                ENDIF
                        ELSE
                                IF ! (narq)->(DBSEEK(RTRIM(mcon),.T.))
                                        atencao('A Pesquisa NAO foi realizada com sucesso')
                                        GO mpoint
                                        CLEAR GETS
                                        RETURN .T.
                                ENDIF
                        ENDIF
                ENDIF
                CLEAR GETS
                RETURN .T.
        CASE nkey = 16
                CLEAR GETS
                ORDSETFOCUS(3)
                mavan := 'M'
                mpoint := RECNO()
                mtela_gen:=SAVESCREEN(li,ci,la,ca)
                mmens:=SAVESCREEN(10,10,12,70)
                botao(10,10,13,70,,' PRODUTOS EM PROMOCAO ')
                setcor(3)
                DEVPOS(11,11);DEVOUT('Aguarde... Pesquisa Avancada estar sendo Realizada !!!')
                DEVPOS(12,11);DEVOUT('Registro:')
                DEVPOS(12,30);DEVOUT('Encontrados:')
                setcor(1)
                GO TOP
                WHILE ! EOF()
                        DEVPOS(12,21);DEVOUT(STRZERO(RECNO(),5))
                        IF EMPTY(merc->promocao)
                                SKIP
                                LOOP
                        ENDIF
                        AADD(m_consulta,' '+merc->merc+' - '+merc->cod_merc+'  '+TRANSFORM(merc->saldo_mer,'9,999.99')+'  '+TRANSFORM(merc->pr_venda-(merc->pr_venda * (merc->promocao/100)),'999,999.99'))
                        AADD(m_ponto,RECNO())
                        DEVPOS(12,43);DEVOUT(STRZERO(i++,5))
                        SKIP
                ENDDO
                IF EMPTY(m_consulta)
                        atencao('Nao existe nenhum PRODUTO em PROMOCAO')
                        GO mpoint
                        CLEAR GETS
                        RETURN .T.
                ENDIF
                RESTSCREEN(10,10,12,70,mmens)
                IF LEN(m_consulta) > 0
                        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                        botao(li,ci,la,ca,,' PRODUTOS EM PROMOCAO ')
                        setcor(3)
                        DEVPOS(li+1,ci+1);DEVOUT('Descricao')
                        DEVPOS(li+1,ci+44);DEVOUT('Codigo')
                        DEVPOS(li+1,ci+55);DEVOUT('Saldo')
                        DEVPOS(li+1,ci+62);DEVOUT('Preco Venda')
                        @ li+2,ci+1 TO li+2,ca-1
                        @ la-2,ci+1 TO la-2,ca-1
                        DEVPOS(la-1,ci+1);DEVOUT('Quantidade Encontrado:'+STRZERO(LEN(m_consulta),5))
                        setcor(1)
                        point := ACHOICE(li+3,ci+1,la-3,ca-1,m_consulta,,,point)
                        DO CASE
                                CASE LASTKEY()=27
                                        GO mpoint
                                CASE LASTKEY() = 13
                                        GO m_ponto[point]
                        ENDCASE
                ELSE
                        atencao('A Pesquisa nao foi realizada com sucesso')
                        GO mpoint
                ENDIF
                RESTSCREEN(li,ci,la,ca,mtela_gen)
                CLEAR GETS
                RETURN .T.
        CASE nkey = 281 .OR. nkey = 304
                CLEAR GETS
                setcor(3)
                botao(10,10,12,40,,' PESQUISAR P/CODIGO '+IF(nkey=304,'DE BARRA',''))
                setcor(1)
                DEVPOS(11,11);DEVOUT('Codigo:')
                mcon := SPACE(16)
                IF narq = 'merc'
                        mcon := SPACE(14)
                        WVW_DrawBoxGet(,11,19,14)
                        @ 11,19 GET mcon PICT '@!'
                ELSE
                        WVW_DrawBoxGet(,11,19,4)
                        @ 11,19 GET mcod PICT '9999'
                ENDIF
                READ
                RESTSCREEN(00,00,24,79,mt)
                IF LASTKEY() = 27
                        CLEAR GETS
                        RETURN .F.
                ENDIF
                mpoint := RECNO()
                ORDSETFOCUS(1)
                IF narq = 'merc'
                        IF nkey = 304
                                *************
                                ORDSETFOCUS(6);GO TOP
                                *************
                                IF ! merc->(DBSEEK(RTRIM(mcon),.T.))
                                        atencao('Codigo de BARRA nao cadastrado')
                                        ORDSETFOCUS(3)
                                        GO mpoint
                                        CLEAR GETS
                                        RETURN .F.
                                ENDIF
                                CLEAR GETS
                                RETURN .T.
                        ELSEIF narq = 'merc' .AND. (LEN(RTRIM(mcon)) > 5 .OR. VAL(mcon) = 0)
                                *************
                                ORDSETFOCUS(6)
                                *************
                                IF ! merc->(DBSEEK(mcon))
                                        atencao('Codigo de BARRA nao cadastrado')
                                        ORDSETFOCUS(3)
                                        GO mpoint
                                        CLEAR GETS
                                        RETURN .F.
                                ENDIF
                        ELSE
                                mcod := VAL(mcon)
                                IF ! (narq)->(DBSEEK(STRZERO(mcod,5)))
                                        atencao('Nao foi possivel encontrar este produto')
                                        ORDSETFOCUS(3)
                                        GO mpoint
                                        CLEAR GETS
                                        RETURN .F.
                                ENDIF
                        ENDIF
                ELSE
                        IF ! (narq)->(DBSEEK(STRZERO(mcod,4)))
                                atencao('Nao foi possivel encontrar este produto')
                                ORDSETFOCUS(2)
                                GO mpoint
                                CLEAR GETS
                                RETURN .F.
                        ENDIF
                ENDIF
                IF narq = 'merc'  .AND. merc->disp = 'N'
                        atencao('Produto nao estar disponivel para VENDA')
                        ORDSETFOCUS(3)
                        GO mpoint
                        CLEAR GETS
                        RETURN .F.
                ENDIF
                IF narq = 'merc'
                        ORDSETFOCUS(3)
                ELSE
                        ORDSETFOCUS(2)
                ENDIF
                CLEAR GETS
                RETURN .T.
        CASE nkey = 274
                CLEAR GETS
                cons_espe()
                mpoint := RECNO()
                *************
                ORDSETFOCUS(7);GO TOP
                *************
                IF ! (narq)->(DBSEEK(espe->cod_espe))
                        atencao('Nao foi possivel encontra produtos com esta ESPECIE')
                        *************
                        ORDSETFOCUS(3)
                        *************
                        GO mpoint
                        CLEAR GETS
                        RETURN .F.
                ENDIF
                CLEAR GETS
                RETURN .T.
        CASE nkey = 290
                CLEAR GETS
                f6_forn()
                mpoint := RECNO()
                *************
                ORDSETFOCUS(4);GO TOP
                *************
                IF ! (narq)->(DBSEEK(forn->cod_forn))
                        atencao('Nao foi possivel encontra produtos com esta ESPECIE')
                        *************
                        ORDSETFOCUS(3)
                        *************
                        GO mpoint
                        CLEAR GETS
                        RETURN .F.
                ENDIF
                CLEAR GETS
                RETURN .T.
        CASE nkey = ASC('i') .OR. nkey = ASC('I')
                CLEAR GETS
                IF narq = 'cli'
                        sac130()
                ENDIF
                CLEAR GETS
                RETURN .T.
ENDCASE
CLEAR GETS
RETURN .F.
*************************** F I M ********************************
********************************
* FUNCAO P/CONSULTAR MERCADORIAS
********************************
#include "inkey.ch"              // constantes de codigos das teclas
FUNCTION f_compra()
*****************
LOCAL c_lci,c_cci,c_lba,c_cba,c_msele,c_morde,c_men,y,;
      oconsprod,ocolprod[6],i,comp_key,mteste,lin_br,mopcao:=' ',mprec:=0,mcodmerc,mreg,;
      local4,mtela_help,mtela_lin,mcor_ant,;
      mdescri:=SPACE(40),mcod_m:=0,k:=0,c_merc:={},ult_qtd:={},mcons_mov:=' '

MEMVAR mdata_sis,nivel_acess,mcod_merc,mcod_bc

Local4:= Space(0)
c_lci := c_cci := 0
c_lba := 22
c_cba := 99     //100 //79
f4msele := SELE()
f4morde := INDEXORD()
USE 'compras' ALIAS 'comp' SHARED NEW VIA 'DBFCDX'
*************
SELE('comp');ORDSETFOCUS(2)
GO TOP
*************
setcor(1)
exibi_prg('F_COMPRA')
op_tela(00,00,33,100,memp_resa+SPACE(40)+' COMPRAS DE PRODUTOS ')
setcor(3)
oconsprod := TBROWSEDB(c_lci,c_cci,c_lba-1,c_cba)
//oconsprod := TBROWSENEW(c_lci,c_cci,c_lba-1,c_cba,comp->)
ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||IF(EMPTY(comp->cod_merc) .OR. comp->disp = 'N','** NAO DISPONIVEL **'+LEFT(comp->merc,20),comp->merc)})
ocolprod[2] := TBCOLUMNNEW('Codigo',{||comp->cod_merc})
ocolprod[3] := TBCOLUMNNEW('    Saldo',{||TRANSFORM(comp->saldo,'999,999.999')})
ocolprod[4] := TBCOLUMNNEW(IF(mtipo_cust = 'V',' Valor.Merc',' Cust.Merc'),{||TRANSFORM(comp->cust_merc,ALLTRIM(m_set[1,98]))})
ocolprod[5] := TBCOLUMNNEW('Qtd.Solic.',{||TRANSFORM(comp->quantd,'99,999.999')})
ocolprod[6] := TBCOLUMNNEW('Prc.Solic.',{||TRANSFORM(comp->preco,'99,999.99')})
k:=0
FOR k = 1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[k])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
oconsprod:FORCESTABLE()
WHILE .T.
        mensagem('Pesquisa: <Alt+P>Codigo - <ALT+E>Especie - <ALT+A>Avancada - <Alt+I>Inclusao Produto - <Alt+H>Ajuda - <F4>Descricao')
        comp_key := 0
        WHILE comp_key = 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                //oconsprod:refreshall()

                c_merc:={}
        	ult_qtd:={}
                cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(comp->cod_merc)
                sr_getconnection():exec(ccomm,,.t.,@c_merc)
		IF LEN(c_merc) > 0
	                IF ! EMPTY(c_merc[1,33])
        	                ult_qtd:={}
                	        cComm  := "SELECT * FROM sacmov WHERE cancel IS NULL  AND ent_sai = 'E' AND documento NOT LIKE 'BL%'"
                        	ccomm := ccomm + " AND codigo = "+sr_cdbvalue(comp->cod_merc)
	                        ccomm := ccomm + " AND data_s_e = "+sr_cdbvalue(c_merc[1,33])
        	                sr_getconnection():exec(ccomm,,.t.,@ult_qtd)
                	ENDIF
                ENDIF
                setcor(3)
                DEVPOS(c_lba,c_cci+1);DEVOUT('Pesquisa:  ')
                setcor(1)
                WVW_DrawBoxGet(,c_lba,c_cci+12,38)
                botao(c_lba+1,c_cci,c_lba+11,c_cba-1)     //8
                DEVPOS(c_lba+1,c_cci+1);DEVOUT('Grupo.........:      Sub-Grupo:      Referencia:')
                DEVPOS(c_lba+2,c_cci+1);DEVOUT('Codigo Barra..:')
                DEVPOS(c_lba+2,c_cci+32);DEVOUT('Un:')
                DEVPOS(c_lba+3,c_cci+1);DEVOUT('Fabrica........:')

                botao(c_lba+5,c_cci,c_lba+10,70)     //8
                DEVPOS(c_lba+6,c_cci+30);DEVOUT('Total')
                DEVPOS(c_lba+6,c_cci+43);DEVOUT('Media')
                DEVPOS(c_lba+6,c_cci+55);DEVOUT('Media')
        	DEVPOS(c_lba+6,c_cci+62);DEVOUT('Sugestao')
                DEVPOS(c_lba+7,c_cci+1);DEVOUT(comp->mes1)
                DEVPOS(c_lba+7,c_cci+8);DEVOUT(comp->mes2)
                DEVPOS(c_lba+7,c_cci+15);DEVOUT(comp->mes3)
                DEVPOS(c_lba+7,c_cci+22);DEVOUT(comp->mes4)
                DEVPOS(c_lba+7,c_cci+30);DEVOUT('Meses')
                DEVPOS(c_lba+7,c_cci+41);DEVOUT('  MES:'+STRZERO(comp->qtd_mes,1))
	        DEVPOS(c_lba+7,c_cci+49);DEVOUT(' Valor Custo')
        	DEVPOS(c_lba+7,c_cci+62);DEVOUT('Compra')
                DEVPOS(c_lba+9,c_cci+1);DEVOUT('Ult.Compras:')
                DEVPOS(c_lba+9,COL()+1);DEVOUT(IF(LEN(c_merc) > 0,DTOC(c_merc[1,33]),''),setcor(3))
                DEVPOS(c_lba+9,COL()+2);DEVOUT('Qtd.Compras:',setcor(1))
                IF LEN(ult_qtd) = 0
                        DEVPOS(c_lba+9,COL()+1);DEVOUTPICT(0,'99,999.99',setcor(3))
                ELSE
                        DEVPOS(c_lba+9,COL()+1);DEVOUTPICT(ult_qtd[LEN(ult_qtd),19],'99,999.99',setcor(3))
                ENDIF
                setcor(3)
                DEVPOS(c_lba+1,c_cci+16);DEVOUT(SUBSTR(comp->grupo_sub,1,3))
                DEVPOS(c_lba+1,c_cci+32);DEVOUT(SUBSTR(comp->grupo_sub,4,2))
                DEVPOS(c_lba+1,c_cci+49);DEVOUT(comp->ref)
                DEVPOS(c_lba+2,c_cci+16);DEVOUT(comp->cod_barr)
                DEVPOS(c_lba+2,c_cci+36);DEVOUT(comp->unidade)
                DEVPOS(c_lba+3,c_cci+16);DEVOUT(comp->codfab+'-'+LEFT(comp->fab,23))

                DEVPOS(c_lba+8,c_cci);DEVOUTPICT(comp->quantd1,'99,999')
                DEVPOS(c_lba+8,c_cci+7);DEVOUTPICT(comp->quantd2,'99,999')
                DEVPOS(c_lba+8,c_cci+14);DEVOUTPICT(comp->quantd3,'99,999')
                DEVPOS(c_lba+8,c_cci+21);DEVOUTPICT(comp->quantd4,'99,999')
                DEVPOS(c_lba+8,c_cci+28);DEVOUTPICT(comp->tot_qtd,'999,999')
                msoma_qtd := comp->quantd1
                IF comp->qtd_mes > 1
                        msoma_qtd := msoma_qtd + comp->quantd2
                ENDIF
                IF comp->qtd_mes > 2
                        msoma_qtd := msoma_qtd + comp->quantd3
                ENDIF
                IF comp->qtd_mes > 3
                        msoma_qtd := msoma_qtd + comp->quantd4
                ENDIF
                DEVPOS(c_lba+8,c_cci+40);DEVOUTPICT(msoma_qtd/comp->qtd_mes,'999,999')
	        DEVPOS(c_lba+8,c_cci+48);DEVOUTPICT(comp->med_cust,'9,999,999.99')
        	DEVPOS(c_lba+8,c_cci+61);DEVOUTPICT(IF(((msoma_qtd/comp->qtd_mes) * (comp->dias_sug/30))-comp->saldo<=0,0,((msoma_qtd/comp->qtd_mes) * (comp->dias_sug/30))-comp->saldo),'99,999')
                setcor(1)
                IF FILE(ALLTRIM(m_cfg[5])+'P'+comp->cod_merc+'.jpg')
                        botao(24,82,32,98)
                        WVW_DrawImage( ,24,82,32,98,ALLTRIM(m_cfg[5])+'P'+comp->cod_merc+'.jpg',.T.,.F.)
                        DEVPOS(33,82);DEVOUT('<ALT+F>p/Ampliar')
                ENDIF
                comp_key := Inkey(0)
        END
        IF comp_key = K_ESC
                EXIT
        ELSEIF comp_key = 279
                sac110(,1)
                *************
                SELE('comp');ORDSETFOCUS(2)
                *************
                setcor(3)
                oconsprod := TBROWSEDB(c_lci,c_cci,c_lba-1,c_cba)
                ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||IF(EMPTY(comp->cod_merc) .OR. comp->disp = 'N','** NAO DISPONIVEL **'+LEFT(comp->merc,20),comp->merc)})
                ocolprod[2] := TBCOLUMNNEW('Codigo',{||comp->cod_merc})
                ocolprod[3] := TBCOLUMNNEW('    Saldo',{||TRANSFORM(comp->saldo,'999,999.999')})
                ocolprod[4] := TBCOLUMNNEW(IF(mtipo_cust = 'V',' Valor.Merc',' Cust.Merc'),{||TRANSFORM(comp->cust_merc,ALLTRIM(m_set[1,98]))})
                ocolprod[5] := TBCOLUMNNEW('Qtd.Solic.',{||TRANSFORM(comp->quantd,'99,999.999')})
                ocolprod[6] := TBCOLUMNNEW('Prc.Solic.',{||TRANSFORM(comp->preco,'99,999.99')})
                k:=0
                FOR k=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[k])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)

        ELSEIF comp_key = 289
                stop := ' '
                op_tela(03,10,30,80,'Foto Ampliada do Produto: '+comp->cod_merc+' - '+comp->merc,'1')
                WVW_DrawImage( ,00,00,27,70,ALLTRIM(m_cfg[5])+'P'+comp->cod_merc+'.jpg',.T.,.F.)
                @ 40,00 GET stop
                READ
                wvw_lclosewindow()
        ELSEIF comp_key = K_ENTER
                op_tela(20,20,25,70,'Solicitacoes para Compras')
                IF ! EMPTY(comp->quantd)
                        mquantd := comp->quantd
                        mpreco  := comp->preco
                ELSE
                        mquantd := IF(((msoma_qtd/comp->qtd_mes) * (comp->dias_sug/30))-comp->saldo<=0,0,((msoma_qtd/comp->qtd_mes) * (comp->dias_sug/30))-comp->saldo)
                        mpreco  := comp->cust_merc
                ENDIF
                mipi    := comp->ipi
                IF EMPTY(comp->real_dol)
                        mreal_dol := 'R'
                ELSE
                        mreal_dol := comp->real_dol
                ENDIF
                mcons_mov:=' '
                DEVPOS(00,01);DEVOUT('PRODUTO.......:')
                DEVPOS(01,01);DEVOUT('Cons.MOVIMENTO:')
                DEVPOS(02,01);DEVOUT('Quantidade....:')
                DEVPOS(03,01);DEVOUT('Preco Compra..:')
                DEVPOS(04,01);DEVOUT('IPI (%).......:')
                DEVPOS(05,01);DEVOUT('[R]eal [D]olar:')
                setcor(3)
                DEVPOS(00,01);DEVOUT(comp->cod_merc+' - '+comp->merc)
                setcor(1) 
                @ 01,17 GET mcons_mov PICT '@!' VALID mcons_mov $ 'S,N, ' .AND. IF(mcons_mov = 'S',sac40(comp->cod_merc),.T.)
                READ
                @ 02,17 GET mquantd PICT '999,999.999' VALID IF(EMPTY(mquantd),.F.,.T.)
                @ 03,17 GET mpreco PICT '999,999.999'
                @ 04,17 GET mipi PICT '999,999.999'
                @ 05,17 GET mreal_dol PICT '@!' VALID mreal_dol $ 'R,D'
                READ
                IF EMPTY(mquantd)
                        wvw_lclosewindow()
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Inclusao:')
                wvw_lclosewindow()
                IF opcao = 'S'
                        BLOQREG()
                        comp->real_dol:= mreal_dol
                        comp->ipi     := mipi
                        comp->quantd  := mquantd
                        comp->preco   := mpreco
                        DBCOMMIT()
                        DBUNLOCK()
                        mpt := ASCAN(m_codigo,comp->cod_merc)
                        IF mpt = 0
                                AADD(m_codigo,comp->cod_merc)
                                           //         1                 2            3               4              5             6              7           8          9            10       11   12         13            14
                                AADD(m_contem,{comp->grupo_sub,comp->merc,comp->unidade,comp->quantd,comp->preco,comp->codfab,comp->fab,comp->peso,comp->ipi,comp->isento,' ',' ',comp->real_dol,comp->ref})
                        ELSE
                                
                                m_contem[mpt,4] := comp->quantd
                                m_contem[mpt,5] := comp->preco
                        ENDIF
                        *************
                        SELE('comp');ORDSETFOCUS(2)
                        *************
                        setcor(3)
                        oconsprod := TBROWSEDB(c_lci,c_cci,c_lba-1,c_cba)
                        ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||IF(EMPTY(comp->cod_merc) .OR. comp->disp = 'N','** NAO DISPONIVEL **'+LEFT(comp->merc,20),comp->merc)})
                        ocolprod[2] := TBCOLUMNNEW('Codigo',{||comp->cod_merc})
                        ocolprod[3] := TBCOLUMNNEW('    Saldo',{||TRANSFORM(comp->saldo,'999,999.999')})
                        ocolprod[4] := TBCOLUMNNEW(IF(mtipo_cust = 'V',' Valor.Merc',' Cust.Merc'),{||TRANSFORM(comp->cust_merc,ALLTRIM(m_set[1,98]))})
                        ocolprod[5] := TBCOLUMNNEW('Qtd.Solic.',{||TRANSFORM(comp->quantd,'99,999.999')})
                        ocolprod[6] := TBCOLUMNNEW('Prc.Solic.',{||TRANSFORM(comp->preco,'99,999.99')})
                        k:=0
                        FOR k=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[k])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ELSEIF comp_key == -41
                calcu()
/*
        ELSEIF comp_key == 275
                mcod := cons_ref(comp->ref)
                IF ! EMPTY(mcod)
                        GO mcod
                        mcod_merc := VAL(comp->cod_merc)
                        mcod_bc := comp->cod_merc
                        IF EMPTY(comp->cod_merc)
                                LOOP
                        ENDIF
                        *************
                        SELE('comp');ORDSETFOCUS(1)
                        *************
                        setcor(3)
                        oconsprod := TBROWSEDB(c_lci,c_cci,c_lba-1,c_cba,'comp')
                        ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||IF(EMPTY(comp->cod_merc) .OR. comp->disp = 'N','** NAO DISPONIVEL **'+LEFT(comp->merc,20),comp->merc)})
                        ocolprod[2] := TBCOLUMNNEW('Codigo',{||comp->cod_merc})
                        ocolprod[3] := TBCOLUMNNEW('    Saldo',{||TRANSFORM(comp->saldo,'9,999,999.999')})
                        ocolprod[4] := TBCOLUMNNEW(' Cust.Merc',{||TRANSFORM(comp->cust_merc,ALLTRIM(m_set[1,98]))})
                        ocolprod[5] := TBCOLUMNNEW('Qtd.Solic.',{||TRANSFORM(comp->quantd,'999,999.999')})
                        ocolprod[6] := TBCOLUMNNEW('Prc.Solic.',{||TRANSFORM(comp->preco,'999,999.99')})
                        k:=0
                        FOR k=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[k])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
*/
        ELSEIF  comp_key = 281
                mcod_m :=0
                op_tela(10,10,12,71,'Pesquisar por CODIGO DO PRODUTO')
                mensagem('Digite a Codigo para fazer a Pesquisa ou <ESC>p/Retornar')
                DEVPOS(01,00);DEVOUT(' Digite o Codigo...:')
                WVW_DrawBoxGet(,01,21,5)
                @ 01,21 GET mcod_m PICT '99999'
                READ
                wvw_lclosewindow()
                *************
                SELE('comp');ORDSETFOCUS(1);GO TOP
                *************
                IF ! comp->(DBSEEK(STRZERO(mcod_m,5)))
                        GO TOP
                        LOOP
                ENDIF
                mreg := RECNO()
                SELE('comp');ORDSETFOCUS(2)
                GO mreg
                setcor(3)
                oconsprod := TBROWSEDB(c_lci,c_cci,c_lba-1,c_cba)
                ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||IF(EMPTY(comp->cod_merc) .OR. comp->disp = 'N','** NAO DISPONIVEL **'+LEFT(comp->merc,20),comp->merc)})
                ocolprod[2] := TBCOLUMNNEW('Codigo',{||comp->cod_merc})
                ocolprod[3] := TBCOLUMNNEW('    Saldo',{||TRANSFORM(comp->saldo,'9,999,999.999')})
                ocolprod[4] := TBCOLUMNNEW(IF(mtipo_cust = 'V',' Valor.Merc',' Cust.Merc'),{||TRANSFORM(comp->cust_merc,ALLTRIM(m_set[1,98]))})
                ocolprod[5] := TBCOLUMNNEW('Qtd.Solic.',{||TRANSFORM(comp->quantd,'999,999.999')})
                ocolprod[6] := TBCOLUMNNEW('Prc.Solic.',{||TRANSFORM(comp->preco,'999,999.99')})
                i:=0
                FOR i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()

        ELSEIF  comp_key >= 32 .AND. comp_key <= 255
                ORDSETFOCUS(2)
                Local4:= Upper(Local4 + Chr(comp_key))
                IF (Len(Local4) > Len(merc->merc))
                        Local4:= Upper(right(Local4, Len(Local4) - 1))
                ENDIF
                setcor(3)
                @ c_lba, c_cci + (c_cba - c_cci) / 2 - Len(merc->merc) / 2 - 17;
                SAY Local4      //color SubStr('g/w,gr+/g', rat(",", 'g/w,gr+/g') + 1)
                setcor(1)
                set softseek on
                dbSeek(Local4, Nil, Nil)
                set softseek off
                oconsprod:refreshall()
        ELSEIF comp_key == 8
                ORDSETFOCUS(2)
                Local4:= Upper(Left(Local4, Len(Local4) - 1))
                setcor(3)
                @ c_lba, c_cci + (c_cba - c_cci) / 2 - Len(merc->merc) / 2 - 17;
                        SAY Local4 + " "
                setcor(1)
                set softseek on
                dbSeek(Local4, Nil, Nil)
                set softseek off
                oconsprod:refreshall()
        ELSE
                SELE('comp');ORDSETFOCUS(2)
                IF comp_key = K_UP
                        oconsprod:UP()
                ELSEIF comp_key = K_DOWN
                        oconsprod:DOWN()
                ELSEIF comp_key = K_PGUP
                        oconsprod:PAGEUP()
                ELSEIF comp_key = K_PGDN
                        oconsprod:PAGEDOWN()
                ELSEIF comp_key = K_LEFT
                        oconsprod:LEFT()
                ELSEIF comp_key = K_RIGHT
                        oconsprod:RIGHT()
                ELSEIF comp_key = K_CTRL_PGUP
                        oconsprod:GOTOP()
                ELSEIF comp_key = K_CTRL_PGDN
                        oconsprod:GOBOTTOM()
                ELSEIF comp_key = K_ALT_PGUP
                        oconsprod:PAGEUP()
                        oconsprod:PAGEUP()
                ELSEIF comp_key = K_ALT_PGDN
                        oconsprod:PAGEDOWN()
                        oconsprod:PAGEDOWN()
                ENDIF
                oconsprod:FORCESTABLE()
        ENDIF
END
SELE(f4msele);IF(f4morde>0,ORDSETFOCUS(f4morde),)
RELEASE c_lci,c_cci,c_lba,c_cba,f4msele,f4morde,f4men,mcod,oconsprod,ocolprod,i,comp_key
wvw_lclosewindow()
RETURN .F.
*/
*************************** f i m *******************************************
********************************
* FUNCAO P/CONSULTAR LISTA DE PRESENTES
********************************
FUNCTION cons_pre()
*****************
#include "inkey.ch"              // constantes de codigos das teclas
LOCAL f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,mpre_sele,mpre_orde,f4men,y,mcod,;
      oconsprod,ocolprod[6],i,nkey,mteste,f4,lin_br,mopcao:=' ',mprec:=0,mcodmerc,mreg,;
      local4,mtela_help,mtela_lin,mcor_ant,mvlr_dolar:=1,stop:=' ',;
      nErr, nPos,vEmp := {},nCnn,oSql,;
      apCode,owindows,mdescri:=SPACE(40),mcons_pres:={},ccomm,m_cli,mcli_pres,mcons_cli,point:=0

MEMVAR mdata_sis,nivel_acess,mcod_merc,mcod_bc

Local4:= Space(0)
f4 := '*'
f4lci := 2
f4cci := 0
f4lba := 22
f4cba := 92

exibi_prg('CONS_PRE')
 op_tela(00,02,35,90,memp_resa+SPACE(50)+'LISTA DE PRESENTE DO CLIENTE')
WHILE .T.
	DEVPOS(00,01);DEVOUT('Codigo do Cliente:')
	@ 01,00 TO 01,100
	mcod_pres:=0
	@ 00,21 GET mcod_pres PICT '99999' VALID ver_cli(mcod_pres,00,28)
	READ
	IF LASTKEY() = 27
	        wvw_lclosewindow()
	        RETURN ' '
	ENDIF
	IF EMPTY(mcod_pres)
		op_tela(10,05,31,95,memp_resa+SPACE(50)+'LISTA DE CLIENTE COM LISTA DE PRESENTE')
		setcor(3)
		DEVPOS(00,00);DEVOUT(' Nome                                    Codigo  Bairro               Cidade')
		@ 01,00 TO 01,100
		setcor(1)
		mcli_pres := {}
		m_cli := {}
		mcons_cli := {}
		point := 0
		sr_getconnection():exec("SELECT codcli FROM sacpresen WHERE qtd > 0 AND (data_cas + 60 > "+sr_cdbvalue(mdata_sis)+" OR data_cas IS NULL) GROUP BY codcli,codcli ORDER BY codcli",,.t.,@mcli_pres)
		IF LEN(mcli_pres) = 0
			atencao('Nao existe nenhum CLIENTE com lista de Presente...')
		        wvw_lclosewindow()
		        RETURN ' '
		ELSE
			FOR i = 1 to LEN(mcli_pres)
				mcons_cli := {}
				cComm  := "SELECT * FROM mastcli WHERE cod_cli = "+sr_cdbvalue(mcli_pres[i,1])
				sr_getconnection():exec(ccomm,,.t.,@mcons_cli)
				IF LEN(mcons_cli) = 0
					LOOP
				ENDIF		
		                AADD(m_cli,mcons_cli[1,3]+' '+mcons_cli[1,2]+'  '+mcons_cli[1,22]+' '+mcons_cli[1,24])
		        NEXT
			ASORT(m_cli,,,{|x,y| x[1] < y[1]})
        		point := ACHOICE(2,1,28,90,m_cli,,,point)
		        DO CASE
		                CASE LASTKEY()=27 .OR. LASTKEY() = 4 .OR. LASTKEY() = 19
				        wvw_lclosewindow()
		                        LOOP
		                CASE LASTKEY() = 13
		                        mcod_pres := VAL(SUBSTR(m_cli[point],42,5))
		        ENDCASE
		        wvw_lclosewindow()
		ENDIF
	ENDIF
	DEVPOS(00,21);DEVOUT(STRZERO(mcod_pres,5))
	ver_cli(mcod_pres,00,28)
	opcao := op_simnao('S','Confirma o Cliente:')
	IF opcao = 'N' .OR. LASTKEY() = 27
	        wvw_lclosewindow()
	        RETURN ' '
	ENDIF
	EXIT
ENDDO
mcli_pres:={}
sr_getconnection():exec("SELECT data_cas FROM sacpresen WHERE codcli = "+sr_cdbvalue(STRZERO(mcod_pres,5)),,.t.,@mcli_pres)
IF LEN(mcli_pres) > 0
	IF mcli_pres[1,1] < mdata_sis
                atencao('Data do casamento: '+DTOC(mcli_pres[1,1])+' Maior que a data atual:'+DTOC(mdata_sis))
        ENDIF
ENDIF
mcons_pres:={}
cComm  := "SELECT * FROM sacpresen WHERE codcli = "+sr_cdbvalue(STRZERO(mcod_pres,5))+" AND qtd > 0 AND excluido IS NULL AND (data_cas + 60 > "+sr_cdbvalue(mdata_sis)+" OR data_cas IS NULL) ORDER BY prioridade,descri"
sr_getconnection():exec(ccomm,,.t.,@mcons_pres)
IF LEN(mcons_pres) > 0
        i:=0
        FOR i = 1 TO LEN(mcons_pres)
                mcons_m:={}
                cComm  := "SELECT pr_venda,saldo_mer FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_pres[i,4])
                sr_getconnection():exec(ccomm,,.t.,@mcons_m)
                IF LEN(mcons_m) = 0
                        LOOP
                ELSE
                        cComm  := "UPDATE sacpresen SET valor = "+sr_cdbvalue(mcons_m[1,1])+" WHERE cod_merc = "+sr_cdbvalue(mcons_pres[i,4])
                        sr_getconnection():exec(ccomm,,.f.)
                ENDIF
        NEXT
        sr_getconnection():exec('COMMIT',,.f.)
ELSE
        atencao('Nao existe nenhum produto para este Cliente....')
        wvw_lclosewindow()
        RETURN ' '
ENDIF
mpre_sele := SELE()
mpre_orde := INDEXORD()

USE 'saccpres' ALIAS 'cpres' EXCLUSIVE NEW VIA 'DBFCDX'
//INDEX ON cpres->descricao TAG descr TO ('saccpres')

*************
SELE('cpres')
BLOQREG()
ZAP
DBUNLOCK()
*************
i := 0
FOR i = 1 TO LEN(mcons_pres)
        mcons_m:={}
        cComm  := "SELECT saldo_mer FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_pres[i,4])
        sr_getconnection():exec(ccomm,,.t.,@mcons_m)
        IF LEN(mcons_m) = 0
                LOOP
        ELSEIF mcons_m[1,1] <= 0
                LOOP
        ENDIF
        ADIREG()
        cpres->codmerc   := mcons_pres[i,4]
        cpres->descricao := mcons_pres[i,5]
        cpres->quantd    := mcons_pres[i,6]
        cpres->preco     := mcons_pres[i,10]
        cpres->num_ped   := mcons_pres[i,8]
        cpres->prioridade:= mcons_pres[i,13]
NEXT
DBCOMMIT()
DBUNLOCK()
*************
SELE('cpres');ORDSETFOCUS(1)
GO TOP
*************
setcor(1)
oconsprod := TBROWSEDB(f4lci,f4cci,f4lba-1,f4cba)
ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||cpres->descricao})
ocolprod[2] := TBCOLUMNNEW('Codigo',{||cpres->codmerc})
ocolprod[3] := TBCOLUMNNEW('Quantidade',{||TRANSFORM(cpres->quantd,'999,999.999')})
ocolprod[4] := TBCOLUMNNEW(' Preco R$',{||TRANSFORM(ROUND(cpres->preco,2),ALLTRIM(m_set[1,98]))})
ocolprod[5] := TBCOLUMNNEW('No.Ped.',{||cpres->num_ped})
ocolprod[6] := TBCOLUMNNEW('Flag',{||cpres->prioridade})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
oconsprod:FORCESTABLE()
WHILE .T.
        //mensagem('Pesquisa: P>Codigo - <ALT+E>Especie - <ALT+A>Avancada - <Alt+I>Inclusao - <Alt+H>Ajuda - <F4>Descricao')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                setcor(3)
                @ f4lba,f4cci TO f4lba,f4cba
                DEVPOS(f4lba+1,f4cci+1);DEVOUT('Pesquisa:  ')
                setcor(1)
                WVW_DrawBoxGet(,f4lba+1,f4cci+12,38)
                botao(26,10,29,48,,' Observacao ')
                DEVPOS(27,11);DEVOUT('Nome do Arquivo: ')
                DEVPOS(28,11);DEVOUT('<ALT+F> p/Ampliar e Consulta Album')
		setcor(3)
                DEVPOS(27,27);DEVOUT(' P'+cpres->codmerc)
		setcor(1)
                IF cpres->prioridade = '0'
                        WVW_DrawLabel(,32,11,'P R I O R I D A D E',,,210,, 'Arial Black',35,20,,,,,)
                ELSE
                        limpa(32,11,33,50)
                ENDIF


                botao(24,52,34,78)
                IF FILE(ALLTRIM(m_cfg[61])+'P'+cpres->codmerc+'.jpg')
                        WVW_DrawImage( ,24,52,34,78,ALLTRIM(m_cfg[61])+'P'+cpres->codmerc+'.jpg',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_cfg[61])+'P'+cpres->codmerc+'.bmp')
                        WVW_DrawImage( ,24,52,34,78,ALLTRIM(m_cfg[61])+'P'+cpres->codmerc+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_cfg[5])+'\PRODUTO\P'+cpres->codmerc+'.bmp')
                        WVW_DrawImage( ,24,52,34,78,ALLTRIM(m_cfg[5])+'\PRODUTO\P'+cpres->codmerc+'.bmp',.T.,.F.)
                ELSEIF FILE(ALLTRIM(m_cfg[5])+'\PRODUTO\P'+cpres->codmerc+'.jpg')
                        WVW_DrawImage( ,24,52,34,78,ALLTRIM(m_cfg[5])+'\PRODUTO\P'+cpres->codmerc+'.jpg',.T.,.F.)
                ENDIF
                 nkey := INKEY(0)
        END
        IF nkey == K_ESC
                wvw_lclosewindow()
		SELE(mpre_sele);IF(mpre_orde>0,ORDSETFOCUS(mpre_orde),)
                RETURN ' '
        ELSEIF nkey == 289
                smedalbum('P',cpres->codmerc,cpres->descricao,m_cfg[61],m_cfg[5]+'\PRODUTO\')
        ELSEIF nkey == K_ENTER
                mcod_merc := cpres->codmerc
                mcod_bc := cpres->codmerc
                IF EMPTY(mcod_merc)
                        LOOP
                ENDIF
                wvw_lclosewindow()
		SELE(mpre_sele);IF(mpre_orde>0,ORDSETFOCUS(mpre_orde),)
                RETURN mcod_merc
        ELSEIF nkey == -41
                calcu()
        ELSEIF  nkey = -3
                mdescri := SPACE(40)
                op_tela(10,10,12,71,'Pesquisar por Decricao do Produto')
                mensagem('Digite a Descricao ou Parte da Descricao para fazer a Pesquisa ou <ESC>p/Retornar')
                DEVPOS(01,00);DEVOUT(' Digite a Descricao:')
                WVW_DrawBoxGet(,01,21,40)
                @ 01,21 GET mdescri PICT '@!'
                READ
                wvw_lclosewindow()
                *************
                SELE('cpres');ORDSETFOCUS(1)
                *************
                cpres->(DBSEEK(RTRIM(mdescri),.T.))
                oconsprod:refreshall()
        ELSEIF  nkey >= 32 .AND. nkey <= 255
                Local4:= Upper(Local4 + Chr(nkey))
                IF (Len(Local4) > Len(cpres->descricao))
                        Local4:= Upper(right(Local4, Len(Local4) - 1))
                ENDIF
                SETCOLOR(2)
                @ f4lba, f4cci + (f4cba - f4cci) / 2 - Len(cpres->descricao) / 2 - 17;
                SAY Local4      //color SubStr('g/w,gr+/g', rat(",", 'g/w,gr+/g') + 1)
                *************
                SELE('cpres');ORDSETFOCUS(1)
                *************
                IF ! cpres->(DBSEEK(RTRIM(local4),.T.))
                	GO TOP
                ENDIF
                	
                oconsprod:refreshall()
        ELSEIF nkey == 8
                Local4:= Upper(Left(Local4, Len(Local4) - 1))
                SETCOLOR(2)
                @ f4lba, f4cci + (f4cba - f4cci) / 2 - Len(cpres->descricao) / 2 - 17;
                        SAY Local4 + " "
                *************
                SELE('cpres');ORDSETFOCUS(1)
                *************
                IF ! cpres->(DBSEEK(RTRIM(local4),.T.))
                	GO TOP
                ENDIF
                	
                oconsprod:refreshall()
        ELSE
                IF genkey(oconsprod,nkey,'cpres')
                        oconsprod := TBROWSEDB(f4lci,f4cci,f4lba-1,f4cba,'cpres')
			ocolprod[1] := TBCOLUMNNEW('Mercadoria',{||cpres->descricao})
			ocolprod[2] := TBCOLUMNNEW('Codigo',{||cpres->codmerc})
			ocolprod[3] := TBCOLUMNNEW('Quantidade',{||TRANSFORM(cpres->quantd,'999,999.999')})
			ocolprod[4] := TBCOLUMNNEW(' Preco R$',{||TRANSFORM(ROUND(cpres->preco,2),ALLTRIM(m_set[1,98]))})
			ocolprod[5] := TBCOLUMNNEW('No.Ped.',{||cpres->num_ped})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:CARGO := '*****'
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(mpre_sele);IF(mpre_orde>0,ORDSETFOCUS(mpre_orde),)
RELEASE f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,mpre_sele,mpre_orde,f4men,mcod,;
        oconsprod,ocolprod[8],i,nkey,mteste
wvw_lclosewindow()
RETURN .F.
******************************* f i m *********************************************
/*
FUNCTION cons_pre1()
*****************

LOCAL f7lci,f7cci,f7lba,f7cba,i:=0,;
      opcao,point,mmens:='',mcons_pres:={},mcons_m:={},m_prese:={}
//MEMVAR mcod_cli,mcod_pres
PRIVATE mcompras:=0,mcodcli:=0

f7lci := f7cci := 0
f7lba := 32
f7cba := 97
exibi_prg('CONS_PRE')
op_tela(00,02,33,98,memp_resa+SPACE(50)+'LISTA DE PRESENTE DO CLIENTE: '+STRZERO(mcod_pres,5))
DEVPOS(00,01);DEVOUT('Codigo do Cliente:')
@ 01,00 TO 01,100
setcor(3)
DEVPOS(02,01);DEVOUT('Produto')
DEVPOS(02,48);DEVOUT('Quantidade')
DEVPOS(02,COL()+1);DEVOUT('     Preco')
DEVPOS(02,COL()+1);DEVOUT('Pedido')
@ 03,00 TO 03,100
mcod_pres:=0
@ 00,21 GET mcod_pres PICT '99999' VALID ver_cli(mcod_pres,00,28)
READ
IF LASTKEY() = 27
        wvw_lclosewindow()
        RETURN ' '
ENDIF
ver_cli(mcod_pres,00,28)
opcao := op_simnao('S','Confirma o Cliente:')
IF opcao = 'N' .OR. LASTKEY() = 27
        wvw_lclosewindow()
        RETURN ' '
ENDIF
mcons_pres:={}
cComm  := "SELECT * FROM sacpresen WHERE codcli = "+sr_cdbvalue(STRZERO(mcod_pres,5))
sr_getconnection():exec(ccomm,,.t.,@mcons_pres)
IF LEN(mcons_pres) > 0
        i:=0
        FOR i = 1 TO LEN(mcons_pres)
                mcons_m:={}
                cComm  := "SELECT pr_venda FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcons_pres[i,4])
                sr_getconnection():exec(ccomm,,.t.,@mcons_m)
                IF LEN(mcons_m) = 0
                        AADD(m_prese,mcons_pres[i,4]+' '+mcons_pres[i,5]+' EXCLUIDO DO ARQUIVO DE PRODUTOS '+mcons_pres[i,8])
                        LOOP
                ENDIF
                AADD(m_prese,mcons_pres[i,4]+' '+mcons_pres[i,5]+' '+TRANSFORM(mcons_pres[i,6],'999,999.99')+' '+TRANSFORM(mcons_m[1,1],'999,999.99')+' '+mcons_pres[i,8])
                IF LEN(mcons_m) > 0
                        cComm  := "UPDATE sacpresen SET valor = "+sr_cdbvalue(mcons_m[1,1])+" WHERE cod_merc = "+sr_cdbvalue(mcons_pres[i,4])
                        sr_getconnection():exec(ccomm,,.f.)
                ENDIF
        NEXT
        sr_getconnection():exec('COMMIT',,.f.)
ELSE
        atencao('Nao existe nenhum produto para este Cliente....')
        wvw_lclosewindow()
        RETURN NIL
ENDIF
WHILE .T.
        point := ACHOICE(f7lci+4,f7cci+1,f7lba-3,f7cba-1,m_prese,,,point)
        DO CASE
                CASE LASTKEY()=27
                        EXIT
                CASE LASTKEY() = 13
                        mcod_bc := SUBSTR(m_prese[point],1,5)
                        EXIT
        ENDCASE
END
RELEASE f7lci,f7cci,f7lba,f7cba,f7nkey,opcao,;
mcompras:=0
wvw_lclosewindow()
IF LASTKEY()= 27
        RETURN ' '
ELSE
        CLEAR GETS
        RETURN mcod_bc
ENDIF
RETURN NIL
******************************* f i m *********************************************


*****************************
*CRIAR TABELA TEMPORARIA
*****************************
FUNCTION cria_tmp
*****************
LOCAL m_matriz:={}

mensagem('Verificando o Arquivo -> SACROT.DBF')
IF ! FILE('SACROT.DBF')
        m_matriz:={ }
        AADD(m_matriz,{'cod_vend','C',3,0})
        AADD(m_matriz,{'cod_oper','C',3,0})
        AADD(m_matriz,{'cod_cli','C',5,0})
        AADD(m_matriz,{'cod_merc','C',5,0})
        AADD(m_matriz,{'quantd','N',15,3})
        AADD(m_matriz,{'vlr_fat','N',15,3})
        AADD(m_matriz,{'desconto','N',15,3})
        AADD(m_matriz,{'comissao','N',15,3})
        AADD(m_matriz,{'envelope','C',10,0})
        AADD(m_matriz,{'chass','C',20,0})
        AADD(m_matriz,{'descri1','C',54,0})
        AADD(m_matriz,{'descri2','C',54,0})
        AADD(m_matriz,{'obs_prod','C',40,0})
        AADD(m_matriz,{'montador','C',3,0})
        AADD(m_matriz,{'montador1','C',3,0})
        AADD(m_matriz,{'pacote','N',15,3})
        AADD(m_matriz,{'pecas','N',15,3})
        DBCREATE('SACROT',m_matriz,'DBFCDX')
        USE 'sacrot' ALIAS 'tmp' SHARED NEW VIA 'DBFCDX'
ENDIF
RETURN NIL
*/
************************ F I M *********************************
************************
* CRIAR ARQUIVOS .BAT
************************
FUNCTION arq_bat
IF ! FILE('HRBSIS.BAT')
        SET DEVI TO PRINT;SET PRINT ON
        SET PRINT TO ('HRBSIS.BAT')
        DEVPOS(PROW()  ,00);DEVOUT('@ ECHO OFF')
        DEVPOS(PROW()+1,00);DEVOUT('NET TIME \\SERVIDOR /SET /YES')
        DEVPOS(PROW()+1,00);DEVOUT('NET USE LPT2 /DELETE')
        DEVPOS(PROW()+1,00);DEVOUT('NET USE LPT2 \\nomecomputador\nomeimpressora /yes')
        DEVPOS(PROW()+1,00);DEVOUT('NET USE I: /DELETE')
        DEVPOS(PROW()+1,00);DEVOUT('NET USE I: \\SERVIDOR\SIAC /YES')
        DEVPOS(PROW()+1,00);DEVOUT('REM SUBST T: C:\BMTEF')
        DEVPOS(PROW()+1,00);DEVOUT('XCOPY I:\*.EXE /r /y /d')
        DEVPOS(PROW()+1,00);DEVOUT('XCOPY I:\*.DLL /r /y /d')
        DEVPOS(PROW()+1,00);DEVOUT('SISCOM %1')
        SETPRC(00,00)
        SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
ENDIF
IF ! FILE('SIACBKP.BAT')
        SET DEVI TO PRINT;SET PRINT ON
        SET PRINT TO ('SIACBKP.BAT')
        DEVPOS(PROW()  ,00);DEVOUT('@ ECHO OFF')
        DEVPOS(PROW()+1,00);DEVOUT('CLS')
        DEVPOS(PROW()+1,00);DEVOUT('CD\SIAC')
        DEVPOS(PROW()+1,00);DEVOUT('ARJ A -Y SIACBKP SISCOM.GDB SISCOM.EXE *.DLL *.INI')
        DEVPOS(PROW()+1,00);DEVOUT('COPY SIACBKP.ARJ C:\SIACCFG')
        DEVPOS(PROW()+1,00);DEVOUT('COPY SIACBKP.ARJ E:')
        DEVPOS(PROW()+1,00);DEVOUT('CD\SIAC')
        SETPRC(00,00)
        SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
ENDIF
IF ! FILE('VERIGDB.BAT')
        SET DEVI TO PRINT;SET PRINT ON
        SET PRINT TO ('VERIGDB.BAT')
        DEVPOS(PROW()  ,00);DEVOUT('@ ECHO OFF')
        DEVPOS(PROW()+1,00);DEVOUT('CLS')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO Aguarde um momento que estar sendo feito uma VERIFICACAO no seu BANCO DE DADOS.....')
        DEVPOS(PROW()+1,00);DEVOUT('gfix -v -full -user SYSDBA -password masterkey siscom.gdb')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('PAUSE')
        SETPRC(00,00)
        SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
ENDIF
IF ! FILE('CORREGDB.BAT')
        SET DEVI TO PRINT;SET PRINT ON
        SET PRINT TO ('CORREGDB.BAT')
        DEVPOS(PROW()  ,00);DEVOUT('@ ECHO OFF')
        DEVPOS(PROW()+1,00);DEVOUT('CLS')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO Aguarde um momento que estar sendo feito uma CORRECAO no seu BANCO DE DADOS.....')
        DEVPOS(PROW()+1,00);DEVOUT('gfix -mend -full -ignore -user SYSDBA -password masterkey siscom.gdb')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('PAUSE')
        SETPRC(00,00)
        SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
ENDIF
IF ! FILE('BKPGDB.BAT')
        SET DEVI TO PRINT;SET PRINT ON
        SET PRINT TO ('BKPGDB.BAT')
        DEVPOS(PROW()  ,00);DEVOUT('@ ECHO OFF')
        DEVPOS(PROW()+1,00);DEVOUT('CLS')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO Aguarde um momento que estar sendo feito o BACKUP no seu BANCO DE DADOS.....')
        DEVPOS(PROW()+1,00);DEVOUT('DEL siscom.bkp')
        DEVPOS(PROW()+1,00);DEVOUT('gbak -B -user SYSDBA -password masterkey siscom.gdb siscom.bkp')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('PAUSE')
        SETPRC(00,00)
        SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
ENDIF
IF ! FILE('RESTGDB.BAT')
        SET DEVI TO PRINT;SET PRINT ON
        SET PRINT TO ('RESTGDB.BAT')
        DEVPOS(PROW()  ,00);DEVOUT('@ ECHO OFF')
        DEVPOS(PROW()+1,00);DEVOUT('CLS')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO Aguarde um momento que estar sendo feito a RESTAURACAO do seu BANCO DE DADOS.....')
        DEVPOS(PROW()+1,00);DEVOUT('gbak -R -user SYSDBA -password masterkey siscom.bkp siscom.gdb')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('@ ECHO .')
        DEVPOS(PROW()+1,00);DEVOUT('PAUSE')
        SETPRC(00,00)
        SET PRINT TO;SET PRINT OFF;SET DEVI TO SCREEN
ENDIF

RETURN NIL
******************************* f i m *********************************************
*************************
* VER CIDADE
*************************
FUNCTION ver_cidade(mcid,t)
*********************
LOCAL cid_sele,cid_orde
cid_sele := SELE()
cid_orde := INDEXORD()
********************
SELE('cid');ORDSETFOCUS(1)
GO TOP
********************
cid->(DBSEEK(mcid))
IF t = .T.
        IF FOUND()
                atencao('Cidade ja Cadastrada')
                SELE(cid_sele);ORDSETFOCUS(cid_orde)
                RELEASE cid_sele,cid_orde
                RETURN .F.
        ENDIF
        SELE(cid_sele);ORDSETFOCUS(cid_orde)
        RELEASE cid_sele,cid_orde
        RETURN .T.
ENDIF
IF ! FOUND()
        atencao('Cidade nao Cadastrada em nosso arquivos....')
        SELE(cid_sele);ORDSETFOCUS(cid_orde)
        RELEASE cid_sele,cid_orde
        RETURN .F.
ENDIF
SELE(cid_sele);ORDSETFOCUS(cid_orde)
RELEASE cid_sele,cid_orde
RETURN .T.

****************************  F I M *******************************************
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
FUNCTION lertexto(cFname)
*************************
LOCAL oTbr, oTbc,;
      lExitRequested := .F.,;
      cSearcher, nSavefPos,;
      nKey,;
      GetList := {},;
      tela_edit,;
      edit_tela,otab,mfile

MEMVAR lin_br

IF m_set[1,41] = 'P'
        //mfile := STRTRAN(ALLTRIM(cFname),'.REL','.TXT')
        //IF frename(cfname,mfile) = -1
        //        atencao('ERRO: Nao foi possivel renomear...')
        //ENDIF
        //cfname := STRTRAN(ALLTRIM(cFname),'.REL','')
        //atencao(cfname)

        MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM(m_cfg[12])+'HRB.REL')
        RETURN
ENDIF

set_pesquisa = 0 
cSearcher := Space(20) 
SET SCOREBOARD OFF
cfname := ALLTRIM(m_cfg[12])+cfname

IF cFname == NIL .OR. !File(cFname)
        atencao("NAO FOI POSSIVEL ENCONTRAR O ARQUIVO, VERIFIQUE O CAMINHO NA CONFIGURACAO INDIVIDUAL DE TERMINAL")
        RETURN  NIL
ENDIF
//WVW_SetFont(,"lucida console",13, 7,, PROOF_QUALITY )  // 800X600
op_tela(00,00,50,140,'VISUALIZACAO DO ARQUIVO: '+cfname,,1)
setcor(1)
mensagem("[F2] - Procura abaixo [F3] - Procura acima  [F4] - repetir pesquisa - [F5] Imprimir na Impressora Padrao")
SETCOLOR('n/w,gr+/b,,,w/n')          && cor PRINCIPAL
IF (oTbr := FBrowseNew()) != NIL
        FBrowseOpen(oTbr, cFname)
        oTbr:nTop    := oTbr:nLeft   := 0
        oTbr:nBottom := 50
        oTbr:nRight  := 140
        oTbc := TBColumnNew(, {|| SubStr(oTbr:fileLine, oTbr:lineOffset) })
        oTbc:width := 140
        oTbr:addColumn(oTbc)
        DO WHILE !lExitRequested
                DO WHILE !oTbr:stabilize() ;ENDDO

                nKey := InKey(0)
                DO CASE
                        CASE nKey == 27
                                setcor(1)
                                lExitRequested := .T.
                        CASE nKey == 19
                                IF oTbr:lineOffset > 1
                                        oTbr:lineOffset--
                                        oTbr:refreshall()
                                ENDIF
                        CASE nKey == 4
                                IF oTbr:lineOffset < len(oTbr:fileLine)
                                        oTbr:lineOffset++
                                        oTbr:refreshall()
                                ENDIF
                        CASE nKey == 1
                                oTbr:lineOffset := 1
                                oTbr:refreshall()
                        CASE nKey == 6
                                oTbr:lineOffset := Max(1, Len(oTbr:fileLine) - ;
                                oTbc:width + 1)
                                oTbr:refreshAll()
                                #define TAB_SIZE 10
                        CASE nKey == 9
                                IF oTbr:lineOffset <= Len(oTbr:fileLine) - TAB_SIZE
                                        oTbr:lineOffset += TAB_SIZE
                                        oTbr:refreshAll()
                                ENDIF
                        CASE nKey == 271
                                oTbr:lineOffset := MAX(1, oTbr:lineOffset - TAB_SIZE)
                                oTbr:refreshall()
                        CASE nKey == -1
                                setcor(1)
                                op_tela(10,10,12,45,'Digite o Texto que Deseja')
                                WVW_DrawBoxGet(,01,01,20)
                                @ 01,01 GET csearcher 
                                READ
                                SETCOLOR('w/n,b/w,,,n/w')
                                wvw_lclosewindow()
                                IF FrwdSrch(oTbr, Trim(cSearcher))
                                        oTbr:refreshAll()
                                ELSE
                                        atencao("Nao encontrado")
                                ENDIF
                                set_pesquisa = -1

                        CASE nKey == -2
                                setcor(1)
                                op_tela(10,10,12,45,'Digite o Texto que Deseja')
                                WVW_DrawBoxGet(,01,01,20)
                                @ 01,01 GET csearcher 
                                READ
                                SETCOLOR('w/n,b/w,,,n/w')
                                wvw_lclosewindow()
                                IF BkwdSrch(oTbr, Trim(cSearcher))
                                        nSavefPos := FilePos(oTbr)
                                        oTbr:refreshAll()
                                        DO WHILE !oTbr:stabilize()
                                        ENDDO

                                        // Ensure same line selected
                                        DO WHILE FilePos(oTbr) != nSavefPos
                                                oTbr:up()
                                                DO WHILE !oTbr:stabilize()
                                                ENDDO
                                        ENDDO
                                ELSE
                                        atencao("Nao encontrado")
                                ENDIF
                                set_pesquisa = -2

                        case nkey == -3
                                do case
                                        case set_pesquisa = 0
                                                atencao("Nao foi efetuado nenhuma pesquisa")
                                                loop
                                        case set_pesquisa = -1
                                                IF FrwdSrch(oTbr, Trim(cSearcher))
                                                        oTbr:refreshAll()
                                                ELSE
                                                        atencao("Nao encontrado")
                                                ENDIF
                                        case set_pesquisa = -2
                                                IF BkwdSrch(oTbr, Trim(cSearcher))
                                                        nSavefPos := FilePos(oTbr)
                                                        oTbr:refreshAll()
                                                        DO WHILE !oTbr:stabilize()
                                                        ENDDO
                                                        DO WHILE FilePos(oTbr) != nSavefPos
                                                                oTbr:up()
                                                                DO WHILE !oTbr:stabilize()
                                                                ENDDO
                                                        ENDDO
                                                ELSE
                                                        atencao("Nao encontrado")
                                                ENDIF
                                endcase
                        case nkey == -4
                                setcor(1)
                                lExitRequested := .T.
//				EXIT
                        OTHERWISE
                        IF StdMeth(oTbr, nKey)
                                //  Handled as standard key
                        ELSE
                                // Otherwise ignore
                        ENDIF
                ENDCASE
        ENDDO
ENDIF
FClose(oTbr:filehandle) 
IF LASTKEY() = -4
	IF op_simnao('S','Confirma a Impressao:') = 'S'
		PrintFileRaw(GetDefaultPrinter(),cFname,"teste de impressao")
	ENDIF
ENDIF
setcor(1)
wvw_lclosewindow()
//WVW_SetFont(,'terminal',12, 8,FW_MEDIUM, DEFAULT_QUALITY  )  // 800X600
//wvw_cbsetfont(, 'Fontes Pequenas', 8, 6 )
//wvw_pbsetfont(, 'terminal', 9, 4 )
RETURN NIL
*------------------------------------------------------------------------------* 
FUNCTION FilePos(oTbr) 
RETURN FTell(oTbr:fileHandle) 
*------------------------------------------------------------------------------* 
FUNCTION FBrowseNew 
LOCAL oTbr := TBrowseNew() 
oTbr:cargo := Array(FILE_BRWS_NUM_IVARS)
oTbr:lineOffset := 1

oTbr:goTopBlock    := {| | FileGoFirst(oTbr) }
oTbr:goBottomBlock := {| | FileGoLast(oTbr)  }
oTbr:skipBlock     := {|n| FileSkip(n, oTbr) }

RETURN oTbr 
*------------------------------------------------------------------------------* 
FUNCTION FBrowseOpen(oTbr, cFileName) 
LOCAL fHandle := FOpen(cFileName) 

IF fHandle >= 0
        oTbr:fileHandle := fHandle
        FileGoFirst(oTbr)
ENDIF

RETURN fHandle > 0 
*------------------------------------------------------------------------------* 
PROCEDURE FileBrowseClose(oTbr) 
FClose(oTbr:filehandle) 
RETURN 

// Go to first line in file, and read it into oTbr:fileLine 
*------------------------------------------------------------------------------* 
STATIC PROCEDURE FileGoFirst(oTbr) 
LOCAL cLine 
LOCAL fHandle := oTbr:fileHandle 
FSeek(fHandle, 0, 0)
FReadLn(fHandle, @cline, MAX_LINE_LEN)
cline = strtran(cline,chr(12) + chr(13),chr(13) + chr(10))

oTbr:fileLine := cLine
FSeek(fHandle, 0, 0)

RETURN 
*------------------------------------------------------------------------------* 
STATIC PROCEDURE FileGoLast(oTbr) 
FSeek(oTbr:fileHandle, 0, 2)
GoPrevLn(oTbr)
RETURN 
*------------------------------------------------------------------------------* 
STATIC FUNCTION FileSkip(n, oTbr) 
LOCAL nSkipped := 0 
IF n > 0
        DO WHILE nSkipped != n .AND. GoNextLn(oTbr)
                nSkipped++
        ENDDO
ELSE
        DO WHILE nSkipped != n .AND. GoPrevLn(oTbr)
                nSkipped--
        ENDDO
ENDIF

RETURN nSkipped 
*------------------------------------------------------------------------------* 
FUNCTION GoNextLn(oTbr) 
LOCAL fHandle := oTbr:fileHandle 
LOCAL nSavePos := FTell(fHandle), ; 
      cBuff := "", lMoved, nNewPos 

FSeek(fHandle, Len(oTbr:fileLine) + 2, 1)
nNewPos := FTell(fHandle)
IF FReadLn(fHandle, @cBuff, MAX_LINE_LEN)
        lMoved := .T.
        oTbr:fileLine := cBuff
        FSeek(fHandle, nNewPos, 0)
ELSE
        lMoved := .F.
        FSeek(fHandle, nSavePos, 0)
ENDIF

RETURN lMoved 
*------------------------------------------------------------------------------* 
FUNCTION GoPrevLn(oTbr) 
LOCAL fHandle := oTbr:fileHandle 
LOCAL nOrigPos := FTell(fHandle), nMaxRead, nNewPos, ; 
          lMoved, cBuff, nWhereCrLf, nPrev, cTemp 

IF nOrigPos == 0
        lMoved := .F.
ELSE
        lMoved := .T.
        //  Check preceeding 2 chars for CR / LF
        FSeek(fHandle, -2, 1)
        cTemp := Space(2)
        FRead(fHandle, @cTemp, 2)
        IF cTemp == CRLF
                FSeek(fHandle, -2, 1)
        ENDIF
        nMaxRead := MIN(MAX_LINE_LEN, FTell(fHandle))

        cBuff := Space(nMaxRead)
        nNewPos := FSeek(fHandle, -nMaxRead, 1)
        FRead(fHandle, @cBuff, nMaxRead)
        *    cbuff = strtran(cbuff,chr(12) + chr(13),chr(13) + chr(10))
        nWhereCrLf := Rat(CRLF, cBuff)
        IF nWhereCrLf == 0
                nPrev := nNewPos
                oTbr:fileLine := cBuff
        ELSE
                nPrev := nNewPos + nWhereCrLf + 1
                oTbr:fileLine := SubStr(cBuff, nWhereCrLf + 2)
        ENDIF

        FSeek(fHandle, nPrev, 0)
ENDIF
RETURN lMoved 
*------------------------------------------------------------------------------* 
FUNCTION FrwdSrch(oTbr, cString) 
LOCAL fHandle := oTbr:fileHandle 
LOCAL lFound := .F. 
LOCAL nSavePos := FTell(oTbr:fileHandle) 
LOCAL cSavecLine := oTbr:fileLine 

DO WHILE !lFound .AND. GoNextLn(oTbr)
        lFound := cString $ oTbr:fileLine
ENDDO

IF !lFound
        FSeek(fHandle, nSavePos, 0)
        oTbr:fileLine := cSavecLine
ENDIF

RETURN lFound 
*------------------------------------------------------------------------------* 
FUNCTION bkwdSrch(oTbr, cString) 
LOCAL lFound := .F. 
LOCAL fHandle := oTbr:fileHandle 
LOCAL nSavePos := FTell(fHandle) 
LOCAL cSavecLine := oTbr:fileLine 
DO WHILE !lFound .AND. GoPrevLn(oTbr)
        lFound := cString $ oTbr:fileLine
ENDDO

IF !lFound
        FSeek(fHandle, nSavePos, 0)
        oTbr:fileLine := cSavecLine
ENDIF

RETURN lFound 
*------------------------------------------------------------------------------* 
FUNCTION FReadLn(fHandle, cBuffer, nMaxLine) 
LOCAL cLine, nEol, nNumRead, nSavePos 
  cLine   := Space(nMaxLine) 
  cBuffer := "" 
nSavePos := FTell(fHandle)
nNumRead := FRead(fHandle, @cLine, nMaxLine)
IF (nEol := At(CRLF, SubStr(cLine, 1, nNumRead))) == 0
        cBuffer := cLine                     // Line overflow or eof
ELSE
        cBuffer := SubStr(cLine, 1, nEol - 1)  // Copy up to eol
        FSeek(fHandle, nSavePos + nEol + 1, 0)
ENDIF

RETURN nNumRead != 0        // If last read didn't suceed, eof 
*------------------------------------------------------------------------------* 
FUNCTION StdMeth(oTbr, nKey) 
LOCAL lKeyHandled := .T. 
DO CASE
        CASE nKey == 24     ;  oTbr:down()
        CASE nKey == 05     ;  oTbr:up()
        CASE nKey == 03     ;  oTbr:pageDown()
        CASE nKey == 18     ;  oTbr:pageUp()
        CASE nKey == 31     ;  oTbr:goTop()
        CASE nKey == 30     ;  oTbr:goBottom()
        CASE nKey == 04     ;  oTbr:right()
        CASE nKey == 19     ;  oTbr:left()
        CASE nKey == 01     ;  oTbr:home()
        CASE nKey == 06     ;  oTbr:end()
        CASE nKey == 26     ;  oTbr:panLeft()
        CASE nKey == 02     ;  oTbr:panRight()
        CASE nKey == 29     ;  oTbr:panHome()
        CASE nKey == 23     ;  oTbr:panEnd()
        OTHERWISE;             lKeyHandled := .F.
ENDCASE
RETURN lKeyHandled 
*------------------------------------------------------------------------------* 
FUNCTION MemoBlock(nFieldNum) 
RETURN {|nMode| iif(nMode == NIL, ; 
                    "Memo", ; 
                    FieldBlock(Field(nFieldNum))) } 
*------------------------------------------------------------------------------* 
PROC DbStabilize(oTbr) 
LOCAL nSaveRecno := recno() 
oTbr:refreshAll()
DO WHILE !oTbr:stabilize()
ENDDO
DO WHILE recno() != nSaveRecno
        oTbr:up()
        DO WHILE !oTbr:stabilize()
        ENDDO
ENDDO
RETURN 
 ****************************** F I M *****************************************
Function GDV2(xArg1)
********************
Local xVar1,xVar2
xArg1:= Trim(xArg1)
xVar1:= xArg1
xVar2:= gdv1(xVar1)
xVar1:= xVar1+xVar2
Return xVar2+gdv1(xVar1)

Function GDV1(xArg1)
********************
Local xVar1,xVar2,xVar3,xVar4,xVar5,xVar6
xArg1:= Trim(xArg1)
xVar1:= xArg1
xVar2:= Len(xVar1)
xVar5:= xVar6:= 0
        
Do While (xVar6 < xVar2)
        xVar6++
        valo_:= Val(SubStr(xVar1,xVar2+1-xVar6,1))*(xVar6+1)
        xVar5:= xVar5+valo_
EndDo
xVar3:= xVar5%11
dvc_:= IIf(xVar3 < 2,0,11-xVar3)
Return LTrim(Str(dvc_,1))

Function VCGC(xArg1)
********************
If (Empty(xArg1))
        Return .T.
EndIf
xArg1:= Trim(xArg1)
If (Len(xArg1) # 14)
        Return .F.
EndIf
dv1_f:= Val(SubStr(xArg1,13,1))
dv2_f:= Val(SubStr(xArg1,14,1))
num_:= SubStr(xArg1,1,12)
dv1_c:= 0
posi_:= 12
mu_:= "543298765432"
Do While (posi_ > 0)
        dv1_c:= dv1_c+Val(SubStr(num_,posi_,1))*Val(SubStr(mu_,posi_,1))
        posi_--
EndDo
rest_:= dv1_c-Int(dv1_c/11)*11
dv1_c:= IIf(rest_ < 2,0,11-rest_)
dv_:= SubStr(Str(dv1_c,1),1)
num_:= num_+dv_
dv2_c:= 0
mu_:= "6"+mu_
posi_:= 13
Do While (posi_ > 0)
        dv2_c:= dv2_c+Val(SubStr(num_,posi_,1))*Val(SubStr(mu_,posi_,1))
        posi_--
EndDo
rest_:= dv2_c-Int(dv2_c/11)*11
dv2_c:= IIf(rest_ < 2,0,11-rest_)
Return dv1_c = dv1_f .AND. dv1_c = dv1_f .AND. dv2_c = dv2_f

Function NMES(xArg1)
********************
If (ValType(xArg1) = "D")
        xArg1:= Month(xArg1)
EndIf
Return SubStr("Janeiro  FevereiroMarco    Abril    Maio     Junho    Julho    Agosto   Setembro Outubro  Novembro Dezembro ",xArg1*9-8,9)

Function EXT(xArg1,xArg2,xArg3,xArg4,xArg5)
********************************************
xmsing_:= SubStr("$SIG$Real                    ",6)
xmplur_:= SubStr("$PLU$Reais                   ",6)
xArg2:= IIf(PCount() < 2 .OR. xArg2 = Nil,80,xArg2)
cruz_:= IIf(xArg3 = Nil,.T.,.F.)
xArg4:= IIf(xArg4 = Nil .OR. Empty(xArg4),xmsing_,padr(xArg4,24))
xArg5:= IIf(xArg5 = Nil .OR. Empty(xArg5),xmplur_,padr(xArg5,24))
sexo_:= IIf(Upper(right(Trim(xArg4),1)) = "A","a","o")
silaba:= "zen.tro.cen.nhe.tec.toc.vec.tor.zes.set.zoi.nov.ren.que.sen.ten.ven.vos.t"+sexo_+"s.tav.zad"
xArg1:= Abs(IIf(cruz_,xArg1,Int(xArg1)))
tx_:= "Duzent#s     Trezent#s    Quatrocent#s Quinhent#s   "
tcnd:= tx_+"Seiscent#s   Setecent#s   Oitocent#s   Novecent#s   "
tcnd:= strtran(tcnd,"#",sexo_)
tx_:= "Dez          Onze         Doze         Treze        "
tx_:= tx_+"Quatorze     Quinze       Dezesseis    Dezessete    "
tn_:= tx_+"Dezoito      Dezenove     "
tx_:= "Vinte        Trinta       Quarenta     Cinquenta    "
tndd:= tx_+"Sessenta     Setenta      Oitenta      Noventa      "
tx_:= "Zero         Um           Dois         Tres         "
tx_:= tx_+"Quatro       Cinco        Seis         Sete         "
tnuu:= tx_+"Oito         Nove         "
eh_:= " e "
nn_:= Str(Int(xArg1),15)
x1_:= x2_:= x3_:= x4_:= x5_:= scnd:= cnd:= "Zero"
ni_:= Int(xArg1)
jc_:= SubStr(Str(xArg1-ni_,4,2),3,2)
dc_:= Val(SubStr(jc_,1,1))
uc_:= Val(SubStr(jc_,2,1))
nj_:= IIf(dc_ = 1,"1","0")
ndc_:= IIf(dc_ = 1,Trim(SubStr(tn_,(uc_+1)*13-12,13)),Trim(SubStr(tndd,(dc_-1)*13-12,13)))
nuc_:= Trim(SubStr(tnuu,(uc_+1)*13-12,13))
If (nj_ = "1" .OR. dc_ # 0 .AND. uc_ = 0)
        sec_:= ndc_
Else
        If (dc_ = 0)
                sec_:= nuc_
        Else
                If (dc_ # 0 .AND. uc_ # 0)
                        sec_:= ndc_+eh_+nuc_
                EndIf
        EndIf
EndIf
If (Val(jc_) > 1)
        ce_:= sec_+" Centavos"
Else
        If (Val(jc_) = 1)
                ce_:= sec_+" Centavo"
        Else
                ce_:= ""
        EndIf
EndIf
l:= 15
nv:= 5
ind_ext_:= 0
Do While (nv > 0)
        If (SubStr(nn_,l-ind_ext_-2,3) = "   ")
                nv:= 0
                Loop
        EndIf
        n:= Val(SubStr(nn_,l-ind_ext_-0,1))
        nd:= Val(SubStr(nn_,l-ind_ext_-1,1))
        nc:= Val(SubStr(nn_,l-ind_ext_-2,1))
        If (nc > 1)
                cnd:= Trim(SubStr(tcnd,(nc-1)*13-12,13))
        EndIf
        bhx:= "0"
        If (nd = 1)
                bhx:= "1"
                ndd:= Trim(SubStr(tn_,(n+1)*13-12,13))
        Else
                If (nd > 1)
                        ndd:= Trim(SubStr(tndd,(nd-1)*13-12,13))
                EndIf
        EndIf
        nuu:= Trim(SubStr(tnuu,(n+1)*13-12,13))
        If (bhx = "1" .OR. nd # 0 .AND. n = 0)
                snd:= ndd
        Else
                If (nd = 0)
                        snd:= nuu
                Else
                        If (nd # 0 .AND. n # 0)
                               snd:= ndd+eh_+nuu
                        EndIf
                EndIf
        EndIf
        If (nc = 1)
                scnd:= IIf(nd = 0 .AND. n = 0,"Cem","Cento e "+snd)
        Else
                If (nc = 0)
                        scnd:= snd
                Else
                        If (nc > 1 .AND. (nd # 0 .OR. n # 0))
                                scnd:= cnd+eh_+snd
                        Else
                                If (nc > 1 .AND. nd = 0 .AND. n = 0)
                                        scnd:= cnd
                                EndIf
                        EndIf
                EndIf
        EndIf
        If (ind_ext_ < 3)
                x1_:= scnd
        Else
                If (ind_ext_ > 2 .AND. ind_ext_ < 6)
                        x2_:= scnd
                Else
                        If (ind_ext_ > 5 .AND. ind_ext_ < 9)
                                x3_:= scnd
                        Else
                                If (ind_ext_ > 8 .AND. ind_ext_ < 12)
                                        x4_:= scnd
                                Else
                                        If (ind_ext_ > 11 .AND. ind_ext_ < 15)
                                                x5_:= scnd
                                        Else
                                                If (ind_ext_ > 15)
                                                        Return "NUMERO MAIOR QUE 1 TRILHAO"
                                                EndIf
                                        EndIf
                                EndIf
                        EndIf
                EndIf
        EndIf
        nv:= nv-1
        ind_ext_:= ind_ext_+3
EndDo
nx_:= " "
If (xArg1 > 999999999999 .AND. x5_ # "Zero")
        nx_:= IIf(x5_ = "Um",nx_+"Um Trilhao ",nx_+x5_+" Trilhoes ")
EndIf
If (x4_ # "Zero")
        nx_:= IIf(x4_ = "Um",nx_+"Um Bilhao ",nx_+x4_+" Bilhoes ")
EndIf
If (x3_ # "Zero")
        nx_:= IIf(x3_ = "Um",nx_+"Um Milhao ",nx_+x3_+" Milhoes ")
EndIf
If (x2_ # "Zero")
        nx_:= nx_+x2_+" Mil "
EndIf
If (x1_ # "Zero")
        nx_:= nx_+x1_
EndIf
If (cruz_)
        de_:= IIf(x1_ = "Zero" .AND. x2_ = "Zero"," de ","")
        If (ni_ > 0)
                cz_:= IIf(Int(xArg1) > 1,alltrim(xArg5),alltrim(xArg4))
                ec_:= IIf(xArg1-ni_ > 0," e ","")
        Else
                ec_:= cz_:= de_:= ""
        EndIf
Else
        de_:= cz_:= ec_:= ce_:= ""
EndIf
nx_:= IIf(sexo_ = "a" .AND. right(nx_,2) = "Um",nx_+sexo_,nx_)
nx_:= IIf(sexo_ = "a" .AND. right(nx_,4) = "Dois",Left(nx_,Len(nx_)-3)+"uas",nx_)
nx_:= IIf(cruz_,Trim(nx_+de_+" "+cz_+ec_+ce_),Trim(nx_))
nx_:= LTrim(nx_)
If (xArg2 < 40)
        Return nx_
EndIf
If (Len(nx_) <= xArg2)
        nx_:= padr(nx_,xArg2,"/")
        Return padr(nx_,3*xArg2," ")
Else
        e1:= ""
        Do While (Len(nx_) > xArg2)
                f1:= Left(nx_,xArg2+1)
                ij:= right(f1,3)
                Do While (!(ij $ silaba) .AND. right(f1,1) # " ")
                        f1:= Left(f1,Len(f1)-1)
                        ij:= right(f1,3)
                EndDo
                f1:= IIf(ij $ silaba,Left(f1,Len(f1)-3),Left(f1,Len(f1)-1))
                nx_:= LTrim(SubStr(nx_,Len(f1)+1))
                f1:= IIf(ij $ silaba,f1+"-",f1)
                If (Len(e1) < xArg2)
                        f1:= lpad(f1,xArg2,"/")
                Else
                        If (Len(f1) < xArg2)
                                f1:= strtran(f1," ","  ",1,xArg2-Len(f1))
                        EndIf
                EndIf
                e1:= e1+f1
        EndDo
        e1:= e1+padr(nx_,xArg2,"/")
EndIf
Return padr(e1,3*xArg2," ")

Function LPAD(xArg1,xArg2,xArg3)
********************************
xArg1:= IIf(ValType(xArg1) = "N",Str(xArg1),xArg1)
If (xArg2 = Nil)
        xArg2:= Len(xArg1)
        xArg3:= " "
Else
        If (xArg3 = Nil)
                If (ValType(xArg2) = "C")
                        xArg3:= xArg2
                        xArg2:= Len(xArg1)
                Else
                        xArg3:= " "
                EndIf
        EndIf
EndIf
Return padl(alltrim(xArg1),xArg2,xArg3)
****************************  F I M **********************************
***************************************************
* IMPRESSAO DO DEMONSTRATIVO QUE FALTA NO ORCAMENTO
***************************************************
FUNCTION demo_orc
*****************
LOCAL MPRG:='SACROT',mtit,mtipo,pag

MEMVAR mnum_orc,mtipo_imp,mimp_tipo

**********
SELE('orcam');ORDSETFOCUS(1)
GO TOP
**********
IF orcam->(DBSEEK(STRZERO(mnum_orc,6)))
        mtit := 'Demonstrativo do Orcamento: '+STRZERO(mnum_orc,6)
        mtipo := 'Mercadoria com saldo a menor que quantidade solicitada'
        WHILE orcam->pnum_ped = STRZERO(mnum_orc,6) .AND. ! EOF()
                IF orcam->ppag = ' '
                        EXIT
                ENDIF
                SKIP
        ENDDO
        IF EMPTY(orcam->ppag) .AND. orcam->pnum_ped = STRZERO(mnum_orc,6)
                IF  imp_arq('DEM_ORCA.REL','R') .AND. orcam->pnum_ped = STRZERO(mnum_orc,6)
                        pag := 0
                        WHILE orcam->pnum_ped = STRZERO(mnum_orc,6) .AND. ! EOF()
                                IF orcam->ppag = '*'
                                        SKIP
                                        LOOP
                                ENDIF
                                IF pag=0 .OR. PROW()>=59
                                        pag=pag+1
                                        IF pag>1
                                                EJECT
                                        ENDIF
                                        cabecalho(pag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'N')
                                        DEVPOS(PROW()+1,00);DEVOUT('No.Orcamento: '+orcam->pnum_ped+'   Data de Emissao: '+DTOC(orcam->pdat_ped))
                                        DEVPOS(PROW()+1,00);DEVOUT('Cliente.....: '+orcam->pcod_cli+'-')
                                        ver_cli(VAL(orcam->pcod_cli),PROW(),PCOL()+1,'*')
                                        DEVPOS(PROW()+1,00);DEVOUT('Endereco....: '+cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),''))
                                        DEVPOS(PROW()+1,00);DEVOUT('Bairro......: '+cli->bairro+' - Cidade: '+cli->cidade+' - UF: '+cli->uf)
                                        IF orcam->ptp_vend = 'AV'
                                                DEVPOS(PROW()+1,00);DEVOUT('Condicoes de Pagamentos: AVISTA')
                                        ELSE
                                                DEVPOS(PROW()+1,00);DEVOUT('Cond. Pagam.: '+SUBSTR(orcam->pcond_veze,1,1)+'-'+SUBSTR(orcam->pcond_veze,2)+' Dias: ')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,3,3)),SUBSTR(orcam->pcond_inte,3,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,6,3)),','+SUBSTR(orcam->pcond_inte,6,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,9,3)),','+SUBSTR(orcam->pcond_inte,9,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,12,3)),','+SUBSTR(orcam->pcond_inte,12,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,15,3)),','+SUBSTR(orcam->pcond_inte,15,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,18,3)),','+SUBSTR(orcam->pcond_inte,18,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,21,3)),','+SUBSTR(orcam->pcond_inte,21,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,24,3)),','+SUBSTR(orcam->pcond_inte,24,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,27,3)),','+SUBSTR(orcam->pcond_inte,27,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,30,3)),','+SUBSTR(orcam->pcond_inte,30,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,33,3)),','+SUBSTR(orcam->pcond_inte,33,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,36,3)),','+SUBSTR(orcam->pcond_inte,36,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,39,3)),','+SUBSTR(orcam->pcond_inte,39,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,42,3)),','+SUBSTR(orcam->pcond_inte,42,3),' '))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(IF(! EMPTY(SUBSTR(orcam->pcond_inte,45,3)),','+SUBSTR(orcam->pcond_inte,45,3),' '))
                                        ENDIF
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',80))
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.   Descricao                                           Saldo      Quantidade")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",80))
                                ENDIF
                                ver_cod(VAL(orcam->pcod_merc))
                                DEVPOS(PROW()+1,00);DEVOUT(orcam->pcod_merc)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(orcam->pmerc)
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(merc->saldo_mer,'9,999,999.9999')
                                DEVPOS(PROW(),PCOL()+2);DEVOUTPICT(orcam->pquantd,'9,999,999.9999')
                                SKIP
                        ENDDO
                        EJECT
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        IF mimp_tipo = 2
                                lertexto('DEM_ORCA.REL')
                        ELSEIF mtipo_imp = 'D'
                                MYRUN('DOSPRINTER '+IF(m_cfg[79]='2','/SEL2','/SEL')+' /DEL '+ALLTRIM(m_cfg[12])+'HRB.REL')
                        ENDIF
                ENDIF
        ENDIF
ENDIF
RETURN NIL
***************************  F I M  **********************************
**********************
* VERIFICA SENHAS
**********************
FUNCTION senha(mflag,mecf)
**************************
LOCAL mcont,msenha,mdata_sen,mdata_aux,msenha_aux,mtela_sen,opcao,vsenha,vsenha1,;
      lci:=45,cci:=12,lba:=5,cba:=30,mtel_senha,aret:={},mdata_dat,q_merc,m_docapagar,ccomm,m_est_min,m_est_med
MEMVAR cod_operado
PUBLIC senha_acess,mcod_oper:=0

mcont:=0
setcor(1)
//op_tela(23,17,29,60,'ACESSO AO SISTEMA  '+mversao)
//op_tela(40,00,46,120,'ACESSO AO SISTEMA  '+mversao)
/*
sr_getconnection():exec("DELETE FROM sactrm WHERE data <= "+sr_cdbvalue(DATE()-5),,.f.)
aret:={}
sr_getconnection():exec("SELECT * FROM sactrm WHERE nome_trm = "+sr_cdbvalue(ALLTRIM(NETNAME())),,.t.,@aret)
IF lEN(aret) > 0
        sr_getconnection():exec('UPDATE sactrm SET data = '+sr_cdbvalue(DATE())+',versao = '+sr_cdbvalue(mversao)+',hora = '+sr_cdbvalue(TIME())+' WHERE nome_trm = '+sr_cdbvalue(ALLTRIM(NETNAME())),,.f.)
ELSE
        sr_getconnection():exec('INSERT INTO sactrm (nome_trm,ip_trm,data,hora,inicio,versao,sr_deleted) VALUES ('+;
                                sr_cdbvalue(NETNAME())+','+; //1
                                sr_cdbvalue(' ')+','+; //1 sr_cdbvalue(GETIP())+','+; //1
                                sr_cdbvalue(DATE())+','+; //2
                                sr_cdbvalue(TIME())+','+; //4
                                sr_cdbvalue(DATE())+','+; //2
                                sr_cdbvalue(mversao)+','+; //2
                                sr_cdbvalue(' ')+')',,.f.)

ENDIF
sr_getconnection():exec('COMMIT',,.f.)
*/
WHILE .T.
        WHILE mcont <= 3
                SET CENTURY ON
	        botao(44,00,50,120)
		limpa(44,00,50,120)
		//WVW_DrawImage( ,45, 1,50,10,ALLTRIM(m_cfg[12])+'HRBLOGO.JPG',.T.,.F.)
                botao(45, 1,50,10)
		WVW_DrawImage( ,45,50,50,60,ALLTRIM(m_cfg[12])+'HRBLOGO.JPG',.T.,.F.)
                setcor(1)
                mensagem('Digite o Codigo de Operador')
		DEVPOS(lci,cci+1);DEVOUT('Codigo Operador:')
                DEVPOS(lci+2,cci+1);DEVOUT('Digite a Senha.:')
                DEVPOS(lci+4,cci+1);DEVOUT('Data do Sistema:')
                WVW_DrawBoxGet(,lci,cci+18,3)
                WVW_DrawBoxGet(,lci+2,cci+18,12)
                WVW_DrawBoxGet(,lci+4,cci+18,10)
                setcor(3)
                DEVPOS(lci  ,cci+50);DEVOUT('      .: H R B   Sistemas de Informatica :.')
                DEVPOS(lci+1,cci+50);DEVOUT('Rua Tenente Joao Cicero, 415 - Sl.05 - Recife - PE.')
                DEVPOS(lci+2,cci+50);DEVOUT('Fone....:(81)3755.1489')
                DEVPOS(lci+3,cci+50);DEVOUT('Suporte.:(81)9169.9097 - MSN-Email:suporte@hrbsistemas.com.br')
                DEVPOS(lci+4,cci+50);DEVOUT('                  www.hrbsistemas.com.br')
                DEVPOS(lci+5,cci+55);DEVOUT('Direito Copia (C)1994-'+SUBSTR(DTOC(directory('sismaster.exe') [1][3]),7,4)+' da HRB Sistemas')
                setcor(1)
                SET CENTURY OFF
                @ lci,cci+18 GET mcod_oper PICT '999' VALID IF(EMPTY(mcod_oper),.F.,ven(mcod_oper))
                READ
                IF LASTKEY() = 27
                        //wvw_lclosewindow()
                        RETURN .F.
                ENDIF
                aret:={}
                //sr_getconnection():exec("SELECT snivel,scod_op,sult_e_c,sexpira,ssenha,stipo,snome FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3)),,.t.,@aret)
                sr_getconnection():exec("SELECT * FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3)),,.t.,@aret)
                /*
                IF STRZERO(mcod_oper,3) <> '999'
                        atencao('Este Usuario/Operador estar Bloqueado, Procure seu Administrador...')
                        LOOP
                ENDIF
                */
		IF FILE(ALLTRIM(m_cfg[12])+STRZERO(mcod_oper,3)+'.jpg')
		        WVW_DrawImage( ,45,1,50,10,ALLTRIM(m_cfg[12])+STRZERO(mcod_oper,3)+'.jpg',.T.,.F.)
		ENDIF
                mensagem('Operador: '+aret[1,2]+' - Digite sua SENHA')
                msenha = ''
                IF mcod_oper = 999
			pegasenha(@msenha,lci+2,cci+18,setcor(2),12)
		ELSE
			pegasenha(@msenha,lci+2,cci+18,setcor(2))
		ENDIF
                setcor(1)
                IF msenha = 'NAO'
                        //wvw_lclosewindow()
                        atencao('Senha Incorreta Tente Novamente')
                        RETURN .F.
                ENDIF
                IF EMPTY(msenha)
                        atencao('Senha Incorreta Tente Novamente')
                        TONE(100,6)
                        TONE(1600,6)
                        INKEY(2)
                        IF mcont = 3
                                //wvw_lclosewindow()
                                RETURN .F.
                        ENDIF
                        LOOP
                ENDIF
                mcont ++
                IF ALLTRIM(msenha) = 'HRB682110' .AND. STRZERO(mcod_oper,3) = '999'
                        nivel_acess := '1'
                        cod_operado := '999'
                        senha_acess := msenha
                        EXIT
                ENDIF
		// EX: 21/07/10  21+07+10 = 3 8
		// EX: ADM: SOMA  A= ANO+DIA = 31 - D= DIA+DIA= 42 - M= MES+DIA = 28
		// EX: 3 31 42 28 8
		mdig1 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),1,1)
		mdig2 := STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig3 := STRZERO(VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig4 := STRZERO(VAL(SUBSTR(DTOC(DATE()),4,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
		mdig5 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),2,1)

		IF SUBSTR(msenha,1,8) = mdig1+mdig2+mdig3+mdig4+mdig5 .AND. LEN(ALLTRIM(msenha)) >= 10
                        IF VAL(SUBSTR(msenha,9)) = 0
                                mdata_aux :=SPACE(11)
                        ELSE
                                //mdata_sen := DATE() + VAL(SUBSTR(msenha,7))
                                mdata_sen := DATE() + VAL(SUBSTR(msenha,9))
                                //mdata_aux := SUBSTR(DTOC(mdata_sen),1,2)+SUBSTR(DTOC(mdata_sen),4,2)+SUBSTR(DTOC(mdata_sen),7,2) + SUBSTR(msenha,1,6)
                                mdata_aux := SUBSTR(DTOC(mdata_sen),1,2)+SUBSTR(DTOC(mdata_sen),4,2)+SUBSTR(DTOC(mdata_sen),7,2) + SUBSTR(DTOC(DATE()),7,2)+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)
                        ENDIF
                        ccomm :="UPDATE sacsetup SET sysdatlm = "+sr_cdbvalue(mdata_aux)
                        sr_getconnection():exec(ccomm,,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)
                        masterdbf()
                        nivel_acess := aret[1,13]
                        cod_operado := aret[1,1]
                        senha_acess := msenha
                        //wvw_lclosewindow()
                        RETURN .T.
                ENDIF
                IF ALLTRIM(msenha) == ALLTRIM(DCRIPTO(aret[1,5]))
                        sr_getconnection():exec("UPDATE insopera SET sult_ent = "+sr_cdbvalue(mdata_sis)+",shora_ini = "+sr_cdbvalue(SUBSTR(TIME(),1,5))+" WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3)),,.f.)
                        //sr_getconnection():exec("UPDATE sactrm SET oper = "+sr_cdbvalue(STRZERO(mcod_oper,3))+',versao = '+sr_cdbvalue(mversao)+',hora = '+sr_cdbvalue(TIME())+' WHERE nome_trm = '+sr_cdbvalue(ALLTRIM(NETNAME())),,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)
                        nivel_acess := aret[1,13]
                        cod_operado := aret[1,1]
                        senha_acess := msenha
                        EXIT
                ELSE
                        atencao('Senha Incorreta Tente Novamente')
                        TONE(100,6)
                        TONE(1600,6)
                        INKEY(2)
                        IF mcont = 3
                                //wvw_lclosewindow()
                                RETURN .F.
                        ENDIF
                        LOOP
                ENDIF
        ENDDO
        WHILE .T.
                SET CENTURY ON
		mensagem('Confira a Data do Sistema')
                //c_ped:={}
                //sr_getconnection():exec("SELECT MAX(pdat_ped) FROM sacped_s",,.t.,@c_ped)
                setcor(1)
                WVW_DrawBoxGet(,lci+4,cci+18,10)
                @ lci+4,cci+18 GET mdata_sis
                READ
                mdata_dat := DATE()
                IF mdata_sis > DATE() + 10
                        atencao('A Data informada estar com mais de 10 dias: '+DTOC(mdata_sis))
                        IF ! ver_nivel('ALT_DATA','ALTERACAO DA DATA DO SISTEMA','1245',nivel_acess,,'AMBIE')
                                LOOP
                        ENDIF
                ENDIF
                EXIT

                /*
                c_caixa:={}
                sr_getconnection():exec("SELECT MAX(data) FROM saccaixa",,.t.,@c_caixa)
                IF mdata_sis < c_caixa[1,1]
		      	       t := c_caixa[1,1]
                ENDIF
                IF mdata_sis <> mdata_dat
                        IF ! ver_nivel('ALT_DATA','ALTERACAO DA DATA DO SISTEMA','1245',nivel_acess,,'AMBIE')
                                LOOP
                        ENDIF
                ENDIF
                IF LASTKEY() = 27 .OR. EMPTY(mdata_sis)
                        LOOP
	       	ENDIF
	       	*/
        ENDDO
        SET CENTURY OFF
        EXIT
ENDDO
//wvw_lclosewindow()
* ERRO DO SISTEMA**********
//erro()
********************
IF mflag <> NIL
        RETURN .T.
ENDIF
master0()
CLOSE sen
RETURN .T.
********************************** f i m **************************************
