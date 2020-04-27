
//Code/Demo/autocase.c
#include "VuxInc/VuxFore.h"



//#include "TypeDef.h"
#include <stdio.h>
#include <string.h>

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/autocase.c.h"
#include "VuxMock/Demo/autocase.c"
typedef unsigned int size_t;

#undef NULL
#define NULL    0

//普通的用例生成
int ac01_white_box(int A, int B, int X)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","A",(const void*)&A},{2,"int","B",(const void*)&B},{3,"int","X",(const void*)&X}}; if(VuxMck("ac01_white_box",&vmckrt,vmckds,3,"",1181,7,1)) return *(int*)vmckrt;{__VUFNINFO__("ac01_white_box","int",1181); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(A>1) && VUXRS(2)&&( B==0))
    {{
 VUXRS(3);        X = X/A;
    }}

    if( VUXRS(4)&&(A==2) || VUXRS(5)&&( X>1))
    {{
 VUXRS(6);        X = X+1;
    }}

 VUXRS(7);    {int __vurtv__= X;VUXFRTY();}
}}}

//使用了中间变量，且有中间计算的情形
int ac02_middle_var01(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac02_middle_var01",&vmckrt,vmckds,1,"",1182,5,1)) return *(int*)vmckrt;{__VUFNINFO__("ac02_middle_var01","int",1182); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int b = a; VUXLV("int",b,1);
 VUXRS(2);    b++;
    if( VUXRS(3)&&(b > 0))
    {{
 VUXRS(4);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(5);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}}

int gg = 0;
//使用了全局变量，且有中间计算的情形
int ac03_middle_var02(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac03_middle_var02",&vmckrt,vmckds,1,"",1183,5,1)) return *(int*)vmckrt;{__VUFNINFO__("ac03_middle_var02","int",1183); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int b = gg; VUXLV("int",b,1);
 VUXRS(2);    b++;
    if( VUXRS(3)&&(b > 10))
    {{
 VUXRS(4);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(5);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}}

int* gptr = NULL;
static void myfunc()
{if(!VuxMck("myfunc",0,0,0,"",1184,3,1)) {__VUFNID__(1184); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int a = 123; VUXLV("int",a,1);
 VUXRS(2);    a++;
 VUXRS(3);    *gptr = a;
}VUXFRTNE();}}
    
//调用myfunc()时会崩溃，自动设为skip it
int ac11_pow_test(int g, int e)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","g",(const void*)&g},{2,"int","e",(const void*)&e}}; if(VuxMck("ac11_pow_test",&vmckrt,vmckds,2,"",1185,16,1)) return *(int*)vmckrt;{__VUFNINFO__("ac11_pow_test","int",1185); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int result = 0; VUXLV("int",result,1);
  
 VUXRS(2);    myfunc();
    
    if( VUXRS(3)&&(g == 0))
    {{
 VUXRS(4);        result = 0;
    }}
    else if( VUXRS(5)&&(g == 1))
    {{
 VUXRS(6);        result = 1;
    }}
    else if( VUXRS(7)&&(e == 0))
    {{ 
 VUXRS(8);        result = 1;
    }}
    else if( VUXRS(9)&&(e == 1))
    {{
 VUXRS(10);        result = g;
    }}
    else
    {{
 VUXRSVB(11,2);        int i; VUXLV("int",i,2); VUXRS(12);
        for(i=0; VUXRS(14)&&( i<e); VUXRS(13), i++)
        {VUXRBR_LOOP2(2,7,103);{
 VUXRS(15);            result *= g;
        }}
    }}

 VUXRS(16);    {int __vurtv__= result;VUXFRTY();}
}}}

