
//Code/Demo/_4U_DataBasic.cpp
#include "VuxInc/VuxFore.h"



#include "DataBasic.h"
#include "Typedef2.h"
#include "student.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_4U_DataBasic.cpp.h"
#include "VuxMock/Demo/_4U_DataBasic.cpp"

/* ////////////////////////////////////////////// 
���ݱ�������������
///////////////////////////////////////////////*/
int _01_Ansi2(int i, char ch, float fl, char* str)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"int","i",(const void*)&i},{2,"char","ch",(const void*)&ch},{3,"float","fl",(const void*)&fl},{4,"char*","str",(const void*)&str}}; if(VuxMck("_01_Ansi2",&vmckrt,vmckds,4,"",815,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_01_Ansi2","int",815); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= i;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ������������ݣ� UNICODE
///////////////////////////////////////////////*/
short _02_Unicode2(short sh, WCHAR wch, double dl, unsigned short* wstr)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"short","sh",(const void*)&sh},{2,"WCHAR","wch",(const void*)&wch},{3,"double","dl",(const void*)&dl},{4,"unsigned short*","wstr",(const void*)&wstr}}; if(VuxMck("_02_Unicode2",&vmckrt,vmckds,4,"",1068,1,9)) return *(short*)vmckrt;{__VUFNINFO__("_02_Unicode2","short",1068); VuxDbgBrkO() 
{
 VUXRS(1);    {short __vurtv__= sh;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ�񣺽ṹָ��
///////////////////////////////////////////////*/
BASE* _03_Struct2(BASE* pBase)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"BASE*","pBase",(const void*)&pBase}}; if(VuxMck("_03_Struct2",&vmckrt,vmckds,1,"",817,1,9)) return *(BASE**)vmckrt;{__VUFNINFO__("_03_Struct2","BASE*",817); VuxDbgBrkO() 
{
 VUXRS(1);    {BASE* __vurtv__= pBase;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ�񣺸���һЩ�Ľṹָ��
///////////////////////////////////////////////*/
BASE* _04_Struct22(DATA* pData)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"DATA*","pData",(const void*)&pData}}; if(VuxMck("_04_Struct22",&vmckrt,vmckds,1,"",818,1,9)) return *(BASE**)vmckrt;{__VUFNINFO__("_04_Struct22","BASE*",818); VuxDbgBrkO() 
{
 VUXRS(1);    {BASE* __vurtv__= pData->pBase;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ������
///////////////////////////////////////////////*/
int _05_Array2(int i[10], char ch[10], float fl[10], char* str[10])
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"int[10]","i",(const void*)i},{2,"char[10]","ch",(const void*)ch},{3,"float[10]","fl",(const void*)fl},{4,"char*[10]","str",(const void*)str}}; if(VuxMck("_05_Array2",&vmckrt,vmckds,4,"",819,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_05_Array2","int",819); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= i[0];VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ�񣺽ṹָ������
///////////////////////////////////////////////*/
BASE* _06_Array22(DATA* pDatas[10])
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"DATA*[10]","pDatas",(const void*)pDatas}}; if(VuxMck("_06_Array22",&vmckrt,vmckds,1,"",820,2,1)) return *(BASE**)vmckrt;{__VUFNINFO__("_06_Array22","BASE*",820); VuxDbgBrkO() 
{; VUXRS(1);
 VUXRS(2);    {BASE* __vurtv__= pDatas[0]->pBase;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ������->ָ���༶ָ��ΪNULL
///////////////////////////////////////////////*/
int _07_Pointer2(int a, int* pa, int** ppa, int*** pppa)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"int","a",(const void*)&a},{2,"int*","pa",(const void*)&pa},{3,"int**","ppa",(const void*)&ppa},{4,"int***","pppa",(const void*)&pppa}}; if(VuxMck("_07_Pointer2",&vmckrt,vmckds,4,"",821,15,1)) return *(int*)vmckrt;{__VUFNINFO__("_07_Pointer2","int",821); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int result = a; VUXLV("int",result,1);
    if( VUXRS(2)&&(pa != 0))
    {{
 VUXRS(3);        result += *pa;
    }}
    
    if( VUXRS(4)&&(ppa != 0) && VUXRS(5)&&( *ppa != 0))
    {{
 VUXRSVB(6,2);        int* pTemp = *ppa; VUXLV("int*",pTemp,2);
 VUXRS(7);        result += *pTemp;
    }}
    
    if( VUXRS(8)&&(pppa != 0) && VUXRS(9)&&( *pppa != 0))
    {{
 VUXRSVB(10,3);        int** ppTemp = *pppa; VUXLV("int**",ppTemp,3);
        if( VUXRS(11)&&(ppTemp != 0) && VUXRS(12)&&( *ppTemp != 0))
        {{
 VUXRSVB(13,4);            int* pTemp = *ppTemp; VUXLV("int*",pTemp,4);
 VUXRS(14);            result += *pTemp;
        }}
    }}

 VUXRS(15);    {int __vurtv__= result;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ������<-ָ��������ָ��ΪNULL
///////////////////////////////////////////////*/
BASE* _08_Pointer22(DATA* pData)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"DATA*","pData",(const void*)&pData}}; if(VuxMck("_08_Pointer22",&vmckrt,vmckds,1,"",822,3,1)) return *(BASE**)vmckrt;{__VUFNINFO__("_08_Pointer22","BASE*",822); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(pData == 0))
    {{ 
 VUXRS(2);        {BASE* __vurtv__= 0;VUXFRTY();}
    }}
 VUXRS(3);    {BASE* __vurtv__= pData->pBase;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ��Ϊָ�뽨���ն���
///////////////////////////////////////////////*/
int _09_EmptyObject2(BASE* pData, CList<BASE*, BASE*>* pList)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"BASE*","pData",(const void*)&pData},{2,"CList<BASE*,BASE*>*","pList",(const void*)&pList}}; if(VuxMck("_09_EmptyObject2",&vmckrt,vmckds,2,"",823,6,1)) return *(int*)vmckrt;{__VUFNINFO__("_09_EmptyObject2","int",823); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(pData != 0))
    {{
 VUXRS(2);        pData->a = 123;
 VUXRS(3);        pData->f = 123.456;
    }}

    if( VUXRS(4)&&(pList == 0))
    {{
 VUXRS(5);        {int __vurtv__= -1;VUXFRTY();}
    }}

 VUXRS(6);    {int __vurtv__= pList->GetCount();VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ����������
///////////////////////////////////////////////*/
char* _10_TypeReset2(void* pData, char** strs)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"void*","pData",(const void*)&pData},{2,"char**","strs",(const void*)&strs}}; if(VuxMck("_10_TypeReset2",&vmckrt,vmckds,2,"",824,1,9)) return *(char**)vmckrt;{__VUFNINFO__("_10_TypeReset2","char*",824); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= strs[0];VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
���ݱ�񣺵��ýű�
///////////////////////////////////////////////*/
int _11_CallScript2(MYSDATA* pMyData)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"MYSDATA*","pMyData",(const void*)&pMyData}}; if(VuxMck("_11_CallScript2",&vmckrt,vmckds,1,"",825,7,1)) return *(int*)vmckrt;{__VUFNINFO__("_11_CallScript2","int",825); VuxDbgBrkO() 
{
    //Ӧ��address
    if( VUXRS(1)&&(pMyData->ptr == &gSData))
    {{
 VUXRS(2);        {int __vurtv__= pMyData->ptr->a;VUXFRTY();}
    }}
    
    //Ӧ��ptrcpy
    if( VUXRS(3)&&(pMyData->ptr == gpSData))
    {{
 VUXRS(4);        {int __vurtv__= pMyData->ptr->a;VUXFRTY();}
    }} 
    
    //Ӧ��address
    if( VUXRS(5)&&(pMyData->pptr == &gpSData))
    {{
 VUXRS(6);        {int __vurtv__= (*pMyData->pptr)->a;VUXFRTY();}
    }}

 VUXRS(7);    {int __vurtv__= 0;VUXFRTY();}
}}}

