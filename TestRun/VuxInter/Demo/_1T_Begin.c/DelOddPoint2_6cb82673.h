
//VuxInter/Demo/_1T_Begin.c/DelOddPoint2_6cb82673.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/DelOddPoint2(unsigned short,int*))
#ifdef _VUDEBUG
static int DelOddPoint2_vpls_(unsigned short nNum,int* Buff){ VuxDbgBrkP()
{
    unsigned short i = 0;
    int nSum = 0;
    int nNum1, nNum2;
    int nAvg = 0;
    IntArrayForm(nNum, Buff);
    IntArrayForm(nNum1, Buff);
    IntArrayForm(nNum2, Buff);
    
    nNum1 = 0;
    nNum2 = MatchSecend();
    
    if(nNum1 < nNum2)
    {
        nNum1 ++;
    }
    
    for(i=2; i<nNum-2; i++)
    {
        nSum = nSum+Buff[i];
    }
    
    
    nAvg = nSum / (nNum-4);
    return nAvg;
}}
#else
static int DelOddPoint2_vpls_(unsigned short nNum,int* Buff){VUX_VARIABLE(2)  __VUFNINFO__("DelOddPoint2","int",0);VuxDbp(0,0,17);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    unsigned short i = 0; VUXLV("unsigned short",i,1);
VUXRLNFVB(2,2,2);    int nSum = 0; VUXLV("int",nSum,2);
VUXRLNFVB(3,3,3);    int nNum1, nNum2; VUXLV("int",nNum1,3); VUXLVS("int",nNum2,4);
VUXRLNFVB(4,4,5);    int nAvg = 0; VUXLV("int",nAvg,5);
VUXRLNF(5,5);    IntArrayForm(nNum, Buff);
VUXRLNF(6,6);    IntArrayForm(nNum1, Buff);
VUXRLNF(7,7);    IntArrayForm(nNum2, Buff);
    
VUXRLNF(8,8);    nNum1 = 0;
VUXRLNF(9,9);    nNum2 = MatchSecend();
    
    if((VUXRCS0(1,10)&&(nNum1 < nNum2)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(10,11);        nNum1 ++;
    }}
VUXRBR_ELSE(3);VUXRBF(3,12);
    
    for(i=2;(VUXRCS0(2,14)&&( i<nNum-2)&&VUXRC1(2));VUXRBF(4,13), i++)
    {VUXRBR_IN(2,4);{
VUXRB(5);VUXRLNF(13,15);        nSum = nSum+Buff[i];
    }}VUXRBR_OUT(2, 5);

    
    
VUXRB(6);VUXRLNF(14,16);    nAvg = nSum / (nNum-4);
VUXRLNF(15,17);    {int __vurtv__= nAvg;VUXFRTY();}
}}
#endif

static int DelOddPoint2_vpls(unsigned short nNum,int* Buff)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return DelOddPoint2(nNum,Buff);}
	else if(VuxIsRepeatRun()) {return DelOddPoint2_vpls_(nNum,Buff);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? DelOddPoint2_vpls_(nNum,Buff) : DelOddPoint2(nNum,Buff);
#else
    {int vuxRet = DelOddPoint2_vpls_(nNum,Buff);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/DelOddPoint2(unsigned short,int*))
