
//VuxInter/Demo/_4T_DataBasic.cpp/_01_Ansi_a139db16.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_01_Ansi(int,char,float,char*))
#ifdef _VUDEBUG
static int _01_Ansi_vpls_(int i,char ch,float fl,char* str){ VuxDbgBrkP()
{
    return i;
}}
#else
static int _01_Ansi_vpls_(int i,char ch,float fl,char* str){__VUFNINFO__("_01_Ansi","int",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= i;VUXFRTY();}
}}
#endif

static int _01_Ansi_vpls(int i,char ch,float fl,char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _01_Ansi(i,ch,fl,str);}
	else if(VuxIsRepeatRun()) {return _01_Ansi_vpls_(i,ch,fl,str);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _01_Ansi_vpls_(i,ch,fl,str) : _01_Ansi(i,ch,fl,str);
#else
    {int vuxRet = _01_Ansi_vpls_(i,ch,fl,str);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_01_Ansi(int,char,float,char*))
