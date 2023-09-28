@ECHO OFF
REM Gerado pela xDev Studio v0.70 as 27/09/2023 @ 10:14:43
REM Compilador .: HTISISTEMAS
REM Destino ....: C:\HTI\SISMASTER\sismaster.EXE
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files\ImageMagick-7.1.0-Q16-HDRI;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Program Files\Git\cmd;C:\Users\Helio\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\;C:\Users\Helio\AppData\Local\Microsoft\WindowsApps;C:\Program Files\JetBrains\PyCharm Community Edition 2022.2.3\bin;;C:\Users\Helio\AppData\Local\GitHubDesktop\bin
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HTI\SISMASTER\ch;C:\Borland\BCC55\Include;C:\HTI\sismaster\CH;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HTI\SISMASTER\lib;C:\HTI\SISMASTER;
 SET OBJ=;c:\HTI\sismaster;

REM - XHarbour.xCompiler.prg(97) @ 10:14:43:710
ECHO .ÿ
ECHO * (001/135) Compilando SISMASTER.PRG
 harbour.exe ".\SISMASTER.PRG" /q /o".\SISMASTER.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:43:835
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SISMASTER.obj" >> "b32.bc"
 echo ".\SISMASTER.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:43:835
ECHO .ÿ
ECHO * (002/135) Compilando SISMASTER.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:43:897
ECHO .ÿ
ECHO * (003/135) Compilando MASTERDBF.PRG
 harbour.exe ".\MASTERDBF.PRG" /q /o".\MASTERDBF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:43:975
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MASTERDBF.obj" >> "b32.bc"
 echo ".\MASTERDBF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:43:975
ECHO .ÿ
ECHO * (004/135) Compilando MASTERDBF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:44:038
ECHO .ÿ
ECHO * (005/135) Compilando MASTERCFG.PRG
 harbour.exe ".\MASTERCFG.PRG" /q /o".\MASTERCFG.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:44:132
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MASTERCFG.obj" >> "b32.bc"
 echo ".\MASTERCFG.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:44:132
ECHO .ÿ
ECHO * (006/135) Compilando MASTERCFG.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:44:194
ECHO .ÿ
ECHO * (007/135) Compilando errorsys.prg
 harbour.exe ".\errorsys.prg" /q /o".\errorsys.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:44:257
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\errorsys.obj" >> "b32.bc"
 echo ".\errorsys.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:44:257
ECHO .ÿ
ECHO * (008/135) Compilando errorsys.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:44:335
ECHO .ÿ
ECHO * (009/135) Compilando MAST00.PRG
 harbour.exe ".\MAST00.000" /q /o".\MAST00.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:44:506
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST00.obj" >> "b32.bc"
 echo ".\MAST00.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:44:506
ECHO .ÿ
ECHO * (010/135) Compilando MAST00.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:44:569
ECHO .ÿ
ECHO * (011/135) Compilando mastercdx.prg
 harbour.exe ".\mastercdx.prg" /q /o".\mastercdx.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:44:631
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\mastercdx.obj" >> "b32.bc"
 echo ".\mastercdx.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:44:631
ECHO .ÿ
ECHO * (012/135) Compilando mastercdx.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:44:694
ECHO .ÿ
ECHO * (013/135) Compilando MAST130.PRG
 harbour.exe ".\MAST130.PRG" /q /o".\MAST130.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:44:756
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST130.obj" >> "b32.bc"
 echo ".\MAST130.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:44:756
ECHO .ÿ
ECHO * (014/135) Compilando MAST130.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:44:819
ECHO .ÿ
ECHO * (015/135) Compilando SACCID.PRG
 harbour.exe ".\SACCID.PRG" /q /o".\SACCID.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:44:881
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SACCID.obj" >> "b32.bc"
 echo ".\SACCID.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:44:881
ECHO .ÿ
ECHO * (016/135) Compilando SACCID.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:44:944
ECHO .ÿ
ECHO * (017/135) Compilando MAST110.PRG
 harbour.exe ".\MAST110.PRG" /q /o".\MAST110.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:45:011
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST110.obj" >> "b32.bc"
 echo ".\MAST110.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:45:011
ECHO .ÿ
ECHO * (018/135) Compilando MAST110.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:45:058
ECHO .ÿ
ECHO * (019/135) Compilando MAST120.PRG
 harbour.exe ".\MAST120.PRG" /q /o".\MAST120.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:45:120
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST120.obj" >> "b32.bc"
 echo ".\MAST120.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:45:120
