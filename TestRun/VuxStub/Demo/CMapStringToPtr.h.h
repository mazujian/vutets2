

//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。让下一行代码有效可屏蔽本文件的桩代码。
//#define VUXIS_DEMO_CMAPSTRINGTOPTR_H
//$$VUNIT(END,CUSTOMIZE_AREA)


#ifndef VUXIS_DEMO_CMAPSTRINGTOPTR_H



//$$VUNIT(BEGIN,TESTSTUB/CMapStringToPtr::GetHashTableSize()#unsigned int)
#undef GetHashTableSize
UINT CMapStringToPtr::GetHashTableSize() const
{void* vmckrt=0; if(VuxMckM("GetHashTableSize",&vmckrt,0,0,"CMapStringToPtr",799,0,2)) return *(UINT*)vmckrt;{
    return 0;
}}
//$$VUNIT(END,TESTSTUB/CMapStringToPtr::GetHashTableSize()#unsigned int)

#endif