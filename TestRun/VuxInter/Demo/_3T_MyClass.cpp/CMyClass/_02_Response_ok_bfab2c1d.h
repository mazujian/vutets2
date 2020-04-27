
//VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_02_Response_ok_bfab2c1d.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass::_02_Response_ok(stream_t))
#ifdef _VUDEBUG
BOOL CMyClass::_02_Response_ok_vpls_(stream_t pMsg){ VuxDbgBrkP()
{
    //解释申请信息获取用户信息
    UserInfo info;
    GetUserInfo(&info, pMsg);

    //从数据库读取职位列表
    CJobList jobList;
    /*[学习提示]    用底层输入与回调赋值设置jobList中的数据。	*/
    GetJobList(&jobList, &info);

    //从数据库读取已发送给当前用户的职位map
    CMapStringToPtr map;
    /*[学习提示]    用底层输入与回调赋值设置map中的数据。	*/
    map.InitHashTable(17);
    GetSendedMap(&map, &info);

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
            /*[学习提示]            用局部输出判断临时的或未输出的计算结果。	        */
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
        /*[学习提示]        用局部输出判断临时的或未输出的计算结果。	    */
        SendMsg(msg, &info);
    }

    return 1;
}}
#else
BOOL CMyClass::_02_Response_ok_vpls_(stream_t pMsg){VUX_VARIABLE(1)  __VUFNINFO__("_02_Response_ok","BOOL",0);VuxDbp(0,0,23);
{
    //解释申请信息获取用户信息
VUXRBV(1);VUXRLNFVB(1,1,1);    UserInfo info; VUXLV("UserInfo",info,1);
VUXRLNF(2,2);    GetUserInfo(&info, pMsg);

    //从数据库读取职位列表
VUXRLNFVB(3,3,2);    CJobList jobList; VUXLV("CJobList",jobList,2);
    /*[学习提示]    用底层输入与回调赋值设置jobList中的数据。	*/
VUXRLNF(4,4);    GetJobList(&jobList, &info);

    //从数据库读取已发送给当前用户的职位map
VUXRLNFVB(5,5,3);    CMapStringToPtr map; VUXLV("CMapStringToPtr",map,3);
    /*[学习提示]    用底层输入与回调赋值设置map中的数据。	*/
VUXRLNF(6,6);    map.InitHashTable(17);
VUXRLNF(7,7);    GetSendedMap(&map, &info);

    //一条短信
VUXRLNFVB(8,8,4);    CString msg; VUXLV("CString",msg,4);

VUXRLNFVB(9,9,5);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,5);
    while((VUXRCS0(1,10)&&(pos != 0)&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
VUXRBV(2);VUXRLNFVB(10,11,6);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,6);
        //已发送的不再重发
        if((VUXRCS0(2,12)&&(map.Search(pJob->title))&&VUXRC1(2)))
        {VUXRBR(4);{VUXRB(3);VUXRLNF(11,13);VUXSEN(2,1,13); continue;
        }}
VUXRBR_ELSE(5);

VUXRBV(4);VUXRLNFVB(12,14,7);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,7);
        if((VUXRCS0(3,15)&&(len > MSG_MAX)&&VUXRC1(3))) //超长，发送前面的
        {VUXRBR(6);{VUXRB(5);
            _OUTPUT_(CString,msg,'A');
            /*[学习提示]            用局部输出判断临时的或未输出的计算结果。	        */
VUXRLNF(13,16);            SendMsg(msg, &info);
VUXRLNF(14,17);            msg.Empty();
        }}
VUXRBR_ELSE(7);

        //拼接短信
        if((VUXRCS0(4,18)&&(!msg.IsEmpty())&&VUXRC1(4)))
        {VUXRBR(8);{
VUXRB(6);VUXRLNF(15,19);            msg += ',';
        }}
VUXRBR_ELSE(9);
VUXRB(7);VUXRLNF(16,20);        msg += pJob->title;
    }}VUXRBR_OUT(1, 3);


    if((VUXRCS0(5,21)&&(!msg.IsEmpty())&&VUXRC1(5)))
    {VUXRBR(10);{VUXRB(8);
        _OUTPUT_(CString,msg,'B'); //最后一条短信
        /*[学习提示]        用局部输出判断临时的或未输出的计算结果。	    */
VUXRLNF(17,22);        SendMsg(msg, &info);
    }}
VUXRBR_ELSE(11);

VUXRB(9);VUXRLNF(18,23);    {BOOL __vurtv__= 1;VUXFRTY();}
}}
#endif

BOOL CMyClass::_02_Response_ok_vpls(stream_t pMsg)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass::_02_Response_ok(pMsg);}
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
//$$VUNIT(END,TESTFUNCPLUG/CMyClass::_02_Response_ok(stream_t))
