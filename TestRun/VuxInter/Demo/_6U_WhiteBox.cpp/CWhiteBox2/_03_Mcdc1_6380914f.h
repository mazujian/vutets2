
//VuxInter/Demo/_6U_WhiteBox.cpp/CWhiteBox2/_03_Mcdc1_6380914f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CWhiteBox2::_03_Mcdc1(BOOL,BOOL,BOOL))
#ifdef _VUDEBUG
BOOL CWhiteBox2::_03_Mcdc1_vpls_(BOOL A,BOOL B,BOOL C){ VuxDbgBrkP()
{
    if(A && (B || C))
    {
        return 1;
    }

    return 0;
}}
#else
BOOL CWhiteBox2::_03_Mcdc1_vpls_(BOOL A,BOOL B,BOOL C){__VUFNINFO__("_03_Mcdc1","BOOL",0);VuxDbp(0,0,5);
{
    if( VUXAC2(2,B,3,C) && (VUXRCS0(1,1)&&(A)&&VUXRC1(1)) && ((VUXRCS0(2,2)&&(B)&&VUXRC1(2)) ||(VUXRCS0(3,3)&&( C)&&VUXRC1(3))))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,4);        {BOOL __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

VUXRB(2);VUXRLNF(2,5);    {BOOL __vurtv__= 0;VUXFRTY();}
}}
#endif

BOOL CWhiteBox2::_03_Mcdc1_vpls(BOOL A,BOOL B,BOOL C)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CWhiteBox2::_03_Mcdc1(A,B,C);}
	else if(VuxIsRepeatRun()) {return _03_Mcdc1_vpls_(A,B,C);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? _03_Mcdc1_vpls_(A,B,C) : _03_Mcdc1(A,B,C);
#else
    {BOOL vuxRet = _03_Mcdc1_vpls_(A,B,C);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CWhiteBox2::_03_Mcdc1(BOOL,BOOL,BOOL))
