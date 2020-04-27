
//VuxInter/Demo/autocase.c/sub002_758ecff1.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/sub002(int*))
#ifdef _VUDEBUG
static int sub002_vpls_(int* a){ VuxDbgBrkP()
{
    return 0;
}}
#else
static int sub002_vpls_(int* a){__VUFNINFO__("sub002","int",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int sub002_vpls(int* a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return sub002(a);}
	else if(VuxIsRepeatRun()) {return sub002_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? sub002_vpls_(a) : sub002(a);
#else
    {int vuxRet = sub002_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/sub002(int*))
