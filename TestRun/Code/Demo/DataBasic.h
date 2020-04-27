
//Code/Demo/DataBasic.h



#ifndef __DATABASIC_H__
#define __DATABASIC_H__

//C”Ô—‘µ•œÚ¡¥±Ì
typedef struct clist_t
{
    int index;
    int age;
    char* name;
    int score;
    struct clist_t* pNext;
}clist_t;




#endif