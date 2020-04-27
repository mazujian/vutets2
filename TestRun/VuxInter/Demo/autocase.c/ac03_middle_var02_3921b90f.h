
//VuxInter/Demo/autocase.c/ac03_middle_var02_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac03_middle_var02(int))
#ifdef _VUDEBUG
static int ac03_middle_var02_vpls_(int a){ VuxDbgBrkP()
{
    int b = gg;
    b++;
    if(b > 10)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}}
#else
static int ac03_middle_var02_vpls_(int a){__VUFNINFO__("ac03_middle_var02","int",0);VuxDbp(0,0,5);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int b = gg; VUXLV("int",b,1);
VUXRLNF(2,2);    b++;
    if((VUXRCS0(1,3)&&(b > 10)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(3,4);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(4,5);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}
#endif

static int ac03_middle_var02_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac03_middle_var02(a);}
	else if(VuxIsRepeatRun()) {return ac03_middle_var02_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac03_middle_var02_vpls_(a) : ac03_middle_var02(a);
#else
    {int vuxRet = ac03_middle_var02_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac03_middle_var02(int))