static int sub001()
{void* vmckrt=0; if(VuxMck("sub001",&vmckrt,0,0,"",1186,1,9)) return *(int*)vmckrt;{__VUFNINFO__("sub001","int",1186); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

//调用底层函数的示例1，通过底层函数的返回值赋值的情形
int ac12_call_sub_01()
{void* vmckrt=0; if(VuxMck("ac12_call_sub_01",&vmckrt,0,0,"",1187,4,1)) return *(int*)vmckrt;{__VUFNINFO__("ac12_call_sub_01","int",1187); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int a = sub001(); VUXLV("int",a,1);
    if( VUXRS(2)&&(a > 0))
    {{
 VUXRS(3);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(4);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}}

int sub002(int* a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int*","a",(const void*)&a}}; if(VuxMck("sub002",&vmckrt,vmckds,1,"",1188,1,9)) return *(int*)vmckrt;{__VUFNINFO__("sub002","int",1188); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= 0;VUXFRTY();}
}}}

//调用底层函数的示例1，通过底层函数的出参赋值的情形
int ac13_call_sub_02()
{void* vmckrt=0; if(VuxMck("ac13_call_sub_02",&vmckrt,0,0,"",1189,5,1)) return *(int*)vmckrt;{__VUFNINFO__("ac13_call_sub_02","int",1189); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int a = 0; VUXLV("int",a,1);
 VUXRS(2);    sub002(&a);
    if( VUXRS(3)&&(a > 10))
    {{
 VUXRS(4);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(5);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}}

//C字符串计算，调用strlen
int ac21_strlen(const char* str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("ac21_strlen",&vmckrt,vmckds,1,"",1190,4,1)) return *(int*)vmckrt;{__VUFNINFO__("ac21_strlen","int",1190); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int a = strlen(str); VUXLV("int",a,1);
    if( VUXRS(2)&&(a > 10))
    {{
 VUXRS(3);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(4);        {int __vurtv__= -1;VUXFRTY();}
    }}
}}}

//C字符串计算，调用strcmp
int ac22_strcmp(const char* str1, const char* str2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","str1",(const void*)&str1},{2,"char*","str2",(const void*)&str2}}; if(VuxMck("ac22_strcmp",&vmckrt,vmckds,2,"",1191,8,1)) return *(int*)vmckrt;{__VUFNINFO__("ac22_strcmp","int",1191); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int len = strlen(str1); VUXLV("int",len,1);
 VUXRSVB(2,2);    int a = strcmp(str1, str2); VUXLV("int",a,2);
    if( VUXRS(3)&&(len < 10))
    {{
        if( VUXRS(4)&&(a > 0))
        {{
 VUXRS(5);            {int __vurtv__= 1;VUXFRTY();}
        }}
        else if( VUXRS(6)&&(a == 0))
        {{
 VUXRS(7);            {int __vurtv__= 0;VUXFRTY();}
        }}
        else
        {{
 VUXRS(8);            {int __vurtv__= -1;VUXFRTY();}
        }}
    }}
}}}

//C字符串计算，调用strcmp
int ac23_strcmp2(const char* str1, const char* str2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","str1",(const void*)&str1},{2,"char*","str2",(const void*)&str2}}; if(VuxMck("ac23_strcmp2",&vmckrt,vmckds,2,"",1192,3,1)) return *(int*)vmckrt;{__VUFNINFO__("ac23_strcmp2","int",1192); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(strcmp(str1, str2) == 0))
    {{
 VUXRS(2);        {int __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(3);    {int __vurtv__= 0;VUXFRTY();}
}}}

//C字符串计算，调用strncmp
int ac24_strncmp(const char* str1, const char* str2, int n)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","str1",(const void*)&str1},{2,"char*","str2",(const void*)&str2},{3,"int","n",(const void*)&n}}; if(VuxMck("ac24_strncmp",&vmckrt,vmckds,3,"",1193,8,1)) return *(int*)vmckrt;{__VUFNINFO__("ac24_strncmp","int",1193); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int len = strlen(str1); VUXLV("int",len,1);
 VUXRSVB(2,2);    int a = strncmp(str1, str2, n); VUXLV("int",a,2);
    if( VUXRS(3)&&(len < 10))
    {{
        if( VUXRS(4)&&(a > 0))
        {{
 VUXRS(5);            {int __vurtv__= 1;VUXFRTY();}
        }}
        else if( VUXRS(6)&&(a == 0))
        {{
 VUXRS(7);            {int __vurtv__= 0;VUXFRTY();}
        }}
        else
        {{
 VUXRS(8);            {int __vurtv__= -1;VUXFRTY();}
        }}
    }}
}}}

