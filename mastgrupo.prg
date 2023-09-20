* CADASTRO DE GRUPOS
*************************
FUNCTION mastgrupo(msubgru,mop)
***************
#include "inkey.ch"              // constantes de codigos das teclas
LOCAL mprg:='MASTGRUPO',f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,mpre_sele,mpre_orde,i,;
      mcons_gru:={},ccomm,point:=0,oconsprod,ocolprod[2],mdescri:=SPACE(30),mmerc,mc_gru:={},opcao:=' '

MEMVAR mdata_sis,nivel_acess,mgrupo,msub_grupo

Local4:= Space(0)
f4 := '*'
f4lci := f4cci := 0
f4lba := 30
f4cba := 42
exibi_prg(mprg)
mcons_gru:={}
op_tela(05,20,35,73,'CADASTRO DE GRUPOS')
sr_getconnection():exec("SELECT * FROM mastgrupo ORDER BY codigo",,.t.,@mcons_gru)
mpre_sele := SELE()
mpre_orde := INDEXORD()
IF ! AbriArq('mastgrupo','grupo');RETURN NIL;ENDIF
*************
SELE('grupo')
GO TOP
*************
setcor(1)
oconsprod := TBROWSEDB(f4lci,f4cci,f4lba-1,f4cba)
ocolprod[1] := TBCOLUMNNEW('Codigo',{||grupo->codigo})
ocolprod[2] := TBCOLUMNNEW('Descricao',{||grupo->grupo})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
oconsprod:FORCESTABLE()
WHILE .T.
        mensagem('<I>nclusao - <ENTER> p/Alterar ou Excluir')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                wvw_lclosewindow()
		SELE(mpre_sele);IF(mpre_orde>0,ORDSETFOCUS(mpre_orde),)
                RETURN ' '
        ELSEIF nkey == K_ENTER
                IF msubgru = 'S' .AND. SUBSTR(grupo->codigo,4) = '  '
                        atencao('Estar fazendo alteracao no SUB-GRUPO por isso nao pode alterar este registro...')
                        LOOP
                ENDIF
                mgrupo     := VAL(grupo->codigo)
                IF mop = '*'
                        opcao := mensagem1('Deseja <A>lterar <E>xcluir:','A','A,E')
                        IF LASTKEY() = 27
                                LOOP
                        ELSEIF opcao = 'A'
                                op_tela(10,25,12,76,' A L T E R A C A O ')
                                WHILE .T.
                                        mgrupo    := grupo->grupo
                                        setcor(1)
                                        DEVPOS(00,00);DEVOUT('Codigo...:')
                                        DEVPOS(01,00);DEVOUT('Descricao:')
                                        setcor(3)
                                        DEVPOS(00,11);DEVOUTPICT(grupo->codigo,'@@R 999')
                                        setcor(1)
                                        @ 01,11 GET mgrupo PICT '@!'
                                        READ
                                        IF LASTKEY() = 27
                                                EXIT
                                        ENDIF
                                        IF 'N' = op_simnao('S','Confirma a ALTERACAO:')
                                                LOOP
                                        ENDIF
                                        sr_getconnection():exec("UPDATE mastgrupo SET grupo  = "+sr_cdbvalue(mgrupo)+" WHERE codigo = "+sr_cdbvalue(grupo->codigo),,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        EXIT
                                ENDDO
                                wvw_lclosewindow()
                        ELSEIF opcao = 'E'
                                op_tela(10,25,12,76,' E X C L U S A O ')
                                setcor(1)
                                DEVPOS(00,00);DEVOUT('Codigo...:')
                                DEVPOS(01,00);DEVOUT('Descricao:')
                                setcor(3)
                                DEVPOS(00,11);DEVOUTPICT(grupo->codigo,'@@R 999-99')
                                DEVPOS(01,11);DEVOUT(grupo->grupo)
                                IF 'N' = op_simnao('N','Confirma a EXCLUSAO:')
                                        LOOP
                                ENDIF
                                sr_getconnection():exec("DELETE FROM mastgrupo  WHERE codigo = "+sr_cdbvalue(grupo->codigo),,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                                EXIT
                                wvw_lclosewindow()
                        ENDIF
                        *************
                        DBCLOSEAREA('grupo')
                        IF ! AbriArq('mastgrupo','grupo');RETURN NIL;ENDIF
                        SELE('grupo')   //;ORDSETFOCUS(1)
                        GO TOP
                        *************
                        oconsprod := TBROWSEDB(f4lci,f4cci,f4lba-1,f4cba,'grupo')
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||IF(LEN(ALLTRIM(grupo->codigo))=3,grupo->codigo+' ',SUBSTR(grupo->codigo,1,3)+'-'+SUBSTR(grupo->codigo,4))})
                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||grupo->grupo})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:CARGO := '*****'
                        oconsprod:FORCESTABLE()
                ELSE
                        wvw_lclosewindow()
                        SELE(mpre_sele);IF(mpre_orde>0,ORDSETFOCUS(mpre_orde),)
                        RETURN mgrupo
                ENDIF
        ELSEIF nkey == -41
                calcu()
        /*
        ELSEIF  nkey = -3
                mdescri := SPACE(40)
                op_tela(10,10,12,71,'Pesquisar por Decricao do Porduto')
                mensagem('Digite a Descricao ou Parte da Descricao para fazer a Pesquisa ou <ESC>p/Retornar')
                DEVPOS(01,00);DEVOUT(' Digite a Descricao:')
                WVW_DrawBoxGet(,01,21,40)
                @ 01,21 GET mdescri PICT '@!'
                READ
                wvw_lclosewindow()
                *************
                SELE('grupo');ORDSETFOCUS(2)
                *************
                grupo->(DBSEEK(RTRIM(mdescri),.T.))
                oconsprod:refreshall()
        */
        ELSEIF nkey = 73 .OR. nkey = 105     // I - INCLUSAO
                op_tela(10,25,12,76,'I N C L U S A O')
                WHILE .T.
                        msub_grupo := SPACE(5)
                        mgrupo    := SPACE(40)
                        setcor(1)
                        DEVPOS(00,00);DEVOUT('Codigo...:')
                        DEVPOS(01,00);DEVOUT('Descricao:')
                        @ 00,11 GET msub_grupo PICT '999' VALID IF(LEN(ALLTRIM(msub_grupo)) < 3,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        mc_gru := {}
                        sr_getconnection():exec("SELECT * FROM mastgrupo  WHERE codigo = "+sr_cdbvalue(msub_grupo),,.t.,@mc_gru)
                        IF LEN(mc_gru) > 0
                                atencao('Ja existe este GRUPO/SUB-GRUPO....')
                                LOOP
                        ENDIF
                        @ 01,11 GET mgrupo PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        IF 'N' = op_simnao('S','Confirma a Inclusao:')
                                LOOP
                        ENDIF
                        sr_getconnection():exec("INSERT INTO mastgrupo (codigo,grupo,data_cad,sr_deleted) VALUES (" + sr_cdbvalue(msub_grupo)+ ","+sr_cdbvalue(mgrupo)+","+sr_cdbvalue(mdata_sis)+",' ')",,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        EXIT
                ENDDO
                wvw_lclosewindow()
                *************
                DBCLOSEAREA('grupo')
                IF ! AbriArq('mastgrupo','grupo');RETURN NIL;ENDIF
                SELE('grupo')   //;ORDSETFOCUS(1)
                DBCOMMIT()
                GO TOP
                *************
                oconsprod := TBROWSEDB(f4lci,f4cci,f4lba-1,f4cba,'grupo')
                ocolprod[1] := TBCOLUMNNEW('Codigo',{||grupo->codigo})
                ocolprod[2] := TBCOLUMNNEW('Descricao',{||grupo->grupo})
                i:=0
                FOR i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:CARGO := '*****'
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,nkey,'grupo')
                        oconsprod := TBROWSEDB(f4lci,f4cci,f4lba-1,f4cba,'grupo')
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||IF(LEN(ALLTRIM(grupo->codigo))=3,grupo->codigo+' ',SUBSTR(grupo->codigo,1,3)+'-'+SUBSTR(grupo->codigo,4))})
                        ocolprod[2] := TBCOLUMNNEW('Descricao',{||grupo->grupo})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:CARGO := '*****'
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(mpre_sele);IF(mpre_orde>0,ORDSETFOCUS(mpre_orde),)
RELEASE ALL
wvw_lclosewindow()
RETURN .F.
******************************* f i m *********************************************
