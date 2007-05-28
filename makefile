#------------------------------------------------------------------------------
!ifndef ROOT
ROOT = $(MAKEDIR)\..
!endif
#------------------------------------------------------------------------------
!ifdef NO_FILEZILLA
EXTERNALDEFINES = NO_FILEZILLA;
!endif
#------------------------------------------------------------------------------
MAKE = $(ROOT)\bin\make.exe -$(MAKEFLAGS) -DEXTERNALDEFINES=$(EXTERNALDEFINES) -f$&.mak
BPR2MAK = $(ROOT)\bin\bpr2mak
#------------------------------------------------------------------------------
default: WinSCP.exe DragExt.dll WinSCP.com lib\DiscMon_B5.lib

WinSCP.exe: WinSCP.bpr
WinSCP.exe: lib\Moje_B5.lib lib\DragDrop_B5.lib lib\DriveDir_B5.lib
WinSCP.exe: lib\tb2k_cb6.lib lib\tbx_cb6.lib lib\ThemeManagerC6.lib
WinSCP.exe: lib\Putty.lib lib\FileZilla.lib
WinSCP.exe: lib\ScpCore.lib lib\RScpComp.lib lib\ScpForms.lib
 $(BPR2MAK) -tdefault.bmk WinSCP.bpr
 $(MAKE)

DragExt.dll: DragExt.bpr
 $(BPR2MAK) -tdefault.bmk DragExt.bpr
 $(MAKE)

WinSCP.com: Console.com
 ren Console.com WinSCP.com

Console.com: Console.bpr
 $(BPR2MAK) -tdefault.bmk Console.bpr
 $(MAKE)

{packages}.bpk{lib}.lib:
 cd packages
 $(BPR2MAK) -t..\default.bmk $.
 $(MAKE)
 cd ..

!ifdef NO_FILEZILLA
lib\FileZilla.lib:
 echo. > Fake.cpp
 $(ROOT)\bin\bcc32 -c Fake.cpp
 $(ROOT)\bin\tlib lib\FileZilla.lib +Fake.o
!endif

{}.bpk{lib}.lib:
 $(BPR2MAK) -tdefault.bmk $.
 $(MAKE)

{}.bpr{lib}.lib:
 $(BPR2MAK) -tlib.bmk $.
 $(MAKE)
