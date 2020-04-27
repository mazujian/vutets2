
//VuxInter/Demo/_4T_DataBasic.cpp/_11_CallScript_282e8ba5.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_11_CallScript(MYSDATA*))
#ifdef _VUDEBUG
static int _11_CallScript_vpls_(MYSDATA* pMyData){ VuxDbgBrkP()
{
    //应用address1
    if(pMyData->ptr == &gSData)
    {
        return pMyData->ptr->a;
    }
    
    //应用ptrcpy
    if(pMyData->ptr == gpSData)
    {
        return pMyData->ptr->a;
    } 
    
    //应用address
    if(pMyData->pptr == &gpSData)
    {
        return (*pMyData->pptr)->a;
    }

    return 0;
}}
#else
static int _11_CallScript_vpls_(MYSDATA* pMyData){__VUFNINFO__("_11_CallScript","int",0);VuxDbp(0,0,7);
{
    //应用address1
    if((VUXRCS0(1,1)&&(pMyData->ptr == &gSData)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,2);        {int __vurtv__= pMyData->ptr->a;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
    
    //应用ptrcpy
    if((VUXRCS0(2,3)&&(pMyData->ptr == gpSData)&&VUXRC1(2)))
    {VUXRBR(4);{
VUXRB(2);VUXRLNF(2,4);        {int __vurtv__= pMyData->ptr->a;VUXFRTY();}
    }}
VUXRBR_ELSE(5); 
    
    //应用address
    if((VUXRCS0(3,5)&&(pMyData->pptr == &gpSData)&&VUXRC1(3)))
    {VUXRBR(6);{
VUXRB(3);VUXRLNF(3,6);        {int __vurtv__= (*pMyData->pptr)->a;VUXFRTY();}
    }}
VUXRBR_ELSE(7);

VUXRB(4);VUXRLNF(4,7);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int _11_CallScript_vpls(MYSDATA* pMyData)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _11_CallScript(pMyData);}
	else if(VuxIsRepeatRun()) {return _11_CallScript_vpls_(pMyData);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _11_CallScript_vpls_(pMyData) : _11_CallScript(pMyData);
#else
    {int vuxRet = _11_CallScript_vpls_(pMyData);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_11_CallScript(MYSDATA*))
