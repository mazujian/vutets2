
//VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_04_Response_2_3f795d37.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))
#ifdef _VUDEBUG
BOOL CMyClass::_04_Response_2_vpls_(UserInfo& info,CJobList& jobList,CMapStringToPtr& map){ VuxDbgBrkP()
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
        msg += ',';
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
BOOL CMyClass::_04_Response_2_vpls_(UserInfo& info,CJobList& jobList,CMapStringToPtr& map){VUX_VARIABLE(1)  __VUFNINFO__("_04_Response_2","BOOL",0);VuxDbp(0,0,15);
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
VUXRB(6);VUXRLNF(8,11);        msg += ',';
VUXRLNF(9,12);        msg += pJob->title;
    }}VUXRBR_OUT(1, 3);


    if((VUXRCS0(4,13)&&(!msg.IsEmpty())&&VUXRC1(4)))
    {VUXRBR(8);{VUXRB(7);
        _OUTPUT_(CString,msg,'B'); //最后一条短信
VUXRLNF(10,14);        SendMsg(msg, &info);
    }}
VUXRBR_ELSE(9);

VUXRB(8);VUXRLNF(11,15);    {BOOL __vurtv__= 1;VUXFRTY();}
}}
#endif

BOOL CMyClass::_04_Response_2_vpls(UserInfo& info,CJobList& jobList,CMapStringToPtr& map)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass::_04_Response_2(info,jobList,map);}
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
//$$VUNIT(END,TESTFUNCPLUG/CMyClass::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))
