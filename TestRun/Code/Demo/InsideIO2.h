
//Code/Demo/InsideIO2.h


#ifndef __INSIDEIO2_H__
#define __INSIDEIO2_H__

#include "TypeDef2.h"

extern int giVar;
extern void report_error();
extern int get_mem(DATA** ppData);


class CInsideIO2
{
public:

public:
    CInsideIO2();

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