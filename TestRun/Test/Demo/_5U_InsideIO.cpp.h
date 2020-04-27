//VUINFO:_5U_InsideIO.cpp.h:4712:4712:1:1587607952:1587607952:1:1

//Demo/_5U_InsideIO.cpp
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_5U_InsideIO.cpp]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_5U_InsideIO.cpp"
#undef vtest_case_begin
#undef vtest_case_end 
#define vtest_case_begin vtest_case_begin_Demo__5U_InsideIO_cpp
#define vtest_case_end vtest_case_end__Demo__5U_InsideIO_cpp

#include "VuxInc/VuxCase.h"


//$$VUNIT(BEGIN,PUBLIC/CInsideIO2)
/////////////////////////////////////////////////////////////////////////////

//!2 本文件中的CInsideIO2类的所有用例执行前都会调用此函数
static void vtest_case_begin(const char* name, CInsideIO2*& pVuxObj)
{
    //$$VUNIT(BEGIN,CONSTRUCTOR/CInsideIO2) 
    TDM_INIT_GRID("CInsideIO2*", pVuxObj, pVuxObj, 1);
    //$$VUNIT(END,CONSTRUCTOR/CInsideIO2) 
}

//!2 本文件中的CInsideIO2类的所有用例执行后都会调用此函数
static void vtest_case_end(CInsideIO2*& pVuxObj)
{
    //$$VUNIT(BEGIN,DESTRUCTOR/CInsideIO2) 
    pVuxObj = 0;
    //$$VUNIT(END,DESTRUCTOR/CInsideIO2)
}

//
/////////////////////////////////////////////////////////////////////////////
//$$VUNIT(END,PUBLIC/CInsideIO2)

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/GetTemperature_758ecff1.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::GetTemperature(int*))
static void CInsideIO2_GetTemperature_7851edbd_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("GetTemperature_758ecff1", "CInsideIO2", "GetTemperature(int*)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::GetTemperature(int*))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int*, pTemperature, pTemperature, 0);
    TEST_RUN pVuxObj->GetTemperature_vpls(pTemperature);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::GetTemperature(int*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::GetTemperature(int*))

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_01_WorkTime_758ecff1.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_01_WorkTime(int*))
static void CInsideIO2__01_WorkTime_7851edbd_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_01_WorkTime_758ecff1", "CInsideIO2", "_01_WorkTime(int*)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_01_WorkTime(int*))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int*, pWorkTime, pWorkTime, 0);
    TEST_RUN pVuxObj->_01_WorkTime_vpls(pWorkTime);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_01_WorkTime(int*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_01_WorkTime(int*))

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_02_PowerEffect_b81bf01f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_02_PowerEffect(bool))
static void CInsideIO2__02_PowerEffect_d3aef08d_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_02_PowerEffect_b81bf01f", "CInsideIO2", "_02_PowerEffect(bool)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_02_PowerEffect(bool))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(bool, reset, reset, 0);
    TEST_RUN pVuxObj->_02_PowerEffect_vpls(reset);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_02_PowerEffect(bool))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_02_PowerEffect(bool))

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_03_UpdateUserNameOrPassword().h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_03_UpdateUserNameOrPassword())
static void CInsideIO2__03_UpdateUserNameOrPassword_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_03_UpdateUserNameOrPassword()", "CInsideIO2", "_03_UpdateUserNameOrPassword()");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_03_UpdateUserNameOrPassword())

    TEST_CASE_BEGINO("default")
    TEST_RUN pVuxObj->_03_UpdateUserNameOrPassword_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_03_UpdateUserNameOrPassword())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_03_UpdateUserNameOrPassword())

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_04_LocalInput1_d23b6c4e.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_04_LocalInput1(int,int))
static void CInsideIO2__04_LocalInput1_c9d0b020_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_04_LocalInput1_d23b6c4e", "CInsideIO2", "_04_LocalInput1(int,int)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_04_LocalInput1(int,int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, index, index, 0);
    TDP_DEFINE_INIT_GRID(int, arg, arg, 0);
    TEST_RUN pVuxObj->_04_LocalInput1_vpls(index, arg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_04_LocalInput1(int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_04_LocalInput1(int,int))

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_05_LocalInput2_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_05_LocalInput2(int))
static void CInsideIO2__05_LocalInput2_43378a62_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_05_LocalInput2_3921b90f", "CInsideIO2", "_05_LocalInput2(int)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_05_LocalInput2(int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, arg, arg, 0);
    TEST_RUN pVuxObj->_05_LocalInput2_vpls(arg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_05_LocalInput2(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_05_LocalInput2(int))

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_06_Interrupt_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_06_Interrupt(int))
static void CInsideIO2__06_Interrupt_43378a62_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_06_Interrupt_3921b90f", "CInsideIO2", "_06_Interrupt(int)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_06_Interrupt(int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, arg, arg, 0);
    TEST_RUN pVuxObj->_06_Interrupt_vpls(arg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_06_Interrupt(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_06_Interrupt(int))

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_07_LoopEver().h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_07_LoopEver())
static void CInsideIO2__07_LoopEver_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_07_LoopEver()", "CInsideIO2", "_07_LoopEver()");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_07_LoopEver())

    TEST_CASE_BEGINO("default")
    TEST_RUN pVuxObj->_07_LoopEver_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_07_LoopEver())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_07_LoopEver())

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_08_call_sub_test_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_08_call_sub_test(int))
static void CInsideIO2__08_call_sub_test_43378a62_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_08_call_sub_test_3921b90f", "CInsideIO2", "_08_call_sub_test(int)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_08_call_sub_test(int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN pVuxObj->_08_call_sub_test_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_08_call_sub_test(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_08_call_sub_test(int))

#include "VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_09_mul_call_test().h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO2::_09_mul_call_test())
static void CInsideIO2__09_mul_call_test_test(void)
{
    CInsideIO2* pVuxObj = 0;
    TESTF_INIT("_09_mul_call_test()", "CInsideIO2", "_09_mul_call_test()");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO2::_09_mul_call_test())

    TEST_CASE_BEGINO("default")
    TEST_RUN pVuxObj->_09_mul_call_test_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO2::_09_mul_call_test())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO2::_09_mul_call_test())

void _demo__5u_insideio_cpp_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: CInsideIO2__02_PowerEffect_d3aef08d_test(); break;
        case 2: CInsideIO2__08_call_sub_test_43378a62_test(); break;
        case 3: CInsideIO2__04_LocalInput1_c9d0b020_test(); break;
        case 4: CInsideIO2__09_mul_call_test_test(); break;
        case 5: CInsideIO2__01_WorkTime_7851edbd_test(); break;
        case 6: CInsideIO2_GetTemperature_7851edbd_test(); break;
        case 7: CInsideIO2__06_Interrupt_43378a62_test(); break;
        case 8: CInsideIO2__03_UpdateUserNameOrPassword_test(); break;
        case 9: CInsideIO2__07_LoopEver_test(); break;
        case 10: CInsideIO2__05_LocalInput2_43378a62_test(); break;
        }
    }
}