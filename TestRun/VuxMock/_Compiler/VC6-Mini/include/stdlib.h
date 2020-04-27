
#ifndef __MCK__COMPILER_VC6_MINI_INCLUDE_STDLIB_H__
#define __MCK__COMPILER_VC6_MINI_INCLUDE_STDLIB_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/malloc(size_t))
#ifdef VUser_vmck_malloc
#undef malloc
static void* __cdecl vmck_malloc(size_t arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"size_t","arg_1",(const void*)&arg_1}}; if(VuxMck("malloc",&vmckrt,vmckds,1,"",1146,0,4)) return *(void**)vmckrt;{
    return malloc(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/malloc(size_t))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)


#endif
