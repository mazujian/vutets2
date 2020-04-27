
//Code/Demo/_2Y_SendMail.c
#include "VuxInc/VuxFore.h"



#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "SendMail.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_2Y_SendMail.c.h"
#include "VuxMock/Demo/_2Y_SendMail.c"


/* //////////////////////////////////////////////
解析一个Email
参数: p_str，一个Email的完整字符串
      size 缓冲区大小
返回: 解析得到的Email对象指针
///////////////////////////////////////////////*/
Mail* _01_read_mail_one3(const char* p_str, size_t size)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","size",(const void*)&size}}; if(VuxMck("_01_read_mail_one3",&vmckrt,vmckds,2,"",1056,1,9)) return *(Mail**)vmckrt;{__VUFNINFO__("_01_read_mail_one3","Mail*",1056); VuxDbgBrkO() 
{
 VUXRS(1);    {Mail* __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
从长字符串中读取一个Email的字符串
参数: pp_str，输入原始字符串，输出指向下一个Email的开头
      多个Email之间用'\n'或"\r\n"分隔
      p_mail_text，出参，一个Email的字符串
      size p_mail_text的缓冲区大小
返回: 解析成功返回TRUE，否则返回FALSE
///////////////////////////////////////////////*/
BOOL _02_read_mail_one_text3(char** pp_str, char* p_mail_text, size_t size)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char**","pp_str",(const void*)&pp_str},{2,"char*","p_mail_text",(const void*)&p_mail_text},{3,"size_t","size",(const void*)&size}}; if(VuxMck("_02_read_mail_one_text3",&vmckrt,vmckds,3,"",1057,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_read_mail_one_text3","BOOL",1057); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
将一个长字符串解析成Email链表
参数: p_str，由'\n'或"\r\n"分隔的一系列Email字符串
      buf_size 缓冲区大小
返回: 解析得到的Email链表
///////////////////////////////////////////////*/
Mail* _03_read_mails3(char* p_str, size_t buf_size)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","buf_size",(const void*)&buf_size}}; if(VuxMck("_03_read_mails3",&vmckrt,vmckds,2,"",1058,1,9)) return *(Mail**)vmckrt;{__VUFNINFO__("_03_read_mails3","Mail*",1058); VuxDbgBrkO() 
{
 VUXRS(1);    {Mail* __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
剪切读取文件时被截断的Email
参数: p_str，长字符串，输出需去除被截断部分
      buf_size 缓冲区大小
      pp_tail 出参，保存被截断的部分
返回: 被截断部分的长度
///////////////////////////////////////////////*/
size_t _04_read_tail3(char* p_str, size_t buf_size, char** pp_tail)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","buf_size",(const void*)&buf_size},{3,"char**","pp_tail",(const void*)&pp_tail}}; if(VuxMck("_04_read_tail3",&vmckrt,vmckds,3,"",1069,1,9)) return *(size_t*)vmckrt;{__VUFNINFO__("_04_read_tail3","size_t",1069); VuxDbgBrkO() 
{
 VUXRS(1);    {size_t __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
从文件读取一系列Email地址并解析成链表
参数: p_file，已打开的文件
返回: 解析得到的Email链表
///////////////////////////////////////////////*/
Mail* _05_read_mails_from_file3(FILE* p_file)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","p_file",(const void*)&p_file}}; if(VuxMck("_05_read_mails_from_file3",&vmckrt,vmckds,1,"",1088,1,9)) return *(Mail**)vmckrt;{__VUFNINFO__("_05_read_mails_from_file3","Mail*",1088); VuxDbgBrkO() 
{
 VUXRS(1);    {Mail* __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
发送一系列邮件，send_one未实现，因此并不能真正发送邮件
参数: p_mails Mail对象指针链表
      p_subject 邮件标题
      p_content 邮件内容
返回: 返回已发送的总数
///////////////////////////////////////////////*/
int _06_send_mail3(Mail* p_mails, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"Mail*","p_mails",(const void*)&p_mails},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_06_send_mail3",&vmckrt,vmckds,3,"",975,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_06_send_mail3","int",975); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
从文件读取Email链表，并发送邮件
参数: mail_path 保存邮件列表的文本文件
      p_subject 邮件标题
      p_content 邮件内容
返回: 返回已发送的总数
///////////////////////////////////////////////*/
int _07_send_mail_from_file3(const char* mail_path, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","mail_path",(const void*)&mail_path},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_07_send_mail_from_file3",&vmckrt,vmckds,3,"",976,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_07_send_mail_from_file3","int",976); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
双向链表输入输出示例，功能同_06_send_mail，使用双向链表
参数: p_mails 用双向链表保存的Mail对象指针系列
      p_subject 邮件标题
      p_content 邮件内容
返回: 返回已发送的总数
///////////////////////////////////////////////*/
int _08_send_mail3(ListItem* p_mails, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"ListItem*","p_mails",(const void*)&p_mails},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_08_send_mail3",&vmckrt,vmckds,3,"",977,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_08_send_mail3","int",977); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
将Mail对象指针加入到链表的最后
参数: p_mail，链表项
      p_new，新项
///////////////////////////////////////////////*/
void _09_add_to_tail3(Mail* p_mail, Mail* p_new)
{VMCKDS vmckds[2]={{1,"Mail*","p_mail",(const void*)&p_mail},{2,"Mail*","p_new",(const void*)&p_new}}; if(!VuxMck("_09_add_to_tail3",0,vmckds,2,"",978,0,9)) {__VUFNID__(978); VuxDbgBrkO() 
{

}VUXFRTNE();}}

/* //////////////////////////////////////////////
释放Mail链表
参数: p_mail，链表项
///////////////////////////////////////////////*/
void _10_free_mails3(Mail* p_mail)
{VMCKDS vmckds[1]={{1,"Mail*","p_mail",(const void*)&p_mail}}; if(!VuxMck("_10_free_mails3",0,vmckds,1,"",979,0,9)) {__VUFNID__(979); VuxDbgBrkO() 
{

}VUXFRTNE();}}

/* //////////////////////////////////////////////
发送邮件的入口函数
mail_path, mail_subject, mail_content，均为在SendMail.h中声明的全局变量。
为了验证单元测试可以随意隔离指定文件进行测试，这些变量均未定义。
///////////////////////////////////////////////*/
int sm_main3(int arg, char** args)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg",(const void*)&arg},{2,"char**","args",(const void*)&args}}; if(VuxMck("sm_main3",&vmckrt,vmckds,2,"",980,1,9)) return *(int*)vmckrt;{__VUFNINFO__("sm_main3","int",980); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

#include "VuxConn/Demo/_2Y_SendMail.c.h"

VUEXTERNC void _demo__2y_sendmail_c_fps(void** cbfs, void** onfs, void** gvfs, int index)
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