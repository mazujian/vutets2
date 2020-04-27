
//Code/Demo/_3T_MyClass.cpp
#include "VuxInc/VuxFore.h"



#include "MyClass.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_3T_MyClass.cpp.h"
#include "VuxMock/Demo/_3T_MyClass.cpp"

/* //////////////////////////////////////////////
��������ʾ��Ԫ���ԵĻ���ԭ��
����: �ж������ε����
����: �����ε�������
����: �����ε����:
TRI_NOT //��������
TRI_ESN //���ȱ�
TRI_ES2 //����
TRI_ES3 //�ȱ�
///////////////////////////////////////////////*/
int CMyClass::_01_Triangle(int a, int b, int c)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b},{3,"int","c",(const void*)&c}}; if(VuxMckM("_01_Triangle",&vmckrt,vmckds,3,"CMyClass",902,12,1)) return *(int*)vmckrt;{__VUFNINFO__("_01_Triangle","int",902); VuxDbgBrkO() 
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
�ֹ���д�Ĳ��Դ���ʾ��
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
C++����ʾ�����漰����ӳ�������δ�޸ģ�����ժ��ʵ����Ŀ�������޸ģ�
  ���˴����߼����������˲����Ѷ�
����: ȡ��ְλ�б���ְλ����ƴ�ɶ��Ų����͸��û�
����: stream_t pMs�������ݣ������û���Ϣ�����ֻ��š������ְλ���
����: BOOL ���Ƿ���TRUE
///////////////////////////////////////////////*/
BOOL CMyClass::_02_Response(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_02_Response",&vmckrt,vmckds,1,"CMyClass",1065,22,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_Response","BOOL",1065); VuxDbgBrkO() 
{
    //����������Ϣ��ȡ�û���Ϣ
 VUXRSVB(1,1);    UserInfo info; VUXLV("UserInfo",info,1);
 VUXRS(2);    GetUserInfo(&info, pMsg);

    //�����ݿ��ȡְλ�б�
 VUXRSVB(3,2);    CJobList jobList; VUXLV("CJobList",jobList,2);
    /*[ѧϰ��ʾ]    �õײ�������ص���ֵ����jobList�е����ݡ�	*/
 VUXRS(4);    GetJobList(&jobList, &info);

    //�����ݿ��ȡ�ѷ��͸���ǰ�û���ְλmap
 VUXRSVB(5,3);    CMapStringToPtr map; VUXLV("CMapStringToPtr",map,3);
 VUXRS(6);    map.InitHashTable(17);
    /*[ѧϰ��ʾ]    �õײ�������ص���ֵ����map�е����ݡ�	*/
 VUXRS(7);    GetSendedMap(&map, &info);

    //һ������
 VUXRSVB(8,4);    CString msg; VUXLV("CString",msg,4);

 VUXRSVB(9,5);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,5);
    while( VUXRS(10)&&(pos != 0))
    {VUXRBR_LOOP2(1,2,98);{
 VUXRSVB(11,6);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,6);
        //�ѷ��͵Ĳ����ط�
        if( VUXRS(12)&&(map.Search(pJob->title)))
        {{ VUXRS(13);VUXSEN(2,1,13); continue;
        }}

 VUXRSVB(14,7);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,7);
        if( VUXRS(15)&&(len > MSG_MAX)) //����������ǰ���
        {{
            /*[ѧϰ��ʾ]            �þֲ�����ж���ʱ�Ļ�δ����ļ�������	        */
 VUXRS(16);            SendMsg(msg, &info);
 VUXRS(17);            msg.Empty();
        }}

        //ƴ�Ӷ���
 VUXRS(18);        msg += ',';
 VUXRS(19);        msg += pJob->title;
    }}

    if( VUXRS(20)&&(!msg.IsEmpty()))
    {{ //���һ������
        /*[ѧϰ��ʾ]        �þֲ�����ж���ʱ�Ļ�δ����ļ�������	    */
 VUXRS(21);        SendMsg(msg, &info);
    }}

 VUXRS(22);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
