
#ifndef __MCK_INCLUDE_STDLIB_H__
#define __MCK_INCLUDE_STDLIB_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/_ultoa(unsigned long,char*,int))
#ifdef VUser_vmck__ultoa
#undef _ultoa
static char* __cdecl vmck__ultoa(unsigned long arg_1,char* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"unsigned long","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("_ultoa",&vmckrt,vmckds,3,"",1344,0,20)) return *(char**)vmckrt;{
    return _ultoa(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_ultoa(unsigned long,char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_ultow(unsigned long,wchar_t*,int))
#ifdef VUser_vmck__ultow
#undef _ultow
static wchar_t* __cdecl vmck__ultow(unsigned long arg_1,wchar_t* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"unsigned long","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("_ultow",&vmckrt,vmckds,3,"",1349,0,20)) return *(wchar_t**)vmckrt;{
    return _ultow(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_ultow(unsigned long,wchar_t*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/calloc(size_t,size_t))
#ifdef VUser_vmck_calloc
#undef calloc
static void* __cdecl vmck_calloc(size_t arg_1,size_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"size_t","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2}}; if(VuxMck("calloc",&vmckrt,vmckds,2,"",1562,0,20)) return *(void**)vmckrt;{
    return calloc(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/calloc(size_t,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/mbtowc(wchar_t*,const char*,size_t))
#ifdef VUser_vmck_mbtowc
#undef mbtowc
static int __cdecl vmck_mbtowc(wchar_t* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("mbtowc",&vmckrt,vmckds,3,"",1561,0,20)) return *(int*)vmckrt;{
    return mbtowc(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/mbtowc(wchar_t*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/__doserrno())
#ifdef VUser_vmck___doserrno
#undef __doserrno
static int* __cdecl vmck___doserrno()
{void* vmckrt=0; if(VuxMck("__doserrno",&vmckrt,0,0,"",1310,0,20)) return *(int**)vmckrt;{
    return __doserrno();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__doserrno())

//$$VUNIT(BEGIN,VMOCKDEFINE/__strtod(const char*,char**))
#ifdef VUser_vmck___strtod
#undef __strtod
static double __cdecl vmck___strtod(const char* arg_1,char** arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char**","arg_2",(const void*)&arg_2}}; if(VuxMck("__strtod",&vmckrt,vmckds,2,"",1552,0,20)) return *(double*)vmckrt;{
    return __strtod(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__strtod(const char*,char**))

//$$VUNIT(BEGIN,VMOCKDEFINE/free(void*))
#ifdef VUser_vmck_free
#undef free
static void __cdecl vmck_free(void* arg_1)
{VMCKDS vmckds[1]={{1,"void*","arg_1",(const void*)&arg_1}}; if(!VuxMck("free",0,vmckds,1,"",1321,0,20)) {
    free(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/free(void*))

//$$VUNIT(BEGIN,VMOCKDEFINE/realloc(void*,size_t))
#ifdef VUser_vmck_realloc
#undef realloc
static void* __cdecl vmck_realloc(void* arg_1,size_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"void*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2}}; if(VuxMck("realloc",&vmckrt,vmckds,2,"",1564,0,20)) return *(void**)vmckrt;{
    return realloc(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/realloc(void*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/atof(const char*))
#ifdef VUser_vmck_atof
#undef atof
static double __cdecl vmck_atof(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("atof",&vmckrt,vmckds,1,"",1315,0,20)) return *(double*)vmckrt;{
    return atof(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/atof(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/atoi(const char*))
#ifdef VUser_vmck_atoi
#undef atoi
static int __cdecl vmck_atoi(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("atoi",&vmckrt,vmckds,1,"",1316,0,20)) return *(int*)vmckrt;{
    return atoi(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/atoi(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/atol(const char*))
#ifdef VUser_vmck_atol
#undef atol
static long __cdecl vmck_atol(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("atol",&vmckrt,vmckds,1,"",1317,0,20)) return *(long*)vmckrt;{
    return atol(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/atol(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcstold(const wchar_t*,wchar_t**))
#ifdef VUser_vmck_wcstold
#undef wcstold
static long double __cdecl vmck_wcstold(const wchar_t* __restrict__,wchar_t** __restrict__)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","__restrict__",(const void*)&__restrict__},{2,"wchar_t**","__restrict__",(const void*)&__restrict__}}; if(VuxMck("wcstold",&vmckrt,vmckds,2,"",1557,0,20)) return *(long double*)vmckrt;{
    return wcstold(__restrict__,__restrict__);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcstold(const wchar_t*,wchar_t**))

//$$VUNIT(BEGIN,VMOCKDEFINE/ldiv(long,long))
#ifdef VUser_vmck_ldiv
#undef ldiv
static ldiv_t __cdecl vmck_ldiv(long arg_1,long arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"long","arg_1",(const void*)&arg_1},{2,"long","arg_2",(const void*)&arg_2}}; if(VuxMck("ldiv",&vmckrt,vmckds,2,"",1328,0,20)) return *(ldiv_t*)vmckrt;{
    return ldiv(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/ldiv(long,long))

//$$VUNIT(BEGIN,VMOCKDEFINE/strtold(const char*,char**))
#ifdef VUser_vmck_strtold
#undef strtold
static long double __cdecl vmck_strtold(const char* __restrict__,char** __restrict__)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","__restrict__",(const void*)&__restrict__},{2,"char**","__restrict__",(const void*)&__restrict__}}; if(VuxMck("strtold",&vmckrt,vmckds,2,"",1555,0,20)) return *(long double*)vmckrt;{
    return strtold(__restrict__,__restrict__);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strtold(const char*,char**))

//$$VUNIT(BEGIN,VMOCKDEFINE/strtoll(const char*,char**,int))
#ifdef VUser_vmck_strtoll
#undef strtoll
static long long __cdecl vmck_strtoll(const char* __restrict__,char** __restrict,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","__restrict__",(const void*)&__restrict__},{2,"char**","__restrict",(const void*)&__restrict},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("strtoll",&vmckrt,vmckds,3,"",1573,0,20)) return *(long long*)vmckrt;{
    return strtoll(__restrict__,__restrict,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strtoll(const char*,char**,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_ecvt(double,int,int*,int*))
#ifdef VUser_vmck__ecvt
#undef _ecvt
static char* __cdecl vmck__ecvt(double arg_1,int arg_2,int* arg_3,int* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"double","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"int*","arg_3",(const void*)&arg_3},{4,"int*","arg_4",(const void*)&arg_4}}; if(VuxMck("_ecvt",&vmckrt,vmckds,4,"",1360,0,20)) return *(char**)vmckrt;{
    return _ecvt(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_ecvt(double,int,int*,int*))

//$$VUNIT(BEGIN,VMOCKDEFINE/labs(long))
#ifdef VUser_vmck_labs
#undef labs
static long __cdecl vmck_labs(long arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"long","arg_1",(const void*)&arg_1}}; if(VuxMck("labs",&vmckrt,vmckds,1,"",1327,0,20)) return *(long*)vmckrt;{
    return labs(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/labs(long))

//$$VUNIT(BEGIN,VMOCKDEFINE/_itoa(int,char*,int))
#ifdef VUser_vmck__itoa
#undef _itoa
static char* __cdecl vmck__itoa(int arg_1,char* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("_itoa",&vmckrt,vmckds,3,"",1323,0,20)) return *(char**)vmckrt;{
    return _itoa(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_itoa(int,char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_sleep(unsigned long))
#ifdef VUser_vmck__sleep
#undef _sleep
static void __cdecl vmck__sleep(unsigned long arg_1)
{VMCKDS vmckds[1]={{1,"unsigned long","arg_1",(const void*)&arg_1}}; if(!VuxMck("_sleep",0,vmckds,1,"",1384,0,20)) {
    _sleep(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_sleep(unsigned long))

//$$VUNIT(BEGIN,VMOCKDEFINE/_itow(int,wchar_t*,int))
#ifdef VUser_vmck__itow
#undef _itow
static wchar_t* __cdecl vmck__itow(int arg_1,wchar_t* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("_itow",&vmckrt,vmckds,3,"",1347,0,20)) return *(wchar_t**)vmckrt;{
    return _itow(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_itow(int,wchar_t*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_exit(int))
#ifdef VUser_vmck__exit
#undef _exit
static void __cdecl vmck__exit(int arg_1)
{VMCKDS vmckds[1]={{1,"int","arg_1",(const void*)&arg_1}}; if(!VuxMck("_exit",0,vmckds,1,"",1361,0,20)) {
    _exit(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_exit(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/abort())
#ifdef VUser_vmck_abort
#undef abort
static void __cdecl vmck_abort()
{if(!VuxMck("abort",0,0,0,"",1311,0,20)) {
    abort();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/abort())

//$$VUNIT(BEGIN,VMOCKDEFINE/ecvt(double,int,int*,int*))
#ifdef VUser_vmck_ecvt
#undef ecvt
static char* __cdecl vmck_ecvt(double arg_1,int arg_2,int* arg_3,int* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"double","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"int*","arg_3",(const void*)&arg_3},{4,"int*","arg_4",(const void*)&arg_4}}; if(VuxMck("ecvt",&vmckrt,vmckds,4,"",1387,0,20)) return *(char**)vmckrt;{
    return ecvt(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/ecvt(double,int,int*,int*))

//$$VUNIT(BEGIN,VMOCKDEFINE/itoa(int,char*,int))
#ifdef VUser_vmck_itoa
#undef itoa
static char* __cdecl vmck_itoa(int arg_1,char* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("itoa",&vmckrt,vmckds,3,"",1390,0,20)) return *(char**)vmckrt;{
    return itoa(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/itoa(int,char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_splitpath(const char*,char*,char*,char*,char*))
#ifdef VUser_vmck__splitpath
#undef _splitpath
static void __cdecl vmck__splitpath(const char* arg_1,char* arg_2,char* arg_3,char* arg_4,char* arg_5)
{VMCKDS vmckds[5]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3},{4,"char*","arg_4",(const void*)&arg_4},{5,"char*","arg_5",(const void*)&arg_5}}; if(!VuxMck("_splitpath",0,vmckds,5,"",1374,0,20)) {
    _splitpath(arg_1,arg_2,arg_3,arg_4,arg_5);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_splitpath(const char*,char*,char*,char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_fcvt(double,int,int*,int*))
#ifdef VUser_vmck__fcvt
#undef _fcvt
static char* __cdecl vmck__fcvt(double arg_1,int arg_2,int* arg_3,int* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"double","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"int*","arg_3",(const void*)&arg_3},{4,"int*","arg_4",(const void*)&arg_4}}; if(VuxMck("_fcvt",&vmckrt,vmckds,4,"",1362,0,20)) return *(char**)vmckrt;{
    return _fcvt(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fcvt(double,int,int*,int*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wtof(const wchar_t*))
#ifdef VUser_vmck__wtof
#undef _wtof
static double __cdecl vmck__wtof(const wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("_wtof",&vmckrt,vmckds,1,"",1551,0,20)) return *(double*)vmckrt;{
    return _wtof(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wtof(const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wtoi(const wchar_t*))
#ifdef VUser_vmck__wtoi
#undef _wtoi
static int __cdecl vmck__wtoi(const wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("_wtoi",&vmckrt,vmckds,1,"",1355,0,20)) return *(int*)vmckrt;{
    return _wtoi(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wtoi(const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strtoull(const char*,char**,int))
#ifdef VUser_vmck_strtoull
#undef strtoull
static unsigned long long __cdecl vmck_strtoull(const char* __restrict__,char** __restrict__,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","__restrict__",(const void*)&__restrict__},{2,"char**","__restrict__",(const void*)&__restrict__},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("strtoull",&vmckrt,vmckds,3,"",1574,0,20)) return *(unsigned long long*)vmckrt;{
    return strtoull(__restrict__,__restrict__,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strtoull(const char*,char**,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wtol(const wchar_t*))
#ifdef VUser_vmck__wtol
#undef _wtol
static long __cdecl vmck__wtol(const wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("_wtol",&vmckrt,vmckds,1,"",1356,0,20)) return *(long*)vmckrt;{
    return _wtol(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wtol(const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_Exit(int))
#ifdef VUser_vmck__Exit
#undef _Exit
static void __cdecl vmck__Exit(int arg_1)
{VMCKDS vmckds[1]={{1,"int","arg_1",(const void*)&arg_1}}; if(!VuxMck("_Exit",0,vmckds,1,"",1570,0,20)) {
    _Exit(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_Exit(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/exit(int))
#ifdef VUser_vmck_exit
#undef exit
static void __cdecl vmck_exit(int arg_1)
{VMCKDS vmckds[1]={{1,"int","arg_1",(const void*)&arg_1}}; if(!VuxMck("exit",0,vmckds,1,"",1312,0,20)) {
    exit(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/exit(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/bsearch(const void*,const void*,size_t,size_t,int(*)(const void*,const void*)))
#ifdef VUser_vmck_bsearch
#undef bsearch
static void* __cdecl vmck_bsearch(const void* arg_1,const void* arg_2,size_t arg_3,size_t arg_4,int(*arg_5)(const void*,const void*))
{void* vmckrt=0; VMCKDS vmckds[5]={{1,"void*","arg_1",(const void*)&arg_1},{2,"void*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3},{4,"size_t","arg_4",(const void*)&arg_4},{5,"int(*)(void*,void*)","arg_5",(const void*)&arg_5}}; if(VuxMck("bsearch",&vmckrt,vmckds,5,"",1566,0,20)) return *(void**)vmckrt;{
    return bsearch(arg_1,arg_2,arg_3,arg_4,arg_5);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/bsearch(const void*,const void*,size_t,size_t,int(*)(const void*,const void*)))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcstoul(const wchar_t*,wchar_t**,int))
#ifdef VUser_vmck_wcstoul
#undef wcstoul
static unsigned long __cdecl vmck_wcstoul(const wchar_t* arg_1,wchar_t** arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t**","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("wcstoul",&vmckrt,vmckds,3,"",1352,0,20)) return *(unsigned long*)vmckrt;{
    return wcstoul(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcstoul(const wchar_t*,wchar_t**,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_onexit(_onexit_t))
#ifdef VUser_vmck__onexit
#undef _onexit
static _onexit_t __cdecl vmck__onexit(_onexit_t arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"_onexit_t","arg_1",(const void*)&arg_1}}; if(VuxMck("_onexit",&vmckrt,vmckds,1,"",1368,0,20)) return *(_onexit_t*)vmckrt;{
    return _onexit(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_onexit(_onexit_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/fcvt(double,int,int*,int*))
#ifdef VUser_vmck_fcvt
#undef fcvt
static char* __cdecl vmck_fcvt(double arg_1,int arg_2,int* arg_3,int* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"double","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"int*","arg_3",(const void*)&arg_3},{4,"int*","arg_4",(const void*)&arg_4}}; if(VuxMck("fcvt",&vmckrt,vmckds,4,"",1388,0,20)) return *(char**)vmckrt;{
    return fcvt(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fcvt(double,int,int*,int*))

//$$VUNIT(BEGIN,VMOCKDEFINE/srand(unsigned int))
#ifdef VUser_vmck_srand
#undef srand
static void __cdecl vmck_srand(unsigned int arg_1)
{VMCKDS vmckds[1]={{1,"unsigned int","arg_1",(const void*)&arg_1}}; if(!VuxMck("srand",0,vmckds,1,"",1339,0,20)) {
    srand(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/srand(unsigned int))

//$$VUNIT(BEGIN,VMOCKDEFINE/strtoul(const char*,char**,int))
#ifdef VUser_vmck_strtoul
#undef strtoul
static unsigned long __cdecl vmck_strtoul(const char* arg_1,char** arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char**","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("strtoul",&vmckrt,vmckds,3,"",1342,0,20)) return *(unsigned long*)vmckrt;{
    return strtoul(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strtoul(const char*,char**,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_gcvt(double,int,char*))
#ifdef VUser_vmck__gcvt
#undef _gcvt
static char* __cdecl vmck__gcvt(double arg_1,int arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"double","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("_gcvt",&vmckrt,vmckds,3,"",1364,0,20)) return *(char**)vmckrt;{
    return _gcvt(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_gcvt(double,int,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_beep(unsigned int,unsigned int))
#ifdef VUser_vmck__beep
#undef _beep
static void __cdecl vmck__beep(unsigned int arg_1,unsigned int arg_2)
{VMCKDS vmckds[2]={{1,"unsigned int","arg_1",(const void*)&arg_1},{2,"unsigned int","arg_2",(const void*)&arg_2}}; if(!VuxMck("_beep",0,vmckds,2,"",1383,0,20)) {
    _beep(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_beep(unsigned int,unsigned int))

//$$VUNIT(BEGIN,VMOCKDEFINE/rand())
#ifdef VUser_vmck_rand
#undef rand
static int __cdecl vmck_rand()
{void* vmckrt=0; if(VuxMck("rand",&vmckrt,0,0,"",1336,0,20)) return *(int*)vmckrt;{
    return rand();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/rand())

//$$VUNIT(BEGIN,VMOCKDEFINE/_errno())
#ifdef VUser_vmck__errno
#undef _errno
static int* __cdecl vmck__errno()
{void* vmckrt=0; if(VuxMck("_errno",&vmckrt,0,0,"",1309,0,20)) return *(int**)vmckrt;{
    return _errno();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_errno())

//$$VUNIT(BEGIN,VMOCKDEFINE/_makepath(char*,const char*,const char*,const char*,const char*))
#ifdef VUser_vmck__makepath
#undef _makepath
static void __cdecl vmck__makepath(char* arg_1,const char* arg_2,const char* arg_3,const char* arg_4,const char* arg_5)
{VMCKDS vmckds[5]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3},{4,"char*","arg_4",(const void*)&arg_4},{5,"char*","arg_5",(const void*)&arg_5}}; if(!VuxMck("_makepath",0,vmckds,5,"",1367,0,20)) {
    _makepath(arg_1,arg_2,arg_3,arg_4,arg_5);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_makepath(char*,const char*,const char*,const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strtod(const char* __restrict__,char** __restrict__))
#ifdef VUser_vmck_strtod
#undef strtod
static double __cdecl vmck_strtod(const char* __restrict__ __nptr,char** __restrict__ __endptr)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char* __restrict__","__nptr",(const void*)&__nptr},{2,"char** __restrict__","__endptr",(const void*)&__endptr}}; if(VuxMck("strtod",&vmckrt,vmckds,2,"",1553,0,20)) return *(double*)vmckrt;{
    return strtod(__nptr,__endptr);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strtod(const char* __restrict__,char** __restrict__))

//$$VUNIT(BEGIN,VMOCKDEFINE/putenv(const char*))
#ifdef VUser_vmck_putenv
#undef putenv
static int __cdecl vmck_putenv(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("putenv",&vmckrt,vmckds,1,"",1393,0,20)) return *(int*)vmckrt;{
    return putenv(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/putenv(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strtof(const char*,char**))
#ifdef VUser_vmck_strtof
#undef strtof
static float __cdecl vmck_strtof(const char* __restrict__,char** __restrict__)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","__restrict__",(const void*)&__restrict__},{2,"char**","__restrict__",(const void*)&__restrict__}}; if(VuxMck("strtof",&vmckrt,vmckds,2,"",1554,0,20)) return *(float*)vmckrt;{
    return strtof(__restrict__,__restrict__);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strtof(const char*,char**))

//$$VUNIT(BEGIN,VMOCKDEFINE/strtol(const char*,char**,int))
#ifdef VUser_vmck_strtol
#undef strtol
static long __cdecl vmck_strtol(const char* arg_1,char** arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char**","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("strtol",&vmckrt,vmckds,3,"",1341,0,20)) return *(long*)vmckrt;{
    return strtol(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strtol(const char*,char**,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/div(int,int))
#ifdef VUser_vmck_div
#undef div
static div_t __cdecl vmck_div(int arg_1,int arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2}}; if(VuxMck("div",&vmckrt,vmckds,2,"",1320,0,20)) return *(div_t*)vmckrt;{
    return div(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/div(int,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/mbstowcs(wchar_t*,const char*,size_t))
#ifdef VUser_vmck_mbstowcs
#undef mbstowcs
static size_t __cdecl vmck_mbstowcs(wchar_t* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("mbstowcs",&vmckrt,vmckds,3,"",1560,0,20)) return *(size_t*)vmckrt;{
    return mbstowcs(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/mbstowcs(wchar_t*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/gcvt(double,int,char*))
#ifdef VUser_vmck_gcvt
#undef gcvt
static char* __cdecl vmck_gcvt(double arg_1,int arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"double","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("gcvt",&vmckrt,vmckds,3,"",1389,0,20)) return *(char**)vmckrt;{
    return gcvt(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/gcvt(double,int,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/system(const char*))
#ifdef VUser_vmck_system
#undef system
static int __cdecl vmck_system(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("system",&vmckrt,vmckds,1,"",1343,0,20)) return *(int*)vmckrt;{
    return system(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/system(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_fullpath(char*,const char*,size_t))
#ifdef VUser_vmck__fullpath
#undef _fullpath
static char* __cdecl vmck__fullpath(char* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("_fullpath",&vmckrt,vmckds,3,"",1568,0,20)) return *(char**)vmckrt;{
    return _fullpath(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fullpath(char*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/getenv(const char*))
#ifdef VUser_vmck_getenv
#undef getenv
static char* __cdecl vmck_getenv(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("getenv",&vmckrt,vmckds,1,"",1322,0,20)) return *(char**)vmckrt;{
    return getenv(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/getenv(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wctomb(char*,wchar_t))
#ifdef VUser_vmck_wctomb
#undef wctomb
static int __cdecl vmck_wctomb(char* arg_1,wchar_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"wchar_t","arg_2",(const void*)&arg_2}}; if(VuxMck("wctomb",&vmckrt,vmckds,2,"",1345,0,20)) return *(int*)vmckrt;{
    return wctomb(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wctomb(char*,wchar_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcstod(const wchar_t*,wchar_t**))
#ifdef VUser_vmck_wcstod
#undef wcstod
static double __cdecl vmck_wcstod(const wchar_t* arg_1,wchar_t** arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t**","arg_2",(const void*)&arg_2}}; if(VuxMck("wcstod",&vmckrt,vmckds,2,"",1350,0,20)) return *(double*)vmckrt;{
    return wcstod(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcstod(const wchar_t*,wchar_t**))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcstof(const wchar_t*,wchar_t**))
#ifdef VUser_vmck_wcstof
#undef wcstof
static float __cdecl vmck_wcstof(const wchar_t* __restrict__,wchar_t** __restrict__)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","__restrict__",(const void*)&__restrict__},{2,"wchar_t**","__restrict__",(const void*)&__restrict__}}; if(VuxMck("wcstof",&vmckrt,vmckds,2,"",1556,0,20)) return *(float*)vmckrt;{
    return wcstof(__restrict__,__restrict__);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcstof(const wchar_t*,wchar_t**))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcstol(const wchar_t*,wchar_t**,int))
#ifdef VUser_vmck_wcstol
#undef wcstol
static long __cdecl vmck_wcstol(const wchar_t* arg_1,wchar_t** arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t**","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("wcstol",&vmckrt,vmckds,3,"",1351,0,20)) return *(long*)vmckrt;{
    return wcstol(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcstol(const wchar_t*,wchar_t**,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_ltoa(long,char*,int))
#ifdef VUser_vmck__ltoa
#undef _ltoa
static char* __cdecl vmck__ltoa(long arg_1,char* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"long","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("_ltoa",&vmckrt,vmckds,3,"",1329,0,20)) return *(char**)vmckrt;{
    return _ltoa(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_ltoa(long,char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/lldiv(long long,long long))
#ifdef VUser_vmck_lldiv
#undef lldiv
static lldiv_t __cdecl vmck_lldiv(long long arg_1,long long arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"long long","arg_1",(const void*)&arg_1},{2,"long long","arg_2",(const void*)&arg_2}}; if(VuxMck("lldiv",&vmckrt,vmckds,2,"",1571,0,20)) return *(lldiv_t*)vmckrt;{
    return lldiv(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/lldiv(long long,long long))

//$$VUNIT(BEGIN,VMOCKDEFINE/abs(int))
#ifdef VUser_vmck_abs
#undef abs
static int __cdecl vmck_abs(int arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","arg_1",(const void*)&arg_1}}; if(VuxMck("abs",&vmckrt,vmckds,1,"",1313,0,20)) return *(int*)vmckrt;{
    return abs(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/abs(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_seterrormode(int))
#ifdef VUser_vmck__seterrormode
#undef _seterrormode
static void __cdecl vmck__seterrormode(int arg_1)
{VMCKDS vmckds[1]={{1,"int","arg_1",(const void*)&arg_1}}; if(!VuxMck("_seterrormode",0,vmckds,1,"",1382,0,20)) {
    _seterrormode(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_seterrormode(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_ltow(long,wchar_t*,int))
#ifdef VUser_vmck__ltow
#undef _ltow
static wchar_t* __cdecl vmck__ltow(long arg_1,wchar_t* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"long","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("_ltow",&vmckrt,vmckds,3,"",1348,0,20)) return *(wchar_t**)vmckrt;{
    return _ltow(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_ltow(long,wchar_t*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/qsort(void*,size_t,size_t,int(*)(const void*,const void*)))
#ifdef VUser_vmck_qsort
#undef qsort
static void __cdecl vmck_qsort(void* arg_1,size_t arg_2,size_t arg_3,int(*arg_4)(const void*,const void*))
{VMCKDS vmckds[4]={{1,"void*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3},{4,"int(*)(void*,void*)","arg_4",(const void*)&arg_4}}; if(!VuxMck("qsort",0,vmckds,4,"",1567,0,20)) {
    qsort(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/qsort(void*,size_t,size_t,int(*)(const void*,const void*)))

//$$VUNIT(BEGIN,VMOCKDEFINE/llabs(long long))
#ifdef VUser_vmck_llabs
#undef llabs
static long long __cdecl vmck_llabs(long long arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"long long","arg_1",(const void*)&arg_1}}; if(VuxMck("llabs",&vmckrt,vmckds,1,"",1572,0,20)) return *(long long*)vmckrt;{
    return llabs(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/llabs(long long))

//$$VUNIT(BEGIN,VMOCKDEFINE/mblen(const char*,size_t))
#ifdef VUser_vmck_mblen
#undef mblen
static int __cdecl vmck_mblen(const char* arg_1,size_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2}}; if(VuxMck("mblen",&vmckrt,vmckds,2,"",1559,0,20)) return *(int*)vmckrt;{
    return mblen(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/mblen(const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/malloc(size_t))
#ifdef VUser_vmck_malloc
#undef malloc
static void* __cdecl vmck_malloc(size_t arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"size_t","arg_1",(const void*)&arg_1}}; if(VuxMck("malloc",&vmckrt,vmckds,1,"",1563,0,20)) return *(void**)vmckrt;{
    return malloc(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/malloc(size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/ltoa(long,char*,int))
#ifdef VUser_vmck_ltoa
#undef ltoa
static char* __cdecl vmck_ltoa(long arg_1,char* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"long","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("ltoa",&vmckrt,vmckds,3,"",1391,0,20)) return *(char**)vmckrt;{
    return ltoa(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/ltoa(long,char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_searchenv(const char*,const char*,char*))
#ifdef VUser_vmck__searchenv
#undef _searchenv
static void __cdecl vmck__searchenv(const char* arg_1,const char* arg_2,char* arg_3)
{VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(!VuxMck("_searchenv",0,vmckds,3,"",1373,0,20)) {
    _searchenv(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_searchenv(const char*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcstombs(char*,const wchar_t*,size_t))
#ifdef VUser_vmck_wcstombs
#undef wcstombs
static size_t __cdecl vmck_wcstombs(char* arg_1,const wchar_t* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("wcstombs",&vmckrt,vmckds,3,"",1558,0,20)) return *(size_t*)vmckrt;{
    return wcstombs(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcstombs(char*,const wchar_t*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/atexit(void(*)(void)))
#ifdef VUser_vmck_atexit
#undef atexit
static int __cdecl vmck_atexit(void(*arg_1)(void))
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"void(*)(void)","arg_1",(const void*)&arg_1}}; if(VuxMck("atexit",&vmckrt,vmckds,1,"",1565,0,20)) return *(int*)vmckrt;{
    return atexit(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/atexit(void(*)(void)))

//$$VUNIT(BEGIN,VMOCKDEFINE/searchenv(const char*,const char*,char*))
#ifdef VUser_vmck_searchenv
#undef searchenv
static void __cdecl vmck_searchenv(const char* arg_1,const char* arg_2,char* arg_3)
{VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(!VuxMck("searchenv",0,vmckds,3,"",1569,0,20)) {
    searchenv(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/searchenv(const char*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_putenv(const char*))
#ifdef VUser_vmck__putenv
#undef _putenv
static int __cdecl vmck__putenv(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_putenv",&vmckrt,vmckds,1,"",1370,0,20)) return *(int*)vmckrt;{
    return _putenv(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_putenv(const char*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "_mingw.h"
#include "stddef.h"

#endif