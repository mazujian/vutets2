
//Code/Demo/_3U_MyClass.cpp
#include "VuxInc/VuxFore.h"



#include "MyClass2.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_3U_MyClass.cpp.h"
#include "VuxMock/Demo/_3U_MyClass.cpp"

/* //////////////////////////////////////////////
简单特例演示单元测试的基本原理
功能: 判断三角形的类别
参数: 三角形的三条边
返回: 三角形的类别:
TRI_NOT //非三角形
TRI_ESN //不等边
TRI_ES2 //等腰
TRI_ES3 //等边
///////////////////////////////////////////////*/
int CMyClass2::_01_Triangle(int a, int b, int c)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b},{3,"int","c",(const void*)&c}}; if(VuxMckM("_01_Triangle",&vmckrt,vmckds,3,"CMyClass2",930,12,1)) return *(int*)vmckrt;{__VUFNINFO__("_01_Triangle","int",930); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(a < b+c) && VUXRS(2)&&( b < a+c) && VUXRS(3)&&( c < a+b))
    {{
        if( VUXRS(4)&&(a == b) && VUXRS(5)&&( b == c))
        {{
 VUXRS(6);            {int __vurtv__= TRI_ES3;VUXFRTY();}
        }}
        else if( VUXRS(7)&&(a==b) || VUXRS(8)&&( b==c) || VUXRS(9)&&( a==c))
        {{
 VUXRS(10);            {int __vurtv__= TRI_ES2;VUXFRTY();}
        }}
        else
        {{
 VUXRS(11);            {int __vurtv__= TRI_ESN;VUXFRTY();}
        }}
    }}

 VUXRS(12);    {int __vurtv__= TRI_NOT;VUXFRTY();}
}}}

/*
手工编写的测试代码示例
#define TEST_ASSERT(exp)

void Triangle_test()
{
	{
    int a = 1;
    int b = 1;
    int c = 2;
    int ret = Triangle(a, b, c);
    TEST_ASSERT(ret == TRI_NOT);
	}
	{
    int a = 3;
    int b = 4;
    int c = 5;
    int ret = Triangle(a, b, c);
    TEST_ASSERT(ret == TRI_ESN);
	}
	{
    int a = 3;
    int b = 3;
    int c = 5;
    int ret = Triangle(a, b, c);
    TEST_ASSERT(ret == TRI_ES2);
	}
	{
    int a = 3;
    int b = 3;
    int c = 3;
    int ret = Triangle(a, b, c);
    TEST_ASSERT(ret == TRI_ES3);
	}
}    
*/

/* //////////////////////////////////////////////
C++典型示例，涉及链表映射表。错误未修改，代码摘自实际项目，经过修改，
  简化了代码逻辑，但保留了测试难度
功能: 取得职位列表，将职位标题拼成短信并发送给用户
参数: stream_t pMs，流数据，包含用户信息，如手机号、请求的职位类别
返回: BOOL 总是返回TRUE
///////////////////////////////////////////////*/
BOOL CMyClass2::_02_Response(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_02_Response",&vmckrt,vmckds,1,"CMyClass2",1041,22,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_Response","BOOL",1041); VuxDbgBrkO() 
{
    //解释申请信息获取用户信息
 VUXRSVB(1,1);    UserInfo info; VUXLV("UserInfo",info,1);
 VUXRS(2);    GetUserInfo(&info, pMsg);

    //从数据库读取职位列表
 VUXRSVB(3,2);    CJobList jobList; VUXLV("CJobList",jobList,2);
    /*[学习提示]    用底层输入与回调赋值设置jobList中的数据。	*/
 VUXRS(4);    GetJobList(&jobList, &info);

    //从数据库读取已发送给当前用户的职位map
 VUXRSVB(5,3);    CMapStringToPtr map; VUXLV("CMapStringToPtr",map,3);
 VUXRS(6);    map.InitHashTable(17);
    /*[学习提示]    用底层输入与回调赋值设置map中的数据。	*/
 VUXRS(7);    GetSendedMap(&map, &info);

    //一条短信
 VUXRSVB(8,4);    CString msg; VUXLV("CString",msg,4);

 VUXRSVB(9,5);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,5);
    while( VUXRS(10)&&(pos != 0))
    {VUXRBR_LOOP2(1,2,91);{
 VUXRSVB(11,6);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,6);
        //已发送的不再重发
        if( VUXRS(12)&&(map.Search(pJob->title)))
        {{ VUXRS(13);VUXSEN(2,1,13); continue;
        }}

 VUXRSVB(14,7);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,7);
        if( VUXRS(15)&&(len > MSG_MAX)) //超长，发送前面的
        {{
            /*[学习提示]            用局部输出判断临时的或未输出的计算结果。	        */
 VUXRS(16);            SendMsg(msg, &info);
 VUXRS(17);            msg.Empty();
        }}

        //拼接短信
 VUXRS(18);        msg += ',';
 VUXRS(19);        msg += pJob->title;
    }}

    if( VUXRS(20)&&(!msg.IsEmpty()))
    {{ //最后一条短信
        /*[学习提示]        用局部输出判断临时的或未输出的计算结果。	    */
 VUXRS(21);        SendMsg(msg, &info);
    }}

 VUXRS(22);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
