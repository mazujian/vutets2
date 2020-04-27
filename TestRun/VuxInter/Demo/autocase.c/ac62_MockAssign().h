
//VuxInter/Demo/autocase.c/ac62_MockAssign().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac62_MockAssign())
#ifdef _VUDEBUG
static int ac62_MockAssign_vpls_(){ VuxDbgBrkP()
{
    int key = ss();
    
    if(key == 0)
    {
        return key;
    }
    
    if(key == 1)
    {
        return key;
    }
    
    if(key == 2)
    {
        return key;
    }  
    
    if(key == 3)
    {
        return key;
    }
        
    // key = ss();
    if(ss() == 1)
    {
        return 1;
    }
    
    return -1;
}}
#else
static int ac62_MockAssign_vpls_(){__VUFNINFO__("ac62_MockAssign","int",0);VuxDbp(0,0,12);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int key = ss(); VUXLV("int",key,1);
    
    if((VUXRCS0(1,2)&&(key == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= key;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
    
    if((VUXRCS0(2,4)&&(key == 1)&&VUXRC1(2)))
    {VUXRBR(4);{
VUXRB(3);VUXRLNF(3,5);        {int __vurtv__= key;VUXFRTY();}
    }}
VUXRBR_ELSE(5);
    
    if((VUXRCS0(3,6)&&(key == 2)&&VUXRC1(3)))
    {VUXRBR(6);{
VUXRB(4);VUXRLNF(4,7);        {int __vurtv__= key;VUXFRTY();}
    }}
VUXRBR_ELSE(7);  
    
    if((VUXRCS0(4,8)&&(key == 3)&&VUXRC1(4)))
    {VUXRBR(8);{
VUXRB(5);VUXRLNF(5,9);        {int __vurtv__= key;VUXFRTY();}
    }}
VUXRBR_ELSE(9);
        
    // key = ss();
    if((VUXRCS0(5,10)&&(ss() == 1)&&VUXRC1(5)))
    {VUXRBR(10);{
VUXRB(6);VUXRLNF(6,11);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(11);
    
VUXRB(7);VUXRLNF(7,12);    {int __vurtv__= -1;VUXFRTY();}
}}
#endif

static int ac62_MockAssign_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac62_MockAssign();}
	else if(VuxIsRepeatRun()) {return ac62_MockAssign_vpls_();}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac62_MockAssign_vpls_() : ac62_MockAssign();
#else
    {int vuxRet = ac62_MockAssign_vpls_();
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac62_MockAssign())
