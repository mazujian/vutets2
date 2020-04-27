
//VuxInter/Demo/_1T_Begin.c/_03_strtrml_ok_a105e1aa.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_strtrml_ok(char*))
#ifdef _VUDEBUG
static char* _03_strtrml_ok_vpls_(char* str){ VuxDbgBrkP()
{
    char* ptr = str; //保存初始指针
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

    //看看左边空格的数量对不对
_OUTPUTC_(int,count,'A');

    //复位指针
    str = ptr;

    //移动字符串，覆盖左边空格
    while(*str)
    {
        *str = *(str+count);
        str++;
    }

    //复位指针
    str = ptr;
    return str;

   /*[学习提示：eTDD小结]    即使是这种简单的函数，也很难保证一次性写正确，传统的开发方式下，需要	大量时间进行调试，而eTDD方式下，编码与测试同步完成，而且开发过程	中，程序行为可视，很舒服。更重要的是，经过测试的代码，质量要高一个层次。	对于有一定复杂度的程序，开发合格代码的效率，eTDD方式会高五倍以上。	*/

   /*[学习提示：体验eTDD]    请用IDE或文本编辑器打开Samples/Demo/目录下的	_1U_Begin.c或_1Y_Begin.c，自行编写strtrml()函数的代码，体验eTDD过程，	其中，_1U_Begin.c中的strtrml()已建立测试用例，_1Y_Begin.c则是初始状态。	更多更复杂的体验：_8Y_String.c _2Y_SendMail.c _3Y_MyClass.cpp。	*/
}}
#else
static char* _03_strtrml_ok_vpls_(char* str){VUX_VARIABLE(2) VUX_VARIABLE(3)  __VUFNINFO__("_03_strtrml_ok","char*",0);VuxDbp(0,0,12);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    char* ptr = str; VUXLV("char*",ptr,1); //保存初始指针
VUXRLNFVB(2,2,2);    int count = 0; VUXLV("int",count,2); //左边空格的数量

    //判断空指针
    if((VUXRCS0(1,3)&&(str == 0)&&VUXRC1(1)))
    {VUXRBR(2);{VUXRB(2);VUXRLNF(3,4); {char* __vurtv__= str;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

    //计算左边空格的数量
    while((VUXRCS0(2,5)&&(*str++ == ' ')&&VUXRC1(2)))
    {VUXRBR_LOOP(2,4,110);{
VUXRB(3);VUXRLNF(4,6);        count++;
    }}VUXRBR_OUT(2, 5);


    //看看左边空格的数量对不对
_OUTPUTC_(int,count,'A');

    //复位指针
VUXRB(4);VUXRLNF(5,7);    str = ptr;

    //移动字符串，覆盖左边空格
    while((VUXRCS0(3,8)&&(*str)&&VUXRC1(3)))
    {VUXRBR_LOOP(3,6,109);{
VUXRB(5);VUXRLNF(6,9);        *str = *(str+count);
VUXRLNF(7,10);        str++;
    }}VUXRBR_OUT(3, 7);


    //复位指针
VUXRB(6);VUXRLNF(8,11);    str = ptr;
VUXRLNF(9,12);    {char* __vurtv__= str;VUXFRTY();}

   /*[学习提示：eTDD小结]    即使是这种简单的函数，也很难保证一次性写正确，传统的开发方式下，需要	大量时间进行调试，而eTDD方式下，编码与测试同步完成，而且开发过程	中，程序行为可视，很舒服。更重要的是，经过测试的代码，质量要高一个层次。	对于有一定复杂度的程序，开发合格代码的效率，eTDD方式会高五倍以上。	*/

   /*[学习提示：体验eTDD]    请用IDE或文本编辑器打开Samples/Demo/目录下的	_1U_Begin.c或_1Y_Begin.c，自行编写strtrml()函数的代码，体验eTDD过程，	其中，_1U_Begin.c中的strtrml()已建立测试用例，_1Y_Begin.c则是初始状态。	更多更复杂的体验：_8Y_String.c _2Y_SendMail.c _3Y_MyClass.cpp。	*/
}}
#endif

static char* _03_strtrml_ok_vpls(char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_strtrml_ok(str);}
	else if(VuxIsRepeatRun()) {return _03_strtrml_ok_vpls_(str);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _03_strtrml_ok_vpls_(str) : _03_strtrml_ok(str);
#else
    {char* vuxRet = _03_strtrml_ok_vpls_(str);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_strtrml_ok(char*))