//C字符串计算，调用strchr
int ac25_strchr(const char* str1, char chr, const char* name)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","str1",(const void*)&str1},{2,"char","chr",(const void*)&chr},{3,"char*","name",(const void*)&name}}; if(VuxMck("ac25_strchr",&vmckrt,vmckds,3,"",1194,5,1)) return *(int*)vmckrt;{__VUFNINFO__("ac25_strchr","int",1194); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int xx = 0; VUXLV("int",xx,1);
 VUXRSVB(2,2);    char* pData = strchr(str1, chr); VUXLV("char*",pData,2);
    if( VUXRS(3)&&(pData == 0))
    {{
 VUXRS(4);        {int __vurtv__= -1;VUXFRTY();}
    }}
 VUXRS(5);    {int __vurtv__= 0;VUXFRTY();}
}}}

//C字符串计算，调用strrchr
int ac26_strrchr(const char* str1, char chr, const char* name)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","str1",(const void*)&str1},{2,"char","chr",(const void*)&chr},{3,"char*","name",(const void*)&name}}; if(VuxMck("ac26_strrchr",&vmckrt,vmckds,3,"",1195,5,1)) return *(int*)vmckrt;{__VUFNINFO__("ac26_strrchr","int",1195); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int xx = 0; VUXLV("int",xx,1);
 VUXRSVB(2,2);    char* pData = strrchr(str1, chr); VUXLV("char*",pData,2);
    if( VUXRS(3)&&(pData == 0))
    {{
 VUXRS(4);        {int __vurtv__= -1;VUXFRTY();}
    }}
 VUXRS(5);    {int __vurtv__= 0;VUXFRTY();}
}}}

//C字符串计算，调用strspn
int ac27_strspn(const char* str1, const char* str2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","str1",(const void*)&str1},{2,"char*","str2",(const void*)&str2}}; if(VuxMck("ac27_strspn",&vmckrt,vmckds,2,"",1196,8,1)) return *(int*)vmckrt;{__VUFNINFO__("ac27_strspn","int",1196); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    size_t len = strspn(str1, str2); VUXLV("size_t",len,1);
    
    if( VUXRS(2)&&(len == 5))
    {{
 VUXRS(3);        {int __vurtv__= len;VUXFRTY();}
    }}
    else if( VUXRS(4)&&(len >2))
    {{
 VUXRS(5);        {int __vurtv__= len;VUXFRTY();}
    }}
    else if( VUXRS(6)&&(len != 0))
    {{
 VUXRS(7);        {int __vurtv__= len;VUXFRTY();}
    }}
    else
    {{ 
 VUXRS(8);        {int __vurtv__= len;VUXFRTY();}
    }}
}}}

//C字符串计算，调用strcspn
int ac28_strcspn(const char* str1, const char* str2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","str1",(const void*)&str1},{2,"char*","str2",(const void*)&str2}}; if(VuxMck("ac28_strcspn",&vmckrt,vmckds,2,"",1197,8,1)) return *(int*)vmckrt;{__VUFNINFO__("ac28_strcspn","int",1197); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    size_t len = strcspn(str1, str2); VUXLV("size_t",len,1);
    
    if( VUXRS(2)&&(len == 5))
    {{
 VUXRS(3);        {int __vurtv__= len;VUXFRTY();}
    }}
    else if( VUXRS(4)&&(len >2))
    {{
 VUXRS(5);        {int __vurtv__= len;VUXFRTY();}
    }}
    else if( VUXRS(6)&&(len != 0))
    {{
 VUXRS(7);        {int __vurtv__= len;VUXFRTY();}
    }}
    else
    {{ 
 VUXRS(8);        {int __vurtv__= len;VUXFRTY();}
    }}
}}}

//C字符串计算，调用strpbrk
char* ac29_strpbrk(const char* str1, const char* str2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","str1",(const void*)&str1},{2,"char*","str2",(const void*)&str2}}; if(VuxMck("ac29_strpbrk",&vmckrt,vmckds,2,"",1198,4,1)) return *(char**)vmckrt;{__VUFNINFO__("ac29_strpbrk","char*",1198); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    char* pData = strpbrk(str1, str2); VUXLV("char*",pData,1);
    if( VUXRS(2)&&(pData == 0))
    {{
 VUXRS(3);        {char* __vurtv__= pData;VUXFRTY();}
    }}
 VUXRS(4);    {char* __vurtv__= pData;VUXFRTY();}
}}}

