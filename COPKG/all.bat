@echo off
setlocal

if "%1"=="clean" goto :clean
if "%1"=="noclean" (
	set __NOCLEAN__=true
	shift)

copy ..\gettext-runtime\intl\libgnuintl.h.in ..\gettext-runtime\intl\libintl.h

setlocal
call "C:\Program Files (x86)\Microsoft Visual Studio 11.0\VC\vcvarsall.bat" x86
call :build Win32 Release v110
endlocal

setlocal
call "C:\Program Files (x86)\Microsoft Visual Studio 10.0\VC\vcvarsall.bat" x86
call :build Win32 Release v100
endlocal

if "__NOCLEAN__"=="true" goto :eof

goto :clean

:build
msbuild /P:Platform=%1 /P:Configuration=%2 /P:PlatformToolset=%3 gettext\gettext.sln
goto :eof

:clean
rd /s /q gettext\libintl\v100
rd /s /q gettext\libintl\v110

