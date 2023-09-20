* RESERVA DE QUARTOS
********************
#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#include "Fileio.ch"             // funcoes de leitura/gravacao de arquivo
#include "set.ch"                // constantes da funcao SETKEY()
#include "wingdi.ch"
#include "winuser.ch"
#include "common.ch"
#include "setcurs.ch"
#include "getexit.ch"
******************
FUNCTION mast700()
******************
MEMVAR getlist,mmen_icms,mdata_sis,nivel_acess
LOCAL MPRG:='MAST700',mdata_inicial,mdata_final, mfornecedor, mcliente, mdata_reserva, mdata_inclusao, mvalor, mobs_inclusao, mobs_baixa,;
      mespera:=' ', mperiodo:={}, demo_set := {}
PRIVATE mnum_mesa:=0,aret:={},i:=0,mtraco := REPLI('=',48),mnum_doc := 1,mtipo_imp:='M',mimp_tipo:=1,marq:=SPACE(35), mcaminho,m_reserva := {}
IF ! ver_nivel(mprg+'QTO','RESERVA DE QUARTOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
cons_lugar := {}
sr_getconnection():exec("SELECT numero FROM mastmesas WHERE tipo = 'Q' AND (sr_deleted = ' ' OR sr_deleted IS NULL)",,.t.,@cons_lugar)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(cons_lugar) > 0
        mqtd_mesas := LEN(cons_lugar)
ENDIF
op_tela(0,0,50,120,' RESERVA DE QUARTOS  ['+mprg+']',,1)
mcaminho:=Curdrive()+ ":\" + rtrim(curdir())+ "\"
CLEAR GETS
nPBid:={}
i:=0
FOR i = 1 TO mqtd_mesas
        AADD(nPBid,0)
NEXT
mdata_inicial = DATE()
mdata_final = CTOD('  /  /  ')
abre_fecha := {}

WHILE .T.

        botao(2,10,5,35,,'Periodo')
        DEVPOS(3,12);DEVOUT('Data Inicial:')
        DEVPOS(4,12);DEVOUT('Data Final..:')
        @ 7,0 to 7,120
        DEVPOS(8,0);DEVOUT(' Quarto Reserva Data e No.         Periodo      Cliente               Fornecedor           Reserva     Valor R$ Status')
        @ 9,0 to 9,120
        @ 3,26 GET mdata_inicial VALID IF(EMPTY(mdata_inicial),.F.,.T.)
        @ 4,26 GET mdata_final VALID (IF(EMPTY(mdata_final),.F.,.T.) .OR. IF(mdata_inicial > mdata_final,.F.,.T.))
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        mperiodo:={}
        AADD(mperiodo,mdata_inicial)
        i:=0
        FOR i = 1 TO mdata_final - mdata_Inicial
                AADD(mperiodo,mdata_inicial + i)
        NEXT
        * atencao( sr_ShowVector( mperiodo ))
        cons_reserva := {}
        mocupado := {}
        m_reserva := {}
        m_quarto := {}
        cons_lugar := {}
        demo_set := {}
        i := point := 0
        FOR i = 1 TO LEN(mperiodo)
                y := 0
                FOR y = 1 TO mqtd_mesas
                        * atencao("SELECT quarto,reserva FROM mastreserva WHERE quarto = "+sr_cdbvalue('Q'+STRZERO(y,3))+" AND "+sr_cdbvalue(mperiodo[i])+" BETWEEN data_inicial AND data_final")
                        sr_getconnection():exec("SELECT quarto FROM mastreserva WHERE quarto = "+sr_cdbvalue(STRZERO(y,4))+" AND "+sr_cdbvalue(mperiodo[i])+" BETWEEN data_inicial AND data_final",,.t.,@cons_lugar)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_lugar) > 0
                                AADD(mocupado,cons_lugar[1,1])
                                EXIT
                        ENDIF
                NEXT
        NEXT
        i := 0
        FOR i = 1 TO mqtd_mesas
                posicao := ASCAN(mocupado,STRZERO(i,4))
                IF posicao > 0
                        *atencao(mocupado[posicao]+ ' '+m_reserva[posicao])
                        cons_reserva := {}
                        comando := "SELECT re.quarto, re.data_reserva,re.reserva,re.data_inicial,re.data_final,re.cliente,cli.razao,re.fornecedor,"
                        comando := comando + "(select razao from mastforn where cod_forn = re.fornecedor), re.reserva_forn, re.valor, re.status "
                        comando := comando + "FROM mastreserva re "
                        comando := comando + "join mastcli cli on cli.cod_cli = re.cliente WHERE re.quarto = "+sr_cdbvalue(mocupado[posicao])
                        sr_getconnection():exec(comando,,.t.,@cons_reserva)
                        AADD(demo_set,' '+cons_reserva[1,1]+'  '+DTOC(cons_reserva[1,2])+' '+cons_reserva[1,3]+' '+DTOC(cons_reserva[1,4])+' a '+DTOC(cons_reserva[1,5])+' '+cons_reserva[1,6]+' '+SUBSTR(cons_reserva[1,7],1,15)+' '+cons_reserva[1,8]+' '+SUBSTR(cons_reserva[1,9],1,15)+' '+cons_reserva[1,10]+' '+TRANSFORM(cons_reserva[1,11],'99,999.99')+'   '+cons_reserva[1,12])
                        AADD(m_reserva,cons_reserva[1,3])
                        AADD(m_quarto,cons_reserva[1,1])

                ELSE
                        AADD(demo_set,' '+STRZERO(i,4)+'    /  /                /  /   a   /  /                                                              0.00 ')
                        AADD(m_reserva,'')
                        AADD(m_quarto,STRZERO(i,4))

                ENDIF
        NEXT

        setcor(1)
        mensagem('<ESC> ou <ENTER> p/Rtornar')
        point := ACHOICE(10,1,49,119,demo_set,,,point)
        DO CASE
                CASE LASTKEY() = 27
                        wvw_lclosewindow()
                        EXIT
                CASE LASTKEY() = 13
                        lanc_quarto(m_quarto[point],m_reserva[point])
                        wvw_lclosewindow()
                        EXIT
        ENDCASE

        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
