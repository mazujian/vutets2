
#ifndef __MCK__COMPILER_VC2015_MINI_INCLUDE_UCRT_STDIO_H__
#define __MCK__COMPILER_VC2015_MINI_INCLUDE_UCRT_STDIO_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/fopen(char const*,char const*))
#ifdef VUser_vmck_fopen
#undef fopen
static FILE* __cdecl vmck_fopen(char const* _FileName,char const* _Mode)
{void* vumckrt=0; VUMCKDS vumckds[2]={1,&_FileName,2,&_Mode}; if(VuxMock("fopen",&vumckrt,vumckds,2)) return *(FILE**)vumckrt;{
    return fopen(_FileName,_Mode);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fopen(char const*,char const*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "corecrt.h"
#include "corecrt_wstdio.h"

#endif