
//Code/Demo/Typedef2.h


#ifndef __VUXTYPEDEF2_H__
#define __VUXTYPEDEF2_H__

#include "CString.h"
#include "CList.h"
#include "CMapStringToPtr.h"
#include "TypeDef.h"


//δʵ�ֵ����ݿ������
class CDataBase 
{
public:

public:
    void Execute(CString& sql);

public:

    void Execute_vpls(CString& sql);
    void Execute_vpls_(CString& sql);
};

//�������ǿ��е�һ����
class CLibType
{
public:

public:
    void GetParam(int* pParam);

public:

    void GetParam_vpls(int* pParam);
    void GetParam_vpls_(int* pParam);
};

//�Զ����쳣��
class CMyException 
{
public:

public:
    const char* msg;
    CMyException();
};

typedef CList<CString, CString> CStringList;

typedef struct tagUserInfo
{
    CString     phone;
    CString     name;
    CStringList titles;
}UserInfo;

typedef struct tagJobInfo
{
    CString sort;
    CString title;
    CString content;
}JobInfo;

enum{
TRI_NOT, //��������
TRI_ESN, //���ȱ�
TRI_ES2, //����
TRI_ES3  //�ȱ�
};

typedef CList<JobInfo*, JobInfo*> CJobList;
extern void GetUserInfo(UserInfo* pInfo, stream_t pMsg);
extern BOOL GetJobList(CJobList* pList, UserInfo* pInfo);
extern void SendMsg(const CString& msg, UserInfo* pInfo);
extern void GetSendedMap(CMapStringToPtr* pMap, UserInfo* pInfo);

static int endless_loop_sub()
{void* vmckrt=0; if(VuxMck("endless_loop_sub",&vmckrt,0,0,"",813,2,1)) return *(int*)vmckrt;{__VUFNINFO__("endless_loop_sub","int",813); VuxDbgBrkO() 
{ VUXRS(1);
    for(;;)
    {VUXRBR_LOOP2(1,2,15);{
        ; VUXRS(2);
    }}
}}}

static int error_sub()
{void* vmckrt=0; if(VuxMck("error_sub",&vmckrt,0,0,"",814,3,1)) return *(int*)vmckrt;{__VUFNINFO__("error_sub","int",814); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int* ptr = 0; VUXLV("int*",ptr,1);
 VUXRS(2);    *ptr = 0;
 VUXRS(3);    {int __vurtv__= *ptr;VUXFRTY();}
}}}


enum {MSG_MAX=70};

extern SDATA  gSData;
extern SDATA* gpSData;

typedef struct ObjectType
{
    int a; 
    int b;
}ObjectType;

//ģ��Ƕ��ʽ�����£�ֱ�������ֶ����ָ��

 //����ַ
#define BASE_ADDR 0x200000

//�Ի���ַ��ƫ�ƶ���Ļ�������ָ�룬ֻ��ת������ַ��
#define Mem01 ((int*)(BASE_ADDR + 0x100)) //ָ��1
#define Mem02 ((int*)(BASE_ADDR + 0x200)) //ָ��2

//ֱ�������ֶ���Ļ�������ָ�룬�����ת��
#define Mem03 ((int*)(0x00200100))
#define Mem04 ((int*)(0x00200200))

//�Ի���ַ����ĸ�������ָ�룬�����ת��
#define objData1 ((ObjectType*)(BASE_ADDR + 0x1000))
#define objData2 ((ObjectType*)(BASE_ADDR + 0x2000))

//ֱ�������ֶ��帴������ָ�룬�����ת��
#define objData3 ((ObjectType*)0x00300100)
#define objData4 ((ObjectType*)0x00300200)

#endif