//VUINFO:_7T_EditCaseCode.cpp.h:4712:4712:1:1587607954:1587607954:1:1

//Demo/_7T_EditCaseCode.cpp
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_7T_EditCaseCode.cpp]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_7T_EditCaseCode.cpp"
#undef vtest_case_begin_global
#undef vtest_case_end_global 
#define vtest_case_begin_global vtest_case_begin_global_Demo__7T_EditCaseCode_cpp
#define vtest_case_end_global vtest_case_end_global__Demo__7T_EditCaseCode_cpp

#include "VuxInc/VuxCase.h"

//$$VUNIT(BEGIN,GLOBALINIT)
/////////////////////////////////////////////////////////////////////////////

//!2 本文件所有全局函数的所有用例执行前都会调用此函数
static void vtest_case_begin_global(const char* name)
{
//$$VUNIT(BEGIN,GLOBALCASEBEGIN)

//$$VUNIT(END,GLOBALCASEBEGIN)
}

//!2 本文件所有全局函数的所有用例执行后都会调用此函数
static void vtest_case_end_global()
{
//$$VUNIT(BEGIN,GLOBALCASEEND)

//$$VUNIT(END,GLOBALCASEEND)
}

/////////////////////////////////////////////////////////////////////////////
//$$VUNIT(END,GLOBALINIT)

#include "VuxInter/Demo/_7T_EditCaseCode.cpp/_01_Dec_d23b6c4e.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_01_Dec(int,int))
static void _01_Dec_c9d0b020_test(void)
{
    TEST_BEGING("Demo/_7T_EditCaseCode.cpp","_01_Dec_d23b6c4e", "", "_01_Dec(int,int)");

    //$$VUNIT(BEGIN,TESTCASE/_01_Dec(int,int))

    ///
    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, i, i, 0);
    TDP_DEFINE_INIT_GRID(int, j, j, 0);
    TEST_RUN _01_Dec_vpls(i, j);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    ///
    TEST_CASE_BEGING("default2")
    TDP_DEFINE_INIT_GRID(int, i, i, 0);
    TDP_DEFINE_INIT_GRID(int, j, j, 0);
    TEST_EXCEPTION()
    TEST_RUN _01_Dec_vpls(i, j);
    TEST_ASSERT_AUTO();
    TEST_THROW(CMyException)
    TEST_CASE_ENDG()

    ///
    TEST_CASE_BEGING("default3")
    TDP_DEFINE_INIT_GRID(int, i, i, 0);
    TDP_DEFINE_INIT_GRID(int, j, j, 0);
    TEST_EXCEPTION()
    TEST_RUN _01_Dec_vpls(i, j);
    TEST_ASSERT_AUTO();
    TEST_THROW_VALUE(int, -1)
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_01_Dec(int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_01_Dec(int,int))

#include "VuxInter/Demo/_7T_EditCaseCode.cpp/_02_Position_aca38c5e.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_02_Position(CList<int,int>&,POSITION))
static void _02_Position_a1277b31_test(void)
{
    TEST_BEGING("Demo/_7T_EditCaseCode.cpp","_02_Position_aca38c5e", "", "_02_Position(CList<int,int>&,POSITION)");

    //$$VUNIT(BEGIN,TESTCASE/_02_Position(CList<int,int>&,POSITION))

    ///
    TEST_CASE_BEGING("default")
    CList<int,int> list; TDP_INIT_GRID("CList<int,int>", list, list, 0);
    TDP_DEFINE_INIT_GRID(POSITION, pos, pos, 0);
    TDC_DEFINE_INIT_GRID(int, index, index, 0);
    pos = list.FindIndex(index);
    TEST_RUN _02_Position_vpls((CList<int,int>&)list, pos);
    TEST_ASSERT_AUTO();
    {int value = list.GetAt(pos);
    TEST_ASSERT_VAR("int", value);}
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_02_Position(CList<int,int>&,POSITION))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_02_Position(CList<int,int>&,POSITION))

#include "VuxInter/Demo/_7T_EditCaseCode.cpp/_03_VaryingParameter_d3af3469.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_03_VaryingParameter(int,int,...))
static void _03_VaryingParameter_5203c734_test(void)
{
    TESTF_INITG("_03_VaryingParameter_d3af3469", "", "_03_VaryingParameter(int,int,...)");

    //$$VUNIT(BEGIN,TESTCASE/_03_VaryingParameter(int,int,...))

    ///
    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TDC_DEFINE_INIT_GRID(int, c, c, 0);
    TEST_RUN _03_VaryingParameter_vpls(a, b);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_03_VaryingParameter(int,int,...))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_03_VaryingParameter(int,int,...))

void _demo__7t_editcasecode_cpp_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: _03_VaryingParameter_5203c734_test(); break;
        case 2: _01_Dec_c9d0b020_test(); break;
        case 3: _02_Position_a1277b31_test(); break;
        }
    }
}