ECHO .ÿ
ECHO * (020/135) Compilando MAST120.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:45:183
ECHO .ÿ
ECHO * (021/135) Compilando MAST200.PRG
 harbour.exe ".\MAST200.PRG" /q /o".\MAST200.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:45:386
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST200.obj" >> "b32.bc"
 echo ".\MAST200.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:45:386
ECHO .ÿ
ECHO * (022/135) Compilando MAST200.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:45:464
ECHO .ÿ
ECHO * (023/135) Compilando MAST201.PRG
 harbour.exe ".\MAST201.PRG" /q /o".\MAST201.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:45:527
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST201.obj" >> "b32.bc"
 echo ".\MAST201.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:45:527
ECHO .ÿ
ECHO * (024/135) Compilando MAST201.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:45:589
ECHO .ÿ
ECHO * (025/135) Compilando mast30.prg
 harbour.exe ".\mast30.prg" /q /o".\mast30.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:45:823
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\mast30.obj" >> "b32.bc"
 echo ".\mast30.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:45:823
ECHO .ÿ
ECHO * (026/135) Compilando mast30.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:45:886
ECHO .ÿ
ECHO * (027/135) Compilando MAST301.PRG
 harbour.exe ".\MAST301.PRG" /q /o".\MAST301.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:45:948
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST301.obj" >> "b32.bc"
 echo ".\MAST301.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:45:948
ECHO .ÿ
ECHO * (028/135) Compilando MAST301.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:46:011
ECHO .ÿ
ECHO * (029/135) Compilando MAST36.PRG
 harbour.exe ".\MAST36.PRG" /q /o".\MAST36.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:46:058
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST36.obj" >> "b32.bc"
 echo ".\MAST36.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:46:058
ECHO .ÿ
ECHO * (030/135) Compilando MAST36.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:46:120
ECHO .ÿ
ECHO * (031/135) Compilando MAST37.PRG
 harbour.exe ".\MAST37.PRG" /q /o".\MAST37.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:46:183
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST37.obj" >> "b32.bc"
 echo ".\MAST37.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:46:183
ECHO .ÿ
ECHO * (032/135) Compilando MAST37.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:46:245
ECHO .ÿ
ECHO * (033/135) Compilando MAST38.PRG
 harbour.exe ".\MAST38.PRG" /q /o".\MAST38.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:46:308
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST38.obj" >> "b32.bc"
 echo ".\MAST38.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:46:308
ECHO .ÿ
ECHO * (034/135) Compilando MAST38.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:46:370
ECHO .ÿ
ECHO * (035/135) Compilando SACREC.PRG
 harbour.exe ".\SACREC.PRG" /q /o".\SACREC.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:46:433
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SACREC.obj" >> "b32.bc"
 echo ".\SACREC.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:46:433
ECHO .ÿ
ECHO * (036/135) Compilando SACREC.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:46:511
ECHO .ÿ
ECHO * (037/135) Compilando CON22.PRG
 harbour.exe ".\CON22.PRG" /q /o".\CON22.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:46:573
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\CON22.obj" >> "b32.bc"
 echo ".\CON22.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:46:573
ECHO .ÿ
ECHO * (038/135) Compilando CON22.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:46:636
ECHO .ÿ
ECHO * (039/135) Compilando CON211.PRG
 harbour.exe ".\CON211.PRG" /q /o".\CON211.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:46:698
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\CON211.obj" >> "b32.bc"
 echo ".\CON211.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:46:698
ECHO .ÿ
ECHO * (040/135) Compilando CON211.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:46:761
ECHO .ÿ
ECHO * (041/135) Compilando SACRCCOM.PRG
 harbour.exe ".\SACRCCOM.PRG" /q /o".\SACRCCOM.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:46:823
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SACRCCOM.obj" >> "b32.bc"
 echo ".\SACRCCOM.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:46:823
ECHO .ÿ
ECHO * (042/135) Compilando SACRCCOM.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:46:886
ECHO .ÿ
ECHO * (043/135) Compilando SAC140.PRG
 harbour.exe ".\SAC140.PRG" /q /o".\SAC140.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:46:948
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC140.obj" >> "b32.bc"
 echo ".\SAC140.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:46:948
