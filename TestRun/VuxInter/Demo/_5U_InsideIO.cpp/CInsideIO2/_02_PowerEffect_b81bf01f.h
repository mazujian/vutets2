
//VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_02_PowerEffect_b81bf01f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO2::_02_PowerEffect(bool))
#ifdef _VUDEBUG
int CInsideIO2::_02_PowerEffect_vpls_(bool reset){ VuxDbgBrkP()
{   
    /*[学习提示：局部输入应用]    打击次数times，由于是局部变量，用例中无法访问，难于测试，	  点击下行代码，右键菜单选择 局部输入(替换"="右边)，可将times改为可	  在表格中设置的普通变量。	*/
    static int times = 0;
    if(reset)
    { times = 0;
    }
    times++;
    
    int effect[] =
    {9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
    };
    if(times >= sizeof(effect) / sizeof(effect[0]))
    {
        return 0;
    }
    return effect[times];
}}
#else
int CInsideIO2::_02_PowerEffect_vpls_(bool reset){__VUFNINFO__("_02_PowerEffect","int",0);VuxDbp(0,0,8);
{   
    /*[学习提示：局部输入应用]    打击次数times，由于是局部变量，用例中无法访问，难于测试，	  点击下行代码，右键菜单选择 局部输入(替换"="右边)，可将times改为可	  在表格中设置的普通变量。	*/
VUXRBV(1);VUXRLNFVB(1,1,1);    static int times = 0; VUXLV("int",times,1);
    if((VUXRCS0(1,2)&&(reset)&&VUXRC1(1)))
    {VUXRBR(2);{VUXRB(2);VUXRLNF(2,3); times = 0;
    }}
VUXRBR_ELSE(3);
VUXRB(3);VUXRLNF(3,4);    times++;
    
VUXRLNFVB(4,5,2);    int effect[] =
    {9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
    }; VUXLVA("int[]",effect,2);
    if((VUXRCS0(2,6)&&(times >= sizeof(effect) / sizeof(effect[0]))&&VUXRC1(2)))
    {VUXRBR(4);{
VUXRB(4);VUXRLNF(5,7);        {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(5);
VUXRB(5);VUXRLNF(6,8);    {int __vurtv__= effect[times];VUXFRTY();}
}}
#endif

int CInsideIO2::_02_PowerEffect_vpls(bool reset)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO2::_02_PowerEffect(reset);}
	else if(VuxIsRepeatRun()) {return _02_PowerEffect_vpls_(reset);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _02_PowerEffect_vpls_(reset) : _02_PowerEffect(reset);
#else
    {int vuxRet = _02_PowerEffect_vpls_(reset);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO2::_02_PowerEffect(bool))
