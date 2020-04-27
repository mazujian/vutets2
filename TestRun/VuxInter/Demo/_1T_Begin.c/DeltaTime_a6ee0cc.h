
//VuxInter/Demo/_1T_Begin.c/DeltaTime_a6ee0cc.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/DeltaTime(TIME_TMR*,TIME_TIME*))
#ifdef _VUDEBUG
static TIME_TMR DeltaTime_vpls_(TIME_TMR* Src,TIME_TIME* Dst){ VuxDbgBrkP()
{
    int ns;
    TIME_TMR DelTaT;
    ns = Src->Ns - Dst->Ns;
    if(ns < 0)
    {
        DeltaT.Ms = Src->Ms - Dst->Ms - 1;
        DeltaT.Ns = ns + 10000000;
    }
    else
    {
        DeltaT.Ms = Src->Ms - Dst->Ms - Dst->Ms;
        DeltaT.Ns = ns;
    }
    
    //Src->tim.Ms1++;
    return DeltaT;
}}
#else
static TIME_TMR DeltaTime_vpls_(TIME_TMR* Src,TIME_TIME* Dst){__VUFNINFO__("DeltaTime","TIME_TMR",0);VuxDbp(0,0,9);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int ns; VUXLV("int",ns,1);
VUXRLNFVB(2,2,2);    TIME_TMR DelTaT; VUXLV("TIME_TMR",DelTaT,2);
VUXRLNF(3,3);    ns = Src->Ns - Dst->Ns;
    if((VUXRCS0(1,4)&&(ns < 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(4,5);        DeltaT.Ms = Src->Ms - Dst->Ms - 1;
VUXRLNF(5,6);        DeltaT.Ns = ns + 10000000;
    }}
    else
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(6,7);        DeltaT.Ms = Src->Ms - Dst->Ms - Dst->Ms;
VUXRLNF(7,8);        DeltaT.Ns = ns;
    }}
    
    //Src->tim.Ms1++;
VUXRB(4);VUXRLNF(8,9);    {TIME_TMR __vurtv__= DeltaT;VUXFRTY();}
}}
#endif

static TIME_TMR DeltaTime_vpls(TIME_TMR* Src,TIME_TIME* Dst)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return DeltaTime(Src,Dst);}
	else if(VuxIsRepeatRun()) {return DeltaTime_vpls_(Src,Dst);}

#ifdef _VUDEBUG
    {TIME_TMR vuxRet =  VuxIsDebugPlug() ? DeltaTime_vpls_(Src,Dst) : DeltaTime(Src,Dst);
#else
    {TIME_TMR vuxRet = DeltaTime_vpls_(Src,Dst);
#endif
    TEST_ASSERT_RETURN("TIME_TMR", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/DeltaTime(TIME_TMR*,TIME_TIME*))
