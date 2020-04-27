
//VuxInter/Demo/_4T_DataBasic.cpp/_05_Array_a0aae26.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_05_Array(int[10],char[10],float[10],char*[10]))
#ifdef _VUDEBUG
static int _05_Array_vpls_(int i[10],char ch[10],float fl[10],char* str[10]){ VuxDbgBrkP()
{
    return i[0];
}}
#else
static int _05_Array_vpls_(int i[10],char ch[10],float fl[10],char* str[10]){__VUFNINFO__("_05_Array","int",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= i[0];VUXFRTY();}
}}
#endif

static int _05_Array_vpls(int i[10],char ch[10],float fl[10],char* str[10])
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _05_Array(i,ch,fl,str);}
	else if(VuxIsRepeatRun()) {return _05_Array_vpls_(i,ch,fl,str);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _05_Array_vpls_(i,ch,fl,str) : _05_Array(i,ch,fl,str);
#else
    {int vuxRet = _05_Array_vpls_(i,ch,fl,str);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_05_Array(int[10],char[10],float[10],char*[10]))
