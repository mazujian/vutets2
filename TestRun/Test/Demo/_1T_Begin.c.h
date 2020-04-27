//VUINFO:_1T_Begin.c.h:4712:4712:17:1587607955:1587607955:1:1

//Demo/_1T_Begin.c
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_1T_Begin.c]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_1T_Begin.c"
#undef vtest_case_begin_global
#undef vtest_case_end_global 
#define vtest_case_begin_global vtest_case_begin_global_Demo__1T_Begin_c
#define vtest_case_end_global vtest_case_end_global__Demo__1T_Begin_c

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

#include "VuxInter/Demo/_1T_Begin.c/_01_add_d23b6c4e.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_01_add(int,int))
static void _01_add_c9d0b020_test(void)
{
    TEST_BEGING("Demo/_1T_Begin.c","_01_add_d23b6c4e", "", "_01_add(int,int)");

    //$$VUNIT(BEGIN,TESTCASE/_01_add(int,int))

    ///
    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TEST_RUN _01_add_vpls(a, b);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    ///
    TEST_CASE_BEGING("default2")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TEST_RUN _01_add_vpls(a, b);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_01_add(int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_01_add(int,int))

#include "VuxInter/Demo/_1T_Begin.c/_02_pow_6181b856.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_02_pow(unsigned int,unsigned int))
static void _02_pow_fa29e82d_test(void)
{
    TEST_BEGING("Demo/_1T_Begin.c","_02_pow_6181b856", "", "_02_pow(unsigned int,unsigned int)");

    //$$VUNIT(BEGIN,TESTCASE/_02_pow(unsigned int,unsigned int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(unsigned int, g, g, 0);
    TDP_DEFINE_INIT_GRID(unsigned int, e, e, 0);
    TEST_RUN _02_pow_vpls(g, e);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_02_pow(unsigned int,unsigned int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_02_pow(unsigned int,unsigned int))

#include "VuxInter/Demo/_1T_Begin.c/_03_strtrml_a105e1aa.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_03_strtrml(char*))
static void _03_strtrml_4716f0f2_test(void)
{
    TEST_BEGING("Demo/_1T_Begin.c","_03_strtrml_a105e1aa", "", "_03_strtrml(char*)");

    //$$VUNIT(BEGIN,TESTCASE/_03_strtrml(char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str, str, 0);
    TEST_RUN _03_strtrml_vpls(str);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_03_strtrml(char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_03_strtrml(char*))

#include "VuxInter/Demo/_1T_Begin.c/_03_strtrml_1_a105e1aa.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_03_strtrml_1(char*))
static void _03_strtrml_1_4716f0f2_test(void)
{
    TEST_BEGING("Demo/_1T_Begin.c","_03_strtrml_1_a105e1aa", "", "_03_strtrml_1(char*)");

    //$$VUNIT(BEGIN,TESTCASE/_03_strtrml_1(char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str, str, 0);
    TEST_RUN _03_strtrml_1_vpls(str);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_03_strtrml_1(char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_03_strtrml_1(char*))

#include "VuxInter/Demo/_1T_Begin.c/_03_strtrml_2_a105e1aa.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_03_strtrml_2(char*))
static void _03_strtrml_2_4716f0f2_test(void)
{
    TEST_BEGING("Demo/_1T_Begin.c","_03_strtrml_2_a105e1aa", "", "_03_strtrml_2(char*)");

    //$$VUNIT(BEGIN,TESTCASE/_03_strtrml_2(char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str, str, 0);
    TEST_RUN _03_strtrml_2_vpls(str);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_03_strtrml_2(char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_03_strtrml_2(char*))

#include "VuxInter/Demo/_1T_Begin.c/_03_strtrml_ok_a105e1aa.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_03_strtrml_ok(char*))
static void _03_strtrml_ok_4716f0f2_test(void)
{
    TEST_BEGING("Demo/_1T_Begin.c","_03_strtrml_ok_a105e1aa", "", "_03_strtrml_ok(char*)");

    //$$VUNIT(BEGIN,TESTCASE/_03_strtrml_ok(char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str, str, 0);
    TEST_RUN _03_strtrml_ok_vpls(str);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_03_strtrml_ok(char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_03_strtrml_ok(char*))

#include "VuxInter/Demo/_1T_Begin.c/_04_strtrml_3006606c.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_04_strtrml(const char*,const char*,const char*))
static void _04_strtrml_534c72aa_test(void)
{
    TEST_BEGING("Demo/_1T_Begin.c","_04_strtrml_3006606c", "", "_04_strtrml(const char*,const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/_04_strtrml(const char*,const char*,const char*))
    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, mail_path, mail_path, 0);
    TDP_DEFINE_INIT_GRID(char*, p_subject, p_subject, 0);
    TDP_DEFINE_INIT_GRID(char*, p_content, p_content, 0);
    TEST_RUN _04_strtrml_vpls((const char*)mail_path, (const char*)p_subject, (const char*)p_content);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_04_strtrml(const char*,const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_04_strtrml(const char*,const char*,const char*))

VUEXTERNC void _demo__1t_begin_c_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: _03_strtrml_1_4716f0f2_test(); break;
        case 2: _04_strtrml_534c72aa_test(); break;
        case 3: _03_strtrml_4716f0f2_test(); break;
        case 4: _03_strtrml_2_4716f0f2_test(); break;
        case 5: _03_strtrml_ok_4716f0f2_test(); break;
        case 6: _01_add_c9d0b020_test(); break;
        case 7: _02_pow_fa29e82d_test(); break;
        }
    }
}