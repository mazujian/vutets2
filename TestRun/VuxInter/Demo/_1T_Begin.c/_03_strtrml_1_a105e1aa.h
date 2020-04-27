
//VuxInter/Demo/_1T_Begin.c/_03_strtrml_1_a105e1aa.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_strtrml_1(char*))
#ifdef _VUDEBUG
static char* _03_strtrml_1_vpls_(char* str){ VuxDbgBrkP()
{
    int count = 0; //左边空格的数量

    //判断空指针
    if(str == 0)
    { return str;
    }

    //计算左边空格的数量
    while(*str++ == ' ')
    {
        count++;
    }

    /*[学习提示：可视编程]    随时观察程序行为，例如，写完了上面的代码，可能就想看看左边空格的计算结果。方法：    1) 编译当前文件(正在编写的产品文件)：例如，IDE为VC系列，则按Ctrl+F7，如果编译通过，	     会自动执行测试。	2) 切换到VU界面：Ctrl + Alt + 空格	注： 黑色代码是当前用例执行的代码。	其他相关操作：	切换用例：测试输出界面的中间工具栏的左右箭头，可切换用例，或使用右键菜单。	VU界面切换回IDE：Esc 或 Ctrl + Alt + 空格    切换到VU界面并选中一个函数：选中函数名，按Ctrl+C复制，然后按  Ctrl + Alt + 回车	*/    

    //代码未写完，在_03_strtrml_2继续编写

    return str;
}}
#else
static char* _03_strtrml_1_vpls_(char* str){VUX_VARIABLE(2)  __VUFNINFO__("_03_strtrml_1","char*",0);VuxDbp(0,0,6);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int count = 0; VUXLV("int",count,1); //左边空格的数量

    //判断空指针
    if((VUXRCS0(1,2)&&(str == 0)&&VUXRC1(1)))
    {VUXRBR(2);{VUXRB(2);VUXRLNF(2,3); {char* __vurtv__= str;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

    //计算左边空格的数量
    while((VUXRCS0(2,4)&&(*str++ == ' ')&&VUXRC1(2)))
    {VUXRBR_LOOP(2,4,110);{
VUXRB(3);VUXRLNF(3,5);        count++;
    }}VUXRBR_OUT(2, 5);


    /*[学习提示：可视编程]    随时观察程序行为，例如，写完了上面的代码，可能就想看看左边空格的计算结果。方法：    1) 编译当前文件(正在编写的产品文件)：例如，IDE为VC系列，则按Ctrl+F7，如果编译通过，	     会自动执行测试。	2) 切换到VU界面：Ctrl + Alt + 空格	注： 黑色代码是当前用例执行的代码。	其他相关操作：	切换用例：测试输出界面的中间工具栏的左右箭头，可切换用例，或使用右键菜单。	VU界面切换回IDE：Esc 或 Ctrl + Alt + 空格    切换到VU界面并选中一个函数：选中函数名，按Ctrl+C复制，然后按  Ctrl + Alt + 回车	*/    

    //代码未写完，在_03_strtrml_2继续编写

VUXRB(4);VUXRLNF(4,6);    {char* __vurtv__= str;VUXFRTY();}
}}
#endif

static char* _03_strtrml_1_vpls(char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_strtrml_1(str);}
	else if(VuxIsRepeatRun()) {return _03_strtrml_1_vpls_(str);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _03_strtrml_1_vpls_(str) : _03_strtrml_1(str);
#else
    {char* vuxRet = _03_strtrml_1_vpls_(str);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_strtrml_1(char*))