_02_Response的第2版，错误已修改
功能: 取得职位列表，将职位标题拼成短信并发送给用户
参数: stream_t pMs，流数据，包含用户信息，如手机号、请求的职位类别
返回: BOOL 总是返回TRUE
///////////////////////////////////////////////*/
BOOL CMyClass2::_02_Response_ok(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_02_Response_ok",&vmckrt,vmckds,1,"CMyClass2",1042,23,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_Response_ok","BOOL",1042); VuxDbgBrkO() 
{
    //解释申请信息获取用户信息
 VUXRSVB(1,1);    UserInfo info; VUXLV("UserInfo",info,1);
 VUXRS(2);    GetUserInfo(&info, pMsg);

    //从数据库读取职位列表
 VUXRSVB(3,2);    CJobList jobList; VUXLV("CJobList",jobList,2);
    /*[学习提示]    用底层输入与回调赋值设置jobList中的数据。	*/
 VUXRS(4);    GetJobList(&jobList, &info);

    //从数据库读取已发送给当前用户的职位map
 VUXRSVB(5,3);    CMapStringToPtr map; VUXLV("CMapStringToPtr",map,3);
    /*[学习提示]    用底层输入与回调赋值设置map中的数据。	*/
 VUXRS(6);    map.InitHashTable(17);
 VUXRS(7);    GetSendedMap(&map, &info);

    //一条短信
 VUXRSVB(8,4);    CString msg; VUXLV("CString",msg,4);

 VUXRSVB(9,5);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,5);
    while( VUXRS(10)&&(pos != 0))
    {VUXRBR_LOOP2(1,2,92);{
 VUXRSVB(11,6);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,6);
        //已发送的不再重发
        if( VUXRS(12)&&(map.Search(pJob->title)))
        {{ VUXRS(13);VUXSEN(2,1,13); continue;
        }}

 VUXRSVB(14,7);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,7);
        if( VUXRS(15)&&(len > MSG_MAX)) //超长，发送前面的
        {{
            /*[学习提示]            用局部输出判断临时的或未输出的计算结果。	        */
 VUXRS(16);            SendMsg(msg, &info);
 VUXRS(17);            msg.Empty();
        }}

        //拼接短信
        if( VUXRS(18)&&(!msg.IsEmpty()))
        {{
 VUXRS(19);            msg += ',';
        }}
 VUXRS(20);        msg += pJob->title;
    }}

    if( VUXRS(21)&&(!msg.IsEmpty()))
    {{ //最后一条短信
        /*[学习提示]        用局部输出判断临时的或未输出的计算结果。	    */
 VUXRS(22);        SendMsg(msg, &info);
    }}

 VUXRS(23);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
