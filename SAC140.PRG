* INCLUSAO DE FORNECEDOR / CONTA A PAGAR
*************************
FUNCTION sac140
***************
LOCAL MPRG:='SAC140',;
      mcod_forn,mfabrica,mendereco,mbairro,mcidade,muf,mcep,mcpostal,mtel1,mtel2,;
      mfax,mcgc,minsc,mprazo_pag,mct_gerente,mct_vendedo,mct_fatura,;
      mct_cobran,mlimite,mobs,mbanco,mcarteira,opcao,li,ci,lb,cb,;
      mcodigo,tela,tela1,tela2,lba,cba,point,pode,memail,mobs1,mobs2,;
      mobs3,mobs4,mobs5,mcpf,mdata_cad,mct_cobranca,mpocket := ' ',mfantasia
MEMVAR nivel_acess,mdata_sis,getlist
PRIVATE mcodconta

IF ! ver_nivel(mprg,'INCLUSAO DE FORNECEDOR/CONTA APAGAR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba := 22
cba := 90
op_tela(00,10,32,70,' Inclusao de Fornecedor e OUTROS ',,1)
WHILE .T.
        opcao := mpocket := 'S'
        mlimite := 0
        mcarteira := mbanco := SPACE(1)
        muf := SPACE(2)
        mcodigo := mcod_forn := mcodconta := SPACE(4)
        mcpostal := SPACE(6)
        mprazo_pag := SPACE(8)
        mcep := SPACE(9)
        mcpf := SPACE(11)
        mtel1 := mtel2 := mfax := mcgc := minsc := SPACE(14)
        mct_gerente := mct_vendedo := mct_fatura := mct_cobranca := SPACE(15)
        mbairro := mcidade := SPACE(20)
        mendereco := SPACE(35)
        mfabrica := memail := mfantasia := SPACE(40)
        mobs := mobs1:= mobs2:= mobs3:= mobs4:= mobs5:= SPACE(60)

        mensagem('Digite o Nome do Fabricante a ser Cadastrado - <ESC> p/Retornar')
        DEVPOS( 0,1);DEVOUT('Data Cadastro:')
        DEVPOS( 1,1);DEVOUT('Codigo.......:')
        DEVPOS( 2,1);DEVOUT('Razao Social.:')
        DEVPOS( 3,1);DEVOUT('Fantasia.....:')
        DEVPOS( 4,1);DEVOUT('CNPJ.........:')
        DEVPOS( 5,1);DEVOUT('Inscricao....:')

        DEVPOS( 6,1);DEVOUT('Endereco.....:')
        DEVPOS( 7,1);DEVOUT('Bairro.......:')
        DEVPOS( 8,1);DEVOUT('Cidade.......:')
        DEVPOS( 9,1);DEVOUT('UF...........:')
        DEVPOS(10,1);DEVOUT('CEP..........:')
        DEVPOS(11,1);DEVOUT('Local........:')
        DEVPOS(12,1);DEVOUT('Email........:')

        DEVPOS(13,1);DEVOUT('Fone.........:')
        DEVPOS(14,1);DEVOUT('Fone.........:')
        DEVPOS(15,1);DEVOUT('Fax..........:')

        DEVPOS(16,1);DEVOUT('Banco........:')
        DEVPOS(17,1);DEVOUT('Carteira.....:')
        DEVPOS(18,1);DEVOUT('Prazo Pag....:')
        DEVPOS(19,1);DEVOUT('Limite.......:')

        DEVPOS(20,1);DEVOUT('Gerente......:')
        DEVPOS(21,1);DEVOUT('Faturamento..:')
        DEVPOS(22,1);DEVOUT('Cobranca.....:')
        DEVPOS(23,1);DEVOUT('Vendedor.....:')
        DEVPOS(24,1);DEVOUT('Enviar p/APP.:')

        DEVPOS(25,1);DEVOUT('Observacao...:')
        ***********
        SELE('forn');ORDSETFOCUS(1)
        GO BOTT
        ***********

        mcod_forn := STRZERO(VAL(forn->cod_forn)+1,4)

        SET INTEN ON
        setcor(3)
        mdata_cad = mdata_sis

        setcor(3)
        DEVPOS(0  ,16);DEVOUT(mdata_cad)
        DEVPOS(1  ,16);DEVOUT(mcod_forn)
        setcor(1)
        @ 2,16 GET mfabrica PICT '@!' VALID IF(EMPTY(mfabrica),.F.,.T.)
        @ 3,16 GET mfantasia PICT '@!'
        READ
        IF LASTKEY() = 27
                SELE('forn');ORDSETFOCUS(2)
                GO TOP
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(SUBSTR(mcodconta,3,2)) .AND. ! EMPTY(mcodconta)
                atencao('Tipo de Conta nao e valida...')
                LOOP
        ENDIF
        @ 4,16 GET mcgc PICT '@@R 99.999.999/9999-99' VALID pesq_cgc(mcgc,'forn','*','forn')
        @ 5,16 GET minsc PICT '@!'

        @ 6,16 GET mendereco PICT '@!'
        @ 7,16 GET mbairro PICT '@!'
        @ 8,16 GET mcidade PICT '@!'
        @ 9,16 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
        @ 10,16 GET mcep PICT '99999-999'
        @ 11,16 GET mcpostal PICT '999999'
        @ 12,16 GET memail

        @ 13,16 GET mtel1 PICT '@!'
        @ 14,16 GET mtel2 PICT '@!'
        @ 15,16 GET mfax PICT '@!'

        @ 16,16 GET mbanco PICT '@!'
        @ 17,16 GET mcarteira PICT '@!'
        @ 18,16 GET mprazo_pag PICT '@!'
        @ 19,16 GET mlimite PICT '9,999,999.99'

        @ 20,16 GET mct_gerente PICT '@!'
        @ 21,16 GET mct_fatura PICT '@!'
        @ 22,16 GET mct_cobranca PICT '@!'
        @ 23,16 GET mct_vendedo PICT '@!'
        @ 24,16 GET mpocket PICT '@!' VALID mpocket $ 'S,N'

        @ 25,16 GET mobs
        @ 26,16 GET mobs1
        @ 27,16 GET mobs2
        @ 28,16 GET mobs3
        @ 29,16 GET mobs4
        @ 30,16 GET mobs5
        READ
        IF LASTKEY() = 27
                SELE('forn');ORDSETFOCUS(2)
                GO TOP
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a Inclusao do FORNECEDOR:')
        IF opcao = 'N'
                LOOP
        ENDIF
        sr_getconnection():exec('INSERT INTO mastforn ('+;
        'cod_forn  ,'+; //1
        'razao 	   ,'+; //2
        'fantasia  ,'+; //3
        'tipo 	   ,'+; //4
        'data_cad  ,'+; //5
        'endereco  ,'+; //6
        'bairro    ,'+; //7
        'cidade    ,'+; //8
        'uf 	   ,'+; //9
        'cep 	   ,'+; //10
        'cpostal   ,'+; //11
        'email 	   ,'+; //12
        'tel1 	   ,'+; //13
        'tel2 	   ,'+; //14
        'fax 	   ,'+; //15
        'cgc 	   ,'+; //16
        'insc 	   ,'+; //17
        'prazo_pag ,'+; //18
        'ct_gerente,'+; //19
        'ct_fatura ,'+; //20
        'ct_cobran ,'+; //21
        'ct_vendedo,'+; //22
        'limite    ,'+; //23
        'carteira  ,'+; //24
        'banco 	   ,'+; //25
        'obs       ,'+; //26
        'obs1	   ,'+; //27
        'obs2	   ,'+; //28
        'obs3	   ,'+; //20
        'obs4      ,'+;//30
        'obs5	   ,'+; //31
        'pocket	   ,'+; //32
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(mcod_forn                   )+','+; //1
        sr_cdbvalue(mfabrica                    )+','+; //2
        sr_cdbvalue(mfantasia                   )+','+; //3
        sr_cdbvalue(mcodconta                   )+','+; //4
        sr_cdbvalue(mdata_cad                   )+','+; //5
        sr_cdbvalue(mendereco                   )+','+; //6
        sr_cdbvalue(mbairro                     )+','+; //7
        sr_cdbvalue(mcidade                     )+','+; //8
        sr_cdbvalue(muf                         )+','+; //9
        sr_cdbvalue(mcep                        )+','+; //10
        sr_cdbvalue(mcpostal                    )+','+; //11
        sr_cdbvalue(memail                      )+','+; //12
        sr_cdbvalue(mtel1                       )+','+; //13
        sr_cdbvalue(mtel2                       )+','+; //14
        sr_cdbvalue(mfax                        )+','+; //15
        sr_cdbvalue(mcgc                        )+','+; //16
        sr_cdbvalue(minsc                       )+','+; //17
        sr_cdbvalue(mprazo_pag                  )+','+; //18
        sr_cdbvalue(mct_gerente                 )+','+; //19
        sr_cdbvalue(mct_fatura                  )+','+; //20
        sr_cdbvalue(mct_cobranca                )+','+; //21
        sr_cdbvalue(mct_vendedo                 )+','+; //22
        sr_cdbvalue(mlimite     		)+','+; //23
        sr_cdbvalue(mcarteira                   )+','+; //24
        sr_cdbvalue(mbanco                      )+','+; //25
        sr_cdbvalue(mobs                        )+','+; //26
        sr_cdbvalue(mobs1                       )+','+; //27
        sr_cdbvalue(mobs2                       )+','+; //28
        sr_cdbvalue(mobs3                       )+','+; //29
        sr_cdbvalue(mobs4                       )+','+; //30
        sr_cdbvalue(mobs5                       )+','+; //31
        sr_cdbvalue(mpocket                     )+','+; //32
        sr_cdbvalue(' ')+')',,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDDO
RETURN NIL
********************************** f i m *******************************
