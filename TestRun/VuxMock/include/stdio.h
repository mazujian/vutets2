
#ifndef __MCK_INCLUDE_STDIO_H__
#define __MCK_INCLUDE_STDIO_H__


//$$VUNIT(BEGIN,VMOCKDEFINE/_popen(const char*,const char*))
#ifdef VUser_vmck__popen
#undef _popen
static FILE* __cdecl vmck__popen(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("_popen",&vmckrt,vmckds,2,"",1430,0,20)) return *(FILE**)vmckrt;{
    return _popen(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_popen(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/ungetc(int,FILE*))
#ifdef VUser_vmck_ungetc
#undef ungetc
static int __cdecl vmck_ungetc(int arg_1,FILE* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg_1",(const void*)&arg_1},{2,"FILE*","arg_2",(const void*)&arg_2}}; if(VuxMck("ungetc",&vmckrt,vmckds,2,"",1450,0,20)) return *(int*)vmckrt;{
    return ungetc(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/ungetc(int,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fileno(FILE*))
#ifdef VUser_vmck_fileno
#undef fileno
static int __cdecl vmck_fileno(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("fileno",&vmckrt,vmckds,1,"",1491,0,20)) return *(int*)vmckrt;{
    return fileno(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fileno(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/clearerr(FILE*))
#ifdef VUser_vmck_clearerr
#undef clearerr
static void __cdecl vmck_clearerr(FILE* arg_1)
{VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(!VuxMck("clearerr",0,vmckds,1,"",1399,0,20)) {
    clearerr(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/clearerr(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fclose(FILE*))
#ifdef VUser_vmck_fclose
#undef fclose
static int __cdecl vmck_fclose(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("fclose",&vmckrt,vmckds,1,"",1400,0,20)) return *(int*)vmckrt;{
    return fclose(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fclose(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/getc(FILE*))
#ifdef VUser_vmck_getc
#undef getc
static int __cdecl vmck_getc(FILE* __F)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","__F",(const void*)&__F}}; if(VuxMck("getc",&vmckrt,vmckds,1,"",1424,0,20)) return *(int*)vmckrt;{
    return getc(__F);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/getc(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__msvcrt_vfprintf(FILE*,const char*,char*))
#ifdef VUser_vmck___msvcrt_vfprintf
#undef __msvcrt_vfprintf
static int __cdecl vmck___msvcrt_vfprintf(FILE* arg_1,const char* arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("__msvcrt_vfprintf",&vmckrt,vmckds,3,"",1587,0,20)) return *(int*)vmckrt;{
    return __msvcrt_vfprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__msvcrt_vfprintf(FILE*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__mingw_snprintf(char*,size_t,const char*,...))
#ifdef VUser_vmck___mingw_snprintf
#undef __mingw_snprintf
static int __cdecl vmck___mingw_snprintf(char* arg_1,size_t arg_2,const char* arg_3,... )
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("__mingw_snprintf",&vmckrt,vmckds,3,"",1579,0,20)) return *(int*)vmckrt;{
    return __mingw_snprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__mingw_snprintf(char*,size_t,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/gets(char*))
#ifdef VUser_vmck_gets
#undef gets
static char* __cdecl vmck_gets(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("gets",&vmckrt,vmckds,1,"",1427,0,20)) return *(char**)vmckrt;{
    return gets(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/gets(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_fgetchar())
#ifdef VUser_vmck__fgetchar
#undef _fgetchar
static int __cdecl vmck__fgetchar()
{void* vmckrt=0; if(VuxMck("_fgetchar",&vmckrt,0,0,"",1407,0,20)) return *(int*)vmckrt;{
    return _fgetchar();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fgetchar())

//$$VUNIT(BEGIN,VMOCKDEFINE/getw(FILE*))
#ifdef VUser_vmck_getw
#undef getw
static int __cdecl vmck_getw(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("getw",&vmckrt,vmckds,1,"",1494,0,20)) return *(int*)vmckrt;{
    return getw(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/getw(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__msvcrt_vsprintf(char*,const char*,char*))
#ifdef VUser_vmck___msvcrt_vsprintf
#undef __msvcrt_vsprintf
static int __cdecl vmck___msvcrt_vsprintf(char* arg_1,const char* arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("__msvcrt_vsprintf",&vmckrt,vmckds,3,"",1589,0,20)) return *(int*)vmckrt;{
    return __msvcrt_vsprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__msvcrt_vsprintf(char*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fputc(int,FILE*))
#ifdef VUser_vmck_fputc
#undef fputc
static int __cdecl vmck_fputc(int arg_1,FILE* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg_1",(const void*)&arg_1},{2,"FILE*","arg_2",(const void*)&arg_2}}; if(VuxMck("fputc",&vmckrt,vmckds,2,"",1414,0,20)) return *(int*)vmckrt;{
    return fputc(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fputc(int,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_pclose(FILE*))
#ifdef VUser_vmck__pclose
#undef _pclose
static int __cdecl vmck__pclose(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("_pclose",&vmckrt,vmckds,1,"",1429,0,20)) return *(int*)vmckrt;{
    return _pclose(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_pclose(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fputs(const char*,FILE*))
#ifdef VUser_vmck_fputs
#undef fputs
static int __cdecl vmck_fputs(const char* arg_1,FILE* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"FILE*","arg_2",(const void*)&arg_2}}; if(VuxMck("fputs",&vmckrt,vmckds,2,"",1416,0,20)) return *(int*)vmckrt;{
    return fputs(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fputs(const char*,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_fileno(FILE*))
#ifdef VUser_vmck__fileno
#undef _fileno
static int __cdecl vmck__fileno(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("_fileno",&vmckrt,vmckds,1,"",1410,0,20)) return *(int*)vmckrt;{
    return _fileno(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fileno(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fsetpos(FILE*,const fpos_t*))
#ifdef VUser_vmck_fsetpos
#undef fsetpos
static int __cdecl vmck_fsetpos(FILE* arg_1,const fpos_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"fpos_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("fsetpos",&vmckrt,vmckds,2,"",1601,0,20)) return *(int*)vmckrt;{
    return fsetpos(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fsetpos(FILE*,const fpos_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/sscanf(const char*,const char*,...))
#ifdef VUser_vmck_sscanf
#undef sscanf
static int __cdecl vmck_sscanf(const char* arg_1,const char* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("sscanf",&vmckrt,vmckds,2,"",1446,0,20)) return *(int*)vmckrt;{
    return sscanf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/sscanf(const char*,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/_fsopen(const char*,const char*,int))
#ifdef VUser_vmck__fsopen
#undef _fsopen
static FILE* __cdecl vmck__fsopen(const char* arg_1,const char* arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("_fsopen",&vmckrt,vmckds,3,"",1398,0,20)) return *(FILE**)vmckrt;{
    return _fsopen(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fsopen(const char*,const char*,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_vscprintf(const char*,char*))
#ifdef VUser_vmck__vscprintf
#undef _vscprintf
static int __cdecl vmck__vscprintf(const char* arg_1,char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("_vscprintf",&vmckrt,vmckds,2,"",1592,0,20)) return *(int*)vmckrt;{
    return _vscprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_vscprintf(const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fdopen(int,const char*))
#ifdef VUser_vmck_fdopen
#undef fdopen
static FILE* __cdecl vmck_fdopen(int arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("fdopen",&vmckrt,vmckds,2,"",1489,0,20)) return *(FILE**)vmckrt;{
    return fdopen(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fdopen(int,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/vscanf(const char*,char*))
#ifdef VUser_vmck_vscanf
#undef vscanf
static int __cdecl vmck_vscanf(const char* __restrict__,char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","__restrict__",(const void*)&__restrict__},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("vscanf",&vmckrt,vmckds,2,"",1595,0,20)) return *(int*)vmckrt;{
    return vscanf(__restrict__,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vscanf(const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/scanf(const char*,...))
#ifdef VUser_vmck_scanf
#undef scanf
static int __cdecl vmck_scanf(const char* arg_1,... )
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("scanf",&vmckrt,vmckds,1,"",1440,0,20)) return *(int*)vmckrt;{
    return scanf(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/scanf(const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/fscanf(FILE*,const char*,...))
#ifdef VUser_vmck_fscanf
#undef fscanf
static int __cdecl vmck_fscanf(FILE* arg_1,const char* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("fscanf",&vmckrt,vmckds,2,"",1419,0,20)) return *(int*)vmckrt;{
    return fscanf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fscanf(FILE*,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/snprintf(char*,size_t,const char*,...))
#ifdef VUser_vmck_snprintf
#undef snprintf
static int __cdecl vmck_snprintf(char* arg_1,size_t arg_2,const char* arg_3,... )
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("snprintf",&vmckrt,vmckds,3,"",1593,0,20)) return *(int*)vmckrt;{
    return snprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/snprintf(char*,size_t,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/__msvcrt_vprintf(const char*,char*))
#ifdef VUser_vmck___msvcrt_vprintf
#undef __msvcrt_vprintf
static int __cdecl vmck___msvcrt_vprintf(const char* arg_1,char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("__msvcrt_vprintf",&vmckrt,vmckds,2,"",1588,0,20)) return *(int*)vmckrt;{
    return __msvcrt_vprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__msvcrt_vprintf(const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fread(void*,size_t,size_t,FILE*))
#ifdef VUser_vmck_fread
#undef fread
static size_t __cdecl vmck_fread(void* arg_1,size_t arg_2,size_t arg_3,FILE* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"void*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3},{4,"FILE*","arg_4",(const void*)&arg_4}}; if(VuxMck("fread",&vmckrt,vmckds,4,"",1598,0,20)) return *(size_t*)vmckrt;{
    return fread(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fread(void*,size_t,size_t,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fgetc(FILE*))
#ifdef VUser_vmck_fgetc
#undef fgetc
static int __cdecl vmck_fgetc(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("fgetc",&vmckrt,vmckds,1,"",1406,0,20)) return *(int*)vmckrt;{
    return fgetc(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fgetc(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__mingw_vsnprintf(char*,size_t,const char*,char*))
#ifdef VUser_vmck___mingw_vsnprintf
#undef __mingw_vsnprintf
static int __cdecl vmck___mingw_vsnprintf(char* arg_1,size_t arg_2,const char* arg_3,char* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"char*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3},{4,"char*","arg_4",(const void*)&arg_4}}; if(VuxMck("__mingw_vsnprintf",&vmckrt,vmckds,4,"",1583,0,20)) return *(int*)vmckrt;{
    return __mingw_vsnprintf(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__mingw_vsnprintf(char*,size_t,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/tempnam(const char*,const char*))
#ifdef VUser_vmck_tempnam
#undef tempnam
static char* __cdecl vmck_tempnam(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("tempnam",&vmckrt,vmckds,2,"",1497,0,20)) return *(char**)vmckrt;{
    return tempnam(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/tempnam(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__msvcrt_fprintf(FILE*,const char*,...))
#ifdef VUser_vmck___msvcrt_fprintf
#undef __msvcrt_fprintf
static int __cdecl vmck___msvcrt_fprintf(FILE* arg_1,const char* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("__msvcrt_fprintf",&vmckrt,vmckds,2,"",1584,0,20)) return *(int*)vmckrt;{
    return __msvcrt_fprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__msvcrt_fprintf(FILE*,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/_fgetwchar())
#ifdef VUser_vmck__fgetwchar
#undef _fgetwchar
static wint_t __cdecl vmck__fgetwchar()
{void* vmckrt=0; if(VuxMck("_fgetwchar",&vmckrt,0,0,"",1458,0,20)) return *(wint_t*)vmckrt;{
    return _fgetwchar();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fgetwchar())

//$$VUNIT(BEGIN,VMOCKDEFINE/fgets(char*,int,FILE*))
#ifdef VUser_vmck_fgets
#undef fgets
static char* __cdecl vmck_fgets(char* arg_1,int arg_2,FILE* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"int","arg_2",(const void*)&arg_2},{3,"FILE*","arg_3",(const void*)&arg_3}}; if(VuxMck("fgets",&vmckrt,vmckds,3,"",1409,0,20)) return *(char**)vmckrt;{
    return fgets(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fgets(char*,int,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fputwc(wchar_t,FILE*))
#ifdef VUser_vmck_fputwc
#undef fputwc
static wint_t __cdecl vmck_fputwc(wchar_t arg_1,FILE* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t","arg_1",(const void*)&arg_1},{2,"FILE*","arg_2",(const void*)&arg_2}}; if(VuxMck("fputwc",&vmckrt,vmckds,2,"",1459,0,20)) return *(wint_t*)vmckrt;{
    return fputwc(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fputwc(wchar_t,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/getchar())
#ifdef VUser_vmck_getchar
#undef getchar
static int __cdecl vmck_getchar()
{void* vmckrt=0; if(VuxMck("getchar",&vmckrt,0,0,"",1425,0,20)) return *(int*)vmckrt;{
    return getchar();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/getchar())

//$$VUNIT(BEGIN,VMOCKDEFINE/freopen(const char*,const char*,FILE*))
#ifdef VUser_vmck_freopen
#undef freopen
static FILE* __cdecl vmck_freopen(const char* arg_1,const char* arg_2,FILE* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"FILE*","arg_3",(const void*)&arg_3}}; if(VuxMck("freopen",&vmckrt,vmckds,3,"",1418,0,20)) return *(FILE**)vmckrt;{
    return freopen(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/freopen(const char*,const char*,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_vsnwprintf(wchar_t*,size_t,const wchar_t*,char*))
#ifdef VUser_vmck__vsnwprintf
#undef _vsnwprintf
static int __cdecl vmck__vsnwprintf(wchar_t* arg_1,size_t arg_2,const wchar_t* arg_3,char* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"wchar_t*","arg_3",(const void*)&arg_3},{4,"char*","arg_4",(const void*)&arg_4}}; if(VuxMck("_vsnwprintf",&vmckrt,vmckds,4,"",1605,0,20)) return *(int*)vmckrt;{
    return _vsnwprintf(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_vsnwprintf(wchar_t*,size_t,const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fwprintf(FILE*,const wchar_t*,...))
#ifdef VUser_vmck_fwprintf
#undef fwprintf
static int __cdecl vmck_fwprintf(FILE* arg_1,const wchar_t* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("fwprintf",&vmckrt,vmckds,2,"",1470,0,20)) return *(int*)vmckrt;{
    return fwprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fwprintf(FILE*,const wchar_t*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/__msvcrt_sprintf(char*,const char*,...))
#ifdef VUser_vmck___msvcrt_sprintf
#undef __msvcrt_sprintf
static int __cdecl vmck___msvcrt_sprintf(char* arg_1,const char* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("__msvcrt_sprintf",&vmckrt,vmckds,2,"",1586,0,20)) return *(int*)vmckrt;{
    return __msvcrt_sprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__msvcrt_sprintf(char*,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/fopen(const char*,const char*))
#ifdef VUser_vmck_fopen
#undef fopen
static FILE* __cdecl vmck_fopen(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("fopen",&vmckrt,vmckds,2,"",1412,0,20)) return *(FILE**)vmckrt;{
    return fopen(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fopen(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_vscwprintf(const wchar_t*,char*))
#ifdef VUser_vmck__vscwprintf
#undef _vscwprintf
static int __cdecl vmck__vscwprintf(const wchar_t* arg_1,char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("_vscwprintf",&vmckrt,vmckds,2,"",1606,0,20)) return *(int*)vmckrt;{
    return _vscwprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_vscwprintf(const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__msvcrt_printf(const char*,...))
#ifdef VUser_vmck___msvcrt_printf
#undef __msvcrt_printf
static int __cdecl vmck___msvcrt_printf(const char* arg_1,... )
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("__msvcrt_printf",&vmckrt,vmckds,1,"",1585,0,20)) return *(int*)vmckrt;{
    return __msvcrt_printf(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__msvcrt_printf(const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/fgetwchar())
#ifdef VUser_vmck_fgetwchar
#undef fgetwchar
static wint_t __cdecl vmck_fgetwchar()
{void* vmckrt=0; if(VuxMck("fgetwchar",&vmckrt,0,0,"",1613,0,20)) return *(wint_t*)vmckrt;{
    return fgetwchar();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fgetwchar())

//$$VUNIT(BEGIN,VMOCKDEFINE/perror(const char*))
#ifdef VUser_vmck_perror
#undef perror
static void __cdecl vmck_perror(const char* arg_1)
{VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(!VuxMck("perror",0,vmckds,1,"",1369,0,20)) {
    perror(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/perror(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fgetwc(FILE*))
#ifdef VUser_vmck_fgetwc
#undef fgetwc
static wint_t __cdecl vmck_fgetwc(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("fgetwc",&vmckrt,vmckds,1,"",1457,0,20)) return *(wint_t*)vmckrt;{
    return fgetwc(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fgetwc(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/rename(const char*,const char*))
#ifdef VUser_vmck_rename
#undef rename
static int __cdecl vmck_rename(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("rename",&vmckrt,vmckds,2,"",1437,0,20)) return *(int*)vmckrt;{
    return rename(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/rename(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_fdopen(int,const char*))
#ifdef VUser_vmck__fdopen
#undef _fdopen
static FILE* __cdecl vmck__fdopen(int arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("_fdopen",&vmckrt,vmckds,2,"",1402,0,20)) return *(FILE**)vmckrt;{
    return _fdopen(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fdopen(int,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_snprintf(char*,size_t,const char*,...))
#ifdef VUser_vmck__snprintf
#undef _snprintf
static int __cdecl vmck__snprintf(char* arg_1,size_t arg_2,const char* arg_3,... )
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("_snprintf",&vmckrt,vmckds,3,"",1590,0,20)) return *(int*)vmckrt;{
    return _snprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_snprintf(char*,size_t,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/unlink(const char*))
#ifdef VUser_vmck_unlink
#undef unlink
static int __cdecl vmck_unlink(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("unlink",&vmckrt,vmckds,1,"",1498,0,20)) return *(int*)vmckrt;{
    return unlink(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/unlink(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_tempnam(const char*,const char*))
#ifdef VUser_vmck__tempnam
#undef _tempnam
static char* __cdecl vmck__tempnam(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("_tempnam",&vmckrt,vmckds,2,"",1447,0,20)) return *(char**)vmckrt;{
    return _tempnam(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_tempnam(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__mingw_printf(const char*,...))
#ifdef VUser_vmck___mingw_printf
#undef __mingw_printf
static int __cdecl vmck___mingw_printf(const char* arg_1,... )
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("__mingw_printf",&vmckrt,vmckds,1,"",1577,0,20)) return *(int*)vmckrt;{
    return __mingw_printf(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__mingw_printf(const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/__mingw_vfprintf(FILE*,const char*,char*))
#ifdef VUser_vmck___mingw_vfprintf
#undef __mingw_vfprintf
static int __cdecl vmck___mingw_vfprintf(FILE* arg_1,const char* arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("__mingw_vfprintf",&vmckrt,vmckds,3,"",1580,0,20)) return *(int*)vmckrt;{
    return __mingw_vfprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__mingw_vfprintf(FILE*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fflush(FILE*))
#ifdef VUser_vmck_fflush
#undef fflush
static int __cdecl vmck_fflush(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("fflush",&vmckrt,vmckds,1,"",1405,0,20)) return *(int*)vmckrt;{
    return fflush(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fflush(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_vsnprintf(char*,size_t,const char*,char*))
#ifdef VUser_vmck__vsnprintf
#undef _vsnprintf
static int __cdecl vmck__vsnprintf(char* arg_1,size_t arg_2,const char* arg_3,char* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"char*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3},{4,"char*","arg_4",(const void*)&arg_4}}; if(VuxMck("_vsnprintf",&vmckrt,vmckds,4,"",1591,0,20)) return *(int*)vmckrt;{
    return _vsnprintf(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_vsnprintf(char*,size_t,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/ungetwc(wchar_t,FILE*))
#ifdef VUser_vmck_ungetwc
#undef ungetwc
static wint_t __cdecl vmck_ungetwc(wchar_t arg_1,FILE* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t","arg_1",(const void*)&arg_1},{2,"FILE*","arg_2",(const void*)&arg_2}}; if(VuxMck("ungetwc",&vmckrt,vmckds,2,"",1465,0,20)) return *(wint_t*)vmckrt;{
    return ungetwc(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/ungetwc(wchar_t,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/vfwprintf(FILE*,const wchar_t*,char*))
#ifdef VUser_vmck_vfwprintf
#undef vfwprintf
static int __cdecl vmck_vfwprintf(FILE* arg_1,const wchar_t* arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("vfwprintf",&vmckrt,vmckds,3,"",1474,0,20)) return *(int*)vmckrt;{
    return vfwprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vfwprintf(FILE*,const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fputchar(int))
#ifdef VUser_vmck_fputchar
#undef fputchar
static int __cdecl vmck_fputchar(int arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","arg_1",(const void*)&arg_1}}; if(VuxMck("fputchar",&vmckrt,vmckds,1,"",1493,0,20)) return *(int*)vmckrt;{
    return fputchar(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fputchar(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/_flushall())
#ifdef VUser_vmck__flushall
#undef _flushall
static int __cdecl vmck__flushall()
{void* vmckrt=0; if(VuxMck("_flushall",&vmckrt,0,0,"",1411,0,20)) return *(int*)vmckrt;{
    return _flushall();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_flushall())

//$$VUNIT(BEGIN,VMOCKDEFINE/_fputchar(int))
#ifdef VUser_vmck__fputchar
#undef _fputchar
static int __cdecl vmck__fputchar(int arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","arg_1",(const void*)&arg_1}}; if(VuxMck("_fputchar",&vmckrt,vmckds,1,"",1415,0,20)) return *(int*)vmckrt;{
    return _fputchar(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fputchar(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/setbuf(FILE*,char*))
#ifdef VUser_vmck_setbuf
#undef setbuf
static void __cdecl vmck_setbuf(FILE* arg_1,char* arg_2)
{VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(!VuxMck("setbuf",0,vmckds,2,"",1441,0,20)) {
    setbuf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/setbuf(FILE*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__mingw_vsprintf(char*,const char*,char*))
#ifdef VUser_vmck___mingw_vsprintf
#undef __mingw_vsprintf
static int __cdecl vmck___mingw_vsprintf(char* arg_1,const char* arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("__mingw_vsprintf",&vmckrt,vmckds,3,"",1582,0,20)) return *(int*)vmckrt;{
    return __mingw_vsprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__mingw_vsprintf(char*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/rewind(FILE*))
#ifdef VUser_vmck_rewind
#undef rewind
static void __cdecl vmck_rewind(FILE* arg_1)
{VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(!VuxMck("rewind",0,vmckds,1,"",1438,0,20)) {
    rewind(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/rewind(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/vsnwprintf(wchar_t*,size_t,const wchar_t*,char*))
#ifdef VUser_vmck_vsnwprintf
#undef vsnwprintf
static int __cdecl vmck_vsnwprintf(wchar_t* s,size_t n,const wchar_t* format,char* arg)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"wchar_t*","s",(const void*)&s},{2,"size_t","n",(const void*)&n},{3,"wchar_t*","format",(const void*)&format},{4,"char*","arg",(const void*)&arg}}; if(VuxMck("vsnwprintf",&vmckrt,vmckds,4,"",1608,0,20)) return *(int*)vmckrt;{
    return vsnwprintf(s,n,format,arg);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vsnwprintf(wchar_t*,size_t,const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/vsnprintf(char*,size_t,const char*,char*))
#ifdef VUser_vmck_vsnprintf
#undef vsnprintf
static int __cdecl vmck_vsnprintf(char* arg_1,size_t arg_2,const char* arg_3,char* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"char*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3},{4,"char*","arg_4",(const void*)&arg_4}}; if(VuxMck("vsnprintf",&vmckrt,vmckds,4,"",1594,0,20)) return *(int*)vmckrt;{
    return vsnprintf(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vsnprintf(char*,size_t,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/ferror(FILE*))
#ifdef VUser_vmck_ferror
#undef ferror
static int __cdecl vmck_ferror(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("ferror",&vmckrt,vmckds,1,"",1404,0,20)) return *(int*)vmckrt;{
    return ferror(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/ferror(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fseek(FILE*,long,int))
#ifdef VUser_vmck_fseek
#undef fseek
static int __cdecl vmck_fseek(FILE* arg_1,long arg_2,int arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"long","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3}}; if(VuxMck("fseek",&vmckrt,vmckds,3,"",1421,0,20)) return *(int*)vmckrt;{
    return fseek(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fseek(FILE*,long,int))

//$$VUNIT(BEGIN,VMOCKDEFINE/__mingw_vprintf(const char*,char*))
#ifdef VUser_vmck___mingw_vprintf
#undef __mingw_vprintf
static int __cdecl vmck___mingw_vprintf(const char* arg_1,char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("__mingw_vprintf",&vmckrt,vmckds,2,"",1581,0,20)) return *(int*)vmckrt;{
    return __mingw_vprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__mingw_vprintf(const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/vwscanf(const wchar_t*,char*))
#ifdef VUser_vmck_vwscanf
#undef vwscanf
static int __cdecl vmck_vwscanf(const wchar_t* __restrict__,char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","__restrict__",(const void*)&__restrict__},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("vwscanf",&vmckrt,vmckds,2,"",1609,0,20)) return *(int*)vmckrt;{
    return vwscanf(__restrict__,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vwscanf(const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wprintf(const wchar_t*,...))
#ifdef VUser_vmck_wprintf
#undef wprintf
static int __cdecl vmck_wprintf(const wchar_t* arg_1,... )
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("wprintf",&vmckrt,vmckds,1,"",1471,0,20)) return *(int*)vmckrt;{
    return wprintf(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wprintf(const wchar_t*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/remove(const char*))
#ifdef VUser_vmck_remove
#undef remove
static int __cdecl vmck_remove(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("remove",&vmckrt,vmckds,1,"",1436,0,20)) return *(int*)vmckrt;{
    return remove(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/remove(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/vwprintf(const wchar_t*,char*))
#ifdef VUser_vmck_vwprintf
#undef vwprintf
static int __cdecl vmck_vwprintf(const wchar_t* arg_1,char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("vwprintf",&vmckrt,vmckds,2,"",1475,0,20)) return *(int*)vmckrt;{
    return vwprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vwprintf(const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/vprintf(const char*,char*))
#ifdef VUser_vmck_vprintf
#undef vprintf
static int __cdecl vmck_vprintf(const char* arg_1,char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("vprintf",&vmckrt,vmckds,2,"",1453,0,20)) return *(int*)vmckrt;{
    return vprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vprintf(const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/feof(FILE*))
#ifdef VUser_vmck_feof
#undef feof
static int __cdecl vmck_feof(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("feof",&vmckrt,vmckds,1,"",1403,0,20)) return *(int*)vmckrt;{
    return feof(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/feof(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fwrite(const void*,size_t,size_t,FILE*))
#ifdef VUser_vmck_fwrite
#undef fwrite
static size_t __cdecl vmck_fwrite(const void* arg_1,size_t arg_2,size_t arg_3,FILE* arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"void*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"size_t","arg_3",(const void*)&arg_3},{4,"FILE*","arg_4",(const void*)&arg_4}}; if(VuxMck("fwrite",&vmckrt,vmckds,4,"",1599,0,20)) return *(size_t*)vmckrt;{
    return fwrite(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fwrite(const void*,size_t,size_t,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_unlink(const char*))
#ifdef VUser_vmck__unlink
#undef _unlink
static int __cdecl vmck__unlink(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("_unlink",&vmckrt,vmckds,1,"",1451,0,20)) return *(int*)vmckrt;{
    return _unlink(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_unlink(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/swprintf(wchar_t*,const wchar_t*,...))
#ifdef VUser_vmck_swprintf
#undef swprintf
static int __cdecl vmck_swprintf(wchar_t* arg_1,const wchar_t* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("swprintf",&vmckrt,vmckds,2,"",1473,0,20)) return *(int*)vmckrt;{
    return swprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/swprintf(wchar_t*,const wchar_t*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/setvbuf(FILE*,char*,int,size_t))
#ifdef VUser_vmck_setvbuf
#undef setvbuf
static int __cdecl vmck_setvbuf(FILE* arg_1,char* arg_2,int arg_3,size_t arg_4)
{void* vmckrt=0; VMCKDS vmckds[4]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"int","arg_3",(const void*)&arg_3},{4,"size_t","arg_4",(const void*)&arg_4}}; if(VuxMck("setvbuf",&vmckrt,vmckds,4,"",1575,0,20)) return *(int*)vmckrt;{
    return setvbuf(arg_1,arg_2,arg_3,arg_4);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/setvbuf(FILE*,char*,int,size_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_filbuf(FILE*))
#ifdef VUser_vmck__filbuf
#undef _filbuf
static int __cdecl vmck__filbuf(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("_filbuf",&vmckrt,vmckds,1,"",1396,0,20)) return *(int*)vmckrt;{
    return _filbuf(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_filbuf(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__mingw_fprintf(FILE*,const char*,...))
#ifdef VUser_vmck___mingw_fprintf
#undef __mingw_fprintf
static int __cdecl vmck___mingw_fprintf(FILE* arg_1,const char* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("__mingw_fprintf",&vmckrt,vmckds,2,"",1576,0,20)) return *(int*)vmckrt;{
    return __mingw_fprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__mingw_fprintf(FILE*,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/vfscanf(FILE*,const char*,char*))
#ifdef VUser_vmck_vfscanf
#undef vfscanf
static int __cdecl vmck_vfscanf(FILE* __restrict__,const char* __restrict__,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"FILE*","__restrict__",(const void*)&__restrict__},{2,"char*","__restrict__",(const void*)&__restrict__},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("vfscanf",&vmckrt,vmckds,3,"",1596,0,20)) return *(int*)vmckrt;{
    return vfscanf(__restrict__,__restrict__,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vfscanf(FILE*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/putchar(int))
#ifdef VUser_vmck_putchar
#undef putchar
static int __cdecl vmck_putchar(int __c)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","__c",(const void*)&__c}}; if(VuxMck("putchar",&vmckrt,vmckds,1,"",1433,0,20)) return *(int*)vmckrt;{
    return putchar(__c);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/putchar(int))

//$$VUNIT(BEGIN,VMOCKDEFINE/fwscanf(FILE*,const wchar_t*,...))
#ifdef VUser_vmck_fwscanf
#undef fwscanf
static int __cdecl vmck_fwscanf(FILE* arg_1,const wchar_t* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("fwscanf",&vmckrt,vmckds,2,"",1478,0,20)) return *(int*)vmckrt;{
    return fwscanf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fwscanf(FILE*,const wchar_t*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/_fcloseall())
#ifdef VUser_vmck__fcloseall
#undef _fcloseall
static int __cdecl vmck__fcloseall()
{void* vmckrt=0; if(VuxMck("_fcloseall",&vmckrt,0,0,"",1401,0,20)) return *(int*)vmckrt;{
    return _fcloseall();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fcloseall())

//$$VUNIT(BEGIN,VMOCKDEFINE/vfwscanf(FILE*,const wchar_t*,char*))
#ifdef VUser_vmck_vfwscanf
#undef vfwscanf
static int __cdecl vmck_vfwscanf(FILE* __restrict__,const wchar_t* __restrict__,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"FILE*","__restrict__",(const void*)&__restrict__},{2,"wchar_t*","__restrict__",(const void*)&__restrict__},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("vfwscanf",&vmckrt,vmckds,3,"",1610,0,20)) return *(int*)vmckrt;{
    return vfwscanf(__restrict__,__restrict__,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vfwscanf(FILE*,const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/_snwprintf(wchar_t*,size_t,const wchar_t*,...))
#ifdef VUser_vmck__snwprintf
#undef _snwprintf
static int __cdecl vmck__snwprintf(wchar_t* arg_1,size_t arg_2,const wchar_t* arg_3,... )
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"size_t","arg_2",(const void*)&arg_2},{3,"wchar_t*","arg_3",(const void*)&arg_3}}; if(VuxMck("_snwprintf",&vmckrt,vmckds,3,"",1604,0,20)) return *(int*)vmckrt;{
    return _snwprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_snwprintf(wchar_t*,size_t,const wchar_t*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/_putw(int,FILE*))
#ifdef VUser_vmck__putw
#undef _putw
static int __cdecl vmck__putw(int arg_1,FILE* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg_1",(const void*)&arg_1},{2,"FILE*","arg_2",(const void*)&arg_2}}; if(VuxMck("_putw",&vmckrt,vmckds,2,"",1435,0,20)) return *(int*)vmckrt;{
    return _putw(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_putw(int,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fprintf(FILE*,const char*,...))
#ifdef VUser_vmck_fprintf
#undef fprintf
static int __cdecl vmck_fprintf(FILE* arg_1,const char* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("fprintf",&vmckrt,vmckds,2,"",1413,0,20)) return *(int*)vmckrt;{
    return fprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fprintf(FILE*,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/tmpfile())
#ifdef VUser_vmck_tmpfile
#undef tmpfile
static FILE* __cdecl vmck_tmpfile()
{void* vmckrt=0; if(VuxMck("tmpfile",&vmckrt,0,0,"",1448,0,20)) return *(FILE**)vmckrt;{
    return tmpfile();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/tmpfile())

//$$VUNIT(BEGIN,VMOCKDEFINE/vsscanf(const char*,const char*,char*))
#ifdef VUser_vmck_vsscanf
#undef vsscanf
static int __cdecl vmck_vsscanf(const char* __restrict__,const char* __restrict__,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","__restrict__",(const void*)&__restrict__},{2,"char*","__restrict__",(const void*)&__restrict__},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("vsscanf",&vmckrt,vmckds,3,"",1597,0,20)) return *(int*)vmckrt;{
    return vsscanf(__restrict__,__restrict__,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vsscanf(const char*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fgetpos(FILE*,fpos_t*))
#ifdef VUser_vmck_fgetpos
#undef fgetpos
static int __cdecl vmck_fgetpos(FILE* arg_1,fpos_t* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"fpos_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("fgetpos",&vmckrt,vmckds,2,"",1600,0,20)) return *(int*)vmckrt;{
    return fgetpos(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fgetpos(FILE*,fpos_t*))

//$$VUNIT(BEGIN,VMOCKDEFINE/__mingw_sprintf(char*,const char*,...))
#ifdef VUser_vmck___mingw_sprintf
#undef __mingw_sprintf
static int __cdecl vmck___mingw_sprintf(char* arg_1,const char* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("__mingw_sprintf",&vmckrt,vmckds,2,"",1578,0,20)) return *(int*)vmckrt;{
    return __mingw_sprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/__mingw_sprintf(char*,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/vfprintf(FILE*,const char*,char*))
#ifdef VUser_vmck_vfprintf
#undef vfprintf
static int __cdecl vmck_vfprintf(FILE* arg_1,const char* arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"FILE*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("vfprintf",&vmckrt,vmckds,3,"",1452,0,20)) return *(int*)vmckrt;{
    return vfprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vfprintf(FILE*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/swscanf(const wchar_t*,const wchar_t*,...))
#ifdef VUser_vmck_swscanf
#undef swscanf
static int __cdecl vmck_swscanf(const wchar_t* arg_1,const wchar_t* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2}}; if(VuxMck("swscanf",&vmckrt,vmckds,2,"",1479,0,20)) return *(int*)vmckrt;{
    return swscanf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/swscanf(const wchar_t*,const wchar_t*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/rmtmp())
#ifdef VUser_vmck_rmtmp
#undef rmtmp
static int __cdecl vmck_rmtmp()
{void* vmckrt=0; if(VuxMck("rmtmp",&vmckrt,0,0,"",1496,0,20)) return *(int*)vmckrt;{
    return rmtmp();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/rmtmp())

//$$VUNIT(BEGIN,VMOCKDEFINE/vswscanf(const wchar_t*,const wchar_t*,char*))
#ifdef VUser_vmck_vswscanf
#undef vswscanf
static int __cdecl vmck_vswscanf(const wchar_t* __restrict__,const wchar_t* __restrict__,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","__restrict__",(const void*)&__restrict__},{2,"wchar_t*","__restrict__",(const void*)&__restrict__},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("vswscanf",&vmckrt,vmckds,3,"",1611,0,20)) return *(int*)vmckrt;{
    return vswscanf(__restrict__,__restrict__,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vswscanf(const wchar_t*,const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/pclose(FILE*))
#ifdef VUser_vmck_pclose
#undef pclose
static int __cdecl vmck_pclose(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("pclose",&vmckrt,vmckds,1,"",1603,0,20)) return *(int*)vmckrt;{
    return pclose(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/pclose(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/sprintf(char*,const char*,...))
#ifdef VUser_vmck_sprintf
#undef sprintf
static int __cdecl vmck_sprintf(char* arg_1,const char* arg_2,... )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("sprintf",&vmckrt,vmckds,2,"",1445,0,20)) return *(int*)vmckrt;{
    return sprintf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/sprintf(char*,const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/popen(const char*,const char*))
#ifdef VUser_vmck_popen
#undef popen
static FILE* __cdecl vmck_popen(const char* arg_1,const char* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2}}; if(VuxMck("popen",&vmckrt,vmckds,2,"",1602,0,20)) return *(FILE**)vmckrt;{
    return popen(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/popen(const char*,const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/snwprintf(wchar_t*,size_t,const wchar_t*,...))
#ifdef VUser_vmck_snwprintf
#undef snwprintf
static int __cdecl vmck_snwprintf(wchar_t* s,size_t n,const wchar_t* format,... )
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","s",(const void*)&s},{2,"size_t","n",(const void*)&n},{3,"wchar_t*","format",(const void*)&format}}; if(VuxMck("snwprintf",&vmckrt,vmckds,3,"",1607,0,20)) return *(int*)vmckrt;{
    return snwprintf(s,n,format);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/snwprintf(wchar_t*,size_t,const wchar_t*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/vsprintf(char*,const char*,char*))
#ifdef VUser_vmck_vsprintf
#undef vsprintf
static int __cdecl vmck_vsprintf(char* arg_1,const char* arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"char*","arg_1",(const void*)&arg_1},{2,"char*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("vsprintf",&vmckrt,vmckds,3,"",1455,0,20)) return *(int*)vmckrt;{
    return vsprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vsprintf(char*,const char*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/vswprintf(wchar_t*,const wchar_t*,char*))
#ifdef VUser_vmck_vswprintf
#undef vswprintf
static int __cdecl vmck_vswprintf(wchar_t* arg_1,const wchar_t* arg_2,char* arg_3)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"wchar_t*","arg_1",(const void*)&arg_1},{2,"wchar_t*","arg_2",(const void*)&arg_2},{3,"char*","arg_3",(const void*)&arg_3}}; if(VuxMck("vswprintf",&vmckrt,vmckds,3,"",1477,0,20)) return *(int*)vmckrt;{
    return vswprintf(arg_1,arg_2,arg_3);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/vswprintf(wchar_t*,const wchar_t*,char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/putc(int,FILE*))
#ifdef VUser_vmck_putc
#undef putc
static int __cdecl vmck_putc(int __c,FILE* __F)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","__c",(const void*)&__c},{2,"FILE*","__F",(const void*)&__F}}; if(VuxMck("putc",&vmckrt,vmckds,2,"",1432,0,20)) return *(int*)vmckrt;{
    return putc(__c,__F);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/putc(int,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/tmpnam(char*))
#ifdef VUser_vmck_tmpnam
#undef tmpnam
static char* __cdecl vmck_tmpnam(char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("tmpnam",&vmckrt,vmckds,1,"",1449,0,20)) return *(char**)vmckrt;{
    return tmpnam(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/tmpnam(char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fputwchar(wint_t))
#ifdef VUser_vmck_fputwchar
#undef fputwchar
static wint_t __cdecl vmck_fputwchar(wint_t arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wint_t","arg_1",(const void*)&arg_1}}; if(VuxMck("fputwchar",&vmckrt,vmckds,1,"",1614,0,20)) return *(wint_t*)vmckrt;{
    return fputwchar(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fputwchar(wint_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/puts(const char*))
#ifdef VUser_vmck_puts
#undef puts
static int __cdecl vmck_puts(const char* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("puts",&vmckrt,vmckds,1,"",1434,0,20)) return *(int*)vmckrt;{
    return puts(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/puts(const char*))

//$$VUNIT(BEGIN,VMOCKDEFINE/putw(int,FILE*))
#ifdef VUser_vmck_putw
#undef putw
static int __cdecl vmck_putw(int arg_1,FILE* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg_1",(const void*)&arg_1},{2,"FILE*","arg_2",(const void*)&arg_2}}; if(VuxMck("putw",&vmckrt,vmckds,2,"",1495,0,20)) return *(int*)vmckrt;{
    return putw(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/putw(int,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/fgetchar())
#ifdef VUser_vmck_fgetchar
#undef fgetchar
static int __cdecl vmck_fgetchar()
{void* vmckrt=0; if(VuxMck("fgetchar",&vmckrt,0,0,"",1490,0,20)) return *(int*)vmckrt;{
    return fgetchar();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/fgetchar())

//$$VUNIT(BEGIN,VMOCKDEFINE/_getw(FILE*))
#ifdef VUser_vmck__getw
#undef _getw
static int __cdecl vmck__getw(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("_getw",&vmckrt,vmckds,1,"",1428,0,20)) return *(int*)vmckrt;{
    return _getw(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_getw(FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/wscanf(const wchar_t*,...))
#ifdef VUser_vmck_wscanf
#undef wscanf
static int __cdecl vmck_wscanf(const wchar_t* arg_1,... )
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wchar_t*","arg_1",(const void*)&arg_1}}; if(VuxMck("wscanf",&vmckrt,vmckds,1,"",1480,0,20)) return *(int*)vmckrt;{
    return wscanf(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/wscanf(const wchar_t*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/_rmtmp())
#ifdef VUser_vmck__rmtmp
#undef _rmtmp
static int __cdecl vmck__rmtmp()
{void* vmckrt=0; if(VuxMck("_rmtmp",&vmckrt,0,0,"",1439,0,20)) return *(int*)vmckrt;{
    return _rmtmp();}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_rmtmp())

//$$VUNIT(BEGIN,VMOCKDEFINE/_fputwchar(wint_t))
#ifdef VUser_vmck__fputwchar
#undef _fputwchar
static wint_t __cdecl vmck__fputwchar(wint_t arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wint_t","arg_1",(const void*)&arg_1}}; if(VuxMck("_fputwchar",&vmckrt,vmckds,1,"",1612,0,20)) return *(wint_t*)vmckrt;{
    return _fputwchar(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_fputwchar(wint_t))

//$$VUNIT(BEGIN,VMOCKDEFINE/_flsbuf(int,FILE*))
#ifdef VUser_vmck__flsbuf
#undef _flsbuf
static int __cdecl vmck__flsbuf(int arg_1,FILE* arg_2)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","arg_1",(const void*)&arg_1},{2,"FILE*","arg_2",(const void*)&arg_2}}; if(VuxMck("_flsbuf",&vmckrt,vmckds,2,"",1397,0,20)) return *(int*)vmckrt;{
    return _flsbuf(arg_1,arg_2);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/_flsbuf(int,FILE*))

//$$VUNIT(BEGIN,VMOCKDEFINE/printf(const char*,...))
#ifdef VUser_vmck_printf
#undef printf
static int __cdecl vmck_printf(const char* arg_1,... )
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","arg_1",(const void*)&arg_1}}; if(VuxMck("printf",&vmckrt,vmckds,1,"",1431,0,20)) return *(int*)vmckrt;{
    return printf(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/printf(const char*,...))

//$$VUNIT(BEGIN,VMOCKDEFINE/ftell(FILE*))
#ifdef VUser_vmck_ftell
#undef ftell
static long __cdecl vmck_ftell(FILE* arg_1)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"FILE*","arg_1",(const void*)&arg_1}}; if(VuxMck("ftell",&vmckrt,vmckds,1,"",1422,0,20)) return *(long*)vmckrt;{
    return ftell(arg_1);}}
#endif
//$$VUNIT(END,VMOCKDEFINE/ftell(FILE*))

//$$VUNIT(BEGIN,VMOCKADDGLOBAL)
//$$VUNIT(END,VMOCKADDGLOBAL)

#include "_mingw.h"
#include "stddef.h"
#include "stdarg.h"

#endif