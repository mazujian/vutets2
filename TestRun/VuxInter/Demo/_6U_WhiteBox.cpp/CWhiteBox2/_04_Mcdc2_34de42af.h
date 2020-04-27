
//VuxInter/Demo/_6U_WhiteBox.cpp/CWhiteBox2/_04_Mcdc2_34de42af.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CWhiteBox2::_04_Mcdc2(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL))
#ifdef _VUDEBUG
BOOL CWhiteBox2::_04_Mcdc2_vpls_(BOOL A,BOOL B,BOOL C,BOOL D,BOOL E,BOOL F,BOOL G,BOOL H,BOOL I,BOOL J,BOOL K){ VuxDbgBrkP()
{
    /*[学习提示：快速完成覆盖]	MC/DC通常很难，但使用VU的用例设计器，完成下面超复杂判定的MC/DC覆盖	  也只需要一两分钟，所以单元测试应完成MC/DC覆盖，这不但是必须的，也是合理的。    */ 
    if(A && ( (B || C) && (D && E) ) && ( (F || G) && (H || I  || J) || K ))
    {
        return 1;
    }
    return 0;
}}
#else
BOOL CWhiteBox2::_04_Mcdc2_vpls_(BOOL A,BOOL B,BOOL C,BOOL D,BOOL E,BOOL F,BOOL G,BOOL H,BOOL I,BOOL J,BOOL K){__VUFNINFO__("_04_Mcdc2","BOOL",0);VuxDbp(0,0,13);
{
    /*[学习提示：快速完成覆盖]	MC/DC通常很难，但使用VU的用例设计器，完成下面超复杂判定的MC/DC覆盖	  也只需要一两分钟，所以单元测试应完成MC/DC覆盖，这不但是必须的，也是合理的。    */ 
    if( VUXAC10(2,B,3,C,4,D,5,E,6,F,7,G,8,H,9,I,10,J,11,K) && (VUXRCS0(1,1)&&(A)&&VUXRC1(1)) && ( ((VUXRCS0(2,2)&&(B)&&VUXRC1(2)) ||(VUXRCS0(3,3)&&( C)&&VUXRC1(3))) && ((VUXRCS0(4,4)&&(D)&&VUXRC1(4)) &&(VUXRCS0(5,5)&&( E)&&VUXRC1(5))) ) && ( ((VUXRCS0(6,6)&&(F)&&VUXRC1(6)) ||(VUXRCS0(7,7)&&( G)&&VUXRC1(7))) && ((VUXRCS0(8,8)&&(H)&&VUXRC1(8)) ||(VUXRCS0(9,9)&&( I)&&VUXRC1(9))  ||(VUXRCS0(10,10)&&( J)&&VUXRC1(10))) ||(VUXRCS0(11,11)&&( K)&&VUXRC1(11)) ))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,12);        {BOOL __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(2);VUXRLNF(2,13);    {BOOL __vurtv__= 0;VUXFRTY();}
}}
#endif

BOOL CWhiteBox2::_04_Mcdc2_vpls(BOOL A,BOOL B,BOOL C,BOOL D,BOOL E,BOOL F,BOOL G,BOOL H,BOOL I,BOOL J,BOOL K)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CWhiteBox2::_04_Mcdc2(A,B,C,D,E,F,G,H,I,J,K);}
	else if(VuxIsRepeatRun()) {return _04_Mcdc2_vpls_(A,B,C,D,E,F,G,H,I,J,K);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? _04_Mcdc2_vpls_(A,B,C,D,E,F,G,H,I,J,K) : _04_Mcdc2(A,B,C,D,E,F,G,H,I,J,K);
#else
    {BOOL vuxRet = _04_Mcdc2_vpls_(A,B,C,D,E,F,G,H,I,J,K);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CWhiteBox2::_04_Mcdc2(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL))
