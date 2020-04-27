
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
����һ��Email
����: p_str��һ��Email�������ַ���
      size ��������С
����: �����õ���Email����ָ��
///////////////////////////////////////////////*/
Mail* _01_read_mail_one(const char* p_str, size_t size)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","size",(const void*)&size}}; if(VuxMck("_01_read_mail_one",&vmckrt,vmckds,2,"",1046,35,1)) return *(Mail**)vmckrt;{__VUFNINFO__("_01_read_mail_one","Mail*",1046); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    size_t i; VUXLV("size_t",i,1);
 VUXRSVB(2,2);    char *p_src, *p_des; VUXLV("char*",p_src,2); VUXLVS("char*",p_des,3); 
 VUXRSVB(3,4);    BOOL find_at = 0; VUXLV("BOOL",find_at,4);  //�Ƿ���@
 VUXRSVB(4,5);    BOOL find_dot = 0; VUXLV("BOOL",find_dot,5); //@���Ƿ���.

    /*[ѧϰ��ʾ������]    ���ļ��Ĵ���Դ��ʵ����Ŀ�����ԱȽϸ��ӣ��粻����⣬������	  ѧϰ����ʾ����      _4T_DataBasic.cpp�����ݱ�����      _5T_InsideIO.cpp�� �ײ����롢�ֲ�������ֲ����      _6T_WhiteBox.cpp�� �׺и���	*/

    /*[ѧϰ��ʾ������]    �����ѱ�д�Ĵ��룬�ȱ߿����߲����ѵö࣬�������˱�д�Ĵ�������ѣ�	  ������_2Y_SendMail.c�ļ��У���Easy TDD��ʽ��д���벢���ԡ�	*/

    /*[ѧϰ��ʾ���ײ�����]    ��ӣ�����ߺ������봰�ڣ�˫������������malloc��    ��ֵ������ֵ�����ʵ�ʴ��룬��ֵ��ʽ������������ͬ��    ������malloc() return������1��NULL�������������	      ������1����NULL�������������������ڴ档	*/
 VUXRSVB(5,6);    Mail* p_mail = (Mail*)vmck_malloc(sizeof(Mail)); VUXLV("Mail*",p_mail,6);
 
    if( VUXRS(6)&&(p_mail == 0))
    {{
 VUXRS(7);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}
 VUXRS(8);    memset(p_mail, 0, sizeof(Mail));

    //�����ַ���������ʽ
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

    //��ʽ����ȷ
    if( VUXRS(20)&&(!find_at) || VUXRS(21)&&( !find_dot))
    {{
 VUXRS(22);        free(p_mail);
 VUXRS(23);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}

    //����name��server
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
�ӳ��ַ����ж�ȡһ��Email���ַ���
����: pp_str������ԭʼ�ַ��������ָ����һ��Email�Ŀ�ͷ
      ���Email֮����'\n'��"\r\n"�ָ�
      p_mail_text�����Σ�һ��Email���ַ���
      size p_mail_text�Ļ�������С
����: �����ɹ�����TRUE�����򷵻�FALSE
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
    
    //��ȡ�ַ�����ֱ������\n��\r\n
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
 VUXRS(15);            *pp_str = p_str;//ָ����һ��mail�Ŀ�ͷ
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
            }} //��������
        }}
    }}
    /*[ѧϰ��ʾ���ֲ����]    ��ӣ�����ߺ������봰�ڣ�������λ�ã��Ҽ��˵�ѡ��"�ֲ����"��    ��ֵ����Ҫ�ж����������ֵ�������Ƿ��жϣ������ӡʵ�ʽ����    ����������retrunǰ������ж�count�ļ�������	*/
 VUXRS(20);    *pp_str = p_str;
 VUXRS(21);    {BOOL __vurtv__= ( count > 0 && count <= size);VUXFRTY();} //��������FALSE
}}}

