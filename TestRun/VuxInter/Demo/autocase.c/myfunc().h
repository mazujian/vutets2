
//VuxInter/Demo/autocase.c/myfunc().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/myfunc())
#ifdef _VUDEBUG
static void myfunc_vpls_(){ VuxDbgBrkP()
{
    int a = 123;
    a++;
    *gptr = a;
}}
#else
static void myfunc_vpls_(){__VUFNID__(0);VuxDbp(0,0,3);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int a = 123; VUXLV("int",a,1);
VUXRLNF(2,2);    a++;
VUXRLNF(3,3);    *gptr = a;
}VUXFRTNE();}
#endif

static void myfunc_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {myfunc(); return;}
	else if(VuxIsRepeatRun()) {myfunc_vpls_(); return;}

#ifdef _VUDEBUG
    { VuxIsDebugPlug() ? myfunc_vpls_() : myfunc();
#else
    {myfunc_vpls_();
#endif
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/myfunc())
