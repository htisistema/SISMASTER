MEMVAR getlist
*************************
* INCLUSAO  PRODUTO
*************************
FUNCTION mast202(mtipo_lanca)
*****************************
MEMVAR mmen_icms,mdata_sis,nivel_acess
LOCAL mnum_mesa:=0,lci,cci,lba,cba,cons_merc:={},m_mesa:={},i:=0,nPBid,mped_merc:={},point,m_pos
PRIVATE MPRG:='MAST202',mtraco := REPLI('=',54)

IF mtipo_lanca = 'M'
        IF ! ver_nivel(mprg+'MESA','LANCAMENTO DE MESAS','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(10,10,46,90,' LANCAMENTO DE MESAS  ['+mprg+']')
ELSEIF mtipo_lanca = 'Q'
        IF ! ver_nivel(mprg+'QTO','LANCAMENTO DE QUARTOS','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(10,10,46,90,' LANCAMENTO DE QUARTOS  ['+mprg+']')
ELSEIF mtipo_lanca = 'C'
        IF ! ver_nivel(mprg+'CHL','LANCAMENTO DE CHALES','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(10,10,46,90,' LANCAMENTO DE CHALES  ['+mprg+']')
ENDIF
lci:=cci:=00
lba:=35
cba:=99
CLEAR GETS
WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nPBid := wvw_pbCreate(NIL,lba-1,cci+61,lba,cci+79, 'Fechamento Parcial',NIL,{||Fecha_parc(mtipo_lanca,mnum_mesa,mnum_doc)})
WVW_PBEnable( NIL, nPBId, .F. )
WHILE .T.
        setcor(1)
        limpa(lci,cci,lba,cba)
        exibi_prg(mprg)
        mcod_merc := mnum_mesa := mqtd := mcod_garcon := 0
        mmerc := SPACE(30)
        mobs:=SPACE(30)
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        DEVPOS(lci  ,cci+1);DEVOUT('Numero da MESA .......:')
        @ lci+1,cci TO lci+1,cba

        WVW_PBEnable( NIL, nPBId, .F. )

        @ lci,cci+25 GET mnum_mesa PICT '9999' VALID IF(EMPTY(mnum_mesa),.F.,.T.) .AND. lim_get() WHEN men_get(,,'Digite o Numero da MESA - [ESC] p/Retonar')
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        cons_merc := {}
        sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtipo_lanca)+" AND numero = "+sr_cdbvalue(mnum_mesa),,.t.,@cons_merc)
        IF LEN(cons_merc) = 0
                atencao('MESA nao existe em nossos Arquivo !!!')
                LOOP
        ENDIF
        WHILE .T.
                limpa(lci+3,cci+1,lba-3,cba-1)
                cons_merc := {}
                sr_getconnection():exec("SELECT * FROM mastmov WHERE tipo = "+sr_cdbvalue(mtipo_lanca)+" AND num_local = "+sr_cdbvalue(mnum_mesa)+' AND dat_pag IS NULL',,.t.,@cons_merc)
                IF LEN(cons_merc) = 0
                        atencao('Esta mesa nao estar ABERTA por isso nao pode alterar...')
                        EXIT
                ELSE
                        mnum_doc := VAL(cons_merc[1,1])

                        WVW_PBEnable( NIL, nPBId, .T. )

                        i := mcont_doc := mtotal_doc := 0
                        m_mesa := {}
                        m_pos  := {}
                        FOR i = 1 TO LEN(cons_merc)
                                AADD(m_mesa,' '+STR(cons_merc[i,5],5)+' '+cons_merc[i,6]+'  '+TRANSFORM(cons_merc[i,7],'999,999.99')+' '+TRANSFORM(cons_merc[i,8],'999,999.99')+' '+TRANSFORM(cons_merc[i,7]*cons_merc[i,8],'999,999.99'))
                                AADD(m_pos,{cons_merc[i,23],cons_merc[i,7],cons_merc[i,8],cons_merc[i,12]})
                                mcont_doc ++
                                mtotal_doc := mtotal_doc + (cons_merc[i,7] * cons_merc[i,8])
                        NEXT

                        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                        setcor(3)
                        DEVPOS(lci+1,cci+01);DEVOUT('Produto')
                        DEVPOS(lci+1,cci+40);DEVOUT('Quantidade')
                        DEVPOS(lci+1,cci+51);DEVOUT(' Vlr.Unit.')
                        DEVPOS(lci+1,COL()+6);DEVOUT('Total')
                        @ lci+2,cci TO lci+2,cba
                        @ lba-2,cci TO lba-2,cba
                        DEVPOS(lba-1,cci+1);DEVOUT('Quantidade:')
                        DEVPOS(lba-1,cci+24);DEVOUT('Total:')
                        setcor(1)
                        DEVPOS(lba-1,cci+13);DEVOUT(STRZERO(mcont_doc,4))
                        DEVPOS(lba-1,cci+31);DEVOUT(TRANSFORM(mtotal_doc,'9,999,999.99'))
                        point := ACHOICE(lci+3,cci+1,lba-3,cba-1,m_mesa,,,point)
                        DO CASE
                                CASE LASTKEY()=27
                                        EXIT
                                CASE LASTKEY() = 13
                                        op_tela(10,10,15,80,'Alteracao de Produto na MESA')
                                        DEVPOS(0,1);DEVOUT('Produto....:')
                                        DEVPOS(1,1);DEVOUT('Quantidade.:')
                                        DEVPOS(2,1);DEVOUT('Vlr.Unit...:')
                                        DEVPOS(3,1);DEVOUT('OBS........:')
                                        setcor(3)
                                        DEVPOS(0,14);DEVOUT(SUBSTR(m_mesa[point],2,36))
                                        setcor(1)
                                        @ 1,14 GET m_pos[point,2] PICT '999,999.99'
                                        @ 2,14 GET m_pos[point,3] PICT '999,999.99' WHEN m_pos[point,2] > 0
                                        @ 3,14 GET m_pos[point,4]
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        IF m_pos[point,2] = 0
                                                IF 'S' = op_simnao('N','Confirma a EXCLUSAO do Produto:')
                                                        sr_getconnection():exec("DELETE FROM mastmov WHERE sr_recno = "+sr_cdbvalue(m_pos[point,1]),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ELSE
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF
                                                cons_mov := {}
                                                sr_getconnection():exec("SELECT * FROM mastmov WHERE tipo = "+sr_cdbvalue(mtipo_lanca)+" AND num_local = "+sr_cdbvalue(mnum_mesa)+' AND dat_pag IS NULL',,.t.,@cons_mov)
                                                IF LEN(cons_mov) = 0
                                                        sr_getconnection():exec("UPDATE mastmovcab SET status = 'FECHADA' WHERE mesa = "+sr_cdbvalue(mnum_mesa)+'AND tipo = '+sr_cdbvalue(mtipo_lanca),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ELSE
                                                IF 'S' = op_simnao('S','Confirma a ALTERACAO do Produto:')
                                                        sr_getconnection():exec("UPDATE mastmov SET qtd = "+sr_cdbvalue(m_pos[point,2])+",preco = "+sr_cdbvalue(m_pos[point,3])+",obs = "+sr_cdbvalue(m_pos[point,4])+" WHERE sr_recno = "+sr_cdbvalue(m_pos[point,1]),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ELSE
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        wvw_lclosewindow()

                        ENDCASE
                ENDIF
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ***********************************
