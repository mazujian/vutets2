
#ifndef __MCK__COMPILER_VC2015_MINI_INCLUDE_UCRT_STDLIB_H__
#define __MCK__COMPILER_VC2015_MINI_INCLUDE_UCRT_STDLIB_H__

//$$VUNIT(BEGIN,VMOCKDEFINE/malloc(size_t))
#undef malloc
static void* __cdecl vmck_malloc(size_t _Size)
{void* vumckrt=0; if(VuxMock("malloc",&vumckrt,0,0)) return *(void**)vumckrt;{
    return malloc(_Size);}}
//$$VUNIT(END,VMOCKDEFINE/malloc(size_t))


//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)
#include "corecrt.h"
#include "corecrt_malloc.h"
#include "corecrt_search.h"
#include "corecrt_wstdlib.h"
#include "VuxMock/_Compiler/VC2015-Mini/include/limits.h"

#endif