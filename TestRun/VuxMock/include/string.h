
#ifndef __MCK_INCLUDE_STRING_H__
#define __MCK_INCLUDE_STRING_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/wcsupr(wchar_t*))
#ifdef VUser_vmck_wcsupr
#undef wcsupr
static wchar_t* __cdecl vmck_wcsupr(wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("wcsupr",&vmckrt,vmckds,1,"",1307,0,20)) return *(wchar_t**)vmckrt;{
    return wcsupr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsupr(wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcspbrk(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcspbrk
#undef wcspbrk
static wchar_t* __cdecl vmck_wcspbrk(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcspbrk",&vmckrt,vmckds,2,"",1282,0,20)) return *(wchar_t**)vmckrt;{
    return wcspbrk(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcspbrk(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/stricmp(const char*,const char*))
#ifdef VUser_vmck_stricmp
#undef stricmp
static int __cdecl vmck_stricmp(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("stricmp",&vmckrt,vmckds,2,"",1265,0,20)) return *(int*)vmckrt;{
    return stricmp(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/stricmp(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strcasecmp(const char*,const char*))
#ifdef VUser_vmck_strcasecmp
#undef strcasecmp
static int __cdecl vmck_strcasecmp(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strcasecmp",&vmckrt,vmckds,2,"",1536,0,20)) return *(int*)vmckrt;{
    return strcasecmp(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strcasecmp(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/memchr(const void*,int,size_t))
#ifdef VUser_vmck_memchr
#undef memchr
static void* __cdecl vmck_memchr(const void* arg_1,int arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"void*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("memchr",&vmckrt,vmckds,3,"",1520,0,20)) return *(void**)vmckrt;{
    return memchr(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/memchr(const void*,int,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strcpy(char*,const char*))
#ifdef VUser_vmck_strcpy
#undef strcpy
static char* __cdecl vmck_strcpy(char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strcpy",&vmckrt,vmckds,2,"",1229,0,20)) return *(char**)vmckrt;{
    return strcpy(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strcpy(char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strpbrk(const char*,const char*))
#ifdef VUser_vmck_strpbrk
#undef strpbrk
static char* __cdecl vmck_strpbrk(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strpbrk",&vmckrt,vmckds,2,"",1254,0,20)) return *(char**)vmckrt;{
    return strpbrk(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strpbrk(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/swab(const char*,char*,size_t))
#ifdef VUser_vmck_swab
#undef swab
static void __cdecl vmck_swab(const char* arg_1,char* arg_2,size_t arg_3)
{VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(!VuxMck("swab",0,vmckds,3,"",1541,0,20)) {
    swab(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/swab(const char*,char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcsnset(wchar_t*,wchar_t,size_t))
#ifdef VUser_vmck__wcsnset
#undef _wcsnset
static wchar_t* __cdecl vmck__wcsnset(wchar_t* arg_1,wchar_t arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("_wcsnset",&vmckrt,vmckds,3,"",1547,0,20)) return *(wchar_t**)vmckrt;{
    return _wcsnset(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcsnset(wchar_t*,wchar_t,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcsnicmp(const wchar_t*,const wchar_t*,size_t))
#ifdef VUser_vmck__wcsnicmp
#undef _wcsnicmp
static int __cdecl vmck__wcsnicmp(const wchar_t* arg_1,const wchar_t* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("_wcsnicmp",&vmckrt,vmckds,3,"",1546,0,20)) return *(int*)vmckrt;{
    return _wcsnicmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcsnicmp(const wchar_t*,const wchar_t*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsxfrm(wchar_t*,const wchar_t*,size_t))
#ifdef VUser_vmck_wcsxfrm
#undef wcsxfrm
static size_t __cdecl vmck_wcsxfrm(wchar_t* arg_1,const wchar_t* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("wcsxfrm",&vmckrt,vmckds,3,"",1545,0,20)) return *(size_t*)vmckrt;{
    return wcsxfrm(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsxfrm(wchar_t*,const wchar_t*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strset(char*,int))
#ifdef VUser_vmck_strset
#undef strset
static char* __cdecl vmck_strset(char* arg_1,int arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2}}; if(VuxMck("strset",&vmckrt,vmckds,2,"",1271,0,20)) return *(char**)vmckrt;{
    return strset(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strset(char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcscpy(wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcscpy
#undef wcscpy
static wchar_t* __cdecl vmck_wcscpy(wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcscpy",&vmckrt,vmckds,2,"",1276,0,20)) return *(wchar_t**)vmckrt;{
    return wcscpy(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcscpy(wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strnset(char*,int,size_t))
#ifdef VUser_vmck__strnset
#undef _strnset
static char* __cdecl vmck__strnset(char* arg_1,int arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("_strnset",&vmckrt,vmckds,3,"",1532,0,20)) return *(char**)vmckrt;{
    return _strnset(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strnset(char*,int,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strxfrm(char*,const char*,size_t))
#ifdef VUser_vmck_strxfrm
#undef strxfrm
static size_t __cdecl vmck_strxfrm(char* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("strxfrm",&vmckrt,vmckds,3,"",1528,0,20)) return *(size_t*)vmckrt;{
    return strxfrm(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strxfrm(char*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_memccpy(void*,const void*,int,size_t))
#ifdef VUser_vmck__memccpy
#undef _memccpy
static void* __cdecl vmck__memccpy(void* arg_1,const void* arg_2,int arg_3,size_t arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"void*","arg_1",(const void*)&arg_1},{2,"void*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3},{4,"size_t","arg_4",(const void*)&arg_4}}; if(VuxMck("_memccpy",&vmckrt,vmckds,4,"",1529,0,20)) return *(void**)vmckrt;{
    return _memccpy(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_memccpy(void*,const void*,int,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcsicmp(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck__wcsicmp
#undef _wcsicmp
static int __cdecl vmck__wcsicmp(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("_wcsicmp",&vmckrt,vmckds,2,"",1288,0,20)) return *(int*)vmckrt;{
    return _wcsicmp(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcsicmp(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsset(wchar_t*,wchar_t))
#ifdef VUser_vmck_wcsset
#undef wcsset
static wchar_t* __cdecl vmck_wcsset(wchar_t* arg_1,wchar_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t","arg_2",(const void*)&arg_2}}; if(VuxMck("wcsset",&vmckrt,vmckds,2,"",1305,0,20)) return *(wchar_t**)vmckrt;{
    return wcsset(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsset(wchar_t*,wchar_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsrchr(const wchar_t*,wchar_t))
#ifdef VUser_vmck_wcsrchr
#undef wcsrchr
static wchar_t* __cdecl vmck_wcsrchr(const wchar_t* arg_1,wchar_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t","arg_2",(const void*)&arg_2}}; if(VuxMck("wcsrchr",&vmckrt,vmckds,2,"",1283,0,20)) return *(wchar_t**)vmckrt;{
    return wcsrchr(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsrchr(const wchar_t*,wchar_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_stricmp(const char*,const char*))
#ifdef VUser_vmck__stricmp
#undef _stricmp
static int __cdecl vmck__stricmp(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("_stricmp",&vmckrt,vmckds,2,"",1239,0,20)) return *(int*)vmckrt;{
    return _stricmp(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_stricmp(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strrev(char*))
#ifdef VUser_vmck__strrev
#undef _strrev
static char* __cdecl vmck__strrev(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_strrev",&vmckrt,vmckds,1,"",1256,0,20)) return *(char**)vmckrt;{
    return _strrev(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strrev(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strrchr(const char*,int))
#ifdef VUser_vmck_strrchr
#undef strrchr
static char* __cdecl vmck_strrchr(const char* arg_1,int arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2}}; if(VuxMck("strrchr",&vmckrt,vmckds,2,"",1255,0,20)) return *(char**)vmckrt;{
    return strrchr(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strrchr(const char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/memcmp(const void*,const void*,size_t))
#ifdef VUser_vmck_memcmp
#undef memcmp
static int __cdecl vmck_memcmp(const void* arg_1,const void* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"void*","arg_1",(const void*)&arg_1},{2,"void*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("memcmp",&vmckrt,vmckds,3,"",1521,0,20)) return *(int*)vmckrt;{
    return memcmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/memcmp(const void*,const void*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strupr(char*))
#ifdef VUser_vmck__strupr
#undef _strupr
static char* __cdecl vmck__strupr(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_strupr",&vmckrt,vmckds,1,"",1260,0,20)) return *(char**)vmckrt;{
    return _strupr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strupr(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strlwr(char*))
#ifdef VUser_vmck_strlwr
#undef strlwr
static char* __cdecl vmck_strlwr(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("strlwr",&vmckrt,vmckds,1,"",1267,0,20)) return *(char**)vmckrt;{
    return strlwr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strlwr(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcsrev(wchar_t*))
#ifdef VUser_vmck__wcsrev
#undef _wcsrev
static wchar_t* __cdecl vmck__wcsrev(wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("_wcsrev",&vmckrt,vmckds,1,"",1291,0,20)) return *(wchar_t**)vmckrt;{
    return _wcsrev(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcsrev(wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcsupr(wchar_t*))
#ifdef VUser_vmck__wcsupr
#undef _wcsupr
static wchar_t* __cdecl vmck__wcsupr(wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("_wcsupr",&vmckrt,vmckds,1,"",1294,0,20)) return *(wchar_t**)vmckrt;{
    return _wcsupr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcsupr(wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsncat(wchar_t*,const wchar_t*,size_t))
#ifdef VUser_vmck_wcsncat
#undef wcsncat
static wchar_t* __cdecl vmck_wcsncat(wchar_t* arg_1,const wchar_t* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("wcsncat",&vmckrt,vmckds,3,"",1542,0,20)) return *(wchar_t**)vmckrt;{
    return wcsncat(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsncat(wchar_t*,const wchar_t*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/memmove(void*,const void*,size_t))
#ifdef VUser_vmck_memmove
#undef memmove
static void* __cdecl vmck_memmove(void* arg_1,const void* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"void*","arg_1",(const void*)&arg_1},{2,"void*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("memmove",&vmckrt,vmckds,3,"",1523,0,20)) return *(void**)vmckrt;{
    return memmove(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/memmove(void*,const void*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcslwr(wchar_t*))
#ifdef VUser_vmck_wcslwr
#undef wcslwr
static wchar_t* __cdecl vmck_wcslwr(wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("wcslwr",&vmckrt,vmckds,1,"",1306,0,20)) return *(wchar_t**)vmckrt;{
    return wcslwr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcslwr(wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsicoll(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcsicoll
#undef wcsicoll
static int __cdecl vmck_wcsicoll(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcsicoll",&vmckrt,vmckds,2,"",1308,0,20)) return *(int*)vmckrt;{
    return wcsicoll(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsicoll(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcscmpi(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcscmpi
#undef wcscmpi
static int __cdecl vmck_wcscmpi(const wchar_t* __ws1,const wchar_t* __ws2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","__ws1",(const void*)&__ws1},{2,"wchar_t*","__ws2",(const void*)&__ws2}}; if(VuxMck("wcscmpi",&vmckrt,vmckds,2,"",1548,0,20)) return *(int*)vmckrt;{
    return wcscmpi(__ws1,__ws2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcscmpi(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/memcpy(void*,const void*,size_t))
#ifdef VUser_vmck_memcpy
#undef memcpy
static void* __cdecl vmck_memcpy(void* arg_1,const void* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"void*","arg_1",(const void*)&arg_1},{2,"void*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("memcpy",&vmckrt,vmckds,3,"",1522,0,20)) return *(void**)vmckrt;{
    return memcpy(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/memcpy(void*,const void*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strncat(char*,const char*,size_t))
#ifdef VUser_vmck_strncat
#undef strncat
static char* __cdecl vmck_strncat(char* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("strncat",&vmckrt,vmckds,3,"",1525,0,20)) return *(char**)vmckrt;{
    return strncat(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strncat(char*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strcmpi(const char*,const char*))
#ifdef VUser_vmck_strcmpi
#undef strcmpi
static int __cdecl vmck_strcmpi(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strcmpi",&vmckrt,vmckds,2,"",1264,0,20)) return *(int*)vmckrt;{
    return strcmpi(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strcmpi(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strnicmp(const char*,const char*,size_t))
#ifdef VUser_vmck_strnicmp
#undef strnicmp
static int __cdecl vmck_strnicmp(const char* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("strnicmp",&vmckrt,vmckds,3,"",1538,0,20)) return *(int*)vmckrt;{
    return strnicmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strnicmp(const char*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/memset(void*,int,size_t))
#ifdef VUser_vmck_memset
#undef memset
static void* __cdecl vmck_memset(void* arg_1,int arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"void*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("memset",&vmckrt,vmckds,3,"",1524,0,20)) return *(void**)vmckrt;{
    return memset(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/memset(void*,int,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strset(char*,int))
#ifdef VUser_vmck__strset
#undef _strset
static char* __cdecl vmck__strset(char* arg_1,int arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2}}; if(VuxMck("_strset",&vmckrt,vmckds,2,"",1228,0,20)) return *(char**)vmckrt;{
    return _strset(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strset(char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/strdup(const char*))
#ifdef VUser_vmck_strdup
#undef strdup
static char* __cdecl vmck_strdup(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("strdup",&vmckrt,vmckds,1,"",1266,0,20)) return *(char**)vmckrt;{
    return strdup(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strdup(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcsset(wchar_t*,wchar_t))
#ifdef VUser_vmck__wcsset
#undef _wcsset
static wchar_t* __cdecl vmck__wcsset(wchar_t* arg_1,wchar_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t","arg_2",(const void*)&arg_2}}; if(VuxMck("_wcsset",&vmckrt,vmckds,2,"",1292,0,20)) return *(wchar_t**)vmckrt;{
    return _wcsset(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcsset(wchar_t*,wchar_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcsicoll(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck__wcsicoll
#undef _wcsicoll
static int __cdecl vmck__wcsicoll(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("_wcsicoll",&vmckrt,vmckds,2,"",1297,0,20)) return *(int*)vmckrt;{
    return _wcsicoll(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcsicoll(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strcat(char*,const char*))
#ifdef VUser_vmck_strcat
#undef strcat
static char* __cdecl vmck_strcat(char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strcat",&vmckrt,vmckds,2,"",1230,0,20)) return *(char**)vmckrt;{
    return strcat(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strcat(char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsdup(const wchar_t*))
#ifdef VUser_vmck_wcsdup
#undef wcsdup
static wchar_t* __cdecl vmck_wcsdup(const wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("wcsdup",&vmckrt,vmckds,1,"",1300,0,20)) return *(wchar_t**)vmckrt;{
    return wcsdup(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsdup(const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strspn(const char*,const char*))
#ifdef VUser_vmck_strspn
#undef strspn
static size_t __cdecl vmck_strspn(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strspn",&vmckrt,vmckds,2,"",1257,0,20)) return *(size_t*)vmckrt;{
    return strspn(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strspn(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strnicmp(const char*,const char*,size_t))
#ifdef VUser_vmck__strnicmp
#undef _strnicmp
static int __cdecl vmck__strnicmp(const char* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("_strnicmp",&vmckrt,vmckds,3,"",1531,0,20)) return *(int*)vmckrt;{
    return _strnicmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strnicmp(const char*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strcmpi(const char*,const char*))
#ifdef VUser_vmck__strcmpi
#undef _strcmpi
static int __cdecl vmck__strcmpi(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("_strcmpi",&vmckrt,vmckds,2,"",1238,0,20)) return *(int*)vmckrt;{
    return _strcmpi(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strcmpi(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strlwr(char*))
#ifdef VUser_vmck__strlwr
#undef _strlwr
static char* __cdecl vmck__strlwr(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_strlwr",&vmckrt,vmckds,1,"",1248,0,20)) return *(char**)vmckrt;{
    return _strlwr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strlwr(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcscat(wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcscat
#undef wcscat
static wchar_t* __cdecl vmck_wcscat(wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcscat",&vmckrt,vmckds,2,"",1273,0,20)) return *(wchar_t**)vmckrt;{
    return wcscat(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcscat(wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsspn(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcsspn
#undef wcsspn
static size_t __cdecl vmck_wcsspn(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcsspn",&vmckrt,vmckds,2,"",1284,0,20)) return *(size_t*)vmckrt;{
    return wcsspn(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsspn(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strlen(const char*))
#ifdef VUser_vmck_strlen
#undef strlen
static size_t __cdecl vmck_strlen(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("strlen",&vmckrt,vmckds,1,"",1232,0,20)) return *(size_t*)vmckrt;{
    return strlen(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strlen(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcslwr(wchar_t*))
#ifdef VUser_vmck__wcslwr
#undef _wcslwr
static wchar_t* __cdecl vmck__wcslwr(wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("_wcslwr",&vmckrt,vmckds,1,"",1293,0,20)) return *(wchar_t**)vmckrt;{
    return _wcslwr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcslwr(wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strerror(int))
#ifdef VUser_vmck_strerror
#undef strerror
static char* __cdecl vmck_strerror(int arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","arg_1",(const void*)&arg_1}}; if(VuxMck("strerror",&vmckrt,vmckds,1,"",1247,0,20)) return *(char**)vmckrt;{
    return strerror(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strerror(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcscoll(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcscoll
#undef wcscoll
static int __cdecl vmck_wcscoll(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcscoll",&vmckrt,vmckds,2,"",1296,0,20)) return *(int*)vmckrt;{
    return wcscoll(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcscoll(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcscspn(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcscspn
#undef wcscspn
static size_t __cdecl vmck_wcscspn(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcscspn",&vmckrt,vmckds,2,"",1277,0,20)) return *(size_t*)vmckrt;{
    return wcscspn(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcscspn(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcslen(const wchar_t*))
#ifdef VUser_vmck_wcslen
#undef wcslen
static size_t __cdecl vmck_wcslen(const wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("wcslen",&vmckrt,vmckds,1,"",1278,0,20)) return *(size_t*)vmckrt;{
    return wcslen(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcslen(const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strstr(const char*,const char*))
#ifdef VUser_vmck_strstr
#undef strstr
static char* __cdecl vmck_strstr(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strstr",&vmckrt,vmckds,2,"",1258,0,20)) return *(char**)vmckrt;{
    return strstr(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strstr(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strcoll(const char*,const char*))
#ifdef VUser_vmck_strcoll
#undef strcoll
static int __cdecl vmck_strcoll(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strcoll",&vmckrt,vmckds,2,"",1240,0,20)) return *(int*)vmckrt;{
    return strcoll(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strcoll(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strcspn(const char*,const char*))
#ifdef VUser_vmck_strcspn
#undef strcspn
static size_t __cdecl vmck_strcspn(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strcspn",&vmckrt,vmckds,2,"",1244,0,20)) return *(size_t*)vmckrt;{
    return strcspn(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strcspn(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strtok(char*,const char*))
#ifdef VUser_vmck_strtok
#undef strtok
static char* __cdecl vmck_strtok(char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strtok",&vmckrt,vmckds,2,"",1259,0,20)) return *(char**)vmckrt;{
    return strtok(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strtok(char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsstr(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcsstr
#undef wcsstr
static wchar_t* __cdecl vmck_wcsstr(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcsstr",&vmckrt,vmckds,2,"",1285,0,20)) return *(wchar_t**)vmckrt;{
    return wcsstr(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsstr(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strdup(const char*))
#ifdef VUser_vmck__strdup
#undef _strdup
static char* __cdecl vmck__strdup(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_strdup",&vmckrt,vmckds,1,"",1245,0,20)) return *(char**)vmckrt;{
    return _strdup(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strdup(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsncmp(const wchar_t*,const wchar_t*,size_t))
#ifdef VUser_vmck_wcsncmp
#undef wcsncmp
static int __cdecl vmck_wcsncmp(const wchar_t* arg_1,const wchar_t* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("wcsncmp",&vmckrt,vmckds,3,"",1543,0,20)) return *(int*)vmckrt;{
    return wcsncmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsncmp(const wchar_t*,const wchar_t*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcstok(wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcstok
#undef wcstok
static wchar_t* __cdecl vmck_wcstok(wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcstok",&vmckrt,vmckds,2,"",1286,0,20)) return *(wchar_t**)vmckrt;{
    return wcstok(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcstok(wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strchr(const char*,int))
#ifdef VUser_vmck_strchr
#undef strchr
static char* __cdecl vmck_strchr(const char* arg_1,int arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2}}; if(VuxMck("strchr",&vmckrt,vmckds,2,"",1237,0,20)) return *(char**)vmckrt;{
    return strchr(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strchr(const char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/stricoll(const char*,const char*))
#ifdef VUser_vmck_stricoll
#undef stricoll
static int __cdecl vmck_stricoll(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("stricoll",&vmckrt,vmckds,2,"",1537,0,20)) return *(int*)vmckrt;{
    return stricoll(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/stricoll(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_strerror(const char*))
#ifdef VUser_vmck__strerror
#undef _strerror
static char* __cdecl vmck__strerror(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_strerror",&vmckrt,vmckds,1,"",1246,0,20)) return *(char**)vmckrt;{
    return _strerror(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_strerror(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/memicmp(const void*,const void*,size_t))
#ifdef VUser_vmck_memicmp
#undef memicmp
static int __cdecl vmck_memicmp(const void* arg_1,const void* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"void*","arg_1",(const void*)&arg_1},{2,"void*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("memicmp",&vmckrt,vmckds,3,"",1535,0,20)) return *(int*)vmckrt;{
    return memicmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/memicmp(const void*,const void*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strncmp(const char*,const char*,size_t))
#ifdef VUser_vmck_strncmp
#undef strncmp
static int __cdecl vmck_strncmp(const char* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("strncmp",&vmckrt,vmckds,3,"",1526,0,20)) return *(int*)vmckrt;{
    return strncmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strncmp(const char*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_wcsdup(const wchar_t*))
#ifdef VUser_vmck__wcsdup
#undef _wcsdup
static wchar_t* __cdecl vmck__wcsdup(const wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("_wcsdup",&vmckrt,vmckds,1,"",1287,0,20)) return *(wchar_t**)vmckrt;{
    return _wcsdup(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_wcsdup(const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcschr(const wchar_t*,wchar_t))
#ifdef VUser_vmck_wcschr
#undef wcschr
static wchar_t* __cdecl vmck_wcschr(const wchar_t* arg_1,wchar_t arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t","arg_2",(const void*)&arg_2}}; if(VuxMck("wcschr",&vmckrt,vmckds,2,"",1274,0,20)) return *(wchar_t**)vmckrt;{
    return wcschr(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcschr(const wchar_t*,wchar_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsncpy(wchar_t*,const wchar_t*,size_t))
#ifdef VUser_vmck_wcsncpy
#undef wcsncpy
static wchar_t* __cdecl vmck_wcsncpy(wchar_t* arg_1,const wchar_t* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("wcsncpy",&vmckrt,vmckds,3,"",1544,0,20)) return *(wchar_t**)vmckrt;{
    return wcsncpy(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsncpy(wchar_t*,const wchar_t*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strncasecmp(const char*,const char*,size_t))
#ifdef VUser_vmck_strncasecmp
#undef strncasecmp
static int __cdecl vmck_strncasecmp(const char* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("strncasecmp",&vmckrt,vmckds,3,"",1539,0,20)) return *(int*)vmckrt;{
    return strncasecmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strncasecmp(const char*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strrev(char*))
#ifdef VUser_vmck_strrev
#undef strrev
static char* __cdecl vmck_strrev(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("strrev",&vmckrt,vmckds,1,"",1270,0,20)) return *(char**)vmckrt;{
    return strrev(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strrev(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strncpy(char*,const char*,size_t))
#ifdef VUser_vmck_strncpy
#undef strncpy
static char* __cdecl vmck_strncpy(char* arg_1,const char* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("strncpy",&vmckrt,vmckds,3,"",1527,0,20)) return *(char**)vmckrt;{
    return strncpy(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strncpy(char*,const char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_stricoll(const char*,const char*))
#ifdef VUser_vmck__stricoll
#undef _stricoll
static int __cdecl vmck__stricoll(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("_stricoll",&vmckrt,vmckds,2,"",1241,0,20)) return *(int*)vmckrt;{
    return _stricoll(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_stricoll(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsnset(wchar_t*,wchar_t,size_t))
#ifdef VUser_vmck_wcsnset
#undef wcsnset
static wchar_t* __cdecl vmck_wcsnset(wchar_t* arg_1,wchar_t arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("wcsnset",&vmckrt,vmckds,3,"",1550,0,20)) return *(wchar_t**)vmckrt;{
    return wcsnset(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsnset(wchar_t*,wchar_t,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strcmp(const char*,const char*))
#ifdef VUser_vmck_strcmp
#undef strcmp
static int __cdecl vmck_strcmp(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("strcmp",&vmckrt,vmckds,2,"",1231,0,20)) return *(int*)vmckrt;{
    return strcmp(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strcmp(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsnicmp(const wchar_t*,const wchar_t*,size_t))
#ifdef VUser_vmck_wcsnicmp
#undef wcsnicmp
static int __cdecl vmck_wcsnicmp(const wchar_t* arg_1,const wchar_t* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("wcsnicmp",&vmckrt,vmckds,3,"",1549,0,20)) return *(int*)vmckrt;{
    return wcsnicmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsnicmp(const wchar_t*,const wchar_t*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/strupr(char*))
#ifdef VUser_vmck_strupr
#undef strupr
static char* __cdecl vmck_strupr(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("strupr",&vmckrt,vmckds,1,"",1272,0,20)) return *(char**)vmckrt;{
    return strupr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strupr(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_memicmp(const void*,const void*,size_t))
#ifdef VUser_vmck__memicmp
#undef _memicmp
static int __cdecl vmck__memicmp(const void* arg_1,const void* arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"void*","arg_1",(const void*)&arg_1},{2,"void*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("_memicmp",&vmckrt,vmckds,3,"",1530,0,20)) return *(int*)vmckrt;{
    return _memicmp(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_memicmp(const void*,const void*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsrev(wchar_t*))
#ifdef VUser_vmck_wcsrev
#undef wcsrev
static wchar_t* __cdecl vmck_wcsrev(wchar_t* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("wcsrev",&vmckrt,vmckds,1,"",1304,0,20)) return *(wchar_t**)vmckrt;{
    return wcsrev(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsrev(wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/strnset(char*,int,size_t))
#ifdef VUser_vmck_strnset
#undef strnset
static char* __cdecl vmck_strnset(char* arg_1,int arg_2,size_t arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(VuxMck("strnset",&vmckrt,vmckds,3,"",1540,0,20)) return *(char**)vmckrt;{
    return strnset(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/strnset(char*,int,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_swab(const char*,char*,size_t))
#ifdef VUser_vmck__swab
#undef _swab
static void __cdecl vmck__swab(const char* arg_1,char* arg_2,size_t arg_3)
{VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3}}; if(!VuxMck("_swab",0,vmckds,3,"",1533,0,20)) {
    _swab(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_swab(const char*,char*,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/memccpy(void*,const void*,int,size_t))
#ifdef VUser_vmck_memccpy
#undef memccpy
static void* __cdecl vmck_memccpy(void* arg_1,const void* arg_2,int arg_3,size_t arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"void*","arg_1",(const void*)&arg_1},{2,"void*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3},{4,"size_t","arg_4",(const void*)&arg_4}}; if(VuxMck("memccpy",&vmckrt,vmckds,4,"",1534,0,20)) return *(void**)vmckrt;{
    return memccpy(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/memccpy(void*,const void*,int,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcsicmp(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcsicmp
#undef wcsicmp
static int __cdecl vmck_wcsicmp(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcsicmp",&vmckrt,vmckds,2,"",1301,0,20)) return *(int*)vmckrt;{
    return wcsicmp(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcsicmp(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wcscmp(const wchar_t*,const wchar_t*))
#ifdef VUser_vmck_wcscmp
#undef wcscmp
static int __cdecl vmck_wcscmp(const wchar_t* arg_1,const wchar_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("wcscmp",&vmckrt,vmckds,2,"",1275,0,20)) return *(int*)vmckrt;{
    return wcscmp(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wcscmp(const wchar_t*,const wchar_t*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "_mingw.h"
#include "stddef.h"

#endif