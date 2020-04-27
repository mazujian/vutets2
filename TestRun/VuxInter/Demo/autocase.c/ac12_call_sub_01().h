
//VuxInter/Demo/autocase.c/ac12_call_sub_01().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac12_call_sub_01())
#ifdef _VUDEBUG
static int ac12_call_sub_01_vpls_(){ VuxDbgBrkP()
{
    int a = sub001();
    if(a > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}}
#else
static int ac12_call_sub_01_vpls_(){__VUFNINFO__("ac12_call_sub_01","int",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int a = sub001(); VUXLV("int",a,1);
    if((VUXRCS0(1,2)&&(a > 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(3,4);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}
#endif

static int ac12_call_sub_01_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac12_call_sub_01();}
	else if(VuxIsRepeatRun()) {return ac12_call_sub_01_vpls_();}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac12_call_sub_01_vpls_() : ac12_call_sub_01();
#else
    {int vuxRet = ac12_call_sub_01_vpls_();
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac12_call_sub_01())
