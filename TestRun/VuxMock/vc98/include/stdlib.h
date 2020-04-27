
#ifndef __MCK_VC98_INCLUDE_STDLIB_H__
#define __MCK_VC98_INCLUDE_STDLIB_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/malloc(size_t))
#undef malloc
static void* __cdecl vmck_malloc(size_t arg_1)
{void* vumckrt=0; if(VuxMock("malloc",&vumckrt,0,0)) return *(void**)vumckrt;{
    return malloc(arg_1);}}
//$$VUNIT(END,VMOCKDEFINE/malloc(size_t))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)


#endif