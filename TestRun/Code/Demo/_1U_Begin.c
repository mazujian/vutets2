
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
��ʾ��Ԫ���ԵĻ���ԭ���뷽��
����: �������������ĺ�
����: a, ��1
      b, ��2
����: a��b�ĺ�
///////////////////////////////////////////////*/
int _01_add2(int a, int b)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b}}; if(VuxMck("_01_add2",&vmckrt,vmckds,2,"",908,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_01_add2","int",908); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ������ʾ�����������յ�Ԫ����]	ʾ����ʵ������һ��C/C++��Ԫ���Լ����̳̣���������Ѳ��Ե������ͽ����	  ���Զ�����ϰ����������߿����߲��ԡ�	ʾ�������е�ѧϰ��ʾ���Լ������е�����˵�������ݺ��ע�ͣ�������Ҫ��	  �����˵�Ԫ���Լ�VU4ʹ��Ҫ�㡣	ʾ��������C/C++��Ԫ���Ե��ѵ�ͽ����������������Щ��������������ã�	  �����Լ��Ĵ���Ͳ������ѡ�	�����ֻ��ѧϰ��Ԫ���ԣ�VU4��ʾ��������õĽ̳̣����������������Ƚ���	  ��Ԫ���Լ��������յ�Ԫ���Ե�Ҫ�㡢�ѵ�ͽ�������˼·�ͷ�����	�������Ҫ���Լ�����Ŀ������VU������������Licenseǰ�����������ʾ����	  ������Ҫ��ͼ��ɣ������������ɵز����Լ��Ĵ��룬˳�����������	*/
      
     /*[ѧϰ��ʾ��ʾ�������ݼ�����]	----����ɲ��Ե�ʾ��������������----    _1T_Begin.c��         ����ʾ��    _2T_SendMail.c��      C����ʵ����Ŀʾ��    _3T_MyClass.cpp��     C++ʵ����Ŀʾ��    _4T_DataBasic.cpp��   ����ר��һ�����ݱ�����ʾ��	_5T_InsideIO.cpp��    ����ר������ײ����롢�ֲ����롢�ֲ����	_6T_WhiteBox.cpp��    ����ר��������ɰ׺и���ʾ��    _7T_EditCaseCode.cpp�������ɻ��޸���������ĳ���ʾ��	----δ����ʾ������������Ѳ���ʾ������ϰ���Թ���----    _1U_Begin.c��         ���뿽���ԣ�_1T_Begin.c    _2U_SendMail.c��      ���뿽���ԣ�_2T_SendMail.c    _3U_MyClass.cpp��     ���뿽���ԣ�_3T_MyClass.cpp    _4U_DataBasic.cpp��   ���뿽���ԣ�_4T_DataBasic.cpp	_5U_InsideIO.cpp��    ���뿽���ԣ�_5T_InsideIO.cpp	_6U_WhiteBox.cpp��    ���뿽���ԣ�_6T_WhiteBox.cpp    _7U_EditCaseCode.cpp�����뿽���ԣ�_7T_EditCaseCode.cpp    ----eTDD(easy TDD)������ѧϰ������δ��д������eTDD��ʽ��д�Ͳ���----	_1Y_Begin.c��         ����������_1T_Begin.c��ͬ	_2Y_SendMail.c��      ����������_2T_SendMail.c��ͬ	_3Y_MyClass.cpp��     ����������_3T_MyClass.cpp��ͬ	_8Y_String.c��        �򵥵�C�ַ���������    */

    /*[ѧϰ��ʾ����Ԫ���Ի���ԭ���뷽��]    ���������ݱ���У�    ����ĺ����Ǹ�ֵ���磺    a����1��b����2���൱�ڣ�a=1; b=2;    �����Ԥ�ڵ���ȷ������Զ���ʵ�ʽ���Ƚϣ���:    ret���3���൱�ڣ�    ASSERT(ret == 3)�����ret != 3���򱨸����    �Ƚϲ�����ȱʡΪ==����֧�֣�& > < >= <= !=�ȣ��磺    & 0x1000      > 100    != 100    > 10 && < 100     */

 VUXRS(1);    {int __vurtv__= a-b;VUXFRTY();} //+д����-
}}}

