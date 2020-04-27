
//Code/Demo/_1U_Begin.c
#include "VuxInc/VuxFore.h"


#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "SendMail.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_1U_Begin.c.h"
#include "VuxMock/Demo/_1U_Begin.c"


/* //////////////////////////////////////////////
演示单元测试的基本原理与方法
功能: 计算两个整数的和
参数: a, 数1
      b, 数2
返回: a与b的和
///////////////////////////////////////////////*/
int _01_add2(int a, int b)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b}}; if(VuxMck("_01_add2",&vmckrt,vmckds,2,"",908,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_01_add2","int",908); VuxDbgBrkO() 
{
    /*[学习提示：巧用示例，快速掌握单元测试]	示例集实际上是一部C/C++单元测试简明教程，可以浏览已测试的用例和结果，	  可以对照练习，可以体验边开发边测试。	示例代码中的学习提示，以及数据中的用例说明或数据后的注释，简明扼要地	  讲解了单元测试及VU4使用要点。	示例涵盖了C/C++单元测试的难点和解决方法，掌握了这些方法，并灵活运用，	  测试自己的代码就不会困难。	如果您只是学习单元测试，VU4的示例集是最好的教程，可以轻松掌握最先进的	  单元测试技术，掌握单元测试的要点、难点和解决问题的思路和方法。	如果您需要在自己的项目中评估VU，在申请试用License前，最好先掌握示例所	  阐述的要点和技巧，这样才能轻松地测试自己的代码，顺利完成评估。	*/
      
     /*[学习提示：示例集内容及功能]	----已完成测试的示例，建议快速浏览----    _1T_Begin.c：         入门示例    _2T_SendMail.c：      C语言实际项目示例    _3T_MyClass.cpp：     C++实际项目示例    _4T_DataBasic.cpp：   基础专题一：数据表格基础示例	_5T_InsideIO.cpp：    基础专题二：底层输入、局部输入、局部输出	_6T_WhiteBox.cpp：    基础专题三：完成白盒覆盖示例    _7T_EditCaseCode.cpp：需生成或修改用例代码的场景示例	----未测试示例，建议对照已测试示例，练习测试过程----    _1U_Begin.c：         代码拷贝自：_1T_Begin.c    _2U_SendMail.c：      代码拷贝自：_2T_SendMail.c    _3U_MyClass.cpp：     代码拷贝自：_3T_MyClass.cpp    _4U_DataBasic.cpp：   代码拷贝自：_4T_DataBasic.cpp	_5U_InsideIO.cpp：    代码拷贝自：_5T_InsideIO.cpp	_6U_WhiteBox.cpp：    代码拷贝自：_6T_WhiteBox.cpp    _7U_EditCaseCode.cpp：代码拷贝自：_7T_EditCaseCode.cpp    ----eTDD(easy TDD)体验与学习，代码未编写，请用eTDD方式编写和测试----	_1Y_Begin.c：         函数功能与_1T_Begin.c相同	_2Y_SendMail.c：      函数功能与_2T_SendMail.c相同	_3Y_MyClass.cpp：     函数功能与_3T_MyClass.cpp相同	_8Y_String.c：        简单的C字符串处理函数    */

    /*[学习提示：单元测试基本原理与方法]    在用例数据表格中：    输入的含义是赋值，如：    a输入1，b输入2，相当于：a=1; b=2;    输出是预期的正确结果，自动与实际结果比较，如:    ret输出3，相当于：    ASSERT(ret == 3)，如果ret != 3，则报告错误。    比较操作符缺省为==，还支持：& > < >= <= !=等，如：    & 0x1000      > 100    != 100    > 10 && < 100     */

 VUXRS(1);    {int __vurtv__= a-b;VUXFRTY();} //+写成了-
}}}

