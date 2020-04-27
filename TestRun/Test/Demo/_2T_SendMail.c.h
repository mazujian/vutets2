//VUINFO:_2T_SendMail.c.h:4712:4712:17:1587607952:1587607952:1:1

//Demo/_2T_SendMail.c
/**************************************************
Author: UserName
Time Created: 2020-4-23
Time Updated: 
Description: Test file, For Testing [Demo/_2T_SendMail.c]
**************************************************/


//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。
//$$VUNIT(END,CUSTOMIZE_AREA)


#undef _TESTING_FILE_PATH_
#define _TESTING_FILE_PATH_ "Demo/_2T_SendMail.c"
#undef vtest_case_begin_global
#undef vtest_case_end_global 
#define vtest_case_begin_global vtest_case_begin_global_Demo__2T_SendMail_c
#define vtest_case_end_global vtest_case_end_global__Demo__2T_SendMail_c

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

#include "VuxInter/Demo/_2T_SendMail.c/_01_read_mail_one_fe3cae85.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_01_read_mail_one(const char*,size_t))
static void _01_read_mail_one_348ea4ea_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_01_read_mail_one_fe3cae85", "", "_01_read_mail_one(const char*,size_t)");

    //$$VUNIT(BEGIN,TESTCASE/_01_read_mail_one(const char*,size_t))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, p_str, p_str, 0);
    TDP_DEFINE_INIT_GRID(size_t, size, size, 0);
    TEST_RUN _01_read_mail_one_vpls((const char*)p_str, size);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_01_read_mail_one(const char*,size_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_01_read_mail_one(const char*,size_t))

#include "VuxInter/Demo/_2T_SendMail.c/_02_read_mail_one_text_2e278b31.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_02_read_mail_one_text(char**,char*,size_t))
static void _02_read_mail_one_text_c7e6a3d1_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_02_read_mail_one_text_2e278b31", "", "_02_read_mail_one_text(char**,char*,size_t)");

    //$$VUNIT(BEGIN,TESTCASE/_02_read_mail_one_text(char**,char*,size_t))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char**, pp_str, pp_str, 0);
    TDP_DEFINE_INIT_GRID(char*, p_mail_text, p_mail_text, 0);
    TDP_DEFINE_INIT_GRID(size_t, size, size, 0);
    TEST_RUN _02_read_mail_one_text_vpls(pp_str, p_mail_text, size);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_02_read_mail_one_text(char**,char*,size_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_02_read_mail_one_text(char**,char*,size_t))

#include "VuxInter/Demo/_2T_SendMail.c/_03_read_mails_9b5da8b0.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_03_read_mails(char*,size_t))
static void _03_read_mails_d02e524b_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_03_read_mails_9b5da8b0", "", "_03_read_mails(char*,size_t)");

    //$$VUNIT(BEGIN,TESTCASE/_03_read_mails(char*,size_t))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, p_str, p_str, 0);
    TDP_DEFINE_INIT_GRID(size_t, buf_size, buf_size, 0);
    TEST_RUN _03_read_mails_vpls(p_str, buf_size);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_03_read_mails(char*,size_t))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_03_read_mails(char*,size_t))

#include "VuxInter/Demo/_2T_SendMail.c/_04_read_tail_84f76416.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_04_read_tail(char*,size_t,char**))
static void _04_read_tail_afc85f51_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_04_read_tail_84f76416", "", "_04_read_tail(char*,size_t,char**)");

    //$$VUNIT(BEGIN,TESTCASE/_04_read_tail(char*,size_t,char**))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, p_str, p_str, 0);
    TDP_DEFINE_INIT_GRID(size_t, buf_size, buf_size, 0);
    TDP_DEFINE_INIT_GRID(char**, pp_tail, pp_tail, 0);
    TEST_RUN _04_read_tail_vpls(p_str, buf_size, pp_tail);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_04_read_tail(char*,size_t,char**))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_04_read_tail(char*,size_t,char**))

#include "VuxInter/Demo/_2T_SendMail.c/_05_read_mails_from_file_9bec7101.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_05_read_mails_from_file(FILE*))
static void _05_read_mails_from_file_b31e9979_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_05_read_mails_from_file_9bec7101", "", "_05_read_mails_from_file(FILE*)");

    //$$VUNIT(BEGIN,TESTCASE/_05_read_mails_from_file(FILE*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(FILE*, p_file, p_file, 0);
    TEST_RUN _05_read_mails_from_file_vpls(p_file);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_05_read_mails_from_file(FILE*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_05_read_mails_from_file(FILE*))

