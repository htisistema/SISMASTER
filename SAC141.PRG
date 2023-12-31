*************************
* ALTERACAO DE CONTAS DESPESAS E FORNECEDOR
*************************
FUNCTION sac141
***************
LOCAL MPRG:='SAC141',;
      mfabrica,mendereco,mbairro,mcidade,muf,mcep,mcpostal,mtel1,mtel2,;
      mfax,mcgc,minsc,mprazo_pag,mct_gerente,mct_vendedo,mct_fatura,;
      mct_cobran,mlimite,mobs,mbanco,mcarteira,opcao,li,ci,lb,cb,;
      mcodigo,mcpf,tela,lci,cci,lba,cba,point,memail,mobs1,mobs2,mobs3,mobs4,mobs5,mpocket,mfantasia,minsc_aux
MEMVAR nivel_acess,getlist
PRIVATE mcodconta,mcod_forn

IF ! ver_nivel(mprg,'ALTERACAO DE FORNECEDOR/OUTROS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 22
cba := 78

op_tela(00,00,24,79,'ALTERACAO DE FORNECEDOR/OUTRAS DESPESAS')
WHILE .T.
        *****************
        SELE('forn');ORDSETFOCUS(1)
        *****************
        point := RECNO()
        opcao := 'S'
        mlimite := 0
        mcarteira := mbanco := mpocket := SPACE(1)
        muf := SPACE(2)
        mcodigo := mcodconta := SPACE(4)
        mcpostal := SPACE(6)
        mprazo_pag := SPACE(8)
        mcep := SPACE(9)
        mcpf := SPACE(11)
        mtel1 := mtel2 := mfax := mcgc := minsc := minsc_aux := SPACE(14)
        mct_gerente := mct_vendedo := mct_fatura := mct_cobran := SPACE(15)
        mbairro := mcidade := SPACE(20)
        mendereco := SPACE(35)
        mfabrica := memail := mfantasia := SPACE(40)
        mobs := mobs1:= mobs2:= mobs3:= mobs4:= mobs5:= SPACE(60)
        mensagem('Digite o Nome do Fabricante a ser Cadastrado - <ESC> p/Retornar')
        DEVPOS(lci  ,cci+1);DEVOUT('Codigo....:')
        DEVPOS(lci  ,cci+21);DEVOUT('Data Cadastro:')
        DEVPOS(lci+1,cci+1);DEVOUT('R.Social..:')
        DEVPOS(lci+2,cci+1);DEVOUT('Fantasia..:')
        DEVPOS(lci+4,cci+1);DEVOUT('CNPJ:')
        DEVPOS(lci+4,cci+26);DEVOUT('Insc.:')

        @ lci+5,cci TO lci+5,cba
        DEVPOS(lci+6,cci+1);DEVOUT('Endereco..:')
        DEVPOS(lci+7,cci+1);DEVOUT('Bairro....:')
        DEVPOS(lci+8,cci+1);DEVOUT('Cidade....:')
        DEVPOS(lci+8,cci+35);DEVOUT('UF...:')
        DEVPOS(lci+8,cci+45);DEVOUT('CEP:')
        DEVPOS(lci+9,cci+1);DEVOUT('Local.....:')
        DEVPOS(lci+9,cci+21);DEVOUT('Email:')

        DEVPOS(lci+10,cci+1);DEVOUT('Fone:')
        DEVPOS(lci+10,cci+23);DEVOUT('Fone:')
        DEVPOS(lci+10,cci+45);DEVOUT('Fax:')

        DEVPOS(lci+11,cci+1);DEVOUT('Banco:')
        DEVPOS(lci+11,cci+11);DEVOUT('Carteira:')
        DEVPOS(lci+11,cci+24);DEVOUT('Prazo Pag.:')
        DEVPOS(lci+11,cci+46);DEVOUT('Limite:')

        DEVPOS(lci+12,cci+1);DEVOUT('Gerente..:')
        DEVPOS(lci+12,cci+32);DEVOUT('Faturamento:')
        DEVPOS(lci+13,cci+1);DEVOUT('Cobranca.:')
        DEVPOS(lci+13,cci+32);DEVOUT('Vendedor...:')
        DEVPOS(lci+14,cci+1);DEVOUT('Enviar p/APP...:')

        DEVPOS(lci+15,cci+1);DEVOUT('Observacao.:')
        mensagem('Preencha o restante do Campos - <ESC> p/Retornar')
        mcod_forn := forn->cod_forn
        mfabrica := forn->razao
        mfantasia:= forn->fantasia
        mcodconta := forn->tipo
        mendereco := forn->endereco
        mbairro := forn->bairro
        mcidade := forn->cidade
        muf := forn->uf
        mcep := forn->cep
        mcpostal := forn->cpostal
        memail := forn->email
        mtel1 := forn->tel1
        mtel2 := forn->tel2
        mfax := forn->fax
        mcgc := forn->cgc
        minsc := forn->insc
        mcarteira := forn->carteira
        mbanco := forn->banco
        mprazo_pag := forn->prazo_pag
        mct_gerente := forn->ct_gerente
        mct_vendedo := forn->ct_vendedo
        mct_fatura := forn->ct_fatura
        mct_cobran := forn->ct_cobran
        mlimite := forn->limite
        mobs := forn->obs
        mobs1:= forn->obs1
        mobs2:= forn->obs2
        mobs3:= forn->obs3
        mobs4:= forn->obs4
        mobs5:= forn->obs5
        mpocket := forn->pocket
	minsc_aux := SUBSTR(forn->insc,1,14)        
	setcor(3)
        DEVPOS(lci  ,cci+13);DEVOUT(mcod_forn)
        DEVPOS(lci  ,cci+36);DEVOUT(forn->data_cad)
        setcor(1)
        men_get(lci+4,cci+22,' ')
        lim_get()
        WVW_DrawBoxGet(,lci+1,cci+13,LEN(mfabrica))
        WVW_DrawBoxGet(,lci+3,cci+16,LEN(mcodconta))
        @ lci+1,cci+13 GET mfabrica PICT '@!'
        @ lci+2,cci+13 GET mfantasia PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(SUBSTR(mcodconta,3,2)) .AND. ! EMPTY(mcodconta)
                atencao('Tipo de Conta nao e valida...')
                LOOP
        ENDIF
        WVW_DrawBoxGet(,lci+4,cci+7,LEN(mcgc))
        WVW_DrawBoxGet(,lci+4,cci+33,LEN(minsc))
        @ lci+4,cci+7 GET mcgc PICT '@@R 99.999.999/9999-99' VALID IF(forn->cgc <> mcgc,pesq_cgc(mcgc,'forn','*','forn'),pesq_cgc(mcgc,'forn'))
        @ lci+4,cci+33 GET minsc PICT '@!'

        WVW_DrawBoxGet(,lci+6,cci+13,LEN(mendereco))
        WVW_DrawBoxGet(,lci+7,cci+13,LEN(mbairro))
        WVW_DrawBoxGet(,lci+8,cci+13,LEN(mcidade))
        WVW_DrawBoxGet(,lci+8,cci+42,LEN(muf))
        WVW_DrawBoxGet(,lci+8,cci+50,LEN(mcep))
        WVW_DrawBoxGet(,lci+9,cci+13,LEN(mcpostal))
        WVW_DrawBoxGet(,lci+9,cci+28,LEN(memail))
        @ lci+6,cci+13 GET mendereco PICT '@!'
        @ lci+7,cci+13 GET mbairro PICT '@!'
        @ lci+8,cci+13 GET mcidade PICT '@!'
        @ lci+8,cci+42 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
        @ lci+8,cci+50 GET mcep PICT '99999-999'
        @ lci+9,cci+13 GET mcpostal PICT '999999'
        @ lci+9,cci+28 GET memail

        WVW_DrawBoxGet(,lci+10,cci+7,LEN(mtel1))
        WVW_DrawBoxGet(,lci+10,cci+29,LEN(mtel2))
        WVW_DrawBoxGet(,lci+10,cci+50,LEN(mfax))
        @ lci+10,cci+07 GET mtel1 PICT '@!'
        @ lci+10,cci+29 GET mtel2 PICT '@!'
        @ lci+10,cci+50 GET mfax PICT '@!'

        WVW_DrawBoxGet(,lci+11,cci+8,LEN(mbanco))
        WVW_DrawBoxGet(,lci+11,cci+21,LEN(mcarteira))
        WVW_DrawBoxGet(,lci+11,cci+36,LEN(mprazo_pag))
        WVW_DrawBoxGet(,lci+11,cci+54,12)
        @ lci+11,cci+8 GET mbanco PICT '@!'
        @ lci+11,cci+21 GET mcarteira PICT '@!'
        @ lci+11,cci+36 GET mprazo_pag PICT '@!'
        @ lci+11,cci+54 GET mlimite PICT '9,999,999.99'

        WVW_DrawBoxGet(,lci+12,cci+12,LEN(mct_gerente))
        WVW_DrawBoxGet(,lci+12,cci+45,LEN(mct_fatura))
        WVW_DrawBoxGet(,lci+13,cci+12,LEN(mct_cobran))
        WVW_DrawBoxGet(,lci+13,cci+45,LEN(mct_vendedo))
        @ lci+12,cci+12 GET mct_gerente PICT '@!'
        @ lci+12,cci+45 GET mct_fatura PICT '@!'
        @ lci+13,cci+12 GET mct_cobran PICT '@!'
        @ lci+13,cci+45 GET mct_vendedo PICT '@!'

        WVW_DrawBoxGet(,lci+14,cci+19,LEN(mpocket))
        WVW_DrawBoxGet(,lci+15,cci+14,LEN(mobs))
        WVW_DrawBoxGet(,lci+16,cci+14,LEN(mobs1))
        WVW_DrawBoxGet(,lci+17,cci+14,LEN(mobs2))
        WVW_DrawBoxGet(,lci+18,cci+14,LEN(mobs3))
        WVW_DrawBoxGet(,lci+19,cci+14,LEN(mobs4))
        WVW_DrawBoxGet(,lci+20,cci+14,LEN(mobs5))
        @ lci+14,cci+19 GET mpocket PICT '@!' VALID mpocket $ 'S,N'
        @ lci+15,cci+14 GET mobs
        @ lci+16,cci+14 GET mobs1
        @ lci+17,cci+14 GET mobs2
        @ lci+18,cci+14 GET mobs3
        @ lci+19,cci+14 GET mobs4
        @ lci+20,cci+14 GET mobs5
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Alteracao do FORNECEDOR:')
        IF opcao = 'N'
                LOOP
        ENDIF
        ccomm := "UPDATE sacforn SET "
        ccomm := ccomm + "razao   	= "+sr_cdbvalue(mfabrica      )
        ccomm := ccomm + ",fantasia  	= "+sr_cdbvalue(mfantasia     )
        ccomm := ccomm + ",endereco  	= "+sr_cdbvalue(mendereco     )
        ccomm := ccomm + ",bairro 	= "+sr_cdbvalue(mbairro       )
        ccomm := ccomm + ",cidade 	= "+sr_cdbvalue(mcidade       )
        ccomm := ccomm + ",uf 	 	= "+sr_cdbvalue(muf         )
        ccomm := ccomm + ",tipo 	= "+sr_cdbvalue(mcodconta   )
        ccomm := ccomm + ",cep 	 	= "+sr_cdbvalue(mcep         )
        ccomm := ccomm + ",cpostal 	= "+sr_cdbvalue(mcpostal      )
        ccomm := ccomm + ",email     	= "+sr_cdbvalue(memail        )
        ccomm := ccomm + ",tel1 	= "+sr_cdbvalue(mtel1       )
        ccomm := ccomm + ",tel2 	= "+sr_cdbvalue(mtel2       )
        ccomm := ccomm + ",fax 	 	= "+sr_cdbvalue(mfax         )
        ccomm := ccomm + ",cgc 	 	= "+sr_cdbvalue(mcgc         )
        ccomm := ccomm + ",insc  	= "+sr_cdbvalue(minsc        )
        ccomm := ccomm + ",prazo_pag 	= "+sr_cdbvalue(mprazo_pag    )
        ccomm := ccomm + ",ct_gerente	= "+sr_cdbvalue(mct_gerente   )
        ccomm := ccomm + ",ct_fatura 	= "+sr_cdbvalue(mct_fatura    )
        ccomm := ccomm + ",ct_cobran 	= "+sr_cdbvalue(mct_cobran    ) 
        ccomm := ccomm + ",ct_vendedo	= "+sr_cdbvalue(mct_vendedo   )
        ccomm := ccomm + ",limite 	= "+sr_cdbvalue(mlimite       )
        ccomm := ccomm + ",carteira  	= "+sr_cdbvalue(mcarteira        )
        ccomm := ccomm + ",banco 	= "+sr_cdbvalue(mbanco       )
        ccomm := ccomm + ",obs 	 	= "+sr_cdbvalue(mobs         )
        ccomm := ccomm + ",obs1	 	= "+sr_cdbvalue(mobs1        )
        ccomm := ccomm + ",obs2	 	= "+sr_cdbvalue(mobs2        )
        ccomm := ccomm + ",obs3	 	= "+sr_cdbvalue(mobs3        )
        ccomm := ccomm + ",obs4	 	= "+sr_cdbvalue(mobs4        )
        ccomm := ccomm + ",obs5	 	= "+sr_cdbvalue(mobs5        )
        ccomm := ccomm + ",pocket	= "+sr_cdbvalue(mpocket      )
        ccomm := ccomm + " WHERE cod_forn = "+sr_cdbvalue(mcod_forn)
        sr_getconnection():exec(ccomm,,.f.)

        IF mfabrica <> forn->razao
	        sr_getconnection():exec("UPDATE sacmerc SET fabrica = "+sr_cdbvalue(mfabrica)+" WHERE cod_fab = "+sr_cdbvalue(mcod_forn),,.f.)
        ENDIF
        mcons_cam := {}
        sr_getconnection():exec("SELECT atu_forn FROM cam_dba",,.t.,@mcons_cam)
        IF LEN(mcons_cam) > 0
                IF SR_SetActiveConnection(nCnn1) > 0 .AND. mcons_cam[1,1] = 'S'
                        sr_getconnection():exec(ccomm,,.f.)
                        sr_getconnection():exec('COMMIT',,.f.)
                ENDIF
        ENDIF
        SR_SetActiveConnection(nCnn)
	IF minsc <> minsc_aux
	        opcao := op_simnao('S','Deseja Atualizar a INSCRICAO no Movimento deste Fornecedor [S/n]:')
       		IF opcao = 'S'
			mensagem('Aguarde um momento ATUALIZANDO o Movimento deste Fornecedor...')
               		ccomm := "UPDATE sactotnt SET insc_cli = "+sr_cdbvalue(minsc)+" WHERE cod_cli = "+sr_cdbvalue(mcod_forn)
	                sr_getconnection():exec(ccomm,,.f.)
	                sr_getconnection():exec('COMMIT',,.f.)

	        ENDIF
	ENDIF			

        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
 ********************************** f i m *******************************