typedef int (*MYFUNC)(int a, int b);
/* //////////////////////////////////////////////
����ָ�븳ֵ
����: a ������
      b ������
	  pFunc һ������ָ��
����: ���ú���ָ���Ľ��
///////////////////////////////////////////////*/
int _12_FunctionPtr2(int a, int b, MYFUNC pFunc, int (*pFunc2)(int a, int b))
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b},{3,"MYFUNC","pFunc",(const void*)&pFunc},{4,"int(*)(int a,int b)","pFunc2",(const void*)&pFunc2}}; if(VuxMck("_12_FunctionPtr2",&vmckrt,vmckds,4,"",826,12,1)) return *(int*)vmckrt;{__VUFNINFO__("_12_FunctionPtr2","int",826); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ������ָ�븳ֵ]    1) ָ��NULL: ��һ��ָ��һ�����ڱ������дNULL�����κ�ֵ��    2) ָ���Զ����ɵĺ���: �ڵ�Ԫ��༭״̬�£��Ҽ��˵�ѡ�񡰺���ָ�븳ֵ����    ���Զ����ɺ���ʵ�֣����Զ��ڵ�Ԫ������д$fp��ͷ��һ���ַ�����ֵ����ɡ�    ������һ�㺯��һ�����õײ����롣    �˷�ʽֻ�����ں���ָ������Ϊȫ�ֺ����ĳ��������ʺ���ָ�����Ա�����ĺ���ָ�롣    3) ָ���Ѿ����ڵĺ���: ��������������벿����Ӵ��룬�磺pFunc = onefunc;     ����onefunc�Ǻ��������������ָ�������Ϊ���Ա��������ֻ��ʹ�ô˷�ʽ��    �����á���Ӽ�ӵײ����롱�������õײ����롣	*/
   
 VUXRSVB(1,1);    int ret = 0; VUXLV("int",ret,1);
    if( VUXRS(2)&&(pFunc != 0))
    {{
 VUXRSVB(3,2);        int x1 = pFunc(a, b); VUXLV("int",x1,2);
 VUXRSVB(4,3);        int x2 = (*pFunc)(a, b); VUXLV("int",x2,3);
 VUXRS(5);        ret += x1;
 VUXRS(6);        ret += x2;
    }}
     
    if( VUXRS(7)&&(pFunc2 != 0))
    {{
 VUXRSVB(8,4);        int x3 = pFunc2(a, b); VUXLV("int",x3,4);
 VUXRSVB(9,5);        int x4 = (*pFunc2)(a, b); VUXLV("int",x4,5);
 VUXRS(10);        ret += x3;
 VUXRS(11);        ret += x4;
    }}  
     
 VUXRS(12);    {int __vurtv__= ret;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
����ָ�븳ֵ
����: item ָ�������е�һ��
      items ָ��һ������
	  pFunc һ������ָ��
����: itemָ��items�е�λ�õ���ţ���item==items+3,�򷵻�3
///////////////////////////////////////////////*/
int _12_VariablePtr2(int* item, int* items, int count)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int*","item",(const void*)&item},{2,"int*","items",(const void*)&items},{3,"int","count",(const void*)&count}}; if(VuxMck("_12_VariablePtr2",&vmckrt,vmckds,3,"",1146,13,1)) return *(int*)vmckrt;{__VUFNINFO__("_12_VariablePtr2","int",1146); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ������ָ�븳ֵ]    1) ���ó���: ��������Ƚ�ָ�뱾�������ǱȽ�ָ����ָ�����ֵ�����Ρ�    2) ����һ������ֵ: �ڵ�Ԫ��༭״̬�£��Ҽ��˵�ѡ�񡰱���ָ�븳ֵ����    �ڵ����Ĵ������趨�����������ͣ��Զ��ڵ�Ԫ������д$fv��ͷ��һ���ַ�����ֵ����ɡ�    ��һ�������������飬Ҳ�����ǵ���������    3) ���ڶ�������ֵ: �ڶ�����ͨ��ָ���һ�������һ������һ����������Σ�    a, ���һ�����޹أ���ͬ�����á�����ָ�븳ֵ��ָ����и�ֵ��    b, ���һ������ȣ�ֱ�ӿ�����һ������ֵ��    c, ָ���һ������ĳ���д��һ�����ֵ+��ţ����һ������ֵΪ$vpe08e0fea��       ��ڶ�������д$vpe08e0fea+1����ָ���1��(��0��ʼ����	*/
   
    if( VUXRS(1)&&(item == 0) || VUXRS(2)&&( items == 0))
    {{
 VUXRS(3);        {int __vurtv__= -1;VUXFRTY();}
    }}
         
    if( VUXRS(4)&&(item < items) || VUXRS(5)&&( item > (items+count)))
    {{
 VUXRS(6);        {int __vurtv__= -1;VUXFRTY();}
    }}

    if( VUXRS(7)&&(item == items))
    {{
 VUXRS(8);        {int __vurtv__= 0;VUXFRTY();}
    }}

    if( VUXRS(9)&&(item == (items + 1)))
    {{
 VUXRS(10);        {int __vurtv__= 1;VUXFRTY();}
    }}

    if( VUXRS(11)&&(item == (items + 9)))
    {{
 VUXRS(12);        {int __vurtv__= 9;VUXFRTY();}
    }}
     
    //return ((int)items - (int)item) / sizeof(*item); ����
 VUXRS(13);    {int __vurtv__= ((int)item - (int)items) / sizeof(*item);VUXFRTY();}
}}}

