
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_04_LocalInput1_d23b6c4e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_04_LocalInput1(int,int))
#ifdef _VUDEBUG
int CInsideIO::_04_LocalInput1_vpls_(int index,int arg){ VuxDbgBrkP()
{
    /*[学习提示：局部输入应用]    *(gDataA.b.parr[index]) 要初始化很困难，但实际上只是一个int	  类型变量。    可以用局部输入(替换选中代码)将表达式替换为一个可在表格中直接接接接接	  设置的int类型变量	*/
    int m = _VALUE_(int,x,'a',0/**(gDataA.b.parr[index])*/) * arg;
    
    if(m <= 10)
    {
        //其他代码
        return m;
    }

    if(m <= 100)
    {
        //其他代码
        return m;
    }

    return m;
}}
#else
int CInsideIO::_04_LocalInput1_vpls_(int index,int arg){__VUFNINFO__("_04_LocalInput1","int",0);VuxDbp(0,0,6);
{
    /*[学习提示：局部输入应用]    *(gDataA.b.parr[index]) 要初始化很困难，但实际上只是一个int	  类型变量。    可以用局部输入(替换选中代码)将表达式替换为一个可在表格中直接接接接接	  设置的int类型变量	*/
VUXRBV(1);VUXRLNFVB(1,1,1);    int m = _VALUE_(int,x,'a',0/**(gDataA.b.parr[index])*/) * arg; VUXLV("int",m,1);
    
    if((VUXRCS0(1,2)&&(m <= 10)&&VUXRC1(1)))
    {VUXRBR(2);{
        //其他代码
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= m;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

    if((VUXRCS0(2,4)&&(m <= 100)&&VUXRC1(2)))
    {VUXRBR(4);{
        //其他代码
VUXRB(3);VUXRLNF(3,5);        {int __vurtv__= m;VUXFRTY();}
    }}
VUXRBR_ELSE(5);

VUXRB(4);VUXRLNF(4,6);    {int __vurtv__= m;VUXFRTY();}
}}
#endif

int CInsideIO::_04_LocalInput1_vpls(int index,int arg)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO::_04_LocalInput1(index,arg);}
	else if(VuxIsRepeatRun()) {return _04_LocalInput1_vpls_(index,arg);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _04_LocalInput1_vpls_(index,arg) : _04_LocalInput1(index,arg);
#else
    {int vuxRet = _04_LocalInput1_vpls_(index,arg);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO::_04_LocalInput1(int,int))
