
//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_08_call_time_test(int))
void CInsideIO::_08_call_time_test_vpls_(int a){__VUFNID__(0);VMCKDS vmckds[1]={{1,"int","a",&a}}; VuxDbp(vmckds,1,3);
{
    /*[ѧϰ��ʾ���ײ�����֮��]    �ܶ�ʱ��Ҫ������ĳ���������Ƿ����ĳ����������ʱ�������õײ�    �����call times�����������ǣ������õײ����봰�ڣ�ѡ��call times��    ���ڱ������������Ԥ�ڵ��ô�����	*/
    if((VUXRCS0(1,1)&&(a <  0)&&VUXRC1(1)))
    {VUXRBR(2); VUXSBN(2,0){
VUXRB(1);VUXRLNF(1,2);        report_error();
    } VUXSEN(2,0,3)}
VUXRBR_ELSE(3);
    
    //��������ʡ��
}VUXFRTNE();}

void CInsideIO::_08_call_time_test_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {CInsideIO::_08_call_time_test(a); return;}
	else if(VuxIsRepeatRun()) {_08_call_time_test_vpls_(a); return;}

    {_08_call_time_test_vpls_(a);
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO::_08_call_time_test(int))
