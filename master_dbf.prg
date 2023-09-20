* FUNCAO PARA ATUALIZAR OS DBF'S
********************************
FUNCTION master_dbf(mtp)
************************
LOCAL mprg:='MASTER_DBF'

PRIVATE mdata_merc,matualiza,mmerc,mtela,mdata_ver,matual,mtela_bkp,mdata_arq,;
        mnome_arq:='',mmensagem:='',mmov,mdata_mov,aret:={},m_mat:={},matriz:={},mdata_caix,mcaix,;
        i:=0,cons_prod := {}
IF m_cfg[2] <> 'S'
	RETURN NIL
ENDIF
mdata_caix := CTOD('02/02/2015')
mdata_set  := CTOD('08/10/2019')
mdata_mov  := CTOD('11/02/2020')
mdata_merc := CTOD('07/06/2022')
IF mtp = 'arquivo'
	matualiza := mmerc := mmov := mset := mcaix := 'X'
ELSE
	matualiza := mmerc := mmov := mset := mcaix := ' '
	IF SUBSTR(m_cfg[13],2,1) = '9' .OR. SUBSTR(m_cfg[13],2,1) = '8' .OR. SUBSTR(m_cfg[13],2,1) = '7'
        	mdata_ver := CTOD(SUBSTR(m_cfg[13],7,2)+'/'+SUBSTR(m_cfg[13],4,2)+'/20'+STRZERO(VAL(SUBSTR(m_cfg[13],2,1)),2))
	ELSE
        	mdata_ver := CTOD(SUBSTR(m_cfg[13],8,2)+'/'+SUBSTR(m_cfg[13],5,2)+'/20'+STRZERO(VAL(SUBSTR(m_cfg[13],2,2)),2))
	ENDIF
ENDIF
//atencao(dtoc(mdata_ver))
IF mdata_ver < mdata_mov ;matualiza := mmov := 'X'    ;ENDIF
IF mdata_ver < mdata_set ;matualiza := mset := 'X'    ;ENDIF
IF mdata_ver < mdata_caix ;matualiza := mcaix := 'X'    ;ENDIF
IF mdata_ver < mdata_merc ;matualiza := mmerc := 'X'    ;ENDIF
IF matualiza = 'X'
        alt_tb()
        IF mmerc = 'X'
                mmensagem :=             '***** Arquivo MASTPROD  I N C L U I R    *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp
                mmensagem := mmensagem + '              << A L T E R A C A O >>'+m_qp
                mmensagem := mmensagem + '              << PORTA - N - 2,0 >>'+m_qp
                mmensagem := mmensagem + '              << CODIGO - CHAR para INTEGER >>'+m_qp+m_qp
                mmensagem := mmensagem + '***** Arquivo MASTMOV ALTERAR    *****'+m_qp
                mmensagem := mmensagem + '              << COD_PROD - CHAR para INTEGER >>'+m_qp
                mmensagem := mmensagem + '***** Arquivo MASTMOVNT ALTERAR    *****'+m_qp
                mmensagem := mmensagem + '              << CODIGO - CHAR para INTEGER >>'+m_qp
                atencao(mmensagem)
        ENDIF
        IF mmov = 'X'
                mmensagem :=             '***** Arquivo MASTMOV  I N C L U I R    *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp
                mmensagem := mmensagem + '***** Arquivo MASTMOV  A L T E R A R    *****'+m_qp
                mmensagem := mmensagem + '              << qtd N 12,3>>'+m_qp
                mmensagem := mmensagem + '***** Arquivo MASTMOV  MOVER    *****'+m_qp
                mmensagem := mmensagem + '    << Posicao 23 -> SR_RECNO >>'+m_qp
                atencao(mmensagem)
        ENDIF
        IF mset = 'X'
                mmensagem :=             '***** Arquivo SACSETUP  I N C L U I R    *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp
                atencao(mmensagem)
        ENDIF
        IF mcaix = 'X'
                mmensagem :=             '***** Arquivo SACCAIXA  I N C L U I R    *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp
                atencao(mmensagem)
        ENDIF
