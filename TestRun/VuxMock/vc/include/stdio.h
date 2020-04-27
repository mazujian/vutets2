
#ifndef __MCK_VC_INCLUDE_STDIO_H__
#define __MCK_VC_INCLUDE_STDIO_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/fopen(const char*,const char*))
#undef fopen
static FILE* __cdecl vmck_fopen(const char* _Filename,const char* _Mode)
{void* vumckrt=0; VUMCKDS vumckds[2]={1,&_Filename,2,&_Mode}; if(VuxMock("fopen",&vumckrt,vumckds,2)) return *(FILE**)vumckrt;{
    return fopen(_Filename,_Mode);}}
//$$VUNIT(END,VMOCKDEFINE/fopen(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "crtdefs.h"
#include "swprintf.inl"

#endif