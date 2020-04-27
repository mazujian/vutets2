
//VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_01_WorkTime_758ecff1.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO2::_01_WorkTime(int*))
#ifdef _VUDEBUG
BOOL CInsideIO2::_01_WorkTime_vpls_(int* pWorkTime){ VuxDbgBrkP()
{
    BOOL success = 0;  //取环境温度是否成功
    int temperature;  //环境温度

    /*[学习提示：底层输入应用]    GetTemperature()取得环境温度。此函数有几种可能    1)未编写 2)被隔离 3)调用实际代码但不符合测试需求。	双击GetTemperature设置底层输入，不需要考虑属于哪种情形。	*/
    success = GetTemperature(&temperature);

    if(!success)
    {
        return 0;
    }
    
    //计算温度差，mExpectTemperature是成员变量
    int TempDiff = temperature - mExpectTemperature;
    if(TempDiff <= 0)
    {
        return 0;
    }
        
    if(pWorkTime == 0)
    {
        return 0;
    }            

    //为了简化问题，这里假设温差一度，需运行一分钟
    *pWorkTime = TempDiff * 60;
    return 1;
}}
#else
BOOL CInsideIO2::_01_WorkTime_vpls_(int* pWorkTime){__VUFNINFO__("_01_WorkTime","BOOL",0);VuxDbp(0,0,12);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    BOOL success = 0; VUXLV("BOOL",success,1);  //取环境温度是否成功
VUXRLNFVB(2,2,2);    int temperature; VUXLV("int",temperature,2);  //环境温度

    /*[学习提示：底层输入应用]    GetTemperature()取得环境温度。此函数有几种可能    1)未编写 2)被隔离 3)调用实际代码但不符合测试需求。	双击GetTemperature设置底层输入，不需要考虑属于哪种情形。	*/
VUXRLNF(3,3);    success = GetTemperature(&temperature);

    if((VUXRCS0(1,4)&&(!success)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(4,5);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
    
    //计算温度差，mExpectTemperature是成员变量
VUXRBV(3);VUXRLNFVB(5,6,3);    int TempDiff = temperature - mExpectTemperature; VUXLV("int",TempDiff,3);
    if((VUXRCS0(2,7)&&(TempDiff <= 0)&&VUXRC1(2)))
    {VUXRBR(4);{
VUXRB(4);VUXRLNF(6,8);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(5);
        
    if((VUXRCS0(3,9)&&(pWorkTime == 0)&&VUXRC1(3)))
    {VUXRBR(6);{
VUXRB(5);VUXRLNF(7,10);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(7);            

    //为了简化问题，这里假设温差一度，需运行一分钟
VUXRB(6);VUXRLNF(8,11);    *pWorkTime = TempDiff * 60;
VUXRLNF(9,12);    {BOOL __vurtv__= 1;VUXFRTY();}
}}
#endif

BOOL CInsideIO2::_01_WorkTime_vpls(int* pWorkTime)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO2::_01_WorkTime(pWorkTime);}
	else if(VuxIsRepeatRun()) {return _01_WorkTime_vpls_(pWorkTime);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? _01_WorkTime_vpls_(pWorkTime) : _01_WorkTime(pWorkTime);
#else
    {BOOL vuxRet = _01_WorkTime_vpls_(pWorkTime);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO2::_01_WorkTime(int*))
