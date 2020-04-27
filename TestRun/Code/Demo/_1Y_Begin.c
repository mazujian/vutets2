
//Code/Demo/_1Y_Begin.c
#include "VuxInc/VuxFore.h"


#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "SendMail.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_1Y_Begin.c.h"
#include "VuxMock/Demo/_1Y_Begin.c"


/* //////////////////////////////////////////////
演示单元测试的基本原理与方法
功能: 计算两个整数的和
参数: a, 数1
      b, 数2
返回: a与b的和
///////////////////////////////////////////////*/
int _01_add3(int a, int b)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b}}; if(VuxMck("_01_add3",&vmckrt,vmckds,2,"",841,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_01_add3","int",841); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
演示VU4的基本功能与操作
功能: 计算两个无符号整数的幂
参数: g, 底数
      e, 指数
返回: g的e次幂
///////////////////////////////////////////////*/
unsigned int _02_pow3(unsigned int g, unsigned int e)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"unsigned int","g",(const void*)&g},{2,"unsigned int","e",(const void*)&e}}; if(VuxMck("_02_pow3",&vmckrt,vmckds,2,"",842,1,9)) return *(unsigned int*)vmckrt;{__VUFNINFO__("_02_pow3","unsigned int",842); VuxDbgBrkO() 
{
 VUXRS(1);    {unsigned int __vurtv__= 0;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
体验eTDD(easy TDD)
功能: 去除字符串前的空格。
参数: str, 字符串
返回: 原字符串的指针
///////////////////////////////////////////////*/
char* _03_strtrml3(char *str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("_03_strtrml3",&vmckrt,vmckds,1,"",843,1,9)) return *(char**)vmckrt;{__VUFNINFO__("_03_strtrml3","char*",843); VuxDbgBrkO() 
{
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
int _04_strtrml3(const char* mail_path, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","mail_path",(const void*)&mail_path},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_04_strtrml3",&vmckrt,vmckds,3,"",844,2,1)) return *(int*)vmckrt;{__VUFNINFO__("_04_strtrml3","int",844); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
    //发送邮件
 VUXRS(2);    {int __vurtv__= ( _06_send_mail(p_mails, p_subject, p_content));VUXFRTY();}
}}}

#include "VuxConn/Demo/_1Y_Begin.c.h"

VUEXTERNC void _demo__1y_begin_c_fps(void** cbfs, void** onfs, void** gvfs, int index)
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