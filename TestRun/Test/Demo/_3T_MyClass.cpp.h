//VUINFO:_3T_MyClass.cpp.h:4712:4712:1:1587607954:1587607954:1:1

//Demo/_3T_MyClass.cpp
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_3T_MyClass.cpp]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_3T_MyClass.cpp"
#undef vtest_case_begin_global
#undef vtest_case_end_global 
#define vtest_case_begin_global vtest_case_begin_global_Demo__3T_MyClass_cpp
#define vtest_case_end_global vtest_case_end_global__Demo__3T_MyClass_cpp

#include "VuxInc/VuxCase.h"


//$$VUNIT(BEGIN,GLOBALINIT)
/////////////////////////////////////////////////////////////////////////////

//!2 this function is called before executing all cases for all global functions of this file
static void vtest_case_begin_global(const char* name)
{
//$$VUNIT(BEGIN,GLOBALCASEBEGIN)

//$$VUNIT(END,GLOBALCASEBEGIN)
}

//!2 this function is called before executing all cases for all global functions of this file
static void vtest_case_end_global()
{
//$$VUNIT(BEGIN,GLOBALCASEEND)

//$$VUNIT(END,GLOBALCASEEND)
}

/////////////////////////////////////////////////////////////////////////////
//$$VUNIT(END,GLOBALINIT)



#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_3T_MyClass.cpp"
#undef vtest_case_begin
#undef vtest_case_end 
#define vtest_case_begin vtest_case_begin_Demo__3T_MyClass_cpp
#define vtest_case_end vtest_case_end__Demo__3T_MyClass_cpp

#include "VuxInc/VuxCase.h"


//$$VUNIT(BEGIN,PUBLIC/CMyClass)
/////////////////////////////////////////////////////////////////////////////

//!2 CMyClass类的所有用例执行前都会调用此函数
static void vtest_case_begin(const char* name, CMyClass*& pVuxObj)
{
    //$$VUNIT(BEGIN,CONSTRUCTOR/CMyClass) 
    TDM_INIT_GRID("CMyClass*", pVuxObj, pVuxObj, 1);
    //$$VUNIT(END,CONSTRUCTOR/CMyClass) 
}

//!2 CMyClass类的所有用例执行后都会调用此函数
static void vtest_case_end(CMyClass*& pVuxObj)
{
    //$$VUNIT(BEGIN,DESTRUCTOR/CMyClass) 
    pVuxObj = 0;
    //$$VUNIT(END,DESTRUCTOR/CMyClass)
}

//
/////////////////////////////////////////////////////////////////////////////
//$$VUNIT(END,PUBLIC/CMyClass)

#include "VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_01_Triangle_689fb5a2.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass::_01_Triangle(int,int,int))
static void CMyClass__01_Triangle_baea6ea7_test(void)
{
    CMyClass* pVuxObj = 0;
    TEST_BEGIN("Demo/_3T_MyClass.cpp","_01_Triangle_689fb5a2", "CMyClass", "_01_Triangle(int,int,int)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass::_01_Triangle(int,int,int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TDP_DEFINE_INIT_GRID(int, c, c, 0);
    TEST_RUN pVuxObj->_01_Triangle_vpls(a, b, c);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass::_01_Triangle(int,int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass::_01_Triangle(int,int,int))

#include "VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_02_Response_bfab2c1d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass::_02_Response(stream_t))
static void CMyClass__02_Response_3d8306b7_test(void)
{
    CMyClass* pVuxObj = 0;
    TEST_BEGIN("Demo/_3T_MyClass.cpp","_02_Response_bfab2c1d", "CMyClass", "_02_Response(stream_t)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass::_02_Response(stream_t))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(stream_t, pMsg, pMsg, 0);
    TEST_RUN pVuxObj->_02_Response_vpls(pMsg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass::_02_Response(stream_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass::_02_Response(stream_t))

#include "VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_02_Response_ok_bfab2c1d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass::_02_Response_ok(stream_t))
static void CMyClass__02_Response_ok_3d8306b7_test(void)
{
    CMyClass* pVuxObj = 0;
    TEST_BEGIN("Demo/_3T_MyClass.cpp","_02_Response_ok_bfab2c1d", "CMyClass", "_02_Response_ok(stream_t)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass::_02_Response_ok(stream_t))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(stream_t, pMsg, pMsg, 0);
    TEST_RUN pVuxObj->_02_Response_ok_vpls(pMsg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass::_02_Response_ok(stream_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass::_02_Response_ok(stream_t))

#include "VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_03_Response_1_bfab2c1d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass::_03_Response_1(stream_t))
static void CMyClass__03_Response_1_3d8306b7_test(void)
{
    CMyClass* pVuxObj = 0;
    TEST_BEGIN("Demo/_3T_MyClass.cpp","_03_Response_1_bfab2c1d", "CMyClass", "_03_Response_1(stream_t)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass::_03_Response_1(stream_t))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(stream_t, pMsg, pMsg, 0);
    TEST_RUN pVuxObj->_03_Response_1_vpls(pMsg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass::_03_Response_1(stream_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass::_03_Response_1(stream_t))

#include "VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_04_Response_2_3f795d37.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))
static void CMyClass__04_Response_2_b11ce225_test(void)
{
    CMyClass* pVuxObj = 0;
    TEST_BEGIN("Demo/_3T_MyClass.cpp","_04_Response_2_3f795d37", "CMyClass", "_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(UserInfo, info, info, 0);
    TDP_DEFINE_INIT_GRID(CJobList, jobList, jobList, 0);
    TDP_DEFINE_INIT_GRID(CMapStringToPtr, map, map, 0);
    TEST_RUN pVuxObj->_04_Response_2_vpls((UserInfo&)info, (CJobList&)jobList, (CMapStringToPtr&)map);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))

#include "VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_04_Response_2_ok_3f795d37.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))
static void CMyClass__04_Response_2_ok_b11ce225_test(void)
{
    CMyClass* pVuxObj = 0;
    TEST_BEGIN("Demo/_3T_MyClass.cpp","_04_Response_2_ok_3f795d37", "CMyClass", "_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(UserInfo, info, info, 0);
    TDP_DEFINE_INIT_GRID(CJobList, jobList, jobList, 0);
    TDP_DEFINE_INIT_GRID(CMapStringToPtr, map, map, 0);
    TEST_RUN pVuxObj->_04_Response_2_ok_vpls((UserInfo&)info, (CJobList&)jobList, (CMapStringToPtr&)map);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))

#include "VuxInter/Demo/_3T_MyClass.cpp/getCurrentTemperature().h"

//$$VUNIT(BEGIN,TESTFUNCTION/getCurrentTemperature())
static void getCurrentTemperature_test(void)
{
    TESTF_INITG("getCurrentTemperature()", "", "getCurrentTemperature()");

    //$$VUNIT(BEGIN,TESTCASE/getCurrentTemperature())

    TEST_CASE_BEGING("default")
    TEST_RUN getCurrentTemperature_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/getCurrentTemperature())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/getCurrentTemperature())

void _demo__3t_myclass_cpp_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: CMyClass__03_Response_1_3d8306b7_test(); break;
        case 2: getCurrentTemperature_test(); break;
        case 3: CMyClass__02_Response_ok_3d8306b7_test(); break;
        case 4: CMyClass__02_Response_3d8306b7_test(); break;
        case 5: CMyClass__04_Response_2_b11ce225_test(); break;
        case 6: CMyClass__01_Triangle_baea6ea7_test(); break;
        case 7: CMyClass__04_Response_2_ok_b11ce225_test(); break;
        }
    }
}