/* //////////////////////////////////////////////
��һ�����ַ���������Email����
����: p_str����'\n'��"\r\n"�ָ���һϵ��Email�ַ���
      buf_size ��������С
����: �����õ���Email����
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
        //��ȡһ��mail���ַ���
        if( VUXRS(6)&&(_02_read_mail_one_text(&p_str, mail_text, 64)))
        {{
            //������Mail����ָ��
 VUXRSVB(7,4);            Mail* p_one_mail = _01_read_mail_one(mail_text, 64); VUXLV("Mail*",p_one_mail,4);
            if( VUXRS(8)&&(p_one_mail != 0))
            {{
                //��������
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
    /*[ѧϰ��ʾ���ص���ֵ]    ����ֵ��һ�������������ûص���ֵ�������ݱ����ͨ����д����      ���ж���������ֻ��Ҫһ�����ݡ�	�ص���ֵ���ڽ����Ա���������������ͣ�ת�������ڱ���������������ͣ�	  ���ڻص���ֵ�ĸ���˵������鿴���������ݱ��֮����	*/
 VUXRS(13);    {Mail* __vurtv__= p_Mail;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
���ж�ȡ�ļ�ʱ���ضϵ�Email
����: p_str�����ַ����������ȥ�����ضϲ���
      buf_size ��������С
      pp_tail ���Σ����汻�ضϵĲ���
����: ���ضϲ��ֵĳ���
///////////////////////////////////////////////*/
size_t _04_read_tail(char* p_str, size_t buf_size, char** pp_tail)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","buf_size",(const void*)&buf_size},{3,"char**","pp_tail",(const void*)&pp_tail}}; if(VuxMck("_04_read_tail",&vmckrt,vmckds,3,"",1049,18,1)) return *(size_t*)vmckrt;{__VUFNINFO__("_04_read_tail","size_t",1049); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    size_t i; VUXLV("size_t",i,1);
 VUXRSVB(2,2);    size_t count = 0; VUXLV("size_t",count,2);
    if( VUXRS(3)&&(buf_size == 0))
    {{ VUXRS(4); {size_t __vurtv__= 0;VUXFRTY();}
    }} VUXRS(5);

    //���ұ��ضϵ��ַ���
    for(i=buf_size-1; VUXRS(7)&&( i>=0); VUXRS(6), i--)
    {VUXRBR_LOOP2(2,4,66);{
 VUXRSVB(8,3);        char ch = p_str[i]; VUXLV("char",ch,3);
        if( VUXRS(9)&&(ch == '\n'))
        {{ VUXRS(10);VUXSEN(4,1,10); break;
        }}
 VUXRS(11);        count++;
    }}

    //�������ضϵ��ַ���������ԭ�ַ����б��ض�λ����Ϊ'\0'
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
���ļ���ȡһϵ��Email��ַ������������
����: p_file���Ѵ򿪵��ļ�
����: �����õ���Email����
///////////////////////////////////////////////*/
Mail* _05_read_mails_from_file(FILE* p_file)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","p_file",(const void*)&p_file}}; if(VuxMck("_05_read_mails_from_file",&vmckrt,vmckds,1,"",1079,38,1)) return *(Mail**)vmckrt;{__VUFNINFO__("_05_read_mails_from_file","Mail*",1079); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
 VUXRSVB(2,2);    Mail* p_prev = 0; VUXLV("Mail*",p_prev,2);
    /*[ѧϰ��ʾ���ֲ�����]	��;������������⣬���Ͳ����Ѷȣ������뿴_5T_InsideIO.cpp��    ��ӣ�����ߺ������봰�ڣ�ѡ��Ҫ�滻�Ĵ����������λ�ã�	        �Ҽ��˵�ѡ��"�ֲ����(...)"    ��ֵ����һ������һ����    �����������У�buf_sizeΪ10240��Ҫ׼������10k�������ļ����鷳��	        ���þֲ�������Ϊ��С���������������£�����Ҫ��һ������		    ʹ��ԭֵ���Ա�֤ԭֵ���Բ��ԡ�	*/
 VUXRSVB(3,3);    size_t buf_size = 10240; VUXLV("size_t",buf_size,3);
 VUXRSVB(4,4);    size_t size; VUXLV("size_t",size,4);
 VUXRSVB(5,5);    size_t offset = 0; VUXLV("size_t",offset,5); //���ضϵ�mail�ĳ���
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

    /*[ѧϰ��ʾ�������ļ�]	���������ݽ��棬�Ҽ��˵��򿪶������ļ��Ĳ�����������½���	  ���桢�������ݡ�����·���ȡ������ļ���������ָ��Ŀ¼��	�����ļ�ͨ���������ݵ����ã�Ҳ����ֱ���������д��ļ���	*/
    /*[ѧϰ��ʾ���ûص���ֵ�����ļ�]	ϵͳ���趨��FILE�Ļص���ֵ������path��flag���ɴ��ļ���	path�������������趨���ļ�(��Ե�Ԫ��)->�����ļ�·����	  flag����"rb+"����ʾ���ļ���	*/
    while( VUXRS(13)&&(1))
    {VUXRBR_LOOP2(3,6,60);{
 VUXRSVB(14,8);        Mail* p_mail; VUXLV("Mail*",p_mail,8);
 VUXRS(15);        memset(p_buf, 0, buf_size);
        if( VUXRS(16)&&(offset > 0))
        {{
            //��һ��ѭ�����ڱ��ضϵ�mailʱ���ȿ�����p_buf��
            ; VUXRS(17);
 VUXRS(18);            memcpy(p_buf, p_tail, offset);
 VUXRS(19);            free(p_tail);
 VUXRS(20);            p_tail = 0;
        }}

        //��ȡ�ַ�����������
 VUXRS(21);        size = fread(p_buf+offset, sizeof(char), buf_size-offset, p_file);
        if( VUXRS(22)&&(size == 0))
        {{ VUXRS(23);VUXSEN(6,1,23); break;
        }}

        //������һ��mail�Ƿ������
 VUXRS(24);        offset = 0;
        ; VUXRS(25);
        if( VUXRS(26)&&(size == buf_size))
        {{
            if( VUXRS(27)&&(p_buf[size-1] != '\n'))
            {{
 VUXRS(28);                offset = _04_read_tail(p_buf, buf_size, &p_tail);  
                //����б��ضϵ�mail����offset>0��p_tail!=NULL
                ; VUXRS(29);
            }}
        }}

        //�����������е�mail�б�
 VUXRS(30);        p_mail = _03_read_mails(p_buf, buf_size);
        if( VUXRS(31)&&(p_mail != 0))
        {{
            //��ӵ������б���
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
����һϵ���ʼ���send_oneδʵ�֣���˲��������������ʼ�
����: p_mails Mail����ָ������
      p_subject �ʼ�����
      p_content �ʼ�����
����: �����ѷ��͵�����
///////////////////////////////////////////////*/
int _06_send_mail(Mail* p_mails, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"Mail*","p_mails",(const void*)&p_mails},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_06_send_mail",&vmckrt,vmckds,3,"",1008,7,1)) return *(int*)vmckrt;{__VUFNINFO__("_06_send_mail","int",1008); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ��ȫ�ֱ���]    ȫ�ֱ���Ĭ�ϲ������񣬿��ֶ����룺	���������ݽ��棬�������ӱ�������񡱣���ѡ��Ҫ�����ȫ�ֱ�����	ȫ�ֱ���Ҫÿ�������趨��ֵ������������ụ��Ӱ�졣	*/
    /*[ѧϰ��ʾ���ײ��������θ�ֵ]    send_one���õײ����뷵����Ҫ��ֵ����ֵʱ�÷ֺŷָ����������Ķ��ֵ���磺	TRUE;FALSE����ʾ��һ��ѭ������TRUE���ڶ���ѭ������FALSE��	*/
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
���ļ���ȡEmail�����������ʼ�
����: mail_path �����ʼ��б���ı��ļ�
      p_subject �ʼ�����
      p_content �ʼ�����
����: �����ѷ��͵�����
///////////////////////////////////////////////*/
int _07_send_mail_from_file(const char* mail_path, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","mail_path",(const void*)&mail_path},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_07_send_mail_from_file",&vmckrt,vmckds,3,"",1009,11,1)) return *(int*)vmckrt;{__VUFNINFO__("_07_send_mail_from_file","int",1009); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���򻯲��Թ���]    �˺���ҲҪ���ļ�������_05_read_mails_from_file��ͬ������ֱ�Ӷ�	    �ļ��еĴ������ݽ��м��㣬��ˣ����Բ�����ʵ���ļ���		�õײ�������ɲ��ԣ��򻯲��Թ����������뿴���������е�˵����	*/

 VUXRSVB(1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
 VUXRSVB(2,2);    FILE* p_file = 0; VUXLV("FILE*",p_file,2);
    if( VUXRS(3)&&(mail_path == 0))
    {{
 VUXRS(4);        {int __vurtv__= 0;VUXFRTY();}
    }}

    //���ļ�
 VUXRS(5);    p_file = vmck_fopen(mail_path, "rb+");
    if( VUXRS(6)&&(p_file == 0))
    {{ VUXRS(7); {int __vurtv__= 0;VUXFRTY();}
    }}

    //��ȡ������mail�б�
 VUXRS(8);    p_mails = _05_read_mails_from_file(p_file);
    if( VUXRS(9)&&(p_mails == 0))
    {{ VUXRS(10); {int __vurtv__= 0;VUXFRTY();}
    }}

    //�����ʼ�
 VUXRS(11);    {int __vurtv__= ( _06_send_mail(p_mails, p_subject, p_content));VUXFRTY();}
}}}

/* //////////////////////////////////////////////
˫�������������ʾ��������ͬ_06_send_mail��ʹ��˫������
����: p_mails ��˫���������Mail����ָ��ϵ��
      p_subject �ʼ�����
      p_content �ʼ�����
����: �����ѷ��͵�����
///////////////////////////////////////////////*/
int _08_send_mail(ListItem* p_mails, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"ListItem*","p_mails",(const void*)&p_mails},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_08_send_mail",&vmckrt,vmckds,3,"",1010,6,1)) return *(int*)vmckrt;{__VUFNINFO__("_08_send_mail","int",1010); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���ص���ֵ����������]    ��һ��������˫���������ûص���ֵ���ڱ��������������ʼ����    ListItem�е�data��Ա��void*���ͣ����������ͣ�������	�ڲ������ݽ��棬ѡ��һ�У��Ҽ��˵�ѡ���޸ı������͡�	*/

    //ѭ�����������ʼ�
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

    //p_mailsδ�ͷ�
 VUXRS(6);    {int __vurtv__= g_sucess_count + g_failed_count;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��Mail����ָ����뵽��������
����: p_mail��������
      p_new������
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
�ͷ�Mail����
����: p_mail��������
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
�����ʼ�����ں���
mail_path, mail_subject, mail_content����Ϊ��SendMail.h��������ȫ�ֱ�����
Ϊ����֤��Ԫ���Կ����������ָ���ļ����в��ԣ���Щ������δ���塣
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