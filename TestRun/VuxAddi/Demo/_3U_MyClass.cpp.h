
#ifndef _VUXCALLBACK_DEFINED_
#define _VUXCALLBACK_DEFINED_

#include "VuxCB/CList.h"
#include "VuxCB/CStringList.h"
#include "VuxCB/CMapStringToPtr.h"
#include "VuxCB/CString.h"

static void VUCALLBACK VuxCallBack(int index, void* pcbd)
{
    switch(index)
    {
    case 11: {VURSTT("CString*[16]"); vcb_CList_t<CString,CString>::vcb_CList(pcbd); break;}
    case 5: {vcb_CStringList(pcbd); break;}
    case 3: {vcb_CMapStringToPtr(pcbd); break;}
    case 12: {VURSTT("tagJobInfo**[16]"); vcb_CList_t<tagJobInfo*,tagJobInfo*>::vcb_CList(pcbd); break;}
    case 4: {vcb_CString(pcbd); break;}
    }
}

#endif