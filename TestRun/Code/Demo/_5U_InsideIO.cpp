
//Code/Demo/_5U_InsideIO.cpp
#include "VuxInc/VuxFore.h"



#include "InsideIO2.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_5U_InsideIO.cpp.h"
#include "VuxMock/Demo/_5U_InsideIO.cpp"

CInsideIO2::CInsideIO2()
{__VUFNID__(959); VuxDbgBrkO() 
{
 VUXRS(1);    mExpectTemperature = 0;
}VUXFRTNE();}

extern int getCurrentTemperature();
/* ////////////////////////////////////////////// 
��ʾ��������Ӳ����ȡ�����¶�
����: ����Ӳ���豸��ȡ�����¶�
����: pTemperature, �������������ȡ�õĻ����¶�
����: int���ͣ��������ִ��ʧ�ܣ�����0�����򷵻ط�0ֵ
///////////////////////////////////////////////*/
BOOL CInsideIO2::GetTemperature(int* pTemperature)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int*","pTemperature",(const void*)&pTemperature}}; if(VuxMckM("GetTemperature",&vmckrt,vmckds,1,"CInsideIO2",969,4,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("GetTemperature","BOOL",969); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(pTemperature != 0))
    {{
 VUXRS(2);        *pTemperature = getCurrentTemperature();
 VUXRS(3);        {BOOL __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(4);    {BOOL __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��ʾ�ײ������Ӧ��
����: �յ����Ƴ���Ƭ�ϣ�ȡ�û����¶Ȳ�������������
      ���е�ʱ��
����: pWorkTime, ������������������������е�ʱ��
����: BOOL���ͣ��������ִ��ʧ�ܣ�����FALSE�����򷵻�TRUE
///////////////////////////////////////////////*/
BOOL CInsideIO2::_01_WorkTime(int* pWorkTime)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int*","pWorkTime",(const void*)&pWorkTime}}; if(VuxMckM("_01_WorkTime",&vmckrt,vmckds,1,"CInsideIO2",960,12,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_01_WorkTime","BOOL",960); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    BOOL success = 0; VUXLV("BOOL",success,1);  //ȡ�����¶��Ƿ�ɹ�
 VUXRSVB(2,2);    int temperature; VUXLV("int",temperature,2);  //�����¶�

    /*[ѧϰ��ʾ���ײ�����Ӧ��]    GetTemperature()ȡ�û����¶ȡ��˺����м��ֿ���    1)δ��д 2)������ 3)����ʵ�ʴ��뵫�����ϲ�������	˫��GetTemperature���õײ����룬����Ҫ���������������Ρ�	*/
 VUXRS(3);    success = GetTemperature(&temperature);

    if( VUXRS(4)&&(!success))
    {{
 VUXRS(5);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
    
    //�����¶ȲmExpectTemperature�ǳ�Ա����
 VUXRSVB(6,3);    int TempDiff = temperature - mExpectTemperature; VUXLV("int",TempDiff,3);
    if( VUXRS(7)&&(TempDiff <= 0))
    {{
 VUXRS(8);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
        
    if( VUXRS(9)&&(pWorkTime == 0))
    {{
 VUXRS(10);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}            

    //Ϊ�˼����⣬��������²�һ�ȣ�������һ����
 VUXRS(11);    *pWorkTime = TempDiff * 60;
 VUXRS(12);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
��ʾ�ֲ�����(�滻"="�ұ�)
����: ��Ϸ���������ڼ�����Ч���Ĵ���Ƭ�ϣ��������ʱ
      Ч��������ݼ�
����: reset, ���������Ϊtrueʱ���ô������
����: int���ͣ����Ч��
///////////////////////////////////////////////*/
int CInsideIO2::_02_PowerEffect(bool reset)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"bool","reset",(const void*)&reset}}; if(VuxMckM("_02_PowerEffect",&vmckrt,vmckds,1,"CInsideIO2",961,8,1)) return *(int*)vmckrt;{__VUFNINFO__("_02_PowerEffect","int",961); VuxDbgBrkO() 
{   
    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    �������times�������Ǿֲ��������������޷����ʣ����ڲ��ԣ�	  ������д��룬�Ҽ��˵�ѡ�� �ֲ�����(�滻"="�ұ�)���ɽ�times��Ϊ��	  �ڱ�������õ���ͨ������	*/
 VUXRSVB(1,1);    static int times = 0; VUXLV("int",times,1);
    if( VUXRS(2)&&(reset))
    {{ VUXRS(3); times = 0;
    }}
 VUXRS(4);    times++;
    
 VUXRSVB(5,2);    int effect[] =
    {9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
    }; VUXLVA("int[]",effect,2);
    if( VUXRS(6)&&(times >= sizeof(effect) / sizeof(effect[0])))
    {{
 VUXRS(7);        {int __vurtv__= 0;VUXFRTY();}
    }}
 VUXRS(8);    {int __vurtv__= effect[times];VUXFRTY();}
}}}

//ģ��ӽ����ȡ����
void GetDlgItemText(int id,  CString& value);
//��㶨�����ԴID
#define IDC_USERNAME  0x1001
#define IDC_PASSWORD  0x1002
#define IDC_PASSWORD2 0x1003


/* ////////////////////////////////////////////// 
��ʾ�������������
����: �û��޸��û��������롣
      �û��ӽ��������µ��û��������룬���޸ĺ���û�����/��
	  ����д�����ݿ⡣ԭ�û��������뱣���ڳ�Ա�����С�
����: ��
����: ��
///////////////////////////////////////////////*/
void CInsideIO2::_03_UpdateUserNameOrPassword()
{if(!VuxMckM("_03_UpdateUserNameOrPassword",0,0,0,"CInsideIO2",962,15,1)) {__VUFNID__(962); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    CString sql; VUXLV("CString",sql,1);
 VUXRSVB(2,2);    CString sUserName, sPassword, sPassword2; VUXLV("CString",sUserName,2); VUXLVS("CString",sPassword,3); VUXLVS("CString",sPassword2,4);

    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    �������д��룬�Ǵӽ����ȡ���ݵ���䣬������Ϊ��ֵ��䡣	ѡ��һ�д��룬�þֲ�����(�滻��ֵ���)���ܣ� ���Խ�ԭ��ֵ���	  ��Ϊ��ͨ��ֵ��䣬�����ڱ�������ñ�����ֵ��	*/
 VUXRS(3);    GetDlgItemText(0x1001,  sUserName);
 VUXRS(4);    GetDlgItemText(0x1002,  sPassword);
 VUXRS(5);    GetDlgItemText(0x1003, sPassword2);

    //��������û���������Ĵ���(����sPassword�Ƿ���sPassword2���)����
    //...
    
    //�û�������������һ���޸�
    if( VUXRS(6)&&(sUserName != msUserName) || VUXRS(7)&&( sPassword != msPassword))
    {{
 VUXRS(8);        sql = "Update Users Set";
        if( VUXRS(9)&&(sUserName != msUserName))
        {{
 VUXRS(10);            sql += " UserName='" + sUserName + "'";
        }}
        if( VUXRS(11)&&(sPassword != msPassword))
        {{
 VUXRS(12);            sql += ", Password='" + sPassword + "'";
        }}
 VUXRS(13);        sql += " Where UserName='" + msUserName + "'";
        
        //д�����ݿ�
 VUXRSVB(14,5);        CDataBase db; VUXLV("CDataBase",db,5);
 VUXRS(15);        db.Execute(sql);        
    }}
}VUXFRTNE();}}

/* ////////////////////////////////////////////// 
��ʾ�ֲ�����(�滻ѡ�д���)
///////////////////////////////////////////////*/
int CInsideIO2::_04_LocalInput1(int index, int arg)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","index",(const void*)&index},{2,"int","arg",(const void*)&arg}}; if(VuxMckM("_04_LocalInput1",&vmckrt,vmckds,2,"CInsideIO2",963,6,1)) return *(int*)vmckrt;{__VUFNINFO__("_04_LocalInput1","int",963); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    *(gDataA.b.parr[index]) Ҫ��ʼ�������ѣ���ʵ����ֻ��һ��int	  ���ͱ�����    �����þֲ�����(�滻ѡ�д���)�����ʽ�滻Ϊһ�����ڱ����ֱ�ӽӽӽӽ�	  ���õ�int���ͱ���	*/
 VUXRSVB(1,1);    int m = *(gDataA.b.parr[index]) * arg; VUXLV("int",m,1);
    
    if( VUXRS(2)&&(m <= 10))
    {{
        //��������
 VUXRS(3);        {int __vurtv__= m;VUXFRTY();}
    }}

    if( VUXRS(4)&&(m <= 100))
    {{
        //��������
 VUXRS(5);        {int __vurtv__= m;VUXFRTY();}
    }}

 VUXRS(6);    {int __vurtv__= m;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
��ʾ�ֲ�����(���븳ֵ���)
///////////////////////////////////////////////*/
int CInsideIO2::_05_LocalInput2(int arg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","arg",(const void*)&arg}}; if(VuxMckM("_05_LocalInput2",&vmckrt,vmckds,1,"CInsideIO2",964,4,1)) return *(int*)vmckrt;{__VUFNINFO__("_05_LocalInput2","int",964); VuxDbgBrkO() 
{   
 VUXRSVB(1,1);    int param; VUXLV("int",param,1);
 VUXRSVB(2,2);    CLibType lt; VUXLV("CLibType",lt,2);

    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    �������������þֲ�����(���븳ֵ���)��������param��ֵ��	���ַ�ʽ���Դ���ײ����롣	*/
 VUXRS(3);    lt.GetParam(&param);
    //��������
 VUXRS(4);    {int __vurtv__= param;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
ģ���ж϶�ȫ�ֱ������޸�
///////////////////////////////////////////////*/
int CInsideIO2::_06_Interrupt(int arg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","arg",(const void*)&arg}}; if(VuxMckM("_06_Interrupt",&vmckrt,vmckds,1,"CInsideIO2",965,3,1)) return *(int*)vmckrt;{__VUFNINFO__("_06_Interrupt","int",965); VuxDbgBrkO() 
{   
    /*[ѧϰ��ʾ��ģ���ж�]    ������Ƕ��ʽ���ԡ�����жϿ�����ɶ�ȫ�ֱ������޸ģ�	  �Ҵ���Ĺ����߼��漰��ȫ�ֱ��������������λ��ģ���жϡ�	����������ж�λ�ã��Ҽ��˵�ѡ��ģ���жϡ���	*/    
    //... ��������ʡ��
    if( VUXRS(1)&&(giVar > 1))
    {{
 VUXRS(2);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(3);        {int __vurtv__= 0;VUXFRTY();}
    }}
}}}

/* ////////////////////////////////////////////// 
���þֲ�����Ͷ�θ�ֵ�����ѭ��
///////////////////////////////////////////////*/
int CInsideIO2::_07_LoopEver()
{void* vmckrt=0; if(VuxMckM("_07_LoopEver",&vmckrt,0,0,"CInsideIO2",966,8,1)) return *(int*)vmckrt;{__VUFNINFO__("_07_LoopEver","int",966); VuxDbgBrkO() 
{   
 VUXRSVB(1,1);    int count = 0; VUXLV("int",count,1);
 VUXRSVB(2,2);    int index = 0; VUXLV("int",index,2);
    /*[ѧϰ��ʾ����ѭ������]	ѭ��������while(TRUE)����û���˳��ж���	����ʱ�þֲ�����(�滻ѡ�д���)����while(TRUE)��TRUE�滻Ϊ	  һ���������ڱ�����ö�θ�ֵ����Ϊ���ɸ�TRUE�������ΪFALSE��	*/
    while( VUXRS(3)&&(1))
    {VUXRBR_LOOP2(1,2,21);{
        //û���˳���������ѭ��ͨ�������������еĴ��룬
        //���������ĳ�������ֻ�ü򵥴������
        if( VUXRS(4)&&(++index % 3 == 0))
        {{
 VUXRS(5);            count++;
        }}
    }} VUXRS(6);

    /*[ѧϰ��ʾ��û��ѭ����������ѭ������]	ʹ�ò�����ͨ���룬����break;��������Ⱦ��Ʒ����	*/
    for(;;)
    {VUXRBR_LOOP2(3,6,22);{
 VUXRS(7);        count++;
    }}

 VUXRS(8);    {int __vurtv__= count;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
�ײ������skip it��call times������ʹ��
///////////////////////////////////////////////*/
void CInsideIO2::_08_call_sub_test(int a)
{VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(!VuxMckM("_08_call_sub_test",0,vmckds,1,"CInsideIO2",967,4,1)) {__VUFNID__(967); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���ײ�����֮��]    �ײ㺯��������ʱ������skip it������    �ܶ�ʱ��Ҫ������ĳ���������Ƿ����ĳ����������ʱ�������õײ�    �����call times�������ڱ������������Ԥ�ڵ��ô�����	*/
 VUXRS(1);    endless_loop_sub(); //�ײ㺯����ѭ��
    
 VUXRS(2);    error_sub(); //�ײ㺯������
    
    if( VUXRS(3)&&(a <  0))
    {{
        //���ж���ĳЩ�������Ƿ������report_error()
 VUXRS(4);        report_error();
    }}
    
    //��������ʡ��
}VUXFRTNE();}}

/* ////////////////////////////////////////////// 
�ײ����룬��ε���ͬһ�ײ㺯���Ĵ���
///////////////////////////////////////////////*/
int CInsideIO2::_09_mul_call_test()
{void* vmckrt=0; if(VuxMckM("_09_mul_call_test",&vmckrt,0,0,"CInsideIO2",968,13,1)) return *(int*)vmckrt;{__VUFNINFO__("_09_mul_call_test","int",968); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���ײ�����֮��]    ��ε���ͬһ�ײ㺯��������ѭ���γɵĶ�ε��ã�������ÿ�������ֵͬ��    ���÷ֺŸ������ֵ����ֵ���������㣬���㲿��ʹ�����һ����	*/
 VUXRSVB(1,1);    DATA* pData1 = 0; VUXLV("DATA*",pData1,1);
 VUXRSVB(2,2);    DATA* pData2 = 0; VUXLV("DATA*",pData2,2);
 VUXRS(3);    get_mem(&pData1);
 VUXRS(4);    get_mem(&pData2);
    
    if( VUXRS(5)&&(pData1 == 0) || VUXRS(6)&&( pData2 == 0))
    {{
 VUXRS(7);        {int __vurtv__= -1;VUXFRTY();}
    }}
        
    if( VUXRS(8)&&(pData1->pBase == 0) || VUXRS(9)&&(  pData2->pBase == 0))
    {{
 VUXRS(10);        {int __vurtv__= -1;VUXFRTY();}
    }}
        
    if( VUXRS(11)&&(pData1->pBase->a == pData2->pBase->a))
    {{
 VUXRS(12);        {int __vurtv__= 1;VUXFRTY();}
    }}

 VUXRS(13);    {int __vurtv__= 0;VUXFRTY();}
}}}



#include "VuxConn/Demo/_5U_InsideIO.cpp.h"

void _demo__5u_insideio_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
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