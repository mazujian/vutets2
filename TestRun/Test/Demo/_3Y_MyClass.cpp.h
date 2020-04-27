//VUINFO:_3Y_MyClass.cpp.h:4712:4712:1:1587607952:1587607952:1:1

//Demo/_3Y_MyClass.cpp
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_3Y_MyClass.cpp]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_3Y_MyClass.cpp"
#undef vtest_case_begin
#undef vtest_case_end 
#define vtest_case_begin vtest_case_begin_Demo__3Y_MyClass_cpp
#define vtest_case_end vtest_case_end__Demo__3Y_MyClass_cpp

#include "VuxInc/VuxCase.h"


//$$VUNIT(BEGIN,PUBLIC/CMyClass3)
/////////////////////////////////////////////////////////////////////////////

//!2 本文件中的CMyClass3类的所有用例执行前都会调用此函数
static void vtest_case_begin(const char* name, CMyClass3*& pVuxObj)
{
    //$$VUNIT(BEGIN,CONSTRUCTOR/CMyClass3) 
    TDM_INIT_GRID("CMyClass3*", pVuxObj, pVuxObj, 1);
    //$$VUNIT(END,CONSTRUCTOR/CMyClass3) 
}

//!2 本文件中的CMyClass3类的所有用例执行后都会调用此函数
static void vtest_case_end(CMyClass3*& pVuxObj)
{
    //$$VUNIT(BEGIN,DESTRUCTOR/CMyClass3) 
    //delete pVuxObj;
    pVuxObj = 0;
    //$$VUNIT(END,DESTRUCTOR/CMyClass3)
}

//
/////////////////////////////////////////////////////////////////////////////
//$$VUNIT(END,PUBLIC/CMyClass3)

#include "VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_01_Triangle_689fb5a2.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass3::_01_Triangle(int,int,int))
static void CMyClass3__01_Triangle_baea6ea7_test(void)
{
    CMyClass3* pVuxObj = 0;
    TESTF_INIT("_01_Triangle_689fb5a2", "CMyClass3", "_01_Triangle(int,int,int)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass3::_01_Triangle(int,int,int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TDP_DEFINE_INIT_GRID(int, c, c, 0);
    TEST_RUN pVuxObj->_01_Triangle_vpls(a, b, c);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass3::_01_Triangle(int,int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass3::_01_Triangle(int,int,int))

#include "VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_02_Response_bfab2c1d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass3::_02_Response(stream_t))
static void CMyClass3__02_Response_3d8306b7_test(void)
{
    CMyClass3* pVuxObj = 0;
    TESTF_INIT("_02_Response_bfab2c1d", "CMyClass3", "_02_Response(stream_t)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass3::_02_Response(stream_t))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(stream_t, pMsg, pMsg, 0);
    TEST_RUN pVuxObj->_02_Response_vpls(pMsg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass3::_02_Response(stream_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass3::_02_Response(stream_t))

#include "VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_02_Response_ok_bfab2c1d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass3::_02_Response_ok(stream_t))
static void CMyClass3__02_Response_ok_3d8306b7_test(void)
{
    CMyClass3* pVuxObj = 0;
    TESTF_INIT("_02_Response_ok_bfab2c1d", "CMyClass3", "_02_Response_ok(stream_t)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass3::_02_Response_ok(stream_t))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(stream_t, pMsg, pMsg, 0);
    TEST_RUN pVuxObj->_02_Response_ok_vpls(pMsg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass3::_02_Response_ok(stream_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass3::_02_Response_ok(stream_t))

#include "VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_03_Response_1_bfab2c1d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass3::_03_Response_1(stream_t))
static void CMyClass3__03_Response_1_3d8306b7_test(void)
{
    CMyClass3* pVuxObj = 0;
    TESTF_INIT("_03_Response_1_bfab2c1d", "CMyClass3", "_03_Response_1(stream_t)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass3::_03_Response_1(stream_t))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(stream_t, pMsg, pMsg, 0);
    TEST_RUN pVuxObj->_03_Response_1_vpls(pMsg);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass3::_03_Response_1(stream_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass3::_03_Response_1(stream_t))

#include "VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_04_Response_2_3f795d37.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass3::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))
static void CMyClass3__04_Response_2_b11ce225_test(void)
{
    CMyClass3* pVuxObj = 0;
    TESTF_INIT("_04_Response_2_3f795d37", "CMyClass3", "_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass3::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(UserInfo*, info, info, 1); UserInfo& info_vr = *info;
    TDP_DEFINE_INIT_GRID(CJobList*, jobList, jobList, 1); CJobList& jobList_vr = *jobList;
    TDP_DEFINE_INIT_GRID(CMapStringToPtr*, map, map, 1); CMapStringToPtr& map_vr = *map;
    TEST_RUN pVuxObj->_04_Response_2_vpls((UserInfo&)info_vr, (CJobList&)jobList_vr, (CMapStringToPtr&)map_vr);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass3::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass3::_04_Response_2(UserInfo&,CJobList&,CMapStringToPtr&))

#include "VuxInter/Demo/_3Y_MyClass.cpp/CMyClass3/_04_Response_2_ok_3f795d37.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CMyClass3::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))
static void CMyClass3__04_Response_2_ok_b11ce225_test(void)
{
    CMyClass3* pVuxObj = 0;
    TESTF_INIT("_04_Response_2_ok_3f795d37", "CMyClass3", "_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&)");

    //$$VUNIT(BEGIN,TESTCASE/CMyClass3::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(UserInfo*, info, info, 1); UserInfo& info_vr = *info;
    TDP_DEFINE_INIT_GRID(CJobList*, jobList, jobList, 1); CJobList& jobList_vr = *jobList;
    TDP_DEFINE_INIT_GRID(CMapStringToPtr*, map, map, 1); CMapStringToPtr& map_vr = *map;
    TEST_RUN pVuxObj->_04_Response_2_ok_vpls((UserInfo&)info_vr, (CJobList&)jobList_vr, (CMapStringToPtr&)map_vr);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CMyClass3::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CMyClass3::_04_Response_2_ok(UserInfo&,CJobList&,CMapStringToPtr&))

void _demo__3y_myclass_cpp_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: CMyClass3__04_Response_2_b11ce225_test(); break;
        case 2: CMyClass3__03_Response_1_3d8306b7_test(); break;
        case 3: CMyClass3__02_Response_ok_3d8306b7_test(); break;
        case 4: CMyClass3__04_Response_2_ok_b11ce225_test(); break;
        case 5: CMyClass3__02_Response_3d8306b7_test(); break;
        case 6: CMyClass3__01_Triangle_baea6ea7_test(); break;
        }
    }
}