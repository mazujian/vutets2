
//VuxInter/Demo/_7T_EditCaseCode.cpp/_02_Position_aca38c5e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_02_Position(CList<int,int>&,POSITION))
#ifdef _VUDEBUG
static int _02_Position_vpls_(CList<int,int>& list,POSITION pos){ VuxDbgBrkP()
{
    /*[学习提示：可以添加变量，让pos指向list中的任意项，以及判断任意项的值]	添加输入变量：在测试数据窗口，点击"添加变量到表格"，选择“局部变量”，“输入”	添加输出变量：在测试数据窗口，点击"添加变量到表格"，选择“局部变量”，“输出”	虽然最终修改了用例代码，但可在数据表格界面直接完成，	请参考帮助：测试数据之一 >> 添加变量到表格	*/
    return list.GetAt(pos);
}}
#else
static int _02_Position_vpls_(CList<int,int>& list,POSITION pos){__VUFNINFO__("_02_Position","int",0);VuxDbp(0,0,1);
{
    /*[学习提示：可以添加变量，让pos指向list中的任意项，以及判断任意项的值]	添加输入变量：在测试数据窗口，点击"添加变量到表格"，选择“局部变量”，“输入”	添加输出变量：在测试数据窗口，点击"添加变量到表格"，选择“局部变量”，“输出”	虽然最终修改了用例代码，但可在数据表格界面直接完成，	请参考帮助：测试数据之一 >> 添加变量到表格	*/
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= list.GetAt(pos);VUXFRTY();}
}}
#endif

static int _02_Position_vpls(CList<int,int>& list,POSITION pos)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _02_Position(list,pos);}
	else if(VuxIsRepeatRun()) {return _02_Position_vpls_(list,pos);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _02_Position_vpls_(list,pos) : _02_Position(list,pos);
#else
    {int vuxRet = _02_Position_vpls_(list,pos);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_02_Position(CList<int,int>&,POSITION))
