
//VuxInter/Demo/autocase.c/ac51_const_global_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac51_const_global(int))
#ifdef _VUDEBUG
static int ac51_const_global_vpls_(int b){ VuxDbgBrkP()
{
    int a = gArray[1];
    if(a > b)
    {
        return 1;
    }
    return 0;
}}
#else
static int ac51_const_global_vpls_(int b){__VUFNINFO__("ac51_const_global","int",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int a = gArray[1]; VUXLV("int",a,1);
    if((VUXRCS0(1,2)&&(a > b)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(3);VUXRLNF(3,4);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int ac51_const_global_vpls(int b)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac51_const_global(b);}
	else if(VuxIsRepeatRun()) {return ac51_const_global_vpls_(b);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac51_const_global_vpls_(b) : ac51_const_global(b);
#else
    {int vuxRet = ac51_const_global_vpls_(b);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac51_const_global(int))
