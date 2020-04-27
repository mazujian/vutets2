//VUINFO:_4T_DataBasic.cpp.h:4712:4712:1:1587607953:1587607953:1:1

//Demo/_4T_DataBasic.cpp
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_4T_DataBasic.cpp]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_4T_DataBasic.cpp"
#undef vtest_case_begin_global
#undef vtest_case_end_global 
#define vtest_case_begin_global vtest_case_begin_global_Demo__4T_DataBasic_cpp
#define vtest_case_end_global vtest_case_end_global__Demo__4T_DataBasic_cpp

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

#include "VuxInter/Demo/_4T_DataBasic.cpp/_01_Ansi_a139db16.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_01_Ansi(int,char,float,char*))
static void _01_Ansi_ad173c4a_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_01_Ansi_a139db16", "", "_01_Ansi(int,char,float,char*)");

    //$$VUNIT(BEGIN,TESTCASE/_01_Ansi(int,char,float,char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, i, i, 0);
    TDP_DEFINE_INIT_GRID(char, ch, ch, 0);
    TDP_DEFINE_INIT_GRID(float, fl, fl, 0);
    TDP_DEFINE_INIT_GRID(char*, str, str, 0);
    TEST_RUN _01_Ansi_vpls(i, ch, fl, str);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_01_Ansi(int,char,float,char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_01_Ansi(int,char,float,char*))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_02_Unicode_e277ef9c.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_02_Unicode(short,WCHAR,double,unsigned short*))
static void _02_Unicode_25941b2f_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_02_Unicode_e277ef9c", "", "_02_Unicode(short,WCHAR,double,unsigned short*)");

    //$$VUNIT(BEGIN,TESTCASE/_02_Unicode(short,WCHAR,double,unsigned short*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(short, sh, sh, 0);
    TDP_DEFINE_INIT_GRID(WCHAR, wch, wch, 0);
    TDP_DEFINE_INIT_GRID(double, dl, dl, 0);
    TDP_DEFINE_INIT_GRID(unsigned short*, wstr, wstr, 0);
    TEST_RUN _02_Unicode_vpls(sh, wch, dl, wstr);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_02_Unicode(short,WCHAR,double,unsigned short*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_02_Unicode(short,WCHAR,double,unsigned short*))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_03_Struct_641dcffd.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_03_Struct(BASE*))
static void _03_Struct_4dd46cb0_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_03_Struct_641dcffd", "", "_03_Struct(BASE*)");

    //$$VUNIT(BEGIN,TESTCASE/_03_Struct(BASE*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(BASE*, pBase, pBase, 0);
    TEST_RUN _03_Struct_vpls(pBase);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_03_Struct(BASE*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_03_Struct(BASE*))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_04_Struct2_ac462d13.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_04_Struct2(DATA*))
static void _04_Struct2_73108a5a_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_04_Struct2_ac462d13", "", "_04_Struct2(DATA*)");

    //$$VUNIT(BEGIN,TESTCASE/_04_Struct2(DATA*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(DATA*, pData, pData, 0);
    TEST_RUN _04_Struct2_vpls(pData);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_04_Struct2(DATA*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_04_Struct2(DATA*))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_05_Array_a0aae26.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_05_Array(int[10],char[10],float[10],char*[10]))
static void _05_Array_e1ead960_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_05_Array_a0aae26", "", "_05_Array(int[10],char[10],float[10],char*[10])");

    //$$VUNIT(BEGIN,TESTCASE/_05_Array(int[10],char[10],float[10],char*[10]))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, i[10], i, 0);
    TDP_DEFINE_INIT_GRID(char, ch[10], ch, 0);
    TDP_DEFINE_INIT_GRID(float, fl[10], fl, 0);
    TDP_DEFINE_INIT_GRID(char*, str[10], str, 0);
    TEST_RUN _05_Array_vpls(i, ch, fl, str);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_05_Array(int[10],char[10],float[10],char*[10]))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_05_Array(int[10],char[10],float[10],char*[10]))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_06_Array2_6fcc286d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_06_Array2(DATA*[10]))