ECHO .ÿ
ECHO * (044/135) Compilando SAC140.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:47:011
ECHO .ÿ
ECHO * (045/135) Compilando SAC141.PRG
 harbour.exe ".\SAC141.PRG" /q /o".\SAC141.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:47:073
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC141.obj" >> "b32.bc"
 echo ".\SAC141.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:47:073
ECHO .ÿ
ECHO * (046/135) Compilando SAC141.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:47:136
ECHO .ÿ
ECHO * (047/135) Compilando SAC142.PRG
 harbour.exe ".\SAC142.PRG" /q /o".\SAC142.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:47:182
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC142.obj" >> "b32.bc"
 echo ".\SAC142.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:47:182
ECHO .ÿ
ECHO * (048/135) Compilando SAC142.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:47:245
ECHO .ÿ
ECHO * (049/135) Compilando MAST33.PRG
 harbour.exe ".\MAST33.PRG" /q /o".\MAST33.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:47:323
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST33.obj" >> "b32.bc"
 echo ".\MAST33.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:47:323
ECHO .ÿ
ECHO * (050/135) Compilando MAST33.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:47:386
ECHO .ÿ
ECHO * (051/135) Compilando MAST202.PRG
 harbour.exe ".\MAST202.PRG" /q /o".\MAST202.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:47:448
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST202.obj" >> "b32.bc"
 echo ".\MAST202.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:47:448
ECHO .ÿ
ECHO * (052/135) Compilando MAST202.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:47:511
ECHO .ÿ
ECHO * (053/135) Compilando MAST203.PRG
 harbour.exe ".\MAST203.PRG" /q /o".\MAST203.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:47:604
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST203.obj" >> "b32.bc"
 echo ".\MAST203.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:47:604
ECHO .ÿ
ECHO * (054/135) Compilando MAST203.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:47:667
ECHO .ÿ
ECHO * (055/135) Compilando MASTFUN.PRG
 harbour.exe ".\MASTFUN.PRG" /q /o".\MASTFUN.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:48:307
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MASTFUN.obj" >> "b32.bc"
 echo ".\MASTFUN.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:48:307
ECHO .ÿ
ECHO * (056/135) Compilando MASTFUN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:48:385
ECHO .ÿ
ECHO * (057/135) Compilando MAST341.PRG
 harbour.exe ".\MAST341.PRG" /q /o".\MAST341.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:48:448
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST341.obj" >> "b32.bc"
 echo ".\MAST341.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:48:448
ECHO .ÿ
ECHO * (058/135) Compilando MAST341.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:48:510
ECHO .ÿ
ECHO * (059/135) Compilando MAST204.PRG
 harbour.exe ".\MAST204.PRG" /q /o".\MAST204.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:48:557
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST204.obj" >> "b32.bc"
 echo ".\MAST204.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:48:557
ECHO .ÿ
ECHO * (060/135) Compilando MAST204.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:48:620
ECHO .ÿ
ECHO * (061/135) Compilando masterutil.prg
 harbour.exe ".\masterutil.prg" /q /o".\masterutil.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:48:682
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\masterutil.obj" >> "b32.bc"
 echo ".\masterutil.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:48:682
ECHO .ÿ
ECHO * (062/135) Compilando masterutil.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:48:745
ECHO .ÿ
ECHO * (063/135) Compilando master_dbf.prg
 harbour.exe ".\master_dbf.prg" /q /o".\master_dbf.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:48:791
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\master_dbf.obj" >> "b32.bc"
 echo ".\master_dbf.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:48:791
ECHO .ÿ
ECHO * (064/135) Compilando master_dbf.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:48:870
ECHO .ÿ
ECHO * (065/135) Compilando mastgrupo.prg
 harbour.exe ".\mastgrupo.prg" /q /o".\mastgrupo.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:48:916
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\mastgrupo.obj" >> "b32.bc"
 echo ".\mastgrupo.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:48:916
ECHO .ÿ
ECHO * (066/135) Compilando mastgrupo.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:48:979
ECHO .ÿ
ECHO * (067/135) Compilando mast50.prg
 harbour.exe ".\mast50.prg" /q /o".\mast50.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:49:041
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\mast50.obj" >> "b32.bc"
 echo ".\mast50.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:49:041
