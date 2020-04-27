
//Code/Demo/_3Y_MyClass.cpp
#include "VuxInc/VuxFore.h"



#include "MyClass3.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_3Y_MyClass.cpp.h"
#include "VuxMock/Demo/_3Y_MyClass.cpp"

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
int CMyClass3::_01_Triangle(int a, int b, int c)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b},{3,"int","c",(const void*)&c}}; if(VuxMckM("_01_Triangle",&vmckrt,vmckds,3,"CMyClass3",981,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_01_Triangle","int",981); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= TRI_NOT;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
C++典型示例，涉及链表映射表。错误未修改，代码摘自实际项目，经过修改，
  简化了代码逻辑，但保留了测试难度
功能: 取得职位列表，将职位标题拼成短信并发送给用户
参数: stream_t pMs，流数据，包含用户信息，如手机号、请求的职位类别
返回: BOOL 总是返回TRUE
///////////////////////////////////////////////*/
BOOL CMyClass3::_02_Response(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_02_Response",&vmckrt,vmckds,1,"CMyClass3",1060,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_Response","BOOL",1060); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
_02_Response的第2版，错误已修改
功能: 取得职位列表，将职位标题拼成短信并发送给用户
参数: stream_t pMs，流数据，包含用户信息，如手机号、请求的职位类别
返回: BOOL 总是返回TRUE
///////////////////////////////////////////////*/
BOOL CMyClass3::_02_Response_ok(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_02_Response_ok",&vmckrt,vmckds,1,"CMyClass3",1061,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_Response_ok","BOOL",1061); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
演示无逻辑计算的代码的测试：不用设数据，跑跑看看就行
函数说明：拆分自_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass3::_03_Response_1(stream_t pMsg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"stream_t","pMsg",(const void*)&pMsg}}; if(VuxMckM("_03_Response_1",&vmckrt,vmckds,1,"CMyClass3",1062,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_03_Response_1","BOOL",1062); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
易以拆分的代码最好拆分，小函数便以维护，不易拆分的不必勉强，错误未修改
只要思路和方法正确，是否拆分对单元测试影响不大
函数说明：拆分自_02_Response
///////////////////////////////////////////////*/
BOOL CMyClass3::_04_Response_2(UserInfo& info, CJobList& jobList, CMapStringToPtr& map)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"UserInfo","info",(const void*)&info},{2,"CJobList","jobList",(const void*)&jobList},{3,"CMapStringToPtr","map",(const void*)&map}}; if(VuxMckM("_04_Response_2",&vmckrt,vmckds,3,"CMyClass3",985,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Response_2","BOOL",985); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
_04_Response_2的第2版，错误已修改
函数说明：拆分自_02_Response
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