ENDIF

IF LEN(m_cfg) > 0
        FCLOSE('mastercfg.ini')
        //MYRUN('REN mastercfg.ini mastercfg01.ini')
        //FCREATE('mastercfg.ini' )
        mArq        := fcreate("mastercfg.ini" )
        sLinhas := '001 C Caminho do Banco Dados='+m_cfg[1] + m_qp + ;
                   '002 C Tipo de Terminal      ='+m_cfg[2] + m_qp + ;
                   '003 C md5                   ='+m_cfg[3] + m_qp + ;
                   '004 N Quantidade Terminais  ='+STRZERO(m_cfg[4],3) + m_qp + ;
                   '005 C Porta Cozinha (Prod.) ='+m_cfg[5] + m_qp + ;
                   '006 C Porta Bar     (Prod.) ='+m_cfg[6] + m_qp + ;
                   '007 C Porta Outros  (Prod.) ='+m_cfg[7] + m_qp + ;
                   '008 C Caminho arq Impressao ='+m_cfg[8] + m_qp + ;
                   '009 C Porta Geral Impressao ='+m_cfg[9] + m_qp + ;
                   '010 N Qtd.Linhas p/Corte    ='+STRZERO(m_cfg[10],3)+ m_qp + ;
                   '011 C Caminho Foto Produto  ='+m_cfg[11]+ m_qp + ;
                   '012 C Caminho Geral         ='+m_cfg[12]+ m_qp + ;
                   '013 C Versao do sistema     ='+mversao+ m_qp + ;
                   '014 C Tipo de Tela          ='+m_cfg[14]+ m_qp + ;
                   '015 C IP DO ACBR ("ip":3434)='+ALLTRIM(m_cfg[15])+ m_qp + ;
                   '016 C CAMINHO DA NFE        ='+ALLTRIM(m_cfg[16])+ m_qp + ;
                   '017 C CAMINHO DO ACBRMONITOR='+ALLTRIM(m_cfg[17])
        fwrite( mArq, @sLinhas, len( sLinhas ) )
        FCLOSE(mArq)
ENDIF

sr_getconnection():exec("UPDATE sacsetup SET ver = "+sr_cdbvalue(mversao),,.f.)
sr_getconnection():exec("COMMIT",,.f.)
RETURN NIL
************************************ F I M *******************************************
* FUNCAO PARA ATUALIZAR OS TABELAS
***********************************
FUNCTION alt_tb
***************
sr_begintransaction()
IF mmerc = 'X'
        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD grupo VARCHAR(3)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD componente VARCHAR(60)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD componente1 VARCHAR(60)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD minimo DECIMAL(12,3)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD maximo DECIMAL(12,3)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD ncm VARCHAR(8)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD cst VARCHAR(4)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END

        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD CODBARRA VARCHAR(14)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastprod ADD desc_livre CHAR(1)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
