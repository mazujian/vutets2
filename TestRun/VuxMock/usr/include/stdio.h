
#ifndef __MCK_USR_INCLUDE_STDIO_H__
#define __MCK_USR_INCLUDE_STDIO_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/fopen(const char*,const char*))
#ifdef VUser_vmck_fopen
#undef fopen
static FILE* vmck_fopen(const char* _name,const char* _type)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","_name",(const void*)&_name},{2,"char*","_type",(const void*)&_type}}; if(VuxMck("fopen",&vmckrt,vmckds,2,"",1147,0,4)) return *(FILE**)vmckrt;{
    return fopen(_name,_type);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fopen(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "_ansi.h"
#include "VuxMock/lib/gcc/i686-pc-cygwin/4.5.3/include/stddef.h"
#include "VuxMock/lib/gcc/i686-pc-cygwin/4.5.3/include/stdarg.h"
#include "VuxMock/usr/include/sys/reent.h"
#include "VuxMock/usr/include/sys/types.h"
#include "VuxMock/usr/include/sys/stdio.h"

#endif