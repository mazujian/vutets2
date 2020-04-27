
//VuxInter/Demo/_4T_DataBasic.cpp/_03_Struct_641dcffd.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_Struct(BASE*))
#ifdef _VUDEBUG
static BASE* _03_Struct_vpls_(BASE* pBase){ VuxDbgBrkP()
{
    return pBase;
}}
#else
static BASE* _03_Struct_vpls_(BASE* pBase){__VUFNINFO__("_03_Struct","BASE*",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {BASE* __vurtv__= pBase;VUXFRTY();}
}}
#endif

static BASE* _03_Struct_vpls(BASE* pBase)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_Struct(pBase);}
	else if(VuxIsRepeatRun()) {return _03_Struct_vpls_(pBase);}

#ifdef _VUDEBUG
    {BASE* vuxRet =  VuxIsDebugPlug() ? _03_Struct_vpls_(pBase) : _03_Struct(pBase);
#else
    {BASE* vuxRet = _03_Struct_vpls_(pBase);
#endif
    TEST_ASSERT_RETURN("BASE*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_Struct(BASE*))
