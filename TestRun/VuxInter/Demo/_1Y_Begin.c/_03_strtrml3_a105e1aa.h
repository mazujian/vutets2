
//VuxInter/Demo/_1Y_Begin.c/_03_strtrml3_a105e1aa.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_strtrml3(char*))
#ifdef _VUDEBUG
static char* _03_strtrml3_vpls_(char* str){ VuxDbgBrkP()
{
    return str;
}}
#else
static char* _03_strtrml3_vpls_(char* str){__VUFNINFO__("_03_strtrml3","char*",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {char* __vurtv__= str;VUXFRTY();}
}}
#endif

static char* _03_strtrml3_vpls(char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_strtrml3(str);}
	else if(VuxIsRepeatRun()) {return _03_strtrml3_vpls_(str);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _03_strtrml3_vpls_(str) : _03_strtrml3(str);
#else
    {char* vuxRet = _03_strtrml3_vpls_(str);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_strtrml3(char*))
