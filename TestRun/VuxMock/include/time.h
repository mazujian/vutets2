
#ifndef __MCK_INCLUDE_TIME_H__
#define __MCK_INCLUDE_TIME_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/_strtime(char*))
#ifdef VUser_vmck__strtime
#undef _strtime
static char* __cdecl vmck__strtime(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_strtime",&vmckrt,vmckds,1,"",1510,0,20)) return *(char**)vmckrt;{
    return _strtime(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strtime(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strdate(char*))
#ifdef VUser_vmck__strdate
#undef _strdate
static char* __cdecl vmck__strdate(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_strdate",&vmckrt,vmckds,1,"",1509,0,20)) return *(char**)vmckrt;{
    return _strdate(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strdate(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/tzset())
#ifdef VUser_vmck_tzset
#undef tzset
static void __cdecl vmck_tzset()
{if(!VuxMck("tzset",0,0,0,"",1621,0,20)) {
    tzset();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/tzset())

//$$VUNIT(BEGIN,VMOCKDEFINE/clock())
#ifdef VUser_vmck_clock
#undef clock
static clock_t __cdecl vmck_clock()
{void* vmckrt=0; if(VuxMck("clock",&vmckrt,0,0,"",1503,0,20)) return *(clock_t*)vmckrt;{
    return clock();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/clock())

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsftime(wchar_t*,size_t,const wchar_t*,const struct tm*))
#ifdef VUser_vmck_wcsftime
#undef wcsftime
static size_t __cdecl vmck_wcsftime(wchar_t* arg_1,size_t arg_2,const wchar_t* arg_3,const struct tm* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"wchar_t*","arg_3",(const void*)&arg_3},{4,"struct tm*","arg_4",(const void*)&arg_4}}; if(VuxMck("wcsftime",&vmckrt,vmckds,4,"",1622,0,20)) return *(size_t*)vmckrt;{
    return wcsftime(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsftime(wchar_t*,size_t,const wchar_t*,const struct tm*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_tzset())
#ifdef VUser_vmck__tzset
#undef _tzset
static void __cdecl vmck__tzset()
{if(!VuxMck("_tzset",0,0,0,"",1512,0,20)) {
    _tzset();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_tzset())

//$$VUNIT(BEGIN,VMOCKDEFINE/localtime(const time_t*))
#ifdef VUser_vmck_localtime
#undef localtime
static struct tm* __cdecl vmck_localtime(const time_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"time_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("localtime",&vmckrt,vmckds,1,"",1619,0,20)) return *(struct tm**)vmckrt;{
    return localtime(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/localtime(const time_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/time(time_t*))
#ifdef VUser_vmck_time
#undef time
static time_t __cdecl vmck_time(time_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"time_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("time",&vmckrt,vmckds,1,"",1615,0,20)) return *(time_t*)vmckrt;{
    return time(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/time(time_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/ctime(const time_t*))
#ifdef VUser_vmck_ctime
#undef ctime
static char* __cdecl vmck_ctime(const time_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"time_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("ctime",&vmckrt,vmckds,1,"",1617,0,20)) return *(char**)vmckrt;{
    return ctime(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/ctime(const time_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/asctime(const struct tm*))
#ifdef VUser_vmck_asctime
#undef asctime
static char* __cdecl vmck_asctime(const struct tm* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"struct tm*","arg_1",(const void*)&arg_1}}; if(VuxMck("asctime",&vmckrt,vmckds,1,"",1501,0,20)) return *(char**)vmckrt;{
    return asctime(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/asctime(const struct tm*))

//$$VUNIT(BEGIN,VMOCKDEFINE/difftime(time_t,time_t))
#ifdef VUser_vmck_difftime
#undef difftime
static double __cdecl vmck_difftime(time_t arg_1,time_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"time_t","arg_1",(const void*)&arg_1},{2,"time_t","arg_2",(const void*)&arg_2}}; if(VuxMck("difftime",&vmckrt,vmckds,2,"",1616,0,20)) return *(double*)vmckrt;{
    return difftime(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/difftime(time_t,time_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/mktime(struct tm*))
#ifdef VUser_vmck_mktime
#undef mktime
static time_t __cdecl vmck_mktime(struct tm* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"struct tm*","arg_1",(const void*)&arg_1}}; if(VuxMck("mktime",&vmckrt,vmckds,1,"",1507,0,20)) return *(time_t*)vmckrt;{
    return mktime(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/mktime(struct tm*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strftime(char*,size_t,const char*,const struct tm*))
#ifdef VUser_vmck_strftime
#undef strftime
static size_t __cdecl vmck_strftime(char* arg_1,size_t arg_2,const char* arg_3,const struct tm* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"char*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3},{4,"struct tm*","arg_4",(const void*)&arg_4}}; if(VuxMck("strftime",&vmckrt,vmckds,4,"",1620,0,20)) return *(size_t*)vmckrt;{
    return strftime(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strftime(char*,size_t,const char*,const struct tm*))

//$$VUNIT(BEGIN,VMOCKDEFINE/gmtime(const time_t*))
#ifdef VUser_vmck_gmtime
#undef gmtime
static struct tm* __cdecl vmck_gmtime(const time_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"time_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("gmtime",&vmckrt,vmckds,1,"",1618,0,20)) return *(struct tm**)vmckrt;{
    return gmtime(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/gmtime(const time_t*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "_mingw.h"
#include "stddef.h"

#endif