演示无逻辑计算的代码的测试：不用设数据，跑跑看看就行
函数说明：拆分自_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass2::_03_Response_1(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_03_Response_1",&vmckrt,vmckds,1,"CMyClass2",1043,9,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_03_Response_1","BOOL",1043); VuxDbgBrkO() 
{
    //解释申请信息获取用户信息
 VUXRSVB(1,1);    UserInfo info; VUXLV("UserInfo",info,1);
 VUXRS(2);    GetUserInfo(&info, pMsg);

    //从数据库读取职位列表
 VUXRSVB(3,2);    CJobList jobList; VUXLV("CJobList",jobList,2);
 VUXRS(4);    GetJobList(&jobList, &info);

    //从数据库读取已发送给当前用户的职位map
 VUXRSVB(5,3);    CMapStringToPtr map; VUXLV("CMapStringToPtr",map,3);
 VUXRS(6);    map.InitHashTable(17);
 VUXRS(7);    GetSendedMap(&map, &info);

 VUXRS(8);    _04_Response_2(info, jobList, map);
 VUXRS(9);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
易以拆分的代码最好拆分，小函数便以维护，不易拆分的不必勉强，错误未修改
只要思路和方法正确，是否拆分对单元测试影响不大
函数说明：拆分自_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass2::_04_Response_2(UserInfo& info, CJobList& jobList, CMapStringToPtr& map)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"UserInfo","info",(const void*)&info},{2,"CJobList","jobList",(const void*)&jobList},{3,"CMapStringToPtr","map",(const void*)&map}}; if(VuxMckM("_04_Response_2",&vmckrt,vmckds,3,"CMyClass2",934,15,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Response_2","BOOL",934); VuxDbgBrkO() 
{
    //一条短信
 VUXRSVB(1,1);    CString msg; VUXLV("CString",msg,1);

 VUXRSVB(2,2);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,2);
    while( VUXRS(3)&&(pos != 0))
    {VUXRBR_LOOP2(1,2,93);{
 VUXRSVB(4,3);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,3);
        //已发送的不再重发
        if( VUXRS(5)&&(map.Search(pJob->title)))
        {{ VUXRS(6);VUXSEN(2,1,6); continue;
        }}

 VUXRSVB(7,4);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,4);
        if( VUXRS(8)&&(len > MSG_MAX)) //超长，发送前面的
        {{
 VUXRS(9);            SendMsg(msg, &info);
 VUXRS(10);            msg.Empty();
        }}

        //拼接短信
 VUXRS(11);        msg += ',';
 VUXRS(12);        msg += pJob->title;
    }}

    if( VUXRS(13)&&(!msg.IsEmpty()))
    {{ //最后一条短信
 VUXRS(14);        SendMsg(msg, &info);
    }}

 VUXRS(15);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
_04_Response_2的第2版，错误已修改
函数说明：拆分自_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass2::_04_Response_2_ok(UserInfo& info, CJobList& jobList, CMapStringToPtr& map)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"UserInfo","info",(const void*)&info},{2,"CJobList","jobList",(const void*)&jobList},{3,"CMapStringToPtr","map",(const void*)&map}}; if(VuxMckM("_04_Response_2_ok",&vmckrt,vmckds,3,"CMyClass2",935,16,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Response_2_ok","BOOL",935); VuxDbgBrkO() 
{
    //一条短信
 VUXRSVB(1,1);    CString msg; VUXLV("CString",msg,1);

 VUXRSVB(2,2);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,2);
    while( VUXRS(3)&&(pos != 0))
    {VUXRBR_LOOP2(1,2,90);{
 VUXRSVB(4,3);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,3);
        //已发送的不再重发
        if( VUXRS(5)&&(map.Search(pJob->title)))
        {{ VUXRS(6);VUXSEN(2,1,6); continue;
        }}

 VUXRSVB(7,4);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,4);
        if( VUXRS(8)&&(len > MSG_MAX)) //超长，发送前面的
        {{
 VUXRS(9);            SendMsg(msg, &info);
 VUXRS(10);            msg.Empty();
        }}

        //拼接短信
        if( VUXRS(11)&&(!msg.IsEmpty()))
        {{
 VUXRS(12);            msg += ',';
        }}
 VUXRS(13);        msg += pJob->title;
    }}

    if( VUXRS(14)&&(!msg.IsEmpty()))
    {{ //最后一条短信
 VUXRS(15);        SendMsg(msg, &info);
    }}

 VUXRS(16);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}




#include "VuxConn/Demo/_3U_MyClass.cpp.h"

void _demo__3u_myclass_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
{
    cbfs[index] = (void*)VuxCallBack;
    onfs[index] = (void*)VuxObjectNew;
    
#ifdef VUX_GVAR_INIT_DEFINED 
    gvfs[index] = (void*)VuxGlobalVarInit;
#endif
    
#ifdef VUX_SET_USERF_DEFINED 
    VuxCallSetUserFp();
#endif
}