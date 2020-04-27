
//Code/Demo/CMapStringToPtr.cpp
#include "VuxInc/VuxFore.h"



#include "CMapStringToPtr.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/CMapStringToPtr.cpp.h"
#include "VuxMock/Demo/CMapStringToPtr.cpp"


CMapStringToPtr::CMapStringToPtr()
{__VUFNID__(786); VuxDbgBrkO() 
{
 VUXRS(1);    m_pHashTable = 0;
 VUXRS(2);    m_nHashTableSize = 17;  
 VUXRS(3);    m_nCount = 0;
}VUXFRTNE();}



#include "VuxConn/Demo/CMapStringToPtr.cpp.h"

void _demo_cmapstringtoptr_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
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