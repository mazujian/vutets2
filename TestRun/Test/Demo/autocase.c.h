//VUINFO:autocase.c.h:4712:4712:17:1587607954:1587607954:1:1

//Demo/autocase.c
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/autocase.c]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/autocase.c"
#undef vtest_case_begin_global
#undef vtest_case_end_global 
#define vtest_case_begin_global vtest_case_begin_global_Demo_autocase_c
#define vtest_case_end_global vtest_case_end_global__Demo_autocase_c

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

#include "VuxInter/Demo/autocase.c/ac01_white_box_689fb5a2.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac01_white_box(int,int,int))
static void ac01_white_box_baea6ea7_test(void)
{
    TESTF_INITG("ac01_white_box_689fb5a2", "", "ac01_white_box(int,int,int)");

    //$$VUNIT(BEGIN,TESTCASE/ac01_white_box(int,int,int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, A, A, 0);
    TDP_DEFINE_INIT_GRID(int, B, B, 0);
    TDP_DEFINE_INIT_GRID(int, X, X, 0);
    TEST_RUN ac01_white_box_vpls(A, B, X);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac01_white_box(int,int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac01_white_box(int,int,int))

#include "VuxInter/Demo/autocase.c/ac02_middle_var01_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac02_middle_var01(int))
static void ac02_middle_var01_43378a62_test(void)
{
    TESTF_INITG("ac02_middle_var01_3921b90f", "", "ac02_middle_var01(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac02_middle_var01(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac02_middle_var01_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac02_middle_var01(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac02_middle_var01(int))

#include "VuxInter/Demo/autocase.c/ac03_middle_var02_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac03_middle_var02(int))
static void ac03_middle_var02_43378a62_test(void)
{
    TESTF_INITG("ac03_middle_var02_3921b90f", "", "ac03_middle_var02(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac03_middle_var02(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac03_middle_var02_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac03_middle_var02(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac03_middle_var02(int))

#include "VuxInter/Demo/autocase.c/myfunc().h"

//$$VUNIT(BEGIN,TESTFUNCTION/myfunc())
static void myfunc_test(void)
{
    TESTF_INITG("myfunc()", "", "myfunc()");

    //$$VUNIT(BEGIN,TESTCASE/myfunc())

    TEST_CASE_BEGING("default")
    TEST_RUN myfunc_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/myfunc())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/myfunc())

#include "VuxInter/Demo/autocase.c/ac11_pow_test_d23b6c4e.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac11_pow_test(int,int))
static void ac11_pow_test_c9d0b020_test(void)
{
    TESTF_INITG("ac11_pow_test_d23b6c4e", "", "ac11_pow_test(int,int)");

    //$$VUNIT(BEGIN,TESTCASE/ac11_pow_test(int,int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, g, g, 0);
    TDP_DEFINE_INIT_GRID(int, e, e, 0);
    TEST_RUN ac11_pow_test_vpls(g, e);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac11_pow_test(int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac11_pow_test(int,int))

#include "VuxInter/Demo/autocase.c/sub001().h"

//$$VUNIT(BEGIN,TESTFUNCTION/sub001())
static void sub001_test(void)
{
    TESTF_INITG("sub001()", "", "sub001()");

    //$$VUNIT(BEGIN,TESTCASE/sub001())

    TEST_CASE_BEGING("default")
    TEST_RUN sub001_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/sub001())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/sub001())

#include "VuxInter/Demo/autocase.c/ac12_call_sub_01().h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac12_call_sub_01())
static void ac12_call_sub_01_test(void)
{
    TESTF_INITG("ac12_call_sub_01()", "", "ac12_call_sub_01()");

    //$$VUNIT(BEGIN,TESTCASE/ac12_call_sub_01())

    TEST_CASE_BEGING("default")
    TEST_RUN ac12_call_sub_01_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac12_call_sub_01())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac12_call_sub_01())

#include "VuxInter/Demo/autocase.c/sub002_758ecff1.h"

//$$VUNIT(BEGIN,TESTFUNCTION/sub002(int*))
static void sub002_7851edbd_test(void)
{
    TESTF_INITG("sub002_758ecff1", "", "sub002(int*)");

    //$$VUNIT(BEGIN,TESTCASE/sub002(int*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int*, a, a, 0);
    TEST_RUN sub002_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/sub002(int*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/sub002(int*))

#include "VuxInter/Demo/autocase.c/ac13_call_sub_02().h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac13_call_sub_02())
static void ac13_call_sub_02_test(void)
{
    TESTF_INITG("ac13_call_sub_02()", "", "ac13_call_sub_02()");

    //$$VUNIT(BEGIN,TESTCASE/ac13_call_sub_02())

    TEST_CASE_BEGING("default")
    TEST_RUN ac13_call_sub_02_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac13_call_sub_02())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac13_call_sub_02())

#include "VuxInter/Demo/autocase.c/ac21_strlen_ce5c47b3.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac21_strlen(const char*))
static void ac21_strlen_9ee14a62_test(void)
{
    TESTF_INITG("ac21_strlen_ce5c47b3", "", "ac21_strlen(const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac21_strlen(const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str, str, 0);
    TEST_RUN ac21_strlen_vpls((const char*)str);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac21_strlen(const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac21_strlen(const char*))

#include "VuxInter/Demo/autocase.c/ac22_strcmp_22b791eb.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac22_strcmp(const char*,const char*))
static void ac22_strcmp_20c40c8f_test(void)
{
    TESTF_INITG("ac22_strcmp_22b791eb", "", "ac22_strcmp(const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac22_strcmp(const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char*, str2, str2, 0);
    TEST_RUN ac22_strcmp_vpls((const char*)str1, (const char*)str2);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac22_strcmp(const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac22_strcmp(const char*,const char*))

#include "VuxInter/Demo/autocase.c/ac23_strcmp2_22b791eb.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac23_strcmp2(const char*,const char*))
static void ac23_strcmp2_20c40c8f_test(void)
{
    TESTF_INITG("ac23_strcmp2_22b791eb", "", "ac23_strcmp2(const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac23_strcmp2(const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char*, str2, str2, 0);
    TEST_RUN ac23_strcmp2_vpls((const char*)str1, (const char*)str2);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac23_strcmp2(const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac23_strcmp2(const char*,const char*))

#include "VuxInter/Demo/autocase.c/ac24_strncmp_4bc920f6.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac24_strncmp(const char*,const char*,int))
static void ac24_strncmp_9847f64f_test(void)
{
    TESTF_INITG("ac24_strncmp_4bc920f6", "", "ac24_strncmp(const char*,const char*,int)");

    //$$VUNIT(BEGIN,TESTCASE/ac24_strncmp(const char*,const char*,int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char*, str2, str2, 0);
    TDP_DEFINE_INIT_GRID(int, n, n, 0);
    TEST_RUN ac24_strncmp_vpls((const char*)str1, (const char*)str2, n);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac24_strncmp(const char*,const char*,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac24_strncmp(const char*,const char*,int))

#include "VuxInter/Demo/autocase.c/ac25_strchr_37a3693d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac25_strchr(const char*,char,const char*))
static void ac25_strchr_8b1baf80_test(void)
{
    TESTF_INITG("ac25_strchr_37a3693d", "", "ac25_strchr(const char*,char,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac25_strchr(const char*,char,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char, chr, chr, 0);
    TDP_DEFINE_INIT_GRID(char*, name, name, 0);
    TEST_RUN ac25_strchr_vpls((const char*)str1, chr, (const char*)name);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac25_strchr(const char*,char,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac25_strchr(const char*,char,const char*))

#include "VuxInter/Demo/autocase.c/ac26_strrchr_37a3693d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac26_strrchr(const char*,char,const char*))
static void ac26_strrchr_8b1baf80_test(void)
{
    TESTF_INITG("ac26_strrchr_37a3693d", "", "ac26_strrchr(const char*,char,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac26_strrchr(const char*,char,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char, chr, chr, 0);
    TDP_DEFINE_INIT_GRID(char*, name, name, 0);
    TEST_RUN ac26_strrchr_vpls((const char*)str1, chr, (const char*)name);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac26_strrchr(const char*,char,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac26_strrchr(const char*,char,const char*))

#include "VuxInter/Demo/autocase.c/ac27_strspn_22b791eb.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac27_strspn(const char*,const char*))
static void ac27_strspn_20c40c8f_test(void)
{
    TESTF_INITG("ac27_strspn_22b791eb", "", "ac27_strspn(const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac27_strspn(const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char*, str2, str2, 0);
    TEST_RUN ac27_strspn_vpls((const char*)str1, (const char*)str2);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac27_strspn(const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac27_strspn(const char*,const char*))

#include "VuxInter/Demo/autocase.c/ac28_strcspn_22b791eb.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac28_strcspn(const char*,const char*))
static void ac28_strcspn_20c40c8f_test(void)
{
    TESTF_INITG("ac28_strcspn_22b791eb", "", "ac28_strcspn(const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac28_strcspn(const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char*, str2, str2, 0);
    TEST_RUN ac28_strcspn_vpls((const char*)str1, (const char*)str2);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac28_strcspn(const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac28_strcspn(const char*,const char*))

#include "VuxInter/Demo/autocase.c/ac29_strpbrk_22b791eb.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac29_strpbrk(const char*,const char*))
static void ac29_strpbrk_20c40c8f_test(void)
{
    TESTF_INITG("ac29_strpbrk_22b791eb", "", "ac29_strpbrk(const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac29_strpbrk(const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char*, str2, str2, 0);
    TEST_RUN ac29_strpbrk_vpls((const char*)str1, (const char*)str2);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac29_strpbrk(const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac29_strpbrk(const char*,const char*))

#include "VuxInter/Demo/autocase.c/ac30_strstr_22b791eb.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac30_strstr(const char*,const char*))
static void ac30_strstr_20c40c8f_test(void)
{
    TESTF_INITG("ac30_strstr_22b791eb", "", "ac30_strstr(const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac30_strstr(const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, str1, str1, 0);
    TDP_DEFINE_INIT_GRID(char*, str2, str2, 0);
    TEST_RUN ac30_strstr_vpls((const char*)str1, (const char*)str2);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac30_strstr(const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac30_strstr(const char*,const char*))

#include "VuxInter/Demo/autocase.c/ac41_fopen_ce5c47b3.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac41_fopen(const char*))
static void ac41_fopen_9ee14a62_test(void)
{
    TESTF_INITG("ac41_fopen_ce5c47b3", "", "ac41_fopen(const char*)");

    //$$VUNIT(BEGIN,TESTCASE/ac41_fopen(const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, path, path, 0);
    TEST_RUN ac41_fopen_vpls((const char*)path);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac41_fopen(const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac41_fopen(const char*))

#include "VuxInter/Demo/autocase.c/ac51_const_global_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac51_const_global(int))
static void ac51_const_global_43378a62_test(void)
{
    TESTF_INITG("ac51_const_global_3921b90f", "", "ac51_const_global(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac51_const_global(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TEST_RUN ac51_const_global_vpls(b);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac51_const_global(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac51_const_global(int))

#include "VuxInter/Demo/autocase.c/ac52_while_true_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac52_while_true(int))
static void ac52_while_true_43378a62_test(void)
{
    TESTF_INITG("ac52_while_true_3921b90f", "", "ac52_while_true(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac52_while_true(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac52_while_true_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac52_while_true(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac52_while_true(int))

#include "VuxInter/Demo/autocase.c/STM_EVAL_PBGetState_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/STM_EVAL_PBGetState(int))
static void STM_EVAL_PBGetState_43378a62_test(void)
{
    TESTF_INITG("STM_EVAL_PBGetState_3921b90f", "", "STM_EVAL_PBGetState(int)");

    //$$VUNIT(BEGIN,TESTCASE/STM_EVAL_PBGetState(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN STM_EVAL_PBGetState_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/STM_EVAL_PBGetState(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/STM_EVAL_PBGetState(int))

#include "VuxInter/Demo/autocase.c/ac53_while_true2_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac53_while_true2(int))
static void ac53_while_true2_43378a62_test(void)
{
    TESTF_INITG("ac53_while_true2_3921b90f", "", "ac53_while_true2(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac53_while_true2(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac53_while_true2_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac53_while_true2(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac53_while_true2(int))

#include "VuxInter/Demo/autocase.c/timeout_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/timeout(int))
static void timeout_43378a62_test(void)
{
    TESTF_INITG("timeout_3921b90f", "", "timeout(int)");

    //$$VUNIT(BEGIN,TESTCASE/timeout(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN timeout_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/timeout(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/timeout(int))

#include "VuxInter/Demo/autocase.c/ac54_call_timeout_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac54_call_timeout(int))
static void ac54_call_timeout_43378a62_test(void)
{
    TESTF_INITG("ac54_call_timeout_3921b90f", "", "ac54_call_timeout(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac54_call_timeout(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac54_call_timeout_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac54_call_timeout(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac54_call_timeout(int))

#include "VuxInter/Demo/autocase.c/sub_error_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/sub_error(int))
static void sub_error_43378a62_test(void)
{
    TESTF_INITG("sub_error_3921b90f", "", "sub_error(int)");

    //$$VUNIT(BEGIN,TESTCASE/sub_error(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN sub_error_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/sub_error(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/sub_error(int))

#include "VuxInter/Demo/autocase.c/ac55_call_error_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac55_call_error(int))
static void ac55_call_error_43378a62_test(void)
{
    TESTF_INITG("ac55_call_error_3921b90f", "", "ac55_call_error(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac55_call_error(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac55_call_error_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac55_call_error(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac55_call_error(int))

#include "VuxInter/Demo/autocase.c/ac61_path_select_689fb5a2.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac61_path_select(int,int,int))
static void ac61_path_select_baea6ea7_test(void)
{
    TESTF_INITG("ac61_path_select_689fb5a2", "", "ac61_path_select(int,int,int)");

    //$$VUNIT(BEGIN,TESTCASE/ac61_path_select(int,int,int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TDP_DEFINE_INIT_GRID(int, c, c, 0);
    TEST_RUN ac61_path_select_vpls(a, b, c);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac61_path_select(int,int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac61_path_select(int,int,int))

#include "VuxInter/Demo/autocase.c/ac62_MockAssign().h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac62_MockAssign())
static void ac62_MockAssign_test(void)
{
    TESTF_INITG("ac62_MockAssign()", "", "ac62_MockAssign()");

    //$$VUNIT(BEGIN,TESTCASE/ac62_MockAssign())

    TEST_CASE_BEGING("default")
    TEST_RUN ac62_MockAssign_vpls();
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac62_MockAssign())

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac62_MockAssign())

#include "VuxInter/Demo/autocase.c/ac63_test_case_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac63_test_case(int))
static void ac63_test_case_43378a62_test(void)
{
    TESTF_INITG("ac63_test_case_3921b90f", "", "ac63_test_case(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac63_test_case(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac63_test_case_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac63_test_case(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac63_test_case(int))

#include "VuxInter/Demo/autocase.c/ac71_reset_global_type_01_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac71_reset_global_type_01(int))
static void ac71_reset_global_type_01_43378a62_test(void)
{
    TESTF_INITG("ac71_reset_global_type_01_3921b90f", "", "ac71_reset_global_type_01(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac71_reset_global_type_01(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac71_reset_global_type_01_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac71_reset_global_type_01(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac71_reset_global_type_01(int))

#include "VuxInter/Demo/autocase.c/ac72_reset_global_type_02_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac72_reset_global_type_02(int))
static void ac72_reset_global_type_02_43378a62_test(void)
{
    TESTF_INITG("ac72_reset_global_type_02_3921b90f", "", "ac72_reset_global_type_02(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac72_reset_global_type_02(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac72_reset_global_type_02_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac72_reset_global_type_02(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac72_reset_global_type_02(int))

#include "VuxInter/Demo/autocase.c/ac73_reset_global_type_03_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac73_reset_global_type_03(int))
static void ac73_reset_global_type_03_43378a62_test(void)
{
    TESTF_INITG("ac73_reset_global_type_03_3921b90f", "", "ac73_reset_global_type_03(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac73_reset_global_type_03(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac73_reset_global_type_03_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac73_reset_global_type_03(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac73_reset_global_type_03(int))

#include "VuxInter/Demo/autocase.c/ac74_reset_global_type_04_3921b90f.h"

//$$VUNIT(BEGIN,TESTFUNCTION/ac74_reset_global_type_04(int))
static void ac74_reset_global_type_04_43378a62_test(void)
{
    TESTF_INITG("ac74_reset_global_type_04_3921b90f", "", "ac74_reset_global_type_04(int)");

    //$$VUNIT(BEGIN,TESTCASE/ac74_reset_global_type_04(int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TEST_RUN ac74_reset_global_type_04_vpls(a);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/ac74_reset_global_type_04(int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/ac74_reset_global_type_04(int))

VUEXTERNC void _demo_autocase_c_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: ac22_strcmp_20c40c8f_test(); break;
        case 2: ac41_fopen_9ee14a62_test(); break;
        case 3: ac53_while_true2_43378a62_test(); break;
        case 4: ac61_path_select_baea6ea7_test(); break;
        case 5: ac02_middle_var01_43378a62_test(); break;
        case 6: ac51_const_global_43378a62_test(); break;
        case 7: ac52_while_true_43378a62_test(); break;
        case 8: timeout_43378a62_test(); break;
        case 9: ac01_white_box_baea6ea7_test(); break;
        case 10: ac11_pow_test_c9d0b020_test(); break;
        case 11: ac62_MockAssign_test(); break;
        case 12: ac25_strchr_8b1baf80_test(); break;
        case 13: sub002_7851edbd_test(); break;
        case 14: ac03_middle_var02_43378a62_test(); break;
        case 15: sub_error_43378a62_test(); break;
        case 16: ac71_reset_global_type_01_43378a62_test(); break;
        case 17: ac63_test_case_43378a62_test(); break;
        case 18: ac27_strspn_20c40c8f_test(); break;
        case 19: ac26_strrchr_8b1baf80_test(); break;
        case 20: ac72_reset_global_type_02_43378a62_test(); break;
        case 21: ac24_strncmp_9847f64f_test(); break;
        case 22: ac29_strpbrk_20c40c8f_test(); break;
        case 23: ac28_strcspn_20c40c8f_test(); break;
        case 24: ac54_call_timeout_43378a62_test(); break;
        case 25: sub001_test(); break;
        case 26: ac73_reset_global_type_03_43378a62_test(); break;
        case 27: myfunc_test(); break;
        case 28: ac55_call_error_43378a62_test(); break;
        case 29: ac23_strcmp2_20c40c8f_test(); break;
        case 30: ac21_strlen_9ee14a62_test(); break;
        case 31: STM_EVAL_PBGetState_43378a62_test(); break;
        case 32: ac12_call_sub_01_test(); break;
        case 33: ac74_reset_global_type_04_43378a62_test(); break;
        case 34: ac30_strstr_20c40c8f_test(); break;
        case 35: ac13_call_sub_02_test(); break;
        }
    }
}