
//Code/Demo/_3Y_MyClass.cpp
#include "VuxInc/VuxFore.h"



#include "MyClass3.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_3Y_MyClass.cpp.h"
#include "VuxMock/Demo/_3Y_MyClass.cpp"

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
int CMyClass3::_01_Triangle(int a, int b, int c)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b},{3,"int","c",(const void*)&c}}; if(VuxMckM("_01_Triangle",&vmckrt,vmckds,3,"CMyClass3",981,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_01_Triangle","int",981); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= TRI_NOT;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
C++����ʾ�����漰����ӳ�������δ�޸ģ�����ժ��ʵ����Ŀ�������޸ģ�
  ���˴����߼����������˲����Ѷ�
����: ȡ��ְλ�б���ְλ����ƴ�ɶ��Ų����͸��û�
����: stream_t pMs�������ݣ������û���Ϣ�����ֻ��š������ְλ���
����: BOOL ���Ƿ���TRUE
///////////////////////////////////////////////*/
BOOL CMyClass3::_02_Response(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_02_Response",&vmckrt,vmckds,1,"CMyClass3",1060,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_Response","BOOL",1060); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
_02_Response�ĵ�2�棬�������޸�
����: ȡ��ְλ�б���ְλ����ƴ�ɶ��Ų����͸��û�
����: stream_t pMs�������ݣ������û���Ϣ�����ֻ��š������ְλ���
����: BOOL ���Ƿ���TRUE
///////////////////////////////////////////////*/
BOOL CMyClass3::_02_Response_ok(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_02_Response_ok",&vmckrt,vmckds,1,"CMyClass3",1061,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_Response_ok","BOOL",1061); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��ʾ���߼�����Ĵ���Ĳ��ԣ����������ݣ����ܿ�������
����˵���������_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass3::_03_Response_1(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_03_Response_1",&vmckrt,vmckds,1,"CMyClass3",1062,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_03_Response_1","BOOL",1062); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
���Բ�ֵĴ�����ò�֣�С��������ά�������ײ�ֵĲ�����ǿ������δ�޸�
ֻҪ˼·�ͷ�����ȷ���Ƿ��ֶԵ�Ԫ����Ӱ�첻��
����˵���������_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass3::_04_Response_2(UserInfo& info, CJobList& jobList, CMapStringToPtr& map)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"UserInfo","info",(const void*)&info},{2,"CJobList","jobList",(const void*)&jobList},{3,"CMapStringToPtr","map",(const void*)&map}}; if(VuxMckM("_04_Response_2",&vmckrt,vmckds,3,"CMyClass3",985,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Response_2","BOOL",985); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
_04_Response_2�ĵ�2�棬�������޸�
����˵���������_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass3::_04_Response_2_ok(UserInfo& info, CJobList& jobList, CMapStringToPtr& map)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"UserInfo","info",(const void*)&info},{2,"CJobList","jobList",(const void*)&jobList},{3,"CMapStringToPtr","map",(const void*)&map}}; if(VuxMckM("_04_Response_2_ok",&vmckrt,vmckds,3,"CMyClass3",986,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Response_2_ok","BOOL",986); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}




#include "VuxConn/Demo/_3Y_MyClass.cpp.h"

void _demo__3y_myclass_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
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