* #include "visual2.ch"
*************************
* INCLUSAO DE CLIENTE
*************************
FUNCTION mast130(malt_excl,mc_cli)
***************
LOCAL MPRG:='MAST130',;
      opcao,lci,cci,lba,cba,mrazao,mnome,mdata_cad,mendereco,;
      mbairro,mtel1,mtel2,mfax,mobs,mdata_nas,;
      mtipo,memail,mcpf,mcgc,minsc,mcomplemento,mnumero,mrota:=SPACE(70)
MEMVAR nivel_acess,mdata_sis,getlist
PRIVATE mnome_vend,mcom_ven,mcidade,muf,mcep,mcod_cli,mcod_vend

IF malt_excl = NIL
        IF ! ver_nivel(mprg,'INCLUSAO DE CLIENTE *** CADASTRO ***','125',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSEIF malt_excl = 'A'
        IF ! ver_nivel(mprg+malt_excl,'ALTERACAO DE CLIENTE *** CADASTRO ***','125',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSE
        IF ! ver_nivel(mprg+malt_excl,'EXCLUSAO DE CLIENTE *** CADASTRO ***','125',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ENDIF
lci := cci := 0
lba := 22
cba := 99

li := ci := 00
lb := 22
cb := 79

CLEAR GETS
mcomercio := 'N'
op_tela(10,00,33,60,' Inclusao de CLIENTES  ['+mprg+']',,1)
WHILE .T.
        exibi_prg(mprg)
        opcao := 'S'
        mcod_cli := SPACE(5)
        mrazao := mnome := SPACE(40)
        mtipo := 'C'
        mdata_nas := CTOD('  /  /  ')
        mdata_cad := mdata_sis
        mendereco := SPACE(35)
        mbairro := SPACE(20)
        mcidade := SPACE(25)
        memail  := SPACE(40)
        muf := SPACE(2)
        mcep := SPACE(9)
        mtel1 := mtel2 := mfax := mcgc := minsc := SPACE(10)
        mcpf := SPACE(11)
        mobs := SPACE(60)
        mrota := SPACE(70)
        mcomplemento := SPACE(10)
        mnumero := SPACE(6)
        mensagem('Digite o Nome do Cliente a ser Incluido - <ESC> p/Retornar')
        DEVPOS(lci+0 ,cci+1);DEVOUT('Codigo....:')
        DEVPOS(lci+1 ,cci+1);DEVOUT('Cadastro..:')
        DEVPOS(lci+2 ,cci+1);DEVOUT('R.Social..:')
        DEVPOS(lci+3 ,cci+1);DEVOUT('Fantasia..:')
        DEVPOS(lci+4 ,cci+1);DEVOUT('Data Nasc.:')

        DEVPOS(lci+5 ,cci+1);DEVOUT('Endereco..:')
        DEVPOS(lci+6 ,cci+1);DEVOUT('Numero....:')
        DEVPOS(lci+7 ,cci+1);DEVOUT('Compl.....:')
        DEVPOS(lci+8 ,cci+1);DEVOUT('Bairro....:')
        DEVPOS(lci+9 ,cci+1);DEVOUT('Cidade....:')
        DEVPOS(lci+10,cci+1);DEVOUT('UF........:')
        DEVPOS(lci+11,cci+1);DEVOUT('CEP.......:')
        DEVPOS(lci+12,cci+1);DEVOUT('e-mail....:')
        DEVPOS(lci+13,cci+1);DEVOUT('Rota......:')

        DEVPOS(lci+14,cci+1);DEVOUT('CNPJ......:')
        DEVPOS(lci+15,cci+1);DEVOUT('Inscricao.:')
        DEVPOS(lci+16,cci+1);DEVOUT('CPF.......:')

        DEVPOS(lci+17,cci+1);DEVOUT('Celular...:')
        DEVPOS(lci+18,cci+1);DEVOUT('Fone......:')
        DEVPOS(lci+19,cci+1);DEVOUT('Fone......:')
        mdata_cad := mdata_sis

	IF ! EMPTY(mc_cli)
		aret:={}
		sr_getconnection():exec("SELECT * FROM mastcli WHERE cod_cli = "+sr_cdbvalue(mc_cli),,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
		IF LEN(aret) = 0
                        atencao('CLIENTE nao encontrado...')
                        EXIT
		ENDIF
                mcod_cli        := aret[1,1]
                mrazao          := aret[1,2]
                mnome           := aret[1,3]
                mdata_cad       := aret[1,4]
                mdata_nas       := aret[1,5]
                mendereco       := aret[1,8]
                mnumero         := aret[1,9]
                mcomplemento    := aret[1,10]
                mbairro         := aret[1,11]
                mcidade         := aret[1,13]
                muf             := aret[1,14]
                mcep            := aret[1,15]
                memail          := aret[1,16]
                mrota           := aret[1,17]
                mtel1           := aret[1,18]
                mtel2           := aret[1,19]
                mfax            := aret[1,20]
                mcgc            := aret[1,21]
                minsc           := aret[1,22]
                mcpf            := aret[1,23]
                mobs            := aret[1,25]
                setcor(3)
                DEVPOS(lci+0,cci+13);DEVOUT(mc_cli)
                setcor(1)

	ENDIF
        @ lci+1,cci+13 GET mdata_cad PICT '99/99/99' VALID lim_get() WHEN malt_excl # NIL .AND. men_get(1,1,'Caso deseja Incluir o codigo do cliente Tecle: <ALT> + A')
	READ
        @ lci+2,cci+13 GET mrazao PICT '@!' VALID IF(EMPTY(mrazao),.F.,.T.) WHEN malt_excl # 'E'
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        @ lci+3,cci+13 GET mnome PICT '@!' WHEN malt_excl # 'E'
        @ lci+4,cci+13 GET mdata_nas WHEN malt_excl # 'E'
        @ lci+5,cci+13 GET mendereco PICT '@!' WHEN malt_excl # 'E'
        @ lci+6,cci+58 GET mnumero PICT '@!' WHEN malt_excl # 'E'
        @ lci+7,cci+74 GET mcomplemento PICT '@!' WHEN malt_excl # 'E'
        @ lci+8,cci+13 GET mbairro PICT '@!' WHEN malt_excl # 'E'
        READ
        mcidade := SUBSTR(UPPER(m_set[1,9]),1,20)
        mcidade := saccid(,mcidade,,m_set[1,10],@mcep)
        setcor(3)
        @ lci+9,cci+13 SAY mcidade
        setcor(1)
        @ lci+10,cci+13 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf)) WHEN malt_excl # 'E'
        @ lci+11,cci+13 GET mcep PICT '@@R 99999-999' WHEN malt_excl # 'E'
        @ lci+12,cci+13 GET memail WHEN malt_excl # 'E'
        @ lci+13,cci+13 GET mrota WHEN malt_excl # 'E'
        @ lci+14,cci+13 GET mcgc PICT '@@R 99.999.999/9999-99' VALID pesq_cgc(mcgc,'cli','*','cli') WHEN malt_excl # 'E'
        @ lci+15,cci+13 GET minsc PICT '@!'  WHEN malt_excl # 'E'
        @ lci+16,cci+13 GET mcpf PICT '@@R 999.999.999-99' WHEN malt_excl # 'E'
        @ lci+17,cci+13 GET mtel1 WHEN malt_excl # 'E'
        @ lci+18,cci+13 GET mtel2 WHEN malt_excl # 'E'
        @ lci+19,cci+13 GET mfax WHEN malt_excl # 'E'
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mnome == SPACE(30)
                mnome := mrazao
                setcor(3)
                DEVPOS(lci+3,13);DEVOUT(mnome)
                setcor(1)
        ENDIF
        IF malt_excl = NIL
                opcao := op_simnao('S','Confirma a Inclusao do Cliente [S/n]:')
                IF opcao = 'S'
                        IF EMPTY(muf)
                                mensagem('Nao foi preenchido a campo do Estado, Campo Obrigatorio !!!')
                                @ lci+8,cci+13 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                        ENDIF
                        IF EMPTY(mcod_cli)
                                ****************
                                SELE('cli');ORDSETFOCUS(1)
                	       ****************
	                       IF BLOQARQ()
                	                GO BOTT
                        	        mcod_cli := STRZERO(VAL(cli->cod_cli)+1,5)
	                       ENDIF
                	ENDIF
                        nulo := 'NULL'
                        sr_getconnection():exec('INSERT INTO mastcli ('+;
                        'cod_cli   ,'+; //1
                        'razao     ,'+; //2
                        'nome      ,'+; //3
                        'data_cad  ,'+; //4
                        'nascimento,'+; //5
                        'endereco  ,'+; //6
                        'numero     ,'+;//7
                        'complemento,'+;//8
                        'bairro    ,'+; //9
                        'cidade    ,'+; //10
                        'uf        ,'+; //11
                        'cep       ,'+; //12
                        'email     ,'+; //13
                        'tel1      ,'+; //14
                        'tel2      ,'+; //15
                        'fax       ,'+; //16
                        'cgc       ,'+; //17
                        'insc      ,'+; //18
                        'cpf       ,'+; //19
                        'obs       ,'+; //20
                        'rota      ,'+; //20
                        'SR_DELETED )'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mcod_cli                                    )+','+; //1
                        sr_cdbvalue(mrazao                                      )+','+; //2
                        sr_cdbvalue(mnome                                       )+','+; //3
                        sr_cdbvalue(mdata_cad                                   )+','+; //4
                        IF(! EMPTY(mdata_nas),sr_cdbvalue(mdata_nas),nulo       )+','+; //5
                        sr_cdbvalue(mendereco                                   )+','+; //6
                        sr_cdbvalue(mnumero                                     )+','+; //7
                        sr_cdbvalue(mcomplemento                                )+','+; //8
                        sr_cdbvalue(mbairro                                     )+','+; //9
                        sr_cdbvalue(mcidade                                     )+','+; //10
                        sr_cdbvalue(muf                                         )+','+; //11
                        sr_cdbvalue(mcep                                        )+','+; //12
                        sr_cdbvalue(memail                                      )+','+; //13
                        sr_cdbvalue(mtel1                                       )+','+; //14
                        sr_cdbvalue(mtel2                                       )+','+; //15
                        sr_cdbvalue(mfax                                        )+','+; //16
                        sr_cdbvalue(mcgc                                        )+','+; //17
                        sr_cdbvalue(minsc                                       )+','+; //18
                        sr_cdbvalue(mcpf                                        )+','+; //19
                        sr_cdbvalue(mobs                                        )+','+; //20
                        sr_cdbvalue(mrota                                       )+','+; //21
                        sr_cdbvalue(' ')+')',,.f.)
                        ****************
                        SELE('cli');ORDSETFOCUS(1)
                        ****************
                        setcor(3)
                        DEVPOS(lci+0,cci+13);DEVOUT(mcod_cli)
                        setcor(1)
                        INKEY(2)
                        CLEAR GETS
                        mp := '*'
                        ORDSETFOCUS(2)
                        wvw_lclosewindow()
                        RETURN mp
                ENDIF
        ELSEIF malt_excl = 'A'
                opcao := op_simnao('S','Confirma a ALTERACAO do Cliente [S/n]:')
                nulo := 'NULL'

                IF opcao = 'S'
                        sr_getconnection():exec('UPDATE mastcli SET '+;
                        'cod_cli     = '+sr_cdbvalue(mcod_cli                                    )+','+; //1
                        'razao       = '+sr_cdbvalue(mrazao                                      )+','+; //2
                        'nome        = '+sr_cdbvalue(mnome                                       )+','+; //3
                        'data_cad    = '+sr_cdbvalue(mdata_cad                                   )+','+; //4
                        'nascimento  = '+IF(! EMPTY(mdata_nas),sr_cdbvalue(mdata_nas),nulo       )+','+;
                        'endereco    = '+sr_cdbvalue(mendereco                                   )+','+; //6
                        'numero      = '+sr_cdbvalue(mnumero                                     )+','+; //7
                        'complemento = '+sr_cdbvalue(mcomplemento                                )+','+; //8
                        'bairro      = '+sr_cdbvalue(mbairro                                     )+','+; //9
                        'cidade      = '+sr_cdbvalue(mcidade                                     )+','+; //1
                        'uf          = '+sr_cdbvalue(muf                                         )+','+; //1
                        'cep         = '+sr_cdbvalue(mcep                                        )+','+; //1
                        'email       = '+sr_cdbvalue(memail                                      )+','+; //1
                        'tel1        = '+sr_cdbvalue(mtel1                                       )+','+; //1
                        'tel2        = '+sr_cdbvalue(mtel2                                       )+','+; //1
                        'fax         = '+sr_cdbvalue(mfax                                        )+','+; //1
                        'cgc         = '+sr_cdbvalue(mcgc                                        )+','+; //1
                        'insc        = '+sr_cdbvalue(minsc                                       )+','+; //1
                        'cpf         = '+sr_cdbvalue(mcpf                                        )+','+; //1
                        'obs         = '+sr_cdbvalue(mobs                                        )+','+; //2
                        'rota        = '+sr_cdbvalue(mrota                                       )+' '+; //2
                        'WHERE cod_cli = '+sr_cdbvalue(mcod_cli),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                ENDIF
        ELSEIF malt_excl = 'E'
                opcao := op_simnao('N','Confirma a EXCLUSAO do Cliente [S/n]:')
                IF opcao = 'S'
                        sr_getconnection():exec("DELETE FROM mastcli WHERE cod_cli = "+sr_cdbvalue(mc_cli),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        RETURN mp
                ENDIF
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
