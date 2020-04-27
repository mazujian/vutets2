
//VuxInter/Demo/_4U_DataBasic.cpp/_12_VariablePtr2_26d3e555.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_12_VariablePtr2(int*,int*,int))
#ifdef _VUDEBUG
static int _12_VariablePtr2_vpls_(int* item,int* items,int count){ VuxDbgBrkP()
{
    /*[学习提示：变量指针赋值]    1) 适用场景: 适用于需比较指针本身，而不是比较指针所指对象的值的情形。    2) 给第一变量赋值: 在单元格编辑状态下，右键菜单选择“变量指针赋值”，    在弹出的窗口中设定变量名和类型，自动在单元格中填写$fv开头的一串字符，赋值即完成。    第一变量可以是数组，也可以是单个变量。    3) 给第二变量赋值: 第二变量通常指向第一变量或第一变量的一项，分三种情形：    a, 与第一变量无关，则同样调用“变量指针赋值”指令进行赋值；    b, 与第一变量相等，直接拷贝第一变量的值；    c, 指向第一变量的某项，填写第一变理的值+序号，如第一变量的值为$vpe08e0fea，       则第二变量填写$vpe08e0fea+1，将指向第1项(从0开始）。	*/
   
    if(item == 0 || items == 0)
    {
        return -1;
    }
         
    if(item < items || item > (items+count))
    {
        return -1;
    }

    if(item == items)
    {
        return 0;
    }

    if(item == (items + 1))
    {
        return 1;
    }

    if(item == (items + 9))
    {
        return 9;
    }
     
    //return ((int)items - (int)item) / sizeof(*item); 错误！
    return ((int)item - (int)items) / sizeof(*item);
}}
#else
static int _12_VariablePtr2_vpls_(int* item,int* items,int count){__VUFNINFO__("_12_VariablePtr2","int",0);VuxDbp(0,0,13);
{
    /*[学习提示：变量指针赋值]    1) 适用场景: 适用于需比较指针本身，而不是比较指针所指对象的值的情形。    2) 给第一变量赋值: 在单元格编辑状态下，右键菜单选择“变量指针赋值”，    在弹出的窗口中设定变量名和类型，自动在单元格中填写$fv开头的一串字符，赋值即完成。    第一变量可以是数组，也可以是单个变量。    3) 给第二变量赋值: 第二变量通常指向第一变量或第一变量的一项，分三种情形：    a, 与第一变量无关，则同样调用“变量指针赋值”指令进行赋值；    b, 与第一变量相等，直接拷贝第一变量的值；    c, 指向第一变量的某项，填写第一变理的值+序号，如第一变量的值为$vpe08e0fea，       则第二变量填写$vpe08e0fea+1，将指向第1项(从0开始）。	*/
   
    if( VUXAC1(2,items == 0) && (VUXRCS0(1,1)&&(item == 0)&&VUXRC1(1)) ||(VUXRCS0(2,2)&&( items == 0)&&VUXRC1(2)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,3);        {int __vurtv__= -1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
         
    if( VUXAC1(4,item > (items+count)) && (VUXRCS0(3,4)&&(item < items)&&VUXRC1(3)) ||(VUXRCS0(4,5)&&( item > (items+count))&&VUXRC1(4)))
    {VUXRBR(4);{
VUXRB(2);VUXRLNF(2,6);        {int __vurtv__= -1;VUXFRTY();}
    }}
VUXRBR_ELSE(5);

    if((VUXRCS0(5,7)&&(item == items)&&VUXRC1(5)))
    {VUXRBR(6);{
VUXRB(3);VUXRLNF(3,8);        {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(7);

    if((VUXRCS0(6,9)&&(item == (items + 1))&&VUXRC1(6)))
    {VUXRBR(8);{
VUXRB(4);VUXRLNF(4,10);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(9);

    if((VUXRCS0(7,11)&&(item == (items + 9))&&VUXRC1(7)))
    {VUXRBR(10);{
VUXRB(5);VUXRLNF(5,12);        {int __vurtv__= 9;VUXFRTY();}
    }}
VUXRBR_ELSE(11);
     
    //return ((int)items - (int)item) / sizeof(*item); 错误！
VUXRB(6);VUXRLNF(6,13);    {int __vurtv__= ((int)item - (int)items) / sizeof(*item);VUXFRTY();}
}}
#endif

static int _12_VariablePtr2_vpls(int* item,int* items,int count)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _12_VariablePtr2(item,items,count);}
	else if(VuxIsRepeatRun()) {return _12_VariablePtr2_vpls_(item,items,count);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _12_VariablePtr2_vpls_(item,items,count) : _12_VariablePtr2(item,items,count);
#else
    {int vuxRet = _12_VariablePtr2_vpls_(item,items,count);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_12_VariablePtr2(int*,int*,int))