#include "VuxInter/Demo/_2T_SendMail.c/_06_send_mail_75c07f35.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_06_send_mail(Mail*,const char*,const char*))
static void _06_send_mail_26e8acd4_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_06_send_mail_75c07f35", "", "_06_send_mail(Mail*,const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/_06_send_mail(Mail*,const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(Mail*, p_mails, p_mails, 0);
    TDP_DEFINE_INIT_GRID(char*, p_subject, p_subject, 0);
    TDP_DEFINE_INIT_GRID(char*, p_content, p_content, 0);
    TEST_RUN _06_send_mail_vpls(p_mails, (const char*)p_subject, (const char*)p_content);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_06_send_mail(Mail*,const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_06_send_mail(Mail*,const char*,const char*))

#include "VuxInter/Demo/_2T_SendMail.c/_07_send_mail_from_file_3006606c.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_07_send_mail_from_file(const char*,const char*,const char*))
static void _07_send_mail_from_file_534c72aa_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_07_send_mail_from_file_3006606c", "", "_07_send_mail_from_file(const char*,const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/_07_send_mail_from_file(const char*,const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(char*, mail_path, mail_path, 0);
    TDP_DEFINE_INIT_GRID(char*, p_subject, p_subject, 0);
    TDP_DEFINE_INIT_GRID(char*, p_content, p_content, 0);
    TEST_RUN _07_send_mail_from_file_vpls((const char*)mail_path, (const char*)p_subject, (const char*)p_content);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_07_send_mail_from_file(const char*,const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_07_send_mail_from_file(const char*,const char*,const char*))

#include "VuxInter/Demo/_2T_SendMail.c/_08_send_mail_28cb21bb.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_08_send_mail(ListItem*,const char*,const char*))
static void _08_send_mail_282a708e_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_08_send_mail_28cb21bb", "", "_08_send_mail(ListItem*,const char*,const char*)");

    //$$VUNIT(BEGIN,TESTCASE/_08_send_mail(ListItem*,const char*,const char*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(ListItem*, p_mails, p_mails, 0);
    TDP_DEFINE_INIT_GRID(char*, p_subject, p_subject, 0);
    TDP_DEFINE_INIT_GRID(char*, p_content, p_content, 0);
    TEST_RUN _08_send_mail_vpls(p_mails, (const char*)p_subject, (const char*)p_content);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_08_send_mail(ListItem*,const char*,const char*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_08_send_mail(ListItem*,const char*,const char*))

#include "VuxInter/Demo/_2T_SendMail.c/_09_add_to_tail_a13493ab.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_09_add_to_tail(Mail*,Mail*))
static void _09_add_to_tail_f6cd7d2e_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_09_add_to_tail_a13493ab", "", "_09_add_to_tail(Mail*,Mail*)");

    //$$VUNIT(BEGIN,TESTCASE/_09_add_to_tail(Mail*,Mail*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(Mail*, p_mail, p_mail, 0);
    TDP_DEFINE_INIT_GRID(Mail*, p_new, p_new, 0);
    TEST_RUN _09_add_to_tail_vpls(p_mail, p_new);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_09_add_to_tail(Mail*,Mail*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_09_add_to_tail(Mail*,Mail*))

#include "VuxInter/Demo/_2T_SendMail.c/_10_free_mails_67b6e87d.h"

//$$VUNIT(BEGIN,TESTFUNCTION/_10_free_mails(Mail*))
static void _10_free_mails_7704dc8f_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","_10_free_mails_67b6e87d", "", "_10_free_mails(Mail*)");

    //$$VUNIT(BEGIN,TESTCASE/_10_free_mails(Mail*))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(Mail*, p_mail, p_mail, 0);
    TEST_RUN _10_free_mails_vpls(p_mail);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/_10_free_mails(Mail*))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/_10_free_mails(Mail*))

#include "VuxInter/Demo/_2T_SendMail.c/sm_main_a0335ffc.h"

//$$VUNIT(BEGIN,TESTFUNCTION/sm_main(int,char**))
static void sm_main_86881fed_test(void)
{
    TEST_BEGING("Demo/_2T_SendMail.c","sm_main_a0335ffc", "", "sm_main(int,char**)");

    //$$VUNIT(BEGIN,TESTCASE/sm_main(int,char**))

    TEST_CASE_BEGING("default")
    TDP_DEFINE_INIT_GRID(int, arg, arg, 0);
    TDP_DEFINE_INIT_GRID(char**, args, args, 0);
    TEST_RUN sm_main_vpls(arg, args);
    TEST_ASSERT_AUTO();
    TEST_CASE_ENDG()

    //$$VUNIT(END,TESTCASE/sm_main(int,char**))

    TEST_RATE(1000);
    TEST_END()
}
//$$VUNIT(END,TESTFUNCTION/sm_main(int,char**))

VUEXTERNC void _demo__2t_sendmail_c_test(void)
{
    int index = 0;
    while(VuxNextFunc(&index))
    {
        switch(index){
        case 1: _07_send_mail_from_file_534c72aa_test(); break;
        case 2: _06_send_mail_26e8acd4_test(); break;
        case 3: _04_read_tail_afc85f51_test(); break;
        case 4: _01_read_mail_one_348ea4ea_test(); break;
        case 5: _05_read_mails_from_file_b31e9979_test(); break;
        case 6: _02_read_mail_one_text_c7e6a3d1_test(); break;
        case 7: _03_read_mails_d02e524b_test(); break;
        case 8: sm_main_86881fed_test(); break;
        case 9: _09_add_to_tail_f6cd7d2e_test(); break;
        case 10: _10_free_mails_7704dc8f_test(); break;
        case 11: _08_send_mail_282a708e_test(); break;
        }
    }
}