//C字符串计算，调用strstr
char* ac30_strstr(const char* str1, const char* str2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","str1",(const void*)&str1},{2,"char*","str2",(const void*)&str2}}; if(VuxMck("ac30_strstr",&vmckrt,vmckds,2,"",1199,4,1)) return *(char**)vmckrt;{__VUFNINFO__("ac30_strstr","char*",1199); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    char* pData = strstr(str1, str2); VUXLV("char*",pData,1);
    if( VUXRS(2)&&(pData == 0))
    {{
 VUXRS(3);        {char* __vurtv__= pData;VUXFRTY();}
    }}
 VUXRS(4);    {char* __vurtv__= pData;VUXFRTY();}
}}}

//文件相关，调用fopen
int ac41_fopen(const char* path)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","path",(const void*)&path}}; if(VuxMck("ac41_fopen",&vmckrt,vmckds,1,"",1200,4,1)) return *(int*)vmckrt;{__VUFNINFO__("ac41_fopen","int",1200); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    FILE* p_file = fopen(path, "rb+"); VUXLV("FILE*",p_file,1);
    if( VUXRS(2)&&(p_file == 0))
    {{ 
 VUXRS(3);        {int __vurtv__= 0;VUXFRTY();}
    }}
    
 VUXRS(4);    {int __vurtv__= 1;VUXFRTY();}
}}}

const int gArray[] = {1,2,3};

//涉及全局常量
int ac51_const_global(int b)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","b",(const void*)&b}}; if(VuxMck("ac51_const_global",&vmckrt,vmckds,1,"",1201,4,1)) return *(int*)vmckrt;{__VUFNINFO__("ac51_const_global","int",1201); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int a = gArray[1]; VUXLV("int",a,1);
    if( VUXRS(2)&&(a > b))
    {{
 VUXRS(3);        {int __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(4);    {int __vurtv__= 0;VUXFRTY();}
}}}

//死循环处理
int ac52_while_true(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac52_while_true",&vmckrt,vmckds,1,"",1202,6,1)) return *(int*)vmckrt;{__VUFNINFO__("ac52_while_true","int",1202); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int b = 0; VUXLV("int",b,1);

    if( VUXRS(2)&&(a > 0))
    {{
        while( VUXRS(3)&&( 1) )
        {VUXRBR_LOOP2(2,3,104);{
 VUXRS(4);            b++;
        }}
    }} VUXRS(5);

    for(;;)
    {VUXRBR_LOOP2(3,6,105);{

    }} 

 VUXRS(6);    {int __vurtv__= b;VUXFRTY();}
}}}

typedef unsigned char uint8_t;
#define JOY_UP 5
int ReadJoystick();

uint8_t STM_EVAL_PBGetState(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("STM_EVAL_PBGetState",&vmckrt,vmckds,1,"",1204,1,9)) return *(uint8_t*)vmckrt;{__VUFNINFO__("STM_EVAL_PBGetState","uint8_t",1204); VuxDbgBrkO() 
{
 VUXRS(1);    {uint8_t __vurtv__= 1;VUXFRTY();}
}}}

//死循环处理
int ac53_while_true2(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac53_while_true2",&vmckrt,vmckds,1,"",1205,5,1)) return *(int*)vmckrt;{__VUFNINFO__("ac53_while_true2","int",1205); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    uint8_t Key = 0x01; VUXLV("uint8_t",Key,1);
    while ( VUXRS(2)&&(Key != 0x00))
    {VUXRBR_LOOP2(1,2,106);{
        if ( VUXRS(3)&&(ReadJoystick() == 5))
        {{
 VUXRS(4);            {int __vurtv__= 0;VUXFRTY();}
        }}

 VUXRS(5);        Key = STM_EVAL_PBGetState(0);
    }}
}}}

int timeout(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("timeout",&vmckrt,vmckds,1,"",1206,3,1)) return *(int*)vmckrt;{__VUFNINFO__("timeout","int",1206); VuxDbgBrkO() 
{ VUXRS(1);
    for(;;)
    {VUXRBR_LOOP2(1,2,107);{
        ; VUXRS(2);
    }}
 VUXRS(3);    {int __vurtv__= 0;VUXFRTY();}
}}}

