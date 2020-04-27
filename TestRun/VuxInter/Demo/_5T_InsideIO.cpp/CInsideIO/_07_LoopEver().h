
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_07_LoopEver().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_07_LoopEver())
#ifdef _VUDEBUG
int CInsideIO::_07_LoopEver_vpls_(){ VuxDbgBrkP()
{   
    int count = 0;
    int index = 0;
    /*[学习提示：死循环处理]	循环条件是while(TRUE)，且没有退出判定。	测试时用局部输入(替换选中代码)，将while(TRUE)中TRUE替换为	  一个变量，在表格中用多次赋值先设为若干个TRUE，最后设为FALSE。	*/
    while(_VALUE_(int,wc,'a',0/*1*/))
    {
        //没有退出条件的死循环通常用于永续运行的代码，
        //如监听网络的程序。这里只用简单代码代替
        if(++index % 3 == 0)
        {
            count++;
        }
    }
    
    /*[学习提示：没有循环变量的死循环处理]	使用插入普通代码，插入break;，不会污染产品代码	*/
    for(;;)
    {
        count++;
        _INSERT_(break;)
    }

    return count;
}}
#else
int CInsideIO::_07_LoopEver_vpls_(){VUX_VARIABLE(1) VUX_VARIABLE(3)  __VUFNINFO__("_07_LoopEver","int",0);VuxDbp(0,0,8);
{   
VUXRBV(1);VUXRLNFVB(1,1,1);    int count = 0; VUXLV("int",count,1);
VUXRLNFVB(2,2,2);    int index = 0; VUXLV("int",index,2);
    /*[学习提示：死循环处理]	循环条件是while(TRUE)，且没有退出判定。	测试时用局部输入(替换选中代码)，将while(TRUE)中TRUE替换为	  一个变量，在表格中用多次赋值先设为若干个TRUE，最后设为FALSE。	*/
    while((VUXRCS0(1,3)&&(_VALUE_(int,wc,'a',0/*1*/))&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
        //没有退出条件的死循环通常用于永续运行的代码，
        //如监听网络的程序。这里只用简单代码代替
        if((VUXRCS0(2,4)&&(++index % 3 == 0)&&VUXRC1(2)))
        {VUXRBR(4);{
VUXRB(2);VUXRLNF(3,5);            count++;
        }}
VUXRBR_ELSE(5);
    }}VUXRBR_OUT(1, 3);
VUXRBF(3,6);
    
    /*[学习提示：没有循环变量的死循环处理]	使用插入普通代码，插入break;，不会污染产品代码	*/
    for(;;)
    {VUXRBR_LOOP(3,6,109);{
VUXRB(4);VUXRLNF(4,7);        count++;
        _INSERT_(break;)
    }}VUXRBR_OUT(3, 7);


VUXRB(5);VUXRLNF(5,8);    {int __vurtv__= count;VUXFRTY();}
}}
#endif

int CInsideIO::_07_LoopEver_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO::_07_LoopEver();}
	else if(VuxIsRepeatRun()) {return _07_LoopEver_vpls_();}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _07_LoopEver_vpls_() : _07_LoopEver();
#else
    {int vuxRet = _07_LoopEver_vpls_();
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO::_07_LoopEver())