ECHO .ÿ
ECHO * (068/135) Compilando mast50.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:49:104
ECHO .ÿ
ECHO * (069/135) Compilando MAST51.PRG
 harbour.exe ".\MAST51.PRG" /q /o".\MAST51.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:49:166
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST51.obj" >> "b32.bc"
 echo ".\MAST51.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:49:166
ECHO .ÿ
ECHO * (070/135) Compilando MAST51.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:49:229
ECHO .ÿ
ECHO * (071/135) Compilando MAST2001.PRG
 harbour.exe ".\MAST2001.PRG" /q /o".\MAST2001.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:49:354
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST2001.obj" >> "b32.bc"
 echo ".\MAST2001.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:49:354
ECHO .ÿ
ECHO * (072/135) Compilando MAST2001.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:49:432
ECHO .ÿ
ECHO * (073/135) Compilando MAST610.PRG
 harbour.exe ".\MAST610.PRG" /q /o".\MAST610.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:49:526
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST610.obj" >> "b32.bc"
 echo ".\MAST610.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:49:526
ECHO .ÿ
ECHO * (074/135) Compilando MAST610.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:49:588
ECHO .ÿ
ECHO * (075/135) Compilando MAST40.PRG
 harbour.exe ".\MAST40.PRG" /q /o".\MAST40.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:49:666
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST40.obj" >> "b32.bc"
 echo ".\MAST40.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:49:666
ECHO .ÿ
ECHO * (076/135) Compilando MAST40.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:49:729
ECHO .ÿ
ECHO * (077/135) Compilando MAST52.PRG
 harbour.exe ".\MAST52.PRG" /q /o".\MAST52.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:49:791
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST52.obj" >> "b32.bc"
 echo ".\MAST52.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:49:791
ECHO .ÿ
ECHO * (078/135) Compilando MAST52.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:49:854
ECHO .ÿ
ECHO * (079/135) Compilando MAST53.PRG
 harbour.exe ".\MAST53.PRG" /q /o".\MAST53.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:49:916
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST53.obj" >> "b32.bc"
 echo ".\MAST53.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:49:916
ECHO .ÿ
ECHO * (080/135) Compilando MAST53.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:49:979
ECHO .ÿ
ECHO * (081/135) Compilando MAST2002.PRG
 harbour.exe ".\MAST2002.PRG" /q /o".\MAST2002.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:50:088
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST2002.obj" >> "b32.bc"
 echo ".\MAST2002.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:50:088
ECHO .ÿ
ECHO * (082/135) Compilando MAST2002.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:50:166
ECHO .ÿ
ECHO * (083/135) Compilando MAST19.PRG
 harbour.exe ".\MAST19.PRG" /q /o".\MAST19.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:50:229
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST19.obj" >> "b32.bc"
 echo ".\MAST19.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:50:229
ECHO .ÿ
ECHO * (084/135) Compilando MAST19.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:50:291
ECHO .ÿ
ECHO * (085/135) Compilando SACNFCE.prg
 harbour.exe ".\SACNFCE.prg" /q /o".\SACNFCE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:50:385
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SACNFCE.obj" >> "b32.bc"
 echo ".\SACNFCE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:50:385
ECHO .ÿ
ECHO * (086/135) Compilando SACNFCE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:50:463
ECHO .ÿ
ECHO * (087/135) Compilando SACTEF.PRG
 harbour.exe ".\SACTEF.PRG" /q /o".\SACTEF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:50:525
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SACTEF.obj" >> "b32.bc"
 echo ".\SACTEF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:50:525
ECHO .ÿ
ECHO * (088/135) Compilando SACTEF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:50:588
ECHO .ÿ
ECHO * (089/135) Compilando impacbr.prg
 harbour.exe ".\impacbr.prg" /q /o".\impacbr.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:50:650
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\impacbr.obj" >> "b32.bc"
 echo ".\impacbr.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:50:650
ECHO .ÿ
ECHO * (090/135) Compilando impacbr.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:50:713
ECHO .ÿ
ECHO * (091/135) Compilando sac_ncm.prg
 harbour.exe ".\sac_ncm.prg" /q /o".\sac_ncm.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:50:760
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\sac_ncm.obj" >> "b32.bc"
 echo ".\sac_ncm.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:50:760
