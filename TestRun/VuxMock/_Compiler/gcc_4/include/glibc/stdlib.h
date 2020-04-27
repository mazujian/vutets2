
#ifndef __MCK__COMPILER_GCC_4_INCLUDE_GLIBC_STDLIB_H__
#define __MCK__COMPILER_GCC_4_INCLUDE_GLIBC_STDLIB_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/malloc(size_t))
#undef malloc
static void* vmck_malloc(size_t __size)// throw ()
{void* vumckrt=0; if(VuxMock("malloc",&vumckrt,0,0)) return *(void**)vumckrt;{
    return malloc(__size);}}
//$$VUNIT(END,VMOCKDEFINE/malloc(size_t))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "VuxMock/_Compiler/gcc_4/include/machine/ieeefp.h"
#include "_ansi.h"
#include "VuxMock/_Compiler/gcc_4/include/stddef.h"
#include "VuxMock/_Compiler/gcc_4/include/sys/reent.h"
#include "VuxMock/_Compiler/gcc_4/include/machine/stdlib.h"
#include "alloca.h"

#endif