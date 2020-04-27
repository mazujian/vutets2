
#ifndef _VUXCALLBACK_DEFINED_
#define _VUXCALLBACK_DEFINED_

#include "VuxCB/Mail.h"
#include "VuxCB/ListItem.h"
#include "VuxCB/FILE.h"

static void VUCALLBACK VuxCallBack(int index, void* pcbd)
{
    switch(index)
    {
    case 9: {vcb_Mail(pcbd); break;}
    case 8: {vcb_ListItem(pcbd); break;}
    case 7: {vcb_FILE(pcbd); break;}
    }
}

#endif