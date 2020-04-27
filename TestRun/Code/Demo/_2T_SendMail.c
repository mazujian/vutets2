
//Code/Demo/_2T_SendMail.c
#include "VuxInc/VuxFore.h"



#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include "SendMail.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_2T_SendMail.c.h"
#include "VuxMock/Demo/_2T_SendMail.c"


/* //////////////////////////////////////////////
解析一个Email
参数: p_str，一个Email的完整字符串
      size 缓冲区大小
返回: 解析得到的Email对象指针
///////////////////////////////////////////////*/
Mail* _01_read_mail_one(const char* p_str, size_t size)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","size",(const void*)&size}}; if(VuxMck("_01_read_mail_one",&vmckrt,vmckds,2,"",1046,35,1)) return *(Mail**)vmckrt;{__VUFNINFO__("_01_read_mail_one","Mail*",1046); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    size_t i; VUXLV("size_t",i,1);
 VUXRSVB(2,2);    char *p_src, *p_des; VUXLV("char*",p_src,2); VUXLVS("char*",p_des,3); 
 VUXRSVB(3,4);    BOOL find_at = 0; VUXLV("BOOL",find_at,4);  //是否有@
 VUXRSVB(4,5);    BOOL find_dot = 0; VUXLV("BOOL",find_dot,5); //@后是否有.

    /*[学习提示：建议]    本文件的代码源于实际项目，测试比较复杂，如不易理解，建议先	  学习基础示例：      _4T_DataBasic.cpp：数据表格基础      _5T_InsideIO.cpp： 底层输入、局部输入与局部输出      _6T_WhiteBox.cpp： 白盒覆盖	*/

    /*[学习提示：建议]    测试已编写的代码，比边开发边测试难得多，测试他人编写的代码则更难，	  建议在_2Y_SendMail.c文件中，用Easy TDD方式编写代码并测试。	*/

    /*[学习提示：底层输入]    添加：在左边函数代码窗口，双击函数名，如malloc。    填值：不填值则调用实际代码，填值格式与其他数据相同。    举例：malloc() return在用例1填NULL，其他用例不填，	      则用例1返回NULL，其他用例正常申请内存。	*/
 VUXRSVB(5,6);    Mail* p_mail = (Mail*)vmck_malloc(sizeof(Mail)); VUXLV("Mail*",p_mail,6);
 
    if( VUXRS(6)&&(p_mail == 0))
    {{
 VUXRS(7);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}
 VUXRS(8);    memset(p_mail, 0, sizeof(Mail));

    //拷贝字符串并检查格式
 VUXRS(9);    i = 0; VUXRS(10);
    for(; VUXRS(12)&&( i<size); VUXRS(11), i++)
    {VUXRBR_LOOP2(2,4,62);{
 VUXRSVB(13,7);        char ch = p_str[i]; VUXLV("char",ch,7);
        if( VUXRS(14)&&(ch == '@'))
        {{ VUXRS(15); find_at = 1;
        }}
        else if( VUXRS(16)&&(ch == '.') && VUXRS(17)&&( find_at))
        {{ VUXRS(18); find_dot = 1;
        }}
 VUXRS(19);        p_mail->mail[i] = ch;
    }}

    //格式不正确
    if( VUXRS(20)&&(!find_at) || VUXRS(21)&&( !find_dot))
    {{
 VUXRS(22);        free(p_mail);
 VUXRS(23);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}

    //拷贝name和server
 VUXRS(24);    i = 0;
 VUXRS(25);    p_src = (char*)p_mail->mail;
 VUXRS(26);    p_des = (char*)p_mail->name;
    while( VUXRS(27)&&(*p_src))
    {VUXRBR_LOOP2(5,11,63);{
 VUXRSVB(28,8);        char ch = *p_src++; VUXLV("char",ch,8);
        if( VUXRS(29)&&(ch == '@'))
        {{
 VUXRS(30);            p_des = p_mail->server;
 VUXRS(31);            i = 0;
 VUXRS(32);VUXSEN(11,1,32);            continue;
        }}
 VUXRS(33);        p_des[i] = ch;
 VUXRS(34);        i++;
    }}

 VUXRS(35);    {Mail* __vurtv__= p_mail;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
从长字符串中读取一个Email的字符串
参数: pp_str，输入原始字符串，输出指向下一个Email的开头
      多个Email之间用'\n'或"\r\n"分隔
      p_mail_text，出参，一个Email的字符串
      size p_mail_text的缓冲区大小
返回: 解析成功返回TRUE，否则返回FALSE
///////////////////////////////////////////////*/
BOOL _02_read_mail_one_text(char** pp_str, char* p_mail_text, size_t size)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char**","pp_str",(const void*)&pp_str},{2,"char*","p_mail_text",(const void*)&p_mail_text},{3,"size_t","size",(const void*)&size}}; if(VuxMck("_02_read_mail_one_text",&vmckrt,vmckds,3,"",1047,21,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_read_mail_one_text","BOOL",1047); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    size_t i = 0; VUXLV("size_t",i,1);
 VUXRSVB(2,2);    size_t count = 0; VUXLV("size_t",count,2);
 VUXRSVB(3,3);    char* p_str = 0; VUXLV("char*",p_str,3);
    if( VUXRS(4)&&(pp_str == 0))
    {{
 VUXRS(5);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
 VUXRS(6);    p_str = *pp_str;
    
    //读取字符串，直到发现\n或\r\n
    while( VUXRS(7)&&(*p_str))
    {VUXRBR_LOOP2(2,4,64);{
 VUXRSVB(8,4);        char ch = *p_str++; VUXLV("char",ch,4);
        if( VUXRS(9)&&(ch == '\n') || VUXRS(10)&&( ch == '\r'))
        {{
 VUXRSVB(11,5);            char next = *p_str; VUXLV("char",next,5);
            if( VUXRS(12)&&(ch == '\r') && VUXRS(13)&&( next == '\n'))
            {{
 VUXRS(14);                p_str++;
            }}
 VUXRS(15);            *pp_str = p_str;//指向下一个mail的开头
 VUXRS(16);VUXSEN(4,1,16);            break;
        }}
        else
        {{
            if( VUXRS(17)&&(count <= size-1))
            {{ 
 VUXRS(18);                p_mail_text[count++] = ch;
            }}
            else
            {{
 VUXRS(19);                count++;
            }} //超长则丢弃
        }}
    }}
    /*[学习提示：局部输出]    添加：在左边函数代码窗口，点击输出位置，右键菜单选择"局部输出"。    填值：如要判断输出，则填值。无论是否判断，均会打印实际结果。    举例：可在retrun前输出并判断count的计算结果。	*/
 VUXRS(20);    *pp_str = p_str;
 VUXRS(21);    {BOOL __vurtv__= ( count > 0 && count <= size);VUXFRTY();} //超长返回FALSE
}}}

/* //////////////////////////////////////////////
将一个长字符串解析成Email链表
参数: p_str，由'\n'或"\r\n"分隔的一系列Email字符串
      buf_size 缓冲区大小
返回: 解析得到的Email链表
///////////////////////////////////////////////*/
Mail* _03_read_mails(char* p_str, size_t buf_size)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","buf_size",(const void*)&buf_size}}; if(VuxMck("_03_read_mails",&vmckrt,vmckds,2,"",1048,13,1)) return *(Mail**)vmckrt;{__VUFNINFO__("_03_read_mails","Mail*",1048); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    Mail* p_Mail = 0; VUXLV("Mail*",p_Mail,1);
 VUXRSVB(2,2);    Mail* p_Prev = 0; VUXLV("Mail*",p_Prev,2);
 VUXRSVB(3,3);    char mail_text[64]; VUXLVA("char[64]",mail_text,3);

    while( VUXRS(4)&&(*p_str))
    {VUXRBR_LOOP2(1,2,65);{
 VUXRS(5);        memset(mail_text, 0, sizeof(char)*64);
        //读取一个mail的字符串
        if( VUXRS(6)&&(_02_read_mail_one_text(&p_str, mail_text, 64)))
        {{
            //解析成Mail对象指针
 VUXRSVB(7,4);            Mail* p_one_mail = _01_read_mail_one(mail_text, 64); VUXLV("Mail*",p_one_mail,4);
            if( VUXRS(8)&&(p_one_mail != 0))
            {{
                //加入链表
                if( VUXRS(9)&&(p_Prev == 0))
                {{
 VUXRS(10);                    p_Mail = p_one_mail;
                }}
                else
                {{
 VUXRS(11);                    p_Prev->p_next = p_one_mail;
                }}
 VUXRS(12);                p_Prev = p_one_mail;
            }}
        }}
    }}
    /*[学习提示：回调赋值]    返回值是一个单向链表，可用回调赋值，在数据表格中通过填写数组      来判断整个链表，只需要一行数据。	回调赋值用于将难以表格驱动的数据类型，转换成易于表格驱动的数据类型，	  关于回调赋值的更多说明，请查看帮助：数据表格之二。	*/
 VUXRS(13);    {Mail* __vurtv__= p_Mail;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
剪切读取文件时被截断的Email
参数: p_str，长字符串，输出需去除被截断部分
      buf_size 缓冲区大小
      pp_tail 出参，保存被截断的部分
返回: 被截断部分的长度
///////////////////////////////////////////////*/
size_t _04_read_tail(char* p_str, size_t buf_size, char** pp_tail)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","buf_size",(const void*)&buf_size},{3,"char**","pp_tail",(const void*)&pp_tail}}; if(VuxMck("_04_read_tail",&vmckrt,vmckds,3,"",1049,18,1)) return *(size_t*)vmckrt;{__VUFNINFO__("_04_read_tail","size_t",1049); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    size_t i; VUXLV("size_t",i,1);
 VUXRSVB(2,2);    size_t count = 0; VUXLV("size_t",count,2);
    if( VUXRS(3)&&(buf_size == 0))
    {{ VUXRS(4); {size_t __vurtv__= 0;VUXFRTY();}
    }} VUXRS(5);

    //查找被截断的字符串
    for(i=buf_size-1; VUXRS(7)&&( i>=0); VUXRS(6), i--)
    {VUXRBR_LOOP2(2,4,66);{
 VUXRSVB(8,3);        char ch = p_str[i]; VUXLV("char",ch,3);
        if( VUXRS(9)&&(ch == '\n'))
        {{ VUXRS(10);VUXSEN(4,1,10); break;
        }}
 VUXRS(11);        count++;
    }}

    //拷贝被截断的字符串，并将原字符串中被截断位置设为'\0'
    if( VUXRS(12)&&(count == 0))
    {{ VUXRS(13); {size_t __vurtv__= 0;VUXFRTY();}
    }}
 VUXRS(14);    *pp_tail = (char*)malloc(count+1);
 VUXRS(15);    memcpy(*pp_tail, p_str+(buf_size-count), count);
 VUXRS(16);    (*pp_tail)[count] = '\0';
 VUXRS(17);    p_str[buf_size-count] = '\0'; 
 VUXRS(18);    {size_t __vurtv__= count;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
从文件读取一系列Email地址并解析成链表
参数: p_file，已打开的文件
返回: 解析得到的Email链表
///////////////////////////////////////////////*/
Mail* _05_read_mails_from_file(FILE* p_file)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","p_file",(const void*)&p_file}}; if(VuxMck("_05_read_mails_from_file",&vmckrt,vmckds,1,"",1079,38,1)) return *(Mail**)vmckrt;{__VUFNINFO__("_05_read_mails_from_file","Mail*",1079); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
 VUXRSVB(2,2);    Mail* p_prev = 0; VUXLV("Mail*",p_prev,2);
    /*[学习提示：局部输入]	用途：解决测试难题，降低测试难度，更多请看_5T_InsideIO.cpp。    添加：在左边函数代码窗口，选择要替换的代码或点击输入位置，	        右键菜单选择"局部输出(...)"    填值：与一般数据一样。    举例：代码中，buf_size为10240，要准备超过10k的数据文件很麻烦，	        可用局部输入设为较小的数。这种情形下，至少要有一个用例		    使用原值，以保证原值得以测试。	*/
 VUXRSVB(3,3);    size_t buf_size = 10240; VUXLV("size_t",buf_size,3);
 VUXRSVB(4,4);    size_t size; VUXLV("size_t",size,4);
 VUXRSVB(5,5);    size_t offset = 0; VUXLV("size_t",offset,5); //被截断的mail的长度
 VUXRSVB(6,6);    char* p_tail = 0; VUXLV("char*",p_tail,6);
 VUXRSVB(7,7);    char* p_buf = 0; VUXLV("char*",p_buf,7);
    
    if( VUXRS(8)&&(p_file == 0))
    {{
 VUXRS(9);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}
    
 VUXRS(10);    p_buf = (char*)vmck_malloc(buf_size);
    if( VUXRS(11)&&(p_buf == 0))
    {{
 VUXRS(12);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}

    /*[学习提示：数据文件]	在用例数据界面，右键菜单打开对数据文件的操作命令，可以新建、	  保存、导入数据、数据路径等。数据文件均保存于指定目录。	数据文件通常用以数据的重用，也可以直接在用例中打开文件。	*/
    /*[学习提示：用回调赋值操作文件]	系统已设定了FILE的回调赋值，输入path和flag即可打开文件。	path可用以下命令设定：文件(针对单元格)->导入文件路径。	  flag可填"rb+"，表示打开文件。	*/
    while( VUXRS(13)&&(1))
    {VUXRBR_LOOP2(3,6,60);{
 VUXRSVB(14,8);        Mail* p_mail; VUXLV("Mail*",p_mail,8);
 VUXRS(15);        memset(p_buf, 0, buf_size);
        if( VUXRS(16)&&(offset > 0))
        {{
            //上一次循环存在被截断的mail时，先拷贝到p_buf中
            ; VUXRS(17);
 VUXRS(18);            memcpy(p_buf, p_tail, offset);
 VUXRS(19);            free(p_tail);
 VUXRS(20);            p_tail = 0;
        }}

        //读取字符串到缓冲区
 VUXRS(21);        size = fread(p_buf+offset, sizeof(char), buf_size-offset, p_file);
        if( VUXRS(22)&&(size == 0))
        {{ VUXRS(23);VUXSEN(6,1,23); break;
        }}

        //检查最后一个mail是否读完整
 VUXRS(24);        offset = 0;
        ; VUXRS(25);
        if( VUXRS(26)&&(size == buf_size))
        {{
            if( VUXRS(27)&&(p_buf[size-1] != '\n'))
            {{
 VUXRS(28);                offset = _04_read_tail(p_buf, buf_size, &p_tail);  
                //如果有被截断的mail，则offset>0且p_tail!=NULL
                ; VUXRS(29);
            }}
        }}

        //解析缓冲区中的mail列表
 VUXRS(30);        p_mail = _03_read_mails(p_buf, buf_size);
        if( VUXRS(31)&&(p_mail != 0))
        {{
            //添加到整体列表中
            if( VUXRS(32)&&(p_prev == 0))
            {{
 VUXRS(33);                p_mails = p_mail;
            }}
            else
            {{
 VUXRS(34);                _09_add_to_tail(p_prev, p_mail);
            }}
 VUXRS(35);            p_prev = p_mail;
        }}
    }}

 VUXRS(36);    free(p_buf);
 VUXRS(37);    free(p_tail);
 VUXRS(38);    {Mail* __vurtv__= p_mails;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
发送一系列邮件，send_one未实现，因此并不能真正发送邮件
参数: p_mails Mail对象指针链表
      p_subject 邮件标题
      p_content 邮件内容
返回: 返回已发送的总数
///////////////////////////////////////////////*/
int _06_send_mail(Mail* p_mails, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"Mail*","p_mails",(const void*)&p_mails},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_06_send_mail",&vmckrt,vmckds,3,"",1008,7,1)) return *(int*)vmckrt;{__VUFNINFO__("_06_send_mail","int",1008); VuxDbgBrkO() 
{
    /*[学习提示：全局变量]    全局变量默认不加入表格，可手动加入：	在用例数据界面，点击“添加变量到表格”，并选择要加入的全局变量。	全局变量要每个用例设定初值，否则用例间会互相影响。	*/
    /*[学习提示：底层输入与多次赋值]    send_one可用底层输入返回需要的值，填值时用分号分隔不限数量的多个值，如：	TRUE;FALSE，表示第一次循环返回TRUE，第二次循环返回FALSE。	*/
    while( VUXRS(1)&&(p_mails != 0))
    {VUXRBR_LOOP2(1,2,57);{
        if( VUXRS(2)&&(send_one(p_mails, p_subject, p_content)))
        {{
 VUXRS(3);            g_sucess_count++;
        }}
        else
        {{
 VUXRS(4);            g_failed_count++;
        }}

 VUXRS(5);        p_mails = p_mails->p_next;
    }}

 VUXRS(6);    _10_free_mails(p_mails);
 VUXRS(7);    {int __vurtv__= g_sucess_count + g_failed_count;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
从文件读取Email链表，并发送邮件
参数: mail_path 保存邮件列表的文本文件
      p_subject 邮件标题
      p_content 邮件内容
返回: 返回已发送的总数
///////////////////////////////////////////////*/
int _07_send_mail_from_file(const char* mail_path, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","mail_path",(const void*)&mail_path},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_07_send_mail_from_file",&vmckrt,vmckds,3,"",1009,11,1)) return *(int*)vmckrt;{__VUFNINFO__("_07_send_mail_from_file","int",1009); VuxDbgBrkO() 
{
    /*[学习提示：简化测试工作]    此函数也要打开文件，但与_05_read_mails_from_file不同，并不直接对	    文件中的大量数据进行计算，因此，可以不操作实际文件，		用底层输入完成测试，简化测试工作，具体请看用例数据中的说明。	*/

 VUXRSVB(1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
 VUXRSVB(2,2);    FILE* p_file = 0; VUXLV("FILE*",p_file,2);
    if( VUXRS(3)&&(mail_path == 0))
    {{
 VUXRS(4);        {int __vurtv__= 0;VUXFRTY();}
    }}

    //打开文件
 VUXRS(5);    p_file = vmck_fopen(mail_path, "rb+");
    if( VUXRS(6)&&(p_file == 0))
    {{ VUXRS(7); {int __vurtv__= 0;VUXFRTY();}
    }}

    //读取并解析mail列表
 VUXRS(8);    p_mails = _05_read_mails_from_file(p_file);
    if( VUXRS(9)&&(p_mails == 0))
    {{ VUXRS(10); {int __vurtv__= 0;VUXFRTY();}
    }}

    //发送邮件
 VUXRS(11);    {int __vurtv__= ( _06_send_mail(p_mails, p_subject, p_content));VUXFRTY();}
}}}

/* //////////////////////////////////////////////
双向链表输入输出示例，功能同_06_send_mail，使用双向链表
参数: p_mails 用双向链表保存的Mail对象指针系列
      p_subject 邮件标题
      p_content 邮件内容
返回: 返回已发送的总数
///////////////////////////////////////////////*/
int _08_send_mail(ListItem* p_mails, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"ListItem*","p_mails",(const void*)&p_mails},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_08_send_mail",&vmckrt,vmckds,3,"",1010,6,1)) return *(int*)vmckrt;{__VUFNINFO__("_08_send_mail","int",1010); VuxDbgBrkO() 
{
    /*[学习提示：回调赋值与类型重设]    第一个参数是双向链表，可用回调赋值，在表格中填数组来初始化。    ListItem中的data成员是void*类型，需重设类型，方法：	在测试数据界面，选中一行，右键菜单选择“修改变量类型”	*/

    //循环发送所有邮件
    while( VUXRS(1)&&(p_mails != 0))
    {VUXRBR_LOOP2(1,2,58);{
        if( VUXRS(2)&&(send_one2(p_mails, p_subject, p_content)))
        {{
 VUXRS(3);            g_sucess_count++;
        }}
        else
        {{
 VUXRS(4);            g_failed_count++;
        }}
 VUXRS(5);        p_mails = p_mails->p_next;
    }}

    //p_mails未释放
 VUXRS(6);    {int __vurtv__= g_sucess_count + g_failed_count;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
将Mail对象指针加入到链表的最后
参数: p_mail，链表项
      p_new，新项
///////////////////////////////////////////////*/
void _09_add_to_tail(Mail* p_mail, Mail* p_new)
{VMCKDS vmckds[2]={{1,"Mail*","p_mail",(const void*)&p_mail},{2,"Mail*","p_new",(const void*)&p_new}}; if(!VuxMck("_09_add_to_tail",0,vmckds,2,"",1011,8,1)) {__VUFNID__(1011); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    Mail* p_tail; VUXLV("Mail*",p_tail,1);
    if( VUXRS(2)&&(p_mail == 0) || VUXRS(3)&&( p_new == 0))
    {{
 VUXRS(4);        VUXFRTN();
    }}

 VUXRS(5);    p_tail = p_mail;
    while( VUXRS(6)&&(p_tail->p_next != 0))
    {VUXRBR_LOOP2(2,4,59);{
 VUXRS(7);        p_tail = p_tail->p_next;
    }}

 VUXRS(8);    p_tail->p_next = p_new;
}VUXFRTNE();}}

/* //////////////////////////////////////////////
释放Mail链表
参数: p_mail，链表项
///////////////////////////////////////////////*/
void _10_free_mails(Mail* p_mail)
{VMCKDS vmckds[1]={{1,"Mail*","p_mail",(const void*)&p_mail}}; if(!VuxMck("_10_free_mails",0,vmckds,1,"",1012,5,1)) {__VUFNID__(1012); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    Mail* p_temp = p_mail; VUXLV("Mail*",p_temp,1);
    while( VUXRS(2)&&(p_temp != 0))
    {VUXRBR_LOOP2(1,2,61);{
 VUXRS(3);        p_mail = p_mail->p_next;
 VUXRS(4);        free(p_temp);
 VUXRS(5);        p_temp = p_mail;
    }}
}VUXFRTNE();}}

/* //////////////////////////////////////////////
发送邮件的入口函数
mail_path, mail_subject, mail_content，均为在SendMail.h中声明的全局变量。
为了验证单元测试可以随意隔离指定文件进行测试，这些变量均未定义。
///////////////////////////////////////////////*/
int sm_main(int arg, char** args)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg",(const void*)&arg},{2,"char**","args",(const void*)&args}}; if(VuxMck("sm_main",&vmckrt,vmckds,2,"",1013,2,1)) return *(int*)vmckrt;{__VUFNINFO__("sm_main","int",1013); VuxDbgBrkO() 
{
 VUXRS(1);    _07_send_mail_from_file(mail_path, mail_subject, mail_content);
 VUXRS(2);    {int __vurtv__= 0;VUXFRTY();}
}}}

#include "VuxConn/Demo/_2T_SendMail.c.h"

VUEXTERNC void _demo__2t_sendmail_c_fps(void** cbfs, void** onfs, void** gvfs, int index)
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