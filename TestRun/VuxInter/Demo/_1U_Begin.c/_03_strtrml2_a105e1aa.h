
//VuxInter/Demo/_1U_Begin.c/_03_strtrml2_a105e1aa.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_strtrml2(char*))
#ifdef _VUDEBUG
static char* _03_strtrml2_vpls_(char* str){ VuxDbgBrkP()
{
    /*[学习提示：easy TDD]    TDD：测试驱动开发，核心：设计先行、小步前进	easy TDD：简称eTDD，易行版TDD，解决了TDD很难实行的问题。easy TDD过程：	          逻辑块可视编程：涉及逻辑计算时，在表格中记录功能点，就是用例，			                  一边开发，自动执行测试，随时观察程序行为。			  提交前完成覆盖：简单的代码，可在提交前或模块完成时再进行测试，			                  通常不需要建立用例或只需简单用例。			  只进行粗略调试：调试只用于流程跟踪和bug粗略定位，除bug时，根据bug表现，			                  对可疑函数添加用例并观察测试结果，通常很容易错出错误原因，							  然后修改代码使测试通过。	eTDD效益：对于有一定复杂度的代码，如_2T_SendMail.c，编写合格代码的效率	           是传统方式的五倍以上。原因：			   a. 用例是明确的设计，设计先行，不走弯路；               b. 对代码的任意添加或修改，都可以观察其行为(程序行为就是：什么输入执行				  哪些代码代码产生什么输出)，随时验证思路、发现错误、激发灵感。			   c. 功能逻辑不需要调试，节约90%调试时间。    eTDD实施：不用改变原来的开发流程和习惯。	          对于功能需求较复杂的代码，最好先在数据表格中记录功能点，以明确需求，				这就是用例；或者在需要察看程序行为时，添加用例。			  简单的代码可以不必先考虑，模块完成后，在VU主界面左边最近更新列表中，				对未测试和黄灯函数执行测试，并视需要添加用例完成覆盖。    */

   /*[学习提示：体验easy TDD]    请用IDE或文本编辑器打开Samples/Demo/目录下的	_1U_Begin.c或_1Y_Begin.c，自行编写strtrml()函数的代码，体验easy TDD过程，	其中，_1U_Begin.c中的strtrml()已建立测试用例，_1Y_Begin.c则是初始状态。	更多更复杂的体验：_8Y_String.c _2Y_SendMail.c _3Y_MyClass.cpp。	*/

    return str;
}}
#else
static char* _03_strtrml2_vpls_(char* str){__VUFNINFO__("_03_strtrml2","char*",0);VuxDbp(0,0,1);
{
    /*[学习提示：easy TDD]    TDD：测试驱动开发，核心：设计先行、小步前进	easy TDD：简称eTDD，易行版TDD，解决了TDD很难实行的问题。easy TDD过程：	          逻辑块可视编程：涉及逻辑计算时，在表格中记录功能点，就是用例，			                  一边开发，自动执行测试，随时观察程序行为。			  提交前完成覆盖：简单的代码，可在提交前或模块完成时再进行测试，			                  通常不需要建立用例或只需简单用例。			  只进行粗略调试：调试只用于流程跟踪和bug粗略定位，除bug时，根据bug表现，			                  对可疑函数添加用例并观察测试结果，通常很容易错出错误原因，							  然后修改代码使测试通过。	eTDD效益：对于有一定复杂度的代码，如_2T_SendMail.c，编写合格代码的效率	           是传统方式的五倍以上。原因：			   a. 用例是明确的设计，设计先行，不走弯路；               b. 对代码的任意添加或修改，都可以观察其行为(程序行为就是：什么输入执行				  哪些代码代码产生什么输出)，随时验证思路、发现错误、激发灵感。			   c. 功能逻辑不需要调试，节约90%调试时间。    eTDD实施：不用改变原来的开发流程和习惯。	          对于功能需求较复杂的代码，最好先在数据表格中记录功能点，以明确需求，				这就是用例；或者在需要察看程序行为时，添加用例。			  简单的代码可以不必先考虑，模块完成后，在VU主界面左边最近更新列表中，				对未测试和黄灯函数执行测试，并视需要添加用例完成覆盖。    */

   /*[学习提示：体验easy TDD]    请用IDE或文本编辑器打开Samples/Demo/目录下的	_1U_Begin.c或_1Y_Begin.c，自行编写strtrml()函数的代码，体验easy TDD过程，	其中，_1U_Begin.c中的strtrml()已建立测试用例，_1Y_Begin.c则是初始状态。	更多更复杂的体验：_8Y_String.c _2Y_SendMail.c _3Y_MyClass.cpp。	*/

VUXRB(1);VUXRLNF(1,1);    {char* __vurtv__= str;VUXFRTY();}
}}
#endif

static char* _03_strtrml2_vpls(char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_strtrml2(str);}
	else if(VuxIsRepeatRun()) {return _03_strtrml2_vpls_(str);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _03_strtrml2_vpls_(str) : _03_strtrml2(str);
#else
    {char* vuxRet = _03_strtrml2_vpls_(str);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_strtrml2(char*))
