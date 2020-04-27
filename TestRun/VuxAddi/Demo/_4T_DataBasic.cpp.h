
#ifndef _VUXCALLBACK_DEFINED_
#define _VUXCALLBACK_DEFINED_

#include "VuxCB/CList.h"
#include "VuxCB/school_t.h"

static void VUCALLBACK VuxCallBack(int index, void* pcbd)
{
    switch(index)
    {
    case 13: {VURSTT("tagBASE**[16]"); vcb_CList_t<tagBASE*,tagBASE*>::vcb_CList(pcbd); break;}
    case 10: {vcb_school_t(pcbd); break;}
    }
}

#endif