static void _06_Array2_c8d40b7d_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_06_Array2_6fcc286d", "", "_06_Array2(DATA*[10])");

    //$$VUNIT(BEGIN,TESTCASE/_06_Array2(DATA*[10]))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(DATA*, pDatas[10], pDatas, 0);
    TEST_RUN _06_Array2_vpls(pDatas);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_06_Array2(DATA*[10]))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_06_Array2(DATA*[10]))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_07_Pointer_aa93cdf.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_07_Pointer(int,int*,int**,int***))
static void _07_Pointer_4732f339_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_07_Pointer_aa93cdf", "", "_07_Pointer(int,int*,int**,int***)");

    //$$VUNIT(BEGIN,TESTCASE/_07_Pointer(int,int*,int**,int***))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int*, pa, pa, 0);
    TDP_DEFINE_INIT_GRID(int**, ppa, ppa, 0);
    TDP_DEFINE_INIT_GRID(int***, pppa, pppa, 0);
    TEST_RUN _07_Pointer_vpls(a, pa, ppa, pppa);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_07_Pointer(int,int*,int**,int***))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_07_Pointer(int,int*,int**,int***))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_08_Pointer2_ac462d13.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_08_Pointer2(DATA*))
static void _08_Pointer2_73108a5a_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_08_Pointer2_ac462d13", "", "_08_Pointer2(DATA*)");

    //$$VUNIT(BEGIN,TESTCASE/_08_Pointer2(DATA*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(DATA*, pData, pData, 0);
    TEST_RUN _08_Pointer2_vpls(pData);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_08_Pointer2(DATA*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_08_Pointer2(DATA*))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_09_EmptyObject_eb730695.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_09_EmptyObject(BASE*,CList<BASE*,BASE*>*))
static void _09_EmptyObject_b4d164cf_test(void)
{
    TESTF_INITG("_09_EmptyObject_eb730695", "", "_09_EmptyObject(BASE*,CList<BASE*,BASE*>*)");

    //$$VUNIT(BEGIN,TESTCASE/_09_EmptyObject(BASE*,CList<BASE*,BASE*>*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(BASE*, pData, pData, 0);
    CList<BASE*,BASE*>* pList; TDP_INIT_GRID("CList<BASE*,BASE*>*", pList, pList, 0);
    TEST_RUN _09_EmptyObject_vpls(pData, pList);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_09_EmptyObject(BASE*,CList<BASE*,BASE*>*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_09_EmptyObject(BASE*,CList<BASE*,BASE*>*))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_10_TypeReset_ea35bfa3.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_10_TypeReset(void*,char**))
static void _10_TypeReset_3d07f775_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_10_TypeReset_ea35bfa3", "", "_10_TypeReset(void*,char**)");

    //$$VUNIT(BEGIN,TESTCASE/_10_TypeReset(void*,char**))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(void*, pData, pData, 0);
    TDP_DEFINE_INIT_GRID(char**, strs, strs, 0);
    TEST_RUN _10_TypeReset_vpls(pData, strs);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_10_TypeReset(void*,char**))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_10_TypeReset(void*,char**))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_11_CallScript_282e8ba5.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_11_CallScript(MYSDATA*))
static void _11_CallScript_54c06d02_test(void)
{
    TEST_BEGING("Demo/_4T_DataBasic.cpp","_11_CallScript_282e8ba5", "", "_11_CallScript(MYSDATA*)");

    //$$VUNIT(BEGIN,TESTCASE/_11_CallScript(MYSDATA*))

    ///
    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(MYSDATA*, pMyData, pMyData, 0);
    TEST_RUN _11_CallScript_vpls(pMyData);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_11_CallScript(MYSDATA*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_11_CallScript(MYSDATA*))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_12_FunctionPtr_fca97ffb.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_12_FunctionPtr(int,int,MYFUNC,int(*)(int a,int b)))
