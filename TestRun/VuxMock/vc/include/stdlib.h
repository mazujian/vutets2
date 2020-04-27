
#ifndef __MCK_VC_INCLUDE_STDLIB_H__
#define __MCK_VC_INCLUDE_STDLIB_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/malloc(size_t))
#undef malloc
static void* __cdecl vmck_malloc(size_t _Size)
{void* vumckrt=0; if(VuxMock("malloc",&vumckrt,0,0)) return *(void**)vumckrt;{
    return malloc(_Size);}}
//$$VUNIT(END,VMOCKDEFINE/malloc(size_t))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "crtdefs.h"
#include "limits.h"

#endif