MEMVAR getlist
*************************
* ALTERACAO DE CLIENTE
*************************
FUNCTION sac131(mcod_cli)
***************
LOCAL MPRG:='SAC131',;
      tela,opcao,lci,cci,lba,cba,mrazao,mnome,mendereco,;
      mbairro,mtel1,mtel2,mfax,mcgc,minsc_aux,minsc,mcpf,;
      mcontato,mcomprado,mvendedor,mprazo_pag,marea,mlimite,mobs,;
      mcodoper,mop_hist,mhistorico,li,ci,lb,cb,tela1,mdata_nas,mtipo,;
      mrg,morgao,mdat_emi,memail,mop_tab,mspc,mbloqueio,maniver,matac_vare,;
      mempre_c,mcargo_c,msalario_c,mend_c,mbairro_c,mcidade_c,muf_c,mcep_c,;
      mfone_c1,mfone_c2,mloja1,mtel_loja1,mdesde1,mloja2,mtel_loja2,mdesde2,;
      mnome_r1,mfone_r1,mnome_r2,mfone_r2,mbanco1,mag1,mconta1,mbanco2,mag2,;
      mconta2,mcartao1,mno1,mvenc1,mcartao2,mno2,mvenc2,mpai,mmae,mdesconto,;
      mend_cob,mbairro_cob,mcidade_cob,muf_cob,mcep_cob,mfone_cob,;
      mdia1_ini,mdia1_fim,mvenc1_dup,mdia2_ini,mdia2_fim,mvenc2_dup,mregiao,;
      ml_obs1,ml_obs2,ml_obs3,mnome1,mdata_nas1,mnome2,mdata_nas2,;
      mnome3,mdata_nas3,mnome4,mdata_nas4,mnome5,mdata_nas5,mcod_forn:=0,;
      mrota:=SPACE(70),mrota1:=SPACE(70),maltera:=' ',m_hist:={},m_ponto:={},mlin1,mlin2,mlin3,;
      mlin4,mlin5,mlin6,mponto:=0,mdata_con,linhas:=0,i:=0,mAPP...:=' ',mcod_c,moutros:='N',;
      m_cliaux:={},mdata_bloq,mobs_bloq,mdepen:=' ',mnumero,mcomplemento,mnaturalidade,mcons_cam:={},mboleto:=' '

MEMVAR nivel_acess

PRIVATE mnome_vend,mcom_ven,muf,mcep,mcidade,mcod_cond:=0,mcod_profi:=0,mcod_vend

IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF

IF ! ver_nivel(mprg,'ALTERACAO DE CLIENTE *** CADASTRO ***','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 00
lba := 35
cba := 100

li := 01
ci := 00
lb := 22
cb := 79
SET KEY 281 TO cliprod()
SET KEY -9 TO ctrl_w()
CLEAR GETS
op_tela(00,00,35,100,' Alteracao de CLIENTES ')
WHILE .T.
        opcao := 'S'
        matac_vare:= mtipo := mtipo_cli := maltera := mspc := mbloqueio := SPACE(1)
        muf := muf_c := muf_cob := mdia1_ini := mdia1_fim := mvenc1_dup:=;
        mdia2_ini := mdia2_fim := mvenc2_dup:= mregiao   := SPACE(2)
        mcep_cob := mcep_c := mcep := mprazo_pag := SPACE(6)
        morgao := mbanco1 := mag1 := mconta1 := mbanco2 := mag2 :=;
        mconta2 := SPACE(10)
        mcpf := SPACE(11)
        mfone_c1 := mfone_c2 := mtel_loja1 := mtel_loja2 := mfone_r2 :=;
        mfone_cob := SPACE(13)
        mtel1 := mtel2 := mfax := mcgc := minsc := minsc_aux := mrg := SPACE(14)
        mcargo_c := mcartao1 := mcartao2 := mcomprado := mcontato :=;
        marea := SPACE(15)
        mno1 := mno2 := SPACE(17)
        mbairro := mcidade := mempre_c := mbairro_c := mcidade_c := ;
        mbairro_cob := mcidade_cob := SPACE(20)
        mloja1 := mloja2 := mnome_r1 := mfone_r1 := mnome_r2 := mpai :=;
        mmae := mnaturalidade := SPACE(25)
        mendereco := mend_c := mend_cob := mnome1 := mnome2 := mnome3 :=;
        mnome4 := mnome5 := SPACE(35)
        mrazao := mnome := memail := SPACE(40)
        mrota := mrota1 := SPACE(70)
        mobs := SPACE(60)
        mdata_nas := mdat_emi := mdesde1 := mdesde2 := mvenc1 := mvenc2 :=;
        mdata_nas1:= mdata_nas2:= mdata_nas3:= mdata_nas4:= mdata_nas5:= CTOD('  /  /  ')
        mlimite := mcod_cond := mcod_vend := mcodoper := msalario_c := ;
        mdesconto := 0
        mop_tab := moutros := mdepen := mboleto := 'N'
        mnumero := SPACE(6)
        mcomplemento := SPACE(10)
        mensagem('Alterar campos - <ALT+P>Cons.Produtos - <ESC>p/Abandonar')
        DEVPOS(lci+0,cci+1);DEVOUT('Codigo....:')
        DEVPOS(lci+0,cci+21);DEVOUT('Data Cadastro:')
        DEVPOS(lci+1,cci+1);DEVOUT('R.Social..:')
        DEVPOS(lci+1,cci+55);DEVOUT('Data Nasc.:')
        DEVPOS(lci+2,cci+1);DEVOUT('Fantasia..:')
        DEVPOS(lci+2,cci+55);DEVOUT('Tipo Cliente.:')

        DEVPOS(lci+3,cci+1);DEVOUT('Endereco..:')
        DEVPOS(lci+3,cci+50);DEVOUT('Numero:')
        DEVPOS(lci+3,cci+66);DEVOUT('Compl.:')
        DEVPOS(lci+4,cci+1);DEVOUT('Bairro....:')
        DEVPOS(lci+4,cci+35);DEVOUT('Cidade:')
        DEVPOS(lci+4,cci+70);DEVOUT('UF:')
        DEVPOS(lci+4,cci+78);DEVOUT('CEP:')
        DEVPOS(lci+5,cci+1);DEVOUT('Naturalidade:')
        DEVPOS(lci+5,cci+42);DEVOUT('e-mail:')
        DEVPOS(lci+6,cci+1);DEVOUT('Rota......:')

        DEVPOS(lci+8,cci+1);DEVOUT('CNPJ......:')
        DEVPOS(lci+8,cci+32);DEVOUT('Insc.:')
        DEVPOS(lci+8,cci+60);DEVOUT('Profissao:')
        DEVPOS(lci+9,cci+1);DEVOUT('CPF.......:')
        DEVPOS(lci+9,cci+30);DEVOUT('RG:')
        DEVPOS(lci+9,cci+50);DEVOUT('Orgao:')
        DEVPOS(lci+9,cci+70);DEVOUT('Emissao:')

        DEVPOS(lci+10,cci+1);DEVOUT('Fone......:')
        DEVPOS(lci+10,cci+29);DEVOUT('Fone:')
        DEVPOS(lci+10,cci+51);DEVOUT('Fax:')

        DEVPOS(lci+11,cci+01);DEVOUT('Filiacao....:')
        DEVPOS(lci+11,cci+56);DEVOUT('e')

        //DEVPOS(lci+10,cci+1);DEVOUT('FATURAMENTOS: Dia Inic.:   final:   Venc.1:   - Dia Inic.:   final:   Venc.2:')
        DEVPOS(lci+12,cci+1);DEVOUT('Comprador.:')
        DEVPOS(lci+12,cci+29);DEVOUT('Prazo Pag.:')
        DEVPOS(lci+12,cci+50);DEVOUT('Emissao Boleto [S/N]:')
        DEVPOS(lci+12,cci+75);DEVOUT('Contato:')
        DEVPOS(lci+13,cci+1);DEVOUT('Area......:')
        DEVPOS(lci+13,cci+28);DEVOUT('Limite:')
        DEVPOS(lci+13,cci+47);DEVOUT('Desc.Especial:      %')
        DEVPOS(lci+13,cci+70);DEVOUT('Cons.SPC:')
        DEVPOS(lci+14,cci+1);DEVOUT('[V]arejista - [A]tacadista:')
        DEVPOS(lci+14,cci+32);DEVOUT('Cond.Pagamento:')
        DEVPOS(lci+15,cci+1);DEVOUT('Bloq.Credito:')
        DEVPOS(lci+15,cci+16);DEVOUT('Data:')
        DEVPOS(lci+15,cci+30);DEVOUT('Motivo:')

        DEVPOS(lci+16,cci+01);DEVOUT('Observacao..:')
        DEVPOS(lci+19,cci+01);DEVOUT('Vend.Respon.:')
        DEVPOS(lci+19,cci+54);DEVOUT('Operador Resp.:')
        DEVPOS(lci+19,cci+73);DEVOUT('Regiao/Vend.:')

        DEVPOS(lci+20,cci+01);DEVOUT('End.Cobranca:')
        DEVPOS(lci+20,cci+55);DEVOUT('Bairro:')
        DEVPOS(lci+21,cci+01);DEVOUT('Cidade......:')
        DEVPOS(lci+21,cci+37);DEVOUT('UF:')
        DEVPOS(lci+21,cci+44);DEVOUT('CEP:')
        DEVPOS(lci+21,cci+59);DEVOUT('Fone:')

        DEVPOS(lci+22,cci+01);DEVOUT('Empresa.....:')
        DEVPOS(lci+22,cci+41);DEVOUT('Cargo:')
        DEVPOS(lci+22,cci+64);DEVOUT('Salario:')
        DEVPOS(lci+23,cci+01);DEVOUT('Endereco....:')
        DEVPOS(lci+23,cci+51);DEVOUT('Bairro:')
        DEVPOS(lci+24,cci+01);DEVOUT('Cidade......:')
        DEVPOS(lci+24,cci+37);DEVOUT('UF:')
        DEVPOS(lci+24,cci+44);DEVOUT('CEP:')
        DEVPOS(lci+24,cci+59);DEVOUT('Fone:')
        DEVPOS(lci+24,cci+80);DEVOUT('Fax:')


        DEVPOS(lci+25,cci+01);DEVOUT('Ref.Pessoal.:')
        DEVPOS(lci+25,cci+44);DEVOUT('Fone:')
        DEVPOS(lci+26,cci+01);DEVOUT('Ref.Pessoal.:')
        DEVPOS(lci+26,cci+44);DEVOUT('Fone:')
        DEVPOS(lci+27,cci+01);DEVOUT('Loja........:')
        DEVPOS(lci+27,cci+44);DEVOUT('Desde:')
        DEVPOS(lci+28,cci+01);DEVOUT('Loja........:')
        DEVPOS(lci+28,cci+44);DEVOUT('Desde:')
        DEVPOS(lci+29,cci+01);DEVOUT('Banco.......:')
        DEVPOS(lci+29,cci+28);DEVOUT('Agencia:')
        DEVPOS(lci+29,cci+49);DEVOUT('C/C:')
        DEVPOS(lci+30,cci+01);DEVOUT('Banco.......:')
        DEVPOS(lci+30,cci+28);DEVOUT('Agencia:')
        DEVPOS(lci+30,cci+49);DEVOUT('C/C:')
        DEVPOS(lci+31,cci+01);DEVOUT('Cartao......:')
        DEVPOS(lci+31,cci+33);DEVOUT('No.:')
        DEVPOS(lci+31,cci+58);DEVOUT('Venc.:')
        DEVPOS(lci+32,cci+01);DEVOUT('Cartao......:')
        DEVPOS(lci+32,cci+33);DEVOUT('No.:')
        DEVPOS(lci+32,cci+58);DEVOUT('Venc.:')

        DEVPOS(lci+33,cci+1);DEVOUT('Envia p/APP... [s/N]:')
        DEVPOS(lci+33,cci+24);DEVOUT('Historico[s/N]:')
        DEVPOS(lci+33,cci+41);DEVOUT('Tab.Prod.[s/N]:')
        DEVPOS(lci+33,cci+59);DEVOUT('Data Anivers.[s/N]:')
        DEVPOS(lci+34,cci+1);DEVOUT('Conjuge/Avalista:')
        DEVPOS(lci+34,cci+21);DEVOUT('Dependentes [s/N]:')
        SET INTEN ON
        ****************
        SELE('cli');ORDSETFOCUS(2)
        ****************
        mcod_c := cli->cod_cli
        mrazao := cli->razao
        mnome := cli->nome
        mdata_nas := cli->nascimento
        mtipo := cli->tipo
        mtipo_cli := cli->tipo
        mendereco := cli->endereco
        mbairro := cli->bairro
        mcidade := cli->cidade
        muf := cli->uf
        mcep := cli->cep
        memail := cli->email
        mrota  := cli->rota
        mrota1  := cli->rota1
        mtel1 := cli->tel1
        mtel2 := cli->tel2
        mfax := cli->fax
        mcgc := cli->cgc
        minsc := SUBSTR(cli->insc,1,14)
        minsc_aux := SUBSTR(cli->insc,1,14)
        mcpf := cli->cpf
        mrg := cli->rg
        morgao := cli->orgao
        mdat_emi := cli->dat_emi
        mcomprado := cli->comprado
        mcontato = cli->contato
        mprazo_pag := SUBSTR(cli->prazo_pag,1,6)
        marea := cli->area
        mlimite := cli->limite
        matac_vare := cli->atac_vare
        mspc := cli->spc
        mobs := cli->obs
        mdesconto := cli->desconto
        mdia1_ini := cli->dia1_ini
        mdia1_fim := cli->dia1_fim
        mvenc1_dup:= cli->venc1_dup
        mdia2_ini := cli->dia2_ini
        mdia2_fim := cli->dia2_fim
        mvenc2_dup:= cli->venc2_dup
        mboleto := IF(AT('S',cli->prazo_pag) > 0,'S','N')
        mcod_vend := VAL(cli->codvend)
        mcodoper := VAL(cli->codoper)

        mempre_c   := cli-> empre_c
        mcargo_c   := cli-> cargo_c
        msalario_c := cli-> salario_c
        mend_c     := cli-> end_c
        mbairro_c  := cli-> bairro_c
        mcidade_c  := cli-> cidade_c
        muf_c      := cli-> uf_c
        mcep_c     := cli-> cep_c
        mfone_c1   := cli-> fone_c1
        mfone_c2   := cli-> fone_c2
        mloja1     := cli-> loja1
        mtel_loja1 := cli-> tel_loja1
        mdesde1    := cli-> desde1
        mloja2     := cli-> loja2
        mtel_loja2 := cli-> tel_loja2
        mdesde2    := cli-> desde2
        mnome_r1   := cli-> nome_r1
        mfone_r1   := cli-> fone_r1
        mnome_r2   := cli-> nome_r2
        mfone_r2   := cli-> fone_r2
        mbanco1    := cli-> banco1
        mag1       := cli-> ag1
        mconta1    := cli-> conta1
        mbanco2    := cli-> banco2
        mag2       := cli-> ag2
        mconta2    := cli-> conta2
        mcartao1   := cli-> cartao1
        mno1       := cli-> no1
        mvenc1     := cli-> venc1
        mcartao2   := cli-> cartao2
        mno2       := cli-> no2
        mvenc2     := cli-> venc2
        mpai       := cli-> pai
        mmae       := cli-> mae
        mend_cob    := cli->end_cob
        mbairro_cob := cli->bairro_cob
        mcidade_cob := cli->cidade_cob
        muf_cob     := cli->uf_cob
        mcep_cob    := cli->cep_cob
        mfone_cob   := cli->fone_cob
        mregiao     := cli->regiao
        mcod_forn   := VAL(cli->codforn)
        mAPP...     := cli->APP...
        ml_obs1   := cli->l_obs1
        ml_obs2   := cli->l_obs2
        ml_obs3   := cli->l_obs3
        mcod_cond := VAL(cli->cod_cond)
        mbloqueio := cli->bloqueio
        mnome1     :=  cli-> nome1
        mdata_nas1 :=  cli-> data_nas1
        mnome2     :=  cli-> nome2
        mdata_nas2 :=  cli-> data_nas2
        mnome3     :=  cli-> nome3
        mdata_nas3 :=  cli-> data_nas3
        mnome4     :=  cli-> nome4
        mdata_nas4 :=  cli-> data_nas4
        mnome5     :=  cli-> nome5
        mdata_nas5 :=  cli-> data_nas5
        mcod_profi :=  VAL(cli-> cod_profi)
        mdata_bloq := cli->data_bloq
        mobs_bloq  := cli->obs_bloq
        mnumero    := cli->numero
        mcomplemento := cli->complemento
        mnaturalidade := cli->naturalidade
        SETCOR(3)
        DEVPOS(lci+4,cci+43);DEVOUT(mcidade)
        DEVPOS(lci+0,cci+13);DEVOUT(cli->cod_cli)
        DEVPOS(lci+0,cci+36);DEVOUT(cli->data_cad)
        DEVPOS(lci+4,cci+43);DEVOUT(cli->cidade)
        DEVPOS(lci+19,cci+15);DEVOUT(STRZERO(mcod_vend,3))
        @ lci+4,cci+74 SAY muf
        @ lci+4,cci+82 SAY mcep PICT '@@R 99999-999'
        @ lci+5,cci+14 SAY mnaturalidade
        @ lci+5,cci+50 SAY memail
        @ lci+6,cci+13 SAY mrota
        @ lci+7,cci+13 SAY mrota1
        @ lci+8,cci+13 SAY mcgc PICT '@@R 99.999.999/9999-99'
        @ lci+8,cci+39 SAY minsc
        @ lci+8,cci+70 SAY mcod_profi PICT '99999'
        @ lci+9,cci+13 SAY mcpf PICT '@@R 999.999.999-99'
        @ lci+9,cci+34 SAY mrg
        @ lci+9,cci+57 SAY morgao
        @ lci+9,cci+79 SAY mdat_emi

        @ lci+10,cci+13 SAY mtel1
        @ lci+10,cci+35 SAY mtel2
        @ lci+10,cci+56 SAY mfax

        @ lci+11,cci+15 SAY mpai
        @ lci+11,cci+58 SAY mmae
        @ lci+12,cci+13 SAY mcomprado
        @ lci+12,cci+41 SAY mprazo_pag PICT '@R 99-99-99'
        @ lci+12,cci+72 SAY mboleto
        @ lci+12,cci+84 SAY mcontato
        @ lci+13,cci+13 SAY marea
        @ lci+13,cci+35 SAY mlimite PICT '999,999.99'
        @ lci+13,cci+61 SAY mdesconto PICT '999.99'
        @ lci+13,cci+79 SAY mspc
        @ lci+14,cci+29 SAY matac_vare
        @ lci+14,cci+48 SAY mcod_cond
        @ lci+15,cci+14 SAY mbloqueio
        @ lci+15,cci+21 SAY mdata_bloq
        @ lci+15,cci+38 SAY mobs_bloq
        @ lci+16,cci+15 SAY mobs
        @ lci+17,cci+15 SAY ml_obs1
        @ lci+18,cci+15 SAY ml_obs2
        @ lci+19,cci+15 SAY mcod_vend
        @ lci+19,cci+69 SAY mcodoper
        @ lci+19,cci+86 SAY mregiao

        @ lci+20,cci+15 SAY mend_cob
        @ lci+20,cci+63 SAY mbairro_cob
        @ lci+21,cci+15 SAY mcidade_cob
        @ lci+21,cci+41 SAY muf_cob
        @ lci+21,cci+49 SAY mcep_cob PICT '@@R 99999-999'
        @ lci+21,cci+65 SAY mfone_cob

        @ lci+22,cci+15 SAY mempre_c
        @ lci+22,cci+48 SAY mcargo_c
        @ lci+22,cci+73 SAY msalario_c PICT '999,999.99'
        @ lci+23,cci+15 SAY mend_c
        @ lci+23,cci+59 SAY mbairro_c
        @ lci+24,cci+15 SAY mcidade_c
        @ lci+24,cci+41 SAY muf_c
        @ lci+24,cci+49 SAY mcep_c PICT '@@R 99999-999'
        @ lci+24,cci+65 SAY mfone_c1
        @ lci+24,cci+85 SAY mfone_c2

        @ lci+25,cci+15 SAY mnome_r1
        @ lci+25,cci+50 SAY mfone_r1
        @ lci+26,cci+15 SAY mnome_r2
        @ lci+26,cci+50 SAY mfone_r2
        @ lci+27,cci+15 SAY mloja1
        @ lci+27,cci+50 SAY mdesde1
        @ lci+28,cci+15 SAY mloja2
        @ lci+28,cci+50 SAY mdesde2
        @ lci+29,cci+15 SAY mbanco1
        @ lci+29,cci+36 SAY mag1
        @ lci+29,cci+54 SAY mconta1
        @ lci+30,cci+15 SAY mbanco2
        @ lci+30,cci+36 SAY mag2
        @ lci+30,cci+54 SAY mconta2
        @ lci+31,cci+15 SAY mcartao1
        @ lci+31,cci+37 SAY mno1
        @ lci+31,cci+64 SAY mvenc1
        @ lci+32,cci+15 SAY mcartao2
        @ lci+32,cci+37 SAY mno2
        @ lci+32,cci+64 SAY mvenc2

        @ lci+33,cci+22 SAY mAPP...
        @ lci+33,cci+39 SAY mop_hist
        @ lci+33,cci+57 SAY mop_tab
        @ lci+33,cci+79 SAY maniver
        @ lci+34,cci+18 SAY moutros
        @ lci+34,cci+40 SAY mdepen
        setcor(1)
        ven(mcod_vend,lci+19,cci+20)
        ver_aniv(VAL(cli->cod_cli))
        mop_hist := 'N'
        maniver := 'N'
        @ lci+1,cci+13 GET mrazao PICT '@!' VALID IF(EMPTY(mrazao),.F.,.T.)
        @ lci+1,cci+67 GET mdata_nas
        @ lci+2,cci+13 GET mnome PICT '@!'
        IF ver_serie() = '141488'
                @ lci+2,cci+70 GET mtipo PICT '@!' VALID mtipo $ 'C,D,B,R,P,E,O' .AND. lim_get() WHEN men_get(lci+4,cci+70,'Tipos: <C>Cliente <D>iamante <B>rilhante <R>ubi <P>erola  <O>Outros <E>xcluido')
        ELSE
                @ lci+2,cci+70 GET mtipo PICT '@!' VALID mtipo $ 'A,C,O,R,P,F,U,E,S' .AND. lim_get() WHEN men_get(lci+4,cci+70,'Tipos: <C>Cliente <R>Revenda <P>otencial <F>ilial <U>Funcionarios <A>ssociado <O>Outros <E>xcluido <S>upermercado')
        ENDIF
        @ lci+3,cci+13 GET mendereco PICT '@!'
        @ lci+3,cci+58 GET mnumero PICT '@!'
        @ lci+3,cci+74 GET mcomplemento PICT '@!'
        @ lci+4,cci+13 GET mbairro PICT '@!'
        READ
        IF LASTKEY() = 27
                RELEASE mnome_vend,mcom_ven
                SET KEY 281 TO
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF UPDATED()
                maltera := '*'
        ENDIF
        mcidade := saccid(,mcidade,,muf)
        SETCOR(3)
        DEVPOS(lci+4,cci+43);DEVOUT(mcidade)
        SETCOR(1)
        @ lci+4,cci+74 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
        @ lci+4,cci+82 GET mcep PICT '@@R 99999-999'
        @ lci+5,cci+14 GET mnaturalidade PICT '@!'
        @ lci+5,cci+50 GET memail
        @ lci+6,cci+13 GET mrota
        @ lci+7,cci+13 GET mrota1

        @ lci+8,cci+13 GET mcgc PICT '@@R 99.999.999/9999-99' VALID pesq_cgc(mcgc,'cli',,'cli')
        READ
        IF UPDATED()
                maltera := '*'
        ENDIF
        @ lci+8,cci+39 GET minsc PICT '@!'      //VALID IF( TestaIe( minsc, muf ),.T.,.F.)             //WHEN ! EMPTY(mcgc)
        @ lci+8,cci+70 GET mcod_profi PICT '99999' VALID ver_profi(mcod_profi,lci+8,cci+76)
        READ
        IF UPDATED()
                maltera := '*'
        ENDIF
        @ lci+9,cci+13 GET mcpf PICT '@@R 999.999.999-99' VALID pesq_cpf(mcpf,'cli')
        @ lci+9,cci+34 GET mrg PICT '@!'       //WHEN EMPTY(mcgc)
        @ lci+9,cci+57 GET morgao PICT '@!'    //WHEN EMPTY(mcgc)
        @ lci+9,cci+79 GET mdat_emi            //WHEN EMPTY(mcgc)

        @ lci+10,cci+13 GET mtel1
        @ lci+10,cci+35 GET mtel2
        @ lci+10,cci+56 GET mfax

        @ lci+11,cci+15 GET mpai PICT '@!'
        @ lci+11,cci+58 GET mmae PICT '@!'
        @ lci+12,cci+13 GET mcomprado PICT '@!'
        @ lci+12,cci+41 GET mprazo_pag PICT '@R 99-99-99'
        @ lci+12,cci+72 GET mboleto PICT '@!' VALID mboleto $ 'S,N'
        @ lci+12,cci+84 GET mcontato PICT '@!'
        @ lci+13,cci+13 GET marea PICT '@!'
        @ lci+13,cci+35 GET mlimite PICT '999,999.99' WHEN ver_nivel(mprg+'LIM','ALTERACAO DE CLIENTE *** LIMITE DE CREDITO ****','15',nivel_acess,'*')
        @ lci+13,cci+61 GET mdesconto PICT '999.99'
        @ lci+13,cci+79 GET mspc PICT '@!' WHEN ver_nivel(mprg+'SPC','ALTERACAO DE CLIENTE *** VERIFICAR O SPC INTERNO ***','15',nivel_acess,'*') VALID mspc $ 'S,N'
        @ lci+14,cci+29 GET matac_vare PICT '@!' VALID matac_vare $ 'A,V'
        @ lci+14,cci+48 GET mcod_cond PICT '999' VALID ver_cond(mcod_cond,lci+14,cci+52)
        READ
        ver_cond(mcod_cond,lci+13,cci+52)
        @ lci+15,cci+14 GET mbloqueio PICT '@!' WHEN ver_nivel(mprg+'BLOQ','ALTERACAO DE CLIENTE *** BLOQUEIO DE CREDITO DO CLIENTE ***','15',nivel_acess,'*') VALID mbloqueio $ 'S,N'
        @ lci+15,cci+21 GET mdata_bloq WHEN mbloqueio = 'S' VALID IF(EMPTY(mdata_bloq),.F.,.T.)
        @ lci+15,cci+38 GET mobs_bloq WHEN mbloqueio = 'S' VALID IF(EMPTY(mobs_bloq),.F.,.T.)
        READ
        IF UPDATED()
                maltera := '*'
        ENDIF
        @ lci+16,cci+15 GET mobs
        @ lci+17,cci+15 GET ml_obs1
        @ lci+18,cci+15 GET ml_obs2
        @ lci+19,cci+15 GET mcod_vend PICT '999' VALID IF(EMPTY(mcod_vend),.F.,ven(mcod_vend,lci+19,cci+20))
        READ        
        ven(mcod_vend,lci+19,cci+20)
        @ lci+19,cci+69 GET mcodoper PICT '999' VALID ven(mcodoper)
        @ lci+19,cci+86 GET mregiao PICT '99' VALID ver_regi(mregiao,lci+19,cci+89,,2)

        @ lci+20,cci+15 GET mend_cob PICT '@!'
        @ lci+20,cci+63 GET mbairro_cob PICT '@!'
        @ lci+21,cci+15 GET mcidade_cob PICT '@!'
        @ lci+21,cci+41 GET muf_cob PICT '@!'
        @ lci+21,cci+49 GET mcep_cob PICT '@@R 99999-999'
        @ lci+21,cci+65 GET mfone_cob PICT '@!'

        @ lci+22,cci+15 GET mempre_c PICT '@!'
        @ lci+22,cci+48 GET mcargo_c PICT '@!'
        @ lci+22,cci+73 GET msalario_c PICT '999,999.99'
        @ lci+23,cci+15 GET mend_c PICT '@!'
        @ lci+23,cci+59 GET mbairro_c PICT '@!'
        @ lci+24,cci+15 GET mcidade_c PICT '@!'
        @ lci+24,cci+41 GET muf_c PICT '@!'
        @ lci+24,cci+49 GET mcep_c PICT '@@R 99999-999'
        @ lci+24,cci+65 GET mfone_c1 PICT '@!'
        @ lci+24,cci+85 GET mfone_c2 PICT '@!'

        @ lci+25,cci+15 GET mnome_r1 PICT '@!'
        @ lci+25,cci+50 GET mfone_r1 PICT '@!'
        @ lci+26,cci+15 GET mnome_r2 PICT '@!'
        @ lci+26,cci+50 GET mfone_r2 PICT '@!'
        @ lci+27,cci+15 GET mloja1 PICT '@!'
        @ lci+27,cci+50 GET mdesde1 PICT '@!'
        @ lci+28,cci+15 GET mloja2 PICT '@!'
        @ lci+28,cci+50 GET mdesde2 PICT '@!'
        @ lci+29,cci+15 GET mbanco1 PICT '@!'
        @ lci+29,cci+36 GET mag1 PICT '@!'
        @ lci+29,cci+54 GET mconta1 PICT '@!'
        @ lci+30,cci+15 GET mbanco2 PICT '@!'
        @ lci+30,cci+36 GET mag2 PICT '@!'
        @ lci+30,cci+54 GET mconta2 PICT '@!'
        @ lci+31,cci+15 GET mcartao1 PICT '@!'
        @ lci+31,cci+37 GET mno1 PICT '@!'
        @ lci+31,cci+64 GET mvenc1 PICT '@!'
        @ lci+32,cci+15 GET mcartao2 PICT '@!'
        @ lci+32,cci+37 GET mno2 PICT '@!'
        @ lci+32,cci+64 GET mvenc2 PICT '@!'

        @ lci+33,cci+22 GET mAPP... PICT '@!' VALID mAPP... $ 'S,N'
        @ lci+33,cci+39 GET mop_hist PICT '@!' VALID mop_hist $ 'S,N'  WHEN ver_nivel(mprg+'HIST','ALTERACAO DE CLIENTE *** HISTORICO DO CLIENTE ***','1235',nivel_acess,'*')
        @ lci+33,cci+57 GET mop_tab PICT '@!' VALID mop_tab $ 'S,N'
        @ lci+33,cci+79 GET maniver PICT '@!' VALID maniver $ 'S,N'
        @ lci+34,cci+18 GET moutros PICT '@!' VALID moutros $ 'S,N'
        //@ lci+34,cci+40 GET mdepen PICT '@!' VALID mdepen $ 'S,N' WHEN  m_cfg[97] = 'S'
        READ
        IF UPDATED()
                maltera := '*'
        ENDIF
        IF LASTKEY() = 27
                RELEASE mnome_vend,mcom_ven
                SET KEY 281 TO
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mbloqueio = 'N'
                mdata_bloq := CTOD('  /  /  ')
                mobs_bloq  := SPACE(60)
        ENDIF
        IF mtipo = 'U'
                tela1 := SAVESCREEN(01,00,24,79)
                botao(15,05,18,75,,'Cod.Correspondente o CONTAS A PAGAR')
                setcor(1)
                opcao := 'S'
                DEVPOS(16,06);DEVOUT('Codigo:')
                DEVPOS(17,06);DEVOUT('Confirma [S/n]:')
                @ 16,14 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,16,19)
                @ 17,22 GET opcao PICT '@!' VALID opcao $ 'S,N'
                READ
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        mcod_forn := 0
                ENDIF
                RESTSCREEN(01,00,24,79,tela1)
        ENDIF
        IF mop_hist = 'S'
                op_tela(01,01,25,90,' HISTORICO DO CLIENTE ')
                WHILE .T.
                        m_hist  := {}
                        m_ponto := {}
                        ******************
                        SELE('hist');ORDSETFOCUS(1)
                        GO TOP
                        IF hist->(DBSEEK(cli->cod_cli))
                                AADD(m_hist,'Data:'+DTOC(hist->data)+' - '+hist->descricao)
                                AADD(m_ponto,RECNO())
                                mdata_con := hist->data
                                SKIP
                                WHILE ! EOF() .AND. cli->cod_cli = hist->codcli
                                        IF mdata_con = hist->data
                                                AADD(m_hist,'                '+hist->descricao)
                                                AADD(m_ponto,RECNO())
                                        ELSEIF ! EOF()
                                                AADD(m_hist,REPLI('-',cci+76-cci+03))
                                                AADD(m_ponto,0)
                                                AADD(m_hist,'Data:'+DTOC(hist->data)+' - '+hist->descricao)
                                                AADD(m_ponto,RECNO())
                                                mdata_con := hist->data
                                        ENDIF
                                        SKIP
                                ENDDO
                                AADD(m_hist,PADC('****************************  F  I  M  ****************************',cci+76-cci+03))
                                AADD(m_ponto,0)
                        ENDIF
                        setcor(3)
                        //botao(lci+3,cci+01,lba-5,cci+78,,' HISTORICO DO CLIENTE ')
                        IF ! EMPTY(m_hist)
                                mponto := LEN(m_hist)
                                Mensagem('<ENTER> p/alterar ou <ESC>p/Inclusao')
                                mponto := ACHOICE(02,02,24,89,m_hist,,,mponto)
                                IF LASTKEY() = 13
                                        IF m_ponto[mponto] = 0
                                                LOOP
                                        ENDIF
                                        GO m_ponto[mponto]
                                        mlin1 := hist->descricao
                                        mdata_con := hist->data
                                        op_tela(lba-4,cci+01,lba-2,cci+80,' Alteracao Historico ')
                                        setcor(1)
                                        DEVPOS(01,cci+2);DEVOUT('Data:')
                                        DEVPOS(01,cci+16);DEVOUT('-')
                                        @ 01,cci+7 GET mdata_con
                                        @ 01,cci+18 GET mlin1
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                EXIT
                                        ENDIF
                                        IF EMPTY(mlin1)
                                                opcao := op_simnao('N','Confirma a Exclusao:')
                                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF
                                                BLOQREG()
                                                DELE
                                                DBCOMMIT()
                                                DBUNLOCK()
                                                sr_getconnection():exec("DELETE FROM sachist WHERE SR_DELETED = 'T'",,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ELSE
                                                opcao := op_simnao('S','Confirma a Alteracao:')
                                                IF opcao = 'N'
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF
                                                BLOQREG()
                                                hist->descricao := mlin1
                                                hist->operador  := cod_operado
                                                DBCOMMIT()
                                                DBUNLOCK()

                                        ENDIF
                                        wvw_lclosewindow()
                                        LOOP
                                ELSE
                                        mlin1 := mlin2 := mlin3 := mlin4 := mlin5 :=;
                                        mlin6 := SPACE(60)
                                        mdata_con := mdata_sis
                                        op_tela(lba-7,cci+01,lba,cci+80,' INCLUSAO Historico ')
                                        setcor(1)
                                        DEVPOS(01,cci+2);DEVOUT('Data:')
                                        DEVPOS(01,cci+16);DEVOUT('-')
                                        mensagem('Preencha a Data ou <ESC> p/Abandonar')
                                        @ 01,cci+7 GET mdata_con
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                EXIT
                                        ENDIF
                                        Mensagem('Descrevar e tecle <F10>p/Gravar ou <ESC>p/abandonar')
                                        setcor(3)
                                        mlin1 := MEMOEDIT(mlin2,01,cci+18,05,cba-1,,,,,,)
                                        setcor(1)
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        i := 0
                                        linhas := MLCOUNT(mlin1,60)

                                        FOR i = 1 TO  linhas
                                                mlin3 := MEMOLINE(mlin1,60,i,,)
                                                ADIREG()
                                                hist->codcli    := cli->cod_cli
                                                hist->data      := mdata_con
                                                hist->hora      := TIME()
                                                hist->descricao := mlin3
                                                hist->operador  := cod_operado
                                        NEXT
                                        DBCOMMITALL()
                                        DBUNLOCKALL()
                                        wvw_lclosewindow()
                                ENDIF
                        ELSE
                                mlin1 := mlin2 := mlin3 := mlin4 := mlin5 := ;
                                mlin6 := SPACE(60)
                                mdata_con := mdata_sis
                                op_tela(lba-7,cci+01,lba,cci+80,' INCLUSAO Historico ')
                                setcor(1)
                                DEVPOS(01,cci+2);DEVOUT('Data:')
                                DEVPOS(01,cci+16);DEVOUT('-')
                                mensagem('Preencha a Data ou <ESC> p/Abandonar')
                                @ 01,cci+7 GET mdata_con
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        EXIT
                                ENDIF
                                Mensagem('Descrevar e tecle <F10>p/Gravar ou <ESC>p/abandonar')
                                setcor(3)
                                mlin1 := MEMOEDIT(mlin2,01,cci+18,05,cba-1,,,,,,)
                                setcor(1)
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                i := 0
                                linhas := MLCOUNT(mlin1,60)

                                FOR i = 1 TO  linhas
                                        mlin3 := MEMOLINE(mlin1,60,i,,)
                                        ADIREG()
                                        hist->codcli    := cli->cod_cli
                                        hist->data      := mdata_con
                                        hist->hora      := TIME()
                                        hist->descricao := mlin3
                                        hist->operador  := cod_operado
                                NEXT
                                DBCOMMITALL()
                                DBUNLOCKALL()
                                wvw_lclosewindow()
                        ENDIF
                ENDDO
                ****************
                SELE('cli');ORDSETFOCUS(2)
                ****************
                wvw_lclosewindow()
                SET KEY -9 TO
        ENDIF
        IF mop_tab = 'S'
                tabcliprod()
        ENDIF
        IF maniver = 'S'
                tela1 := SAVESCREEN(01,00,24,79)
                botao(li,ci,lb,cb,,' DATAS DE ANIVERSARIOS ')
                setcor(1)
                DEVPOS(li+1,ci+01);DEVOUT('Nome:')
                DEVPOS(li+1,ci+49);DEVOUT('Data Nascimento:')
                DEVPOS(li+2,ci+01);DEVOUT('Nome:')
                DEVPOS(li+2,ci+49);DEVOUT('Data Nascimento:')
                DEVPOS(li+3,ci+01);DEVOUT('Nome:')
                DEVPOS(li+3,ci+49);DEVOUT('Data Nascimento:')
                DEVPOS(li+4,ci+01);DEVOUT('Nome:')
                DEVPOS(li+4,ci+49);DEVOUT('Data Nascimento:')
                DEVPOS(li+5,ci+01);DEVOUT('Nome:')
                DEVPOS(li+5,ci+49);DEVOUT('Data Nascimento:')
                @ li+1,ci+7 GET mnome1 PICT '@!'
                @ li+1,ci+66 GET mdata_nas1
                @ li+2,ci+7 GET mnome2 PICT '@!'
                @ li+2,ci+66 GET mdata_nas2
                @ li+3,ci+7 GET mnome3 PICT '@!'
                @ li+3,ci+66 GET mdata_nas3
                @ li+4,ci+7 GET mnome4 PICT '@!'
                @ li+4,ci+66 GET mdata_nas4
                @ li+5,ci+7 GET mnome5 PICT '@!'
                @ li+5,ci+66 GET mdata_nas5
                READ
                RESTSCREEN(01,00,24,79,tela1)
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        IF moutros = 'S'
                op_tela(03,05,22,95,'Dados CONJUGE e AVALISTA')
                m_cliaux := {}
                cComm := "SELECT * FROM saccliaux WHERE cod_cli = "+sr_cdbvalue(cli->cod_cli)
                sr_getconnection():exec(ccomm,,.t.,@m_cliaux)
                IF LEN(m_cliaux) = 0
                        mconjuge        := SPACE(40)
                        mconj_nasc      := CTOD('  /  /  ')
                        mconj_cpf       := SPACE(11)
                        mconj_rg        := SPACE(11)
                        mconj_empre     := SPACE(20)
                        mconj_cargo     := SPACE(15)
                        mconj_salario   := 0
                        mconj_end       := SPACE(35)
                        mconj_bairro    := SPACE(20)
                        mconj_cidade    := SPACE(20)
                        mconj_uf        := SPACE(2)
                        mconj_cep       := SPACE(9)
                        mconj_fone      := SPACE(14)
                        mconj_obs       := SPACE(50)
                        mavalista       := SPACE(40)
                        maval_sexo      := SPACE(1)
                        maval_civil     := SPACE(1)
                        maval_nasc      := CTOD('  /  /  ')
                        maval_cpf       := SPACE(11)
                        maval_rg        := SPACE(11)
                        maval_empre     := SPACE(20)
                        maval_cargo     := SPACE(15)
                        maval_salario   := 0
                        maval_end       := SPACE(35)
                        maval_bairro    := SPACE(20)
                        maval_cidade    := SPACE(20)
                        maval_uf        := SPACE(2)
                        maval_cep       := SPACE(9)
                        maval_fone      := SPACE(14)
                        maval_obs       := SPACE(50)
                ELSE
                        mconjuge        := m_cliaux[1,2]
                        mconj_nasc      := m_cliaux[1,3]
                        mconj_cpf       := m_cliaux[1,4]
                        mconj_rg        := m_cliaux[1,5]
                        mconj_empre     := m_cliaux[1,6]
                        mconj_cargo     := m_cliaux[1,7]
                        mconj_salario   := m_cliaux[1,8]
                        mconj_end       := m_cliaux[1,9]
                        mconj_bairro    := m_cliaux[1,10]
                        mconj_cidade    := m_cliaux[1,11]
                        mconj_uf        := m_cliaux[1,12]
                        mconj_cep       := m_cliaux[1,13]
                        mconj_fone      := m_cliaux[1,14]
                        mconj_obs       := m_cliaux[1,15]
                        mavalista       := m_cliaux[1,16]
                        maval_sexo      := m_cliaux[1,17]
                        maval_civil     := m_cliaux[1,18]
                        maval_nasc      := m_cliaux[1,19]
                        maval_cpf       := m_cliaux[1,20]
                        maval_rg        := m_cliaux[1,21]
                        maval_empre     := m_cliaux[1,22]
                        maval_cargo     := m_cliaux[1,23]
                        maval_salario   := m_cliaux[1,24]
                        maval_end       := m_cliaux[1,25]
                        maval_bairro    := m_cliaux[1,26]
                        maval_cidade    := m_cliaux[1,27]
                        maval_uf        := m_cliaux[1,28]
                        maval_cep       := m_cliaux[1,29]
                        maval_fone      := m_cliaux[1,30]
                        maval_obs       := m_cliaux[1,31]
                ENDIF

                WHILE .T.
                        DEVPOS(00,01);DEVOUT('Nome CONJUGE......:')
                        DEVPOS(01,01);DEVOUT('Data de Nascimento:')
                        DEVPOS(02,01);DEVOUT('CPF...............:')
                        DEVPOS(02,34);DEVOUT('RG No.:')
                        DEVPOS(03,01);DEVOUT('Onde Trabalha.....:')
                        DEVPOS(04,01);DEVOUT('Cargo.............:')
                        DEVPOS(04,38);DEVOUT('Salario:')
                        DEVPOS(05,01);DEVOUT('Endereco..........:')
                        DEVPOS(06,01);DEVOUT('Bairro............:')
                        DEVPOS(06,58);DEVOUT('Cidade:')
                        DEVPOS(07,01);DEVOUT('UF................:')
                        DEVPOS(07,24);DEVOUT('CEP:')
                        DEVPOS(07,40);DEVOUT('Telefone:')
                        DEVPOS(08,01);DEVOUT('Obs...............:')
                        @ 09,00 TO 09,100
                        DEVPOS(10,01);DEVOUT('Nome AVALISTA.....:')
                        DEVPOS(11,01);DEVOUT('Data de Nascimento:')
                        DEVPOS(11,33);DEVOUT('Sexo:')
                        DEVPOS(11,40);DEVOUT('Est.Civil:')
                        DEVPOS(12,01);DEVOUT('CPF...............:')
                        DEVPOS(12,34);DEVOUT('RG No.:')
                        DEVPOS(13,01);DEVOUT('Onde Trabalha.....:')
                        DEVPOS(14,01);DEVOUT('Cargo.............:')
                        DEVPOS(14,38);DEVOUT('Salario:')
                        DEVPOS(15,01);DEVOUT('Endereco..........:')
                        DEVPOS(16,01);DEVOUT('Bairro............:')
                        DEVPOS(16,58);DEVOUT('Cidade:')
                        DEVPOS(17,01);DEVOUT('UF................:')
                        DEVPOS(17,24);DEVOUT('CEP:')
                        DEVPOS(17,40);DEVOUT('Telefone:')
                        DEVPOS(18,01);DEVOUT('Obs...............:')
                        @ 00,21 GET mconjuge PICT '@!'
                        @ 01,21 GET mconj_nasc
                        @ 02,21 GET mconj_cpf
                        @ 02,42 GET mconj_rg
                        @ 03,21 GET mconj_empre PICT '@!'
                        @ 04,21 GET mconj_cargo PICT '@!'
                        @ 04,48 GET mconj_salario PICT '9,999,999.99'
                        @ 05,21 GET mconj_end PICT '@!'
                        @ 06,21 GET mconj_bairro PICT '@!'
                        @ 06,66 GET mconj_cidade PICT '@!'
                        @ 07,21 GET mconj_uf PICT '@!'
                        @ 07,28 GET mconj_cep PICT '@!'
                        @ 07,49 GET mconj_fone
                        @ 08,21 GET mconj_obs PICT '@!'

                        @ 10,21 GET mavalista PICT '@!'
                        @ 11,21 GET maval_nasc
                        @ 11,39 GET maval_sexo PICT '@!' VALID maval_sexo $ 'M,F, '
                        @ 11,51 GET maval_civil PICT '@!' VALID maval_civil $ 'C,S,D,O, '
                        @ 12,21 GET maval_cpf
                        @ 12,42 GET maval_rg
                        @ 13,21 GET maval_empre PICT '@!'
                        @ 14,21 GET maval_cargo PICT '@!'
                        @ 14,48 GET maval_salario PICT '9,999,999.99'
                        @ 15,21 GET maval_end PICT '@!'
                        @ 16,21 GET maval_bairro PICT '@!'
                        @ 16,66 GET maval_cidade PICT '@!'
                        @ 17,21 GET maval_uf PICT '@!'
                        @ 17,28 GET maval_cep PICT '@!'
                        @ 17,49 GET maval_fone
                        @ 18,21 GET maval_obs PICT '@!'
                        READ
                        opcao := op_simnao('S','Confirma os dados Preenchido [S/n]:')
                        IF opcao = 'N'
                                LOOP
                        ELSE
                                nulo := 'NULL'
                                IF LEN(m_cliaux) > 0
                                        ccomm := "UPDATE saccliaux SET "
                                        ccomm := ccomm + " conjuge        = "+sr_cdbvalue(mconjuge)
                                        ccomm := ccomm + ",conj_nasc      = "+IF(! EMPTY(mconj_nasc),sr_cdbvalue(mconj_nasc),nulo)
                                        ccomm := ccomm + ",conj_cpf       = "+sr_cdbvalue(mconj_cpf       )
                                        ccomm := ccomm + ",conj_rg        = "+sr_cdbvalue(mconj_rg        )
                                        ccomm := ccomm + ",conj_empre     = "+sr_cdbvalue(mconj_empre     )
                                        ccomm := ccomm + ",conj_cargo     = "+sr_cdbvalue(mconj_cargo     )
                                        ccomm := ccomm + ",conj_salario   = "+sr_cdbvalue(mconj_salario   )
                                        ccomm := ccomm + ",conj_end       = "+sr_cdbvalue(mconj_end       )
                                        ccomm := ccomm + ",conj_bairro    = "+sr_cdbvalue(mconj_bairro    )
                                        ccomm := ccomm + ",conj_cidade    = "+sr_cdbvalue(mconj_cidade    )
                                        ccomm := ccomm + ",conj_uf        = "+sr_cdbvalue(mconj_uf        )
                                        ccomm := ccomm + ",conj_cep       = "+sr_cdbvalue(mconj_cep       )
                                        ccomm := ccomm + ",conj_fone      = "+sr_cdbvalue(mconj_fone      )
                                        ccomm := ccomm + ",conj_obs       = "+sr_cdbvalue(mconj_obs       )
                                        ccomm := ccomm + ",avalista       = "+sr_cdbvalue(mavalista       )
                                        ccomm := ccomm + ",aval_sexo      = "+sr_cdbvalue(maval_sexo      )
                                        ccomm := ccomm + ",aval_civil     = "+sr_cdbvalue(maval_civil     )
                                        ccomm := ccomm + ",aval_nasc      = "+IF(! EMPTY(maval_nasc),sr_cdbvalue(maval_nasc),nulo)
                                        ccomm := ccomm + ",aval_cpf       = "+sr_cdbvalue(maval_cpf       )
                                        ccomm := ccomm + ",aval_rg        = "+sr_cdbvalue(maval_rg        )
                                        ccomm := ccomm + ",aval_empre     = "+sr_cdbvalue(maval_empre     )
                                        ccomm := ccomm + ",aval_cargo     = "+sr_cdbvalue(maval_cargo     )
                                        ccomm := ccomm + ",aval_salario   = "+sr_cdbvalue(maval_salario   )
                                        ccomm := ccomm + ",aval_end       = "+sr_cdbvalue(maval_end       )
                                        ccomm := ccomm + ",aval_bairro    = "+sr_cdbvalue(maval_bairro    )
                                        ccomm := ccomm + ",aval_cidade    = "+sr_cdbvalue(maval_cidade    )
                                        ccomm := ccomm + ",aval_uf        = "+sr_cdbvalue(maval_uf        )
                                        ccomm := ccomm + ",aval_cep       = "+sr_cdbvalue(maval_cep       )
                                        ccomm := ccomm + ",aval_fone      = "+sr_cdbvalue(maval_fone      )
                                        ccomm := ccomm + ",aval_obs       = "+sr_cdbvalue(maval_obs       )
                                        ccomm := ccomm + " WHERE cod_cli = "+sr_cdbvalue(mcod_c)
                                        sr_getconnection():exec(ccomm,,.f.)
                                ELSE
                                        sr_getconnection():exec('INSERT INTO saccliaux ('+;
                                        'cod_cli   ,'+; //1
                                        'conjuge        ,'+; //2
                                        'conj_nasc      ,'+; //3
                                        'conj_cpf       ,'+; //4
                                        'conj_rg        ,'+; //5
                                        'conj_empre     ,'+; //6
                                        'conj_cargo     ,'+; //7
                                        'conj_salario   ,'+; //8
                                        'conj_end       ,'+; //9
                                        'conj_bairro    ,'+; //10
                                        'conj_cidade    ,'+; //11
                                        'conj_uf        ,'+; //12
                                        'conj_cep       ,'+; //13
                                        'conj_fone      ,'+; //14
                                        'conj_obs       ,'+; //15
                                        'avalista       ,'+; //16
                                        'aval_sexo      ,'+; //17
                                        'aval_civil     ,'+; //18
                                        'aval_nasc      ,'+; //19
                                        'aval_cpf       ,'+; //20
                                        'aval_rg        ,'+; //21
                                        'aval_empre     ,'+; //22
                                        'aval_cargo     ,'+; //23
                                        'aval_salario   ,'+; //24
                                        'aval_end       ,'+; //25
                                        'aval_bairro    ,'+; //26
                                        'aval_cidade    ,'+; //27
                                        'aval_uf        ,'+; //28
                                        'aval_cep       ,'+; //29
                                        'aval_fone      ,'+; //30
                                        'aval_obs       ,'+; //31
                                        'SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mcod_c          )+','+; //1
                                        sr_cdbvalue(mconjuge        )+','+; //2
                                        IF(! EMPTY(mconj_nasc),sr_cdbvalue(mconj_nasc),nulo)+','+; //3
                                        sr_cdbvalue(mconj_cpf       )+','+; //4
                                        sr_cdbvalue(mconj_rg        )+','+; //5
                                        sr_cdbvalue(mconj_empre     )+','+; //6
                                        sr_cdbvalue(mconj_cargo     )+','+; //7
                                        sr_cdbvalue(mconj_salario   )+','+; //8
                                        sr_cdbvalue(mconj_end       )+','+; //9
                                        sr_cdbvalue(mconj_bairro    )+','+; //10
                                        sr_cdbvalue(mconj_cidade    )+','+; //11
                                        sr_cdbvalue(mconj_uf        )+','+; //12
                                        sr_cdbvalue(mconj_cep       )+','+; //13
                                        sr_cdbvalue(mconj_fone      )+','+; //14
                                        sr_cdbvalue(mconj_obs       )+','+; //15
                                        sr_cdbvalue(mavalista       )+','+; //16
                                        sr_cdbvalue(maval_sexo      )+','+; //17
                                        sr_cdbvalue(maval_civil     )+','+; //18
                                        IF(! EMPTY(maval_nasc),sr_cdbvalue(maval_nasc),nulo)+','+; //19
                                        sr_cdbvalue(maval_cpf       )+','+; //20
                                        sr_cdbvalue(maval_rg        )+','+; //21
                                        sr_cdbvalue(maval_empre     )+','+; //22
                                        sr_cdbvalue(maval_cargo     )+','+; //23
                                        sr_cdbvalue(maval_salario   )+','+; //24
                                        sr_cdbvalue(maval_end       )+','+; //25
                                        sr_cdbvalue(maval_bairro    )+','+; //26
                                        sr_cdbvalue(maval_cidade    )+','+; //27
                                        sr_cdbvalue(maval_uf        )+','+; //28
                                        sr_cdbvalue(maval_cep       )+','+; //29
                                        sr_cdbvalue(maval_fone      )+','+; //30
                                        sr_cdbvalue(maval_obs       )+','+; //31
                                        sr_cdbvalue(' ')+')',,.f.)
                                ENDIF
                                sr_getconnection():exec('COMMIT',,.f.)
                                wvw_lclosewindow()
                                EXIT
                        ENDIF
                ENDDO
        ENDIF
        IF mdepen = 'S'
                sacdepe(cli->cod_cli)
        ENDIF
        opcao := op_simnao('S','Confirma a Alteracao do Cliente [S/n]:')
        IF opcao = 'N'
                LOOP
        ELSE
                IF EMPTY(muf)
                        mensagem('Nao foi preenchido o campo do Estado, Campo Obrigatorio !!!')
                        @ lci+9,cci+42 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                nulo := 'NULL'
                ccomm := "UPDATE saccli SET razao = "+sr_cdbvalue(mrazao)
                IF maltera = '*'
                        IF ver_serie() = '141235' .AND. mensagem1('Deseja Atualizar a DATA DE ATUALIZACAO:','S','S,N') = 'S'
                                ccomm := ccomm + ",data_atu = "+sr_cdbvalue(mdata_sis)
                        ENDIF
                ENDIF
                ccomm := ccomm + ",nome      = "+sr_cdbvalue(mnome)
                ccomm := ccomm + ",nascimento= "+IF(! EMPTY(mdata_nas),sr_cdbvalue(mdata_nas),nulo)
                ccomm := ccomm + ",tipo      = "+sr_cdbvalue(mtipo                     )
                ccomm := ccomm + ",endereco  = "+sr_cdbvalue(mendereco                 )
                ccomm := ccomm + ",bairro    = "+sr_cdbvalue(mbairro                   )
                ccomm := ccomm + ",cidade    = "+sr_cdbvalue(mcidade                   )
                ccomm := ccomm + ",uf        = "+sr_cdbvalue(muf                       )
                ccomm := ccomm + ",cep       = "+sr_cdbvalue(mcep                      )
                ccomm := ccomm + ",email     = "+sr_cdbvalue(memail                    )
                ccomm := ccomm + ",rota      = "+sr_cdbvalue(mrota                     )
                ccomm := ccomm + ",rota1     = "+sr_cdbvalue(mrota1                    )
                ccomm := ccomm + ",tel1      = "+sr_cdbvalue(mtel1                     )
                ccomm := ccomm + ",tel2      = "+sr_cdbvalue(mtel2                     )
                ccomm := ccomm + ",fax       = "+sr_cdbvalue(mfax                      )
                ccomm := ccomm + ",cgc       = "+sr_cdbvalue(mcgc                      )
                ccomm := ccomm + ",insc      = "+sr_cdbvalue(minsc                     )
                ccomm := ccomm + ",cpf       = "+sr_cdbvalue(mcpf                      )
                ccomm := ccomm + ",rg        = "+sr_cdbvalue(mrg                       )
                ccomm := ccomm + ",orgao     = "+sr_cdbvalue(morgao                    )
                ccomm := ccomm + ",dat_emi   = "+IF(! EMPTY(mdat_emi),sr_cdbvalue(mdat_emi),nulo)
                ccomm := ccomm + ",comprado  = "+sr_cdbvalue(mcomprado                 )
                ccomm := ccomm + ",contato   = "+sr_cdbvalue(mcontato                  )
                ccomm := ccomm + ",area      = "+sr_cdbvalue(marea                     )
                ccomm := ccomm + ",limite    = "+sr_cdbvalue(mlimite                   )
                ccomm := ccomm + ",atac_vare = "+sr_cdbvalue(matac_vare                )
                ccomm := ccomm + ",spc       = "+sr_cdbvalue(mspc                      )
                ccomm := ccomm + ",obs       = "+sr_cdbvalue(mobs                      )
                ccomm := ccomm + ",prazo_pag = "+sr_cdbvalue(mprazo_pag+mboleto        )
                ccomm := ccomm + ",bloqueio  = "+sr_cdbvalue(mbloqueio                 )
                ccomm := ccomm + ",codvend   = "+sr_cdbvalue(STRZERO(mcod_vend,3)       )
                ccomm := ccomm + ",codoper   = "+sr_cdbvalue(STRZERO(mcodoper,3)       )
                ccomm := ccomm + ",desconto  = "+sr_cdbvalue(mdesconto                 )
                ccomm := ccomm + ",dia1_ini  = "+sr_cdbvalue(STRZERO(VAL(mdia1_ini),2) )
                ccomm := ccomm + ",dia1_fim  = "+sr_cdbvalue(STRZERO(VAL(mdia1_fim),2) )
                ccomm := ccomm + ",venc1_dup = "+sr_cdbvalue(STRZERO(VAL(mvenc1_dup),2))
                ccomm := ccomm + ",dia2_ini  = "+sr_cdbvalue(STRZERO(VAL(mdia2_ini),2) )
                ccomm := ccomm + ",dia2_fim  = "+sr_cdbvalue(STRZERO(VAL(mdia2_fim),2) )
                ccomm := ccomm + ",venc2_dup = "+sr_cdbvalue(STRZERO(VAL(mvenc2_dup),2))
                ccomm := ccomm + ",nome1     = "+sr_cdbvalue(mnome1                    )
                ccomm := ccomm + ",data_nas1 = "+IF(! EMPTY(mdata_nas1),sr_cdbvalue(mdata_nas1),nulo)
                ccomm := ccomm + ",nome2     = "+sr_cdbvalue(mnome2                    )
                ccomm := ccomm + ",data_nas2 = "+IF(! EMPTY(mdata_nas2),sr_cdbvalue(mdata_nas2),nulo)
                ccomm := ccomm + ",nome3     = "+sr_cdbvalue(mnome3                    )
                ccomm := ccomm + ",data_nas3 = "+IF(! EMPTY(mdata_nas3),sr_cdbvalue(mdata_nas3),nulo)
                ccomm := ccomm + ",nome4     = "+sr_cdbvalue(mnome4                    )
                ccomm := ccomm + ",data_nas4 = "+IF(! EMPTY(mdata_nas4),sr_cdbvalue(mdata_nas4),nulo)
                ccomm := ccomm + ",nome5     = "+sr_cdbvalue(mnome5                    )
                ccomm := ccomm + ",data_nas5 = "+IF(! EMPTY(mdata_nas5),sr_cdbvalue(mdata_nas5),nulo)
                ccomm := ccomm + ",empre_c   = "+sr_cdbvalue(mempre_c                  )
                ccomm := ccomm + ",cargo_c   = "+sr_cdbvalue(mcargo_c                  )
                ccomm := ccomm + ",salario_c = "+sr_cdbvalue(msalario_c                )
                ccomm := ccomm + ",end_c     = "+sr_cdbvalue(mend_c                    )
                ccomm := ccomm + ",bairro_c  = "+sr_cdbvalue(mbairro_c                 )
                ccomm := ccomm + ",cidade_c  = "+sr_cdbvalue(mcidade_c                 )
                ccomm := ccomm + ",uf_c      = "+sr_cdbvalue(muf_c                     )
                ccomm := ccomm + ",cep_c     = "+sr_cdbvalue(mcep_c                    )
                ccomm := ccomm + ",fone_c1   = "+sr_cdbvalue(mfone_c1                  )
                ccomm := ccomm + ",fone_c2   = "+sr_cdbvalue(mfone_c2                  )
                ccomm := ccomm + ",loja1     = "+sr_cdbvalue(mloja1                    )
                ccomm := ccomm + ",tel_loja1 = "+sr_cdbvalue(mtel_loja1                )
                ccomm := ccomm + ",desde1    = "+IF(! EMPTY(mdesde1),sr_cdbvalue(mdesde1),nulo)
                ccomm := ccomm + ",loja2     = "+sr_cdbvalue(mloja2                    )
                ccomm := ccomm + ",tel_loja2 = "+sr_cdbvalue(mtel_loja2                )
                ccomm := ccomm + ",desde2    = "+IF(! EMPTY(mdesde2),sr_cdbvalue(mdesde2),nulo)
                ccomm := ccomm + ",nome_r1   = "+sr_cdbvalue(mnome_r1                  )
                ccomm := ccomm + ",fone_r1   = "+sr_cdbvalue(mfone_r1                  )
                ccomm := ccomm + ",nome_r2   = "+sr_cdbvalue(mnome_r2                  )
                ccomm := ccomm + ",fone_r2   = "+sr_cdbvalue(mfone_r2                  )
                ccomm := ccomm + ",banco1    = "+sr_cdbvalue(mbanco1                   )
                ccomm := ccomm + ",ag1       = "+sr_cdbvalue(mag1                      )
                ccomm := ccomm + ",conta1    = "+sr_cdbvalue(mconta1                   )
                ccomm := ccomm + ",banco2    = "+sr_cdbvalue(mbanco2                   )
                ccomm := ccomm + ",ag2       = "+sr_cdbvalue(mag2                      )
                ccomm := ccomm + ",conta2    = "+sr_cdbvalue(mconta2                   )
                ccomm := ccomm + ",cartao1   = "+sr_cdbvalue(mcartao1                  )
                ccomm := ccomm + ",no1       = "+sr_cdbvalue(mno1                      )
                ccomm := ccomm + ",venc1     = "+IF(! EMPTY(mvenc1),sr_cdbvalue(mvenc1),nulo)
                ccomm := ccomm + ",cartao2   = "+sr_cdbvalue(mcartao2                  )
                ccomm := ccomm + ",no2       = "+sr_cdbvalue(mno2                      )
                ccomm := ccomm + ",venc2     = "+IF(! EMPTY(mvenc2),sr_cdbvalue(mvenc2),nulo)
                ccomm := ccomm + ",pai       = "+sr_cdbvalue(mpai                      )
                ccomm := ccomm + ",mae       = "+sr_cdbvalue(mmae                      )
                ccomm := ccomm + ",end_cob   = "+sr_cdbvalue(mend_cob                  )
                ccomm := ccomm + ",bairro_cob= "+sr_cdbvalue(mbairro_cob               )
                ccomm := ccomm + ",cidade_cob= "+sr_cdbvalue(mcidade_cob               )
                ccomm := ccomm + ",uf_cob    = "+sr_cdbvalue(muf_cob                   )
                ccomm := ccomm + ",cep_cob   = "+sr_cdbvalue(mcep_cob                  )
                ccomm := ccomm + ",fone_cob  = "+sr_cdbvalue(mfone_cob                 )
                ccomm := ccomm + ",regiao    = "+sr_cdbvalue(mregiao                   )
                ccomm := ccomm + ",codforn   = "+sr_cdbvalue(STRZERO(mcod_forn,4)      )
                ccomm := ccomm + ",APP...    = "+sr_cdbvalue(mAPP...                   )
                ccomm := ccomm + ",cod_profi = "+sr_cdbvalue(STRZERO(mcod_profi,5)     )
                ccomm := ccomm + ",cod_cond  = "+sr_cdbvalue(STRZERO(mcod_cond,3)      )
                ccomm := ccomm + ",l_obs1    = "+sr_cdbvalue(ml_obs1)
                ccomm := ccomm + ",l_obs2    = "+sr_cdbvalue(ml_obs2)
                ccomm := ccomm + ",data_bloq = "+IF(! EMPTY(mdata_bloq),sr_cdbvalue(mdata_bloq),nulo)
                ccomm := ccomm + ",obs_bloq = "+sr_cdbvalue(mobs_bloq)
                ccomm := ccomm + ",numero   = "+sr_cdbvalue(mnumero)
                ccomm := ccomm + ",complemento= "+sr_cdbvalue(mcomplemento)
                ccomm := ccomm + ",naturalidade   = "+sr_cdbvalue(mnaturalidade)
                ccomm := ccomm + " WHERE cod_cli = "+sr_cdbvalue(mcod_c)
                sr_getconnection():exec(ccomm,,.f.)
                IF mtipo <> mtipo_cli
                        ccomm := "UPDATE sacdupr SET tip_cli = "+sr_cdbvalue(mtipo)
                        ccomm := ccomm + " WHERE fornec = "+sr_cdbvalue(mcod_c)
                        sr_getconnection():exec(ccomm,,.f.)
                ENDIF
                sr_getconnection():exec('COMMIT',,.f.)
                mcons_cam := {}
                sr_getconnection():exec("SELECT atu_cli FROM cam_dba",,.t.,@mcons_cam)
                IF LEN(mcons_cam) > 0
                        IF SR_SetActiveConnection(nCnn1) > 0 .AND. mcons_cam[1,1] = 'S'
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                ENDIF
                SR_SetActiveConnection(nCnn)
		IF minsc <> minsc_aux
		        opcao := op_simnao('S','Deseja Atualizar a INSCRICAO no Movimento deste Cliente [S/n]:')
        		IF opcao = 'S'
				mensagem('Aguarde um momento ATUALIZANDO o Movimento deste Cliente...')
                		ccomm := "UPDATE sacmovnt SET insc_cli = "+sr_cdbvalue(minsc)+" WHERE cod_cli = "+sr_cdbvalue(mcod_c)
		                sr_getconnection():exec(ccomm,,.f.)
                		ccomm := "UPDATE sactotnt SET insc_cli = "+sr_cdbvalue(minsc)+" WHERE cod_cli = "+sr_cdbvalue(mcod_c)
		                sr_getconnection():exec(ccomm,,.f.)
		                sr_getconnection():exec('COMMIT',,.f.)

		        ENDIF
		ENDIF			
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
