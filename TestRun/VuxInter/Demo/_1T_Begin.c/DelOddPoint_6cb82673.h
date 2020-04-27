
//VuxInter/Demo/_1T_Begin.c/DelOddPoint_6cb82673.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/DelOddPoint(unsigned short,int*))
#ifdef _VUDEBUG
static int DelOddPoint_vpls_(unsigned short nNum,int* Buff){ VuxDbgBrkP()
{
    unsigned short i = 0;
    int nSum = 0;
    int nAvg = 0;
    IntArrayForm(nNum, Buff);
    for(i=2; i<nNum-2; i++)
    {
        nSum = nSum+Buff[i];
    }
    
    nAvg = nSum / (nNum-4);
    return nAvg;
}}
#else
static int DelOddPoint_vpls_(unsigned short nNum,int* Buff){VUX_VARIABLE(1)  __VUFNINFO__("DelOddPoint","int",0);VuxDbp(0,0,10);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    unsigned short i = 0; VUXLV("unsigned short",i,1);
VUXRLNFVB(2,2,2);    int nSum = 0; VUXLV("int",nSum,2);
VUXRLNFVB(3,3,3);    int nAvg = 0; VUXLV("int",nAvg,3);
VUXRLNF(4,4);    IntArrayForm(nNum, Buff);VUXRBF(2,5);
    for(i=2;(VUXRCS0(1,7)&&( i<nNum-2)&&VUXRC1(1));VUXRBF(3,6), i++)
    {VUXRBR_IN(1,2);{
VUXRB(4);VUXRLNF(7,8);        nSum = nSum+Buff[i];
    }}VUXRBR_OUT(1, 3);

    
VUXRB(5);VUXRLNF(8,9);    nAvg = nSum / (nNum-4);
VUXRLNF(9,10);    {int __vurtv__= nAvg;VUXFRTY();}
}}
#endif

static int DelOddPoint_vpls(unsigned short nNum,int* Buff)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return DelOddPoint(nNum,Buff);}
	else if(VuxIsRepeatRun()) {return DelOddPoint_vpls_(nNum,Buff);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? DelOddPoint_vpls_(nNum,Buff) : DelOddPoint(nNum,Buff);
#else
    {int vuxRet = DelOddPoint_vpls_(nNum,Buff);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/DelOddPoint(unsigned short,int*))
