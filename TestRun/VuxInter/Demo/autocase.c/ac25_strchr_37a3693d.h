
//VuxInter/Demo/autocase.c/ac25_strchr_37a3693d.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac25_strchr(const char*,char,const char*))
#ifdef _VUDEBUG
static int ac25_strchr_vpls_(const char* str1,char chr,const char* name){ VuxDbgBrkP()
{
    int xx = 0;
    char* pData = strchr(str1, chr);
    if(pData == 0)
    {
        return -1;
    }
    return 0;
}}
#else
static int ac25_strchr_vpls_(const char* str1,char chr,const char* name){__VUFNINFO__("ac25_strchr","int",0);VuxDbp(0,0,5);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int xx = 0; VUXLV("int",xx,1);
VUXRLNFVB(2,2,2);    char* pData = strchr(str1, chr); VUXLV("char*",pData,2);
    if((VUXRCS0(1,3)&&(pData == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(3,4);        {int __vurtv__= -1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(3);VUXRLNF(4,5);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int ac25_strchr_vpls(const char* str1,char chr,const char* name)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac25_strchr(str1,chr,name);}
	else if(VuxIsRepeatRun()) {return ac25_strchr_vpls_(str1,chr,name);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac25_strchr_vpls_(str1,chr,name) : ac25_strchr(str1,chr,name);
#else
    {int vuxRet = ac25_strchr_vpls_(str1,chr,name);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac25_strchr(const char*,char,const char*))
