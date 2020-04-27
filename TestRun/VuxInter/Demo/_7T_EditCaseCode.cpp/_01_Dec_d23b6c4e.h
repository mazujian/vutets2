
//VuxInter/Demo/_7T_EditCaseCode.cpp/_01_Dec_d23b6c4e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_01_Dec(int,int))
#ifdef _VUDEBUG
static int _01_Dec_vpls_(int i,int j){ VuxDbgBrkP()
{
    /*[学习提示：异常测试]	在用例代码窗口，将鼠标放在 用例代码列表 部分，右键菜单	  选择“生成异常测试代码”。	*/
    if(j == 0)
    {
        throw CMyException();
    }

    if(j == -1)
    {
        throw(-1);
    }

    return i/j;
}}
#else
static int _01_Dec_vpls_(int i,int j){__VUFNINFO__("_01_Dec","int",0);VuxDbp(0,0,5);
{
    /*[学习提示：异常测试]	在用例代码窗口，将鼠标放在 用例代码列表 部分，右键菜单	  选择“生成异常测试代码”。	*/
    if((VUXRCS0(1,1)&&(j == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRBV(1);VUXRLNFV(1,2);        throw CMyException();
    }}
VUXRBR_ELSE(3);

    if((VUXRCS0(2,3)&&(j == -1)&&VUXRC1(2)))
    {VUXRBR(4);{
VUXRB(2);VUXRLNF(2,4);        throw(-1);
    }}
VUXRBR_ELSE(5);

VUXRB(3);VUXRLNF(3,5);    {int __vurtv__= i/j;VUXFRTY();}
}}
#endif

static int _01_Dec_vpls(int i,int j)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _01_Dec(i,j);}
	else if(VuxIsRepeatRun()) {return _01_Dec_vpls_(i,j);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _01_Dec_vpls_(i,j) : _01_Dec(i,j);
#else
    {int vuxRet = _01_Dec_vpls_(i,j);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_01_Dec(int,int))
