
//Code/Demo/student.c
#include "VuxInc/VuxFore.h"



#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

#include "TypeDef.h"
#include "student.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/student.c.h"
#include "VuxMock/Demo/student.c"

void student_free(student_t* pStudent)
{VMCKDS vmckds[1]={{1,"student_t*","pStudent",(const void*)&pStudent}}; if(!VuxMck("student_free",0,vmckds,1,"",1090,4,1)) {__VUFNID__(1090); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(pStudent == 0))
    {{ VUXRS(2); VUXFRTN();
    }}
 VUXRS(3);    free(pStudent->name);
 VUXRS(4);    pStudent->name = 0;
}VUXFRTNE();}}

void class_free(class_t* pClass)
{VMCKDS vmckds[1]={{1,"class_t*","pClass",(const void*)&pClass}}; if(!VuxMck("class_free",0,vmckds,1,"",1091,8,1)) {__VUFNID__(1091); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int i=0; VUXLV("int",i,1); 
    if( VUXRS(2)&&(pClass == 0))
    {{ VUXRS(3); VUXFRTN();
    }} VUXRS(4);
    for(; VUXRS(6)&&( i<42); VUXRS(5), i++)
    {VUXRBR_LOOP2(2,4,82);{
 VUXRS(7);        free(pClass->students[i]);
    }}

 VUXRS(8);    free(pClass);
}VUXFRTNE();}}

void school_free(school_t* pSchool)
{VMCKDS vmckds[1]={{1,"school_t*","pSchool",(const void*)&pSchool}}; if(!VuxMck("school_free",0,vmckds,1,"",1036,7,1)) {__VUFNID__(1036); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int i=0; VUXLV("int",i,1); 
    if( VUXRS(2)&&(pSchool == 0))
    {{ VUXRS(3); VUXFRTN();
    }} VUXRS(4);
    for(; VUXRS(6)&&( i< (6*10)); VUXRS(5), i++)
    {VUXRBR_LOOP2(2,4,88);{
 VUXRS(7);        free(pSchool->classes[i]);
    }}
}VUXFRTNE();}}

int get_name_index(int max)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","max",(const void*)&max}}; if(VuxMck("get_name_index",&vmckrt,vmckds,1,"",1092,4,1)) return *(int*)vmckrt;{__VUFNINFO__("get_name_index","int",1092); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int index = rand() % max; VUXLV("int",index,1);
    if( VUXRS(2)&&(index %2 != 0))
    {{
 VUXRS(3);        index--;
    }}
 VUXRS(4);    {int __vurtv__= index;VUXFRTY();}
}}}

