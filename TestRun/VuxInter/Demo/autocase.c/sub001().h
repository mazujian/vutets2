
//VuxInter/Demo/autocase.c/sub001().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/sub001())
#ifdef _VUDEBUG
static int sub001_vpls_(){ VuxDbgBrkP()
{
    return 0;
}}
#else
static int sub001_vpls_(){__VUFNINFO__("sub001","int",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int sub001_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return sub001();}
	else if(VuxIsRepeatRun()) {return sub001_vpls_();}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? sub001_vpls_() : sub001();
#else
    {int vuxRet = sub001_vpls_();
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/sub001())
