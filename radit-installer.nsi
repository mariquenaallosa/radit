; Radit Installer Script for NSIS
; This script creates an installer for the Radit application on Windows.

!include "MUI2.nsh"

; General Configuration
Name "Radit"
OutFile "radit-installer.exe"
Unicode True
InstallDir "$PROGRAMFILES\Radit"
InstallDirRegKey HKCU "Software\Radit" ""
RequestExecutionLevel admin

; Modern UI Configuration
!define MUI_ABORTWARNING
!define MUI_ICON "radit.ico" ; Assuming you have an icon file
!define MUI_UNICON "radit.ico"

; Pages
!insertmacro MUI_PAGE_WELCOME
!insertmacro MUI_PAGE_LICENSE "LICENSE" ; Assuming LICENSE file exists
!insertmacro MUI_PAGE_DIRECTORY
!insertmacro MUI_PAGE_INSTFILES
!insertmacro MUI_PAGE_FINISH

!insertmacro MUI_UNPAGE_WELCOME
!insertmacro MUI_UNPAGE_CONFIRM
!insertmacro MUI_UNPAGE_INSTFILES
!insertmacro MUI_UNPAGE_FINISH

; Languages
!insertmacro MUI_LANGUAGE "English"
!insertmacro MUI_LANGUAGE "Spanish"

; Installer Sections
Section "Radit" SecRadit
  SectionIn RO

  SetOutPath "$INSTDIR"

  ; Main executable
  File "radit.exe"

  ; Required DLLs
  File "bass.dll"
  File "tag.dll"
  File "qvumeter.dll" ; Adjust if different

  ; Qt DLLs (copy from Qt installation)
  File "QtCore4.dll"
  File "QtGui4.dll"
  File "QtSql4.dll"

  ; Other files
  File "radit.rc" ; Or other resources

  ; Create desktop shortcut
  CreateShortCut "$DESKTOP\Radit.lnk" "$INSTDIR\radit.exe" "" "$INSTDIR\radit.exe" 0

  ; Create start menu entry
  CreateDirectory "$SMPROGRAMS\Radit"
  CreateShortCut "$SMPROGRAMS\Radit\Radit.lnk" "$INSTDIR\radit.exe"
  CreateShortCut "$SMPROGRAMS\Radit\Uninstall.lnk" "$INSTDIR\Uninstall.exe"

  ; Registry information for add/remove programs
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Radit" "DisplayName" "Radit"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Radit" "UninstallString" "$INSTDIR\Uninstall.exe"
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Radit" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Radit" "NoRepair" 1

  ; Write uninstaller
  WriteUninstaller "$INSTDIR\Uninstall.exe"

SectionEnd

; Uninstaller Section
Section "Uninstall"

  Delete "$INSTDIR\Uninstall.exe"
  Delete "$INSTDIR\radit.exe"
  Delete "$INSTDIR\bass.dll"
  Delete "$INSTDIR\tag.dll"
  Delete "$INSTDIR\qvumeter.dll"
  Delete "$INSTDIR\QtCore4.dll"
  Delete "$INSTDIR\QtGui4.dll"
  Delete "$INSTDIR\QtSql4.dll"
  ; Delete other files as needed

  Delete "$DESKTOP\Radit.lnk"
  RMDir /r "$SMPROGRAMS\Radit"

  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\Radit"
  DeleteRegKey HKCU "Software\Radit"

  RMDir "$INSTDIR"

SectionEnd