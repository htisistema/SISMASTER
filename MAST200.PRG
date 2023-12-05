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
FUNCTION mast200(mtipo_lanca)
*****************************
MEMVAR getlist,mmen_icms,mdata_sis,nivel_acess
PRIVATE mnum_mesa:=0,mqtd:=0,cons_merc:={},aret:={},i:=0,nPBid:={},mped_merc:={},mtraco := REPLI('=',48),;
        mintervalo := '',mtipo_lug:='',abre_fecha := {},;
        MPRG:='MAST200',mmerc:=SPACE(50),mcod_garcon:=0,mnum_doc := 1,mobs:=SPACE(20),mcod_merc:=SPACE(5),;
        mtipo_imp:='M',mimp_tipo:=1,marq:=SPACE(35),m_sair := 0,mcaminho:=''
IF mtipo_lanca = 'M'
        IF ! ver_nivel(mprg+'MESA','LANCAMENTO DE MESAS','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        op_tela(1,0,50,120,' LANCAMENTO DE MESAS  ['+mprg+']')
        mtipo_lug:='M'
        DEVPOS(49,1);DEVOUT('Numero MESA...:')
ELSEIF mtipo_lanca = 'Q'
        IF ! ver_nivel(mprg+'QTO','LANCAMENTO DE QUARTOS','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mtipo_lug:='Q'
        op_tela(1,0,50,120,' LANCAMENTO DE QUARTOS  ['+mprg+']')
        DEVPOS(49,1);DEVOUT('Numero QUARTO.:')
ELSEIF mtipo_lanca = 'C'
        IF ! ver_nivel(mprg+'CHL','LANCAMENTO DE CHALES','15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
        mtipo_lug:='C'
        op_tela(1,0,50,120,' LANCAMENTO DE CHALES  ['+mprg+']')
        DEVPOS(49,1);DEVOUT('Numero CHALE..:')
ENDIF
mcaminho:=Curdrive()+ ":\" + rtrim(curdir())+ "\"
CLEAR GETS
nPBid:={}
i:=0
FOR i = 1 TO 121
        AADD(nPBid,0)
NEXT
m_sair := 0
WHILE .T.
        //WVW_PBSetFont( , 'Arial',15,10)
        WVW_PBSetFont( , 'TIMES',15,10)
        mnum_mesa :=0
        abre_fecha1 := {}
        abre_fecha := {}
        //sr_getconnection():exec("SELECT tipo,num_local FROM mastmov WHERE dat_pag IS NULL GROUP BY num_local,num_local,tipo",,.t.,@abre_fecha1)
        sr_getconnection():exec("SELECT tipo,mesa FROM mastmovcab WHERE NOT status = 'FECHADA'",,.t.,@abre_fecha1)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(abre_fecha1) > 0
                FOR i = 1 TO LEN(abre_fecha1)
                        //atencao(abre_fecha1[i,1]+STRZERO(VAL(abre_fecha1[i,2]),4))
                        AADD(abre_fecha,abre_fecha1[i,1]+STRZERO(VAL(abre_fecha1[i,2]),4))
                NEXT
        ENDIF
        cons_lugar := {}
        sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtipo_lanca)+' ORDER BY numero',,.t.,@cons_lugar)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_lugar) = 0
                atencao('Nao existe nenhum lugar Cadastrados...')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        //IF FILE('c:\helio\sismaster\MOcupada.bmp')
        //        ATENCAO('OK')
        //ENDIF

        if m_cfg[3] = 'S'
                nPBid[1] := wvw_pbCreate(,1 ,1,3 ,9, mtipo_lug+'-001'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0001') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,1) ,lanc_prod1(mtipo_lanca,1)) })
                nPBid[2] := wvw_pbCreate(,5 ,1,7 ,9, mtipo_lug+'-002'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0002') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,2) ,lanc_prod1(mtipo_lanca,2)) })
                nPBid[3] := wvw_pbCreate(,9 ,1,11,9, mtipo_lug+'-003'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0003') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,3) ,lanc_prod1(mtipo_lanca,3)) })
                nPBid[4] := wvw_pbCreate(,13,1,15,9, mtipo_lug+'-004'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0004') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,4) ,lanc_prod1(mtipo_lanca,4)) })
                nPBid[5] := wvw_pbCreate(,17,1,19,9, mtipo_lug+'-005'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0005') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,5) ,lanc_prod1(mtipo_lanca,5)) })
                nPBid[6] := wvw_pbCreate(,21,1,23,9, mtipo_lug+'-006'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0006') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,6) ,lanc_prod1(mtipo_lanca,6)) })
                nPBid[7] := wvw_pbCreate(,25,1,27,9, mtipo_lug+'-007'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0007') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,7) ,lanc_prod1(mtipo_lanca,7)) })
                nPBid[8] := wvw_pbCreate(,29,1,31,9, mtipo_lug+'-008'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0008') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,8) ,lanc_prod1(mtipo_lanca,8)) })
                nPBid[9] := wvw_pbCreate(,33,1,35,9, mtipo_lug+'-009'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0009') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,9) ,lanc_prod1(mtipo_lanca,9)) })
                nPBid[10]:= wvw_pbCreate(,37,1,39,9, mtipo_lug+'-010'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0010') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,10),lanc_prod1(mtipo_lanca,10))})

                nPBid[11] := wvw_pbCreate(,1 ,11,3 ,19, mtipo_lug+'-011'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0011') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,11),lanc_prod1(mtipo_lanca,11))})
                nPBid[12] := wvw_pbCreate(,5 ,11,7 ,19, mtipo_lug+'-012'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0012') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,12),lanc_prod1(mtipo_lanca,12))})
                nPBid[13] := wvw_pbCreate(,9 ,11,11,19, mtipo_lug+'-013'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0013') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,13),lanc_prod1(mtipo_lanca,13))})
                nPBid[14] := wvw_pbCreate(,13,11,15,19, mtipo_lug+'-014'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0014') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,14),lanc_prod1(mtipo_lanca,14))})
                nPBid[15] := wvw_pbCreate(,17,11,19,19, mtipo_lug+'-015'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0015') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,15),lanc_prod1(mtipo_lanca,15))})
                nPBid[16] := wvw_pbCreate(,21,11,23,19, mtipo_lug+'-016'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0016') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,16),lanc_prod1(mtipo_lanca,16))})
                nPBid[17] := wvw_pbCreate(,25,11,27,19, mtipo_lug+'-017'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0017') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,17),lanc_prod1(mtipo_lanca,17))})
                nPBid[18] := wvw_pbCreate(,29,11,31,19, mtipo_lug+'-018'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0018') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,18),lanc_prod1(mtipo_lanca,18))})
                nPBid[19] := wvw_pbCreate(,33,11,35,19, mtipo_lug+'-019'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0019') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,19),lanc_prod1(mtipo_lanca,19))})
                nPBid[20] := wvw_pbCreate(,37,11,39,19, mtipo_lug+'-020'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0020') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,20),lanc_prod1(mtipo_lanca,20))})

                nPBid[21] := wvw_pbCreate(,1 ,21,3 ,29, mtipo_lug+'-021'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0021') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,21),lanc_prod1(mtipo_lanca,21))})
                nPBid[22] := wvw_pbCreate(,5 ,21,7 ,29, mtipo_lug+'-022'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0022') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,22),lanc_prod1(mtipo_lanca,22))})
                nPBid[23] := wvw_pbCreate(,9 ,21,11,29, mtipo_lug+'-023'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0023') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,23),lanc_prod1(mtipo_lanca,23))})
                nPBid[24] := wvw_pbCreate(,13,21,15,29, mtipo_lug+'-024'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0024') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,24),lanc_prod1(mtipo_lanca,24))})
                nPBid[25] := wvw_pbCreate(,17,21,19,29, mtipo_lug+'-025'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0025') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,25),lanc_prod1(mtipo_lanca,25))})
                nPBid[26] := wvw_pbCreate(,21,21,23,29, mtipo_lug+'-026'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0026') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,26),lanc_prod1(mtipo_lanca,26))})
                nPBid[27] := wvw_pbCreate(,25,21,27,29, mtipo_lug+'-027'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0027') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,27),lanc_prod1(mtipo_lanca,27))})
                nPBid[28] := wvw_pbCreate(,29,21,31,29, mtipo_lug+'-028'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0028') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,28),lanc_prod1(mtipo_lanca,28))})
                nPBid[29] := wvw_pbCreate(,33,21,35,29, mtipo_lug+'-029'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0029') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,29),lanc_prod1(mtipo_lanca,29))})
                nPBid[30] := wvw_pbCreate(,37,21,39,29, mtipo_lug+'-030'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0030') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,30),lanc_prod1(mtipo_lanca,30))})

                nPBid[31] := wvw_pbCreate(,1 ,31,3 ,39, mtipo_lug+'-031'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0031') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,31),lanc_prod1(mtipo_lanca,31))})
                nPBid[32] := wvw_pbCreate(,5 ,31,7 ,39, mtipo_lug+'-032'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0032') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,32),lanc_prod1(mtipo_lanca,32))})
                nPBid[33] := wvw_pbCreate(,9 ,31,11,39, mtipo_lug+'-033'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0033') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,33),lanc_prod1(mtipo_lanca,33))})
                nPBid[34] := wvw_pbCreate(,13,31,15,39, mtipo_lug+'-034'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0034') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,34),lanc_prod1(mtipo_lanca,34))})
                nPBid[35] := wvw_pbCreate(,17,31,19,39, mtipo_lug+'-035'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0035') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,35),lanc_prod1(mtipo_lanca,35))})
                nPBid[36] := wvw_pbCreate(,21,31,23,39, mtipo_lug+'-036'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0036') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,36),lanc_prod1(mtipo_lanca,36))})
                nPBid[37] := wvw_pbCreate(,25,31,27,39, mtipo_lug+'-037'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0037') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,37),lanc_prod1(mtipo_lanca,37))})
                nPBid[38] := wvw_pbCreate(,29,31,31,39, mtipo_lug+'-038'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0038') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,38),lanc_prod1(mtipo_lanca,38))})
                nPBid[39] := wvw_pbCreate(,33,31,35,39, mtipo_lug+'-039'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0039') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,39),lanc_prod1(mtipo_lanca,39))})
                nPBid[40] := wvw_pbCreate(,37,31,39,39, mtipo_lug+'-040'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0040') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,40),lanc_prod1(mtipo_lanca,40))})

                nPBid[41] := wvw_pbCreate(,1 ,41,3 ,49, mtipo_lug+'-041'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0041') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,41),lanc_prod1(mtipo_lanca,41))})
                nPBid[42] := wvw_pbCreate(,5 ,41,7 ,49, mtipo_lug+'-042'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0042') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,42),lanc_prod1(mtipo_lanca,42))})
                nPBid[43] := wvw_pbCreate(,9 ,41,11,49, mtipo_lug+'-043'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0043') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,43),lanc_prod1(mtipo_lanca,43))})
                nPBid[44] := wvw_pbCreate(,13,41,15,49, mtipo_lug+'-044'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0044') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,44),lanc_prod1(mtipo_lanca,44))})
                nPBid[45] := wvw_pbCreate(,17,41,19,49, mtipo_lug+'-045'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0045') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,45),lanc_prod1(mtipo_lanca,45))})
                nPBid[46] := wvw_pbCreate(,21,41,23,49, mtipo_lug+'-046'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0046') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,46),lanc_prod1(mtipo_lanca,46))})
                nPBid[47] := wvw_pbCreate(,25,41,27,49, mtipo_lug+'-047'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0047') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,47),lanc_prod1(mtipo_lanca,47))})
                nPBid[48] := wvw_pbCreate(,29,41,31,49, mtipo_lug+'-048'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0048') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,48),lanc_prod1(mtipo_lanca,48))})
                nPBid[49] := wvw_pbCreate(,33,41,35,49, mtipo_lug+'-049'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0049') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,49),lanc_prod1(mtipo_lanca,49))})
                nPBid[50] := wvw_pbCreate(,37,41,39,49, mtipo_lug+'-050'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0050') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,50),lanc_prod1(mtipo_lanca,50))})

                nPBid[51] := wvw_pbCreate(,1 ,51,3 ,59, mtipo_lug+'-051'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0051') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,51),lanc_prod1(mtipo_lanca,51))})
                nPBid[52] := wvw_pbCreate(,5 ,51,7 ,59, mtipo_lug+'-052'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0052') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,52),lanc_prod1(mtipo_lanca,52))})
                nPBid[53] := wvw_pbCreate(,9 ,51,11,59, mtipo_lug+'-053'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0053') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,53),lanc_prod1(mtipo_lanca,53))})
                nPBid[54] := wvw_pbCreate(,13,51,15,59, mtipo_lug+'-054'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0054') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,54),lanc_prod1(mtipo_lanca,54))})
                nPBid[55] := wvw_pbCreate(,17,51,19,59, mtipo_lug+'-055'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0055') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,55),lanc_prod1(mtipo_lanca,55))})
                nPBid[56] := wvw_pbCreate(,21,51,23,59, mtipo_lug+'-056'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0056') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,56),lanc_prod1(mtipo_lanca,56))})
                nPBid[57] := wvw_pbCreate(,25,51,27,59, mtipo_lug+'-057'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0057') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,57),lanc_prod1(mtipo_lanca,57))})
                nPBid[58] := wvw_pbCreate(,29,51,31,59, mtipo_lug+'-058'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0058') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,58),lanc_prod1(mtipo_lanca,58))})
                nPBid[59] := wvw_pbCreate(,33,51,35,59, mtipo_lug+'-059'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0059') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,59),lanc_prod1(mtipo_lanca,59))})
                nPBid[60] := wvw_pbCreate(,37,51,39,59, mtipo_lug+'-060'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0060') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,60),lanc_prod1(mtipo_lanca,60))})

                nPBid[61] := wvw_pbCreate(,1 ,61,3 ,69, mtipo_lug+'-061'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0061') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,61),lanc_prod1(mtipo_lanca,61))})
                nPBid[62] := wvw_pbCreate(,5 ,61,7 ,69, mtipo_lug+'-062'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0062') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,62),lanc_prod1(mtipo_lanca,62))})
                nPBid[63] := wvw_pbCreate(,9 ,61,11,69, mtipo_lug+'-063'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0063') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,63),lanc_prod1(mtipo_lanca,63))})
                nPBid[64] := wvw_pbCreate(,13,61,15,69, mtipo_lug+'-064'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0064') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,64),lanc_prod1(mtipo_lanca,64))})
                nPBid[65] := wvw_pbCreate(,17,61,19,69, mtipo_lug+'-065'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0065') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,65),lanc_prod1(mtipo_lanca,65))})
                nPBid[66] := wvw_pbCreate(,21,61,23,69, mtipo_lug+'-066'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0066') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,66),lanc_prod1(mtipo_lanca,66))})
                nPBid[67] := wvw_pbCreate(,25,61,27,69, mtipo_lug+'-067'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0067') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,67),lanc_prod1(mtipo_lanca,67))})
                nPBid[68] := wvw_pbCreate(,29,61,31,69, mtipo_lug+'-068'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0068') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,68),lanc_prod1(mtipo_lanca,68))})
                nPBid[69] := wvw_pbCreate(,33,61,35,69, mtipo_lug+'-069'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0069') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,69),lanc_prod1(mtipo_lanca,69))})
                nPBid[70] := wvw_pbCreate(,37,61,39,69, mtipo_lug+'-070'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0070') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,70),lanc_prod1(mtipo_lanca,70))})

                nPBid[71] := wvw_pbCreate(,1 ,71,3 ,79, mtipo_lug+'-071'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0071') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,71),lanc_prod1(mtipo_lanca,71))})
                nPBid[72] := wvw_pbCreate(,5 ,71,7 ,79, mtipo_lug+'-072'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0072') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,72),lanc_prod1(mtipo_lanca,72))})
                nPBid[73] := wvw_pbCreate(,9 ,71,11,79, mtipo_lug+'-073'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0073') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,73),lanc_prod1(mtipo_lanca,73))})
                nPBid[74] := wvw_pbCreate(,13,71,15,79, mtipo_lug+'-074'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0074') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,74),lanc_prod1(mtipo_lanca,74))})
                nPBid[75] := wvw_pbCreate(,17,71,19,79, mtipo_lug+'-075'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0075') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,75),lanc_prod1(mtipo_lanca,75))})
                nPBid[76] := wvw_pbCreate(,21,71,23,79, mtipo_lug+'-076'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0076') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,76),lanc_prod1(mtipo_lanca,76))})
                nPBid[77] := wvw_pbCreate(,25,71,27,79, mtipo_lug+'-077'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0077') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,77),lanc_prod1(mtipo_lanca,77))})
                nPBid[78] := wvw_pbCreate(,29,71,31,79, mtipo_lug+'-078'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0078') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,78),lanc_prod1(mtipo_lanca,78))})
                nPBid[79] := wvw_pbCreate(,33,71,35,79, mtipo_lug+'-079'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0079') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,79),lanc_prod1(mtipo_lanca,79))})
                nPBid[80] := wvw_pbCreate(,37,71,39,79, mtipo_lug+'-080'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0080') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,80),lanc_prod1(mtipo_lanca,80))})

                nPBid[81] := wvw_pbCreate(,1 ,81,3 ,89, mtipo_lug+'-081'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0081') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,81),lanc_prod1(mtipo_lanca,81))})
                nPBid[82] := wvw_pbCreate(,5 ,81,7 ,89, mtipo_lug+'-082'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0082') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,82),lanc_prod1(mtipo_lanca,82))})
                nPBid[83] := wvw_pbCreate(,9 ,81,11,89, mtipo_lug+'-083'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0083') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,83),lanc_prod1(mtipo_lanca,83))})
                nPBid[84] := wvw_pbCreate(,13,81,15,89, mtipo_lug+'-084'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0084') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,84),lanc_prod1(mtipo_lanca,84))})
                nPBid[85] := wvw_pbCreate(,17,81,19,89, mtipo_lug+'-085'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0085') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,85),lanc_prod1(mtipo_lanca,85))})
                nPBid[86] := wvw_pbCreate(,21,81,23,89, mtipo_lug+'-086'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0086') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,86),lanc_prod1(mtipo_lanca,86))})
                nPBid[87] := wvw_pbCreate(,25,81,27,89, mtipo_lug+'-087'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0087') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,87),lanc_prod1(mtipo_lanca,87))})
                nPBid[88] := wvw_pbCreate(,29,81,31,89, mtipo_lug+'-088'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0088') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,88),lanc_prod1(mtipo_lanca,88))})
                nPBid[89] := wvw_pbCreate(,33,81,35,89, mtipo_lug+'-089'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0089') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,89),lanc_prod1(mtipo_lanca,89))})
                nPBid[90] := wvw_pbCreate(,37,81,39,89, mtipo_lug+'-090'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0090') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,90),lanc_prod1(mtipo_lanca,90))})

                nPBid[91] := wvw_pbCreate(,1 ,91,3 ,99, mtipo_lug+'-091'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0091') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,91) ,lanc_prod1(mtipo_lanca,91) )})
                nPBid[92] := wvw_pbCreate(,5 ,91,7 ,99, mtipo_lug+'-092'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0092') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,92) ,lanc_prod1(mtipo_lanca,92) )})
                nPBid[93] := wvw_pbCreate(,9 ,91,11,99, mtipo_lug+'-093'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0093') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,93) ,lanc_prod1(mtipo_lanca,93) )})
                nPBid[94] := wvw_pbCreate(,13,91,15,99, mtipo_lug+'-094'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0094') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,94) ,lanc_prod1(mtipo_lanca,94) )})
                nPBid[95] := wvw_pbCreate(,17,91,19,99, mtipo_lug+'-095'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0095') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,95) ,lanc_prod1(mtipo_lanca,95) )})
                nPBid[96] := wvw_pbCreate(,21,91,23,99, mtipo_lug+'-096'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0096') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,96) ,lanc_prod1(mtipo_lanca,96) )})
                nPBid[97] := wvw_pbCreate(,25,91,27,99, mtipo_lug+'-097'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0097') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,97) ,lanc_prod1(mtipo_lanca,97) )})
                nPBid[98] := wvw_pbCreate(,29,91,31,99, mtipo_lug+'-098'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0098') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,98) ,lanc_prod1(mtipo_lanca,98) )})
                nPBid[99] := wvw_pbCreate(,33,91,35,99, mtipo_lug+'-099'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0099') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,99) ,lanc_prod1(mtipo_lanca,99) )})
                nPBid[100]:= wvw_pbCreate(,37,91,39,99, mtipo_lug+'-100'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0100') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,100),lanc_prod1(mtipo_lanca,100))})

                nPBid[101]:= wvw_pbCreate(,1 ,101,3 ,109, mtipo_lug+'-101'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0101') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,101),lanc_prod1(mtipo_lanca,101))})
                nPBid[102]:= wvw_pbCreate(,5 ,101,7 ,109, mtipo_lug+'-102'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0102') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,102),lanc_prod1(mtipo_lanca,102))})
                nPBid[103]:= wvw_pbCreate(,9 ,101,11,109, mtipo_lug+'-103'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0103') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,103),lanc_prod1(mtipo_lanca,103))})
                nPBid[104]:= wvw_pbCreate(,13,101,15,109, mtipo_lug+'-104'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0104') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,104),lanc_prod1(mtipo_lanca,104))})
                nPBid[105]:= wvw_pbCreate(,17,101,19,109, mtipo_lug+'-105'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0105') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,105),lanc_prod1(mtipo_lanca,105))})
                nPBid[106]:= wvw_pbCreate(,21,101,23,109, mtipo_lug+'-106'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0106') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,106),lanc_prod1(mtipo_lanca,106))})
                nPBid[107]:= wvw_pbCreate(,25,101,27,109, mtipo_lug+'-107'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0107') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,107),lanc_prod1(mtipo_lanca,107))})
                nPBid[108]:= wvw_pbCreate(,29,101,31,109, mtipo_lug+'-108'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0108') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,108),lanc_prod1(mtipo_lanca,108))})
                nPBid[109]:= wvw_pbCreate(,33,101,35,109, mtipo_lug+'-109'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0109') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,109),lanc_prod1(mtipo_lanca,109))})
                nPBid[110]:= wvw_pbCreate(,37,101,39,109, mtipo_lug+'-110'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0110') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,110),lanc_prod1(mtipo_lanca,110))})

                nPBid[111]:= wvw_pbCreate(,1 ,111,3 ,119, mtipo_lug+'-111'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0111') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,111),lanc_prod1(mtipo_lanca,111))})
                nPBid[112]:= wvw_pbCreate(,5 ,111,7 ,119, mtipo_lug+'-112'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0112') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,112),lanc_prod1(mtipo_lanca,112))})
                nPBid[113]:= wvw_pbCreate(,9 ,111,11,119, mtipo_lug+'-113'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0113') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,113),lanc_prod1(mtipo_lanca,113))})
                nPBid[114]:= wvw_pbCreate(,13,111,15,119, mtipo_lug+'-114'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0114') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,114),lanc_prod1(mtipo_lanca,114))})
                nPBid[115]:= wvw_pbCreate(,17,111,19,119, mtipo_lug+'-115'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0115') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,115),lanc_prod1(mtipo_lanca,115))})
                nPBid[116]:= wvw_pbCreate(,21,111,23,119, mtipo_lug+'-116'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0116') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,116),lanc_prod1(mtipo_lanca,116))})
                nPBid[117]:= wvw_pbCreate(,25,111,27,119, mtipo_lug+'-117'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0117') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,117),lanc_prod1(mtipo_lanca,117))})
                nPBid[118]:= wvw_pbCreate(,29,111,31,119, mtipo_lug+'-118'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0118') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,118),lanc_prod1(mtipo_lanca,118))})
                nPBid[119]:= wvw_pbCreate(,33,111,35,119, mtipo_lug+'-119'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0119') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,119),lanc_prod1(mtipo_lanca,119))})
                nPBid[120]:= wvw_pbCreate(,37,111,39,119, mtipo_lug+'- 120'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0120') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,120),lanc_prod1(mtipo_lanca,120))})
        ELSE
                //nPBid[1] := wvw_pbCreate(,1 ,1,3 ,9, mtipo_lug+'-001'+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0001') > 0,'*',''),,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,1) ,lanc_prod1(mtipo_lanca,1)) })
                nPBid[1] := wvw_pbCreate(,1 ,1,3 ,9, '001-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0001') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0001') > 0,mcaminho+'g001.bmp',mcaminho+mtipo_lug+'001.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,1) ,lanc_prod1(mtipo_lanca,1)) },,,.T.)
                nPBid[2] := wvw_pbCreate(,5 ,1,7 ,9, '002-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0002') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0002') > 0,mcaminho+'g002.bmp',mcaminho+mtipo_lug+'002.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,2) ,lanc_prod1(mtipo_lanca,2)) })
                nPBid[3] := wvw_pbCreate(,9 ,1,11,9, '003-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0003') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0003') > 0,mcaminho+'g003.bmp',mcaminho+mtipo_lug+'003.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,3) ,lanc_prod1(mtipo_lanca,3)) })
                nPBid[4] := wvw_pbCreate(,13,1,15,9, '004-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0004') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0004') > 0,mcaminho+'g004.bmp',mcaminho+mtipo_lug+'004.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,4) ,lanc_prod1(mtipo_lanca,4)) })
                nPBid[5] := wvw_pbCreate(,17,1,19,9, '005-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0005') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0005') > 0,mcaminho+'g005.bmp',mcaminho+mtipo_lug+'005.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,5) ,lanc_prod1(mtipo_lanca,5)) })
                nPBid[6] := wvw_pbCreate(,21,1,23,9, '006-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0006') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0006') > 0,mcaminho+'g006.bmp',mcaminho+mtipo_lug+'006.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,6) ,lanc_prod1(mtipo_lanca,6)) })
                nPBid[7] := wvw_pbCreate(,25,1,27,9, '007-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0007') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0007') > 0,mcaminho+'g007.bmp',mcaminho+mtipo_lug+'007.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,7) ,lanc_prod1(mtipo_lanca,7)) })
                nPBid[8] := wvw_pbCreate(,29,1,31,9, '008-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0008') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0008') > 0,mcaminho+'g008.bmp',mcaminho+mtipo_lug+'008.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,8) ,lanc_prod1(mtipo_lanca,8)) })
                nPBid[9] := wvw_pbCreate(,33,1,35,9, '009-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0009') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0009') > 0,mcaminho+'g009.bmp',mcaminho+mtipo_lug+'009.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,9) ,lanc_prod1(mtipo_lanca,9)) })
                nPBid[10]:= wvw_pbCreate(,37,1,39,9, '010-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0010') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0010') > 0,mcaminho+'g010.bmp',mcaminho+mtipo_lug+'010.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,10),lanc_prod1(mtipo_lanca,10))})

                nPBid[11] := wvw_pbCreate(,1 ,11,3 ,19, '011-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0011') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0011') > 0,mcaminho+'g011.bmp',mcaminho+mtipo_lug+'011.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,11),lanc_prod1(mtipo_lanca,11))})
                nPBid[12] := wvw_pbCreate(,5 ,11,7 ,19, '012-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0012') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0012') > 0,mcaminho+'g012.bmp',mcaminho+mtipo_lug+'012.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,12),lanc_prod1(mtipo_lanca,12))})
                nPBid[13] := wvw_pbCreate(,9 ,11,11,19, '013-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0013') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0013') > 0,mcaminho+'g013.bmp',mcaminho+mtipo_lug+'013.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,13),lanc_prod1(mtipo_lanca,13))})
                nPBid[14] := wvw_pbCreate(,13,11,15,19, '014-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0014') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0014') > 0,mcaminho+'g014.bmp',mcaminho+mtipo_lug+'014.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,14),lanc_prod1(mtipo_lanca,14))})
                nPBid[15] := wvw_pbCreate(,17,11,19,19, '015-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0015') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0015') > 0,mcaminho+'g015.bmp',mcaminho+mtipo_lug+'015.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,15),lanc_prod1(mtipo_lanca,15))})
                nPBid[16] := wvw_pbCreate(,21,11,23,19, '016-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0016') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0016') > 0,mcaminho+'g016.bmp',mcaminho+mtipo_lug+'016.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,16),lanc_prod1(mtipo_lanca,16))})
                nPBid[17] := wvw_pbCreate(,25,11,27,19, '017-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0017') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0017') > 0,mcaminho+'g017.bmp',mcaminho+mtipo_lug+'017.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,17),lanc_prod1(mtipo_lanca,17))})
                nPBid[18] := wvw_pbCreate(,29,11,31,19, '018-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0018') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0018') > 0,mcaminho+'g018.bmp',mcaminho+mtipo_lug+'018.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,18),lanc_prod1(mtipo_lanca,18))})
                nPBid[19] := wvw_pbCreate(,33,11,35,19, '019-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0019') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0019') > 0,mcaminho+'g019.bmp',mcaminho+mtipo_lug+'019.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,19),lanc_prod1(mtipo_lanca,19))})
                nPBid[20] := wvw_pbCreate(,37,11,39,19, '020-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0020') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0020') > 0,mcaminho+'g020.bmp',mcaminho+mtipo_lug+'020.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,20),lanc_prod1(mtipo_lanca,20))})

                nPBid[21] := wvw_pbCreate(,1 ,21,3 ,29, '021-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0021') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0021') > 0,mcaminho+'g021.bmp',mcaminho+mtipo_lug+'021.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,21),lanc_prod1(mtipo_lanca,21))})
                nPBid[22] := wvw_pbCreate(,5 ,21,7 ,29, '022-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0022') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0022') > 0,mcaminho+'g022.bmp',mcaminho+mtipo_lug+'022.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,22),lanc_prod1(mtipo_lanca,22))})
                nPBid[23] := wvw_pbCreate(,9 ,21,11,29, '023-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0023') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0023') > 0,mcaminho+'g023.bmp',mcaminho+mtipo_lug+'023.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,23),lanc_prod1(mtipo_lanca,23))})
                nPBid[24] := wvw_pbCreate(,13,21,15,29, '024-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0024') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0024') > 0,mcaminho+'g024.bmp',mcaminho+mtipo_lug+'024.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,24),lanc_prod1(mtipo_lanca,24))})
                nPBid[25] := wvw_pbCreate(,17,21,19,29, '025-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0025') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0025') > 0,mcaminho+'g025.bmp',mcaminho+mtipo_lug+'025.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,25),lanc_prod1(mtipo_lanca,25))})
                nPBid[26] := wvw_pbCreate(,21,21,23,29, '026-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0026') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0026') > 0,mcaminho+'g026.bmp',mcaminho+mtipo_lug+'026.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,26),lanc_prod1(mtipo_lanca,26))})
                nPBid[27] := wvw_pbCreate(,25,21,27,29, '027-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0027') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0027') > 0,mcaminho+'g027.bmp',mcaminho+mtipo_lug+'027.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,27),lanc_prod1(mtipo_lanca,27))})
                nPBid[28] := wvw_pbCreate(,29,21,31,29, '028-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0028') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0028') > 0,mcaminho+'g028.bmp',mcaminho+mtipo_lug+'028.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,28),lanc_prod1(mtipo_lanca,28))})
                nPBid[29] := wvw_pbCreate(,33,21,35,29, '029-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0029') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0029') > 0,mcaminho+'g029.bmp',mcaminho+mtipo_lug+'029.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,29),lanc_prod1(mtipo_lanca,29))})
                nPBid[30] := wvw_pbCreate(,37,21,39,29, '030-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0030') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0030') > 0,mcaminho+'g030.bmp',mcaminho+mtipo_lug+'030.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,30),lanc_prod1(mtipo_lanca,30))})

                nPBid[31] := wvw_pbCreate(,1 ,31,3 ,39, '031-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0031') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0031') > 0,mcaminho+'g031.bmp',mcaminho+mtipo_lug+'031.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,31),lanc_prod1(mtipo_lanca,31))})
                nPBid[32] := wvw_pbCreate(,5 ,31,7 ,39, '032-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0032') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0032') > 0,mcaminho+'g032.bmp',mcaminho+mtipo_lug+'032.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,32),lanc_prod1(mtipo_lanca,32))})
                nPBid[33] := wvw_pbCreate(,9 ,31,11,39, '033-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0033') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0033') > 0,mcaminho+'g033.bmp',mcaminho+mtipo_lug+'033.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,33),lanc_prod1(mtipo_lanca,33))})
                nPBid[34] := wvw_pbCreate(,13,31,15,39, '034-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0034') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0034') > 0,mcaminho+'g034.bmp',mcaminho+mtipo_lug+'034.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,34),lanc_prod1(mtipo_lanca,34))})
                nPBid[35] := wvw_pbCreate(,17,31,19,39, '035-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0035') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0035') > 0,mcaminho+'g035.bmp',mcaminho+mtipo_lug+'035.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,35),lanc_prod1(mtipo_lanca,35))})
                nPBid[36] := wvw_pbCreate(,21,31,23,39, '036-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0036') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0036') > 0,mcaminho+'g036.bmp',mcaminho+mtipo_lug+'036.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,36),lanc_prod1(mtipo_lanca,36))})
                nPBid[37] := wvw_pbCreate(,25,31,27,39, '037-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0037') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0037') > 0,mcaminho+'g037.bmp',mcaminho+mtipo_lug+'037.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,37),lanc_prod1(mtipo_lanca,37))})
                nPBid[38] := wvw_pbCreate(,29,31,31,39, '038-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0038') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0038') > 0,mcaminho+'g038.bmp',mcaminho+mtipo_lug+'038.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,38),lanc_prod1(mtipo_lanca,38))})
                nPBid[39] := wvw_pbCreate(,33,31,35,39, '039-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0039') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0039') > 0,mcaminho+'g039.bmp',mcaminho+mtipo_lug+'039.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,39),lanc_prod1(mtipo_lanca,39))})
                nPBid[40] := wvw_pbCreate(,37,31,39,39, '040-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0040') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0040') > 0,mcaminho+'g040.bmp',mcaminho+mtipo_lug+'040.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,40),lanc_prod1(mtipo_lanca,40))})

                nPBid[41] := wvw_pbCreate(,1 ,41,3 ,49, '041-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0041') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0041') > 0,mcaminho+'g041.bmp',mcaminho+mtipo_lug+'041.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,41),lanc_prod1(mtipo_lanca,41))})
                nPBid[42] := wvw_pbCreate(,5 ,41,7 ,49, '042-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0042') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0042') > 0,mcaminho+'g042.bmp',mcaminho+mtipo_lug+'042.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,42),lanc_prod1(mtipo_lanca,42))})
                nPBid[43] := wvw_pbCreate(,9 ,41,11,49, '043-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0043') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0043') > 0,mcaminho+'g043.bmp',mcaminho+mtipo_lug+'043.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,43),lanc_prod1(mtipo_lanca,43))})
                nPBid[44] := wvw_pbCreate(,13,41,15,49, '044-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0044') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0044') > 0,mcaminho+'g044.bmp',mcaminho+mtipo_lug+'044.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,44),lanc_prod1(mtipo_lanca,44))})
                nPBid[45] := wvw_pbCreate(,17,41,19,49, '045-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0045') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0045') > 0,mcaminho+'g045.bmp',mcaminho+mtipo_lug+'045.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,45),lanc_prod1(mtipo_lanca,45))})
                nPBid[46] := wvw_pbCreate(,21,41,23,49, '046-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0046') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0046') > 0,mcaminho+'g046.bmp',mcaminho+mtipo_lug+'046.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,46),lanc_prod1(mtipo_lanca,46))})
                nPBid[47] := wvw_pbCreate(,25,41,27,49, '047-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0047') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0047') > 0,mcaminho+'g047.bmp',mcaminho+mtipo_lug+'047.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,47),lanc_prod1(mtipo_lanca,47))})
                nPBid[48] := wvw_pbCreate(,29,41,31,49, '048-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0048') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0048') > 0,mcaminho+'g048.bmp',mcaminho+mtipo_lug+'048.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,48),lanc_prod1(mtipo_lanca,48))})
                nPBid[49] := wvw_pbCreate(,33,41,35,49, '049-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0049') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0049') > 0,mcaminho+'g049.bmp',mcaminho+mtipo_lug+'049.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,49),lanc_prod1(mtipo_lanca,49))})
                nPBid[50] := wvw_pbCreate(,37,41,39,49, '050-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0050') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0050') > 0,mcaminho+'g050.bmp',mcaminho+mtipo_lug+'050.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,50),lanc_prod1(mtipo_lanca,50))})

                nPBid[51] := wvw_pbCreate(,1 ,51,3 ,59, '051-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0051') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0051') > 0,mcaminho+'g051.bmp',mcaminho+mtipo_lug+'051.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,51),lanc_prod1(mtipo_lanca,51))})
                nPBid[52] := wvw_pbCreate(,5 ,51,7 ,59, '052-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0052') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0052') > 0,mcaminho+'g052.bmp',mcaminho+mtipo_lug+'052.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,52),lanc_prod1(mtipo_lanca,52))})
                nPBid[53] := wvw_pbCreate(,9 ,51,11,59, '053-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0053') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0053') > 0,mcaminho+'g053.bmp',mcaminho+mtipo_lug+'053.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,53),lanc_prod1(mtipo_lanca,53))})
                nPBid[54] := wvw_pbCreate(,13,51,15,59, '054-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0054') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0054') > 0,mcaminho+'g054.bmp',mcaminho+mtipo_lug+'054.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,54),lanc_prod1(mtipo_lanca,54))})
                nPBid[55] := wvw_pbCreate(,17,51,19,59, '055-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0055') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0055') > 0,mcaminho+'g055.bmp',mcaminho+mtipo_lug+'055.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,55),lanc_prod1(mtipo_lanca,55))})
                nPBid[56] := wvw_pbCreate(,21,51,23,59, '056-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0056') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0056') > 0,mcaminho+'g056.bmp',mcaminho+mtipo_lug+'056.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,56),lanc_prod1(mtipo_lanca,56))})
                nPBid[57] := wvw_pbCreate(,25,51,27,59, '057-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0057') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0057') > 0,mcaminho+'g057.bmp',mcaminho+mtipo_lug+'057.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,57),lanc_prod1(mtipo_lanca,57))})
                nPBid[58] := wvw_pbCreate(,29,51,31,59, '058-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0058') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0058') > 0,mcaminho+'g058.bmp',mcaminho+mtipo_lug+'058.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,58),lanc_prod1(mtipo_lanca,58))})
                nPBid[59] := wvw_pbCreate(,33,51,35,59, '059-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0059') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0059') > 0,mcaminho+'g059.bmp',mcaminho+mtipo_lug+'059.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,59),lanc_prod1(mtipo_lanca,59))})
                nPBid[60] := wvw_pbCreate(,37,51,39,59, '060-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0060') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0060') > 0,mcaminho+'g060.bmp',mcaminho+mtipo_lug+'060.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,60),lanc_prod1(mtipo_lanca,60))})

                nPBid[61] := wvw_pbCreate(,1 ,61,3 ,69, '061-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0061') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0061') > 0,mcaminho+'g061.bmp',mcaminho+mtipo_lug+'061.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,61),lanc_prod1(mtipo_lanca,61))})
                nPBid[62] := wvw_pbCreate(,5 ,61,7 ,69, '062-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0062') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0062') > 0,mcaminho+'g062.bmp',mcaminho+mtipo_lug+'062.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,62),lanc_prod1(mtipo_lanca,62))})
                nPBid[63] := wvw_pbCreate(,9 ,61,11,69, '063-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0063') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0063') > 0,mcaminho+'g063.bmp',mcaminho+mtipo_lug+'063.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,63),lanc_prod1(mtipo_lanca,63))})
                nPBid[64] := wvw_pbCreate(,13,61,15,69, '064-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0064') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0064') > 0,mcaminho+'g064.bmp',mcaminho+mtipo_lug+'064.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,64),lanc_prod1(mtipo_lanca,64))})
                nPBid[65] := wvw_pbCreate(,17,61,19,69, '065-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0065') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0065') > 0,mcaminho+'g065.bmp',mcaminho+mtipo_lug+'065.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,65),lanc_prod1(mtipo_lanca,65))})
                nPBid[66] := wvw_pbCreate(,21,61,23,69, '066-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0066') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0066') > 0,mcaminho+'g066.bmp',mcaminho+mtipo_lug+'066.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,66),lanc_prod1(mtipo_lanca,66))})
                nPBid[67] := wvw_pbCreate(,25,61,27,69, '067-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0067') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0067') > 0,mcaminho+'g067.bmp',mcaminho+mtipo_lug+'067.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,67),lanc_prod1(mtipo_lanca,67))})
                nPBid[68] := wvw_pbCreate(,29,61,31,69, '068-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0068') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0068') > 0,mcaminho+'g068.bmp',mcaminho+mtipo_lug+'068.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,68),lanc_prod1(mtipo_lanca,68))})
                nPBid[69] := wvw_pbCreate(,33,61,35,69, '069-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0069') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0069') > 0,mcaminho+'g069.bmp',mcaminho+mtipo_lug+'069.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,69),lanc_prod1(mtipo_lanca,69))})
                nPBid[70] := wvw_pbCreate(,37,61,39,69, '070-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0070') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0070') > 0,mcaminho+'g070.bmp',mcaminho+mtipo_lug+'070.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,70),lanc_prod1(mtipo_lanca,70))})

                nPBid[71] := wvw_pbCreate(,1 ,71,3 ,79, '071-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0071') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0071') > 0,mcaminho+'g071.bmp',mcaminho+mtipo_lug+'071.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,71),lanc_prod1(mtipo_lanca,71))})
                nPBid[72] := wvw_pbCreate(,5 ,71,7 ,79, '072-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0072') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0072') > 0,mcaminho+'g072.bmp',mcaminho+mtipo_lug+'072.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,72),lanc_prod1(mtipo_lanca,72))})
                nPBid[73] := wvw_pbCreate(,9 ,71,11,79, '073-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0073') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0073') > 0,mcaminho+'g073.bmp',mcaminho+mtipo_lug+'073.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,73),lanc_prod1(mtipo_lanca,73))})
                nPBid[74] := wvw_pbCreate(,13,71,15,79, '074-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0074') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0074') > 0,mcaminho+'g074.bmp',mcaminho+mtipo_lug+'074.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,74),lanc_prod1(mtipo_lanca,74))})
                nPBid[75] := wvw_pbCreate(,17,71,19,79, '075-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0075') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0075') > 0,mcaminho+'g075.bmp',mcaminho+mtipo_lug+'075.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,75),lanc_prod1(mtipo_lanca,75))})
                nPBid[76] := wvw_pbCreate(,21,71,23,79, '076-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0076') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0076') > 0,mcaminho+'g076.bmp',mcaminho+mtipo_lug+'076.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,76),lanc_prod1(mtipo_lanca,76))})
                nPBid[77] := wvw_pbCreate(,25,71,27,79, '077-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0077') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0077') > 0,mcaminho+'g077.bmp',mcaminho+mtipo_lug+'077.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,77),lanc_prod1(mtipo_lanca,77))})
                nPBid[78] := wvw_pbCreate(,29,71,31,79, '078-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0078') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0078') > 0,mcaminho+'g078.bmp',mcaminho+mtipo_lug+'078.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,78),lanc_prod1(mtipo_lanca,78))})
                nPBid[79] := wvw_pbCreate(,33,71,35,79, '079-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0079') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0079') > 0,mcaminho+'g079.bmp',mcaminho+mtipo_lug+'079.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,79),lanc_prod1(mtipo_lanca,79))})
                nPBid[80] := wvw_pbCreate(,37,71,39,79, '080-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0080') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0080') > 0,mcaminho+'g080.bmp',mcaminho+mtipo_lug+'080.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,80),lanc_prod1(mtipo_lanca,80))})

                nPBid[81] := wvw_pbCreate(,1 ,81,3 ,89, '081-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0081') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0081') > 0,mcaminho+'g081.bmp',mcaminho+mtipo_lug+'081.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,81),lanc_prod1(mtipo_lanca,81))})
                nPBid[82] := wvw_pbCreate(,5 ,81,7 ,89, '082-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0082') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0082') > 0,mcaminho+'g082.bmp',mcaminho+mtipo_lug+'082.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,82),lanc_prod1(mtipo_lanca,82))})
                nPBid[83] := wvw_pbCreate(,9 ,81,11,89, '083-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0083') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0083') > 0,mcaminho+'g083.bmp',mcaminho+mtipo_lug+'083.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,83),lanc_prod1(mtipo_lanca,83))})
                nPBid[84] := wvw_pbCreate(,13,81,15,89, '084-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0084') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0084') > 0,mcaminho+'g084.bmp',mcaminho+mtipo_lug+'084.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,84),lanc_prod1(mtipo_lanca,84))})
                nPBid[85] := wvw_pbCreate(,17,81,19,89, '085-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0085') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0085') > 0,mcaminho+'g085.bmp',mcaminho+mtipo_lug+'085.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,85),lanc_prod1(mtipo_lanca,85))})
                nPBid[86] := wvw_pbCreate(,21,81,23,89, '086-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0086') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0086') > 0,mcaminho+'g086.bmp',mcaminho+mtipo_lug+'086.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,86),lanc_prod1(mtipo_lanca,86))})
                nPBid[87] := wvw_pbCreate(,25,81,27,89, '087-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0087') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0087') > 0,mcaminho+'g087.bmp',mcaminho+mtipo_lug+'087.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,87),lanc_prod1(mtipo_lanca,87))})
                nPBid[88] := wvw_pbCreate(,29,81,31,89, '088-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0088') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0088') > 0,mcaminho+'g088.bmp',mcaminho+mtipo_lug+'088.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,88),lanc_prod1(mtipo_lanca,88))})
                nPBid[89] := wvw_pbCreate(,33,81,35,89, '089-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0089') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0089') > 0,mcaminho+'g089.bmp',mcaminho+mtipo_lug+'089.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,89),lanc_prod1(mtipo_lanca,89))})
                nPBid[90] := wvw_pbCreate(,37,81,39,89, '090-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0090') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0090') > 0,mcaminho+'g090.bmp',mcaminho+mtipo_lug+'090.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,90),lanc_prod1(mtipo_lanca,90))})

                nPBid[91] := wvw_pbCreate(,1 ,91,3 ,99, '091-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0091') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0091') > 0,mcaminho+'g091.bmp',mcaminho+mtipo_lug+'091.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,91) ,lanc_prod1(mtipo_lanca,91) )})
                nPBid[92] := wvw_pbCreate(,5 ,91,7 ,99, '092-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0092') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0092') > 0,mcaminho+'g092.bmp',mcaminho+mtipo_lug+'092.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,92) ,lanc_prod1(mtipo_lanca,92) )})
                nPBid[93] := wvw_pbCreate(,9 ,91,11,99, '093-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0093') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0093') > 0,mcaminho+'g093.bmp',mcaminho+mtipo_lug+'093.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,93) ,lanc_prod1(mtipo_lanca,93) )})
                nPBid[94] := wvw_pbCreate(,13,91,15,99, '094-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0094') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0094') > 0,mcaminho+'g094.bmp',mcaminho+mtipo_lug+'094.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,94) ,lanc_prod1(mtipo_lanca,94) )})
                nPBid[95] := wvw_pbCreate(,17,91,19,99, '095-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0095') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0095') > 0,mcaminho+'g095.bmp',mcaminho+mtipo_lug+'095.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,95) ,lanc_prod1(mtipo_lanca,95) )})
                nPBid[96] := wvw_pbCreate(,21,91,23,99, '096-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0096') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0096') > 0,mcaminho+'g096.bmp',mcaminho+mtipo_lug+'096.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,96) ,lanc_prod1(mtipo_lanca,96) )})
                nPBid[97] := wvw_pbCreate(,25,91,27,99, '097-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0097') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0097') > 0,mcaminho+'g097.bmp',mcaminho+mtipo_lug+'097.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,97) ,lanc_prod1(mtipo_lanca,97) )})
                nPBid[98] := wvw_pbCreate(,29,91,31,99, '098-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0098') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0098') > 0,mcaminho+'g098.bmp',mcaminho+mtipo_lug+'098.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,98) ,lanc_prod1(mtipo_lanca,98) )})
                nPBid[99] := wvw_pbCreate(,33,91,35,99, '099-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0099') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0099') > 0,mcaminho+'g099.bmp',mcaminho+mtipo_lug+'099.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,99) ,lanc_prod1(mtipo_lanca,99) )})
                nPBid[100]:= wvw_pbCreate(,37,91,39,99, '100-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0100') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0100') > 0,mcaminho+'g100.bmp',mcaminho+mtipo_lug+'100.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,100),lanc_prod1(mtipo_lanca,100))})

                nPBid[101]:= wvw_pbCreate(,1 ,101,3 ,109, '101-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0101') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0101') > 0,mcaminho+'g101.bmp',mcaminho+mtipo_lug+'101.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,101),lanc_prod1(mtipo_lanca,101))})
                nPBid[102]:= wvw_pbCreate(,5 ,101,7 ,109, '102-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0102') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0102') > 0,mcaminho+'g102.bmp',mcaminho+mtipo_lug+'102.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,102),lanc_prod1(mtipo_lanca,102))})
                nPBid[103]:= wvw_pbCreate(,9 ,101,11,109, '103-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0103') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0103') > 0,mcaminho+'g103.bmp',mcaminho+mtipo_lug+'103.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,103),lanc_prod1(mtipo_lanca,103))})
                nPBid[104]:= wvw_pbCreate(,13,101,15,109, '104-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0104') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0104') > 0,mcaminho+'g104.bmp',mcaminho+mtipo_lug+'104.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,104),lanc_prod1(mtipo_lanca,104))})
                nPBid[105]:= wvw_pbCreate(,17,101,19,109, '105-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0105') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0105') > 0,mcaminho+'g105.bmp',mcaminho+mtipo_lug+'105.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,105),lanc_prod1(mtipo_lanca,105))})
                nPBid[106]:= wvw_pbCreate(,21,101,23,109, '106-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0106') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0106') > 0,mcaminho+'g106.bmp',mcaminho+mtipo_lug+'106.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,106),lanc_prod1(mtipo_lanca,106))})
                nPBid[107]:= wvw_pbCreate(,25,101,27,109, '107-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0107') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0107') > 0,mcaminho+'g107.bmp',mcaminho+mtipo_lug+'107.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,107),lanc_prod1(mtipo_lanca,107))})
                nPBid[108]:= wvw_pbCreate(,29,101,31,109, '108-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0108') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0108') > 0,mcaminho+'g108.bmp',mcaminho+mtipo_lug+'108.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,108),lanc_prod1(mtipo_lanca,108))})
                nPBid[109]:= wvw_pbCreate(,33,101,35,109, '109-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0109') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0109') > 0,mcaminho+'g109.bmp',mcaminho+mtipo_lug+'109.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,109),lanc_prod1(mtipo_lanca,109))})
                nPBid[110]:= wvw_pbCreate(,37,101,39,109, '110-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0110') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0110') > 0,mcaminho+'g110.bmp',mcaminho+mtipo_lug+'110.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,110),lanc_prod1(mtipo_lanca,110))})

                nPBid[111]:= wvw_pbCreate(,1 ,111,3 ,119, '111-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0111') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0111') > 0,mcaminho+'g111.bmp',mcaminho+mtipo_lug+'111.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,111),lanc_prod1(mtipo_lanca,111))})
                nPBid[112]:= wvw_pbCreate(,5 ,111,7 ,119, '112-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0112') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0112') > 0,mcaminho+'g112.bmp',mcaminho+mtipo_lug+'112.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,112),lanc_prod1(mtipo_lanca,112))})
                nPBid[113]:= wvw_pbCreate(,9 ,111,11,119, '113-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0113') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0113') > 0,mcaminho+'g113.bmp',mcaminho+mtipo_lug+'113.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,113),lanc_prod1(mtipo_lanca,113))})
                nPBid[114]:= wvw_pbCreate(,13,111,15,119, '114-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0114') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0114') > 0,mcaminho+'g114.bmp',mcaminho+mtipo_lug+'114.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,114),lanc_prod1(mtipo_lanca,114))})
                nPBid[115]:= wvw_pbCreate(,17,111,19,119, '115-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0115') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0115') > 0,mcaminho+'g115.bmp',mcaminho+mtipo_lug+'115.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,115),lanc_prod1(mtipo_lanca,115))})
                nPBid[116]:= wvw_pbCreate(,21,111,23,119, '116-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0116') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0116') > 0,mcaminho+'g116.bmp',mcaminho+mtipo_lug+'116.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,116),lanc_prod1(mtipo_lanca,116))})
                nPBid[117]:= wvw_pbCreate(,25,111,27,119, '117-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0117') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0117') > 0,mcaminho+'g117.bmp',mcaminho+mtipo_lug+'117.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,117),lanc_prod1(mtipo_lanca,117))})
                nPBid[118]:= wvw_pbCreate(,29,111,31,119, '118-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0118') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0118') > 0,mcaminho+'g118.bmp',mcaminho+mtipo_lug+'118.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,118),lanc_prod1(mtipo_lanca,118))})
                nPBid[119]:= wvw_pbCreate(,33,111,35,119, '119-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0119') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0119') > 0,mcaminho+'g119.bmp',mcaminho+mtipo_lug+'119.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,119),lanc_prod1(mtipo_lanca,119))})
                nPBid[120]:= wvw_pbCreate(,37,111,39,119, '120-'+mtipo_lug+' '+IF(ASCAN(abre_fecha,mtipo_lug+'0120') > 0,'*',''),IF(ASCAN(abre_fecha,mtipo_lug+'0120') > 0,mcaminho+'g120.bmp',mcaminho+mtipo_lug+'120.bmp'),{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,120),lanc_prod1(mtipo_lanca,120))})

        ENDIF
        //nPBid[121]:= wvw_pbCreate(NIL,41,1,43,9, 'S A I R',NIL,{||IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,1000),lanc_prod1(mtipo_lanca,1000))})
        nPBid[121]:= wvw_pbCreate(NIL,41,1,43,9, 'S A I R',NIL,{||lanc_prod(mtipo_lanca,1000)})
        i := 0
        FOR i = 1 TO 120
                WVW_PBEnable( NIL, nPBid[i], .F. )
        NEXT
        FOR i = 1 TO LEN(cons_lugar)
                WVW_PBEnable( ,nPBid[VAL(cons_lugar[i,2])], .T. )
        NEXT
        WVW_PBEnable( ,nPBid[121], .T. )
        IF LASTKEY() = 27 .OR. m_sair = 1 .OR. mnum_mesa = 9999
                i:=0
                FOR i= 1 TO 121
                        WVW_PBDestroy(,nPBid[i])
                NEXT
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        @ 49,17 GET mnum_mesa PICT '9999' VALID IF(EMPTY(mnum_mesa),.F.,.T.) WHEN m_sair # 1
        READ
        IF LASTKEY() = 27 .OR. m_sair = 1 .OR. mnum_mesa = 9999
                i:=0
                FOR i= 1 TO 121
                        WVW_PBDestroy(,nPBid[i] )
                NEXT
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        IF EMPTY(mnum_mesa)
                LOOP
        ENDIF
        cons_merc := {}
        sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtipo_lug)+" AND numero = "+sr_cdbvalue(STRZERO(mnum_mesa,4)),,.t.,@cons_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_merc) = 0
                atencao('MESA/QUARTO No.: '+mtipo_lug+STRZERO(mnum_mesa,4)+' nao existe em nossos Arquivo !!!')
                LOOP
        ENDIF
        IF(m_set[1,26] = '1',lanc_prod(mtipo_lanca,mnum_mesa),lanc_prod1(mtipo_lanca,mnum_mesa))
