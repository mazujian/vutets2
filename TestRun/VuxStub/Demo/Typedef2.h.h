
//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。让下一行代码有效可屏蔽本文件的桩代码。
//#define VUXIS_DEMO_TYPEDEF2_H
//$$VUNIT(END,CUSTOMIZE_AREA)

#ifndef VUXIS_DEMO_TYPEDEF2_H



//$$VUNIT(BEGIN,TESTSTUB/GetUserInfo(tagUserInfo*,char*)#void)
#undef GetUserInfo
void GetUserInfo(UserInfo* pInfo,stream_t pMsg)
{VMCKDS vmckds[2]={{1,"UserInfo*","pInfo",(const void*)&pInfo},{2,"stream_t","pMsg",(const void*)&pMsg}}; if(!VuxMck("GetUserInfo",0,vmckds,2,"",1035,0,2)) {
    
}}
//$$VUNIT(END,TESTSTUB/GetUserInfo(tagUserInfo*,char*)#void)


//$$VUNIT(BEGIN,TESTSTUB/GetJobList(CList<tagJobInfo*,tagJobInfo*>*,tagUserInfo*)#int)
#undef GetJobList
BOOL GetJobList(CJobList* pList,UserInfo* pInfo)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"CJobList*","pList",(const void*)&pList},{2,"UserInfo*","pInfo",(const void*)&pInfo}}; if(VuxMck("GetJobList",&vmckrt,vmckds,2,"",810,0,2)) return *(BOOL*)vmckrt;{
    return 0;
}}
//$$VUNIT(END,TESTSTUB/GetJobList(CList<tagJobInfo*,tagJobInfo*>*,tagUserInfo*)#int)


//$$VUNIT(BEGIN,TESTSTUB/SendMsg(const CString&,tagUserInfo*)#void)
#undef SendMsg
void SendMsg(const CString& msg,UserInfo* pInfo)
{VMCKDS vmckds[2]={{1,"CString","msg",(const void*)&msg},{2,"UserInfo*","pInfo",(const void*)&pInfo}}; if(!VuxMck("SendMsg",0,vmckds,2,"",811,0,2)) {
    
}}
//$$VUNIT(END,TESTSTUB/SendMsg(const CString&,tagUserInfo*)#void)


//$$VUNIT(BEGIN,TESTSTUB/GetSendedMap(CMapStringToPtr*,tagUserInfo*)#void)
#undef GetSendedMap
void GetSendedMap(CMapStringToPtr* pMap,UserInfo* pInfo)
{VMCKDS vmckds[2]={{1,"CMapStringToPtr*","pMap",(const void*)&pMap},{2,"UserInfo*","pInfo",(const void*)&pInfo}}; if(!VuxMck("GetSendedMap",0,vmckds,2,"",812,0,2)) {
    
}}
//$$VUNIT(END,TESTSTUB/GetSendedMap(CMapStringToPtr*,tagUserInfo*)#void)


//$$VUNIT(BEGIN,TESTSTUB/CDataBase::Execute(CString&)#void)
#undef Execute
void CDataBase::Execute(CString& sql)
{VMCKDS vmckds[1]={{1,"CString","sql",(const void*)&sql}}; if(!VuxMckM("Execute",0,vmckds,1,"CDataBase",806,0,2)) {
    
}}
//$$VUNIT(END,TESTSTUB/CDataBase::Execute(CString&)#void)


//$$VUNIT(BEGIN,TESTSTUB/CLibType::GetParam(int*)#void)
#undef GetParam
void CLibType::GetParam(int* pParam)
{VMCKDS vmckds[1]={{1,"int*","pParam",(const void*)&pParam}}; if(!VuxMckM("GetParam",0,vmckds,1,"CLibType",807,0,2)) {
    
}}
//$$VUNIT(END,TESTSTUB/CLibType::GetParam(int*)#void)


//$$VUNIT(BEGIN,TESTSTUB/CMyException::CMyException()#)
#undef CMyException
 CMyException::CMyException()
:msg((const char*)0)
{
    VUX_CONSTR_INIT();
}
//$$VUNIT(END,TESTSTUB/CMyException::CMyException()#)

#endif