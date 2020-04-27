
//VuxInter/Demo/_7T_EditCaseCode.cpp/_03_VaryingParameter_d3af3469.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_VaryingParameter(int,int,...))
#ifdef _VUDEBUG
static int _03_VaryingParameter_vpls_(int a,int b,... ){ VuxDbgBrkP()
{
    /*[学习提示：可变参数]	1) 使用"添加变量到表格"，添加一个局部变量作为第三个参数，例如int c。    2) 切换到测试文件窗口，将用例代码中TEST_RUN所在行的代码由：    EST_RUN _03_VaryingParameter_vpls(a, b);    改为:    TEST_RUN _03_VaryingParameter_vpls(a, b, c);    即添加一个参数c。    3) 为插装函数_03_VaryingParameter_vpls增加参数c：    首先，跳转到插装函数：光标放在用例代码前面的#include开头的行，右键菜单选择“跳转”。	切换到测试代码窗口，将显示用例代码，向上一些可看到插桩函数_03_VaryingParameter_vpls，	修改_03_VaryingParameter_vpls中的代码，使第三个参数有效。	*/
    return a+b;
}}
#else
static int _03_VaryingParameter_vpls_(int a,int b,... ){__VUFNINFO__("_03_VaryingParameter","int",0);VuxDbp(0,0,1);
{
    /*[学习提示：可变参数]	1) 使用"添加变量到表格"，添加一个局部变量作为第三个参数，例如int c。    2) 切换到测试文件窗口，将用例代码中TEST_RUN所在行的代码由：    EST_RUN _03_VaryingParameter_vpls(a, b);    改为:    TEST_RUN _03_VaryingParameter_vpls(a, b, c);    即添加一个参数c。    3) 为插装函数_03_VaryingParameter_vpls增加参数c：    首先，跳转到插装函数：光标放在用例代码前面的#include开头的行，右键菜单选择“跳转”。	切换到测试代码窗口，将显示用例代码，向上一些可看到插桩函数_03_VaryingParameter_vpls，	修改_03_VaryingParameter_vpls中的代码，使第三个参数有效。	*/
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= a+b;VUXFRTY();}
}}
#endif

static int _03_VaryingParameter_vpls(int a,int b,... )
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_VaryingParameter(a,b);}
	else if(VuxIsRepeatRun()) {return _03_VaryingParameter_vpls_(a,b);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _03_VaryingParameter_vpls_(a,b) : _03_VaryingParameter(a,b);
#else
    {int vuxRet = _03_VaryingParameter_vpls_(a,b);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_VaryingParameter(int,int,...))