#define NAME_MAX 8
char* make_name()
{void* vmckrt=0; if(VuxMck("make_name",&vmckrt,0,0,"",1093,15,1)) return *(char**)vmckrt;{__VUFNINFO__("make_name","char*",1093); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    const char* fns = "ÕÔÇ®ËïÀîÖÜÎâÖ£Íõ·ë³ÂñÒÎÀ½¯Éòº«ÑîÖìÇØÓÈÐíºÎÂÀÊ©ÕÅ¿×²ÜÑÏ»ª½ðÎºÌÕ½ªÆÝÐ»×ÞÓ÷°ØË®ñ¼ÕÂÔÆËÕÅË¸ðÞÉ·¶ÅíÀÉÂ³Î¤²ýÂíÃç·ï»¨·½¡¡ÓáÈÎÔ¬ÁøÛº±«Ê·ÌÆ·ÑÁ®á¯Ñ¦À×ºØÄßÌÀëøÒóÂÞ±ÏºÂÚù°²³£ÀÖÓÚÊ±¸µÆ¤±åÆë¿µÎéÓàÔª²·¹ËÃÏÆ½»ÆºÍÄÂÏôÒüÒ¦ÉÛÕ¿ÍôÆîÃ«ÓíµÒÃ×±´Ã÷ê°¼Æ·ü³É´÷Ì¸ËÎÃ©ÅÓÐÜ¼ÍÊæÇüÏî×£¶­Áº"; VUXLV("const char*",fns,1);
 VUXRSVB(2,2);    const char* sns = "óÞÈáÖñö°ÄýÏþ»¶Ïö·ãÜ¿·Æº®ÒÁÑÇÒË¿É¼§ÊæÓ°ÀóÖ¦Ë¼ÀöÐã¾êÓ¢»ª»ÛÇÉÃÀÄÈ¾²Êç»ÝÖé´äÑÅÖ¥ÓñÆ¼ºì¶ðÁá·Ò·¼Ñà²Ê´º¾ÕÇÚÕäÕêÀòÀ¼·ï½àÃ·ÁÕËØÔÆÁ«Õæ»·Ñ©ÈÙ°®ÃÃÏ¼ÏãÔÂÝºæÂÑÞÈð·²¼Ñ¼ÎÇí¹ðæ·Ò¶èµè´æ«çù¾§åûÜçÇïÉºÉ¯½õ÷ìÇàÙ»æÃæ¯ÍñæµèªÓ±Â¶Ñþâùæ¿ÑãÝíæýÒÇºÉµ¤ÈØÃ¼¾ýÇÙÈïÞ±Ý¼ÃÎá°Ô·æ¼Ü°è¥çüÔÏÈÚÔ°ÒÕÓ½Çä´ÏÀ½´¿Ø¹ÔÃÕÑ±ùË¬çþÜøÓðÏ£ÄþÐÀÆ®ÓýäÞð¥Áº¶°Î¬Æô¿ËÂ×ÏèÐñÅôÔó³¿³½Ê¿ÒÔ½¨¼ÒÖÂÊ÷Ñ×Ê¢ÐÛè¡¾û¹Ú²ßÌÚéªéÅ·çº½ºëÒåÐËÁ¼·É±ò¸»ºÍÃùÅó±óÐÐÊ±Ì©²©ÀÚÃñÓÑÖ¾Çå¼áÇìÈôµÂ±ëÎ°¸ÕÓÂÒã¿¡·åÇ¿¾üÆ½±£¶«ÎÄ»ÔÁ¦Ã÷ÓÀ½¡ÊÀ¹ãº£É½ÈÊ²¨Äþ¸£ÉúÁúÔªÈ«¹úÊ¤Ñ§Ïé²Å·¢ÎäÐÂÀûË³ÐÅ×Ó½ÜÌÎ²ý³É¿µÐÇ¹âÌì´ï°²ÑÒÖÐÃ¯½øÁÖÓÐ³ÏÏÈ¾´ÕðÕñ×³»áË¼ÈººÀÐÄ°î³ÐÀÖÉÜ¹¦ËÉÉÆºñÔ£"; VUXLV("const char*",sns,2);

 VUXRSVB(3,3);    char* name = (char*)malloc(8); VUXLV("char*",name,3);

 VUXRSVB(4,4);    int fns_count = strlen(fns) / 2; VUXLV("int",fns_count,4);
 VUXRSVB(5,5);    int sns_count = strlen(sns) / 2; VUXLV("int",sns_count,5);

 VUXRSVB(6,6);    int fni = rand() % fns_count; VUXLV("int",fni,6);
 VUXRSVB(7,7);    int sni1 = rand() % sns_count; VUXLV("int",sni1,7);
 VUXRSVB(8,8);    int sni2 = rand() % sns_count; VUXLV("int",sni2,8);
    if( VUXRS(9)&&(fni %2 != 0))
    {{ VUXRS(10); fni--;
    }}
    

 VUXRS(11);    memset(name, 0, 8);
 VUXRS(12);    memcpy(name, &fns[get_name_index(fns_count)], 2);
 VUXRS(13);    memcpy(name+2, &sns[get_name_index(sns_count)], 2);
 VUXRS(14);    memcpy(name+4, &sns[get_name_index(sns_count)], 2);
 VUXRS(15);    {char* __vurtv__= name;VUXFRTY();}
}}}

float make_score()
{void* vmckrt=0; if(VuxMck("make_score",&vmckrt,0,0,"",1094,1,1)) return *(float*)vmckrt;{__VUFNINFO__("make_score","float",1094); VuxDbgBrkO() 
{
 VUXRS(1);    {float __vurtv__= (float)(rand() % (100 - 60) + 60);VUXFRTY();}
}}}

void student_init(student_t* pStudent, int index, int number)
{VMCKDS vmckds[3]={{1,"student_t*","pStudent",(const void*)&pStudent},{2,"int","index",(const void*)&index},{3,"int","number",(const void*)&number}}; if(!VuxMck("student_init",0,vmckds,3,"",1095,11,1)) {__VUFNID__(1095); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(pStudent == 0))
    {{ VUXRS(2); VUXFRTN();
    }}
 VUXRS(3);    pStudent->index = index;
 VUXRS(4);    pStudent->number = number;
 VUXRS(5);    pStudent->name = make_name();
 VUXRS(6);    pStudent->Chinese = make_score();
 VUXRS(7);    pStudent->English = make_score();
 VUXRS(8);    pStudent->math = make_score();
 VUXRS(9);    pStudent->sports = make_score();
 VUXRS(10);    pStudent->art = make_score();
 VUXRS(11);    pStudent->music = make_score();
}VUXFRTNE();}}

