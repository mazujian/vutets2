
//VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_08_call_sub_test_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO2::_08_call_sub_test(int))
#ifdef _VUDEBUG
void CInsideIO2::_08_call_sub_test_vpls_(int a){ VuxDbgBrkP()
{
    /*[ѧϰ��ʾ���ײ�����֮��]    �ײ㺯��������ʱ������skip it������    �ܶ�ʱ��Ҫ������ĳ���������Ƿ����ĳ����������ʱ�������õײ�    �����call times�������ڱ������������Ԥ�ڵ��ô�����	*/
    endless_loop_sub(); //�ײ㺯����ѭ��
    
    error_sub(); //�ײ㺯������
    
    if(a <  0)
    {
        //���ж���ĳЩ�������Ƿ������report_error()
        report_error();
    }
    
    //��������ʡ��
}}
#else
void CInsideIO2::_08_call_sub_test_vpls_(int a){__VUFNID__(0);VuxDbp(0,0,4);
{
    /*[ѧϰ��ʾ���ײ�����֮��]    �ײ㺯��������ʱ������skip it������    �ܶ�ʱ��Ҫ������ĳ���������Ƿ����ĳ����������ʱ�������õײ�    �����call times�������ڱ������������Ԥ�ڵ��ô�����	*/
VUXRB(1);VUXRLNF(1,1);    endless_loop_sub(); //�ײ㺯����ѭ��
    
VUXRLNF(2,2);    error_sub(); //�ײ㺯������
    
    if((VUXRCS0(1,3)&&(a <  0)&&VUXRC1(1)))
    {VUXRBR(2);{
        //���ж���ĳЩ�������Ƿ������report_error()
VUXRB(2);VUXRLNF(3,4);        report_error();
    }}
VUXRBR_ELSE(3);
    
    //��������ʡ��
}VUXFRTNE();}
#endif

void CInsideIO2::_08_call_sub_test_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {CInsideIO2::_08_call_sub_test(a); return;}
	else if(VuxIsRepeatRun()) {_08_call_sub_test_vpls_(a); return;}

#ifdef _VUDEBUG
    { VuxIsDebugPlug() ? _08_call_sub_test_vpls_(a) : _08_call_sub_test(a);
#else
    {_08_call_sub_test_vpls_(a);
#endif
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO2::_08_call_sub_test(int))
