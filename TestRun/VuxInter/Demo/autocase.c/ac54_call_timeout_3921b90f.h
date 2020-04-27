
//VuxInter/Demo/autocase.c/ac54_call_timeout_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac54_call_timeout(int))
#ifdef _VUDEBUG
static int ac54_call_timeout_vpls_(int a){ VuxDbgBrkP()
{
    int x = timeout(a);
    if(x > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}}
#else
static int ac54_call_timeout_vpls_(int a){__VUFNINFO__("ac54_call_timeout","int",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int x = timeout(a); VUXLV("int",x,1);
    if((VUXRCS0(1,2)&&(x > 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(3,4);        {int __vurtv__= 0;VUXFRTY();}
    }}
}}
#endif

static int ac54_call_timeout_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac54_call_timeout(a);}
	else if(VuxIsRepeatRun()) {return ac54_call_timeout_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac54_call_timeout_vpls_(a) : ac54_call_timeout(a);
#else
    {int vuxRet = ac54_call_timeout_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac54_call_timeout(int))