/* //////////////////////////////////////////////
演示VU4的基本功能与操作
功能: 计算两个无符号整数的幂
参数: g, 底数
      e, 指数
返回: g的e次幂
///////////////////////////////////////////////*/
unsigned int _02_pow2(unsigned int g, unsigned int e)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"unsigned int","g",(const void*)&g},{2,"unsigned int","e",(const void*)&e}}; if(VuxMck("_02_pow2",&vmckrt,vmckds,2,"",909,15,1)) return *(unsigned int*)vmckrt;{__VUFNINFO__("_02_pow2","unsigned int",909); VuxDbgBrkO() 
{
    /*[学习提示：VU4基本操作]    建立更多用例：选中一列，并点击"添加用例"	切换用例输出：右键菜单可切换用例；	              点击失败的测试，自动切换到对应的用例。	观察程序行为：对比当前用例的输入输出以及所执行的代码。	              黑色代码为当前用例所执行的代码。    找出错误原因：观察程序行为，可发现由于result初始值为0，	              导致for循环的计算结果恒为0。	白盒覆盖标记：[T/F]未覆盖的条件真/假值,[M]未覆盖MCDC；	              <T/F>未覆盖的判定真/假值；				  红色的分支或路径未覆盖。	完成白盒覆盖：选中未覆盖单位，右键菜单选择"用例设计" 。	              关于白盒覆盖及用例设计器的使用，请看_6T_WhiteBox.cpp中的_01_WhileBox()。	标记不可覆盖：for循环的第2分支不可覆盖，可标记为不可覆盖。方法：	              点击未覆盖单位，右键菜单选择"删除逻辑单位"。    */
 VUXRSVB(1,1);    unsigned int result = 1; VUXLV("unsigned int",result,1);

    if( VUXRS(2)&&(g == 0))
    {{
 VUXRS(3);        result = 0;
    }}
    else if( VUXRS(4)&&(g == 1))
    {{
 VUXRS(5);        result = 1;
    }}
    else if( VUXRS(6)&&(e == 0))
    {{ 
 VUXRS(7);        result = 1;
    }}
    else if( VUXRS(8)&&(e == 1))
    {{
 VUXRS(9);        result = g;
    }}
    else
    {{
 VUXRSVB(10,2);        unsigned int i; VUXLV("unsigned int",i,2); VUXRS(11);
        for(i=0; VUXRS(13)&&( i<e); VUXRS(12), i++)
        {VUXRBR_LOOP2(2,7,23);{
 VUXRS(14);            result *= g;
        }}
    }}

 VUXRS(15);    {unsigned int __vurtv__= result;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
体验eTDD(easy TDD)
功能: 去除字符串前的空格。
参数: str, 字符串
返回: 原字符串的指针
///////////////////////////////////////////////*/
char* _03_strtrml2(char *str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("_03_strtrml2",&vmckrt,vmckds,1,"",910,1,9)) return *(char**)vmckrt;{__VUFNINFO__("_03_strtrml2","char*",910); VuxDbgBrkO() 
{
    /*[学习提示：easy TDD]    TDD：测试驱动开发，核心：设计先行、小步前进	easy TDD：简称eTDD，易行版TDD，解决了TDD很难实行的问题。easy TDD过程：	          逻辑块可视编程：涉及逻辑计算时，在表格中记录功能点，就是用例，			                  一边开发，自动执行测试，随时观察程序行为。			  提交前完成覆盖：简单的代码，可在提交前或模块完成时再进行测试，			                  通常不需要建立用例或只需简单用例。			  只进行粗略调试：调试只用于流程跟踪和bug粗略定位，除bug时，根据bug表现，			                  对可疑函数添加用例并观察测试结果，通常很容易错出错误原因，							  然后修改代码使测试通过。	eTDD效益：对于有一定复杂度的代码，如_2T_SendMail.c，编写合格代码的效率	           是传统方式的五倍以上。原因：			   a. 用例是明确的设计，设计先行，不走弯路；               b. 对代码的任意添加或修改，都可以观察其行为(程序行为就是：什么输入执行				  哪些代码代码产生什么输出)，随时验证思路、发现错误、激发灵感。			   c. 功能逻辑不需要调试，节约90%调试时间。    eTDD实施：不用改变原来的开发流程和习惯。	          对于功能需求较复杂的代码，最好先在数据表格中记录功能点，以明确需求，				这就是用例；或者在需要察看程序行为时，添加用例。			  简单的代码可以不必先考虑，模块完成后，在VU主界面左边最近更新列表中，				对未测试和黄灯函数执行测试，并视需要添加用例完成覆盖。    */

   /*[学习提示：体验easy TDD]    请用IDE或文本编辑器打开Samples/Demo/目录下的	_1U_Begin.c或_1Y_Begin.c，自行编写strtrml()函数的代码，体验easy TDD过程，	其中，_1U_Begin.c中的strtrml()已建立测试用例，_1Y_Begin.c则是初始状态。	更多更复杂的体验：_8Y_String.c _2Y_SendMail.c _3Y_MyClass.cpp。	*/

 VUXRS(1);    {char* __vurtv__= str;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
体验针对逻辑块的eTDD(easy TDD)
函数的功能是从文件读取Email链表，并发送邮件，在发送前，
对Email链表中的每一个Email对象，删除name中字符串左边的空格。
删除name中字符串左边的空格的代码，是我们要使用eTDD进行编写和
测试的逻辑块。本示例用于体验针对夹在一堆代码中的逻辑块的eTDD。
参数: mail_path 保存邮件列表的文本文件
      p_subject 邮件标题
      p_content 邮件内容
返回: 返回已发送的总数
///////////////////////////////////////////////*/
int _04_strtrml2(const char* mail_path, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","mail_path",(const void*)&mail_path},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_04_strtrml2",&vmckrt,vmckds,3,"",911,22,1)) return *(int*)vmckrt;{__VUFNINFO__("_04_strtrml2","int",911); VuxDbgBrkO() 
{
   /*[学习提示：综合应用]    本示例涉及底层输入、局部输出、回调赋值等技术，	应在学完其他示例后，才学习本示例。	*/

 VUXRSVB(1,1);    Mail* p_mail = 0; VUXLV("Mail*",p_mail,1);
 VUXRSVB(2,2);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,2);
 VUXRSVB(3,3);    FILE* p_file = 0; VUXLV("FILE*",p_file,3);

    //打开文件
 VUXRS(4);    p_file = fopen(mail_path, "rb+");
    if( VUXRS(5)&&(p_file == 0))
    {{ VUXRS(6); {int __vurtv__= 0;VUXFRTY();}
    }}

    //读取并解析mail列表
 VUXRS(7);    p_mails = _05_read_mails_from_file2(p_file);
    if( VUXRS(8)&&(p_mails == 0))
    {{ VUXRS(9); {int __vurtv__= 0;VUXFRTY();}
    }}

    //删除每个p_mail中name成员中左边空格
 VUXRS(10);    p_mail = p_mails;
    while( VUXRS(11)&&(p_mail != 0))
    {VUXRBR_LOOP2(3,6,24);{
 VUXRSVB(12,4);        char* str = p_mail->name; VUXLV("char*",str,4);
 VUXRSVB(13,5);        char* ptr = str; VUXLV("char*",ptr,5); //保存初始指针
 VUXRSVB(14,6);        int count = 0; VUXLV("int",count,6); //左边空格的数量
        
        //计算左边空格的数量
        while( VUXRS(15)&&(*str++ == ' '))
        {VUXRBR_LOOP2(4,8,25);{
 VUXRS(16);            count++;
        }}
        
        //复位指针
 VUXRS(17);        str = ptr;
        
        //移动字符串，覆盖左边空格
        while( VUXRS(18)&&(*str))
        {VUXRBR_LOOP2(5,10,26);{
 VUXRS(19);            *str = *(str+count);
 VUXRS(20);            str++;
        }}
        
 VUXRS(21);        p_mail = p_mail->p_next;
    }}

    //发送邮件
 VUXRS(22);    {int __vurtv__= ( _06_send_mail2(p_mails, p_subject, p_content));VUXFRTY();}
}}}

#include "VuxConn/Demo/_1U_Begin.c.h"

VUEXTERNC void _demo__1u_begin_c_fps(void** cbfs, void** onfs, void** gvfs, int index)
{
    cbfs[index] = (void*)VuxCallBack;
    onfs[index] = (void*)VuxObjectNew;
    
#ifdef VUX_GVAR_INIT_DEFINED 
    gvfs[index] = (void*)VuxGlobalVarInit;
#endif
    
#ifdef VUX_SET_USERF_DEFINED 
    VuxCallSetUserFp();
#endif
}