_02_Response�ĵ�2�棬�������޸�
����: ȡ��ְλ�б���ְλ����ƴ�ɶ��Ų����͸��û�
����: stream_t pMs�������ݣ������û���Ϣ�����ֻ��š������ְλ���
����: BOOL ���Ƿ���TRUE
///////////////////////////////////////////////*/
BOOL CMyClass::_02_Response_ok(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_02_Response_ok",&vmckrt,vmckds,1,"CMyClass",1066,23,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_Response_ok","BOOL",1066); VuxDbgBrkO() 
{
    //����������Ϣ��ȡ�û���Ϣ
 VUXRSVB(1,1);    UserInfo info; VUXLV("UserInfo",info,1);
 VUXRS(2);    GetUserInfo(&info, pMsg);

    //�����ݿ��ȡְλ�б�
 VUXRSVB(3,2);    CJobList jobList; VUXLV("CJobList",jobList,2);
    /*[ѧϰ��ʾ]    �õײ�������ص���ֵ����jobList�е����ݡ�	*/
 VUXRS(4);    GetJobList(&jobList, &info);

    //�����ݿ��ȡ�ѷ��͸���ǰ�û���ְλmap
 VUXRSVB(5,3);    CMapStringToPtr map; VUXLV("CMapStringToPtr",map,3);
    /*[ѧϰ��ʾ]    �õײ�������ص���ֵ����map�е����ݡ�	*/
 VUXRS(6);    map.InitHashTable(17);
 VUXRS(7);    GetSendedMap(&map, &info);

    //һ������
 VUXRSVB(8,4);    CString msg; VUXLV("CString",msg,4);

 VUXRSVB(9,5);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,5);
    while( VUXRS(10)&&(pos != 0))
    {VUXRBR_LOOP2(1,2,99);{
 VUXRSVB(11,6);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,6);
        //�ѷ��͵Ĳ����ط�
        if( VUXRS(12)&&(map.Search(pJob->title)))
        {{ VUXRS(13);VUXSEN(2,1,13); continue;
        }}

 VUXRSVB(14,7);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,7);
        if( VUXRS(15)&&(len > MSG_MAX)) //����������ǰ���
        {{
            /*[ѧϰ��ʾ]            �þֲ�����ж���ʱ�Ļ�δ����ļ�������	        */
 VUXRS(16);            SendMsg(msg, &info);
 VUXRS(17);            msg.Empty();
        }}

        //ƴ�Ӷ���
        if( VUXRS(18)&&(!msg.IsEmpty()))
        {{
 VUXRS(19);            msg += ',';
        }}
 VUXRS(20);        msg += pJob->title;
    }}

    if( VUXRS(21)&&(!msg.IsEmpty()))
    {{ //���һ������
        /*[ѧϰ��ʾ]        �þֲ�����ж���ʱ�Ļ�δ����ļ�������	    */
 VUXRS(22);        SendMsg(msg, &info);
    }}

 VUXRS(23);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��ʾ���߼�����Ĵ���Ĳ��ԣ����������ݣ����ܿ�������
����˵���������_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass::_03_Response_1(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_03_Response_1",&vmckrt,vmckds,1,"CMyClass",1067,9,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_03_Response_1","BOOL",1067); VuxDbgBrkO() 
{
    //����������Ϣ��ȡ�û���Ϣ
 VUXRSVB(1,1);    UserInfo info; VUXLV("UserInfo",info,1);
 VUXRS(2);    GetUserInfo(&info, pMsg);

    //�����ݿ��ȡְλ�б�
 VUXRSVB(3,2);    CJobList jobList; VUXLV("CJobList",jobList,2);
 VUXRS(4);    GetJobList(&jobList, &info);

    //�����ݿ��ȡ�ѷ��͸���ǰ�û���ְλmap
 VUXRSVB(5,3);    CMapStringToPtr map; VUXLV("CMapStringToPtr",map,3);
 VUXRS(6);    map.InitHashTable(17);
 VUXRS(7);    GetSendedMap(&map, &info);

 VUXRS(8);    _04_Response_2(info, jobList, map);
 VUXRS(9);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
���Բ�ֵĴ�����ò�֣�С��������ά�������ײ�ֵĲ�����ǿ������δ�޸�
ֻҪ˼·�ͷ�����ȷ���Ƿ��ֶԵ�Ԫ����Ӱ�첻��
����˵���������_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass::_04_Response_2(UserInfo& info, CJobList& jobList, CMapStringToPtr& map)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"UserInfo","info",(const void*)&info},{2,"CJobList","jobList",(const void*)&jobList},{3,"CMapStringToPtr","map",(const void*)&map}}; if(VuxMckM("_04_Response_2",&vmckrt,vmckds,3,"CMyClass",906,15,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Response_2","BOOL",906); VuxDbgBrkO() 
{
    //һ������
 VUXRSVB(1,1);    CString msg; VUXLV("CString",msg,1);

 VUXRSVB(2,2);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,2);
    while( VUXRS(3)&&(pos != 0))
    {VUXRBR_LOOP2(1,2,96);{
 VUXRSVB(4,3);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,3);
        //�ѷ��͵Ĳ����ط�
        if( VUXRS(5)&&(map.Search(pJob->title)))
        {{ VUXRS(6);VUXSEN(2,1,6); continue;
        }}

 VUXRSVB(7,4);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,4);
        if( VUXRS(8)&&(len > MSG_MAX)) //����������ǰ���
        {{
 VUXRS(9);            SendMsg(msg, &info);
 VUXRS(10);            msg.Empty();
        }}

        //ƴ�Ӷ���
 VUXRS(11);        msg += ',';
 VUXRS(12);        msg += pJob->title;
    }}

    if( VUXRS(13)&&(!msg.IsEmpty()))
    {{ //���һ������
 VUXRS(14);        SendMsg(msg, &info);
    }}

 VUXRS(15);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
