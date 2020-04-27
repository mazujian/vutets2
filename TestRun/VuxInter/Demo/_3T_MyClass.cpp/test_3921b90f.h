
//VuxInter/Demo/_3T_MyClass.cpp/test_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/test(int))
static void test_vpls_(int a){__VUFNID__(0);VMCKDS vmckds[1]={{1,"int","a",&a}}; VuxDbp(vmckds,1,2);
{
VUXRB(1);VUXRLNF(1,1);    VUXFRTN();

VUXRLNFVB(2,2,1);    CString str; VUXLV("CString",str,1);
}VUXFRTNE();}

static void test_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {test(a); return;}
	else if(VuxIsRepeatRun()) {test_vpls_(a); return;}

    {test_vpls_(a);
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/test(int))
