
#ifndef _VUXCALLBACK_DEFINED_
#define _VUXCALLBACK_DEFINED_

#include "VuxCB/FILE.h"
#include "VuxCB/Mail.h"
#include "VuxCB/ListItem.h"

static void VUCALLBACK VuxCallBack(int index, void* pcbd)
{
    switch(index)
    {
    case 7: {vcb_FILE(pcbd); break;}
    case 9: {vcb_Mail(pcbd); break;}
    case 8: {vcb_ListItem(pcbd); break;}
    }
}

#endif