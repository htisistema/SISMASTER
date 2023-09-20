ECHO OFF
DEL sismaster3.rar
rar A -p6821 sismaster3 *.PRG *.CLP *.BAT *.lnk *.xdev *.xtag *.LIB *.CH htilogo.jpg htiusu.jpg hti.jpg hti.ico 
rar A -p6821  C:\BACKUP_HTI\TELASREMOTA(PYTHON)\SISMASTER\*.* C:\HTI\PYTHON\SISMASTER\*.py C:\HTI\PYTHON\SISMASTER\*.ini
RAR A -p6821 sismaster3 *.bmp
ECHO Backup p/Caneta

DEL sismastex.rar
RAR A SISMASTEX sismaster.EXE htiplug.exe AnyDesk.exe rar.exe htilogo.jpg hti.jpg hti.ico htiusu.jpg xharbour.jpg firebird.JPG acbr.jpg lssendmail.exe ssleay32.dll libeay32.dll ibptax_dbf.rar AA_v3.exe instsvc.exe sacncm.rar rodape_pinpad.jpg IBPTAX_DBF.rar
RAR A SISMASTEX *.bmp


COPY sismaster3.rar E:
COPY sismastex.rar E:

COPY sismaster3.rar C:\BACKUP_HTI
COPY sismastex.rar C:\BACKUP_HTI

COPY sismaster3.rar %3
COPY sismastex.rar %3