ECHO .ÿ
ECHO * (092/135) Compilando sac_ncm.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:50:822
ECHO .ÿ
ECHO * (093/135) Compilando SAC211.PRG
 harbour.exe ".\SAC211.PRG" /q /o".\SAC211.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:50:900
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC211.obj" >> "b32.bc"
 echo ".\SAC211.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:50:900
ECHO .ÿ
ECHO * (094/135) Compilando SAC211.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:50:963
ECHO .ÿ
ECHO * (095/135) Compilando sacnf_e.prg
 harbour.exe ".\sacnf_e.prg" /q /o".\sacnf_e.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:51:041
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\sacnf_e.obj" >> "b32.bc"
 echo ".\sacnf_e.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:51:041
ECHO .ÿ
ECHO * (096/135) Compilando sacnf_e.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:51:103
ECHO .ÿ
ECHO * (097/135) Compilando SAC1OP.PRG
 harbour.exe ".\SAC1OP.PRG" /q /o".\SAC1OP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:51:166
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC1OP.obj" >> "b32.bc"
 echo ".\SAC1OP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:51:166
ECHO .ÿ
ECHO * (098/135) Compilando SAC1OP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:51:228
ECHO .ÿ
ECHO * (099/135) Compilando SAUTORIZA.PRG
 harbour.exe ".\SAUTORIZA.PRG" /q /o".\SAUTORIZA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:51:291
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAUTORIZA.obj" >> "b32.bc"
 echo ".\SAUTORIZA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:51:291
ECHO .ÿ
ECHO * (100/135) Compilando SAUTORIZA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:51:353
ECHO .ÿ
ECHO * (101/135) Compilando mastbal.prg
 harbour.exe ".\mastbal.prg" /q /o".\mastbal.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:51:400
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\mastbal.obj" >> "b32.bc"
 echo ".\mastbal.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:51:400
ECHO .ÿ
ECHO * (102/135) Compilando mastbal.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:51:463
ECHO .ÿ
ECHO * (103/135) Compilando sac31_1.prg
 harbour.exe ".\sac31_1.prg" /q /o".\sac31_1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:51:525
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\sac31_1.obj" >> "b32.bc"
 echo ".\sac31_1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:51:525
ECHO .ÿ
ECHO * (104/135) Compilando sac31_1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:51:588
ECHO .ÿ
ECHO * (105/135) Compilando SAC5DES.PRG
 harbour.exe ".\SAC5DES.PRG" /q /o".\SAC5DES.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:51:650
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC5DES.obj" >> "b32.bc"
 echo ".\SAC5DES.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:51:650
ECHO .ÿ
ECHO * (106/135) Compilando SAC5DES.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:51:713
ECHO .ÿ
ECHO * (107/135) Compilando SAC5NOT1.PRG
 harbour.exe ".\SAC5NOT1.PRG" /q /o".\SAC5NOT1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:51:775
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC5NOT1.obj" >> "b32.bc"
 echo ".\SAC5NOT1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:51:775
ECHO .ÿ
ECHO * (108/135) Compilando SAC5NOT1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:51:838
ECHO .ÿ
ECHO * (109/135) Compilando SAC5NOT2.PRG
 harbour.exe ".\SAC5NOT2.PRG" /q /o".\SAC5NOT2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:51:900
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC5NOT2.obj" >> "b32.bc"
 echo ".\SAC5NOT2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:51:900
ECHO .ÿ
ECHO * (110/135) Compilando SAC5NOT2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:51:963
ECHO .ÿ
ECHO * (111/135) Compilando SAC5NOT3.PRG
 harbour.exe ".\SAC5NOT3.PRG" /q /o".\SAC5NOT3.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:52:009
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC5NOT3.obj" >> "b32.bc"
 echo ".\SAC5NOT3.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:52:009
ECHO .ÿ
ECHO * (112/135) Compilando SAC5NOT3.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:52:072
ECHO .ÿ
ECHO * (113/135) Compilando sac5not4.prg
 harbour.exe ".\sac5not4.prg" /q /o".\sac5not4.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:52:134
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\sac5not4.obj" >> "b32.bc"
 echo ".\sac5not4.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:52:134
ECHO .ÿ
ECHO * (114/135) Compilando sac5not4.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:52:197
ECHO .ÿ
ECHO * (115/135) Compilando SAC5NOT6.PRG
 harbour.exe ".\SAC5NOT6.PRG" /q /o".\SAC5NOT6.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:52:259
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC5NOT6.obj" >> "b32.bc"
 echo ".\SAC5NOT6.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:52:259
