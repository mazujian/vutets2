
//Code/Demo/_8Y_String.c
#include "VuxInc/VuxFore.h"

#include <stdlib.h>

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_8Y_String.c.h"
#include "VuxMock/Demo/_8Y_String.c"

/* 
����eTDD(easy TDD)����һ���ַ����в����Ӵ�
����: str, Դ�ַ���
      sub, ����ҵ��Ӵ�
����: ���ҵ��������Ӵ���λ�ã����򷵻�-1
**/    
int find(char* str, char* sub)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","str",(const void*)&str},{2,"char*","sub",(const void*)&sub}}; if(VuxMck("find",&vmckrt,vmckds,2,"",993,1,9)) return *(int*)vmckrt;{__VUFNINFO__("find","int",993); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= -1;VUXFRTY();}
}}}

/* 
����eTDD(easy TDD)����һ���ַ����з�������Ӵ�
����: str, Դ�ַ���
      sub, ����ҵ��Ӵ�
����: ���ҵ��������Ӵ���λ�ã����򷵻�-1
**/    
int findr(char* str, char* sub)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","str",(const void*)&str},{2,"char*","sub",(const void*)&sub}}; if(VuxMck("findr",&vmckrt,vmckds,2,"",994,1,9)) return *(int*)vmckrt;{__VUFNINFO__("findr","int",994); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= -1;VUXFRTY();}
}}}

/* 
����eTDD(easy TDD)��ȡ���ַ�������߲���
����: des, �������ַ���
      size, ���ڱ������ַ����Ļ���������
      src, Դ�ַ���
	  count, ȡ�õ��ַ���
����: ���ؽ���ַ���ָ��
**/    
char* left(char* des, int size, char* src, int count)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"char*","des",(const void*)&des},{2,"int","size",(const void*)&size},{3,"char*","src",(const void*)&src},{4,"int","count",(const void*)&count}}; if(VuxMck("left",&vmckrt,vmckds,4,"",995,1,9)) return *(char**)vmckrt;{__VUFNINFO__("left","char*",995); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= des;VUXFRTY();}
}}}
    
/* 
����eTDD(easy TDD)�����ַ�ȫ��תΪСд
����: str, ��תΪСд���ַ���
����: ���ؽ���ַ���ָ��
**/    
char* lower(char* str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("lower",&vmckrt,vmckds,1,"",996,1,9)) return *(char**)vmckrt;{__VUFNINFO__("lower","char*",996); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= str;VUXFRTY();}
}}}

/* 
����eTDD(easy TDD)��ȡ���ַ������м䲿��
����: des, �������ַ���
      size, ���ڱ������ַ����Ļ���������
      src, Դ�ַ���
      first, ��ʼλ��
	  count, ȡ�õ��ַ�����Ϊ-1ʱ��ʾֱ�����
����: ���ؽ���ַ���ָ��
**/    
char* mid(char* des, int size, char* src, int first, int count)
{void* vmckrt=0; VMCKDS vmckds[5]={{1,"char*","des",(const void*)&des},{2,"int","size",(const void*)&size},{3,"char*","src",(const void*)&src},{4,"int","first",(const void*)&first},{5,"int","count",(const void*)&count}}; if(VuxMck("mid",&vmckrt,vmckds,5,"",997,1,9)) return *(char**)vmckrt;{__VUFNINFO__("mid","char*",997); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= des;VUXFRTY();}
}}}

/* 
����eTDD(easy TDD)�����ַ����е��Ӵ��滻Ϊ��һ���ִ�
����: str, Դ�ַ���
      old, ���滻���Ӵ�
	  New, �µ��Ӵ�
����: ���ҵ��������Ӵ���λ�ã����򷵻�-1
**/    
int replace(char* str, char* old, char* New)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","str",(const void*)&str},{2,"char*","old",(const void*)&old},{3,"char*","New",(const void*)&New}}; if(VuxMck("replace",&vmckrt,vmckds,3,"",998,1,9)) return *(int*)vmckrt;{__VUFNINFO__("replace","int",998); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

/* 
����eTDD(easy TDD)��ȡ���ַ������ұ߲���
����: des, �������ַ���
      size, ���ڱ������ַ����Ļ���������
      src, Դ�ַ���
	  count, ȡ�õ��ַ���
����: ���ؽ���ַ���ָ��
**/    
char* right(char* des, int size, char* src, int iCount)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"char*","des",(const void*)&des},{2,"int","size",(const void*)&size},{3,"char*","src",(const void*)&src},{4,"int","iCount",(const void*)&iCount}}; if(VuxMck("right",&vmckrt,vmckds,4,"",999,1,9)) return *(char**)vmckrt;{__VUFNINFO__("right","char*",999); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= des;VUXFRTY();}
}}}

/* 
����eTDD(easy TDD)��ɾ���ַ�����ߵĿո�
����: str, Դ�ַ���
����: ���ؽ���ַ���ָ��
**/    
char* triml(char* str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("triml",&vmckrt,vmckds,1,"",1000,1,9)) return *(char**)vmckrt;{__VUFNINFO__("triml","char*",1000); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= str;VUXFRTY();}
}}}

/* 
����eTDD(easy TDD)��ɾ���ַ����ұߵĿո�
����: str, Դ�ַ���
����: ���ؽ���ַ���ָ��
**/    
char* trimr(char* str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("trimr",&vmckrt,vmckds,1,"",1001,1,9)) return *(char**)vmckrt;{__VUFNINFO__("trimr","char*",1001); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= str;VUXFRTY();}
}}}

/* 
����eTDD(easy TDD)�����ַ�ȫ��תΪ��д
����: str, ��תΪ��д���ַ���
����: ���ؽ���ַ���ָ��
**/    
char* upper(char* str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("upper",&vmckrt,vmckds,1,"",1002,1,9)) return *(char**)vmckrt;{__VUFNINFO__("upper","char*",1002); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= str;VUXFRTY();}
}}}


#include "VuxConn/Demo/_8Y_String.c.h"

VUEXTERNC void _demo__8y_string_c_fps(void** cbfs, void** onfs, void** gvfs, int index)
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