
//VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_02_Response_ok_bfab2c1d.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass3::_02_Response_ok(stream_t))
#ifdef _VUDEBUG
BOOL CMyClass3::_02_Response_ok_vpls_(stream_t pMsg){ VuxDbgBrkP()
{
    return 1;
}}
#else
BOOL CMyClass3::_02_Response_ok_vpls_(stream_t pMsg){__VUFNINFO__("_02_Response_ok","BOOL",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}
#endif

BOOL CMyClass3::_02_Response_ok_vpls(stream_t pMsg)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass3::_02_Response_ok(pMsg);}
	else if(VuxIsRepeatRun()) {return _02_Response_ok_vpls_(pMsg);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? _02_Response_ok_vpls_(pMsg) : _02_Response_ok(pMsg);
#else
    {BOOL vuxRet = _02_Response_ok_vpls_(pMsg);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CMyClass3::_02_Response_ok(stream_t))
