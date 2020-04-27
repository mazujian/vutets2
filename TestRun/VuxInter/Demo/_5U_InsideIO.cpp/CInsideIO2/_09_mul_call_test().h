
//VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_09_mul_call_test().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO2::_09_mul_call_test())
#ifdef _VUDEBUG
int CInsideIO2::_09_mul_call_test_vpls_(){ VuxDbgBrkP()
{
    /*[学习提示：底层输入之三]    多次调用同一底层函数（包括循环形成的多次调用），如需每次输出不同值，    可用分号隔开多个值。如值的数量不足，不足部分使用最后一个。	*/
    DATA* pData1 = 0;
    DATA* pData2 = 0;
    get_mem(&pData1);
    get_mem(&pData2);
    
    if(pData1 == 0 || pData2 == 0)
    {
        return -1;
    }
        
    if(pData1->pBase == 0 ||  pData2->pBase == 0)
    {
        return -1;
    }
        
    if(pData1->pBase->a == pData2->pBase->a)
    {
        return 1;
    }

    return 0;
}}
#else
int CInsideIO2::_09_mul_call_test_vpls_(){__VUFNINFO__("_09_mul_call_test","int",0);VuxDbp(0,0,13);
{
    /*[学习提示：底层输入之三]    多次调用同一底层函数（包括循环形成的多次调用），如需每次输出不同值，    可用分号隔开多个值。如值的数量不足，不足部分使用最后一个。	*/
VUXRBV(1);VUXRLNFVB(1,1,1);    DATA* pData1 = 0; VUXLV("DATA*",pData1,1);
VUXRLNFVB(2,2,2);    DATA* pData2 = 0; VUXLV("DATA*",pData2,2);
VUXRLNF(3,3);    get_mem(&pData1);
VUXRLNF(4,4);    get_mem(&pData2);
    
    if( VUXAC1(2,pData2 == 0) && (VUXRCS0(1,5)&&(pData1 == 0)&&VUXRC1(1)) ||(VUXRCS0(2,6)&&( pData2 == 0)&&VUXRC1(2)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(5,7);        {int __vurtv__= -1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
        
    if((VUXRCS0(3,8)&&(pData1->pBase == 0)&&VUXRC1(3)) ||(VUXRCS0(4,9)&&(  pData2->pBase == 0)&&VUXRC1(4)))
    {VUXRBR(4);{
VUXRB(3);VUXRLNF(6,10);        {int __vurtv__= -1;VUXFRTY();}
    }}
VUXRBR_ELSE(5);
        
    if((VUXRCS0(5,11)&&(pData1->pBase->a == pData2->pBase->a)&&VUXRC1(5)))
    {VUXRBR(6);{
VUXRB(4);VUXRLNF(7,12);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(7);

VUXRB(5);VUXRLNF(8,13);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

int CInsideIO2::_09_mul_call_test_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO2::_09_mul_call_test();}
	else if(VuxIsRepeatRun()) {return _09_mul_call_test_vpls_();}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _09_mul_call_test_vpls_() : _09_mul_call_test();
#else
    {int vuxRet = _09_mul_call_test_vpls_();
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO2::_09_mul_call_test())
