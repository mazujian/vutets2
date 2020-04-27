
#ifndef _VUXCALLBACK_DEFINED_
#define _VUXCALLBACK_DEFINED_

#include "VuxCB/FILE.h"
#include "VuxCB/Mail.h"
#include "VuxCB/ListItem.h"
#include "VuxCB/CString.h"
#include "VuxCB/CMapStringToPtr.h"
#include "VuxCB/CList.h"
#include "VuxCB/CStringList.h"

static void VUCALLBACK VuxCallBack(int index, void* pcbd)
{
    switch(index)
    {
    case 7: {vcb_FILE(pcbd); break;}
    case 9: {vcb_Mail(pcbd); break;}
    case 8: {vcb_ListItem(pcbd); break;}
    case 4: {vcb_CString(pcbd); break;}
    case 3: {vcb_CMapStringToPtr(pcbd); break;}
    case 10: {VURSTT("CString*[16]"); vcb_CList<CString,CString>(pcbd); break;}
    case 5: {vcb_CStringList(pcbd); break;}
    case 11: {VURSTT("tagJobInfo**[16]"); vcb_CList<tagJobInfo*,tagJobInfo*>(pcbd); break;}
    }
}

#endif