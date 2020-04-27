
//VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_01_WorkTime_758ecff1.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO2::_01_WorkTime(int*))
#ifdef _VUDEBUG
BOOL CInsideIO2::_01_WorkTime_vpls_(int* pWorkTime){ VuxDbgBrkP()
{
    BOOL success = 0;  //ȡ�����¶��Ƿ�ɹ�
    int temperature;  //�����¶�

    /*[ѧϰ��ʾ���ײ�����Ӧ��]    GetTemperature()ȡ�û����¶ȡ��˺����м��ֿ���    1)δ��д 2)������ 3)����ʵ�ʴ��뵫�����ϲ�������	˫��GetTemperature���õײ����룬����Ҫ���������������Ρ�	*/
    success = GetTemperature(&temperature);

    if(!success)
    {
        return 0;
    }
    
    //�����¶ȲmExpectTemperature�ǳ�Ա����
    int TempDiff = temperature - mExpectTemperature;
    if(TempDiff <= 0)
    {
        return 0;
    }
        
    if(pWorkTime == 0)
    {
        return 0;
    }            

    //Ϊ�˼����⣬��������²�һ�ȣ�������һ����
    *pWorkTime = TempDiff * 60;
    return 1;
}}
#else
BOOL CInsideIO2::_01_WorkTime_vpls_(int* pWorkTime){__VUFNINFO__("_01_WorkTime","BOOL",0);VuxDbp(0,0,12);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    BOOL success = 0; VUXLV("BOOL",success,1);  //ȡ�����¶��Ƿ�ɹ�
VUXRLNFVB(2,2,2);    int temperature; VUXLV("int",temperature,2);  //�����¶�

    /*[ѧϰ��ʾ���ײ�����Ӧ��]    GetTemperature()ȡ�û����¶ȡ��˺����м��ֿ���    1)δ��д 2)������ 3)����ʵ�ʴ��뵫�����ϲ�������	˫��GetTemperature���õײ����룬����Ҫ���������������Ρ�	*/
VUXRLNF(3,3);    success = GetTemperature(&temperature);

    if((VUXRCS0(1,4)&&(!success)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(4,5);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
    
    //�����¶ȲmExpectTemperature�ǳ�Ա����
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

    //Ϊ�˼����⣬��������²�һ�ȣ�������һ����
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
