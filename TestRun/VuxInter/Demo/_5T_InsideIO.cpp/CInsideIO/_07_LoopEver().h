
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_07_LoopEver().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_07_LoopEver())
#ifdef _VUDEBUG
int CInsideIO::_07_LoopEver_vpls_(){ VuxDbgBrkP()
{   
    int count = 0;
    int index = 0;
    /*[ѧϰ��ʾ����ѭ������]	ѭ��������while(TRUE)����û���˳��ж���	����ʱ�þֲ�����(�滻ѡ�д���)����while(TRUE)��TRUE�滻Ϊ	  һ���������ڱ�����ö�θ�ֵ����Ϊ���ɸ�TRUE�������ΪFALSE��	*/
    while(_VALUE_(int,wc,'a',0/*1*/))
    {
        //û���˳���������ѭ��ͨ�������������еĴ��룬
        //���������ĳ�������ֻ�ü򵥴������
        if(++index % 3 == 0)
        {
            count++;
        }
    }
    
    /*[ѧϰ��ʾ��û��ѭ����������ѭ������]	ʹ�ò�����ͨ���룬����break;��������Ⱦ��Ʒ����	*/
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
    /*[ѧϰ��ʾ����ѭ������]	ѭ��������while(TRUE)����û���˳��ж���	����ʱ�þֲ�����(�滻ѡ�д���)����while(TRUE)��TRUE�滻Ϊ	  һ���������ڱ�����ö�θ�ֵ����Ϊ���ɸ�TRUE�������ΪFALSE��	*/
    while((VUXRCS0(1,3)&&(_VALUE_(int,wc,'a',0/*1*/))&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
        //û���˳���������ѭ��ͨ�������������еĴ��룬
        //���������ĳ�������ֻ�ü򵥴������
        if((VUXRCS0(2,4)&&(++index % 3 == 0)&&VUXRC1(2)))
        {VUXRBR(4);{
VUXRB(2);VUXRLNF(3,5);            count++;
        }}
VUXRBR_ELSE(5);
    }}VUXRBR_OUT(1, 3);
VUXRBF(3,6);
    
    /*[ѧϰ��ʾ��û��ѭ����������ѭ������]	ʹ�ò�����ͨ���룬����break;��������Ⱦ��Ʒ����	*/
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
