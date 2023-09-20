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
************************
FUNCTION mast750()
*****************************
MEMVAR getlist,mmen_icms,mdata_sis,nivel_acess
LOCAL MPRG:='MAST750',mobs_baixa,mpesquisa,mdata_ckeckin,mobs_ckeckin,opcao,mquarto:=0
PRIVATE mnum_mesa:=0,aret:={},i:=0,mtraco := REPLI('=',48),mnum_doc := 1,mtipo_imp:='M',mimp_tipo:=1,marq:=SPACE(35), mcaminho

IF ! ver_nivel(mprg+'QTO','CHECK OUT','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(0,0,16,80,' CHECK OUT  ['+mprg+']',,1)
CLEAR GETS
WHILE .T.
        mquarto:=0
        mdata_ckeckout := DATE()
        mobs_ckeckout  := SPACE(60)
        DEVPOS(1,1);DEVOUT('No.Quarto....:')
        DEVPOS(2,1);DEVOUT('Cliente......:')
        DEVPOS(3,1);DEVOUT('Data Reserva.:')
        DEVPOS(4,1);DEVOUT('No. Reserva..:')
        DEVPOS(5,1);DEVOUT('Data Inicial.:')
        DEVPOS(6,1);DEVOUT('Data Final...:')
        DEVPOS(7,1);DEVOUT('Fornecedor...:')
        DEVPOS(8,1);DEVOUT('No.Reserva...:')
        DEVPOS(9,1);DEVOUT('Valor R$.....:')
        DEVPOS(10,1);DEVOUT('Data Checkin.:')
        DEVPOS(11,1);DEVOUT('Hora Checkin.:')
        DEVPOS(12,1);DEVOUT('Oper.Checkin.:')
        DEVPOS(13,1);DEVOUT('Observacao...:')
        DEVPOS(14,1);DEVOUT('Data CheckOUT:')
        DEVPOS(15,1);DEVOUT('Observacao...:')
        @ 1,16 GET mquarto PICT '9999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        cons_reserva := {}
        comando := "SELECT cli.razao,re.quarto, data_reserva,reserva,data_inicial,data_final,fornecedor,"
        comando := comando + "(select razao from mastforn where cod_forn = re.fornecedor), reserva_forn, valor,re.cliente, data_checkin,hora_checkin,obs_checkin,cliente "
        comando := comando + "FROM mastreserva re "
        comando := comando + "join mastcli cli on cli.cod_cli = re.cliente WHERE re.quarto = "+sr_cdbvalue(STRZERO(mquarto,4))+" AND re.status = 'I'"
        sr_getconnection():exec(comando,,.t.,@cons_reserva)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_reserva) = 0
                atencao('Nao existe RESERVA desse Cliente !')
                LOOP
        ENDIF

        DEVPOS(2,16);DEVOUT(cons_reserva[1,11]+' - '+cons_reserva[1,1])
        DEVPOS(3,16);DEVOUT(cons_reserva[1,3])
        DEVPOS(4,16);DEVOUT(cons_reserva[1,4])
        DEVPOS(5,16);DEVOUT(cons_reserva[1,5])
        DEVPOS(6,16);DEVOUT(cons_reserva[1,6])
        DEVPOS(7,16);DEVOUT(cons_reserva[1,7]+' - '+cons_reserva[1,8])
        DEVPOS(8,16);DEVOUT(cons_reserva[1,9])
        DEVPOS(9,16);DEVOUT(TRANSFORM(cons_reserva[1,10],'999,999.99'))
        DEVPOS(10,16);DEVOUT(cons_reserva[1,12])
        DEVPOS(12,16);DEVOUT(cons_reserva[1,13])
        DEVPOS(13,16);DEVOUT(cons_reserva[1,14])
        @ 14,16 GET mdata_ckeckout
        @ 15,16 GET mobs_ckeckout
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        opcao := op_simnao('S','Confirma o CHECK OUT [S/n]:')
        IF opcao = 'S'
                comando := "UPDATE mastreserva SET data_checkout = "+sr_cdbvalue(mdata_ckeckout)+",obs_checkout = "+sr_cdbvalue(mobs_ckeckout)+",hora_checkout = "+sr_cdbvalue(TIME())
                comando := comando + ", oper_checkout = "+sr_cdbvalue(cod_operado)+", status = 'O'"
                comando := comando + " WHERE cliente = "+sr_cdbvalue(cons_reserva[1,11])+" AND quarto = "+sr_cdbvalue(cons_reserva[1,2])+" AND reserva = "+sr_cdbvalue(cons_reserva[1,4])
                sr_getconnection():exec(comando,,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF

ENDDO
RETURN NIL
***************************** f i m **********************************