ENDIF
sr_getconnection():exec('COMMIT',,.f.)
IF mmov = 'X'
        TRY
                sr_getconnection():exec('ALTER TABLE mastmov ADD unidade VARCHAR(3)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastmov ADD dez_perc VARCHAR(1)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastmov ADD custo DECIMAL(12,2)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastmov ADD tipo VARCHAR(1)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE mastmov ADD excecao VARCHAR(60)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE insopera ADD plug VARCHAR(12)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        sr_getconnection():exec("COMMIT",,.f.)
        TRY
                sr_getconnection():exec('ALTER TABLE mastmov DROP SR_DELETED',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        sr_getconnection():exec("COMMIT",,.f.)
        /*
        cons_prod := {}
        sr_getconnection():exec("SELECT codigo FROM mastprod",,.t.,@cons_prod)
        i := 0
        FOR i = 1 TO LEN(cons_prod)
               sr_getconnection():exec("UPDATE mastprod SET codigo = "+sr_cdbvalue(ALLTRIM(STR(VAL(cons_prod[i,1]))))+" WHERE codigo = "+sr_cdbvalue(cons_prod[i,1]),,.f.)
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)

        op_tela(0,0,4,50)
        DEVPOS(0,0);DEVOUT('PRODUTO..:')
        DEVPOS(1,0);DEVOUT('DOCUMENTO:')
        DEVPOS(2,0);DEVOUT('MESAS....:')

        cons_prod := {}
        sr_getconnection():exec("SELECT cod_prod FROM mastmov GROUP BY cod_prod ORDER BY cod_prod",,.t.,@cons_prod)
        i := 0
        FOR i = 1 TO LEN(cons_prod)
               DEVPOS(0,10);DEVOUT(cons_prod[i,1])
               sr_getconnection():exec("UPDATE mastmov SET cod_prod = "+sr_cdbvalue(ALLTRIM(STR(VAL(cons_prod[i,1]))))+",tipo = 'M' WHERE cod_prod = "+sr_cdbvalue(cons_prod[i,1]),,.f.)
        NEXT

        cons_prod := {}
        sr_getconnection():exec("SELECT num_doc FROM mastmov GROUP BY num_doc ORDER BY num_doc",,.t.,@cons_prod)
        i := 0
        FOR i = 1 TO LEN(cons_prod)
               DEVPOS(1,10);DEVOUT(cons_prod[i,1])
               sr_getconnection():exec("UPDATE mastmov SET num_doc = "+sr_cdbvalue(ALLTRIM(STR(VAL(cons_prod[i,1]))))+" WHERE num_doc ="+sr_cdbvalue(cons_prod[i,1]),,.f.)
        NEXT
        cons_prod := {}
        sr_getconnection():exec("SELECT num_local FROM mastmov GROUP BY num_local ORDER BY num_local",,.t.,@cons_prod)
        i := 0
        FOR i = 1 TO LEN(cons_prod)
               DEVPOS(2,10);DEVOUT(cons_prod[i,1])
               sr_getconnection():exec("UPDATE mastmov SET num_local = "+sr_cdbvalue(ALLTRIM(STR(VAL(SUBSTR(cons_prod[i,1],2)))))+" WHERE num_local ="+sr_cdbvalue(cons_prod[i,1]),,.f.)
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)

        cons_prod := {}
        sr_getconnection():exec("SELECT num_doc,data FROM mastnummov",,.t.,@cons_prod)
        i := 0
        FOR i = 1 TO LEN(cons_prod)
               DEVPOS(3,10);DEVOUT(cons_prod[i,1])
               sr_getconnection():exec("INSERT INTO mastmovcab (mesa) VALUES ('1')",,.f.)
        NEXT
        cons_prod := {}
        sr_getconnection():exec("SELECT MAX(id) FROM mastmovcab",,.t.,@cons_prod)
        sr_getconnection():exec("DELETE FROM mastmovcab where id < "+sr_cdbvalue(cons_prod[1,1]-1),,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        wvw_lclosewindow()
        */
        //sr_endtransaction()
ENDIF
sr_getconnection():exec('COMMIT',,.f.)
IF mset = 'X'
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD usa_grupo VARCHAR(1)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD tip_lanc VARCHAR(1)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD qtd_pessoa VARCHAR(1)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD masc_qtd VARCHAR(14)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD masc_vlr VARCHAR(14)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD icm_firma DECIMAL(3,2)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD simp_nac VARCHAR(1)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD CNPJ VARCHAR(14)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
        TRY
                sr_getconnection():exec('ALTER TABLE sacsetup ADD desc_max DECIMAL(10,2)',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
ENDIF
sr_getconnection():exec('COMMIT',,.f.)
IF mcaix = 'X'
        TRY
                sr_getconnection():exec('ALTER TABLE mastcaixa ADD data_fecha DATE',,.f.)
                sr_committransaction()
        CATCH E
                tracelog(valtoprg())
                sr_rollbacktransaction()
        END
ENDIF
sr_endtransaction()
sr_getconnection():exec('COMMIT',,.f.)
RETURN NIL