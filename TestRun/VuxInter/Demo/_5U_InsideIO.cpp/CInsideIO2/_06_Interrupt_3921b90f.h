
//VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_06_Interrupt_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO2::_06_Interrupt(int))
#ifdef _VUDEBUG
int CInsideIO2::_06_Interrupt_vpls_(int arg){ VuxDbgBrkP()
{   
    /*[学习提示：模拟中断]    常用于嵌入式测试。如果中断可能造成对全局变量的修改，	  且代码的功能逻辑涉及该全局变量，则可在任意位置模拟中断。	方法：点击中断位置，右键菜单选择“模拟中断”。	*/    
    //... 其他代码省略
    if(giVar > 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}}
#else
int CInsideIO2::_06_Interrupt_vpls_(int arg){__VUFNINFO__("_06_Interrupt","int",0);VuxDbp(0,0,3);
{   
    /*[学习提示：模拟中断]    常用于嵌入式测试。如果中断可能造成对全局变量的修改，	  且代码的功能逻辑涉及该全局变量，则可在任意位置模拟中断。	方法：点击中断位置，右键菜单选择“模拟中断”。	*/    
    //... 其他代码省略
    if((VUXRCS0(1,1)&&(giVar > 1)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,2);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {VUXRBR(3);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= 0;VUXFRTY();}
    }}
}}
#endif

int CInsideIO2::_06_Interrupt_vpls(int arg)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO2::_06_Interrupt(arg);}
	else if(VuxIsRepeatRun()) {return _06_Interrupt_vpls_(arg);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _06_Interrupt_vpls_(arg) : _06_Interrupt(arg);
#else
    {int vuxRet = _06_Interrupt_vpls_(arg);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO2::_06_Interrupt(int))
