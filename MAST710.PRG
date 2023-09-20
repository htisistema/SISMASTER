* RESERVA DE CHECK IN
*********************
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
FUNCTION mast710()
*****************************
MEMVAR getlist,mmen_icms,mdata_sis,nivel_acess
LOCAL MPRG:='MAST710',mobs_baixa,mpesquisa,mdata_ckeckin,mobs_ckeckin,opcao
PRIVATE mnum_mesa:=0,aret:={},i:=0,mtraco := REPLI('=',48),mnum_doc := 1,mtipo_imp:='M',mimp_tipo:=1,marq:=SPACE(35), mcaminho

IF ! ver_nivel(mprg+'QTO','CHECK IN','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(0,0,12,80,' CHECK IN  ['+mprg+']',,1)
CLEAR GETS
WHILE .T.
        mcod_cli := f7_cli1()
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        mdata_ckeckin := DATE()
        mobs_ckeckin  := SPACE(60)
        DEVPOS(1,1);DEVOUT('Cliente.....:')
        DEVPOS(2,1);DEVOUT('No.Quarto...:')
        DEVPOS(3,1);DEVOUT('Data Reserva:')
        DEVPOS(4,1);DEVOUT('No. Reserva.:')
        DEVPOS(5,1);DEVOUT('Data Inicial:')
        DEVPOS(6,1);DEVOUT('Data Final..:')
        DEVPOS(7,1);DEVOUT('Fornecedor..:')
        DEVPOS(8,1);DEVOUT('No.Reserva..:')
        DEVPOS(9,1);DEVOUT('Valor R$....:')
        DEVPOS(10,1);DEVOUT('Data Checkin:')
        DEVPOS(11,1);DEVOUT('Observacao..:')
        cons_reserva := {}
        comando := "SELECT cli.razao,re.quarto, data_reserva,reserva,data_inicial,data_final,fornecedor,"
        comando := comando + "(select razao from mastforn where cod_forn = re.fornecedor), reserva_forn, valor "
        comando := comando + "FROM mastreserva re "
        comando := comando + "join mastcli cli on cli.cod_cli = re.cliente WHERE re.cliente = "+sr_cdbvalue(mcod_cli)+" AND re.status = 'R'"
        sr_getconnection():exec(comando,,.t.,@cons_reserva)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_reserva) = 0
                atencao('Nao existe RESERVA desse Cliente !')
                LOOP
        ENDIF
        DEVPOS(1,15);DEVOUT(mcod_cli+' - '+cons_reserva[1,1])
        DEVPOS(2,15);DEVOUT(cons_reserva[1,2])
        DEVPOS(3,15);DEVOUT(cons_reserva[1,3])
        DEVPOS(4,15);DEVOUT(cons_reserva[1,4])
        DEVPOS(5,15);DEVOUT(cons_reserva[1,5])
        DEVPOS(6,15);DEVOUT(cons_reserva[1,6])
        DEVPOS(7,15);DEVOUT(cons_reserva[1,7]+' - '+cons_reserva[1,8])
        DEVPOS(8,15);DEVOUT(cons_reserva[1,9])
        DEVPOS(9,15);DEVOUT(TRANSFORM(cons_reserva[1,10],'999,999.99'))
        @ 10,15 GET mdata_ckeckin
        @ 11,15 GET mobs_ckeckin
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        opcao := op_simnao('S','Confirma o CHECK IN [S/n]:')
        IF opcao = 'S'
                comando := "UPDATE mastreserva SET data_checkin = "+sr_cdbvalue(mdata_ckeckin)+",obs_checkin = "+sr_cdbvalue(mobs_ckeckin)+",hora_checkin = "+sr_cdbvalue(TIME())
                comando := comando + ", oper_checkin = "+sr_cdbvalue(cod_operado)+", status = 'I'"
                comando := comando + " WHERE cliente = "+sr_cdbvalue(mcod_cli)+" AND quarto = "+sr_cdbvalue(cons_reserva[1,2])+" AND reserva = "+sr_cdbvalue(cons_reserva[1,4])
                sr_getconnection():exec(comando,,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF

ENDDO
RETURN NIL
***************************** f i m **********************************
