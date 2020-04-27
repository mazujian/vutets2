
//Code/Demo/Typedef2.h


#ifndef __VUXTYPEDEF2_H__
#define __VUXTYPEDEF2_H__

#include "CString.h"
#include "CList.h"
#include "CMapStringToPtr.h"
#include "TypeDef.h"


//未实现的数据库操作类
class CDataBase 
{
public:

public:
    void Execute(CString& sql);

public:

    void Execute_vpls(CString& sql);
    void Execute_vpls_(CString& sql);
};

//假设这是库中的一个类
class CLibType
{
public:

public:
    void GetParam(int* pParam);

public:

    void GetParam_vpls(int* pParam);
    void GetParam_vpls_(int* pParam);
};

//自定义异常类
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
TRI_NOT, //非三角形
TRI_ESN, //不等边
TRI_ES2, //等腰
TRI_ES3  //等边
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

//模拟嵌入式环境下，直接用数字定义的指针

 //基地址
#define BASE_ADDR 0x200000

//以基地址加偏移定义的基础类型指针，只需转换基地址。
#define Mem01 ((int*)(BASE_ADDR + 0x100)) //指针1
#define Mem02 ((int*)(BASE_ADDR + 0x200)) //指针2

//直接用数字定义的基础类型指针，需各自转换
#define Mem03 ((int*)(0x00200100))
#define Mem04 ((int*)(0x00200200))

//以基地址定义的复合类型指针，需各自转换
#define objData1 ((ObjectType*)(BASE_ADDR + 0x1000))
#define objData2 ((ObjectType*)(BASE_ADDR + 0x2000))

//直接用数字定义复合类型指针，需各自转换
#define objData3 ((ObjectType*)0x00300100)
#define objData4 ((ObjectType*)0x00300200)

#endif