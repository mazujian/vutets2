
#ifndef __MCK_VC98_INCLUDE_STDIO_H__
#define __MCK_VC98_INCLUDE_STDIO_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/fopen(const char*,const char*))
#undef fopen
static FILE* __cdecl vmck_fopen(const char* arg_1,const char* arg_2)
{void* vumckrt=0; VUMCKDS vumckds[2]={1,&arg_1,2,&arg_2}; if(VuxMock("fopen",&vumckrt,vumckds,2)) return *(FILE**)vumckrt;{
    return fopen(arg_1,arg_2);}}
//$$VUNIT(END,VMOCKDEFINE/fopen(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)


#endif