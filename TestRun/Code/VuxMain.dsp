# Microsoft Developer Studio Project File - Name="VuxMain" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=VuxMain - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "VuxMain.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "VuxMain.mak" CFG="VuxMain - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "VuxMain - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "VuxMain - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "VuxMain - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x804 /d "NDEBUG"
# ADD RSC /l 0x804 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "VuxMain - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /GX /ZI /Od /I "C:/Visual_Unit_4/Samples/DemoTest/Demo/TestProject/" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD BASE RSC /l 0x804 /d "_DEBUG"
# ADD RSC /l 0x804 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 vuxwin.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept /libpath:"C:/Visual_Unit_4/lib"

!ENDIF 

# Begin Target

# Name "VuxMain - Win32 Release"
# Name "VuxMain - Win32 Debug"
# Begin Source File

SOURCE=.\Demo\_1T_Begin.c
# End Source File
# Begin Source File

SOURCE=.\Demo\_1U_Begin.c
# End Source File
# Begin Source File

SOURCE=.\Demo\_1Y_Begin.c
# End Source File
# Begin Source File

SOURCE=.\Demo\_2T_SendMail.c
# End Source File
# Begin Source File

SOURCE=.\Demo\_2U_SendMail.c
# End Source File
# Begin Source File

SOURCE=.\Demo\_2Y_SendMail.c
# End Source File
# Begin Source File

SOURCE=.\Demo\_3T_MyClass.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_3U_MyClass.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_3Y_MyClass.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_4T_DataBasic.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_4U_DataBasic.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_5T_InsideIO.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_5U_InsideIO.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_6T_WhiteBox.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_6U_WhiteBox.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_7T_EditCaseCode.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_7U_EditCaseCode.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\_8Y_String.c
# End Source File
# Begin Source File

SOURCE=.\Demo\CList.h
# End Source File
# Begin Source File

SOURCE=.\Demo\CMapStringToPtr.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\CMapStringToPtr.h
# End Source File
# Begin Source File

SOURCE=.\Demo\CString.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\CString.h
# End Source File
# Begin Source File

SOURCE=.\Demo\DataBasic.h
# End Source File
# Begin Source File

SOURCE=.\Demo\InsideIO.h
# End Source File
# Begin Source File

SOURCE=.\Demo\InsideIO2.h
# End Source File
# Begin Source File

SOURCE=.\Demo\MyClass.h
# End Source File
# Begin Source File

SOURCE=.\Demo\MyClass2.h
# End Source File
# Begin Source File

SOURCE=.\Demo\MyClass3.h
# End Source File
# Begin Source File

SOURCE=.\Demo\SendMail.h
# End Source File
# Begin Source File

SOURCE=.\Demo\student.c
# End Source File
# Begin Source File

SOURCE=.\Demo\student.h
# End Source File
# Begin Source File

SOURCE=.\Demo\TypeDef.h
# End Source File
# Begin Source File

SOURCE=.\Demo\TypeDef2.h
# End Source File
# Begin Source File

SOURCE=.\VuxMain.cpp
# End Source File
# Begin Source File

SOURCE=.\Demo\WhiteBox.h
# End Source File
# Begin Source File

SOURCE=.\Demo\WhiteBox2.h
# End Source File
# End Target
# End Project
