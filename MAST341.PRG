******************
* T.P's PEDENTES
******************
FUNCTION MAST341()
******************
LOCAL mprg:='MAST341',;
      lci,cci,lba,cba,point,m_codigo:={},m_posicao:={},mtot_ger,cons_arq:={},i:=0
IF ! ver_nivel(mprg,'CONSULTA MESAS EM ABERTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := cci := 0
lba := 23
cba := 30
op_tela(00,30,25,60,' CONSULTA MESAS EM ABERTO')
CLEAR GETS
WHILE .T.
        exibi_prg(mprg)
        setcor(3)
        @ lci+2,cci TO lci+2,cba
        @ lba,cci TO lba,cba
        DEVPOS(lci+1,cci+1);DEVOUT('No.Mesa ')
        DEVPOS(lci+1,COL()+2);DEVOUT('       Valor R$')
        mensagem('Aguarde um momento coletando informacoes para a consulta OK !!!')
        cons_arq := {}
        sr_getconnection():exec("SELECT num_local,sum(qtd*preco) FROM mastmov WHERE dat_pag IS NULL GROUP BY num_local,num_local",,.t.,@cons_arq)
        m_codigo := {}
        m_posicao:= {}
        mtot_ger := i := 0
        FOR i = 1 TO LEN(cons_arq)
                prog_imp(i,cons_arq[i,1])
                              //      1                              2
                AADD(m_codigo,' '+cons_arq[i,1]+'          '+TRANSFORM(cons_arq[i,2],'999,999.99'))
                AADD(m_posicao,cons_arq[i,1])
                mtot_ger := mtot_ger + cons_arq[i,2]
        NEXT
        IF LEN(m_codigo) = 0
                atencao('Nao existe Nenhuma Mesa ABERTA !!!')
                EXIT
        ENDIF
        WHILE .T.
                point := 0
                //@ lba+1,cci TO lba+1,cba
                DEVPOS(lba+1,00);DEVOUT('Qtd.MESAS Abertas:'+TRANSFORM(LEN(cons_arq),'999,999'))
                DEVPOS(lba+2,00);DEVOUT('Total R$.........:'+TRANSFORM(mtot_ger,'999,999.99'))
                mensagem("<ESC>Retorna - <ENTER>Confirma")
                point := ACHOICE(lci+3,cci,lba-1,cba,m_codigo)
                IF LASTKEY()=27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF LASTKEY() = 13
                        mnum_mesa := VAL(m_posicao[point])
                        setcor(1)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDDO
ENDDO
setcor(1)
wvw_lclosewindow()
RETURN NIL
************************* F I M ******************************************
