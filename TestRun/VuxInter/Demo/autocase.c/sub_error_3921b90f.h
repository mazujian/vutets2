
//VuxInter/Demo/autocase.c/sub_error_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/sub_error(int))
#ifdef _VUDEBUG
static int sub_error_vpls_(int a){ VuxDbgBrkP()
{
    int x = 0;
    int b = a / x;
    return b;
}}
#else
static int sub_error_vpls_(int a){__VUFNINFO__("sub_error","int",0);VuxDbp(0,0,3);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int x = 0; VUXLV("int",x,1);
VUXRLNFVB(2,2,2);    int b = a / x; VUXLV("int",b,2);
VUXRLNF(3,3);    {int __vurtv__= b;VUXFRTY();}
}}
#endif

static int sub_error_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return sub_error(a);}
	else if(VuxIsRepeatRun()) {return sub_error_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? sub_error_vpls_(a) : sub_error(a);
#else
    {int vuxRet = sub_error_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/sub_error(int))
