
#ifndef __MCK__COMPILER_GCC_4_INCLUDE_GLIBC_STDIO_H__
#define __MCK__COMPILER_GCC_4_INCLUDE_GLIBC_STDIO_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/fopen(const char*,const char*))
#undef fopen
static FILE* vmck_fopen(const char* _name,const char* _type)
{void* vumckrt=0; VUMCKDS vumckds[2]={1,&_name,2,&_type}; if(VuxMock("fopen",&vumckrt,vumckds,2)) return *(FILE**)vumckrt;{
    return fopen(_name,_type);}}
//$$VUNIT(END,VMOCKDEFINE/fopen(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "_ansi.h"
#include "VuxMock/_Compiler/gcc_4/include/stddef.h"
#include "VuxMock/_Compiler/gcc_4/include/stdarg.h"
#include "VuxMock/_Compiler/gcc_4/include/sys/reent.h"
#include "VuxMock/_Compiler/gcc_4/include/sys/types.h"
#include "VuxMock/_Compiler/gcc_4/include/sys/stdio.h"

#endif