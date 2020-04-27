
//VuxInter/Demo/_4U_DataBasic.cpp/_01_Ansi2_a139db16.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_01_Ansi2(int,char,float,char*))
#ifdef _VUDEBUG
static int _01_Ansi2_vpls_(int i,char ch,float fl,char* str){ VuxDbgBrkP()
{
    return i;
}}
#else
static int _01_Ansi2_vpls_(int i,char ch,float fl,char* str){__VUFNINFO__("_01_Ansi2","int",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= i;VUXFRTY();}
}}
#endif

static int _01_Ansi2_vpls(int i,char ch,float fl,char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _01_Ansi2(i,ch,fl,str);}
	else if(VuxIsRepeatRun()) {return _01_Ansi2_vpls_(i,ch,fl,str);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _01_Ansi2_vpls_(i,ch,fl,str) : _01_Ansi2(i,ch,fl,str);
#else
    {int vuxRet = _01_Ansi2_vpls_(i,ch,fl,str);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_01_Ansi2(int,char,float,char*))
