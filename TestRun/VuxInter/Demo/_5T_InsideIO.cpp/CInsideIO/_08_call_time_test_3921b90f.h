
//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_08_call_time_test(int))
void CInsideIO::_08_call_time_test_vpls_(int a){__VUFNID__(0);VMCKDS vmckds[1]={{1,"int","a",&a}}; VuxDbp(vmckds,1,3);
{
    /*[学习提示：底层输入之二]    很多时候，要测试在某种输入下是否调用某个函数，这时可以利用底层    输入的call times变量，方法是：在设置底层输入窗口，选中call times，    并在表格中设置它的预期调用次数。	*/
    if((VUXRCS0(1,1)&&(a <  0)&&VUXRC1(1)))
    {VUXRBR(2); VUXSBN(2,0){
VUXRB(1);VUXRLNF(1,2);        report_error();
    } VUXSEN(2,0,3)}
VUXRBR_ELSE(3);
    
    //其他代码省略
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
