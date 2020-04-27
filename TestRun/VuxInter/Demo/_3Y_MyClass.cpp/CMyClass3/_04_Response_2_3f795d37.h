
//VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_04_Response_2_3f795d37.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass3::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))
#ifdef _VUDEBUG
BOOL CMyClass3::_04_Response_2_vpls_(UserInfo& info,CJobList& jobList,CMapStringToPtr& map){ VuxDbgBrkP()
{
    return 1;
}}
#else
BOOL CMyClass3::_04_Response_2_vpls_(UserInfo& info,CJobList& jobList,CMapStringToPtr& map){__VUFNINFO__("_04_Response_2","BOOL",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}
#endif

BOOL CMyClass3::_04_Response_2_vpls(UserInfo& info,CJobList& jobList,CMapStringToPtr& map)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass3::_04_Response_2(info,jobList,map);}
	else if(VuxIsRepeatRun()) {return _04_Response_2_vpls_(info,jobList,map);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? _04_Response_2_vpls_(info,jobList,map) : _04_Response_2(info,jobList,map);
#else
    {BOOL vuxRet = _04_Response_2_vpls_(info,jobList,map);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CMyClass3::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))
