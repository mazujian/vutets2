
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_04_LocalInput1_d23b6c4e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_04_LocalInput1(int,int))
#ifdef _VUDEBUG
int CInsideIO::_04_LocalInput1_vpls_(int index,int arg){ VuxDbgBrkP()
{
    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    *(gDataA.b.parr[index]) Ҫ��ʼ�������ѣ���ʵ����ֻ��һ��int	  ���ͱ�����    �����þֲ�����(�滻ѡ�д���)�����ʽ�滻Ϊһ�����ڱ����ֱ�ӽӽӽӽ�	  ���õ�int���ͱ���	*/
    int m = _VALUE_(int,x,'a',0/**(gDataA.b.parr[index])*/) * arg;
    
    if(m <= 10)
    {
        //��������
        return m;
    }

    if(m <= 100)
    {
        //��������
        return m;
    }

    return m;
}}
#else
int CInsideIO::_04_LocalInput1_vpls_(int index,int arg){__VUFNINFO__("_04_LocalInput1","int",0);VuxDbp(0,0,6);
{
    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    *(gDataA.b.parr[index]) Ҫ��ʼ�������ѣ���ʵ����ֻ��һ��int	  ���ͱ�����    �����þֲ�����(�滻ѡ�д���)�����ʽ�滻Ϊһ�����ڱ����ֱ�ӽӽӽӽ�	  ���õ�int���ͱ���	*/
VUXRBV(1);VUXRLNFVB(1,1,1);    int m = _VALUE_(int,x,'a',0/**(gDataA.b.parr[index])*/) * arg; VUXLV("int",m,1);
    
    if((VUXRCS0(1,2)&&(m <= 10)&&VUXRC1(1)))
    {VUXRBR(2);{
        //��������
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= m;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

    if((VUXRCS0(2,4)&&(m <= 100)&&VUXRC1(2)))
    {VUXRBR(4);{
        //��������
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