static void _12_FunctionPtr_3360f6a0_test(void)
{
    TESTF_INITG("_12_FunctionPtr_fca97ffb", "", "_12_FunctionPtr(int,int,MYFUNC,int(*)(int a,int b))");

    //$$VUNIT(BEGIN,TESTCASE/_12_FunctionPtr(int,int,MYFUNC,int(*)(int a,int b)))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TDP_DEFINE_INIT_GRID(MYFUNC, pFunc, pFunc, 0);
    int(* pFunc2)(int a,int b) ; TDP_INIT_GRID("int(*)(int a,int b)", pFunc2, pFunc2, 0);
    TEST_RUN _12_FunctionPtr_vpls(a, b, pFunc, (int(*)(int a,int b))pFunc2);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_12_FunctionPtr(int,int,MYFUNC,int(*)(int a,int b)))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_12_FunctionPtr(int,int,MYFUNC,int(*)(int a,int b)))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_12_VariablePtr_26d3e555.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_12_VariablePtr(int*,int*,int))
static void _12_VariablePtr_8aa3c41d_test(void)
{
    TESTF_INITG("_12_VariablePtr_26d3e555", "", "_12_VariablePtr(int*,int*,int)");

    //$$VUNIT(BEGIN,TESTCASE/_12_VariablePtr(int*,int*,int))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int*, item, item, 0);
    TDP_DEFINE_INIT_GRID(int*, items, items, 0);
    TDP_DEFINE_INIT_GRID(int, count, count, 0);
    TEST_RUN _12_VariablePtr_vpls(item, items, count);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_12_VariablePtr(int*,int*,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_12_VariablePtr(int*,int*,int))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_13_NumberPointer_d23b6c4e.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_13_NumberPointer(int,int))
static void _13_NumberPointer_c9d0b020_test(void)
{
    TESTF_INITG("_13_NumberPointer_d23b6c4e", "", "_13_NumberPointer(int,int)");

    //$$VUNIT(BEGIN,TESTCASE/_13_NumberPointer(int,int))

    ///
    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, a, a, 0);
    TDP_DEFINE_INIT_GRID(int, b, b, 0);
    TEST_RUN _13_NumberPointer_vpls(a, b);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_13_NumberPointer(int,int))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_13_NumberPointer(int,int))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_14_CListTest_66d27ace.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_14_CListTest(clist_t*))
static void _14_CListTest_56697498_test(void)
{
    TESTF_INITG("_14_CListTest_66d27ace", "", "_14_CListTest(clist_t*)");

    //$$VUNIT(BEGIN,TESTCASE/_14_CListTest(clist_t*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(clist_t*, pDatas, pDatas, 0);
    TEST_RUN _14_CListTest_vpls(pDatas);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_14_CListTest(clist_t*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_14_CListTest(clist_t*))

#include "VuxInter/Demo/_4T_DataBasic.cpp/_15_CallbackDefine_63619ad7.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_15_CallbackDefine(school_t*))
static void _15_CallbackDefine_2b5b6ee8_test(void)
{
    TESTF_INITG("_15_CallbackDefine_63619ad7", "", "_15_CallbackDefine(school_t*)");

    //$$VUNIT(BEGIN,TESTCASE/_15_CallbackDefine(school_t*))

    ///
    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(school_t*, pSchool, pSchool, 0);
    TEST_RUN _15_CallbackDefine_vpls(pSchool);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_15_CallbackDefine(school_t*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_15_CallbackDefine(school_t*))

void _demo__4t_databasic_cpp_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: _11_CallScript_54c06d02_test(); break;
        case 2: _06_Array2_c8d40b7d_test(); break;
        case 3: _13_NumberPointer_c9d0b020_test(); break;
        case 4: _08_Pointer2_73108a5a_test(); break;
        case 5: _05_Array_e1ead960_test(); break;
        case 6: _14_CListTest_56697498_test(); break;
        case 7: _03_Struct_4dd46cb0_test(); break;
        case 8: _15_CallbackDefine_2b5b6ee8_test(); break;
        case 9: _04_Struct2_73108a5a_test(); break;
        case 10: _01_Ansi_ad173c4a_test(); break;
        case 11: _07_Pointer_4732f339_test(); break;
        case 12: _09_EmptyObject_b4d164cf_test(); break;
        case 13: _12_VariablePtr_8aa3c41d_test(); break;
        case 14: _12_FunctionPtr_3360f6a0_test(); break;
        case 15: _10_TypeReset_3d07f775_test(); break;
        case 16: _02_Unicode_25941b2f_test(); break;
        }
    }
}