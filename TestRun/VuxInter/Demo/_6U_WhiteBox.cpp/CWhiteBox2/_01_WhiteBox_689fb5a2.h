
//VuxInter/Demo/_6U_WhiteBox.cpp/CWhiteBox2/_01_WhiteBox_689fb5a2.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CWhiteBox2::_01_WhiteBox(int,int,int))
#ifdef _VUDEBUG
int CWhiteBox2::_01_WhiteBox_vpls_(int A,int B,int X){ VuxDbgBrkP()
{
    /*[学习提示：白盒覆盖]    意义：衡量测试完整度；找出遗漏用例。	常用覆盖：语句、条件值、判定、MC/DC、分支、路径，VU全部支持。	推荐的覆盖：MC/DC。MC/DC是航空标准，强度足够。MC/DC要求每个	              条件独立影响判定结果，实际上已包含语句、条件值、判定覆盖。				  分支包含空分支，空分支覆盖意义不大，非空分支的覆盖实际上就是判定覆盖；				  路径依赖于代码构成，当代码中含有多个逻辑块时，会组合出海量路径，				  因此，不必要求完成全部路径覆盖。	红绿灯机制：左边函数列表显示用绿、红、黄灯表示测试状况，	            红灯：有错误(失败的测试)，				黄灯：覆盖未达标，				黄红灯：有错误且覆盖未达标，				绿灯：无错误且覆盖达标。	覆盖标准：可在 工具->设定->统计与报告，设定覆盖标准，默认为：	          语句、条件值、判定、MC/DC达到100%。    */    

    /*[学习提示：白盒覆盖标记]	[T/F]未覆盖的条件真/假值,[M]未覆盖MCDC；	<T/F]未覆盖的判定真/假值；	未覆盖语句有红色背景；	红色的分支或路径未覆盖。	标记不可覆盖：点击未覆盖单位，右键菜单选择“删除逻辑单位”，	              或在用例设计器中点击X。    */ 

    /*[学习提示：用例设计器]	用途：找出遗漏用例，完成指定逻辑单位的覆盖。	条件：1)至少一个已执行且无异常的用例；2)存在未覆盖的逻辑单位。	使用：点击未覆盖的逻辑单位，右键菜单选择“用例设计”。	      用例设计器的“修改提示”的最下面，会显示使用说明，请认真阅读。    */ 

    if(A>1 && B==0)
    {
        X = X/A;
    }
    if(A==2 || X>1)
    {
        X = X+1;
    }

    return X;
}}
#else
int CWhiteBox2::_01_WhiteBox_vpls_(int A,int B,int X){__VUFNINFO__("_01_WhiteBox","int",0);VuxDbp(0,0,7);
{
    /*[学习提示：白盒覆盖]    意义：衡量测试完整度；找出遗漏用例。	常用覆盖：语句、条件值、判定、MC/DC、分支、路径，VU全部支持。	推荐的覆盖：MC/DC。MC/DC是航空标准，强度足够。MC/DC要求每个	              条件独立影响判定结果，实际上已包含语句、条件值、判定覆盖。				  分支包含空分支，空分支覆盖意义不大，非空分支的覆盖实际上就是判定覆盖；				  路径依赖于代码构成，当代码中含有多个逻辑块时，会组合出海量路径，				  因此，不必要求完成全部路径覆盖。	红绿灯机制：左边函数列表显示用绿、红、黄灯表示测试状况，	            红灯：有错误(失败的测试)，				黄灯：覆盖未达标，				黄红灯：有错误且覆盖未达标，				绿灯：无错误且覆盖达标。	覆盖标准：可在 工具->设定->统计与报告，设定覆盖标准，默认为：	          语句、条件值、判定、MC/DC达到100%。    */    

    /*[学习提示：白盒覆盖标记]	[T/F]未覆盖的条件真/假值,[M]未覆盖MCDC；	<T/F]未覆盖的判定真/假值；	未覆盖语句有红色背景；	红色的分支或路径未覆盖。	标记不可覆盖：点击未覆盖单位，右键菜单选择“删除逻辑单位”，	              或在用例设计器中点击X。    */ 

    /*[学习提示：用例设计器]	用途：找出遗漏用例，完成指定逻辑单位的覆盖。	条件：1)至少一个已执行且无异常的用例；2)存在未覆盖的逻辑单位。	使用：点击未覆盖的逻辑单位，右键菜单选择“用例设计”。	      用例设计器的“修改提示”的最下面，会显示使用说明，请认真阅读。    */ 

    if( VUXAC1(2,B==0) && (VUXRCS0(1,1)&&(A>1)&&VUXRC1(1)) &&(VUXRCS0(2,2)&&( B==0)&&VUXRC1(2)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,3);        X = X/A;
    }}
VUXRBR_ELSE(3);
    if( VUXAC1(4,X>1) && (VUXRCS0(3,4)&&(A==2)&&VUXRC1(3)) ||(VUXRCS0(4,5)&&( X>1)&&VUXRC1(4)))
    {VUXRBR(4);{
VUXRB(2);VUXRLNF(2,6);        X = X+1;
    }}
VUXRBR_ELSE(5);

VUXRB(3);VUXRLNF(3,7);    {int __vurtv__= X;VUXFRTY();}
}}
#endif

int CWhiteBox2::_01_WhiteBox_vpls(int A,int B,int X)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CWhiteBox2::_01_WhiteBox(A,B,X);}
	else if(VuxIsRepeatRun()) {return _01_WhiteBox_vpls_(A,B,X);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _01_WhiteBox_vpls_(A,B,X) : _01_WhiteBox(A,B,X);
#else
    {int vuxRet = _01_WhiteBox_vpls_(A,B,X);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CWhiteBox2::_01_WhiteBox(int,int,int))