/* //////////////////////////////////////////////
����Ƕ��ʽ���������ֶ����ָ��
����: a ������
      b ������
����: ������
///////////////////////////////////////////////*/
const int XyAddr = 1234;
#define ADDR_BASE 0x1000000
int _13_NumberPointer2(int a, int b)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b}}; if(VuxMck("_13_NumberPointer2",&vmckrt,vmckds,2,"",827,81,1)) return *(int*)vmckrt;{__VUFNINFO__("_13_NumberPointer2","int",827); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int ret = 0; VUXLV("int",ret,1);
 VUXRSVB(2,2);    unsigned int dataAddr; VUXLV("unsigned int",dataAddr,2);
 VUXRSVB(3,3);    unsigned int data; VUXLV("unsigned int",data,3);     
 VUXRSVB(4,4);    int dataLen; VUXLV("int",dataLen,4);     
 VUXRSVB(5,5);    int x,y,z; VUXLV("int",x,5); VUXLVS("int",y,6); VUXLVS("int",z,7);
 VUXRSVB(6,8);    volatile unsigned char* j,k,l; VUXLV("volatile unsigned char*",j,8); VUXLVS("volatile unsigned char",k,9); VUXLVS("volatile unsigned char",l,10);

    /*[ѧϰ��ʾ������Ƕ��ʽ�����£������ֶ����ָ��]    �������� >> �߼� >> �滻 >> ���ֵ�ַתΪ�Ϸ�ָ�룬ѡ�С��Զ�������    ������������������Զ��������Զ�����������󣬿ɵ������ӡ������ֶ����á�    ����ʾ���������Զ�����	*/

    //�ú궨��Ļ���ַ
    //#define BASE_ADDR 0x200000
    //ʹ�ú��﷨���Ի���ַ��ƫ�ƶ���Ļ�������ָ�롣
    //#define Mem01 ((int*)(BASE_ADDR3 + 0x100)) //ָ��1
    //#define Mem02 ((int*)(BASE_ADDR3 + 0x200)) //ָ��2
 VUXRS(7);    * ((int*)_Mem01) = a;
 VUXRS(8);    * ((int*)_Mem02) = b;
 VUXRS(9);    ret += * ((int*)_Mem01);
 VUXRS(10);    ret += * ((int*)_Mem02);

    //ʹ�ú��﷨����Ļ�������ָ��
    //#define Mem03 ((int*)(0x00200100))
    //#define Mem04 ((int*)(0x00200200))
 VUXRS(11);    * ((int*)_Mem03) = a;
 VUXRS(12);    * ((int*)_Mem04) = b;
 VUXRS(13);    ret += * ((int*)_Mem03);
 VUXRS(14);    ret += * ((int*)_Mem04);

    //ʹ�ú��﷨���Ի���ַ��ƫ�ƶ���ĸ�������ָ��
    //#define objData1 ((ObjectType*)(BASE_ADDR + 0x1000))
    //#define objData2 ((ObjectType*)(BASE_ADDR + 0x2000))
 VUXRS(15);    ((ObjectType*)_objData1)->a = a;
 VUXRS(16);    ((ObjectType*)_objData2)->a = b;
 VUXRS(17);    ret += ((ObjectType*)_objData1)->a;
 VUXRS(18);    ret += ((ObjectType*)_objData2)->a;
    
     
    //ʹ�ú��﷨��ֱ�������ֶ���ĸ�������ָ��
    //#define objData3 ((ObjectType*)0x00300100)
    //#define objData4 ((ObjectType*)0x00300200)
 VUXRS(19);    ((ObjectType*)_objData3)->a = a;
 VUXRS(20);    ((ObjectType*)_objData4)->a = b;
 VUXRS(21);    ret += ((ObjectType*)_objData3)->a;
 VUXRS(22);    ret += ((ObjectType*)_objData4)->a;
     
    //��ʹ�ú��壬��ַΪӲ����
 VUXRS(23);    x = *(int*)_0x90000010;
 VUXRS(24);    y = *(int*)_0x90000020;
 VUXRS(25);    x = *(int*)_0x90000040;
     
 VUXRS(26);    *(int*)_0x90000004 = a;
 VUXRS(27);    *(int*)_0x90000008 = b;
 VUXRS(28);    *(int*)_0x90000012 = ret; VUXRS(29);   
     
    //��ָ�븳ֵ
    switch(a)
    {
        case 0:
        {{
            //ͨ����������ĵ�ַ
 VUXRS(32);            dataAddr = _0xB0000000;
 VUXRS(33);            dataLen = *(unsigned short*)_0x6c0c0060;
 VUXRS(34);            break;
        }}
        case 1:
        {{
 VUXRS(36);            dataAddr = _0xB0200000;
 VUXRS(37);            dataLen = *(unsigned short*)_0x6c0c0063;
 VUXRS(38);            break;
        }}
        case 2:
        {{
 VUXRS(40);            dataAddr = _0xB0400000;
 VUXRS(41);            dataLen = *(unsigned short*)_0x6c0c0066;
 VUXRS(42);            break;          
        }}
        default :
        {{
 VUXRS(44);            dataAddr = _0xB0800000;
 VUXRS(45);            dataLen = *(unsigned short*)_0x6c0c0069;
 VUXRS(46);            break;          
        }}
    }
    
    //��һ���ȫ�ֱ�����ͬ���ɼ�����Ҳ֧���Զ���������
 VUXRS(48);    data = *(unsigned int*)dataAddr;
    if( VUXRS(49)&&(data == 10))
    {{
 VUXRS(50);        ret += 1000;
    }}
    else if( VUXRS(51)&&(data < 5))
    {{
 VUXRS(52);        ret += 2000;
    }}
    else
    {{
 VUXRS(53);        ret += 3000;
    }}
        
    //������һЩ��̫�����������ʽ
 VUXRS(54);    j = (unsigned char volatile*)__0x6000__Xr___1_[1];
 VUXRS(55);    ((unsigned char volatile*)_0)[0x500 + 0x20] = (unsigned char)0xF0;
 VUXRS(56);    ((unsigned char volatile*)___0x6000_____1__)[0] = 0x01;
 VUXRS(57);    ((unsigned char volatile*)___0x6000_____1__)[1] = 0x02;
     
    {
 VUXRSVB(58,11);        unsigned char* address; VUXLV("unsigned char*",address,11);
 VUXRSVB(59,12);        int id = 123; VUXLV("int",id,12);
 VUXRS(60);        address = (unsigned char*)__0x1000000_1024_;
 VUXRS(61);        *(unsigned char*)(address) = 0x30;
    }

    {
 VUXRSVB(62,13);        int i; VUXLV("int",i,13);
 VUXRSVB(63,14);        unsigned int addr[6] = 
        {
            _0x1000000,
            _0x1000004,
            _0x1000008,
            _0x1000012,
            _0x1000016,
            _0x1000020
        }; VUXLVA("unsigned int[6]",addr,14);

 VUXRSVB(64,15);        int a[6]; VUXLVA("int[6]",a,15); VUXRS(65);
        for(i=0; VUXRS(67)&&( i<6); VUXRS(66), i++)
        {VUXRBR_LOOP2(3,9,16);{
 VUXRS(68);            a[i] = *(unsigned int*)(addr[i]);
        }}
        

        {
 VUXRSVB(69,16);            int fbase = 0x10000000; VUXLV("int",fbase,16);
 VUXRS(70);            *(unsigned char*)__fbase_0x555_ = 0xaa;
 VUXRS(71);            ret = *(unsigned char*)__fbase_0x555_;
        }
    } 

 VUXRS(72);    y = 0;
    while( VUXRS(73)&&(y < 0x1000))
    {VUXRBR_LOOP2(4,11,17);{
 VUXRS(74);        ((unsigned char volatile*)_0)[y] = (unsigned char)0xFF;
 VUXRS(75);        ((unsigned char volatile*)_0)[y+1] = (unsigned char)0xEE;
         
        if( VUXRS(76)&&(((unsigned char volatile*)_0)[y] != 0xFF))
        {{
 VUXRS(77);            ret++;
        }}
         
        if( VUXRS(78)&&(((unsigned char volatile*)_0)[y+1] != 0xEE))
        {{
 VUXRS(79);            ret++;
        }}
         
 VUXRS(80);        y++;
    }}      
     
 VUXRS(81);    {int __vurtv__= ret;VUXFRTY();}
}}}


