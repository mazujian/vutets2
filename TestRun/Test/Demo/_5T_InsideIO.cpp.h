//VUINFO:_5T_InsideIO.cpp.h:4712:4712:1:1587607954:1587607954:1:1

//Demo/_5T_InsideIO.cpp
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_5T_InsideIO.cpp]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_5T_InsideIO.cpp"
#undef vtest_case_begin
#undef vtest_case_end 
#define vtest_case_begin vtest_case_begin_Demo__5T_InsideIO_cpp
#define vtest_case_end vtest_case_end__Demo__5T_InsideIO_cpp

#include "VuxInc/VuxCase.h"


//$$VUNIT(BEGIN,PUBLIC/CInsideIO)
/////////////////////////////////////////////////////////////////////////////

//!2 CInsideIO类的所有用例执行前都会调用此函数
static void vtest_case_begin(const char* name, CInsideIO*& pVuxObj)
{
    //$$VUNIT(BEGIN,CONSTRUCTOR/CInsideIO) 
    TDM_INIT_GRID("CInsideIO*", pVuxObj, pVuxObj, 1);
    //$$VUNIT(END,CONSTRUCTOR/CInsideIO) 
}

//!2 CInsideIO类的所有用例执行后都会调用此函数
static void vtest_case_end(CInsideIO*& pVuxObj)
{
    //$$VUNIT(BEGIN,DESTRUCTOR/CInsideIO) 
    pVuxObj = 0;
    //$$VUNIT(END,DESTRUCTOR/CInsideIO)
}

