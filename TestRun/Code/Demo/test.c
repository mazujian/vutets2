
//Code/Demo/test.c
#include "VuxInc/VuxFore.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/test.c.h"
#include "VuxMock/Demo/test.c"

#define NULL 0

char* strtrimleft(char* str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("strtrimleft",&vmckrt,vmckds,1,"",1997,14,1)) return *(char**)vmckrt;{__VUFNINFO__("strtrimleft","char*",1997); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    char* ptr = str; VUXLV("char*",ptr,1);
 VUXRSVB(2,2);    int count = 0; VUXLV("int",count,2);

    if( VUXRS(3)&&(str == 0))
    {{
 VUXRS(4);        {char* __vurtv__= str;VUXFRTY();}
    }}

    while( VUXRS(5)&&(*str++ == ' '))
    {VUXRBR_LOOP2(2,4,100);{
 VUXRS(6);        count++;
    }}
 VUXRS(7);    str = ptr;
    if( VUXRS(8)&&(count == 0))
    {{
 VUXRS(9);        {char* __vurtv__= str;VUXFRTY();}
    }}
   
    while( VUXRS(10)&&(*str))
    {VUXRBR_LOOP2(4,8,101);{
 VUXRS(11);        *str = *(str+count);
 VUXRS(12);        str++;
    }}

 VUXRS(13);    str = ptr;
 VUXRS(14);    {char* __vurtv__= str;VUXFRTY();}
}}}

#include "VuxConn/Demo/test.c.h"

VUEXTERNC void _demo_test_c_fps(void** cbfs, void** onfs, void** gvfs, int index)
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