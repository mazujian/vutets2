
//VuxInter/Demo/_1T_Begin.c/test0_758ecff1.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/test0(int*))
static int test0_vpls_(int* ptr){__VUFNINFO__("test0","int",0);VMCKDS vmckds[1]={{1,"int*","ptr",&ptr}}; VuxDbp(vmckds,1,6);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int aa = 0; VUXLV("int",aa,1);
VUXRLNFVB(2,2,2);    int bb = 0; VUXLV("int",bb,2);
VUXRLNFVB(3,3,3);    int cc = *ptr; VUXLV("int",cc,3);
VUXRLNFVB(4,4,4);    int dd = 0; VUXLV("int",dd,4);
VUXRLNFVB(5,5,5);    int ee = 0; VUXLV("int",ee,5);
    
VUXRLNF(6,6);    {int __vurtv__= 0;VUXFRTY();}
}}

static int test0_vpls(int* ptr)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return test0(ptr);}
	else if(VuxIsRepeatRun()) {return test0_vpls_(ptr);}

    {int vuxRet = test0_vpls_(ptr);
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/test0(int*))
