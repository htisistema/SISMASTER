*************************
* EXCLUSAO DE Fabricante
*************************
FUNCTION sac142
***************
LOCAL MPRG:='SAC142',opcao,mcons_forn:={}
MEMVAR mcod_forn,getlist

op_tela(00,00,10,85,' Fornecedor e OUTROS ')
WHILE .T.
        limpa(0,0,22,79)
        DEVPOS(0,0);DEVOUT('Codigo........: '+STRZERO(mcod_forn,4))
        DEVPOS(1,0);DEVOUT('Data Cadastro.: '+DTOC(forn->data_cad))
        DEVPOS(2,0);DEVOUT('R.Social......: '+forn->razao)
        DEVPOS(3,0);DEVOUT('Endereco......: '+forn->endereco)
        DEVPOS(4,0);DEVOUT('Bairro........: '+forn->bairro)
        DEVPOS(5,0);DEVOUT('Cidade........: '+forn->cidade)
        DEVPOS(6,0);DEVOUT('UF............: '+forn->uf)
        DEVPOS(7,0);DEVOUT('CEP...........: '+forn->cep)
        DEVPOS(8,0);DEVOUT('CGC...........: '+forn->cgc)
        DEVPOS(9,0);DEVOUT('Inscricao Est.: '+forn->insc)
        DEVPOS(10,0);DEVOUT('Observacao....: '+forn->obs)
        sr_getconnection():exec("SELECT * FROM sacdupp WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4)),,.t.,@mcons_forn)
        IF LEN(mcons_forn) > 0
                IF 'N' = op_simnao('N','Este Fornecedor tem DOCUMENTO APAGAR se confirmar a EXCLUSAO vai ser EXCLUIDO TODOS OD DOCUMENTO:')
                        EXIT
                ENDIF
        ENDIF
        IF 'N' = op_simnao('N','Confirma Exclusao do FORNECEDOR:')
                EXIT
        ELSE
                sr_getconnection():exec("DELETE FROM sacforn WHERE cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4)),,.f.)
                sr_getconnection():exec("DELETE FROM sacdupp WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4)),,.f.)
                sr_getconnection():exec("DELETE FROM sacforn WHERE SR_DELETED = 'T'",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************

