#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#include "Fileio.ch"             // funcoes de leitura/gravacao de arquivo
#include "set.ch"                // constantes da funcao SETKEY()
#include "wingdi.ch"
#include "winuser.ch"
#include "common.ch"
#include "setcurs.ch"
#include "getexit.ch"
* LANCAMENTO DE PRODUTOS
************************
FUNCTION mastcusto()
*****************************
MEMVAR getlist,mmen_icms,mdata_sis,nivel_acess
LOCAL opcao,y:=0,mqtd_aux:=0,mopcao:='',f:=0,;
      msubtotal := 0, mcusto:=0

PRIVATE mqtd:=0,cons_merc:={},i:=0,nPBid:={},mped_merc:={},mtraco := REPLI('=',48),;
        MPRG:='MASTCUSTO',mmerc:=SPACE(50),;
        mtipo_imp:='M',mimp_tipo:=1,marq:=SPACE(35),m_sair := 0,mcaminho:=''

PRIVATE mcod_merc:=0,cons_prod := {}


CLEAR GETS
op_tela(0,0,55,50,'PLANILHA DE CUSTO ')
limpa(00,00,55,120)
setcor(1)
WvW_PBSetFont( NIL, 'Arial Black', 25, 0,)
setcor(3)
cons_parc:={}
botao(1,1,3,48)
DEVPOS(2,2);DEVOUT('Outros Custo (%):')
@ 2,15 GET mcusto PICT '999.999'
WHILE .T.
        //nPBotaoid1 := wvw_pbCreate(NIL,48,15,50,35,'    IMPRIMIR    ',NIL,{||mast30(mnum_lugar)})
        //ATENCAO('OK')
        setcor(1)
        //limpa(7,0,40,120)
        exibi_prg(mprg)
        mqtd := mcod_garcon := 0
        mmerc := SPACE(30)
        mobs:=SPACE(30)
        mensagem('Preencha os Campos - <ESC> p/Retornar')

        botao(4,1,8,48)
        DEVPOS(4,2);DEVOUT('Cod.Produto:')
        DEVPOS(5,2);DEVOUT('Descricao..:')
        DEVPOS(6,2);DEVOUT('Quantidade.:')
        DEVPOS(7,2);DEVOUT('Preco......:')
        botao(10,1,40,48)
        DrawLabel(11+f,2,'Item  Cod. Descricao              Quantd.  Vlr.Unit.  Vlr.Total',,m_color[8],'lucida console',15,8)
        IF LEN(cons_parc) > 0
                mqtd_lin := 0
                mitem := 1
                IF LEN(cons_parc) > 16
                        mqtd_lin := LEN(cons_parc) - 16
                ENDIF
                i:=f:=0
                DrawLabel(11+f,2,'Item  Cod. Descricao              Quantd.  Vlr.Unit.  Vlr.Total',,m_color[8],'lucida console',15,8)
                msubtotal := 0
                f++
                FOR i = 1 TO LEN(cons_parc)
                        IF mqtd_lin < i
                                DrawLabel(11+f,2,STRZERO(i,3)+'  '+STR(cons_parc[i,1],5)+' '+SUBSTR(cons_parc[i,4],1,20)+' '+TRANSFORM(cons_parc[i,2],'9,999.999')+' '+TRANSFORM(cons_parc[i,3],'999,999.99')+' '+TRANSFORM(cons_parc[i,2]*cons_parc[i,3],'999,999.99'),,,'lucida console',15,8)
                                f++
                                msubtotal := msubtotal + cons_parc[i,2]*cons_parc[i,3]
                        ENDIF
                NEXT
                setcor(1)
        ENDIF
        msubtotal := msubtotal * ((mcusto / 100)+1)
        DrawLabel(42,8,'T O T A L: ',,,'Arial Black',25,10)
        DrawLabel(42,30,ALLTRIM(ALLTRIM(TRANSFORM(msubtotal,ALLTRIM('@E 999,999.99')))),210,, 'arial black',45,15)
        WVW_PBEnable( NIL, nPBId, .T. )
        mcod_merc:=0
        @ 4,15 GET mcod_merc PICT '99999' VALID IF(EMPTY(mcod_merc),mcod_merc := f4_merc(),.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mped_merc := {}
        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mped_merc) = 0
                atencao('Codigo da mercadoria nao cadastrado')
                LOOP
        ENDIF
        mmerc := mped_merc[1,2]
        setcor(3)
        DEVPOS(5,15);DEVOUT(mped_merc[1,2])

        mpre := ' '
        DEVPOS(7,15);DEVOUT(TRANSFORM(mped_merc[1,6],'999,999.99'))
        mqtd := 1
        @ 6,15 GET mqtd PICT '9,999.999' VALID IF(EMPTY(mqtd) .OR. mqtd < 0,.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mopcao := op_simnao('S','Confirma a Inclusao do PRODUTO'+m_qp+m_qp+' Quantidade:  '+STR(mqtd))
        IF mopcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        AADD(cons_parc,{mped_merc[1,1],mqtd,mped_merc[1,6],mped_merc[1,2]})
        //atencao( sr_ShowVector( cons_parc ))

ENDDO
SETMODE(50,120)
WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
wvw_lclosewindow()
RETURN NIL
