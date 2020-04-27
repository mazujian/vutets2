
//VuxInter/Demo/autocase.c/ac30_strstr_22b791eb.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac30_strstr(const char*,const char*))
#ifdef _VUDEBUG
static char* ac30_strstr_vpls_(const char* str1,const char* str2){ VuxDbgBrkP()
{
    char* pData = strstr(str1, str2);
    if(pData == 0)
    {
        return pData;
    }
    return pData;
}}
#else
static char* ac30_strstr_vpls_(const char* str1,const char* str2){__VUFNINFO__("ac30_strstr","char*",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    char* pData = strstr(str1, str2); VUXLV("char*",pData,1);
    if((VUXRCS0(1,2)&&(pData == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {char* __vurtv__= pData;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(3);VUXRLNF(3,4);    {char* __vurtv__= pData;VUXFRTY();}
}}
#endif

static char* ac30_strstr_vpls(const char* str1,const char* str2)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac30_strstr(str1,str2);}
	else if(VuxIsRepeatRun()) {return ac30_strstr_vpls_(str1,str2);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? ac30_strstr_vpls_(str1,str2) : ac30_strstr(str1,str2);
#else
    {char* vuxRet = ac30_strstr_vpls_(str1,str2);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac30_strstr(const char*,const char*))
