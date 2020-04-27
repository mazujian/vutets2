
#ifndef _VUXCALLBACK_DEFINED_
#define _VUXCALLBACK_DEFINED_

#include "VuxCB/CString.h"

static void VUCALLBACK VuxCallBack(int index, void* pcbd)
{
    switch(index)
    {
    case 4: {vcb_CString(pcbd); break;}
    }
}

#endif