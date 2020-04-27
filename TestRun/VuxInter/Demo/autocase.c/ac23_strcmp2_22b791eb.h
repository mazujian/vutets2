
//VuxInter/Demo/autocase.c/ac23_strcmp2_22b791eb.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac23_strcmp2(const char*,const char*))
#ifdef _VUDEBUG
static int ac23_strcmp2_vpls_(const char* str1,const char* str2){ VuxDbgBrkP()
{
    if(strcmp(str1, str2) == 0)
    {
        return 1;
    }
    return 0;
}}
#else
static int ac23_strcmp2_vpls_(const char* str1,const char* str2){__VUFNINFO__("ac23_strcmp2","int",0);VuxDbp(0,0,3);
{
    if((VUXRCS0(1,1)&&(strcmp(str1, str2) == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,2);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(2);VUXRLNF(2,3);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int ac23_strcmp2_vpls(const char* str1,const char* str2)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac23_strcmp2(str1,str2);}
	else if(VuxIsRepeatRun()) {return ac23_strcmp2_vpls_(str1,str2);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac23_strcmp2_vpls_(str1,str2) : ac23_strcmp2(str1,str2);
#else
    {int vuxRet = ac23_strcmp2_vpls_(str1,str2);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac23_strcmp2(const char*,const char*))