ECHO .ÿ
ECHO * (116/135) Compilando SAC5NOT6.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:52:322
ECHO .ÿ
ECHO * (117/135) Compilando SAC5NOT7.PRG
 harbour.exe ".\SAC5NOT7.PRG" /q /o".\SAC5NOT7.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:52:384
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC5NOT7.obj" >> "b32.bc"
 echo ".\SAC5NOT7.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:52:384
ECHO .ÿ
ECHO * (118/135) Compilando SAC5NOT7.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:52:447
ECHO .ÿ
ECHO * (119/135) Compilando SAC5NOT8.PRG
 harbour.exe ".\SAC5NOT8.PRG" /q /o".\SAC5NOT8.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:52:494
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\SAC5NOT8.obj" >> "b32.bc"
 echo ".\SAC5NOT8.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:52:494
ECHO .ÿ
ECHO * (120/135) Compilando SAC5NOT8.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:52:556
ECHO .ÿ
ECHO * (121/135) Compilando HTIPLUB.PRG
 harbour.exe ".\HTIPLUB.PRG" /q /o".\HTIPLUB.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:52:697
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\HTIPLUB.obj" >> "b32.bc"
 echo ".\HTIPLUB.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:52:697
ECHO .ÿ
ECHO * (122/135) Compilando HTIPLUB.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:52:759
ECHO .ÿ
ECHO * (123/135) Compilando MASTEXCE.PRG
 harbour.exe ".\MASTEXCE.PRG" /q /o".\MASTEXCE.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:53:103
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MASTEXCE.obj" >> "b32.bc"
 echo ".\MASTEXCE.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:53:103
ECHO .ÿ
ECHO * (124/135) Compilando MASTEXCE.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:53:165
ECHO .ÿ
ECHO * (125/135) Compilando MAST54.PRG
 harbour.exe ".\MAST54.PRG" /q /o".\MAST54.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:53:212
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST54.obj" >> "b32.bc"
 echo ".\MAST54.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:53:212
ECHO .ÿ
ECHO * (126/135) Compilando MAST54.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:53:275
ECHO .ÿ
ECHO * (127/135) Compilando MAST700.PRG
 harbour.exe ".\MAST700.PRG" /q /o".\MAST700.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:53:384
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST700.obj" >> "b32.bc"
 echo ".\MAST700.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:53:384
ECHO .ÿ
ECHO * (128/135) Compilando MAST700.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:53:447
ECHO .ÿ
ECHO * (129/135) Compilando MAST710.PRG
 harbour.exe ".\MAST710.PRG" /q /o".\MAST710.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:53:525
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST710.obj" >> "b32.bc"
 echo ".\MAST710.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:53:525
ECHO .ÿ
ECHO * (130/135) Compilando MAST710.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:53:587
ECHO .ÿ
ECHO * (131/135) Compilando MAST750.PRG
 harbour.exe ".\MAST750.PRG" /q /o".\MAST750.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:53:681
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MAST750.obj" >> "b32.bc"
 echo ".\MAST750.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:53:681
ECHO .ÿ
ECHO * (132/135) Compilando MAST750.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 10:14:53:743
ECHO .ÿ
ECHO * (133/135) Compilando MASTCUSTO.PRG
 harbour.exe ".\MASTCUSTO.000" /q /o".\MASTCUSTO.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 10:14:54:165
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" >> "b32.bc"
 echo -o".\MASTCUSTO.obj" >> "b32.bc"
 echo ".\MASTCUSTO.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 10:14:54:165
