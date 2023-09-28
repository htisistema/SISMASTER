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
      msubtotal := 0

PRIVATE mqtd:=0,cons_merc:={},i:=0,nPBid:={},mped_merc:={},mtraco := REPLI('=',48),;
        MPRG:='MASTCUSTO',mmerc:=SPACE(50),;
        mtipo_imp:='M',mimp_tipo:=1,marq:=SPACE(35),m_sair := 0,mcaminho:=''

PRIVATE mcod_merc:=0,cons_prod := {}



op_grupo:=0
CLEAR GETS
op_tela(0,0,55,120,'PLANILHA DE CUSTO ')
setcor(4)
limpa(00,00,55,120)
setcor(1)
WvW_PBSetFont( NIL, 'Arial Black', 25, 0,)
setcor(3)
//limpa(4,40,17,80)
botao(1,10,4,100)
botao(5,10,9,100)
DEVPOS(5,12);DEVOUT('DESCRICAO DO PRODUTO')
cons_parc:={}
WHILE .T.
        nPBotaoid1 := wvw_pbCreate(NIL,46,40,48,70,'    IMPRIMIR    ',NIL,{||mast30(mnum_lugar)})
        //ATENCAO('OK')
        setcor(1)
        //limpa(7,0,40,120)
        exibi_prg(mprg)
        mqtd := mcod_garcon := 0
        mmerc := SPACE(30)
        mobs:=SPACE(30)
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        botao(12,01,15,32)
        botao(17,01,20,32)
        botao(22,01,25,32)
        //botao(52,01,55,25)
        DrawLabel(12,2,'Codigo',,,'Arial Black',25,10)
        DrawLabel(17,2,'Quantidade',,,'Arial Black',25,10)
        DrawLabel(22,2,'Valor Unitario',,,'Arial Black',25,10)
        //DrawLabel(49,2,'Desconto R$',,,'Arial Black',25,10)
        WVW_DrawBoxGet(,14,2,20)
        WVW_DrawBoxGet(,19,2,20)
        WVW_DrawBoxGet(,24,2,20)
        WVW_DrawBoxGet(,29,2,20)
        WVW_DrawBoxGet(,34,2,30)
        WVW_DrawBoxGet(,39,2,20)
        WVW_DrawBoxGet(,44,2,20)
        WVW_DrawBoxGet(,49,2,20)
        //WVW_DrawBoxGet(,51,2,20)

        botao(12,40,25,70) // IMAGEM
        WVW_DrawImage( ,12,40,25,70,ALLTRIM(m_cfg[12])+'HTIFIRMA.JPG',.T.,.F.)

        botao(30,40,35,70) // IMAGEM
        DrawLabel(30,42,'SUB-TOTAL',,,'Arial Black',25,10)

        //botao(12,77,54,118,,' C O N T A: '+mtip_lugar+'-'+STRZERO(mnum_lugar,3)) // IMAGEM
        botao(12,77,54,118) // IMAGEM

        /*
        botao(28,1,39,50)
        DEVPOS(29,2);DEVOUT('Cod.Produto:')
        DEVPOS(30,2);DEVOUT('Descricao..:')
        DEVPOS(31,2);DEVOUT('Quantidade.:')
        DEVPOS(32,2);DEVOUT('Preco......:')
        DEVPOS(33,2);DEVOUT('Cod.Garcon.:')
        DEVPOS(34,2);DEVOUT('Observacao.:')
        */
        //WVW_PBEnable( NIL, nPBId, .T. )
        IF LEN(cons_parc) > 0
                DEVPOS(29,2);DEVOUT(cons_parc[1,5])
                mqtd_lin := 0
                mitem := 1
                IF LEN(cons_parc) > 20
                        mqtd_lin := LEN(cons_parc) - 20
                ENDIF
                i:=f:=0
                DrawLabel(13+f,78,'Item  Cod. Descricao              Quantd.  Vlr.Unit.  Vlr.Total',,m_color[8],'lucida console',14,7)
                msubtotal := 0
                f++
                FOR i = 1 TO LEN(cons_parc)
                        IF mqtd_lin < i
                                DrawLabel(13+f,78,STRZERO(i,3)+'  '+STR(cons_parc[i,1],5)+' '+SUBSTR(cons_parc[i,4],1,20)+' '+TRANSFORM(cons_parc[i,2],'9,999.999')+' '+TRANSFORM(cons_parc[i,3],'999,999.99')+' '+TRANSFORM(cons_parc[i,2]*cons_parc[i,3],'999,999.99'),,,'lucida console',14,7)
                                f++
                                msubtotal := msubtotal + cons_parc[i,2]*cons_parc[i,3]
                        ENDIF
                NEXT
                setcor(1)
        ENDIF
        DrawLabel(32,42,ALLTRIM(ALLTRIM(TRANSFORM(msubtotal,ALLTRIM('@E 999,999.99')))),210,, 'arial black',45,15)
        WVW_PBEnable( NIL, nPBId, .T. )
        mcod_merc:=0
        @ 14,2 GET mcod_merc PICT '99999' VALID IF(EMPTY(mcod_merc),mcod_merc := f4_merc(),.T.)
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
        WVW_DrawLabel(,06,11,mped_merc[1,2],,,,, 'arial black',40,17,,,,,)

        mpre := ' '
        limpa(12,40,25,70)
        botao(12,40,25,70)
        IF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg')
                WVW_DrawImage( ,12,40,25,70,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg',.T.,.F.)
        ELSEIF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp')
                WVW_DrawImage( ,12,40,25,70,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp',.T.,.F.)
        ENDIF
        DEVPOS(24,2);DEVOUT(TRANSFORM(mped_merc[1,6],'999,999.99'))
        mqtd := 1
        @ 19,2 GET mqtd PICT '9,999.999' VALID IF(EMPTY(mqtd) .OR. mqtd < 0,.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mopcao := op_simnao('S','Confirma a Inclusao do PRODUTO'+m_qp+m_qp+' Quantidade:  '+STR(mqtd))
        IF mopcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        AADD(cons_parc,{mped_merc[1,1],mqtd,mped_merc[1,6],mped_merc[1,2]})
        atencao( sr_ShowVector( cons_parc ))

ENDDO
SETMODE(50,120)
WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
wvw_lclosewindow()
RETURN NIL
