
//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。让下一行代码有效可屏蔽本文件的桩代码。
//#define VUXIS_DEMO__5T_INSIDEIO_CPP
//$$VUNIT(END,CUSTOMIZE_AREA)

#ifndef VUXIS_DEMO__5T_INSIDEIO_CPP



//$$VUNIT(BEGIN,TESTSTUB/GetDlgItemText(int,CString&)#void)
#undef GetDlgItemText
void GetDlgItemText(int id,CString& value)
{VMCKDS vmckds[2]={{1,"int","id",(const void*)&id},{2,"CString","value",(const void*)&value}}; if(!VuxMck("GetDlgItemText",0,vmckds,2,"",958,0,2)) {
    
}}
//$$VUNIT(END,TESTSTUB/GetDlgItemText(int,CString&)#void)

#endif