
//VuxInter/Demo/autocase.c/ac13_call_sub_02().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac13_call_sub_02())
#ifdef _VUDEBUG
static int ac13_call_sub_02_vpls_(){ VuxDbgBrkP()
{
    int a = 0;
    sub002(&a);
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
static int ac13_call_sub_02_vpls_(){__VUFNINFO__("ac13_call_sub_02","int",0);VuxDbp(0,0,5);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int a = 0; VUXLV("int",a,1);
VUXRLNF(2,2);    sub002(&a);
    if((VUXRCS0(1,3)&&(a > 10)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(3,4);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(4,5);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}
#endif

static int ac13_call_sub_02_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac13_call_sub_02();}
	else if(VuxIsRepeatRun()) {return ac13_call_sub_02_vpls_();}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac13_call_sub_02_vpls_() : ac13_call_sub_02();
#else
    {int vuxRet = ac13_call_sub_02_vpls_();
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac13_call_sub_02())
