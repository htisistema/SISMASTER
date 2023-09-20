MEMVAR getlist
************************
* BALANCO DE PRODUTOS
************************
FUNCTION mastbal(mtp_op)
*****************
MEMVAR mdata_sis,nivel_acess,memp_resa
LOCAL lba,cba,cons_merc:={},i:=0,mpreco := 0,mcusto := 0,mqtd := 0
PRIVATE MPRG:='MASTBAL',mtit:='',mtipo:='',mpag:=0,;
        mcod_merc :=0

IF ! ver_nivel(mprg,'BALANCO DE PRODUTOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
IF mtp_op = 1
        op_tela(15,10,23,90,' BALANCO DE PRODUTOS *** S A I D A S ***  ['+mprg+']')
ELSE
        op_tela(15,10,23,90,' BALANCO DE PRODUTOS *** E N T R A D A S ***  ['+mprg+']')
ENDIF
lba:=35
cba:=70
CLEAR GETS
WHILE .T.
        setcor(1)
        limpa(0,0,lba,cba)
        exibi_prg(mprg)
        mpreco := mcusto := mqtd := 0
        mtp_op_rel := 'A'
        mcod_merc :=  0
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        DEVPOS(1,1);DEVOUT('Codigo do Produto.......:')
        DEVPOS(2,1);DEVOUT('Descricao da Mercadoria.:')
        DEVPOS(3,1);DEVOUT('Quatidade...............:               Saldo:')
        DEVPOS(4,1);DEVOUT('Preco de Venda R$.......:')
        DEVPOS(5,1);DEVOUT('Preco de Custo R$.......:')
        @ 1,27 GET mcod_merc PICT '99999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        IF EMPTY(mcod_merc)
                f4_merc()
                cons_merc := {}
                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)

        ELSEIF ! EMPTY(mcod_merc)
                cons_merc := {}
                sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@cons_merc)
                IF LEN(cons_merc) = 0
                        atencao('Codigo NAO Existe no Arquivo !!!')
                        LOOP
                ENDIF
        ENDIF
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        DEVPOS(1,27);DEVOUT(STR(cons_merc[1,1],5))
        DEVPOS(2,27);DEVOUT(cons_merc[1,2])
        DEVPOS(3,48);DEVOUT(TRANSFORM(cons_merc[1,8],'999,999.999'))
        mpreco := cons_merc[1,6]
        mcusto := cons_merc[1,5]
        @ 3,27 GET mqtd PICT '999,999.999'
        @ 4,27 GET mpreco PICT '999,999.99'
        @ 5,27 GET mcusto PICT '999,999.999'
        READ
        opcao := op_simnao('S','Confirma a Inclusao do PRODUTO:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        IF mtp_op = 1
                cComm  := "UPDATE mastprod SET saldo = "+sr_cdbvalue(cons_merc[1,8] - mqtd)
        ELSE
                cComm  := "UPDATE mastprod SET saldo = "+sr_cdbvalue(cons_merc[1,8] + mqtd)
        ENDIF
        ccomm := ccomm +",pr_venda  = "+sr_cdbvalue(mpreco)
        ccomm := ccomm +",custo = "+sr_cdbvalue(mcusto)
        ccomm := ccomm + " WHERE codigo = "+sr_cdbvalue(cons_merc[1,1])
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ***********************************
