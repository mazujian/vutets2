
//VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_03_Response_1_bfab2c1d.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass::_03_Response_1(stream_t))
#ifdef _VUDEBUG
BOOL CMyClass::_03_Response_1_vpls_(stream_t pMsg){ VuxDbgBrkP()
{
    //����������Ϣ��ȡ�û���Ϣ
    UserInfo info;
    GetUserInfo(&info, pMsg);

    //�����ݿ��ȡְλ�б�
    CJobList jobList;
    GetJobList(&jobList, &info);

    //�����ݿ��ȡ�ѷ��͸���ǰ�û���ְλmap
    CMapStringToPtr map;
    map.InitHashTable(17);
    GetSendedMap(&map, &info);

    _04_Response_2(info, jobList, map);
    return 1;
}}
#else
BOOL CMyClass::_03_Response_1_vpls_(stream_t pMsg){__VUFNINFO__("_03_Response_1","BOOL",0);VuxDbp(0,0,9);
{
    //����������Ϣ��ȡ�û���Ϣ
VUXRBV(1);VUXRLNFVB(1,1,1);    UserInfo info; VUXLV("UserInfo",info,1);
VUXRLNF(2,2);    GetUserInfo(&info, pMsg);

    //�����ݿ��ȡְλ�б�
VUXRLNFVB(3,3,2);    CJobList jobList; VUXLV("CJobList",jobList,2);
VUXRLNF(4,4);    GetJobList(&jobList, &info);

    //�����ݿ��ȡ�ѷ��͸���ǰ�û���ְλmap
VUXRLNFVB(5,5,3);    CMapStringToPtr map; VUXLV("CMapStringToPtr",map,3);
VUXRLNF(6,6);    map.InitHashTable(17);
VUXRLNF(7,7);    GetSendedMap(&map, &info);

VUXRLNF(8,8);    _04_Response_2(info, jobList, map);
VUXRLNF(9,9);    {BOOL __vurtv__= 1;VUXFRTY();}
}}
#endif

BOOL CMyClass::_03_Response_1_vpls(stream_t pMsg)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass::_03_Response_1(pMsg);}
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
//$$VUNIT(END,TESTFUNCPLUG/CMyClass::_03_Response_1(stream_t))