void student_store(student_t* pStudent, FILE* pFile)
{VMCKDS vmckds[2]={{1,"student_t*","pStudent",(const void*)&pStudent},{2,"FILE*","pFile",(const void*)&pFile}}; if(!VuxMck("student_store",0,vmckds,2,"",1096,14,1)) {__VUFNID__(1096); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    size_t name_len; VUXLV("size_t",name_len,1);
    if( VUXRS(2)&&(pStudent == 0))
    {{ VUXRS(3); VUXFRTN();
    }}
 VUXRS(4);    name_len = strlen(pStudent->name);
 VUXRS(5);    fwrite(&pStudent->index, 1, sizeof(int), pFile);
 VUXRS(6);    fwrite(&pStudent->number, 1, sizeof(int), pFile);
 VUXRS(7);    fwrite(&pStudent->Chinese, 1, sizeof(float), pFile);
 VUXRS(8);    fwrite(&pStudent->English, 1, sizeof(float), pFile);
 VUXRS(9);    fwrite(&pStudent->math, 1, sizeof(float), pFile);
 VUXRS(10);    fwrite(&pStudent->sports, 1, sizeof(float), pFile);
 VUXRS(11);    fwrite(&pStudent->art, 1, sizeof(float), pFile);
 VUXRS(12);    fwrite(&pStudent->music, 1, sizeof(float), pFile);

 VUXRS(13);    fwrite(&name_len, 1, sizeof(int), pFile);
 VUXRS(14);    fwrite(pStudent->name, 1, name_len, pFile);
}VUXFRTNE();}}

void student_load(student_t* pStudent, FILE* pFile)
{VMCKDS vmckds[2]={{1,"student_t*","pStudent",(const void*)&pStudent},{2,"FILE*","pFile",(const void*)&pFile}}; if(!VuxMck("student_load",0,vmckds,2,"",1097,15,1)) {__VUFNID__(1097); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int name_len = 0; VUXLV("int",name_len,1);
    if( VUXRS(2)&&(pStudent == 0))
    {{ VUXRS(3); VUXFRTN();
    }}
 VUXRS(4);    fread(&pStudent->index, 1, sizeof(int), pFile);
 VUXRS(5);    fread(&pStudent->number, 1, sizeof(int), pFile);
 VUXRS(6);    fread(&pStudent->Chinese, 1, sizeof(float), pFile);
 VUXRS(7);    fread(&pStudent->English, 1, sizeof(float), pFile);
 VUXRS(8);    fread(&pStudent->math, 1, sizeof(float), pFile);
 VUXRS(9);    fread(&pStudent->sports, 1, sizeof(float), pFile);
 VUXRS(10);    fread(&pStudent->art, 1, sizeof(float), pFile);
 VUXRS(11);    fread(&pStudent->music, 1, sizeof(float), pFile);

 VUXRS(12);    fread(&name_len, 1, sizeof(int), pFile);
 VUXRS(13);    pStudent->name = (char*)malloc(name_len+2);
 VUXRS(14);    memset(pStudent->name, 0, name_len + 2);
 VUXRS(15);    fread(pStudent->name, 1, name_len, pFile);
}VUXFRTNE();}}

void class_init(class_t* pClass, int index, int grade)
{VMCKDS vmckds[3]={{1,"class_t*","pClass",(const void*)&pClass},{2,"int","index",(const void*)&index},{3,"int","grade",(const void*)&grade}}; if(!VuxMck("class_init",0,vmckds,3,"",1113,11,1)) {__VUFNID__(1113); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int i; VUXLV("int",i,1);
    if( VUXRS(2)&&(pClass == 0))
    {{ VUXRS(3); VUXFRTN();
    }}
 VUXRS(4);    pClass->index = index;
 VUXRS(5);    pClass->grade = grade; VUXRS(6);

    for(i=0; VUXRS(8)&&( i<42); VUXRS(7), i++)
    {VUXRBR_LOOP2(2,4,89);{
 VUXRSVB(9,2);        student_t* pStudent = (student_t*)malloc(sizeof(student_t)); VUXLV("student_t*",pStudent,2);
 VUXRS(10);        student_init(pStudent, i, i+1);
 VUXRS(11);        pClass->students[i] = pStudent;
    }}
}VUXFRTNE();}}

