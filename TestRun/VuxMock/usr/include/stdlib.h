
#ifndef __MCK_USR_INCLUDE_STDLIB_H__
#define __MCK_USR_INCLUDE_STDLIB_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/malloc(size_t))
#ifdef VUser_vmck_malloc
#undef malloc
static void* vmck_malloc(size_t __size)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"size_t","__size",(const void*)&__size}}; if(VuxMck("malloc",&vmckrt,vmckds,1,"",1146,0,4)) return *(void**)vmckrt;{
    return malloc(__size);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/malloc(size_t))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "VuxMock/usr/include/machine/ieeefp.h"
#include "_ansi.h"
#include "VuxMock/lib/gcc/i686-pc-cygwin/4.5.3/include/stddef.h"
#include "VuxMock/usr/include/sys/reent.h"
#include "VuxMock/usr/include/machine/stdlib.h"
#include "alloca.h"

#endif