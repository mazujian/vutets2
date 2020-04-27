
#ifndef _VUXCALLBACK_DEFINED_
#define _VUXCALLBACK_DEFINED_

#include "VuxCB/CList.h"

static void VUCALLBACK VuxCallBack(int index, void* pcbd)
{
    switch(index)
    {
    case 14: {VURSTT("int*[16]"); vcb_CList_t<int,int>::vcb_CList(pcbd); break;}
    }
}

#endif