/* //////////////////////////////////////////////
��ʾVU4�Ļ������������
����: ���������޷�����������
����: g, ����
      e, ָ��
����: g��e����
///////////////////////////////////////////////*/
unsigned int _02_pow2(unsigned int g, unsigned int e)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"unsigned int","g",(const void*)&g},{2,"unsigned int","e",(const void*)&e}}; if(VuxMck("_02_pow2",&vmckrt,vmckds,2,"",909,15,1)) return *(unsigned int*)vmckrt;{__VUFNINFO__("_02_pow2","unsigned int",909); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ��VU4��������]    ��������������ѡ��һ�У������"�������"	�л�����������Ҽ��˵����л�������	              ���ʧ�ܵĲ��ԣ��Զ��л�����Ӧ��������	�۲������Ϊ���Աȵ�ǰ��������������Լ���ִ�еĴ��롣	              ��ɫ����Ϊ��ǰ������ִ�еĴ��롣    �ҳ�����ԭ�򣺹۲������Ϊ���ɷ�������result��ʼֵΪ0��	              ����forѭ���ļ�������Ϊ0��	�׺и��Ǳ�ǣ�[T/F]δ���ǵ�������/��ֵ,[M]δ����MCDC��	              <T/F>δ���ǵ��ж���/��ֵ��				  ��ɫ�ķ�֧��·��δ���ǡ�	��ɰ׺и��ǣ�ѡ��δ���ǵ�λ���Ҽ��˵�ѡ��"�������" ��	              ���ڰ׺и��Ǽ������������ʹ�ã��뿴_6T_WhiteBox.cpp�е�_01_WhileBox()��	��ǲ��ɸ��ǣ�forѭ���ĵ�2��֧���ɸ��ǣ��ɱ��Ϊ���ɸ��ǡ�������	              ���δ���ǵ�λ���Ҽ��˵�ѡ��"ɾ���߼���λ"��    */
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
����eTDD(easy TDD)
����: ȥ���ַ���ǰ�Ŀո�
����: str, �ַ���
����: ԭ�ַ�����ָ��
///////////////////////////////////////////////*/
char* _03_strtrml2(char *str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("_03_strtrml2",&vmckrt,vmckds,1,"",910,1,9)) return *(char**)vmckrt;{__VUFNINFO__("_03_strtrml2","char*",910); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ��easy TDD]    TDD�������������������ģ�������С�С��ǰ��	easy TDD�����eTDD�����а�TDD�������TDD����ʵ�е����⡣easy TDD���̣�	          �߼�����ӱ�̣��漰�߼�����ʱ���ڱ���м�¼���ܵ㣬����������			                  һ�߿������Զ�ִ�в��ԣ���ʱ�۲������Ϊ��			  �ύǰ��ɸ��ǣ��򵥵Ĵ��룬�����ύǰ��ģ�����ʱ�ٽ��в��ԣ�			                  ͨ������Ҫ����������ֻ���������			  ֻ���д��Ե��ԣ�����ֻ�������̸��ٺ�bug���Զ�λ����bugʱ������bug���֣�			                  �Կ��ɺ�������������۲���Խ����ͨ�������״������ԭ��							  Ȼ���޸Ĵ���ʹ����ͨ����	eTDDЧ�棺������һ�����ӶȵĴ��룬��_2T_SendMail.c����д�ϸ�����Ч��	           �Ǵ�ͳ��ʽ���屶���ϡ�ԭ��			   a. ��������ȷ����ƣ�������У�������·��               b. �Դ����������ӻ��޸ģ������Թ۲�����Ϊ(������Ϊ���ǣ�ʲô����ִ��				  ��Щ����������ʲô���)����ʱ��֤˼·�����ִ��󡢼�����С�			   c. �����߼�����Ҫ���ԣ���Լ90%����ʱ�䡣    eTDDʵʩ�����øı�ԭ���Ŀ������̺�ϰ�ߡ�	          ���ڹ�������ϸ��ӵĴ��룬����������ݱ���м�¼���ܵ㣬����ȷ����				�������������������Ҫ�쿴������Ϊʱ�����������			  �򵥵Ĵ�����Բ����ȿ��ǣ�ģ����ɺ���VU�����������������б��У�				��δ���ԺͻƵƺ���ִ�в��ԣ�������Ҫ���������ɸ��ǡ�    */

   /*[ѧϰ��ʾ������easy TDD]    ����IDE���ı��༭����Samples/Demo/Ŀ¼�µ�	_1U_Begin.c��_1Y_Begin.c�����б�дstrtrml()�����Ĵ��룬����easy TDD���̣�	���У�_1U_Begin.c�е�strtrml()�ѽ�������������_1Y_Begin.c���ǳ�ʼ״̬��	��������ӵ����飺_8Y_String.c _2Y_SendMail.c _3Y_MyClass.cpp��	*/

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
int _04_strtrml2(const char* mail_path, const char* p_subject, const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","mail_path",(const void*)&mail_path},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("_04_strtrml2",&vmckrt,vmckds,3,"",911,22,1)) return *(int*)vmckrt;{__VUFNINFO__("_04_strtrml2","int",911); VuxDbgBrkO() 
{
   /*[ѧϰ��ʾ���ۺ�Ӧ��]    ��ʾ���漰�ײ����롢�ֲ�������ص���ֵ�ȼ�����	Ӧ��ѧ������ʾ���󣬲�ѧϰ��ʾ����	*/

 VUXRSVB(1,1);    Mail* p_mail = 0; VUXLV("Mail*",p_mail,1);
 VUXRSVB(2,2);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,2);
 VUXRSVB(3,3);    FILE* p_file = 0; VUXLV("FILE*",p_file,3);

    //���ļ�
 VUXRS(4);    p_file = fopen(mail_path, "rb+");
    if( VUXRS(5)&&(p_file == 0))
    {{ VUXRS(6); {int __vurtv__= 0;VUXFRTY();}
    }}

    //��ȡ������mail�б�
 VUXRS(7);    p_mails = _05_read_mails_from_file2(p_file);
    if( VUXRS(8)&&(p_mails == 0))
    {{ VUXRS(9); {int __vurtv__= 0;VUXFRTY();}
    }}

    //ɾ��ÿ��p_mail��name��Ա����߿ո�
 VUXRS(10);    p_mail = p_mails;
    while( VUXRS(11)&&(p_mail != 0))
    {VUXRBR_LOOP2(3,6,24);{
 VUXRSVB(12,4);        char* str = p_mail->name; VUXLV("char*",str,4);
 VUXRSVB(13,5);        char* ptr = str; VUXLV("char*",ptr,5); //�����ʼָ��
 VUXRSVB(14,6);        int count = 0; VUXLV("int",count,6); //��߿ո������
        
        //������߿ո������
        while( VUXRS(15)&&(*str++ == ' '))
        {VUXRBR_LOOP2(4,8,25);{
 VUXRS(16);            count++;
        }}
        
        //��λָ��
 VUXRS(17);        str = ptr;
        
        //�ƶ��ַ�����������߿ո�
        while( VUXRS(18)&&(*str))
        {VUXRBR_LOOP2(5,10,26);{
 VUXRS(19);            *str = *(str+count);
 VUXRS(20);            str++;
        }}
        
 VUXRS(21);        p_mail = p_mail->p_next;
    }}

    //�����ʼ�
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