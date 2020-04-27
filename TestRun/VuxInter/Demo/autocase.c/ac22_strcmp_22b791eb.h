
//VuxInter/Demo/autocase.c/ac22_strcmp_22b791eb.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac22_strcmp(const char*,const char*))
#ifdef _VUDEBUG
static int ac22_strcmp_vpls_(const char* str1,const char* str2){ VuxDbgBrkP()
{
    int len = strlen(str1);
    int a = strcmp(str1, str2);
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
static int ac22_strcmp_vpls_(const char* str1,const char* str2){__VUFNINFO__("ac22_strcmp","int",0);VuxDbp(0,0,8);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int len = strlen(str1); VUXLV("int",len,1);
VUXRLNFVB(2,2,2);    int a = strcmp(str1, str2); VUXLV("int",a,2);
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

static int ac22_strcmp_vpls(const char* str1,const char* str2)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac22_strcmp(str1,str2);}
	else if(VuxIsRepeatRun()) {return ac22_strcmp_vpls_(str1,str2);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac22_strcmp_vpls_(str1,str2) : ac22_strcmp(str1,str2);
#else
    {int vuxRet = ac22_strcmp_vpls_(str1,str2);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac22_strcmp(const char*,const char*))
