
//VuxInter/Demo/autocase.c/ac24_strncmp_4bc920f6.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac24_strncmp(const char*,const char*,int))
#ifdef _VUDEBUG
static int ac24_strncmp_vpls_(const char* str1,const char* str2,int n){ VuxDbgBrkP()
{
    int len = strlen(str1);
    int a = strncmp(str1, str2, n);
    if(len < 10)
    {
        if(a > 0)
        {
            return 1;
        }
        else if(a == 0)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
}}
#else
static int ac24_strncmp_vpls_(const char* str1,const char* str2,int n){__VUFNINFO__("ac24_strncmp","int",0);VuxDbp(0,0,8);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int len = strlen(str1); VUXLV("int",len,1);
VUXRLNFVB(2,2,2);    int a = strncmp(str1, str2, n); VUXLV("int",a,2);
    if((VUXRCS0(1,3)&&(len < 10)&&VUXRC1(1)))
    {VUXRBR(2);{
        if((VUXRCS0(2,4)&&(a > 0)&&VUXRC1(2)))
        {VUXRBR(3);{
VUXRB(2);VUXRLNF(3,5);            {int __vurtv__= 1;VUXFRTY();}
        }}
        else if((VUXRCS0(3,6)&&(a == 0)&&VUXRC1(3)))
        {VUXRBR(4);{
VUXRB(3);VUXRLNF(4,7);            {int __vurtv__= 0;VUXFRTY();}
        }}
        else
        {VUXRBR(5);{
VUXRB(4);VUXRLNF(5,8);            {int __vurtv__= -1;VUXFRTY();}
        }}
    }}
VUXRBR_ELSE(6);
}}
#endif

static int ac24_strncmp_vpls(const char* str1,const char* str2,int n)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac24_strncmp(str1,str2,n);}
	else if(VuxIsRepeatRun()) {return ac24_strncmp_vpls_(str1,str2,n);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac24_strncmp_vpls_(str1,str2,n) : ac24_strncmp(str1,str2,n);
#else
    {int vuxRet = ac24_strncmp_vpls_(str1,str2,n);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac24_strncmp(const char*,const char*,int))
