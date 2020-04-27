
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/GetTemperature_758ecff1.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::GetTemperature(int*))
#ifdef _VUDEBUG
BOOL CInsideIO::GetTemperature_vpls_(int* pTemperature){ VuxDbgBrkP()
{
    if(pTemperature != 0)
    {
        *pTemperature = getCurrentTemperature();
        return 1;
    }
    return 0;
}}
#else
BOOL CInsideIO::GetTemperature_vpls_(int* pTemperature){__VUFNINFO__("GetTemperature","BOOL",0);VuxDbp(0,0,4);
{
    if((VUXRCS0(1,1)&&(pTemperature != 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,2);        *pTemperature = getCurrentTemperature();
VUXRLNF(2,3);        {BOOL __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(2);VUXRLNF(3,4);    {BOOL __vurtv__= 0;VUXFRTY();}
}}
#endif

BOOL CInsideIO::GetTemperature_vpls(int* pTemperature)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO::GetTemperature(pTemperature);}
	else if(VuxIsRepeatRun()) {return GetTemperature_vpls_(pTemperature);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? GetTemperature_vpls_(pTemperature) : GetTemperature(pTemperature);
#else
    {BOOL vuxRet = GetTemperature_vpls_(pTemperature);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO::GetTemperature(int*))
