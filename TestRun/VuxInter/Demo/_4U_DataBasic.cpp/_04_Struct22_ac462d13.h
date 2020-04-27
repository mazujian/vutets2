
//VuxInter/Demo/_4U_DataBasic.cpp/_04_Struct22_ac462d13.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_04_Struct22(DATA*))
#ifdef _VUDEBUG
static BASE* _04_Struct22_vpls_(DATA* pData){ VuxDbgBrkP()
{
    return pData->pBase;
}}
#else
static BASE* _04_Struct22_vpls_(DATA* pData){__VUFNINFO__("_04_Struct22","BASE*",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {BASE* __vurtv__= pData->pBase;VUXFRTY();}
}}
#endif

static BASE* _04_Struct22_vpls(DATA* pData)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _04_Struct22(pData);}
	else if(VuxIsRepeatRun()) {return _04_Struct22_vpls_(pData);}

#ifdef _VUDEBUG
    {BASE* vuxRet =  VuxIsDebugPlug() ? _04_Struct22_vpls_(pData) : _04_Struct22(pData);
#else
    {BASE* vuxRet = _04_Struct22_vpls_(pData);
#endif
    TEST_ASSERT_RETURN("BASE*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_04_Struct22(DATA*))
