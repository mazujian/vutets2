

#ifndef __VUX_GLOBAL_VAR_INIT_H__
#define __VUX_GLOBAL_VAR_INIT_H__

//$$VUNIT(BEGIN,FPDEFINE/fp58e6fb42)
static int fp58e6fb42(int a,int b)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",&a},{2,"int","b",&b}}; if(VuxMck("pFunc",&vmckrt,vmckds,2,"",318,0,2)) return *(int*)vmckrt;{
    return 0;
}}
//$$VUNIT(END,FPDEFINE/fp58e6fb42)


//$$VUNIT(BEGIN,FPDEFINE/fp6447ee83)
static int fp6447ee83(int a,int b)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",&a},{2,"int","b",&b}}; if(VuxMck("pFunc2",&vmckrt,vmckds,2,"",319,0,2)) return *(int*)vmckrt;{
    return 0;
}}
//$$VUNIT(END,FPDEFINE/fp6447ee83)


//$$VUNIT(BEGIN,FPDEFINE/) 
//$$VUNIT(END,FPDEFINE/)


static void VuxCallSetUserFp()
{
    //$$VUNIT(BEGIN,FPCALL/fp58e6fb42)
    VuxSetUserFuncPtr(fp58e6fb42);
    //$$VUNIT(END,FPCALL/fp58e6fb42)

    //$$VUNIT(BEGIN,FPCALL/fp6447ee83)
    VuxSetUserFuncPtr(fp6447ee83);
    //$$VUNIT(END,FPCALL/fp6447ee83)

    //$$VUNIT(BEGIN,FPCALL/) 
    //$$VUNIT(END,FPCALL/)
}

static void VuxGlobalVarInit()
{
    //$$VUNIT(BEGIN,GLOBALVAR/gSData)
    TDG_INIT_GRID("SDATA", gSData, gSData, 0);
    //$$VUNIT(END,GLOBALVAR/gSData)

    //$$VUNIT(BEGIN,GLOBALVAR/gpSData)
    TDG_INIT_GRID("SDATA*", gpSData, gpSData, 0);
    //$$VUNIT(END,GLOBALVAR/gpSData)

    //$$VUNIT(BEGIN,GLOBALVAR/_objData1)
    TDG_INIT_GRID("unsigned char*", _objData1, _objData1, 0);
    //$$VUNIT(END,GLOBALVAR/_objData1)

    //$$VUNIT(BEGIN,GLOBALVAR/_objData2)
    TDG_INIT_GRID("unsigned char*", _objData2, _objData2, 0);
    //$$VUNIT(END,GLOBALVAR/_objData2)

    //$$VUNIT(BEGIN,GLOBALVAR/_objData3)
    TDG_INIT_GRID("unsigned char*", _objData3, _objData3, 0);
    //$$VUNIT(END,GLOBALVAR/_objData3)

    //$$VUNIT(BEGIN,GLOBALVAR/_objData4)
    TDG_INIT_GRID("unsigned char*", _objData4, _objData4, 0);
    //$$VUNIT(END,GLOBALVAR/_objData4)


    //$$VUNIT(BEGIN,GLOBALVAR/_0xB0200000)
    TDG_INIT_GRID("unsigned int*", _0xB0200000, _0xB0200000, 0);
    //$$VUNIT(END,GLOBALVAR/_0xB0200000)

    //$$VUNIT(BEGIN,GLOBALVAR/) 
    //$$VUNIT(END,GLOBALVAR/)
}

#define VUX_SET_USERF_DEFINED 1
#define VUX_GVAR_INIT_DEFINED 1

#endif


