
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_06_Interrupt_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_06_Interrupt(int))
#ifdef _VUDEBUG
int CInsideIO::_06_Interrupt_vpls_(int arg){ VuxDbgBrkP()
{
    _INTERRUPT_(int,giVar,'a',0);   
    /*[ѧϰ��ʾ��ģ���ж�]    ������Ƕ��ʽ���ԡ�����жϿ�����ɶ�ȫ�ֱ������޸ģ�	  �Ҵ���Ĺ����߼��漰��ȫ�ֱ��������������λ��ģ���жϡ�	����������ж�λ�ã��Ҽ��˵�ѡ��ģ���жϡ���	*/    
    //... ��������ʡ��
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
int CInsideIO::_06_Interrupt_vpls_(int arg){__VUFNINFO__("_06_Interrupt","int",0);VuxDbp(0,0,3);
{VUXRB(1);
    _INTERRUPT_(int,giVar,'a',0);   
    /*[ѧϰ��ʾ��ģ���ж�]    ������Ƕ��ʽ���ԡ�����жϿ�����ɶ�ȫ�ֱ������޸ģ�	  �Ҵ���Ĺ����߼��漰��ȫ�ֱ��������������λ��ģ���жϡ�	����������ж�λ�ã��Ҽ��˵�ѡ��ģ���жϡ���	*/    
    //... ��������ʡ��
    if((VUXRCS0(1,1)&&(giVar > 1)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(1,2);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(2,3);        {int __vurtv__= 0;VUXFRTY();}
    }}
}}
#endif

int CInsideIO::_06_Interrupt_vpls(int arg)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO::_06_Interrupt(arg);}
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
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO::_06_Interrupt(int))
