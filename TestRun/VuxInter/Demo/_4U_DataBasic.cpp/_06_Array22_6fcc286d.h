
//VuxInter/Demo/_4U_DataBasic.cpp/_06_Array22_6fcc286d.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_06_Array22(DATA*[10]))
#ifdef _VUDEBUG
static BASE* _06_Array22_vpls_(DATA* pDatas[10]){ VuxDbgBrkP()
{;
    return pDatas[0]->pBase;
}}
#else
static BASE* _06_Array22_vpls_(DATA* pDatas[10]){__VUFNINFO__("_06_Array22","BASE*",0);VuxDbp(0,0,2);
{;VUXRB(1);VUXRLNF(1,1);
VUXRLNF(2,2);    {BASE* __vurtv__= pDatas[0]->pBase;VUXFRTY();}
}}
#endif

static BASE* _06_Array22_vpls(DATA* pDatas[10])
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _06_Array22(pDatas);}
	else if(VuxIsRepeatRun()) {return _06_Array22_vpls_(pDatas);}

#ifdef _VUDEBUG
    {BASE* vuxRet =  VuxIsDebugPlug() ? _06_Array22_vpls_(pDatas) : _06_Array22(pDatas);
#else
    {BASE* vuxRet = _06_Array22_vpls_(pDatas);
#endif
    TEST_ASSERT_RETURN("BASE*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_06_Array22(DATA*[10]))
