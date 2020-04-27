
//Code/Demo/TypeDef.h


#ifndef __VUXSTYPEDEF_H__
#define __VUXSTYPEDEF_H__

#ifdef __cplusplus
extern "C" {
#endif

typedef char* stream_t;
typedef int  BOOL;
typedef unsigned short WCHAR;

typedef char TCHAR;
typedef const char* LPCTSTR;
typedef char*       LPTSTR;
typedef const char* LPCSTR;
typedef const unsigned short LPCWSTR;

typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

#undef NULL
#define NULL    0

#ifdef __cplusplus
#define BEFORE_START_POSITION ((POSITION)-1L)
struct __POSITION { };
typedef __POSITION* POSITION;
#endif
typedef char *  va_list;

#define ASSERT(b)
#define ASSERT_VALID(ptr)
#define AFXAPI __stdcall
#define AFX_CDECL _cdecl
#define PASCAL __stdcall
#define FASTCALL __stdcall

/*
保存一个Email数据的结构
*/
#define MAX_MAIL_LEN 64 
typedef struct Mail
{
    char mail[MAX_MAIL_LEN];    //如 abc@kailesoft.com
    char name[MAX_MAIL_LEN];    //如 abc
    char server[MAX_MAIL_LEN];  //如 kailesoft.com
    struct Mail* p_next;        //指向下一个Mail对象
}Mail;

/*
另一个Email数据的结构，使用双向链表
*/
typedef struct MyMail
{
    char mail[MAX_MAIL_LEN];    //如 abc@kailesoft.com
    char name[MAX_MAIL_LEN];    //如 abc
    char server[MAX_MAIL_LEN];  //如 kailesoft.com
}MyMail;

/*
双向链表数据结构
*/
typedef struct ListItem
{
    struct ListItem* p_prev;
    void*  p_data;
    struct ListItem* p_next;

}ListItem;

/*
调用脚本示例数据结构
*/
typedef struct SDATA
{
    int a;
    int b;
}SDATA;

extern SDATA  gSData;
extern SDATA* gpSData;

/*
调用脚本示例数据结构2
*/
typedef struct MYSDATA
{
    SDATA* ptr;
    SDATA** pptr;
}MYSDATA;

typedef struct tagBASE
{
    int   a;
    float f;
    char* str;
}BASE;

typedef struct tagDATA
{
    BASE* pBase;
    BASE  bases[10];
    BASE* pBases[10];
}DATA;


typedef struct tagMYSTRUCT
{
    int          i;
    unsigned int ui;
    char*        str;
}MYSTRUCT;

typedef struct tagDATA_B
{
    int* parr[10];
    MYSTRUCT* objs[10];
}DATA_B;

typedef struct tagDATA_A
{
    DATA_B b;
}DATA_A;

extern DATA_A gDataA;

#ifdef __cplusplus
}
#endif

#endif
