
//VuxInter/Demo/_1Y_Begin.c/_01_add3_d23b6c4e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_01_add3(int,int))
#ifdef _VUDEBUG
static int _01_add3_vpls_(int a,int b){ VuxDbgBrkP()
{
    return 0;
}}
#else
static int _01_add3_vpls_(int a,int b){__VUFNINFO__("_01_add3","int",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int _01_add3_vpls(int a,int b)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _01_add3(a,b);}
	else if(VuxIsRepeatRun()) {return _01_add3_vpls_(a,b);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _01_add3_vpls_(a,b) : _01_add3(a,b);
#else
    {int vuxRet = _01_add3_vpls_(a,b);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_01_add3(int,int))
