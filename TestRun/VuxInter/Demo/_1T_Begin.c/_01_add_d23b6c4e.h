
//VuxInter/Demo/_1T_Begin.c/_01_add_d23b6c4e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_01_add(int,int))
#ifdef _VUDEBUG
static int _01_add_vpls_(int a,int b){ VuxDbgBrkP()
{
    /*[学习提示：巧用示例，快速掌握单元测试]	示例集实际上是一部C/C++单元测试简明教程，可以浏览已测试的用例和结果，	  可以对照练习，可以体验边开发边测试。	示例代码中的学习提示，以及数据中的用例说明或数据后的注释，简明扼要地	  讲解了单元测试及VU4使用要点。	示例涵盖了C/C++单元测试的难点和解决方法，掌握了这些方法，并灵活运用，	  测试自己的代码就不会困难。	如果您只是学习单元测试，VU4的示例集是最好的教程，可以轻松掌握最先进的	  单元测试技术，掌握单元测试的要点、难点和解决问题的思路和方法。	如果您需要在自己的项目中评估VU，在申请试用License前，最好先掌握示例所	  阐述的要点和技巧，这样才能轻松地测试自己的代码，顺利完成评估。	*/
      
     /*[学习提示：示例集内容及功能]	----已完成测试的示例，建议快速浏览----    _1T_Begin.c：         入门示例    _2T_SendMail.c：      C语言实际项目示例    _3T_MyClass.cpp：     C++实际项目示例    _4T_DataBasic.cpp：   基础专题一：数据表格基础示例	_5T_InsideIO.cpp：    基础专题二：底层输入、局部输入、局部输出	_6T_WhiteBox.cpp：    基础专题三：完成白盒覆盖示例    _7T_EditCaseCode.cpp：需生成或修改用例代码的场景示例	----未测试示例，建议对照已测试示例，练习测试过程----    _1U_Begin.c：         代码拷贝自：_1T_Begin.c    _2U_SendMail.c：      代码拷贝自：_2T_SendMail.c    _3U_MyClass.cpp：     代码拷贝自：_3T_MyClass.cpp    _4U_DataBasic.cpp：   代码拷贝自：_4T_DataBasic.cpp	_5U_InsideIO.cpp：    代码拷贝自：_5T_InsideIO.cpp	_6U_WhiteBox.cpp：    代码拷贝自：_6T_WhiteBox.cpp    _7U_EditCaseCode.cpp：代码拷贝自：_7T_EditCaseCode.cpp    ----eTDD(easy TDD)体验与学习，代码未编写，请用eTDD方式编写和测试----	_1Y_Begin.c：         函数功能与_1T_Begin.c相同	_2Y_SendMail.c：      函数功能与_2T_SendMail.c相同	_3Y_MyClass.cpp：     函数功能与_3T_MyClass.cpp相同	_8Y_String.c：        简单的C字符串处理函数    */

    /*[学习提示：单元测试基本原理与方法]    在用例数据表格中：    输入的含义是赋值，如：    a输入1，b输入2，相当于：a=1; b=2;    输出是预期的正确结果，自动与实际结果比较，如:    ret输出3，相当于：    ASSERT(ret == 3)，如果ret != 3，则报告错误。    比较操作符缺省为==，还支持：& > < >= <= !=等，如：    & 0x1000      > 100    != 100    > 10 && < 100     */

    return a-b; //+写成了-
}}
#else
static int _01_add_vpls_(int a,int b){__VUFNINFO__("_01_add","int",0);VuxDbp(0,0,1);
{
    /*[学习提示：巧用示例，快速掌握单元测试]	示例集实际上是一部C/C++单元测试简明教程，可以浏览已测试的用例和结果，	  可以对照练习，可以体验边开发边测试。	示例代码中的学习提示，以及数据中的用例说明或数据后的注释，简明扼要地	  讲解了单元测试及VU4使用要点。	示例涵盖了C/C++单元测试的难点和解决方法，掌握了这些方法，并灵活运用，	  测试自己的代码就不会困难。	如果您只是学习单元测试，VU4的示例集是最好的教程，可以轻松掌握最先进的	  单元测试技术，掌握单元测试的要点、难点和解决问题的思路和方法。	如果您需要在自己的项目中评估VU，在申请试用License前，最好先掌握示例所	  阐述的要点和技巧，这样才能轻松地测试自己的代码，顺利完成评估。	*/
      
     /*[学习提示：示例集内容及功能]	----已完成测试的示例，建议快速浏览----    _1T_Begin.c：         入门示例    _2T_SendMail.c：      C语言实际项目示例    _3T_MyClass.cpp：     C++实际项目示例    _4T_DataBasic.cpp：   基础专题一：数据表格基础示例	_5T_InsideIO.cpp：    基础专题二：底层输入、局部输入、局部输出	_6T_WhiteBox.cpp：    基础专题三：完成白盒覆盖示例    _7T_EditCaseCode.cpp：需生成或修改用例代码的场景示例	----未测试示例，建议对照已测试示例，练习测试过程----    _1U_Begin.c：         代码拷贝自：_1T_Begin.c    _2U_SendMail.c：      代码拷贝自：_2T_SendMail.c    _3U_MyClass.cpp：     代码拷贝自：_3T_MyClass.cpp    _4U_DataBasic.cpp：   代码拷贝自：_4T_DataBasic.cpp	_5U_InsideIO.cpp：    代码拷贝自：_5T_InsideIO.cpp	_6U_WhiteBox.cpp：    代码拷贝自：_6T_WhiteBox.cpp    _7U_EditCaseCode.cpp：代码拷贝自：_7T_EditCaseCode.cpp    ----eTDD(easy TDD)体验与学习，代码未编写，请用eTDD方式编写和测试----	_1Y_Begin.c：         函数功能与_1T_Begin.c相同	_2Y_SendMail.c：      函数功能与_2T_SendMail.c相同	_3Y_MyClass.cpp：     函数功能与_3T_MyClass.cpp相同	_8Y_String.c：        简单的C字符串处理函数    */

    /*[学习提示：单元测试基本原理与方法]    在用例数据表格中：    输入的含义是赋值，如：    a输入1，b输入2，相当于：a=1; b=2;    输出是预期的正确结果，自动与实际结果比较，如:    ret输出3，相当于：    ASSERT(ret == 3)，如果ret != 3，则报告错误。    比较操作符缺省为==，还支持：& > < >= <= !=等，如：    & 0x1000      > 100    != 100    > 10 && < 100     */

VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= a-b;VUXFRTY();} //+写成了-
}}
#endif

static int _01_add_vpls(int a,int b)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _01_add(a,b);}
	else if(VuxIsRepeatRun()) {return _01_add_vpls_(a,b);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _01_add_vpls_(a,b) : _01_add(a,b);
#else
    {int vuxRet = _01_add_vpls_(a,b);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_01_add(int,int))