/* //////////////////////////////////////////////
C��������ĸ�ֵ
����: clist_t* pDatas ����ͷ
����: ������
///////////////////////////////////////////////*/
int _14_CListTest2(clist_t* pDatas)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"clist_t*","pDatas",(const void*)&pDatas}}; if(VuxMck("_14_CListTest2",&vmckrt,vmckds,1,"",828,10,1)) return *(int*)vmckrt;{__VUFNINFO__("_14_CListTest2","int",828); VuxDbgBrkO() 
{
     /*[ѧϰ��ʾ��C��������ĸ�ֵ]    1����ֻ�蹹��N��item��ֻ�轫���һ��item��pNext��ΪNULL    2�����蹹��N��item�������item�ĳ�Ա��ֵ����ֻ����ֵ�����item��pNext�Զ���ΪNULL    3�����蹹��ѭ���������õ��ýű���ptrcpy�������item��pNext��Ϊָ���׸�item    4��C����˫��������ο�_2T_SendMail.c��_08_send_mail��������һ��������˫������    5��C++˫��������ο�_3T_MyClass.cpp��_02_Response_ok	*/   
 VUXRSVB(1,1);    int count = 0; VUXLV("int",count,1);
 VUXRSVB(2,2);    int ret = 0; VUXLV("int",ret,2);
    
 VUXRSVB(3,3);    clist_t* pItem = pDatas; VUXLV("clist_t*",pItem,3);
    while( VUXRS(4)&&(pItem != 0))
    {VUXRBR_LOOP2(1,2,18);{
 VUXRS(5);        count++;
 VUXRS(6);        ret += pItem->score;
 VUXRS(7);        pItem = pItem->pNext;
        if( VUXRS(8)&&(pItem == pDatas))
        {{
 VUXRS(9);            break;
        }}
    }}
    
    //>>int, count;
 VUXRS(10);    {int __vurtv__= ret;VUXFRTY();}   
}}}

