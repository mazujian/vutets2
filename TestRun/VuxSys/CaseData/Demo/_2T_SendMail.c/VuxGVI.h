

#ifndef __VUX_GLOBAL_VAR_INIT_H__
#define __VUX_GLOBAL_VAR_INIT_H__

//$$VUNIT(BEGIN,FPDEFINE/)
//$$VUNIT(END,FPDEFINE/)


static void VuxCallSetUserFp()
{
    //$$VUNIT(BEGIN,FPCALL/)
    //$$VUNIT(END,FPCALL/)
}

static void VuxGlobalVarInit()
{
    //$$VUNIT(BEGIN,GLOBALVAR/g_sucess_count)
    extern int g_sucess_count;
    TDG_INIT_GRID("int", g_sucess_count, g_sucess_count, 0);
    //$$VUNIT(END,GLOBALVAR/g_sucess_count)

    //$$VUNIT(BEGIN,GLOBALVAR/g_failed_count)
    extern int g_failed_count;
    TDG_INIT_GRID("int", g_failed_count, g_failed_count, 0);
    //$$VUNIT(END,GLOBALVAR/g_failed_count)

    //$$VUNIT(BEGIN,GLOBALVAR/) 
    //$$VUNIT(END,GLOBALVAR/)
}

#define VUX_SET_USERF_DEFINED 1
#define VUX_GVAR_INIT_DEFINED 1

#endif


