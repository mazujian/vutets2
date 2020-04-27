
#ifndef __MCK_VC98_INCLUDE_STRING_H__
#define __MCK_VC98_INCLUDE_STRING_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/strcmp(const char*,const char*))
#ifdef VUser_vmck_strcmp
#undef strcmp
static int __cdecl vmck_strcmp(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strcmp",&vmckrt,vmckds,2,"",1225,0,4)) return *(int*)vmckrt;{
    return strcmp(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strcmp(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)


#endif