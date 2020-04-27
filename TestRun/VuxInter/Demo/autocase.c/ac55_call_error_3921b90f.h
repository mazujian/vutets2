
//VuxInter/Demo/autocase.c/ac55_call_error_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac55_call_error(int))
#ifdef _VUDEBUG
static int ac55_call_error_vpls_(int a){ VuxDbgBrkP()
{
    int x = sub_error(a);
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
static int ac55_call_error_vpls_(int a){__VUFNINFO__("ac55_call_error","int",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int x = sub_error(a); VUXLV("int",x,1);
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

static int ac55_call_error_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac55_call_error(a);}
	else if(VuxIsRepeatRun()) {return ac55_call_error_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac55_call_error_vpls_(a) : ac55_call_error(a);
#else
    {int vuxRet = ac55_call_error_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac55_call_error(int))
