
//Code/Demo/_7U_EditCaseCode.cpp
#include "VuxInc/VuxFore.h"




#include "TypeDef2.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_7U_EditCaseCode.cpp.h"
#include "VuxMock/Demo/_7U_EditCaseCode.cpp"

/*-----------------------------------------------
��ʹ����������༭�����޸�������������Ρ�
-----------------------------------------------*/

/* //////////////////////////////////////////////
��ʹ������������������쳣����(��ѧ������)
����: ������������
����: i, ������
      j, ����
����: i/j ����
///////////////////////////////////////////////*/
int _01_Dec2(int i, int j)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","i",(const void*)&i},{2,"int","j",(const void*)&j}}; if(VuxMck("_01_Dec2",&vmckrt,vmckds,2,"",845,5,1)) return *(int*)vmckrt;{__VUFNINFO__("_01_Dec2","int",845); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���쳣����]	���������봰�ڣ��������� ���������б� ���֣��Ҽ��˵�	  ѡ�������쳣���Դ��롱��	*/
    if( VUXRS(1)&&(j == 0))
    {{
 VUXRS(2);        throw CMyException();
    }}

    if( VUXRS(3)&&(j == -1))
    {{
 VUXRS(4);        throw(-1);
    }}

 VUXRS(5);    {int __vurtv__= i/j;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
���޸���������(һ)���ر���������
����: ��
����: list��һ������
      pos����������ǰ���λ��
����: ����ǰ���ֵ
///////////////////////////////////////////////*/
int _02_Position2(CList<int, int>& list, POSITION pos)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"CList<int,int>","list",(const void*)&list},{2,"POSITION","pos",(const void*)&pos}}; if(VuxMck("_02_Position2",&vmckrt,vmckds,2,"",1072,1,1)) return *(int*)vmckrt;{__VUFNINFO__("_02_Position2","int",1072); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ��������ӱ�������posָ��list�е�������Լ��ж��������ֵ]	�������������ڲ������ݴ��ڣ����"��ӱ��������"��ѡ�񡰾ֲ��������������롱	�������������ڲ������ݴ��ڣ����"��ӱ��������"��ѡ�񡰾ֲ����������������	��Ȼ�����޸����������룬���������ݱ�����ֱ����ɣ�	��ο���������������֮һ >> ��ӱ��������	*/
 VUXRS(1);    {int __vurtv__= list.GetAt(pos);VUXFRTY();}
}}}

/* //////////////////////////////////////////////
���޸���������(��)���ɱ����
����: ��
����: a ������
      b ������
����: ������
///////////////////////////////////////////////*/
int _03_VaryingParameter2(int a, int b,...)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b}}; if(VuxMck("_03_VaryingParameter2",&vmckrt,vmckds,2,"",847,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_03_VaryingParameter2","int",847); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���ɱ����]	1) ʹ��"��ӱ��������"�����һ���ֲ�������Ϊ����������������int c��    2) �л��������ļ����ڣ�������������TEST_RUN�����еĴ����ɣ�    EST_RUN _03_VaryingParameter2_vpls(a, b);    ��Ϊ:    TEST_RUN _03_VaryingParameter2_vpls(a, b, c);    �����һ������c��    3) Ϊ��װ����_03_VaryingParameter2_vpls���Ӳ���c��    ���ȣ���ת����װ��������������������ǰ���#include��ͷ���У��Ҽ��˵�ѡ����ת����	�л������Դ��봰�ڣ�����ʾ�������룬����һЩ�ɿ�����׮����_03_VaryingParameter2_vpls��	�޸�_03_VaryingParameter2_vpls�еĴ��룬ʹ������������Ч��	*/
 VUXRS(1);    {int __vurtv__= a+b;VUXFRTY();}
}}}

#include "VuxConn/Demo/_7U_EditCaseCode.cpp.h"

void _demo__7u_editcasecode_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
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