
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
����һ��Email
����: p_str��һ��Email�������ַ���
      size ��������С
����: �����õ���Email����ָ��
///////////////////////////////////////////////*/
Mail* _01_read_mail_one3(const char* p_str, size_t size)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","size",(const void*)&size}}; if(VuxMck("_01_read_mail_one3",&vmckrt,vmckds,2,"",1056,1,9)) return *(Mail**)vmckrt;{__VUFNINFO__("_01_read_mail_one3","Mail*",1056); VuxDbgBrkO() 
{
 VUXRS(1);    {Mail* __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
�ӳ��ַ����ж�ȡһ��Email���ַ���
����: pp_str������ԭʼ�ַ��������ָ����һ��Email�Ŀ�ͷ
      ���Email֮����'\n'��"\r\n"�ָ�
      p_mail_text�����Σ�һ��Email���ַ���
      size p_mail_text�Ļ�������С
����: �����ɹ�����TRUE�����򷵻�FALSE
///////////////////////////////////////////////*/
BOOL _02_read_mail_one_text3(char** pp_str, char* p_mail_text, size_t size)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char**","pp_str",(const void*)&pp_str},{2,"char*","p_mail_text",(const void*)&p_mail_text},{3,"size_t","size",(const void*)&size}}; if(VuxMck("_02_read_mail_one_text3",&vmckrt,vmckds,3,"",1057,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("_02_read_mail_one_text3","BOOL",1057); VuxDbgBrkO() 
{
 VUXRS(1);    {BOOL __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��һ�����ַ���������Email����
����: p_str����'\n'��"\r\n"�ָ���һϵ��Email�ַ���
      buf_size ��������С
����: �����õ���Email����
///////////////////////////////////////////////*/
Mail* _03_read_mails3(char* p_str, size_t buf_size)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","buf_size",(const void*)&buf_size}}; if(VuxMck("_03_read_mails3",&vmckrt,vmckds,2,"",1058,1,9)) return *(Mail**)vmckrt;{__VUFNINFO__("_03_read_mails3","Mail*",1058); VuxDbgBrkO() 
{
 VUXRS(1);    {Mail* __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
���ж�ȡ�ļ�ʱ���ضϵ�Email
����: p_str�����ַ����������ȥ�����ضϲ���
      buf_size ��������С
      pp_tail ���Σ����汻�ضϵĲ���
����: ���ضϲ��ֵĳ���
///////////////////////////////////////////////*/
size_t _04_read_tail3(char* p_str, size_t buf_size, char** pp_tail)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","p_str",(const void*)&p_str},{2,"size_t","buf_size",(const void*)&buf_size},{3,"char**","pp_tail",(const void*)&pp_tail}}; if(VuxMck("_04_read_tail3",&vmckrt,vmckds,3,"",1069,1,9)) return *(size_t*)vmckrt;{__VUFNINFO__("_04_read_tail3","size_t",1069); VuxDbgBrkO() 
{
 VUXRS(1);    {size_t __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
���ļ���ȡһϵ��Email��ַ������������
����: p_file���Ѵ򿪵��ļ�
����: �����õ���Email����
///////////////////////////////////////////////*/
Mail* _05_read_mails_from_file3(FILE* p_file)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","p_file",(const void*)&p_file}}; if(VuxMck("_05_read_mails_from_file3",&vmckrt,vmckds,1,"",1088,1,9)) return *(Mail**)vmckrt;{__VUFNINFO__("_05_read_mails_from_file3","Mail*",1088); VuxDbgBrkO() 
{
 VUXRS(1);    {Mail* __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
����һϵ���ʼ���send_oneδʵ�֣���˲��������������ʼ�
����: p_mails Mail����ָ������
      p_subject �ʼ�����
      p_content �ʼ�����
����: �����ѷ��͵�����
///////////////////////////////////////////////*/
int _06_send_mail3(Mail* p_mails, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"Mail*","p_mails",(const void*)&p_mails},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_06_send_mail3",&vmckrt,vmckds,3,"",975,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_06_send_mail3","int",975); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
���ļ���ȡEmail�����������ʼ�
����: mail_path �����ʼ��б���ı��ļ�
      p_subject �ʼ�����
      p_content �ʼ�����
����: �����ѷ��͵�����
///////////////////////////////////////////////*/
int _07_send_mail_from_file3(const char* mail_path, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","mail_path",(const void*)&mail_path},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_07_send_mail_from_file3",&vmckrt,vmckds,3,"",976,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_07_send_mail_from_file3","int",976); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
˫�������������ʾ��������ͬ_06_send_mail��ʹ��˫������
����: p_mails ��˫���������Mail����ָ��ϵ��
      p_subject �ʼ�����
      p_content �ʼ�����
����: �����ѷ��͵�����
///////////////////////////////////////////////*/
int _08_send_mail3(ListItem* p_mails, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"ListItem*","p_mails",(const void*)&p_mails},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_08_send_mail3",&vmckrt,vmckds,3,"",977,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_08_send_mail3","int",977); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��Mail����ָ����뵽��������
����: p_mail��������
      p_new������
///////////////////////////////////////////////*/
void _09_add_to_tail3(Mail* p_mail, Mail* p_new)
{VMCKDS vmckds[2]={{1,"Mail*","p_mail",(const void*)&p_mail},{2,"Mail*","p_new",(const void*)&p_new}}; if(!VuxMck("_09_add_to_tail3",0,vmckds,2,"",978,0,9)) {__VUFNID__(978); VuxDbgBrkO() 
{

}VUXFRTNE();}}

/* //////////////////////////////////////////////
�ͷ�Mail����
����: p_mail��������
///////////////////////////////////////////////*/
void _10_free_mails3(Mail* p_mail)
{VMCKDS vmckds[1]={{1,"Mail*","p_mail",(const void*)&p_mail}}; if(!VuxMck("_10_free_mails3",0,vmckds,1,"",979,0,9)) {__VUFNID__(979); VuxDbgBrkO() 
{

}VUXFRTNE();}}

/* //////////////////////////////////////////////
�����ʼ�����ں���
mail_path, mail_subject, mail_content����Ϊ��SendMail.h��������ȫ�ֱ�����
Ϊ����֤��Ԫ���Կ����������ָ���ļ����в��ԣ���Щ������δ���塣
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