_04_Response_2�ĵ�2�棬�������޸�
����˵���������_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass::_04_Response_2_ok(UserInfo& info, CJobList& jobList, CMapStringToPtr& map)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"UserInfo","info",(const void*)&info},{2,"CJobList","jobList",(const void*)&jobList},{3,"CMapStringToPtr","map",(const void*)&map}}; if(VuxMckM("_04_Response_2_ok",&vmckrt,vmckds,3,"CMyClass",907,16,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Response_2_ok","BOOL",907); VuxDbgBrkO() 
{
    //һ������
 VUXRSVB(1,1);    CString msg; VUXLV("CString",msg,1);

 VUXRSVB(2,2);    POSITION pos = jobList.GetHeadPosition(); VUXLV("POSITION",pos,2);
    while( VUXRS(3)&&(pos != 0))
    {VUXRBR_LOOP2(1,2,97);{
 VUXRSVB(4,3);        JobInfo* pJob = jobList.GetNext(pos); VUXLV("JobInfo*",pJob,3);
        //�ѷ��͵Ĳ����ط�
        if( VUXRS(5)&&(map.Search(pJob->title)))
        {{ VUXRS(6);VUXSEN(2,1,6); continue;
        }}

 VUXRSVB(7,4);        int len = msg.GetLength() + pJob->title.GetLength() + 1; VUXLV("int",len,4);
        if( VUXRS(8)&&(len > MSG_MAX)) //����������ǰ���
        {{
 VUXRS(9);            SendMsg(msg, &info);
 VUXRS(10);            msg.Empty();
        }}

        //ƴ�Ӷ���
        if( VUXRS(11)&&(!msg.IsEmpty()))
        {{
 VUXRS(12);            msg += ',';
        }}
 VUXRS(13);        msg += pJob->title;
    }}

    if( VUXRS(14)&&(!msg.IsEmpty()))
    {{ //���һ������
 VUXRS(15);        SendMsg(msg, &info);
    }}

 VUXRS(16);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}


//������Ϣ
typedef struct AirInformation
{
    int temperature;   //�¶�
    float humidity;    //���ʪ��
}AirInformation;

//ʵʱ������Ϣ������������ά��
static AirInformation gAirInfo;

    int a;
    int b;
    int c;
int x;
int y;
int z;
 int j;
 int k;
 int l;
   int m;
   int n;
   int o;
    int u;
    int v;
    int w;


//��ȡʵʱ�¶�
int getCurrentTemperature()
{void* vmckrt=0; if(VuxMck("getCurrentTemperature",&vmckrt,0,0,"",1996,18,1)) return *(int*)vmckrt;{__VUFNINFO__("getCurrentTemperature","int",1996); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    char d; VUXLV("char",d,1);//��ע��
 VUXRSVB(2,2);    char e; VUXLV("char",e,2);
 VUXRSVB(3,3);    int a; VUXLV("int",a,3);
 VUXRSVB(4,4);    int b; VUXLV("int",b,4);
 VUXRSVB(5,5);    int c; VUXLV("int",c,5);
 VUXRSVB(6,6);    int x; VUXLV("int",x,6);
 VUXRSVB(7,7);    int y; VUXLV("int",y,7);
 VUXRSVB(8,8);    int z; VUXLV("int",z,8);
 VUXRSVB(9,9);    int j; VUXLV("int",j,9);
 VUXRSVB(10,10);    int k; VUXLV("int",k,10);
 VUXRSVB(11,11);    int l; VUXLV("int",l,11);
 VUXRSVB(12,12);    int m; VUXLV("int",m,12);
 VUXRSVB(13,13);    int n; VUXLV("int",n,13);
 VUXRSVB(14,14);    int o; VUXLV("int",o,14);
 VUXRSVB(15,15);    int u; VUXLV("int",u,15);
 VUXRSVB(16,16);    int v; VUXLV("int",v,16);
 VUXRSVB(17,17);    int w; VUXLV("int",w,17);

 VUXRS(18);    {int __vurtv__= gAirInfo.temperature;VUXFRTY();}
}}}


#include "VuxConn/Demo/_3T_MyClass.cpp.h"

void _demo__3t_myclass_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
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