//超时处理
int ac54_call_timeout(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac54_call_timeout",&vmckrt,vmckds,1,"",1207,4,1)) return *(int*)vmckrt;{__VUFNINFO__("ac54_call_timeout","int",1207); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int x = timeout(a); VUXLV("int",x,1);
    if( VUXRS(2)&&(x > 0))
    {{
 VUXRS(3);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(4);        {int __vurtv__= 0;VUXFRTY();}
    }}
}}}

int sub_error(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("sub_error",&vmckrt,vmckds,1,"",1208,3,1)) return *(int*)vmckrt;{__VUFNINFO__("sub_error","int",1208); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int x = 0; VUXLV("int",x,1);
 VUXRSVB(2,2);    int b = a / x; VUXLV("int",b,2);
 VUXRS(3);    {int __vurtv__= b;VUXFRTY();}
}}}

//底层函数崩溃处理
int ac55_call_error(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac55_call_error",&vmckrt,vmckds,1,"",1209,4,1)) return *(int*)vmckrt;{__VUFNINFO__("ac55_call_error","int",1209); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int x = sub_error(a); VUXLV("int",x,1);
    if( VUXRS(2)&&(x > 0))
    {{
 VUXRS(3);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(4);        {int __vurtv__= 0;VUXFRTY();}
    }}
}}}


int Extra = 0;
//中间变量计算
int ac61_path_select(int a, int b, int c)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b},{3,"int","c",(const void*)&c}}; if(VuxMck("ac61_path_select",&vmckrt,vmckds,3,"",1210,20,1)) return *(int*)vmckrt;{__VUFNINFO__("ac61_path_select","int",1210); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int result = 0; VUXLV("int",result,1);
 VUXRSVB(2,2);    int KeyB = a; VUXLV("int",KeyB,2);
    
    if ( VUXRS(3)&&(KeyB == 0))
    {{
 VUXRS(4);        Extra++;
    
        if (( VUXRS(5)&&(Extra == 2)) || ( VUXRS(6)&&(Extra == 4)) || ( VUXRS(7)&&(Extra == 5)))
        {{
 VUXRS(8);            result++;
        }}
        if ( VUXRS(9)&&(Extra > 2))
        {{ 
 VUXRS(10);            result++;
        }}
        if ( VUXRS(11)&&(Extra > 5))
        {{
 VUXRS(12);            Extra = 0;
        }}
    }}
    
    if( VUXRS(13)&&(b > 0))
    {{
        if (( VUXRS(14)&&(Extra == 1)) || ( VUXRS(15)&&(Extra == 5)))
        {{
 VUXRS(16);            result++;
        }}
        
        if( VUXRS(17)&&(c > 0))
        {{
            if ( VUXRS(18)&&(Extra > 1))
            {{
 VUXRS(19);                result++;
            }}
        }}
    }}
    
 VUXRS(20);    {int __vurtv__= result;VUXFRTY();}
}}}

int ss();

//多次调用底层函数（生成的用例不够完善）
int ac62_MockAssign()
{void* vmckrt=0; if(VuxMck("ac62_MockAssign",&vmckrt,0,0,"",1212,12,1)) return *(int*)vmckrt;{__VUFNINFO__("ac62_MockAssign","int",1212); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int key = ss(); VUXLV("int",key,1);
    
    if( VUXRS(2)&&(key == 0))
    {{
 VUXRS(3);        {int __vurtv__= key;VUXFRTY();}
    }}
    
    if( VUXRS(4)&&(key == 1))
    {{
 VUXRS(5);        {int __vurtv__= key;VUXFRTY();}
    }}
    
    if( VUXRS(6)&&(key == 2))
    {{
 VUXRS(7);        {int __vurtv__= key;VUXFRTY();}
    }}  
    
    if( VUXRS(8)&&(key == 3))
    {{
 VUXRS(9);        {int __vurtv__= key;VUXFRTY();}
    }}
        
    // key = ss();
    if( VUXRS(10)&&(ss() == 1))
    {{
 VUXRS(11);        {int __vurtv__= 1;VUXFRTY();}
    }}
    
 VUXRS(12);    {int __vurtv__= -1;VUXFRTY();}
}}};

