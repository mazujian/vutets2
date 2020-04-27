
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
��ʾ��Ԫ���ԵĻ���ԭ���뷽��
����: �������������ĺ�
����: a, ��1
      b, ��2
����: a��b�ĺ�
///////////////////////////////////////////////*/
int _01_add3(int a, int b)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b}}; if(VuxMck("_01_add3",&vmckrt,vmckds,2,"",841,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_01_add3","int",841); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��ʾVU4�Ļ������������
����: ���������޷�����������
����: g, ����
      e, ָ��
����: g��e����
///////////////////////////////////////////////*/
unsigned int _02_pow3(unsigned int g, unsigned int e)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"unsigned int","g",(const void*)&g},{2,"unsigned int","e",(const void*)&e}}; if(VuxMck("_02_pow3",&vmckrt,vmckds,2,"",842,1,9)) return *(unsigned int*)vmckrt;{__VUFNINFO__("_02_pow3","unsigned int",842); VuxDbgBrkO() 
{
 VUXRS(1);    {unsigned int __vurtv__= 0;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
����eTDD(easy TDD)
����: ȥ���ַ���ǰ�Ŀո�
����: str, �ַ���
����: ԭ�ַ�����ָ��
///////////////////////////////////////////////*/
char* _03_strtrml3(char *str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("_03_strtrml3",&vmckrt,vmckds,1,"",843,1,9)) return *(char**)vmckrt;{__VUFNINFO__("_03_strtrml3","char*",843); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= str;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��������߼����eTDD(easy TDD)
�����Ĺ����Ǵ��ļ���ȡEmail�����������ʼ����ڷ���ǰ��
��Email�����е�ÿһ��Email����ɾ��name���ַ�����ߵĿո�
ɾ��name���ַ�����ߵĿո�Ĵ��룬������Ҫʹ��eTDD���б�д��
���Ե��߼��顣��ʾ������������Լ���һ�Ѵ����е��߼����eTDD��
����: mail_path �����ʼ��б���ı��ļ�
      p_subject �ʼ�����
      p_content �ʼ�����
����: �����ѷ��͵�����
///////////////////////////////////////////////*/
int _04_strtrml3(const char* mail_path, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","mail_path",(const void*)&mail_path},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_04_strtrml3",&vmckrt,vmckds,3,"",844,2,1)) return *(int*)vmckrt;{__VUFNINFO__("_04_strtrml3","int",844); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
    //�����ʼ�
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