
//VuxInter/Demo/autocase.c/ac21_strlen_ce5c47b3.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac21_strlen(const char*))
#ifdef _VUDEBUG
static int ac21_strlen_vpls_(const char* str){ VuxDbgBrkP()
{
    int a = strlen(str);
    if(a > 10)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}}
#else
static int ac21_strlen_vpls_(const char* str){__VUFNINFO__("ac21_strlen","int",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int a = strlen(str); VUXLV("int",a,1);
    if((VUXRCS0(1,2)&&(a > 10)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(3,4);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}
#endif

static int ac21_strlen_vpls(const char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac21_strlen(str);}
	else if(VuxIsRepeatRun()) {return ac21_strlen_vpls_(str);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac21_strlen_vpls_(str) : ac21_strlen(str);
#else
    {int vuxRet = ac21_strlen_vpls_(str);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac21_strlen(const char*))