//case处理
int ac63_test_case(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac63_test_case",&vmckrt,vmckds,1,"",1213,32,1)) return *(int*)vmckrt;{__VUFNINFO__("ac63_test_case","int",1213); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    unsigned int key = ss(); VUXLV("unsigned int",key,1); VUXRS(2);
    
    switch(key)
    {
        case 0:
        {{
 VUXRS(5);            {int __vurtv__= 0;VUXFRTY();}
        }}        
        case 1:
        {{
 VUXRS(7);            {int __vurtv__= 1;VUXFRTY();}
        }}
        case 2:
        {{
 VUXRS(9);            {int __vurtv__= 2;VUXFRTY();}
        }}    
        case 3:
        {{
 VUXRS(11);            {int __vurtv__= 3;VUXFRTY();}
        }}          
        case 4:
        {{
 VUXRS(13);            {int __vurtv__= 4;VUXFRTY();}
        }}
        case 5:
        {{
 VUXRS(15);            {int __vurtv__= 5;VUXFRTY();}
        }}    
        case 6:
        {{
 VUXRS(17);            {int __vurtv__= 6;VUXFRTY();}
        }}          
        case 7:
        {{
 VUXRS(19);            {int __vurtv__= 7;VUXFRTY();}
        }}
        case 8:
        {{
 VUXRS(21);            {int __vurtv__= 8;VUXFRTY();}
        }}    
        case 9:
        {{
 VUXRS(23);            {int __vurtv__= 9;VUXFRTY();}
        }}          
        case 10:
        {{
 VUXRS(25);            {int __vurtv__= 10;VUXFRTY();}
        }}
        case 11:
        {{
 VUXRS(27);            {int __vurtv__= 11;VUXFRTY();}
        }}    
        case 12:
        {{
 VUXRS(29);            {int __vurtv__= 12;VUXFRTY();}
        }}    
        default :
        {{
 VUXRS(31);            {int __vurtv__= -1;VUXFRTY();}
        }}                    
    }
}}};

#define NULL 0
typedef struct _MyBase
{
    int a;
    int b;
}MyBase;

typedef struct _MyData
{
    MyBase data;
    float ff;
    char  ch;
}MyData;

char* gData = NULL;

//全局变量重设数据类型
int ac71_reset_global_type_01(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac71_reset_global_type_01",&vmckrt,vmckds,1,"",1214,3,1)) return *(int*)vmckrt;{__VUFNINFO__("ac71_reset_global_type_01","int",1214); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(((MyData*)gData)->data.a == a))
    {{
 VUXRS(2);        {int __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(3);    {int __vurtv__= 0;VUXFRTY();}
}}}

//全局变量重设数据类型
int ac72_reset_global_type_02(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac72_reset_global_type_02",&vmckrt,vmckds,1,"",1215,4,1)) return *(int*)vmckrt;{__VUFNINFO__("ac72_reset_global_type_02","int",1215); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    MyData* pData = (MyData*)gData; VUXLV("MyData*",pData,1);
    if( VUXRS(2)&&(pData->data.a == a))
    {{
 VUXRS(3);        {int __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(4);    {int __vurtv__= 0;VUXFRTY();}
}}}

//全局变量重设数据类型
int ac73_reset_global_type_03(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac73_reset_global_type_03",&vmckrt,vmckds,1,"",1216,3,1)) return *(int*)vmckrt;{__VUFNINFO__("ac73_reset_global_type_03","int",1216); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(((MyData*)gData)->data.a == a))
    {{
 VUXRS(2);        {int __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(3);    {int __vurtv__= 0;VUXFRTY();}
}}}

//全局变量重设数据类型
int ac74_reset_global_type_04(int a)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(VuxMck("ac74_reset_global_type_04",&vmckrt,vmckds,1,"",1217,4,1)) return *(int*)vmckrt;{__VUFNINFO__("ac74_reset_global_type_04","int",1217); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    MyData* pData = (MyData*)gData; VUXLV("MyData*",pData,1);
    if( VUXRS(2)&&(pData->data.a == a))
    {{
 VUXRS(3);        {int __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(4);    {int __vurtv__= 0;VUXFRTY();}
}}}



#include "VuxConn/Demo/autocase.c.h"

VUEXTERNC void _demo_autocase_c_fps(void** cbfs, void** onfs, void** gvfs, int index)
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