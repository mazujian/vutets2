
//VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_01_Triangle_689fb5a2.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass3::_01_Triangle(int,int,int))
#ifdef _VUDEBUG
int CMyClass3::_01_Triangle_vpls_(int a,int b,int c){ VuxDbgBrkP()
{
    return TRI_NOT;
}}
#else
int CMyClass3::_01_Triangle_vpls_(int a,int b,int c){__VUFNINFO__("_01_Triangle","int",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= TRI_NOT;VUXFRTY();}
}}
#endif

int CMyClass3::_01_Triangle_vpls(int a,int b,int c)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass3::_01_Triangle(a,b,c);}
	else if(VuxIsRepeatRun()) {return _01_Triangle_vpls_(a,b,c);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _01_Triangle_vpls_(a,b,c) : _01_Triangle(a,b,c);
#else
    {int vuxRet = _01_Triangle_vpls_(a,b,c);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CMyClass3::_01_Triangle(int,int,int))