ECHO .ÿ
ECHO * (134/135) Compilando MASTCUSTO.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(285) @ 10:14:54:431
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;.\CH;" + > "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMASTER;;;c:\HTI\sismaster;" + >> "b32.bc"
 echo -Gn -M -m  -Tpe -s + >> "b32.bc"
 echo c0w32.obj +     >> "b32.bc"
 echo ".\SISMASTER.obj"  +  >> "b32.bc"
 echo ".\MASTERDBF.obj"  +  >> "b32.bc"
 echo ".\MASTERCFG.obj"  +  >> "b32.bc"
 echo ".\errorsys.obj"  +  >> "b32.bc"
 echo ".\MAST00.obj"  +  >> "b32.bc"
 echo ".\mastercdx.obj"  +  >> "b32.bc"
 echo ".\MAST130.obj"  +  >> "b32.bc"
 echo ".\SACCID.obj"  +  >> "b32.bc"
 echo ".\MAST110.obj"  +  >> "b32.bc"
 echo ".\MAST120.obj"  +  >> "b32.bc"
 echo ".\MAST200.obj"  +  >> "b32.bc"
 echo ".\MAST201.obj"  +  >> "b32.bc"
 echo ".\mast30.obj"  +  >> "b32.bc"
 echo ".\MAST301.obj"  +  >> "b32.bc"
 echo ".\MAST36.obj"  +  >> "b32.bc"
 echo ".\MAST37.obj"  +  >> "b32.bc"
 echo ".\MAST38.obj"  +  >> "b32.bc"
 echo ".\SACREC.obj"  +  >> "b32.bc"
 echo ".\CON22.obj"  +  >> "b32.bc"
 echo ".\CON211.obj"  +  >> "b32.bc"
 echo ".\SACRCCOM.obj"  +  >> "b32.bc"
 echo ".\SAC140.obj"  +  >> "b32.bc"
 echo ".\SAC141.obj"  +  >> "b32.bc"
 echo ".\SAC142.obj"  +  >> "b32.bc"
 echo ".\MAST33.obj"  +  >> "b32.bc"
 echo ".\MAST202.obj"  +  >> "b32.bc"
 echo ".\MAST203.obj"  +  >> "b32.bc"
 echo ".\MASTFUN.obj"  +  >> "b32.bc"
 echo ".\MAST341.obj"  +  >> "b32.bc"
 echo ".\MAST204.obj"  +  >> "b32.bc"
 echo ".\masterutil.obj"  +  >> "b32.bc"
 echo ".\master_dbf.obj"  +  >> "b32.bc"
 echo ".\mastgrupo.obj"  +  >> "b32.bc"
 echo ".\mast50.obj"  +  >> "b32.bc"
 echo ".\MAST51.obj"  +  >> "b32.bc"
 echo ".\MAST2001.obj"  +  >> "b32.bc"
 echo ".\MAST610.obj"  +  >> "b32.bc"
 echo ".\MAST40.obj"  +  >> "b32.bc"
 echo ".\MAST52.obj"  +  >> "b32.bc"
 echo ".\MAST53.obj"  +  >> "b32.bc"
 echo ".\MAST2002.obj"  +  >> "b32.bc"
 echo ".\MAST19.obj"  +  >> "b32.bc"
 echo ".\SACNFCE.obj"  +  >> "b32.bc"
 echo ".\SACTEF.obj"  +  >> "b32.bc"
 echo ".\impacbr.obj"  +  >> "b32.bc"
 echo ".\sac_ncm.obj"  +  >> "b32.bc"
 echo ".\SAC211.obj"  +  >> "b32.bc"
 echo ".\sacnf_e.obj"  +  >> "b32.bc"
 echo ".\SAC1OP.obj"  +  >> "b32.bc"
 echo ".\SAUTORIZA.obj"  +  >> "b32.bc"
 echo ".\mastbal.obj"  +  >> "b32.bc"
 echo ".\sac31_1.obj"  +  >> "b32.bc"
 echo ".\SAC5DES.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT1.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT2.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT3.obj"  +  >> "b32.bc"
 echo ".\sac5not4.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT6.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT7.obj"  +  >> "b32.bc"
 echo ".\SAC5NOT8.obj"  +  >> "b32.bc"
 echo ".\HTIPLUB.obj"  +  >> "b32.bc"
 echo ".\MASTEXCE.obj"  +  >> "b32.bc"
 echo ".\MAST54.obj"  +  >> "b32.bc"
 echo ".\MAST700.obj"  +  >> "b32.bc"
 echo ".\MAST710.obj"  +  >> "b32.bc"
 echo ".\MAST750.obj"  +  >> "b32.bc"
 echo ".\MASTCUSTO.obj", +  >> "b32.bc"
 echo ".\sismaster.EXE", +    >> "b32.bc"
 echo ".\sismaster.map", +    >> "b32.bc"
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
 echo "C:\xharbour\lib\ct.lib" +   >> "b32.bc"
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

REM - XHarbour.xCompiler.prg(286) @ 10:14:54:431
ECHO .ÿ
ECHO * (135/135) Linkando sismaster.EXE
 ILINK32 @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
