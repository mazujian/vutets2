
//VuxInter/Demo/autocase.c/ac11_pow_test_d23b6c4e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac11_pow_test(int,int))
#ifdef _VUDEBUG
static int ac11_pow_test_vpls_(int g,int e){ VuxDbgBrkP()
{
    int result = 0;
  
    myfunc();
    
    if(g == 0)
    {
        result = 0;
    }
    else if(g == 1)
    {
        result = 1;
    }
    else if(e == 0)
    { 
        result = 1;
    }
    else if(e == 1)
    {
        result = g;
    }
    else
    {
        int i;
        for(i=0; i<e; i++)
        {
            result *= g;
        }
    }

    return result;
}}
#else
static int ac11_pow_test_vpls_(int g,int e){VUX_VARIABLE(2)  __VUFNINFO__("ac11_pow_test","int",0);VuxDbp(0,0,16);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int result = 0; VUXLV("int",result,1);
  
VUXRLNF(2,2);    myfunc();
    
    if((VUXRCS0(1,3)&&(g == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(3,4);        result = 0;
    }}
    else if((VUXRCS0(2,5)&&(g == 1)&&VUXRC1(2)))
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(4,6);        result = 1;
    }}
    else if((VUXRCS0(3,7)&&(e == 0)&&VUXRC1(3)))
    {VUXRBR(4);{ 
VUXRB(4);VUXRLNF(5,8);        result = 1;
    }}
    else if((VUXRCS0(4,9)&&(e == 1)&&VUXRC1(4)))
    {VUXRBR(5);{
VUXRB(5);VUXRLNF(6,10);        result = g;
    }}
    else
    {VUXRBR(6);{
VUXRBV(6);VUXRLNFVB(7,11,2);        int i; VUXLV("int",i,2);VUXRBF(7,12);
        for(i=0;(VUXRCS0(5,14)&&( i<e)&&VUXRC1(5));VUXRBF(8,13), i++)
        {VUXRBR_LOOP(2,7,115);{
VUXRB(9);VUXRLNF(10,15);            result *= g;
        }}VUXRBR_OUT(2, 8);

    }}

VUXRB(10);VUXRLNF(11,16);    {int __vurtv__= result;VUXFRTY();}
}}
#endif

static int ac11_pow_test_vpls(int g,int e)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac11_pow_test(g,e);}
	else if(VuxIsRepeatRun()) {return ac11_pow_test_vpls_(g,e);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac11_pow_test_vpls_(g,e) : ac11_pow_test(g,e);
#else
    {int vuxRet = ac11_pow_test_vpls_(g,e);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac11_pow_test(int,int))
