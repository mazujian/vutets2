
#ifndef _VUXCALLBACK_DEFINED_
#define _VUXCALLBACK_DEFINED_

#include "VuxCB/Mail.h"

static void VUCALLBACK VuxCallBack(int index, void* pcbd)
{
    switch(index)
    {
    case 9: {vcb_Mail(pcbd); break;}
    }
}

#endif