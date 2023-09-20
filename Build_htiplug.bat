@ECHO OFF
REM Gerado pela xDev Studio v0.70 as 26/02/2020 @ 10:57:07
REM Compilador .: HTISISTEMAS
REM Destino ....: C:\HELIO\SISMASTER\htiplug.EXE
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin64;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl\Win64;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HELIO\SISMASTER\ch;C:\Borland\BCC55\Include;C:\helio\sismaster\CH;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HELIO\SISMASTER\lib;C:\HELIO\SISMASTER;
 SET OBJ=;c:\helio\sismaster;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin64;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl\Win64;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HELIO\SISMASTER\ch;C:\Borland\BCC55\Include;C:\helio\sismaster\CH;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HELIO\SISMASTER\lib;C:\HELIO\SISMASTER;
 SET OBJ=;c:\helio\sismaster;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin64;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl\Win64;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HELIO\SISMASTER\ch;C:\Borland\BCC55\Include;C:\helio\sismaster\CH;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HELIO\SISMASTER\lib;C:\HELIO\SISMASTER;
 SET OBJ=;c:\helio\sismaster;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin64;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl\Win64;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HELIO\SISMASTER\ch;C:\Borland\BCC55\Include;C:\helio\sismaster\CH;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HELIO\SISMASTER\lib;C:\HELIO\SISMASTER;
 SET OBJ=;c:\helio\sismaster;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin64;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl\Win64;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HELIO\SISMASTER\ch;C:\Borland\BCC55\Include;C:\helio\sismaster\CH;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HELIO\SISMASTER\lib;C:\HELIO\SISMASTER;
 SET OBJ=;c:\helio\sismaster;
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl;C:\Program Files (x86)\Embarcadero\Studio\19.0\bin64;C:\Users\Public\Documents\Embarcadero\Studio\19.0\Bpl\Win64;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HELIO\SISMASTER\ch;C:\Borland\BCC55\Include;C:\helio\sismaster\CH;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HELIO\SISMASTER\lib;C:\HELIO\SISMASTER;
 SET OBJ=;c:\helio\sismaster;

REM - XHarbour.xCompiler.prg(97) @ 10:57:07:985
ECHO .ÿ
ECHO * (1/7) Compilando errorsys.prg
 harbour.exe ".\errorsys.prg" /q /o".\errorsys.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:57:08:515
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HELIO\SISMASTER;;;c:\helio\sismaster;" >> "b32.bc"
 echo -o".\errorsys.obj" >> "b32.bc"
 echo ".\errorsys.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:57:08:515
ECHO .ÿ
ECHO * (2/7) Compilando errorsys.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:57:08:704
ECHO .ÿ
ECHO * (3/7) Compilando HTIPLUG.PRG
 harbour.exe ".\HTIPLUG.PRG" /q /o".\HTIPLUG.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:57:08:969
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HELIO\SISMASTER;;;c:\helio\sismaster;" >> "b32.bc"
 echo -o".\HTIPLUG.obj" >> "b32.bc"
 echo ".\HTIPLUG.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:57:08:969
ECHO .ÿ
ECHO * (4/7) Compilando HTIPLUG.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:57:09:172
ECHO .ÿ
ECHO * (5/7) Compilando MASTFUN.PRG
 harbour.exe ".\MASTFUN.PRG" /q /o".\MASTFUN.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:57:10:171
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HELIO\SISMASTER;;;c:\helio\sismaster;" >> "b32.bc"
 echo -o".\MASTFUN.obj" >> "b32.bc"
 echo ".\MASTFUN.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:57:10:171
ECHO .ÿ
ECHO * (6/7) Compilando MASTFUN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(285) @ 10:57:10:420
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" + > "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HELIO\SISMASTER;;;c:\helio\sismaster;" + >> "b32.bc"
 echo -Gn -M -m  -Tpe -s + >> "b32.bc"
 echo c0w32.obj +     >> "b32.bc"
 echo ".\HTIPLUG.obj"  +  >> "b32.bc"
 echo ".\errorsys.obj"  +  >> "b32.bc"
 echo ".\MASTFUN.obj", +  >> "b32.bc"
 echo ".\htiplug.EXE", +    >> "b32.bc"
 echo ".\htiplug.map", +    >> "b32.bc"
 echo lang.lib +      >> "b32.bc"
 echo vm.lib +        >> "b32.bc"
 echo rtl.lib +       >> "b32.bc"
 echo rdd.lib +       >> "b32.bc"
 echo macro.lib +     >> "b32.bc"
 echo pp.lib +        >> "b32.bc"
 echo dbfntx.lib +    >> "b32.bc"
 echo dbfdbt.lib +    >> "b32.bc"
 echo dbffpt.lib +    >> "b32.bc"
 echo "C:\xHarbour997\lib\tip.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\dbfcdx.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\dbffpt.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\WVWTOOLS.LIB" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\fbclient_bc.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\fbclient_ms.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\libmysql.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\libpq.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\oci.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\odbccp32.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\sql.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\codepage.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\common.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\ct.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\dbfntx.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\gtwin.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\hbsix.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\hsx.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\lang.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\libmisc.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\macro.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\pcrepos.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\pp.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\rdd.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\rtl.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\vm.lib" +   >> "b32.bc"
 echo common.lib +    >> "b32.bc"
 echo gtwin.lib +  >> "b32.bc"
 echo codepage.lib +  >> "b32.bc"
 echo ct.lib +     >> "b32.bc"
 echo tip.lib +     >> "b32.bc"
 echo hsx.lib +     >> "b32.bc"
 echo pcrepos.lib +     >> "b32.bc"
 echo hbsix.lib +     >> "b32.bc"
 echo cw32.lib +      >> "b32.bc"
 echo import32.lib +  >> "b32.bc"
 echo rasapi32.lib + >> "b32.bc"
 echo nddeapi.lib + >> "b32.bc"
 echo iphlpapi.lib + >> "b32.bc"
 echo , >> "b32.bc"

REM - XHarbour.xCompiler.prg(286) @ 10:57:10:420
ECHO .ÿ
ECHO * (7/7) Linkando htiplug.EXE
 ILINK32 @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
