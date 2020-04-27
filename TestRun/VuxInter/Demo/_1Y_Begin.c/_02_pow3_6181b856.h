
//VuxInter/Demo/_1Y_Begin.c/_02_pow3_6181b856.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_02_pow3(unsigned int,unsigned int))
#ifdef _VUDEBUG
static unsigned int _02_pow3_vpls_(unsigned int g,unsigned int e){ VuxDbgBrkP()
{
    return 0;
}}
#else
static unsigned int _02_pow3_vpls_(unsigned int g,unsigned int e){__VUFNINFO__("_02_pow3","unsigned int",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {unsigned int __vurtv__= 0;VUXFRTY();}
}}
#endif

static unsigned int _02_pow3_vpls(unsigned int g,unsigned int e)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _02_pow3(g,e);}
	else if(VuxIsRepeatRun()) {return _02_pow3_vpls_(g,e);}

#ifdef _VUDEBUG
    {unsigned int vuxRet =  VuxIsDebugPlug() ? _02_pow3_vpls_(g,e) : _02_pow3(g,e);
#else
    {unsigned int vuxRet = _02_pow3_vpls_(g,e);
#endif
    TEST_ASSERT_RETURN("unsigned int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_02_pow3(unsigned int,unsigned int))
