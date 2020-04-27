
//VuxInter/Demo/autocase.c/ac41_fopen_ce5c47b3.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac41_fopen(const char*))
#ifdef _VUDEBUG
static int ac41_fopen_vpls_(const char* path){ VuxDbgBrkP()
{
    FILE* p_file = fopen(path, "rb+");
    if(p_file == 0)
    { 
        return 0;
    }
    
    return 1;
}}
#else
static int ac41_fopen_vpls_(const char* path){__VUFNINFO__("ac41_fopen","int",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    FILE* p_file = fopen(path, "rb+"); VUXLV("FILE*",p_file,1);
    if((VUXRCS0(1,2)&&(p_file == 0)&&VUXRC1(1)))
    {VUXRBR(2);{ 
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
    
VUXRB(3);VUXRLNF(3,4);    {int __vurtv__= 1;VUXFRTY();}
}}
#endif

static int ac41_fopen_vpls(const char* path)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac41_fopen(path);}
	else if(VuxIsRepeatRun()) {return ac41_fopen_vpls_(path);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac41_fopen_vpls_(path) : ac41_fopen(path);
#else
    {int vuxRet = ac41_fopen_vpls_(path);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac41_fopen(const char*))
