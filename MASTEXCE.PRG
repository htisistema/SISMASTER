* FUNCAO P/CONSULTAR EXCECAO
****************************
#include "inkey.ch"              // constantes de codigos das teclas

FUNCTION mastexce(cons,mdcri,mvar_atac,mpercentual,prod)
******************************************************
LOCAL mprg:='MASTEXCE',f4lci := 6,f4cci := 0,f4lba := 22,f4cba := 100,;
      oconsprod,ocolprod[9],i,nkey,nBota,mpesquisa:=SPACE(50)

MEMVAR mdata_sis,nivel_acess

CLEAR GETS
f4 := '*'
setcor(1)
op_tela(03,00,48,100,memp_resa+SPACE(10)+' EXCECOES DOS PRODUTOS ',,1)
WvW_PBSetFont( NIL, "Courier New", 15, 0,)
nBota := wvw_pbCreate(NIL,1,70,2,90,'Inclusao EXCECAO DE PRODUTO',NIL,{||mast_exce()})
WVW_PBEnable( NIL, nBota, .T. )

WHILE .T.
        exibi_prg(mprg)
        limpa(0,0,50,100)
        mensagem('Digite: [CTRL+Y] Apagar ')
        setcor(1)
        DEVPOS(01,01);DEVOUT('Pesquisa Geral:')
        setcor(3)
        @ 03,00 TO 03,100
        DEVPOS(04,01);DEVOUT('   NCM     CEST     DESCRICAO')
        @ 05,00 TO 05,100
        @ 43,00 TO 43,100
        DEVPOS(44,01);DEVOUT('Total de Produtos:')
        DEVPOS(44,27);DEVOUT('Tempo da Pesquisa:                                                           ')
        setcor(1)

        //DEVPOS(04,00);DEVOUT('Cod.Especie...:')
        @ 01,17 GET mpesquisa PICT '@!KS50'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                CLEAR GETS
                RETURN ' '
        ENDIF
        mhoras := TIME()
        mensagem('Escolha o produto e tecle <ENTER> ou <ESC> p/Abandonar')
        IF EMPTY(mpesquisa)
                LOOP
        ENDIF
        cons_m := {}
        sr_getconnection():exec("SELECT * FROM mastexce WHERE descricao LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')+" OR grupo LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')+" OR id LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')+" ORDER BY descricao",,.t.,@cons_m)
        IF LEN(cons_m) = 0
                atencao('Nao foi encontrado nenhum ..')
                LOOP
        ENDIF
        m_prod := {}
        m_pos  := {}
        point  := 0
        DEVPOS(44,20);DEVOUT(STRZERO(LEN(cons_m),5))
        DEVPOS(44,46);DEVOUT(ELAPTIME(mhoras,TIME()))
        FOR i = 1 TO LEN(cons_m)
                AADD(m_prod,STR(cons_m[i,1],4);
                           +' '+cons_m[i,2];
                           +' '+cons_m[i,3];
                           +' '+TRANSFORM(cons_m[i,4],'9,999.99'))
                        AADD(m_pos,cons_m[i,1])
        NEXT

        //WVW_PBEnable( NIL, f4_botao, .T. )

        point := ACHOICE(6,0,42,100,m_prod,,,point)

        DO CASE
                CASE LASTKEY()=27
                        LOOP
                CASE LASTKEY() = 13
        ENDCASE
END
RELEASE f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,f4msele,f4morde,f4men,mcod,;
        oconsprod,ocolprod[8],i,nkey,mteste
wvw_lclosewindow()
CLEAR GETS
RETURN ' '
**************** f i m **********************************
FUNCTION mast_exce()
*******************
LOCAL mid := 0,mdescricao := SPACE(60),mgrupo  := SPACE(3),mpreco  := 0
setcor(1)
exibi_prg('MAST_NCM1')
op_tela(20,00,25,90,'INCLUSAO  NCM/CEST',,1)
CLEAR GETS
WHILE .T.
        mid := 0
        mdescricao := SPACE(60)
        mgrupo  := SPACE(3)
        mpreco  := 0
        DEVPOS(01,01);DEVOUT('Codigo........:')
        DEVPOS(02,01);DEVOUT('Descricao.....:')
        DEVPOS(03,01);DEVOUT('Grupo.........:')
        DEVPOS(04,01);DEVOUT('Preco R$......:')
        setcor(1)
        @ 01,17 GET mid PICT '9999'
        @ 02,17 GET mdescricao
        @ 03,17 GET mgrupo PICT '999'
        @ 04,17 GET mpreco PICT '9,999.99'
        READ
        IF LASTKEY() = 27 .OR. mop = 'N'
                wvw_lclosewindow()
                CLEAR GETS
                RETURN ' '
        ENDIF
        mop := op_simnao('S','Confirma a INCLUSAO do NCM/CEST:')
        sr_getconnection():exec('INSERT INTO mastexce (id,descricao,grupo,preco)'+;
                        ' VALUES ('+;
                        sr_cdbvalue(mid)+','+; //1
                        sr_cdbvalue(mdescricao)+','+; //2
                        sr_cdbvalue(mgrupo)+','+; //3
                        sr_cdbvalue(mpreco)+')',,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        EXIT
ENDDO
wvw_lclosewindow()
CLEAR GETS
RETURN ' '
