
//VuxInter/Demo/autocase.c/ac73_reset_global_type_03_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac73_reset_global_type_03(int))
#ifdef _VUDEBUG
static int ac73_reset_global_type_03_vpls_(int a){ VuxDbgBrkP()
{
    if(((MyData*)gData)->data.a == a)
    {
        return 1;
    }
    return 0;
}}
#else
static int ac73_reset_global_type_03_vpls_(int a){__VUFNINFO__("ac73_reset_global_type_03","int",0);VuxDbp(0,0,3);
{
    if((VUXRCS0(1,1)&&(((MyData*)gData)->data.a == a)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,2);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(2);VUXRLNF(2,3);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int ac73_reset_global_type_03_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac73_reset_global_type_03(a);}
	else if(VuxIsRepeatRun()) {return ac73_reset_global_type_03_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac73_reset_global_type_03_vpls_(a) : ac73_reset_global_type_03(a);
#else
    {int vuxRet = ac73_reset_global_type_03_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac73_reset_global_type_03(int))