//
/////////////////////////////////////////////////////////////////////////////
//$$VUNIT(END,PUBLIC/CInsideIO)

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/GetTemperature_758ecff1.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::GetTemperature(int*))
static void CInsideIO_GetTemperature_7851edbd_test(void)
{
    CInsideIO* pVuxObj = 0;
    TEST_BEGIN("Demo/_5T_InsideIO.cpp","GetTemperature_758ecff1", "CInsideIO", "GetTemperature(int*)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::GetTemperature(int*))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int*, pTemperature, pTemperature, 0);
    TEST_RUN pVuxObj->GetTemperature_vpls(pTemperature);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::GetTemperature(int*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::GetTemperature(int*))

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_01_WorkTime_758ecff1.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_01_WorkTime(int*))
static void CInsideIO__01_WorkTime_7851edbd_test(void)
{
    CInsideIO* pVuxObj = 0;
    TEST_BEGIN("Demo/_5T_InsideIO.cpp","_01_WorkTime_758ecff1", "CInsideIO", "_01_WorkTime(int*)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_01_WorkTime(int*))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int*, pWorkTime, pWorkTime, 0);
    TEST_RUN pVuxObj->_01_WorkTime_vpls(pWorkTime);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_01_WorkTime(int*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_01_WorkTime(int*))

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_02_PowerEffect_b81bf01f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_02_PowerEffect(bool))
static void CInsideIO__02_PowerEffect_d3aef08d_test(void)
{
    CInsideIO* pVuxObj = 0;
    TEST_BEGIN("Demo/_5T_InsideIO.cpp","_02_PowerEffect_b81bf01f", "CInsideIO", "_02_PowerEffect(bool)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_02_PowerEffect(bool))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(bool, reset, reset, 0);
    TEST_RUN pVuxObj->_02_PowerEffect_vpls(reset);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_02_PowerEffect(bool))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_02_PowerEffect(bool))

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_03_UpdateUserNameOrPassword().h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_03_UpdateUserNameOrPassword())
static void CInsideIO__03_UpdateUserNameOrPassword_test(void)
{
    CInsideIO* pVuxObj = 0;
    TEST_BEGIN("Demo/_5T_InsideIO.cpp","_03_UpdateUserNameOrPassword()", "CInsideIO", "_03_UpdateUserNameOrPassword()");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_03_UpdateUserNameOrPassword())

    TEST_CASE_BEGINO("default")
    TEST_RUN pVuxObj->_03_UpdateUserNameOrPassword_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_03_UpdateUserNameOrPassword())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_03_UpdateUserNameOrPassword())

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_04_LocalInput1_d23b6c4e.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_04_LocalInput1(int,int))
static void CInsideIO__04_LocalInput1_c9d0b020_test(void)
{
    CInsideIO* pVuxObj = 0;
    TEST_BEGIN("Demo/_5T_InsideIO.cpp","_04_LocalInput1_d23b6c4e", "CInsideIO", "_04_LocalInput1(int,int)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_04_LocalInput1(int,int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, index, index, 0);
    TDP_DEFINE_INIT_GRID(int, arg, arg, 0);
    TEST_RUN pVuxObj->_04_LocalInput1_vpls(index, arg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_04_LocalInput1(int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_04_LocalInput1(int,int))

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_05_LocalInput2_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_05_LocalInput2(int))
static void CInsideIO__05_LocalInput2_43378a62_test(void)
{
    CInsideIO* pVuxObj = 0;
    TEST_BEGIN("Demo/_5T_InsideIO.cpp","_05_LocalInput2_3921b90f", "CInsideIO", "_05_LocalInput2(int)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_05_LocalInput2(int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, arg, arg, 0);
    TEST_RUN pVuxObj->_05_LocalInput2_vpls(arg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_05_LocalInput2(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_05_LocalInput2(int))

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_06_Interrupt_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_06_Interrupt(int))
static void CInsideIO__06_Interrupt_43378a62_test(void)
{
    CInsideIO* pVuxObj = 0;
    TEST_BEGIN("Demo/_5T_InsideIO.cpp","_06_Interrupt_3921b90f", "CInsideIO", "_06_Interrupt(int)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_06_Interrupt(int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, arg, arg, 0);
    TEST_RUN pVuxObj->_06_Interrupt_vpls(arg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_06_Interrupt(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_06_Interrupt(int))

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_07_LoopEver().h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_07_LoopEver())
static void CInsideIO__07_LoopEver_test(void)
{
    CInsideIO* pVuxObj = 0;
    TEST_BEGIN("Demo/_5T_InsideIO.cpp","_07_LoopEver()", "CInsideIO", "_07_LoopEver()");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_07_LoopEver())

    TEST_CASE_BEGINO("default")
    TEST_RUN pVuxObj->_07_LoopEver_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_07_LoopEver())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_07_LoopEver())

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_08_call_sub_test_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_08_call_sub_test(int))
static void CInsideIO__08_call_sub_test_43378a62_test(void)
{
    CInsideIO* pVuxObj = 0;
    TESTF_INIT("_08_call_sub_test_3921b90f", "CInsideIO", "_08_call_sub_test(int)");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_08_call_sub_test(int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN pVuxObj->_08_call_sub_test_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_08_call_sub_test(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_08_call_sub_test(int))

#include "VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_09_mul_call_test().h"

//$$VUNIT(BEGIN,TESTFUNCTION/CInsideIO::_09_mul_call_test())
static void CInsideIO__09_mul_call_test_test(void)
{
    CInsideIO* pVuxObj = 0;
    TESTF_INIT("_09_mul_call_test()", "CInsideIO", "_09_mul_call_test()");

    //$$VUNIT(BEGIN,TESTCASE/CInsideIO::_09_mul_call_test())

    ///
    TEST_CASE_BEGINO("default")
    TEST_RUN pVuxObj->_09_mul_call_test_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CInsideIO::_09_mul_call_test())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CInsideIO::_09_mul_call_test())

void _demo__5t_insideio_cpp_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: CInsideIO__01_WorkTime_7851edbd_test(); break;
        case 2: CInsideIO_GetTemperature_7851edbd_test(); break;
        case 3: CInsideIO__07_LoopEver_test(); break;
        case 4: CInsideIO__06_Interrupt_43378a62_test(); break;
        case 5: CInsideIO__03_UpdateUserNameOrPassword_test(); break;
        case 6: CInsideIO__09_mul_call_test_test(); break;
        case 7: CInsideIO__08_call_sub_test_43378a62_test(); break;
        case 8: CInsideIO__05_LocalInput2_43378a62_test(); break;
        case 9: CInsideIO__04_LocalInput1_c9d0b020_test(); break;
        case 10: CInsideIO__02_PowerEffect_d3aef08d_test(); break;
        }
    }
}