/* //////////////////////////////////////////////
�Զ���ص���ֵ
����: school_t* pSchool�����ڱ���ȫУĳ�ο��Է����Ķ���
����: ������
school_t�Ķ�������ļ���ȡ���ݣ��ļ��ѱ��浽TestProject/VuxData/studentĿ¼�¡�
��Դ�ļ��У������ҵ����ʼ������ʵ����
school_free(&g_school);  //����ԭ������
use_date_file("score01.dat"); //���ļ��ж�ȡ���ݱ���ȫ�ֱ���g_school��
pSchool = &g_school; //�û�ʹ�õĶ���ָ��g_school
///////////////////////////////////////////////*/
int _15_CallbackDefine2(school_t* pSchool)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"school_t*","pSchool",(const void*)&pSchool}}; if(VuxMck("_15_CallbackDefine2",&vmckrt,vmckds,1,"",829,15,1)) return *(int*)vmckrt;{__VUFNINFO__("_15_CallbackDefine2","int",829); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���Զ���ص���ֵ]    �ڱ����棬ѡ���У��Ҽ��˵�ѡ�� �½��ص���ֵ	��ϸ˵������ο���������������֮��(�ص���ֵ)	*/
 VUXRSVB(1,1);    int i, j; VUXLV("int",i,1); VUXLVS("int",j,2); VUXRS(2);
    for(i=0; VUXRS(4)&&( i< (6*10)); VUXRS(3), i++)
    {VUXRBR_LOOP2(1,2,19);{
 VUXRSVB(5,3);        class_t* pClass = pSchool->classes[i]; VUXLV("class_t*",pClass,3);
        if( VUXRS(6)&&(pClass != 0))
        {{ VUXRS(7);
            for(j =0; VUXRS(9)&&( j<42); VUXRS(8), j++)
            {VUXRBR_LOOP2(3,5,20);{
 VUXRSVB(10,4);                student_t* pStudent = pClass->students[j]; VUXLV("student_t*",pStudent,4);
                //С��30�֣�����ҳ�
                if( VUXRS(11)&&(pStudent->Chinese < 30))
                {{
 VUXRS(12);                    well_student_parent();
                }}
                //�����񣬴�绰���ҳ�
                else if( VUXRS(13)&&(pStudent->Chinese < 60))
                {{
 VUXRS(14);                    call_student_parent();
                }}
            }}
        }}
    }}

 VUXRS(15);    {int __vurtv__= 0;VUXFRTY();}
}}}

#include "VuxConn/Demo/_4U_DataBasic.cpp.h"

void _demo__4u_databasic_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
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