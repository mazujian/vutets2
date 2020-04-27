
//VuxInter/Demo/autocase.c/ac02_middle_var01_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac02_middle_var01(int))
#ifdef _VUDEBUG
static int ac02_middle_var01_vpls_(int a){ VuxDbgBrkP()
{
    int b = a;
    b++;
    if(b > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}}
#else
static int ac02_middle_var01_vpls_(int a){__VUFNINFO__("ac02_middle_var01","int",0);VuxDbp(0,0,5);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int b = a; VUXLV("int",b,1);
VUXRLNF(2,2);    b++;
    if((VUXRCS0(1,3)&&(b > 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(3,4);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(4,5);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}
#endif

static int ac02_middle_var01_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac02_middle_var01(a);}
	else if(VuxIsRepeatRun()) {return ac02_middle_var01_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac02_middle_var01_vpls_(a) : ac02_middle_var01(a);
#else
    {int vuxRet = ac02_middle_var01_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac02_middle_var01(int))
