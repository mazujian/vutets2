//VUINFO:_6U_WhiteBox.cpp.h:4712:4712:1:1587607953:1587607953:1:1

//Demo/_6U_WhiteBox.cpp
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_6U_WhiteBox.cpp]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_6U_WhiteBox.cpp"
#undef vtest_case_begin
#undef vtest_case_end 
#define vtest_case_begin vtest_case_begin_Demo__6U_WhiteBox_cpp
#define vtest_case_end vtest_case_end__Demo__6U_WhiteBox_cpp

#include "VuxInc/VuxCase.h"


//$$VUNIT(BEGIN,PUBLIC/CWhiteBox2)
/////////////////////////////////////////////////////////////////////////////

//!2 本文件中的CWhiteBox2类的所有用例执行前都会调用此函数
static void vtest_case_begin(const char* name, CWhiteBox2*& pVuxObj)
{
    //$$VUNIT(BEGIN,CONSTRUCTOR/CWhiteBox2) 
    TDM_INIT_GRID("CWhiteBox2*", pVuxObj, pVuxObj, 1);
    //$$VUNIT(END,CONSTRUCTOR/CWhiteBox2) 
}

//!2 本文件中的CWhiteBox2类的所有用例执行后都会调用此函数
static void vtest_case_end(CWhiteBox2*& pVuxObj)
{
    //$$VUNIT(BEGIN,DESTRUCTOR/CWhiteBox2) 
    //delete pVuxObj;
    pVuxObj = 0;
    //$$VUNIT(END,DESTRUCTOR/CWhiteBox2)
}

//
/////////////////////////////////////////////////////////////////////////////
//$$VUNIT(END,PUBLIC/CWhiteBox2)

#include "VuxInter/Demo/_6U_WhiteBox.cpp/CWhiteBox2/_01_WhiteBox_689fb5a2.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CWhiteBox2::_01_WhiteBox(int,int,int))
static void CWhiteBox2__01_WhiteBox_baea6ea7_test(void)
{
    CWhiteBox2* pVuxObj = 0;
    TESTF_INIT("_01_WhiteBox_689fb5a2", "CWhiteBox2", "_01_WhiteBox(int,int,int)");

    //$$VUNIT(BEGIN,TESTCASE/CWhiteBox2::_01_WhiteBox(int,int,int))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(int, A, A, 0);
    TDP_DEFINE_INIT_GRID(int, B, B, 0);
    TDP_DEFINE_INIT_GRID(int, X, X, 0);
    TEST_RUN pVuxObj->_01_WhiteBox_vpls(A, B, X);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CWhiteBox2::_01_WhiteBox(int,int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CWhiteBox2::_01_WhiteBox(int,int,int))

#include "VuxInter/Demo/_6U_WhiteBox.cpp/CWhiteBox2/_02_DeleteComment_9a945bd.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CWhiteBox2::_02_DeleteComment(char*,char*))
static void CWhiteBox2__02_DeleteComment_88f31cee_test(void)
{
    CWhiteBox2* pVuxObj = 0;
    TESTF_INIT("_02_DeleteComment_9a945bd", "CWhiteBox2", "_02_DeleteComment(char*,char*)");

    //$$VUNIT(BEGIN,TESTCASE/CWhiteBox2::_02_DeleteComment(char*,char*))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(char*, pSrc, pSrc, 0);
    TDP_DEFINE_INIT_GRID(char*, pDes, pDes, 0);
    TEST_RUN pVuxObj->_02_DeleteComment_vpls(pSrc, pDes);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CWhiteBox2::_02_DeleteComment(char*,char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CWhiteBox2::_02_DeleteComment(char*,char*))

#include "VuxInter/Demo/_6U_WhiteBox.cpp/CWhiteBox2/_03_Mcdc1_6380914f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CWhiteBox2::_03_Mcdc1(BOOL,BOOL,BOOL))
static void CWhiteBox2__03_Mcdc1_a7f928a7_test(void)
{
    CWhiteBox2* pVuxObj = 0;
    TESTF_INIT("_03_Mcdc1_6380914f", "CWhiteBox2", "_03_Mcdc1(BOOL,BOOL,BOOL)");

    //$$VUNIT(BEGIN,TESTCASE/CWhiteBox2::_03_Mcdc1(BOOL,BOOL,BOOL))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(BOOL, A, A, 0);
    TDP_DEFINE_INIT_GRID(BOOL, B, B, 0);
    TDP_DEFINE_INIT_GRID(BOOL, C, C, 0);
    TEST_RUN pVuxObj->_03_Mcdc1_vpls(A, B, C);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CWhiteBox2::_03_Mcdc1(BOOL,BOOL,BOOL))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CWhiteBox2::_03_Mcdc1(BOOL,BOOL,BOOL))

#include "VuxInter/Demo/_6U_WhiteBox.cpp/CWhiteBox2/_04_Mcdc2_34de42af.h"

//$$VUNIT(BEGIN,TESTFUNCTION/CWhiteBox2::_04_Mcdc2(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL))
static void CWhiteBox2__04_Mcdc2_cfdca5f4_test(void)
{
    CWhiteBox2* pVuxObj = 0;
    TESTF_INIT("_04_Mcdc2_34de42af", "CWhiteBox2", "_04_Mcdc2(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL)");

    //$$VUNIT(BEGIN,TESTCASE/CWhiteBox2::_04_Mcdc2(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL))

    TEST_CASE_BEGINO("default")
    TDP_DEFINE_INIT_GRID(BOOL, A, A, 0);
    TDP_DEFINE_INIT_GRID(BOOL, B, B, 0);
    TDP_DEFINE_INIT_GRID(BOOL, C, C, 0);
    TDP_DEFINE_INIT_GRID(BOOL, D, D, 0);
    TDP_DEFINE_INIT_GRID(BOOL, E, E, 0);
    TDP_DEFINE_INIT_GRID(BOOL, F, F, 0);
    TDP_DEFINE_INIT_GRID(BOOL, G, G, 0);
    TDP_DEFINE_INIT_GRID(BOOL, H, H, 0);
    TDP_DEFINE_INIT_GRID(BOOL, I, I, 0);
    TDP_DEFINE_INIT_GRID(BOOL, J, J, 0);
    TDP_DEFINE_INIT_GRID(BOOL, K, K, 0);
    TEST_RUN pVuxObj->_04_Mcdc2_vpls(A, B, C, D, E, F, G, H, I, J, K);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDO()

    //$$VUNIT(END,TESTCASE/CWhiteBox2::_04_Mcdc2(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/CWhiteBox2::_04_Mcdc2(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL))

void _demo__6u_whitebox_cpp_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: CWhiteBox2__02_DeleteComment_88f31cee_test(); break;
        case 2: CWhiteBox2__04_Mcdc2_cfdca5f4_test(); break;
        case 3: CWhiteBox2__03_Mcdc1_a7f928a7_test(); break;
        case 4: CWhiteBox2__01_WhiteBox_baea6ea7_test(); break;
        }
    }
}