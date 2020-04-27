
//VuxInter/Demo/_1T_Begin.c/_03_strtrml_2_a105e1aa.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_strtrml_2(char*))
#ifdef _VUDEBUG
static char* _03_strtrml_2_vpls_(char* str){ VuxDbgBrkP()
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

    /*[学习提示：局部输出]    添加：在左边函数代码窗口，点击输出位置，右键菜单选择"局部输出"。    填值：如要判断输出，则填值。无论是否判断，均会打印实际结果。    如果只是编码过程中打印数据，不需要判断，可以直接在代码中添加：_OUTPUTC_(type,name/>>int,'c');	*/    

    //看看左边空格的数量对不对
_OUTPUTC_(int,count,'A');

    //移动字符串，覆盖左边空格
    while(*str)
    {
        *str = *(str+count);
        str++;
    }

    /*[学习提示：观察程序行为找出错误]	代码好像写完了，对不对呢？再看看程序行为，结果是完全不对的。    观察输出，发现指针偏移到预期之外的位置，显然，计算空格和移动	  字符串都造成了指针的偏移，移动字符串前和返回前必须对指针复位。	修改后的代码见下一个函数：_03_strtrml_ok	*/

    return str;
}}
#else
static char* _03_strtrml_2_vpls_(char* str){VUX_VARIABLE(2) VUX_VARIABLE(3)  __VUFNINFO__("_03_strtrml_2","char*",0);VuxDbp(0,0,9);
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


    /*[学习提示：局部输出]    添加：在左边函数代码窗口，点击输出位置，右键菜单选择"局部输出"。    填值：如要判断输出，则填值。无论是否判断，均会打印实际结果。    如果只是编码过程中打印数据，不需要判断，可以直接在代码中添加：_OUTPUTC_(type,name/>>int,'c');	*/    

    //看看左边空格的数量对不对
_OUTPUTC_(int,count,'A');

    //移动字符串，覆盖左边空格
    while((VUXRCS0(3,6)&&(*str)&&VUXRC1(3)))
    {VUXRBR_LOOP(3,6,109);{
VUXRB(4);VUXRLNF(4,7);        *str = *(str+count);
VUXRLNF(5,8);        str++;
    }}VUXRBR_OUT(3, 7);


    /*[学习提示：观察程序行为找出错误]	代码好像写完了，对不对呢？再看看程序行为，结果是完全不对的。    观察输出，发现指针偏移到预期之外的位置，显然，计算空格和移动	  字符串都造成了指针的偏移，移动字符串前和返回前必须对指针复位。	修改后的代码见下一个函数：_03_strtrml_ok	*/

VUXRB(5);VUXRLNF(6,9);    {char* __vurtv__= str;VUXFRTY();}
}}
#endif

static char* _03_strtrml_2_vpls(char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_strtrml_2(str);}
	else if(VuxIsRepeatRun()) {return _03_strtrml_2_vpls_(str);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _03_strtrml_2_vpls_(str) : _03_strtrml_2(str);
#else
    {char* vuxRet = _03_strtrml_2_vpls_(str);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_strtrml_2(char*))