ENDDO
RETURN NIL
***************************** f i m **********************************
FUNCTION lanc_prod1(mtip_lugar,mnum_lugar)
*****************************************
LOCAL opcao,mbt_prod:={},i:=0,y:=0,mqtd_aux:=0,mqtd_cont := ' ',cons_grupo := {},op_grupo:=0,mopcao:=''
PRIVATE mcod_merc:=0,cons_prod := {}

/*
IF mnum_lugar = 1000
        m_sair := 1
        mnum_mesa := 9999
        //mensagem('TECLE <ENTER> P/ CONTINUAR....')
        RETURN .T.
ENDIF
*/
op_grupo:=0
CLEAR GETS
WHILE .T.
        op_tela(2,10,54,42,'GRUPO   -   ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']-1',,1)
        IF m_set[1,25] = '2'
                cons_grupo := {}
                sr_getconnection():exec("SELECT * FROM mastgrupo ORDER BY codigo",,.t.,@cons_grupo)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_grupo) > 1
                        limpa(1,2,3,30)
                        botao1(1,2,3,30)
                        //mensagem('Quantidade de Produtos: '+STRZERO(LEN(cons_prod),3))
                        @ 2,3 PROMPT ' '+cons_grupo[1,1]+' '+cons_grupo[1,2]+' '
                        y:=x:=i:=1
                        FOR i = 2 TO LEN(cons_grupo)
                                IF i <= 18
                                        y:= y + 3
                                        botao1(x+y,2,x+y+2,30)
                                        @ y+x+1,3 PROMPT ' '+cons_grupo[i,1]+' '+cons_grupo[i,2]+' '
                                ENDIF
                                x++
                        NEXT
                        y:= y + 3
                        botao1(x+y,2,x+y+2,30)
                        @ y+x+1,3 PROMPT '         VOLTAR          '
                        MENU TO op_grupo
                        wvw_lclosewindow()
                        IF LASTKEY() = 27 .OR. op_grupo = LEN(cons_grupo) + 1
                                RETURN NIL
                        ENDIF
                ENDIF

        ELSE
                wvw_lclosewindow()
                IF opcao = LEN(cons_prod) + 1 .OR. LASTKEY() = 27
                        RETURN NIL
                ENDIF
        ENDIF
        op_tela(0,0,55,120,'RELACAO DE PRODUTOS   -   ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']')
        WHILE .T.
                cons_prod := {}
                IF op_grupo > 0
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE grupo = "+cons_grupo[op_grupo,1]+" ORDER BY codigo",,.t.,@cons_prod)
                ELSE
                        sr_getconnection():exec("SELECT * FROM mastprod ORDER BY codigo",,.t.,@cons_prod)
                ENDIF
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(cons_prod) = 0
                        atencao('Nao existe nenhum PRODUTO...')
                        wvw_lclosewindow()
                        EXIT
                ENDIF
                limpa(0,1,2,8)
                botao1(0,1,2,8)
                mensagem('Quantidade de Produtos: '+STRZERO(LEN(cons_prod),3))
                @ 1,1 PROMPT ' '+STR(cons_prod[1,1],5)+'  ' MESS cons_prod[1,2]
                y:=0
                x:=i:=1
                FOR i = 2 TO LEN(cons_prod)
                        IF i <= 18
                                y:= y + 2
                                botao1(x+y,1,x+y+2,8)
                                @ y+x+1,1 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 36
                                IF i = 19
                                        botao1(0,10,2,17)
                                        @ 1,10 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,10,x+y+2,17)
                                @ y+x+1,10 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 54
                                IF i = 37
                                        botao1(0,19,2,26)
                                        @ 1,19 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,19,x+y+2,26)
                                @ y+x+1,19 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 72
                                IF i = 55
                                        botao1(0,28,2,35)
                                        @ 1,28 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,28,x+y+2,35)
                                @ y+x+1,28 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 90
                                IF i = 73
                                        botao1(0,37,2,44)
                                        @ 1,37 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,37,x+y+2,44)
                                @ y+x+1,37 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 108
                                IF i = 91
                                        botao1(0,46,2,53)
                                        @ 1,46 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,46,x+y+2,53)
                                @ y+x+1,46 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 126
                                IF i = 109
                                        botao1(0,55,2,62)
                                        @ 1,55 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,55,x+y+2,62)
                                @ y+x+1,55 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 144
                                IF i = 127
                                        botao1(0,64,2,71)
                                        @ 1,64 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,64,x+y+2,71)
                                @ y+x+1,64 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 162
                                IF i = 145
                                        botao1(0,73,2,80)
                                        @ 1,73 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,73,x+y+2,80)
                                @ y+x+1,73 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 180
                                IF i = 163
                                        botao1(0,82,2,89)
                                        @ 1,82 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,82,x+y+2,89)
                                @ y+x+1,82 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 198
                                IF i = 181
                                        botao1(0,91,2,98)
                                        @ 1,91 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,91,x+y+2,98)
                                @ y+x+1,91 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i <= 216
                                IF i = 199
                                        botao1(0,100,2,107)
                                        @ 1,100 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                                        y:=0
                                        x:=1
                                        LOOP
                                ENDIF
                                y:= y + 2
                                botao1(x+y,100,x+y+2,107)
                                @ y+x+1,100 PROMPT ' '+STR(cons_prod[i,1],5)+'  ' MESS cons_prod[i,2]
                        ELSEIF i > 234
                             LOOP
                        ENDIF
                        x++
                NEXT
                @ 0,107 TO 54,107
                botao1(1,109,3,119)
                @ 2,109 PROMPT '  Voltar   '
                botao1(5,109,7,119)
                @ 6,109 PROMPT '  Consulta '
                botao1(9,109,11,119)
                @ 10,109 PROMPT 'Fecha Parc.'
                MENU TO opcao
                IF opcao = LEN(cons_prod) + 1 .OR. LASTKEY() = 27
                        wvw_lclosewindow()
                        EXIT
                ENDIF
                IF opcao = LEN(cons_prod) + 2
                        mcod_merc := f4_merc()
                        IF LASTKEY() = 27 .OR. EMPTY(mcod_merc)
                                LOOP
                        ENDIF
                        h:=0
                        FOR h = 1 TO LEN(cons_prod)
                                IF STRZERO(mcod_merc,5) $ cons_prod[h,1]
                                        opcao := h
                                        EXIT
                                ENDIF
                        NEXT
                ENDIF
                IF opcao = LEN(cons_prod) + 3
                        Fecha_parc(mtip_lugar,mnum_lugar,mnum_doc)
                        LOOP
                ENDIF
                mcod_merc := cons_prod[opcao,1]
                op_tela(00,10,22,115,' LANCAMENTO DE PRODUTOS ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']')
                WvW_PBSetFont( NIL, "Courier New", 15, 0,)
                nPBotaoid := wvw_pbCreate(NIL,15,01,16,23, 'FECHAMENTO PARCIAL',NIL,{||Fecha_parc(mtip_lugar,mnum_lugar,mnum_doc)})
                nPBotaoid1 := wvw_pbCreate(NIL,18,01,19,23,'    RECEBIMENTO   ',NIL,{||mast30(mnum_lugar)})
                //WVW_PBEnable( NIL, nPBId, .F. )
                WHILE .T.
                        setcor(1)
                        limpa(1,0,50,120)
                        exibi_prg(mprg)
                        mqtd := mcod_garcon := 0
                        mmerc := SPACE(30)
                        mobs:=SPACE(30)
                        mensagem('Preencha os Campos - <ESC> p/Retornar')
                        @ 7,0 TO 7,120
                        //DEVPOS(1,1);DEVOUT('Cod.Produto:')
                        //DEVPOS(2,1);DEVOUT('Descricao..:')
                        //DEVPOS(3,1);DEVOUT('Quantidade.:')
                        DEVPOS(8,1);DEVOUT('Preco......:')
                        DEVPOS(9,1);DEVOUT('Cod.Garcon.:')
                        DEVPOS(10,1);DEVOUT('Observacao.:')
                        //WVW_PBEnable( NIL, nPBId, .T. )
                        cons_parc := {}
                        sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL ORDER BY hora',,.t.,@cons_parc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_parc) > 0
                                mentrada := cons_parc[1,4]
                                msaida   := TIME()
                                mintervalo := ELAPTIME(mentrada,msaida)
                                DEVPOS(11, 1);DEVOUT('Entrada....:'+mentrada)
                                DEVPOS(12, 1);DEVOUT('Saida......:'+msaida)
                                DEVPOS(13,1);DEVOUT('Duracao....:'+mintervalo)
                        ENDIF
                        cons_merc := {}
                        sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtip_lugar)+" AND numero = "+sr_cdbvalue(STRZERO(mnum_lugar,4)),,.t.,@cons_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_merc) = 0
                                atencao('MESA/QUARTO nao existe em nossos Arquivo !!!')
                                WVW_PBDestroy(,nPBotaoid)
                                //wvw_lclosewindow()
                                EXIT
                        ENDIF
                        WVW_PBEnable( NIL, nPBId, .T. )

                        mped_merc := {}
                        sr_getconnection():exec("SELECT * FROM mastprod WHERE codigo = "+sr_cdbvalue(mcod_merc),,.t.,@mped_merc)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(mped_merc) = 0
                                atencao('Codigo da mercadoria nao cadastrado')
                                LOOP
                        ENDIF
                        mmerc := mped_merc[1,2]

                        setcor(3)
                        //DEVPOS(1,14);DEVOUT(STRZERO(mcod_merc,5)+' - '+mped_merc[1,2])
                        WVW_DrawLabel(,0,1,STR(mcod_merc,5)+' - '+mped_merc[1,2],,,210,, 'arial black',40,17,,,,,)

                        mpre := ' '
                        limpa(5,80,17,100)
                        botao(6,80,17,100)
                        IF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg')
                                WVW_DrawImage( ,6,80,17,100,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg',.T.,.F.)
                        ELSEIF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp')
                                WVW_DrawImage( ,6,80,17,100,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp',.T.,.F.)
                        ENDIF
                        //setcor(3)
                        //DEVPOS(2,14);DEVOUT(mped_merc[1,2])
                        //setcor(1)
                        IF mped_merc[1,7] = 'HR'
                                mmerc := 'Tempo de Duracao: '+ELAPTIME(mentrada,msaida)
                        ENDIF

                        mqtd := VAL(pinpad(,'Quantidade:'))

                        @ 8,14 GET mped_merc[1,6] PICT '9,999.99' WHEN mped_merc[1,7] = 'HR'
                        READ
                        IF mqtd = 0
                                EXIT
                        ENDIF
                        mopcao := op_simnao('S','Confirma a Inclusao do PRODUTO'+m_qp+m_qp+' Quantidade:  '+STR(mqtd))
                        IF mopcao = 'N' .OR. LASTKEY() = 27
                                WVW_PBDestroy(,nPBotaoid)
                                CLEAR GETS
                                //wvw_lclosewindow()
                                EXIT
                        ENDIF
                        cons_mov := {}
                        sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL',,.t.,@cons_mov)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_mov) = 0
                                IF op_simnao('S','Deseja ABRIR esta MESA/QUARTO') = 'S'
                                        op_tela(10,10,12,70,' CODIGO DO GARCON ABRINDO A(O) ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']')
                                        DEVPOS(1,1);DEVOUT('Codigo do Garcon:')
                                        @ 1,19 GET mcod_garcon PICT '999' VALID IF(EMPTY(mcod_garcon),.F.,ven(mcod_garcon,1,23))
                                        READ
                                        IF LASTKEY() = 27 .OR. op_simnao('S','Confirma o Garcon: '+STRZERO(mcod_garcon,3)+'-'+ven(mcod_garcon,0)+m_qp+m_qp+' ABERTURA: ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']') = 'N'
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        wvw_lclosewindow()
                                        aret := {}
                                        sr_getconnection():exec("SELECT MAX(num_doc) FROM mastnummov",,.t.,@aret)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                        IF LEN(aret) = 0
                                                mnum_doc := 1
                                        ELSE
                                                mnum_doc := VAL(aret[1,1]) + 1
                                        ENDIF
                                        sr_getconnection():exec('INSERT INTO mastnummov (num_doc,data,'+;
                                                                'hora )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                                                sr_cdbvalue(DATE())+','+; //2
                                                                sr_cdbvalue(TIME())+')',,.f.)
                                ELSE
                                        LOOP
                                ENDIF
                        ELSE
                                mcod_garcon := VAL(cons_mov[1,10])
                                mnun_doc := VAL(cons_mov[1,1])
                        ENDIF
                        sr_getconnection():exec('INSERT INTO mastmov ('+;
                                                'NUM_DOC   ,'+;//1
                                                'NUM_LOCAL ,'+;//2
                                                'DATA      ,'+;//3
                                                'HORA      ,'+;//4
                                                'COD_PROD  ,'+;//5
                                                'DESCRI    ,'+;//6
                                                'QTD       ,'+;//7
                                                'PRECO     ,'+;//8
                                                'CUSTO     ,'+;//8
                                                'COD_CLI   ,'+;//9
                                                'COD_GARCO ,'+;//10
                                                'OPER      ,'+;//11
                                                'OBS       ,'+;//12
                                                'PORTA     ,'+;//13
                                                'UNIDADE    )'+;//13
                                                ' VALUES ('+;
                                                sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                                sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+','+; //2
                                                sr_cdbvalue(DATE())+','+; //3
                                                sr_cdbvalue(TIME())+','+; //4
                                                sr_cdbvalue(mcod_merc)+','+; //5
                                                sr_cdbvalue(mmerc)+','+; //6
                                                sr_cdbvalue(mqtd)+','+; //7
                                                sr_cdbvalue(mped_merc[1,6])+','+; //8
                                                sr_cdbvalue(mped_merc[1,5])+','+; //8
                                                sr_cdbvalue('')+','+; //9
                                                sr_cdbvalue(STRZERO(mcod_garcon,3))+','+; //10
                                                sr_cdbvalue(cod_operado)+','+; //11
                                                sr_cdbvalue(mobs)+','+; //12
                                                sr_cdbvalue(mped_merc[1,9])+','+; //13
                                                sr_cdbvalue(mped_merc[1,7])+')',,.f.)//14
                        //sr_getconnection():exec("UPDATE mastprod SET descri = "+sr_cdbvalue(cons_merc[1,2])+",unidade = "+sr_cdbvalue(cons_merc[1,7])+",pr_venda = "+sr_cdbvalue(cons_merc[1,6])+",tipo = "+sr_cdbvalue(cons_merc[1,3])+" WHERE codigo = "+sr_cdbvalue(mcod),,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        WVW_PBDestroy(,nPBotaoid)
                        //wvw_lclosewindow()
                        CLEAR GETS
                        //LOOP
                        IF mped_merc[1,9] = 4 .OR.  mped_merc[1,9] = 0
                                EXIT
                        ENDIF
                        mtipo_imp:='M'
                        IF ! imp_arq('FCH_PARC.TXT','R')
                                EXIT
                        ENDIF
                        imprt('M','C')
                        //imprt('M','E')
                        DEVPOS(PROW()+1,00);DEVOUT('Mesa.....: '+mtip_lugar+STRZERO(mnum_lugar,4))
                        DEVPOS(PROW()+1,00);DEVOUT('Data.....: '+DTOC(DATE())+' - Horas: '+TIME())
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        imprt('M','N')
                        imprt('M','N+')
                        DEVPOS(PROW()+1,00);DEVOUT('Codigo...: '+STR(mcod_merc,5))
                        IF ! EMPTY(mobs)
                                DEVPOS(PROW()+1,0);DEVOUT('OBS.: '+mobs)
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(mmerc)
                        DEVPOS(PROW()+1,00);DEVOUT('Quantidade: '+TRANSFORM(mqtd,'999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+1,00);DEVOUT('Garcon....: '+STRZERO(mcod_garcon,3))
                        DEVPOS(PROW()+1,00);DEVOUT('Operador..: '+cod_operado)
                        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        DEVPOS(PROW()+m_cfg[10],00);DEVOUT(CHR(18))
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao('FCH_PARC.TXT',VAL(SUBSTR(STRZERO(mped_merc[1,9],2),1,1)),1)
                        //conf_impressao('FCH_PARC.TXT',mped_merc[1,9])
                        EXIT
                ENDDO
                wvw_lclosewindow()
        ENDDO
ENDDO
SETMODE(50,120)
WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
wvw_lclosewindow()
RETURN NIL
***************************** F I M ***************************
FUNCTION fecha_parc(mtp_lanca,mnum_ms,mn_doc,mlocal)
***************************************************
LOCAL mqtd_pessoas:=0,mhoras := TIME(),cons_parc,i:=0,mtotal_g,mentrada,mtraco := REPLI('=',48),mdez := 'S',;
      mcpfcnpj:=SPACE(14),mcod_cli:=0,mcliente:=SPACE(40)
PRIVATE mcpf:='',mcgc:=''
CLEAR GETS
mdez := m_set[1,24]
op_tela(10,10,17,80,'QUANTIDADE DE PESSOAL PARA DIVISAO')
DEVPOS(00,00);DEVOUT('No.MESA/QUARTO.......:')
DEVPOS(01,00);DEVOUT('Codigo do Cliente....:')
DEVPOS(02,00);DEVOUT('Cliente..............:')
DEVPOS(03,00);DEVOUT('CPF/CNPJ.............:                  Nao colocar (.) ou (/)')
DEVPOS(04,00);DEVOUT('Quantidade de Pessoas:')
DEVPOS(05,00);DEVOUT('10% de Comissao [S/N]:')
setcor(3)
DEVPOS(00,23);DEVOUT(mtp_lanca+STRZERO(mnum_ms,4))
setcor(1)
@ 01,23 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,2,30) //WHEN mlocal = NIL .AND. m_set[1,29] = 'S'
@ 02,23 GET mcliente PICT '@!' //WHEN mlocal = NIL .AND. m_set[1,29] = 'S'
@ 03,23 GET mcpfcnpj VALID IF('.' $ mcpfcnpj .OR. '/' $ mcpfcnpj,.F.,.T.)
@ 04,23 GET mqtd_pessoas PICT '999' WHEN mlocal = NIL .AND. m_set[1,29] = 'S'
@ 05,23 GET mdez PICT '@!' VALID mdez $ 'S,N' WHEN mlocal = NIL .AND. m_set[1,29] # 'N' .AND. m_set[1,24] # 'N'
READ
wvw_lclosewindow()
IF LASTKEY() = 27
        RETURN NIL
ENDIF
IF ! EMPTY(mcpf)
        mcpfcnpj := mcpf
ELSEIF ! EMPTY(mcgc)
        mcpfcnpj := mcgc
ENDIF
mhoras := TIME()
cons_parc := {}
sr_getconnection():exec("SELECT * FROM mastmov WHERE tipo = "+sr_cdbvalue(mtp_lanca)+" AND num_local = "+sr_cdbvalue(mnum_ms)+' AND dat_pag IS NULL',,.t.,@cons_parc)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(cons_parc) > 0
        IF ! imp_arq('FCH_PARC.TXT','R')
                RETURN NIL
        ENDIF
        mentrada := cons_parc[1,4]
        IF FILE('hticabe.jpg')
                DEVPOS(00,03);DEVOUT('"hticabe.jpg"')
                @ PROW()+6,00 SAY mtraco
        ELSE
                imprt('M','N+')
                DEVPOS(PROW(),00);DEVOUT(CHR(18))
                DEVPOS(PROW()+1,00);DEVOUT(memp_resa)
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        ENDIF
        imprt('M','N+')
        DEVPOS(PROW()+1,00);DEVOUT('CNPJ: '+mcgc_firm)
        DEVPOS(PROW()+1,00);DEVOUT('Mesa/Quarto: '+mtp_lanca+STRZERO(mnum_ms,4))
        //DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        IF ! EMPTY(mcliente) .OR. ! EMPTY(mcpfcnpj)
                DEVPOS(PROW()+1,00);DEVOUT('Cliente: '+mcliente)
        ENDIF
        IF ! EMPTY(mcpfcnpj)
                IF LEN(ALLTRIM(mcpfcnpj))> 11
                        DEVPOS(PROW()+1,00);DEVOUT('CNPJ: '+mcpfcnpj)
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT('CPF: '+mcpfcnpj)
                ENDIF
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('Documento: '+STRZERO(mn_doc,6)+' - Emissao: '+DTOC(DATE())+' - '+'Gc: '+cons_parc[1,10])
        //DEVPOS(PROW()+1,00);DEVOUT('Garcon....: '+cons_parc[1,10])
        //DEVPOS(PROW()+1,00);DEVOUT('Operador..: '+cons_parc[1,4])
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(' Cod.   Descricao')
        DEVPOS(PROW()+1,00);DEVOUT('Quantidade  Valor Unit.  Valor total')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)

        cons_parc := {}
        sr_getconnection():exec("SELECT cod_prod,descri,sum(qtd),preco FROM mastmov WHERE tipo = "+sr_cdbvalue(mtp_lanca)+" AND num_local = "+sr_cdbvalue(mnum_ms)+" AND dat_pag IS NULL AND (NOT unidade = 'KG' OR unidade IS NULL) GROUP BY cod_prod,cod_prod,descri,descri,preco,preco",,.t.,@cons_parc)
        sr_getconnection():exec('COMMIT',,.f.)
        i := mtotal_g := 0
        FOR i = 1 TO LEN(cons_parc)
                DEVPOS(PROW()+1,00);DEVOUT(STR(cons_parc[i,1],5)+'   '+ALLTRIM(cons_parc[i,2]))
                DEVPOS(PROW()+1,00);DEVOUT(TRANSFORM(cons_parc[i,3],'99,999.999')+' x '+TRANSFORM(cons_parc[i,4],'999,999.99')+' = '+TRANSFORM(ROUND(cons_parc[i,3]*cons_parc[i,4],2),'999,999.99'))
                mtotal_g := mtotal_g + ROUND((cons_parc[i,3]*cons_parc[i,4]),2)
        NEXT
        cons_parc := {}
        sr_getconnection():exec("SELECT cod_prod,descri,qtd,preco FROM mastmov WHERE  tipo = "+sr_cdbvalue(mtp_lanca)+" AND num_local = "+sr_cdbvalue(mnum_ms)+" AND dat_pag IS NULL AND unidade = 'KG'",,.t.,@cons_parc)
        sr_getconnection():exec('COMMIT',,.f.)
        i := 0
        FOR i = 1 TO LEN(cons_parc)
                DEVPOS(PROW()+1,00);DEVOUT(STR(cons_parc[i,1],5)+'   '+ALLTRIM(cons_parc[i,2]))
                DEVPOS(PROW()+1,00);DEVOUT(TRANSFORM(cons_parc[i,3],'99,999.999')+' x '+TRANSFORM(cons_parc[i,4],'999,999.99')+' = '+TRANSFORM(ROUND(cons_parc[i,3]*cons_parc[i,4],2),'999,999.99'))
                mtotal_g := mtotal_g + ROUND((cons_parc[i,3]*cons_parc[i,4]),2)
        NEXT
        DEVPOS(PROW()+1,00);DEVOUT('                          ----------')
        IF mdez = 'S'
                DEVPOS(PROW()+1,00);DEVOUT('Sub-Total R$............: '+TRANSFORM(mtotal_g,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('10% Valor R$............: '+TRANSFORM(mtotal_g * .1,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('                          ----------')
                DEVPOS(PROW()+1,00);DEVOUT('T O T A L R$............: '+TRANSFORM(mtotal_g * 1.1,'999,999.99'))
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT('T O T A L R$............: '+TRANSFORM(mtotal_g,'999,999.99'))
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('Ent.:'+SUBSTR(mentrada,1,5)+' - Saida:'+SUBSTR(mhoras,1,5)+' - Duracao:'+SUBSTR(ELAPTIME(mentrada,mhoras),1,5))
        IF mqtd_pessoas > 1
                DEVPOS(PROW()+1,00);DEVOUT('Valor por Pessoas R$: '+TRANSFORM(mtotal_g / mqtd_pessoas,'999,999.99'))
        ENDIF
        IF ! EMPTY(m_set[1,18])
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(m_set[1,18])
        ENDIF
        IF ! EMPTY(m_set[1,19])
                DEVPOS(PROW()+1,00);DEVOUT(m_set[1,19])
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(PADL('HTI Sistemas - '+mfone_hti,48))

        DEVPOS(PROW()+m_cfg[10],00);DEVOUT('')
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('FCH_PARC.TXT')
ENDIF
RETURN NIL
*********************** f i m *********************************
FUNCTION abre_fecha(tip,numero)
*******************************
abre_fecha := {}
//sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(tip+numero)+' AND dat_pag IS NULL',,.t.,@abre_fecha)
sr_getconnection():exec("SELECT num_local FROM mastmov WHERE dat_pag IS NULL GROUP BY num_local,num_local",,.t.,@abre_fecha)
sr_getconnection():exec('COMMIT',,.f.)
sr_getconnection():exec("SELECT * FROM mastmovcab WHERE mesa = "+sr_cdbvalue(mnumero)+" AND tipo = "+sr_cdbvalue(mtip)+" AND status = 'ABERTO'",,.t.,@cons_mov)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(abre_fecha) > 0
        RETURN '*'
ELSE
        RETURN ''
ENDIF
RETURN ''
/*
        nPBid[2] := wvw_pbCreate(NIL,5 ,1,7 ,9, '002-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0002'),NIL,{||lanc_prod(mtipo_lanca,2)})
        nPBid[3] := wvw_pbCreate(NIL,9 ,1,11,9, '003-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0003'),NIL,{||lanc_prod(mtipo_lanca,3)})
        nPBid[4] := wvw_pbCreate(NIL,13,1,15,9, '004-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0004'),NIL,{||lanc_prod(mtipo_lanca,4)})
        nPBid[5] := wvw_pbCreate(NIL,17,1,19,9, '005-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0005'),NIL,{||lanc_prod(mtipo_lanca,5)})
        nPBid[6] := wvw_pbCreate(NIL,21,1,23,9, '006-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0006'),NIL,{||lanc_prod(mtipo_lanca,6)})
        nPBid[7] := wvw_pbCreate(NIL,25,1,27,9, '007-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0007'),NIL,{||lanc_prod(mtipo_lanca,7)})
        nPBid[8] := wvw_pbCreate(NIL,29,1,31,9, '008-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0008'),NIL,{||lanc_prod(mtipo_lanca,8)})
        nPBid[9] := wvw_pbCreate(NIL,33,1,35,9, '009-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0009'),NIL,{||lanc_prod(mtipo_lanca,9)})
        nPBid[10]:= wvw_pbCreate(NIL,37,1,39,9, '010-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0010'),NIL,{||lanc_prod(mtipo_lanca,10)})

        nPBid[11] := wvw_pbCreate(NIL,1 ,11,3 ,19, '011-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0011'),NIL,{||lanc_prod(mtipo_lanca,11)})
        nPBid[12] := wvw_pbCreate(NIL,5 ,11,7 ,19, '012-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0012'),NIL,{||lanc_prod(mtipo_lanca,12)})
        nPBid[13] := wvw_pbCreate(NIL,9 ,11,11,19, '013-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0013'),NIL,{||lanc_prod(mtipo_lanca,13)})
        nPBid[14] := wvw_pbCreate(NIL,13,11,15,19, '014-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0014'),NIL,{||lanc_prod(mtipo_lanca,14)})
        nPBid[15] := wvw_pbCreate(NIL,17,11,19,19, '015-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0015'),NIL,{||lanc_prod(mtipo_lanca,15)})
        nPBid[16] := wvw_pbCreate(NIL,21,11,23,19, '016-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0016'),NIL,{||lanc_prod(mtipo_lanca,16)})
        nPBid[17] := wvw_pbCreate(NIL,25,11,27,19, '017-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0017'),NIL,{||lanc_prod(mtipo_lanca,17)})
        nPBid[18] := wvw_pbCreate(NIL,29,11,31,19, '018-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0018'),NIL,{||lanc_prod(mtipo_lanca,18)})
        nPBid[19] := wvw_pbCreate(NIL,33,11,35,19, '019-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0019'),NIL,{||lanc_prod(mtipo_lanca,19)})
        nPBid[20] := wvw_pbCreate(NIL,37,11,39,19, '020-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0020'),NIL,{||lanc_prod(mtipo_lanca,20)})

        nPBid[21] := wvw_pbCreate(NIL,1 ,21,3 ,29, '021-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0021'),NIL,{||lanc_prod(mtipo_lanca,21)})
        nPBid[22] := wvw_pbCreate(NIL,5 ,21,7 ,29, '022-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0022'),NIL,{||lanc_prod(mtipo_lanca,22)})
        nPBid[23] := wvw_pbCreate(NIL,9 ,21,11,29, '023-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0023'),NIL,{||lanc_prod(mtipo_lanca,23)})
        nPBid[24] := wvw_pbCreate(NIL,13,21,15,29, '024-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0024'),NIL,{||lanc_prod(mtipo_lanca,24)})
        nPBid[25] := wvw_pbCreate(NIL,17,21,19,29, '025-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0025'),NIL,{||lanc_prod(mtipo_lanca,25)})
        nPBid[26] := wvw_pbCreate(NIL,21,21,23,29, '026-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0026'),NIL,{||lanc_prod(mtipo_lanca,26)})
        nPBid[27] := wvw_pbCreate(NIL,25,21,27,29, '027-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0027'),NIL,{||lanc_prod(mtipo_lanca,27)})
        nPBid[28] := wvw_pbCreate(NIL,29,21,31,29, '028-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0028'),NIL,{||lanc_prod(mtipo_lanca,28)})
        nPBid[29] := wvw_pbCreate(NIL,33,21,35,29, '029-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0029'),NIL,{||lanc_prod(mtipo_lanca,29)})
        nPBid[30] := wvw_pbCreate(NIL,37,21,39,29, '030-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0030'),NIL,{||lanc_prod(mtipo_lanca,30)})

        nPBid[31] := wvw_pbCreate(NIL,1 ,31,3 ,39, '031-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0031'),NIL,{||lanc_prod(mtipo_lanca,31)})
        nPBid[32] := wvw_pbCreate(NIL,5 ,31,7 ,39, '032-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0032'),NIL,{||lanc_prod(mtipo_lanca,32)})
        nPBid[33] := wvw_pbCreate(NIL,9 ,31,11,39, '033-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0033'),NIL,{||lanc_prod(mtipo_lanca,33)})
        nPBid[34] := wvw_pbCreate(NIL,13,31,15,39, '034-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0034'),NIL,{||lanc_prod(mtipo_lanca,34)})
        nPBid[35] := wvw_pbCreate(NIL,17,31,19,39, '035-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0035'),NIL,{||lanc_prod(mtipo_lanca,35)})
        nPBid[36] := wvw_pbCreate(NIL,21,31,23,39, '036-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0036'),NIL,{||lanc_prod(mtipo_lanca,36)})
        nPBid[37] := wvw_pbCreate(NIL,25,31,27,39, '037-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0037'),NIL,{||lanc_prod(mtipo_lanca,37)})
        nPBid[38] := wvw_pbCreate(NIL,29,31,31,39, '038-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0038'),NIL,{||lanc_prod(mtipo_lanca,38)})
        nPBid[39] := wvw_pbCreate(NIL,33,31,35,39, '039-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0039'),NIL,{||lanc_prod(mtipo_lanca,39)})
        nPBid[40] := wvw_pbCreate(NIL,37,31,39,39, '040-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0040'),NIL,{||lanc_prod(mtipo_lanca,40)})

        nPBid[41] := wvw_pbCreate(NIL,1 ,41,3 ,49, '041-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0041'),NIL,{||lanc_prod(mtipo_lanca,41)})
        nPBid[42] := wvw_pbCreate(NIL,5 ,41,7 ,49, '042-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0042'),NIL,{||lanc_prod(mtipo_lanca,42)})
        nPBid[43] := wvw_pbCreate(NIL,9 ,41,11,49, '043-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0043,'),NIL,{||lanc_prod(mtipo_lanca,43)})
        nPBid[44] := wvw_pbCreate(NIL,13,41,15,49, '044-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0044'),NIL,{||lanc_prod(mtipo_lanca,44)})
        nPBid[45] := wvw_pbCreate(NIL,17,41,19,49, '045-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0045'),NIL,{||lanc_prod(mtipo_lanca,45)})
        nPBid[46] := wvw_pbCreate(NIL,21,41,23,49, '046-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0046'),NIL,{||lanc_prod(mtipo_lanca,46)})
        nPBid[47] := wvw_pbCreate(NIL,25,41,27,49, '047-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0047'),NIL,{||lanc_prod(mtipo_lanca,47)})
        nPBid[48] := wvw_pbCreate(NIL,29,41,31,49, '048-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0048'),NIL,{||lanc_prod(mtipo_lanca,48)})
        nPBid[49] := wvw_pbCreate(NIL,33,41,35,49, '049-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0049'),NIL,{||lanc_prod(mtipo_lanca,49)})
        nPBid[50] := wvw_pbCreate(NIL,37,41,39,49, '050-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0050'),NIL,{||lanc_prod(mtipo_lanca,50)})

        nPBid[51] := wvw_pbCreate(NIL,1 ,51,3 ,59, '051-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0051'),NIL,{||lanc_prod(mtipo_lanca,51)})
        nPBid[52] := wvw_pbCreate(NIL,5 ,51,7 ,59, '052-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0052'),NIL,{||lanc_prod(mtipo_lanca,52)})
        nPBid[53] := wvw_pbCreate(NIL,9 ,51,11,59, '053-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0053'),NIL,{||lanc_prod(mtipo_lanca,53)})
        nPBid[54] := wvw_pbCreate(NIL,13,51,15,59, '054-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0054'),NIL,{||lanc_prod(mtipo_lanca,54)})
        nPBid[55] := wvw_pbCreate(NIL,17,51,19,59, '055-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0055'),NIL,{||lanc_prod(mtipo_lanca,55)})
        nPBid[56] := wvw_pbCreate(NIL,21,51,23,59, '056-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0056'),NIL,{||lanc_prod(mtipo_lanca,56)})
        nPBid[57] := wvw_pbCreate(NIL,25,51,27,59, '057-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0057'),NIL,{||lanc_prod(mtipo_lanca,57)})
        nPBid[58] := wvw_pbCreate(NIL,29,51,31,59, '058-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0058'),NIL,{||lanc_prod(mtipo_lanca,58)})
        nPBid[59] := wvw_pbCreate(NIL,33,51,35,59, '059-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0059'),NIL,{||lanc_prod(mtipo_lanca,59)})
        nPBid[60] := wvw_pbCreate(NIL,37,51,39,59, '060-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0060'),NIL,{||lanc_prod(mtipo_lanca,60)})

        nPBid[61] := wvw_pbCreate(NIL,1 ,61,3 ,69, '061-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0061'),NIL,{||lanc_prod(mtipo_lanca,61)})
        nPBid[62] := wvw_pbCreate(NIL,5 ,61,7 ,69, '062-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0062'),NIL,{||lanc_prod(mtipo_lanca,62)})
        nPBid[63] := wvw_pbCreate(NIL,9 ,61,11,69, '063-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0063'),NIL,{||lanc_prod(mtipo_lanca,63)})
        nPBid[64] := wvw_pbCreate(NIL,13,61,15,69, '064-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0064'),NIL,{||lanc_prod(mtipo_lanca,64)})
        nPBid[65] := wvw_pbCreate(NIL,17,61,19,69, '065-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0065'),NIL,{||lanc_prod(mtipo_lanca,65)})
        nPBid[66] := wvw_pbCreate(NIL,21,61,23,69, '066-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0066'),NIL,{||lanc_prod(mtipo_lanca,66)})
        nPBid[67] := wvw_pbCreate(NIL,25,61,27,69, '067-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0067'),NIL,{||lanc_prod(mtipo_lanca,67)})
        nPBid[68] := wvw_pbCreate(NIL,29,61,31,69, '068-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0068'),NIL,{||lanc_prod(mtipo_lanca,68)})
        nPBid[69] := wvw_pbCreate(NIL,33,61,35,69, '069-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0069'),NIL,{||lanc_prod(mtipo_lanca,69)})
        nPBid[70] := wvw_pbCreate(NIL,37,61,39,69, '070-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0070'),NIL,{||lanc_prod(mtipo_lanca,70)})

        nPBid[71] := wvw_pbCreate(NIL,1 ,71,3 ,79, '071-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0071'),NIL,{||lanc_prod(mtipo_lanca,71)})
        nPBid[72] := wvw_pbCreate(NIL,5 ,71,7 ,79, '072-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0072'),NIL,{||lanc_prod(mtipo_lanca,72)})
        nPBid[73] := wvw_pbCreate(NIL,9 ,71,11,79, '073-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0073'),NIL,{||lanc_prod(mtipo_lanca,73)})
        nPBid[74] := wvw_pbCreate(NIL,13,71,15,79, '074-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0074'),NIL,{||lanc_prod(mtipo_lanca,74)})
        nPBid[75] := wvw_pbCreate(NIL,17,71,19,79, '075-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0075'),NIL,{||lanc_prod(mtipo_lanca,75)})
        nPBid[76] := wvw_pbCreate(NIL,21,71,23,79, '076-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0076'),NIL,{||lanc_prod(mtipo_lanca,76)})
        nPBid[77] := wvw_pbCreate(NIL,25,71,27,79, '077-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0077'),NIL,{||lanc_prod(mtipo_lanca,77)})
        nPBid[78] := wvw_pbCreate(NIL,29,71,31,79, '078-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0078'),NIL,{||lanc_prod(mtipo_lanca,78)})
        nPBid[79] := wvw_pbCreate(NIL,33,71,35,79, '079-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0079+'),NIL,{||lanc_prod(mtipo_lanca,79)})
        nPBid[80] := wvw_pbCreate(NIL,37,71,39,79, '080-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0080'),NIL,{||lanc_prod(mtipo_lanca,80)})

        nPBid[81] := wvw_pbCreate(NIL,1 ,81,3 ,89, '081-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0081'),NIL,{||lanc_prod(mtipo_lanca,81)})
        nPBid[82] := wvw_pbCreate(NIL,5 ,81,7 ,89, '082-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0082'),NIL,{||lanc_prod(mtipo_lanca,82)})
        nPBid[83] := wvw_pbCreate(NIL,9 ,81,11,89, '083-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0083'),NIL,{||lanc_prod(mtipo_lanca,83)})
        nPBid[84] := wvw_pbCreate(NIL,13,81,15,89, '084-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0084'),NIL,{||lanc_prod(mtipo_lanca,84)})
        nPBid[85] := wvw_pbCreate(NIL,17,81,19,89, '085-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0085'),NIL,{||lanc_prod(mtipo_lanca,85)})
        nPBid[86] := wvw_pbCreate(NIL,21,81,23,89, '086-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0086'),NIL,{||lanc_prod(mtipo_lanca,86)})
        nPBid[87] := wvw_pbCreate(NIL,25,81,27,89, '087-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0087'),NIL,{||lanc_prod(mtipo_lanca,87)})
        nPBid[88] := wvw_pbCreate(NIL,29,81,31,89, '088-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0088'),NIL,{||lanc_prod(mtipo_lanca,88)})
        nPBid[89] := wvw_pbCreate(NIL,33,81,35,89, '089-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0089'),NIL,{||lanc_prod(mtipo_lanca,89)})
        nPBid[90] := wvw_pbCreate(NIL,37,81,39,89, '090-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0090'),NIL,{||lanc_prod(mtipo_lanca,90)})

        nPBid[91] := wvw_pbCreate(NIL,1 ,91,3 ,99, '091-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0091'),NIL,{||lanc_prod(mtipo_lanca,91)})
        nPBid[92] := wvw_pbCreate(NIL,5 ,91,7 ,99, '092-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0092'),NIL,{||lanc_prod(mtipo_lanca,92)})
        nPBid[93] := wvw_pbCreate(NIL,9 ,91,11,99, '093-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0093'),NIL,{||lanc_prod(mtipo_lanca,93)})
        nPBid[94] := wvw_pbCreate(NIL,13,91,15,99, '094-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0094'),NIL,{||lanc_prod(mtipo_lanca,94)})
        nPBid[95] := wvw_pbCreate(NIL,17,91,19,99, '095-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0095'),NIL,{||lanc_prod(mtipo_lanca,95)})
        nPBid[96] := wvw_pbCreate(NIL,21,91,23,99, '096-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0096'),NIL,{||lanc_prod(mtipo_lanca,96)})
        nPBid[97] := wvw_pbCreate(NIL,25,91,27,99, '097-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0097'),NIL,{||lanc_prod(mtipo_lanca,97)})
        nPBid[98] := wvw_pbCreate(NIL,29,91,31,99, '098-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0098'),NIL,{||lanc_prod(mtipo_lanca,98)})
        nPBid[99] := wvw_pbCreate(NIL,33,91,35,99, '099-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0099'),NIL,{||lanc_prod(mtipo_lanca,99)})
        nPBid[100]:= wvw_pbCreate(NIL,37,91,39,99, '100-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0100'),NIL,{||lanc_prod(mtipo_lanca,100)})

        nPBid[101]:= wvw_pbCreate(NIL,1 ,101,3 ,109, '101-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0101'),NIL,{||lanc_prod(mtipo_lanca,101)})
        nPBid[102]:= wvw_pbCreate(NIL,5 ,101,7 ,109, '102-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0102'),NIL,{||lanc_prod(mtipo_lanca,102)})
        nPBid[103]:= wvw_pbCreate(NIL,9 ,101,11,109, '103-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0103'),NIL,{||lanc_prod(mtipo_lanca,103)})
        nPBid[104]:= wvw_pbCreate(NIL,13,101,15,109, '104-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0104'),NIL,{||lanc_prod(mtipo_lanca,104)})
        nPBid[105]:= wvw_pbCreate(NIL,17,101,19,109, '105-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0105'),NIL,{||lanc_prod(mtipo_lanca,105)})
        nPBid[106]:= wvw_pbCreate(NIL,21,101,23,109, '106-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0106'),NIL,{||lanc_prod(mtipo_lanca,106)})
        nPBid[107]:= wvw_pbCreate(NIL,25,101,27,109, '107-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0107'),NIL,{||lanc_prod(mtipo_lanca,107)})
        nPBid[108]:= wvw_pbCreate(NIL,29,101,31,109, '108-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0108'),NIL,{||lanc_prod(mtipo_lanca,108)})
        nPBid[109]:= wvw_pbCreate(NIL,33,101,35,109, '109-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0109'),NIL,{||lanc_prod(mtipo_lanca,109)})
        nPBid[110]:= wvw_pbCreate(NIL,37,101,39,109, '110-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0110'),NIL,{||lanc_prod(mtipo_lanca,110)})

        nPBid[111]:= wvw_pbCreate(NIL,1 ,111,3 ,119, '111-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0111'),NIL,{||lanc_prod(mtipo_lanca,111)})
        nPBid[112]:= wvw_pbCreate(NIL,5 ,111,7 ,119, '112-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0112'),NIL,{||lanc_prod(mtipo_lanca,112)})
        nPBid[113]:= wvw_pbCreate(NIL,9 ,111,11,119, '113-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0113'),NIL,{||lanc_prod(mtipo_lanca,113)})
        nPBid[114]:= wvw_pbCreate(NIL,13,111,15,119, '114-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0114'),NIL,{||lanc_prod(mtipo_lanca,114)})
        nPBid[115]:= wvw_pbCreate(NIL,17,111,19,119, '115-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0115'),NIL,{||lanc_prod(mtipo_lanca,115)})
        nPBid[116]:= wvw_pbCreate(NIL,21,111,23,119, '116-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0116'),NIL,{||lanc_prod(mtipo_lanca,116)})
        nPBid[117]:= wvw_pbCreate(NIL,25,111,27,119, '117-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0117'),NIL,{||lanc_prod(mtipo_lanca,117)})
        nPBid[118]:= wvw_pbCreate(NIL,29,111,31,119, '118-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0118'),NIL,{||lanc_prod(mtipo_lanca,118)})
        nPBid[119]:= wvw_pbCreate(NIL,33,111,35,119, '119-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0119'),NIL,{||lanc_prod(mtipo_lanca,119)})
        nPBid[120]:= wvw_pbCreate(NIL,37,111,39,119, '120-'+mtipo_lug+' '+abre_fecha(mtipo_lug,'0120'),NIL,{||lanc_prod(mtipo_lanca,120)})

        */
***************************** f i m **********************************
FUNCTION lanc_prod(mtip_lugar,mnum_lugar)
*****************************************
LOCAL opcao,mbt_prod:={},i:=0,y:=0,mqtd_aux:=0,mqtd_cont := ' ',cons_grupo := {},op_grupo:=0,mopcao:='',f:=0,;
      msubtotal := 0

PRIVATE mcod_merc:=0,cons_prod := {}

IF mnum_lugar = 1000
        m_sair := 1
        mnum_mesa := 9999
        mensagem('TECLE <ENTER> P/ CONTINUAR....')
        RETURN .T.
ENDIF
op_grupo:=0
CLEAR GETS
op_tela(0,0,55,120,'LANCAMENTO DE PRODUTOS   -   ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']')
setcor(4)
limpa(00,00,55,120)
setcor(1)
WvW_PBSetFont( NIL, 'Arial Black', 25, 0,)
//nPBotaoid := wvw_pbCreate(NIL,41,10,42,35, '[F2] FECHAMENTO PARCIAL',NIL,{||Fecha_parc(mtip_lugar,mnum_lugar,mnum_doc)})
//nPBotaoid1 := wvw_pbCreate(NIL,43,10,44,35,'    RECEBIMENTO   ',NIL,{||mast30(mnum_lugar)})
SET KEY -1 TO Fecha_parc(mtip_lugar,mnum_lugar,mnum_doc)      // F2

setcor(3)
//limpa(4,40,17,80)
botao(1,10,4,100)
WVW_DrawLabel(,1,35,'Conta: '+mtip_lugar+'-'+STRZERO(mnum_lugar,3),,,210,, 'arial black',50,40,,,,,)
botao(5,10,9,100)
DEVPOS(5,12);DEVOUT('DESCRICAO DO PRODUTO')

WHILE .T.
        nPBotaoid := wvw_pbCreate(NIL,41,40,43,70, '[F2] FECHAMENTO PARCIAL',NIL,{||Fecha_parc(mtip_lugar,mnum_lugar,mnum_doc)})
        nPBotaoid1 := wvw_pbCreate(NIL,46,40,48,70,'    RECEBIMENTO   ',NIL,{||mast30(mnum_lugar)})
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
        botao(27,01,30,32)
        botao(32,01,35,32)
        botao(37,01,40,32)
        botao(42,01,45,32)
        botao(47,01,50,32)
        //botao(52,01,55,25)
        DrawLabel(12,2,'Codigo',,,'Arial Black',25,10)
        DrawLabel(17,2,'Quantidade',,,'Arial Black',25,10)
        DrawLabel(22,2,'Valor Unitario',,,'Arial Black',25,10)
        DrawLabel(27,2,'Cod.Garcon',,,'Arial Black',25,10)
        DrawLabel(32,2,'Observacao',,,'Arial Black',25,10)
        DrawLabel(37,2,'Hora Entrada',,,'Arial Black',25,10)
        DrawLabel(42,2,'Hora Saida',,,'Arial Black',25,10)
        DrawLabel(47,2,'Duracao',,,'Arial Black',25,10)
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
        cons_parc := {}
        //atencao("SELECT cod_prod,qtd,preco,(select descri from mastprod where codigo = mastmov.cod_prod) FROM mastmov WHERE num_local = "+sr_cdbvalue(ALLTRIM(STR(mnum_lugar)))+" AND tipo = "+sr_cdbvalue(mtip_lugar)+" AND dat_pag IS NULL ORDER BY hora")
        sr_getconnection():exec("SELECT cod_prod,qtd,preco,(select descri from mastprod where codigo = mastmov.cod_prod),cod_garco FROM mastmov WHERE num_local = "+sr_cdbvalue(ALLTRIM(STR(mnum_lugar)))+" AND tipo = "+sr_cdbvalue(mtip_lugar)+" AND dat_pag IS NULL ORDER BY hora",,.t.,@cons_parc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_parc) > 0
                mentrada := cons_parc[1,4]
                msaida   := TIME()
                mintervalo := ELAPTIME(mentrada,msaida)
                DEVPOS(29,2);DEVOUT(cons_parc[1,5])
                DEVPOS(39,2);DEVOUT(mentrada)
                DEVPOS(44,2);DEVOUT(msaida)
                DEVPOS(49,2);DEVOUT(mintervalo)
                mqtd_lin := 0
                mitem := 1

                IF LEN(cons_parc) > 20
                        mqtd_lin := LEN(cons_parc) - 20
                ENDIF
                i:=f:=0
                DrawLabel(13+f,78,'Item  Cod. Descricao              Quantd.  Vlr.Unit.  Vlr.Total',,m_color[8],'lucida console',14,7)
                //f++
                //DrawLabel(,13+f,55,REPLI(CHR(223),104),,,'lucida console',13,11)
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
                //tela_ := {}
                //tela_ := WVW_SAVESCREEN(,lci,cci+55,lba,cba-1)
        ENDIF
        DrawLabel(32,42,ALLTRIM(ALLTRIM(TRANSFORM(msubtotal,ALLTRIM('@E 999,999.99')))),210,, 'arial black',45,15)

        cons_merc := {}
        sr_getconnection():exec("SELECT * FROM mastmesas WHERE tipo = "+sr_cdbvalue(mtip_lugar)+" AND numero = "+sr_cdbvalue(STRZERO(mnum_lugar,4)),,.t.,@cons_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_merc) = 0
                atencao('MESA/QUARTO nao existe em nossos Arquivo !!!')
                WVW_PBDestroy(,nPBotaoid)
                //wvw_lclosewindow()
                EXIT
        ENDIF
        WVW_PBEnable( NIL, nPBId, .T. )
        mcod_merc:=0
        @ 14,2 GET mcod_merc PICT '99999' VALID IF(EMPTY(mcod_merc),mcod_merc := f4_merc(),.T.)
        READ
        IF LASTKEY() = 27
                WVW_PBDestroy(,nPBotaoid)
                CLEAR GETS
                KEYBOARD CHR(13)
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
        //DEVPOS(1,14);DEVOUT(STRZERO(mcod_merc,5)+' - '+mped_merc[1,2])
        //WVW_DrawLabel(,6,1,STRZERO(mcod_merc,5)+' - '+mped_merc[1,2],,,210,, 'arial black',40,17,,,,,)
        WVW_DrawLabel(,06,11,mped_merc[1,2],,,,, 'arial black',40,17,,,,,)

        mpre := ' '
        limpa(12,40,25,70)
        botao(12,40,25,70)
        /*
        atencao(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg')
        IF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg')
                WVW_DrawImage( ,12,40,25,70,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.jpg',.T.,.F.)
        ELSEIF FILE(ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp')
                WVW_DrawImage( ,12,40,25,70,ALLTRIM(m_cfg[11])+'P'+mped_merc[1,1]+'.bmp',.T.,.F.)
        //ELSE
        //        WVW_DrawImage( ,12,1,25,50,ALLTRIM(m_cfg[12])+'HTIFIRMA.JPG',.T.,.F.)
        ENDIF
        /*
        setcor(3)
        DEVPOS(30,15);DEVOUT(mped_merc[1,2])
        setcor(1)
        */
        IF mped_merc[1,7] = 'HR'
                mmerc := 'Tempo de Duracao: '+ELAPTIME(mentrada,msaida)
        ENDIF
        mqtd := 1
        @ 19,2 GET mqtd PICT '9,999.999' VALID IF(EMPTY(mqtd) .OR. mqtd < 0,.F.,.T.)
        //@ 9,14 GET mcod_garcon PICT '999' VALID ven(mcod_garcon,5,19)
        @ 24,2 GET mped_merc[1,6] PICT '9,999.99' WHEN mped_merc[1,7] = 'HR'
        @ 34,2 GET mobs PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mopcao := op_simnao('S','Confirma a Inclusao do PRODUTO'+m_qp+m_qp+' Quantidade:  '+STR(mqtd))
        IF mopcao = 'N' .OR. LASTKEY() = 27
                WVW_PBDestroy(,nPBotaoid)
                CLEAR GETS
                EXIT
        ENDIF
        cons_mov := {}
        //sr_getconnection():exec("SELECT * FROM mastmov WHERE num_local = "+sr_cdbvalue(mtip_lugar+STRZERO(mnum_lugar,4))+' AND dat_pag IS NULL',,.t.,@cons_mov)
        sr_getconnection():exec("SELECT * FROM mastmovcab WHERE mesa = "+sr_cdbvalue(ALLTRIM(STR(mnum_lugar)))+" AND tipo = "+sr_cdbvalue(mtip_lugar)+" AND status = 'ABERTO'",,.t.,@cons_mov)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_mov) = 0
                IF op_simnao('S','Deseja ABRIR esta MESA/QUARTO') = 'S'
                        op_tela(10,10,12,70,' CODIGO DO GARCON ABRINDO A(O) ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']')
                        DEVPOS(1,1);DEVOUT('Codigo do Garcon:')
                        @ 1,19 GET mcod_garcon PICT '999' VALID IF(EMPTY(mcod_garcon),.F.,ven(mcod_garcon,1,23))
                        READ
                        IF LASTKEY() = 27 .OR. op_simnao('S','Confirma o Garcon: '+STRZERO(mcod_garcon,3)+'-'+ven(mcod_garcon,0)+m_qp+m_qp+' ABERTURA: ['+mtip_lugar+'-'+STRZERO(mnum_lugar,3)+']') = 'N'
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        wvw_lclosewindow()
                        sr_getconnection():exec('INSERT INTO mastmovcab (data, status, mesa, pessoas, id_usuario, obs, nome_comanda,tipo)'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(DATE())+','+; //1
                                                sr_cdbvalue('ABERTO')+','+; //1
                                                sr_cdbvalue(ALLTRIM(STR(mnum_lugar)))+','+; //1
                                                sr_cdbvalue(1)+','+; //1
                                                sr_cdbvalue(STRZERO(mcod_garcon,3))+','+; //1
                                                sr_cdbvalue('')+','+; //1
                                                sr_cdbvalue('')+','+; //1
                                                sr_cdbvalue(mtip_lugar)+')',,.f.)
                        aret := {}
                        sr_getconnection():exec("SELECT MAX(id) FROM mastmovcab WHERE mesa = "+sr_cdbvalue(ALLTRIM(STR(mnum_lugar)))+" AND tipo = "+sr_cdbvalue(mtip_lugar),,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        //mnum_doc := ALLTRIM(STR(mnum_doc))
                        //mnum_doc := ALLTRIM(str(aret[1,1]))
                        mnum_doc := aret[1,1]
                        //atencao(mnum_doc)
                        /*
                        aret := {}
                        sr_getconnection():exec("SELECT MAX(num_doc) FROM mastnummov",,.t.,@aret)
                        IF LEN(aret) = 0
                                mnum_doc := 1
                        ELSE
                                mnum_doc := VAL(aret[1,1]) + 1
                        ENDIF
                        sr_getconnection():exec('INSERT INTO mastnummov (num_doc,data,'+;
                                                'hora)'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(STRZERO(mnum_doc,6))+','+; //1
                                                sr_cdbvalue(DATE())+','+; //2
                                                sr_cdbvalue(TIME())+')',,.f.)
                        */
                ELSE
                        LOOP
                ENDIF
        ELSE
                mcod_garcon := VAL(cons_mov[1,6])
                mnun_doc := ALLTRIM(STR(cons_mov[1,2]))
        ENDIF
        sr_getconnection():exec('INSERT INTO mastmov ('+;
                                'NUM_DOC   ,'+;//1
                                'NUM_LOCAL ,'+;//2
                                'DATA      ,'+;//3
                                'HORA      ,'+;//4
                                'COD_PROD  ,'+;//5
                                'DESCRI    ,'+;//6
                                'QTD       ,'+;//7
                                'PRECO     ,'+;//8
                                'CUSTO     ,'+;//8
                                'COD_CLI   ,'+;//9
                                'COD_GARCO ,'+;//10
                                'OPER      ,'+;//11
                                'OBS       ,'+;//12
                                'PORTA     ,'+;//13
                                'TIPO      ,'+;//13
                                'UNIDADE   )'+;//13
                                ' VALUES ('+;
                                sr_cdbvalue(mnum_doc)+','+; //1
                                sr_cdbvalue(ALLTRIM(STR(mnum_lugar)))+','+; //2
                                sr_cdbvalue(DATE())+','+; //3
                                sr_cdbvalue(TIME())+','+; //4
                                sr_cdbvalue(mcod_merc)+','+; //5
                                sr_cdbvalue(mmerc)+','+; //6
                                sr_cdbvalue(mqtd)+','+; //7
                                sr_cdbvalue(mped_merc[1,6])+','+; //8
                                sr_cdbvalue(mped_merc[1,5])+','+; //8
                                sr_cdbvalue('')+','+; //9
                                sr_cdbvalue(STRZERO(mcod_garcon,3))+','+; //10
                                sr_cdbvalue(cod_operado)+','+; //11
                                sr_cdbvalue(mobs)+','+; //12
                                sr_cdbvalue(mped_merc[1,9])+','+; //13
                                sr_cdbvalue(mtip_lugar)+','+; //13
                                sr_cdbvalue(mped_merc[1,7])+')',,.f.)//14
        sr_getconnection():exec("UPDATE mastprod SET saldo = "+sr_cdbvalue(mped_merc[1,8] - mqtd)+" WHERE codigo = "+sr_cdbvalue(mped_merc[1,1]),,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        WVW_PBDestroy(,nPBotaoid)
        //wvw_lclosewindow()
        CLEAR GETS
        //LOOP
        IF mped_merc[1,9] = 4 .OR.  mped_merc[1,9] = 0
                loop
        ENDIF
        IF ! imp_arq('FCH_PARC.TXT','R')
                EXIT
        ENDIF
        /*
        IF mped_merc[1,9] = 1
                mporta := m_cfg[5]
        ELSEIF mped_merc[1,9] = 2
                mporta := m_cfg[6]
        ELSEIF mped_merc[1,9] = 3
                mporta := m_cfg[7]
        ENDIF
        SET DEVI TO PRINT
        SET PRINT TO (mporta)
        */
        //DEVPOS(PROW()+1,00);DEVOUT(CHR(18))
        //DEVPOS(PROW(),00);DEVOUT(memp_resa)
        //DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
        //DEVPOS(PROW(),00);DEVOUT(mtraco)
        //DEVPOS(PROW()+1,00);DEVOUT('Documento: '+STRZERO(mnum_doc,6))
        imprt('M','N')
        imprt('M','N+')
        DEVPOS(PROW(),00);DEVOUT('Mesa.....: '+mtip_lugar+STRZERO(mnum_lugar,4))
        DEVPOS(PROW()+1,00);DEVOUT('Data.....: '+DTOC(DATE())+' - Horas: '+TIME())
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT(mmerc)
        IF ! EMPTY(mobs)
                DEVPOS(PROW()+1,0);DEVOUT('OBS.: '+mobs)
        ENDIF
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('Codigo...: '+STR(mcod_merc,5))
        DEVPOS(PROW()+1,00);DEVOUT('Quantidade: '+TRANSFORM(mqtd,'999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+1,00);DEVOUT('Garcon....: '+STRZERO(mcod_garcon,3))
        DEVPOS(PROW()+1,00);DEVOUT('Operador..: '+cod_operado)
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        DEVPOS(PROW()+m_cfg[10],00);DEVOUT(CHR(18))
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        ATENCAO(STR(int(mped_merc[1,9])))

        conf_impressao('FCH_PARC.TXT',int(mped_merc[1,9]))
        LOOP
ENDDO
SETMODE(50,120)
WVW_SetFont(,'lucida console',12, 7,FW_HEAVY, PROOF_QUALITY )  // 800X600
wvw_lclosewindow()
RETURN NIL
