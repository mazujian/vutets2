
//VuxInter/Demo/_4U_DataBasic.cpp/_07_Pointer2_aa93cdf.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_07_Pointer2(int,int*,int**,int***))
#ifdef _VUDEBUG
static int _07_Pointer2_vpls_(int a,int* pa,int** ppa,int*** pppa){ VuxDbgBrkP()
{
    int result = a;
    if(pa != 0)
    {
        result += *pa;
    }
    
    if(ppa != 0 && *ppa != 0)
    {
        int* pTemp = *ppa;
        result += *pTemp;
    }
    
    if(pppa != 0 && *pppa != 0)
    {
        int** ppTemp = *pppa;
        if(ppTemp != 0 && *ppTemp != 0)
        {
            int* pTemp = *ppTemp;
            result += *pTemp;
        }
    }

    return result;
}}
#else
static int _07_Pointer2_vpls_(int a,int* pa,int** ppa,int*** pppa){__VUFNINFO__("_07_Pointer2","int",0);VuxDbp(0,0,15);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int result = a; VUXLV("int",result,1);
    if((VUXRCS0(1,2)&&(pa != 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        result += *pa;
    }}
VUXRBR_ELSE(3);
    
    if((VUXRCS0(2,4)&&(ppa != 0)&&VUXRC1(2)) &&(VUXRCS0(3,5)&&( *ppa != 0)&&VUXRC1(3)))
    {VUXRBR(4);{
VUXRBV(3);VUXRLNFVB(3,6,2);        int* pTemp = *ppa; VUXLV("int*",pTemp,2);
VUXRLNF(4,7);        result += *pTemp;
    }}
VUXRBR_ELSE(5);
    
    if((VUXRCS0(4,8)&&(pppa != 0)&&VUXRC1(4)) &&(VUXRCS0(5,9)&&( *pppa != 0)&&VUXRC1(5)))
    {VUXRBR(6);{
VUXRBV(4);VUXRLNFVB(5,10,3);        int** ppTemp = *pppa; VUXLV("int**",ppTemp,3);
        if((VUXRCS0(6,11)&&(ppTemp != 0)&&VUXRC1(6)) &&(VUXRCS0(7,12)&&( *ppTemp != 0)&&VUXRC1(7)))
        {VUXRBR(7);{
VUXRBV(5);VUXRLNFVB(6,13,4);            int* pTemp = *ppTemp; VUXLV("int*",pTemp,4);
VUXRLNF(7,14);            result += *pTemp;
        }}
VUXRBR_ELSE(8);
    }}
VUXRBR_ELSE(9);

VUXRB(6);VUXRLNF(8,15);    {int __vurtv__= result;VUXFRTY();}
}}
#endif

static int _07_Pointer2_vpls(int a,int* pa,int** ppa,int*** pppa)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _07_Pointer2(a,pa,ppa,pppa);}
	else if(VuxIsRepeatRun()) {return _07_Pointer2_vpls_(a,pa,ppa,pppa);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _07_Pointer2_vpls_(a,pa,ppa,pppa) : _07_Pointer2(a,pa,ppa,pppa);
#else
    {int vuxRet = _07_Pointer2_vpls_(a,pa,ppa,pppa);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_07_Pointer2(int,int*,int**,int***))