void class_store(class_t* pClass, FILE* pFile)
{VMCKDS vmckds[2]={{1,"class_t*","pClass",(const void*)&pClass},{2,"FILE*","pFile",(const void*)&pFile}}; if(!VuxMck("class_store",0,vmckds,2,"",1099,11,1)) {__VUFNID__(1099); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int i; VUXLV("int",i,1);
 VUXRSVB(2,2);    int count = 42; VUXLV("int",count,2);
    if( VUXRS(3)&&(pClass == 0))
    {{ VUXRS(4); VUXFRTN();
    }}
 VUXRS(5);    fwrite(&pClass->index, 1, sizeof(int), pFile);
 VUXRS(6);    fwrite(&pClass->grade, 1, sizeof(int), pFile);
 VUXRS(7);    fwrite(&count, 1, sizeof(float), pFile); VUXRS(8);

    for(i=0; VUXRS(10)&&( i<count); VUXRS(9), i++)
    {VUXRBR_LOOP2(2,4,83);{
 VUXRS(11);        student_store(pClass->students[i], pFile);
    }}
}VUXFRTNE();}}

void class_load(class_t* pClass, FILE* pFile)
{VMCKDS vmckds[2]={{1,"class_t*","pClass",(const void*)&pClass},{2,"FILE*","pFile",(const void*)&pFile}}; if(!VuxMck("class_load",0,vmckds,2,"",1100,16,1)) {__VUFNID__(1100); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int i; VUXLV("int",i,1);
 VUXRSVB(2,2);    int count = 0; VUXLV("int",count,2);
    if( VUXRS(3)&&(pClass == 0))
    {{ VUXRS(4); VUXFRTN();
    }}
 VUXRS(5);    memset(pClass, 0, sizeof(class_t));
 VUXRS(6);    fread(&pClass->index, 1, sizeof(int), pFile);
 VUXRS(7);    fread(&pClass->grade, 1, sizeof(int), pFile);
 VUXRS(8);    fread(&count, 1, sizeof(float), pFile); VUXRS(9);

    for(i=0; VUXRS(11)&&( i<count); VUXRS(10), i++)
    {VUXRBR_LOOP2(2,4,84);{
 VUXRSVB(12,3);        student_t* pStudent = (student_t*)malloc(sizeof(student_t)); VUXLV("student_t*",pStudent,3);
 VUXRS(13);        student_load(pStudent, pFile);
        if( VUXRS(14)&&(i < 42))
        {{
 VUXRS(15);            pClass->students[i] = pStudent;
        }}
        else
        {{
 VUXRS(16);            free(pStudent);
        }}
    }}
}VUXFRTNE();}}


void school_init(school_t* pScool)
{VMCKDS vmckds[1]={{1,"school_t*","pScool",(const void*)&pScool}}; if(!VuxMck("school_init",0,vmckds,1,"",1101,13,1)) {__VUFNID__(1101); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int i; VUXLV("int",i,1);
 VUXRSVB(2,2);    int grade = 1; VUXLV("int",grade,2);
    if( VUXRS(3)&&(pScool == 0))
    {{ VUXRS(4); VUXFRTN();
    }}
 VUXRS(5);    memset(pScool, 0, sizeof(school_t)); VUXRS(6);

    for(i=0; VUXRS(8)&&( i< (6*10)); VUXRS(7), i++)
    {VUXRBR_LOOP2(2,4,85);{
 VUXRSVB(9,3);        class_t* pClass = (class_t*)malloc(sizeof(class_t)); VUXLV("class_t*",pClass,3);
 VUXRS(10);        class_init(pClass, i, grade);
 VUXRS(11);        pScool->classes[i] = pClass;
        if( VUXRS(12)&&((i+1) % 10 == 0))
        {{
 VUXRS(13);            grade++;
        }}
    }}    
}VUXFRTNE();}}

void school_store(school_t* pSchool, FILE* pFile)
{VMCKDS vmckds[2]={{1,"school_t*","pSchool",(const void*)&pSchool},{2,"FILE*","pFile",(const void*)&pFile}}; if(!VuxMck("school_store",0,vmckds,2,"",1102,10,1)) {__VUFNID__(1102); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int i; VUXLV("int",i,1);
 VUXRSVB(2,2);    int count = (6*10); VUXLV("int",count,2);
    if( VUXRS(3)&&(pSchool == 0))
    {{ VUXRS(4); VUXFRTN();
    }}
 VUXRS(5);    fwrite(&count, 1, sizeof(float), pFile); VUXRS(6);
    for(i=0; VUXRS(8)&&( i<count); VUXRS(7), i++)
    {VUXRBR_LOOP2(2,4,86);{
 VUXRSVB(9,3);        class_t* pClass = pSchool->classes[i]; VUXLV("class_t*",pClass,3);
 VUXRS(10);        class_store(pClass, pFile);
    }}
}VUXFRTNE();}}

