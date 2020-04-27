
//Code/Demo/InsideIO.h


#ifndef __INSIDEIO_H__
#define __INSIDEIO_H__

#include "TypeDef2.h"

extern int giVar;
extern void report_error();
extern int get_mem(DATA** ppData);

class CInsideIO
{
public:

public:
    CInsideIO();

public:
    BOOL _01_WorkTime(int* pWorkTime);
    int  _02_PowerEffect(bool reset);
    void _03_UpdateUserNameOrPassword();
    int  _04_LocalInput1(int index, int arg);
    int  _05_LocalInput2(int arg);
    int  _06_Interrupt(int arg);
    int  _07_LoopEver();
    
    void _08_call_sub_test(int a);
    int _09_mul_call_test();

public:
    BOOL GetTemperature(int* pTemperature);

public:
    //用于示例1
    int mExpectTemperature; 
    //用于示例3
    CString                msUserName;  //原用户名
    CString                msPassword;  //原密码

public:

    BOOL _01_WorkTime_vpls(int* pWorkTime);
    BOOL _01_WorkTime_vpls_(int* pWorkTime);
    int _02_PowerEffect_vpls(bool reset);
    int _02_PowerEffect_vpls_(bool reset);
    void _03_UpdateUserNameOrPassword_vpls();
    void _03_UpdateUserNameOrPassword_vpls_();
    int _04_LocalInput1_vpls(int index,int arg);
    int _04_LocalInput1_vpls_(int index,int arg);
    int _05_LocalInput2_vpls(int arg);
    int _05_LocalInput2_vpls_(int arg);
    int _06_Interrupt_vpls(int arg);
    int _06_Interrupt_vpls_(int arg);
    int _07_LoopEver_vpls();
    int _07_LoopEver_vpls_();
    void _08_call_sub_test_vpls(int a);
    void _08_call_sub_test_vpls_(int a);
    int _09_mul_call_test_vpls();
    int _09_mul_call_test_vpls_();
    BOOL GetTemperature_vpls(int* pTemperature);
    BOOL GetTemperature_vpls_(int* pTemperature);
};

#endif

void comm_test(int a)
{VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(!VuxMck("comm_test",0,vmckds,1,"",956,2,1)) {__VUFNID__(956); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(a < 0))
    {{
 VUXRS(2);        report_error();
    }}
    
    //...
}VUXFRTNE();}};

int get_mem(DATA** ppData)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"DATA**","ppData",(const void*)&ppData}}; if(VuxMck("get_mem",&vmckrt,vmckds,1,"",944,1,9)) return *(int*)vmckrt;{__VUFNINFO__("get_mem","int",944); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

int get_mem_test()
{void* vmckrt=0; if(VuxMck("get_mem_test",&vmckrt,0,0,"",957,13,1)) return *(int*)vmckrt;{__VUFNINFO__("get_mem_test","int",957); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    DATA* pData1; VUXLV("DATA*",pData1,1);
 VUXRSVB(2,2);    DATA* pData2; VUXLV("DATA*",pData2,2);
 VUXRS(3);    get_mem(&pData1);
 VUXRS(4);    get_mem(&pData2);
    
    if( VUXRS(5)&&(pData1 == 0) || VUXRS(6)&&( pData2 == 0))
    {{
 VUXRS(7);        {int __vurtv__= -1;VUXFRTY();}
    }}
        
    if( VUXRS(8)&&(pData1->pBase == 0) || VUXRS(9)&&(  pData2->pBase == 0))
    {{
 VUXRS(10);        {int __vurtv__= -1;VUXFRTY();}
    }}
        
    if( VUXRS(11)&&(pData1->pBase->a == pData2->pBase->a))
    {{
 VUXRS(12);        {int __vurtv__= 1;VUXFRTY();}
    }}

 VUXRS(13);    {int __vurtv__= 0;VUXFRTY();}
}}}