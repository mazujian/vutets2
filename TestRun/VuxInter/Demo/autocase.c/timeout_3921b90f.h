
//VuxInter/Demo/autocase.c/timeout_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/timeout(int))
#ifdef _VUDEBUG
static int timeout_vpls_(int a){ VuxDbgBrkP()
{
    for(;;)
    {
        ;
    }
    return 0;
}}
#else
static int timeout_vpls_(int a){VUX_VARIABLE(1)  __VUFNINFO__("timeout","int",0);VuxDbp(0,0,3);
{VUXRBF(1,1);
    for(;;)
    {VUXRBR_LOOP(1,2,108);{
        ;VUXRB(2);VUXRLNF(1,2);
    }}VUXRBR_OUT(1, 3);

VUXRB(3);VUXRLNF(2,3);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int timeout_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return timeout(a);}
	else if(VuxIsRepeatRun()) {return timeout_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? timeout_vpls_(a) : timeout(a);
#else
    {int vuxRet = timeout_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/timeout(int))
