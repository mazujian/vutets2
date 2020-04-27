
//VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_03_Response_1_bfab2c1d.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass3::_03_Response_1(stream_t))
#ifdef _VUDEBUG
BOOL CMyClass3::_03_Response_1_vpls_(stream_t pMsg){ VuxDbgBrkP()
{
    return 1;
}}
#else
BOOL CMyClass3::_03_Response_1_vpls_(stream_t pMsg){__VUFNINFO__("_03_Response_1","BOOL",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}
#endif

BOOL CMyClass3::_03_Response_1_vpls(stream_t pMsg)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass3::_03_Response_1(pMsg);}
	else if(VuxIsRepeatRun()) {return _03_Response_1_vpls_(pMsg);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? _03_Response_1_vpls_(pMsg) : _03_Response_1(pMsg);
#else
    {BOOL vuxRet = _03_Response_1_vpls_(pMsg);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CMyClass3::_03_Response_1(stream_t))
