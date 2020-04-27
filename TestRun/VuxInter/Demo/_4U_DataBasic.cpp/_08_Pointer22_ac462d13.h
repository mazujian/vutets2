
//VuxInter/Demo/_4U_DataBasic.cpp/_08_Pointer22_ac462d13.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_08_Pointer22(DATA*))
#ifdef _VUDEBUG
static BASE* _08_Pointer22_vpls_(DATA* pData){ VuxDbgBrkP()
{
    if(pData == 0)
    { 
        return 0;
    }
    return pData->pBase;
}}
#else
static BASE* _08_Pointer22_vpls_(DATA* pData){__VUFNINFO__("_08_Pointer22","BASE*",0);VuxDbp(0,0,3);
{
    if((VUXRCS0(1,1)&&(pData == 0)&&VUXRC1(1)))
    {VUXRBR(2);{ 
VUXRB(1);VUXRLNF(1,2);        {BASE* __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(2);VUXRLNF(2,3);    {BASE* __vurtv__= pData->pBase;VUXFRTY();}
}}
#endif

static BASE* _08_Pointer22_vpls(DATA* pData)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _08_Pointer22(pData);}
	else if(VuxIsRepeatRun()) {return _08_Pointer22_vpls_(pData);}

#ifdef _VUDEBUG
    {BASE* vuxRet =  VuxIsDebugPlug() ? _08_Pointer22_vpls_(pData) : _08_Pointer22(pData);
#else
    {BASE* vuxRet = _08_Pointer22_vpls_(pData);
#endif
    TEST_ASSERT_RETURN("BASE*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_08_Pointer22(DATA*))
