
//VuxInter/Demo/autocase.c/ac27_strspn_22b791eb.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac27_strspn(const char*,const char*))
#ifdef _VUDEBUG
static int ac27_strspn_vpls_(const char* str1,const char* str2){ VuxDbgBrkP()
{
    size_t len = strspn(str1, str2);
    
    if(len == 5)
    {
        return len;
    }
    else if(len >2)
    {
        return len;
    }
    else if(len != 0)
    {
        return len;
    }
    else
    { 
        return len;
    }
}}
#else
static int ac27_strspn_vpls_(const char* str1,const char* str2){__VUFNINFO__("ac27_strspn","int",0);VuxDbp(0,0,8);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    size_t len = strspn(str1, str2); VUXLV("size_t",len,1);
    
    if((VUXRCS0(1,2)&&(len == 5)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= len;VUXFRTY();}
    }}
    else if((VUXRCS0(2,4)&&(len >2)&&VUXRC1(2)))
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(3,5);        {int __vurtv__= len;VUXFRTY();}
    }}
    else if((VUXRCS0(3,6)&&(len != 0)&&VUXRC1(3)))
    {VUXRBR(4);{
VUXRB(4);VUXRLNF(4,7);        {int __vurtv__= len;VUXFRTY();}
    }}
    else
    {VUXRBR(5);{ 
VUXRB(5);VUXRLNF(5,8);        {int __vurtv__= len;VUXFRTY();}
    }}
}}
#endif

static int ac27_strspn_vpls(const char* str1,const char* str2)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac27_strspn(str1,str2);}
	else if(VuxIsRepeatRun()) {return ac27_strspn_vpls_(str1,str2);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac27_strspn_vpls_(str1,str2) : ac27_strspn(str1,str2);
#else
    {int vuxRet = ac27_strspn_vpls_(str1,str2);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac27_strspn(const char*,const char*))
