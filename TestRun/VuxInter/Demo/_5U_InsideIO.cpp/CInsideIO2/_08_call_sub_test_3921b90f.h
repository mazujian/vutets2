
//VuxInter/Demo/_5U_InsideIO.cpp/CInsideIO2/_08_call_sub_test_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO2::_08_call_sub_test(int))
#ifdef _VUDEBUG
void CInsideIO2::_08_call_sub_test_vpls_(int a){ VuxDbgBrkP()
{
    /*[学习提示：底层输入之二]    底层函数崩溃或超时，可设skip it跳过。    很多时候，要测试在某种输入下是否调用某个函数，这时可以利用底层    输入的call times变量，在表格中设置它的预期调用次数。	*/
    endless_loop_sub(); //底层函数死循环
    
    error_sub(); //底层函数崩溃
    
    if(a <  0)
    {
        //需判断在某些条件下是否调用了report_error()
        report_error();
    }
    
    //其他代码省略
}}
#else
void CInsideIO2::_08_call_sub_test_vpls_(int a){__VUFNID__(0);VuxDbp(0,0,4);
{
    /*[学习提示：底层输入之二]    底层函数崩溃或超时，可设skip it跳过。    很多时候，要测试在某种输入下是否调用某个函数，这时可以利用底层    输入的call times变量，在表格中设置它的预期调用次数。	*/
VUXRB(1);VUXRLNF(1,1);    endless_loop_sub(); //底层函数死循环
    
VUXRLNF(2,2);    error_sub(); //底层函数崩溃
    
    if((VUXRCS0(1,3)&&(a <  0)&&VUXRC1(1)))
    {VUXRBR(2);{
        //需判断在某些条件下是否调用了report_error()
VUXRB(2);VUXRLNF(3,4);        report_error();
    }}
VUXRBR_ELSE(3);
    
    //其他代码省略
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
