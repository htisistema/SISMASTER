MEMVAR getlist
*************************
* INCLUSAO  MESAS/QUARTOS
*************************
FUNCTION mast120(mtip,mnum)
***************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa
LOCAL mdescri:=SPACE(50),lci,cci,lba,cba,cons_merc:={},aret:={},i:=0,nPBid
PRIVATE MPRG:='MAST120',mexcluir:=''
IF mtip = NIL
        IF ! ver_nivel(mprg+'INCL','INCLUSAO DE MESAS/QUARTOS','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(10,10,15,90,' Inclusao de MESAS/QUARTOS   ['+mprg+']')
ELSE
        IF ! ver_nivel(mprg+'ALT','ALTERACAO DE MESAS/QUARTOS','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(10,10,15,90,' Alteracao de MESAS/QUARTOS   ['+mprg+']')
ENDIF
lci:=cci:=00
lba:=35
cba:=99
CLEAR GETS
mincluir := ''

WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nPBid := wvw_pbCreate(NIL,4,65,5,75, 'EXCLUIR',NIL,{||excl_mesa(mtip,mnum)})
WVW_PBEnable( NIL, nPBId, .F. )

WHILE .T.
        setcor(1)
        limpa(lci,cci,lba,cba)
        exibi_prg(mprg)
        mtipo := 'M'
        mnumero := mpr_venda := 0
        mdescri := SPACE(50)
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        DEVPOS(lci  ,cci+1);DEVOUT('Tipo [M]esa [Q]uarto..:')
        DEVPOS(lci+1,cci+1);DEVOUT('Numero................:')
        DEVPOS(lci+2,cci+1);DEVOUT('Descricao.............:')
        DEVPOS(lci+3,cci+1);DEVOUT('Preco de Venda  R$....:')
        IF mtip = NIL
                mexcluir:=''
                WVW_PBEnable( NIL, nPBId, .F. )
                @ lci,cci+25 GET mtipo PICT '@!' VALID mtipo $ 'M,Q,C'
                @ lci+1,cci+25 GET mnumero PICT '9999' VALID IF(EMPTY(mnumero),.F.,.T.)
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN .T.
                ENDIF
                cons_merc := {}
                sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtipo)+' AND numero = '+sr_cdbvalue(STRZERO(mnumero,4)),,.t.,@cons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_merc) > 0
                        atencao('Mesas/Quarto/Chales ja Existe no Arquivo !!!')
                        LOOP
                ENDIF
                @ lci+2,cci+25 GET mdescri PICT '@!'
                @ lci+3,cci+25 GET mpr_venda PICT '999,999.99'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Inclusao do MESAS/QUARTOS:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
                sr_getconnection():exec('INSERT INTO mastmesas ('+;
                'tipo      ,'+; //5
                'numero    ,'+; //6
                'descri    ,'+; //7
                'data      ,'+; //9
                'preco     ,'+; //10
                'oper      ,'+; //11
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(mtipo                                )+','+; //5
                sr_cdbvalue(STRZERO(mnumero,4)                   )+','+; //6
                sr_cdbvalue(mdescri                              )+','+; //12
                sr_cdbvalue(mdata_sis                            )+','+; //10
                sr_cdbvalue(mpr_venda                            )+','+; //50
                sr_cdbvalue(cod_operado                          )+','+; //50
                sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ELSE
                WVW_PBEnable( NIL, nPBId, .T. )
                cons_merc := {}
                sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtip)+' AND numero = '+sr_cdbvalue(mnum),,.t.,@cons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_merc) = 0
                        atencao('Mesas/Quarto/Chales nao Existe no Arquivo !!!')
                        LOOP
                ENDIF
                DEVPOS(lci ,cci+25);DEVOUT(cons_merc[1,1])
                DEVPOS(lci+1,cci+25);DEVOUT(cons_merc[1,2])
                DEVPOS(lci+2,cci+25);DEVOUT(cons_merc[1,3])
                @ lci+3,cci+25 GET cons_merc[1,6] PICT '999,999.99'
                READ
                IF ! EMPTY(mexcluir)
                        mexcluir:=''
                        EXIT
                ENDIF
                IF LASTKEY() = 27
                        WHILE .T.
                                mensagem('Tecle <ENTER>p/continuar')
                                INKEY(0)
                                IF LASTKEY() = 13
                                EXIT
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
                        RETURN .T.
                ENDIF
                IF ! EMPTY(mexcluir)
                        mexcluir:=''
                        EXIT
                ENDIF
                IF LASTKEY() = 27 .OR. 'N' = op_simnao('S','Confirma a ALTERACAO da MESAS/QUARTOS:')
                        LOOP
                ENDIF
                sr_getconnection():exec("UPDATE mastmesas SET preco = "+sr_cdbvalue(cons_merc[1,6])+" WHERE tipo = "+sr_cdbvalue(mtip)+' AND numero = '+sr_cdbvalue(mnum),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ***********************************
FUNCTION excl_mesa(mt,mnu)
************************
IF ! ver_nivel(mprg+'EXCL','EXCLUSAO DE MESAS/QUARTOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
IF LASTKEY() = 27 .OR. 'S' = op_simnao('S','Confirma a EXCLUSAO do MESAS/QUARTOS:')
        sr_getconnection():exec("DELETE FROM mastmesas  WHERE tipo = "+sr_cdbvalue(mt)+' AND numero = '+sr_cdbvalue(mnu),,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        mexcluir := 1
        atencao('Este Registro foi EXCLUIDO com sucesso...')
ENDIF
RETURN NIL