void school_load(school_t* pSchool, FILE* pFile)
{VMCKDS vmckds[2]={{1,"school_t*","pSchool",(const void*)&pSchool},{2,"FILE*","pFile",(const void*)&pFile}}; if(!VuxMck("school_load",0,vmckds,2,"",1103,14,1)) {__VUFNID__(1103); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int i; VUXLV("int",i,1);
 VUXRSVB(2,2);    int count = 0; VUXLV("int",count,2);
    if( VUXRS(3)&&(pSchool == 0))
    {{ VUXRS(4); VUXFRTN();
    }}
 VUXRS(5);    memset(pSchool, 0, sizeof(school_t));
 VUXRS(6);    fread(&count, 1, sizeof(int), pFile); VUXRS(7);
    for(i=0; VUXRS(9)&&( i<count); VUXRS(8), i++)
    {VUXRBR_LOOP2(2,4,87);{
 VUXRSVB(10,3);        class_t* pClass = (class_t*)malloc(sizeof(class_t)); VUXLV("class_t*",pClass,3);
 VUXRS(11);        class_load(pClass, pFile);
        if( VUXRS(12)&&(i < (6*10)))
        {{
 VUXRS(13);            pSchool->classes[i] = pClass;
        }}
        else
        {{
 VUXRS(14);            free(pClass);
        }}
    }}
}VUXFRTNE();}}

void create_data_file(const char* pPathName)
{VMCKDS vmckds[1]={{1,"char*","pPathName",(const void*)&pPathName}}; if(!VuxMck("create_data_file",0,vmckds,1,"",1104,7,1)) {__VUFNID__(1104); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    FILE* pFile; VUXLV("FILE*",pFile,1);
 VUXRSVB(2,2);    school_t school; VUXLV("school_t",school,2);
 VUXRS(3);    school_init(&school);
    
 VUXRS(4);    pFile = fopen(pPathName, "wb+");
    if( VUXRS(5)&&(pFile != 0))
    {{
 VUXRS(6);        school_store(&school, pFile);
 VUXRS(7);        fclose(pFile);
    }}
}VUXFRTNE();}}

void read_data_from_file(school_t* pSchool, const char* pPathName)
{VMCKDS vmckds[2]={{1,"school_t*","pSchool",(const void*)&pSchool},{2,"char*","pPathName",(const void*)&pPathName}}; if(!VuxMck("read_data_from_file",0,vmckds,2,"",1105,6,1)) {__VUFNID__(1105); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    FILE* pFile; VUXLV("FILE*",pFile,1);
 VUXRS(2);    memset(pSchool, 0, sizeof(school_t));
 VUXRS(3);    pFile = fopen(pPathName, "rb");
    if( VUXRS(4)&&(pFile != 0))
    {{
 VUXRS(5);        school_load(pSchool, pFile);
 VUXRS(6);        fclose(pFile);
    }}
}VUXFRTNE();}}

school_t g_school = {0};

void use_date_file(const char* pPathName)
{VMCKDS vmckds[1]={{1,"char*","pPathName",(const void*)&pPathName}}; if(!VuxMck("use_date_file",0,vmckds,1,"",1037,1,1)) {__VUFNID__(1037); VuxDbgBrkO() 
{
 VUXRS(1);    read_data_from_file(&g_school, pPathName);
}VUXFRTNE();}}

int main()
{void* vmckrt=0; if(VuxMck("main",&vmckrt,0,0,"",1106,4,1)) return *(int*)vmckrt;{__VUFNINFO__("main","int",1106); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    school_t* pSchool = 0; VUXLV("school_t*",pSchool,1);
    /*	//½¨Á¢Êý¾ÝÎÄ¼þ	srand(time(0));    create_data_file("score01.dat");	create_data_file("score02.dat");	create_data_file("score03.dat");	create_data_file("score04.dat");	create_data_file("score05.dat");    //*/

    //Ó¦ÓÃ
 VUXRS(2);    school_free(&g_school);  //ÇåÀíÔ­ÓÐÊý¾Ý
 VUXRS(3);    use_date_file("score01.dat"); //´ÓÎÄ¼þÖÐ¶ÁÈ¡Êý¾Ý±£´æÈ«¾Ö±äÁ¿g_schoolÖÐ
 VUXRS(4);    pSchool = &g_school; //ÓÃ»§Ê¹ÓÃµÄ¶ÔÏó£¬Ö¸Ïòg_school
}}}

#include "VuxConn/Demo/student.c.h"

VUEXTERNC void _demo_student_c_fps(void** cbfs, void** onfs, void** gvfs, int index)
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