ENDDO
RETURN NIL
***************************** f i m **********************************
FUNCTION lanc_quarto(mnum_quarto,mrese)
********************************
LOCAL mopcao:='',mdata_ini,mdata_fim, mdata_inclusao, mdata_reserva, reserva, mfornecedor,reserva_forn,mcliente,mvalor,mobs_inclusao

* PRIVATE

CLEAR GETS
op_tela(0,0,13,80,'QUARTO No. ['+mnum_quarto+']',,1)
WHILE .T.
        setcor(1)
        DEVPOS(1,1);DEVOUT('Data Inclusao..:')
        DEVPOS(2,1);DEVOUT('Data Reserva...:')
        DEVPOS(3,1);DEVOUT('Numero Reserva.:')
        DEVPOS(4,1);DEVOUT('Fornecedor.....:')
        DEVPOS(5,1);DEVOUT('Numero Reserva.:')
        DEVPOS(6,1);DEVOUT('Cliente........:')
        DEVPOS(7,1);DEVOUT('Data Inicial...:')
        DEVPOS(8,1);DEVOUT('Data Final.....:')
        DEVPOS(9,1);DEVOUT('Valor R$.......:')
        DEVPOS(10,1);DEVOUT('Observacao....:')
        * mstatus := ver_status(STRZERO(mnum_lugar,4))
        IF EMPTY(mrese)
                *mstatus := '* '+ver_status(STRZERO(mnum_lugar,4))
                mdata_inclusao := DATE()
                mdata_reserva  := DATE()
                mdata_ini := mdata_fim := CTOD('  /  /  ')
                mreserva := SPACE(10)
                mfornecedor := mcliente := mvalor := 0
                mreserva_forn := SPACE(10)
                mobs_inclusao := SPACE(60)
                numero_reserva := {}
                sr_getconnection():exec("SELECT max(reserva) FROM mastreserva",,.t.,@numero_reserva)
                sr_getconnection():exec('COMMIT',,.f.)
                * atencao( sr_ShowVector( numero_reserva ))

                IF LEN(numero_reserva) = 0
                        mreserva := strzero(1,10)
                ELSE
                        mreserva := strzero(VAL(numero_reserva[1,1]) + 1,10)
                ENDIF
                DEVPOS(3,18);DEVOUT(mreserva)

                @ 1,18 GET mdata_inclusao       //VALID IF(EMPTY(mdata_inicial),.F.,.T.)
                @ 2,18 GET mdata_reserva        //VALID IF(EMPTY(mdata_inicial),.F.,.T.)
                @ 4,18 GET mfornecedor PICT "9999" VALID IF(EMPTY(mfornecedor),.F.,v_fornece(mfornecedor,4,23))
                @ 5,18 GET mreserva_forn         //VALID IF(EMPTY(mdata_inicial),.F.,.T.)
                @ 6,18 GET mcliente PICT '99999' VALID IF(EMPTY(mcliente),.F.,ver_cli(mcliente,6,24))
                @ 7,18 GET mdata_ini            //VALID IF(EMPTY(mdata_inicial),.F.,.T.)
                @ 8,18 GET mdata_fim            //VALID (IF(EMPTY(mdata_final),.F.,.T.) .OR. IF(mdata_inicial < mdata_final,.F.,.T.))
                @ 9,18 GET mvalor PICT '99,999.99'
                @ 10,18 GET mobs_inclusao
                READ
                IF LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN .T.
                ENDIF
                data_nul := CTOD('  /  /  ')
                mopcao := op_simnao('S','Confirma a Inclusao da RESERVA')
                IF mopcao = 'N' .OR. LASTKEY() = 27
                        LOOP
                ENDIF
                sr_getconnection():exec('INSERT INTO mastreserva (quarto,data_inclusao,hora_inclusao,cliente,data_reserva,reserva,data_inicial,data_final,fornecedor,reserva_forn,'+;
                                        'valor,status,oper_inclusao,obs_inclusao,obs_checkout,hora_checkout,oper_checkout)'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mnum_quarto)+','+; //1
                                        sr_cdbvalue(mdata_inclusao)+','+; //1
                                        sr_cdbvalue(TIME())+','+;
                                        sr_cdbvalue(STRZERO(mcliente,5))+','+; //1
                                        sr_cdbvalue(mdata_reserva)+','+; //1
                                        sr_cdbvalue(mreserva)+','+; //1
                                        sr_cdbvalue(mdata_ini)+','+; //1
                                        sr_cdbvalue(mdata_fim)+','+; //1
                                        sr_cdbvalue(STRZERO(mfornecedor,4))+','+; //1
                                        sr_cdbvalue(mreserva_forn)+','+; //1
                                        sr_cdbvalue(mvalor)+','+; //1
                                        sr_cdbvalue('R')+','+;
                                        sr_cdbvalue(cod_operado)+','+;
                                        sr_cdbvalue(mobs_inclusao)+','+;
                                        sr_cdbvalue('')+','+;
                                        sr_cdbvalue('')+','+;
                                        sr_cdbvalue('')+')',,.f.)

        ELSE
                *atencao(m_reserva[mnum_quarto,1])
                numero_reserva := {}
                sr_getconnection():exec("SELECT * FROM mastreserva WHERE quarto = "+sr_cdbvalue(mnum_quarto)+" AND reserva = "+sr_cdbvalue(mrese),,.t.,@numero_reserva)
                sr_getconnection():exec('COMMIT',,.f.)
                DEVPOS(1,18);DEVOUT(numero_reserva[1,2])
                DEVPOS(2,18);DEVOUT(numero_reserva[1,7])
                DEVPOS(3,18);DEVOUT(numero_reserva[1,8])
                DEVPOS(4,18);DEVOUT(numero_reserva[1,11])
                DEVPOS(5,18);DEVOUT(numero_reserva[1,12])
                DEVPOS(6,18);DEVOUT(numero_reserva[1,6])
                DEVPOS(7,18);DEVOUT(numero_reserva[1,9])
                DEVPOS(8,18);DEVOUT(numero_reserva[1,10])
                DEVPOS(9,18);DEVOUTPICT(numero_reserva[1,13],'99,999.99')
                DEVPOS(10,18);DEVOUT(numero_reserva[1,5])
                DEVPOS(12,18);DEVOUT('Pressione qualquer tecla para Retornar')
                INKEY(0)
                wvw_lclosewindow()
                RETURN .T.
        ENDIF

ENDDO
SETMODE(50,120)
WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
wvw_lclosewindow()
RETURN NIL
******************************************* FIM *************************************
FUNCTION ver_status(mcodigo)
*******************
LOCAL verstatus
verstatus:={}
sr_getconnection():exec("SELECT status FROM mastreserva WHERE quarto = "+sr_cdbvalue(mcodigo)+" AND (status = 'R' OR status = 'I')",,.t.,@verstatus)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(verstatus) > 0
        RETURN verstatus[1,1]
ENDIF
RETURN ' '
