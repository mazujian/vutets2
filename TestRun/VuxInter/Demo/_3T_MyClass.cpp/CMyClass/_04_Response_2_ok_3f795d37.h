
//VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_04_Response_2_ok_3f795d37.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))
#ifdef _VUDEBUG
BOOL CMyClass::_04_Response_2_ok_vpls_(UserInfo& info,CJobList& jobList,CMapStringToPtr& map){ VuxDbgBrkP()
{
    //一条短信
    CString msg;

    POSITION pos = jobList.GetHeadPosition();
    while(pos != 0)
    {
        JobInfo* pJob = jobList.GetNext(pos);
        //已发送的不再重发
        if(map.Search(pJob->title))
        { continue;
        }

        int len = msg.GetLength() + pJob->title.GetLength() + 1;
        if(len > MSG_MAX) //超长，发送前面的
        {
            _OUTPUT_(CString,msg,'A');
            SendMsg(msg, &info);
            msg.Empty();
        }

        //拼接短信
        if(!msg.IsEmpty())
        {
            msg += ',';
        }
        msg += pJob->title;
    }

    if(!msg.IsEmpty())
    {
        _OUTPUT_(CString,msg,'B'); //最后一条短信
        SendMsg(msg, &info);
    }

    return 1;
}}
#else
BOOL CMyClass::_04_Response_2_ok_vpls_(UserInfo& info,CJobList& jobList,CMapStringToPtr& map){VUX_VARIABLE(1)  __VUFNINFO__("_04_Response_2_ok","BOOL",0);VuxDbp(0,0,16);
{
    //一条短信
VUXRBV(1);VUXRLNFVB(1,1,1);    CString msg; VUXLV("CString",msg,1);

VUXRLNFVB(2,2,2);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,2);
    while((VUXRCS0(1,3)&&(pos != 0)&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
VUXRBV(2);VUXRLNFVB(3,4,3);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,3);
        //已发送的不再重发
        if((VUXRCS0(2,5)&&(map.Search(pJob->title))&&VUXRC1(2)))
        {VUXRBR(4);{VUXRB(3);VUXRLNF(4,6);VUXSEN(2,1,6); continue;
        }}
VUXRBR_ELSE(5);

VUXRBV(4);VUXRLNFVB(5,7,4);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,4);
        if((VUXRCS0(3,8)&&(len > MSG_MAX)&&VUXRC1(3))) //超长，发送前面的
        {VUXRBR(6);{VUXRB(5);
            _OUTPUT_(CString,msg,'A');
VUXRLNF(6,9);            SendMsg(msg, &info);
VUXRLNF(7,10);            msg.Empty();
        }}
VUXRBR_ELSE(7);

        //拼接短信
        if((VUXRCS0(4,11)&&(!msg.IsEmpty())&&VUXRC1(4)))
        {VUXRBR(8);{
VUXRB(6);VUXRLNF(8,12);            msg += ',';
        }}
VUXRBR_ELSE(9);
VUXRB(7);VUXRLNF(9,13);        msg += pJob->title;
    }}VUXRBR_OUT(1, 3);


    if((VUXRCS0(5,14)&&(!msg.IsEmpty())&&VUXRC1(5)))
    {VUXRBR(10);{VUXRB(8);
        _OUTPUT_(CString,msg,'B'); //最后一条短信
VUXRLNF(10,15);        SendMsg(msg, &info);
    }}
VUXRBR_ELSE(11);

VUXRB(9);VUXRLNF(11,16);    {BOOL __vurtv__= 1;VUXFRTY();}
}}
#endif

BOOL CMyClass::_04_Response_2_ok_vpls(UserInfo& info,CJobList& jobList,CMapStringToPtr& map)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass::_04_Response_2_ok(info,jobList,map);}
	else if(VuxIsRepeatRun()) {return _04_Response_2_ok_vpls_(info,jobList,map);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? _04_Response_2_ok_vpls_(info,jobList,map) : _04_Response_2_ok(info,jobList,map);
#else
    {BOOL vuxRet = _04_Response_2_ok_vpls_(info,jobList,map);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CMyClass::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))
