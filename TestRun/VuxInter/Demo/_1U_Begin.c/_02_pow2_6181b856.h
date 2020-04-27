
//VuxInter/Demo/_1U_Begin.c/_02_pow2_6181b856.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_02_pow2(unsigned int,unsigned int))
#ifdef _VUDEBUG
static unsigned int _02_pow2_vpls_(unsigned int g,unsigned int e){ VuxDbgBrkP()
{
    /*[学习提示：VU4基本操作]    建立更多用例：选中一列，并点击"添加用例"	切换用例输出：右键菜单可切换用例；	              点击失败的测试，自动切换到对应的用例。	观察程序行为：对比当前用例的输入输出以及所执行的代码。	              黑色代码为当前用例所执行的代码。    找出错误原因：观察程序行为，可发现由于result初始值为0，	              导致for循环的计算结果恒为0。	白盒覆盖标记：[T/F]未覆盖的条件真/假值,[M]未覆盖MCDC；	              <T/F>未覆盖的判定真/假值；				  红色的分支或路径未覆盖。	完成白盒覆盖：选中未覆盖单位，右键菜单选择"用例设计" 。	              关于白盒覆盖及用例设计器的使用，请看_6T_WhiteBox.cpp中的_01_WhileBox()。	标记不可覆盖：for循环的第2分支不可覆盖，可标记为不可覆盖。方法：	              点击未覆盖单位，右键菜单选择"删除逻辑单位"。    */
    unsigned int result = 1;

    if(g == 0)
    {
        result = 0;
    }
    else if(g == 1)
    {
        result = 1;
    }
    else if(e == 0)
    { 
        result = 1;
    }
    else if(e == 1)
    {
        result = g;
    }
    else
    {
        unsigned int i;
        for(i=0; i<e; i++)
        {
            result *= g;
        }
    }

    return result;
}}
#else
static unsigned int _02_pow2_vpls_(unsigned int g,unsigned int e){VUX_VARIABLE(2)  __VUFNINFO__("_02_pow2","unsigned int",0);VuxDbp(0,0,15);
{
    /*[学习提示：VU4基本操作]    建立更多用例：选中一列，并点击"添加用例"	切换用例输出：右键菜单可切换用例；	              点击失败的测试，自动切换到对应的用例。	观察程序行为：对比当前用例的输入输出以及所执行的代码。	              黑色代码为当前用例所执行的代码。    找出错误原因：观察程序行为，可发现由于result初始值为0，	              导致for循环的计算结果恒为0。	白盒覆盖标记：[T/F]未覆盖的条件真/假值,[M]未覆盖MCDC；	              <T/F>未覆盖的判定真/假值；				  红色的分支或路径未覆盖。	完成白盒覆盖：选中未覆盖单位，右键菜单选择"用例设计" 。	              关于白盒覆盖及用例设计器的使用，请看_6T_WhiteBox.cpp中的_01_WhileBox()。	标记不可覆盖：for循环的第2分支不可覆盖，可标记为不可覆盖。方法：	              点击未覆盖单位，右键菜单选择"删除逻辑单位"。    */
VUXRBV(1);VUXRLNFVB(1,1,1);    unsigned int result = 1; VUXLV("unsigned int",result,1);

    if((VUXRCS0(1,2)&&(g == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        result = 0;
    }}
    else if((VUXRCS0(2,4)&&(g == 1)&&VUXRC1(2)))
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(3,5);        result = 1;
    }}
    else if((VUXRCS0(3,6)&&(e == 0)&&VUXRC1(3)))
    {VUXRBR(4);{ 
VUXRB(4);VUXRLNF(4,7);        result = 1;
    }}
    else if((VUXRCS0(4,8)&&(e == 1)&&VUXRC1(4)))
    {VUXRBR(5);{
VUXRB(5);VUXRLNF(5,9);        result = g;
    }}
    else
    {VUXRBR(6);{
VUXRBV(6);VUXRLNFVB(6,10,2);        unsigned int i; VUXLV("unsigned int",i,2);VUXRBF(7,11);
        for(i=0;(VUXRCS0(5,13)&&( i<e)&&VUXRC1(5));VUXRBF(8,12), i++)
        {VUXRBR_LOOP(2,7,115);{
VUXRB(9);VUXRLNF(9,14);            result *= g;
        }}VUXRBR_OUT(2, 8);

    }}

VUXRB(10);VUXRLNF(10,15);    {unsigned int __vurtv__= result;VUXFRTY();}
}}
#endif

static unsigned int _02_pow2_vpls(unsigned int g,unsigned int e)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _02_pow2(g,e);}
	else if(VuxIsRepeatRun()) {return _02_pow2_vpls_(g,e);}

#ifdef _VUDEBUG
    {unsigned int vuxRet =  VuxIsDebugPlug() ? _02_pow2_vpls_(g,e) : _02_pow2(g,e);
#else
    {unsigned int vuxRet = _02_pow2_vpls_(g,e);
#endif
    TEST_ASSERT_RETURN("unsigned int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_02_pow2(unsigned int,unsigned int))
