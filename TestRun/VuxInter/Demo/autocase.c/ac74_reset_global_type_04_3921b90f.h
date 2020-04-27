
//VuxInter/Demo/autocase.c/ac74_reset_global_type_04_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac74_reset_global_type_04(int))
#ifdef _VUDEBUG
static int ac74_reset_global_type_04_vpls_(int a){ VuxDbgBrkP()
{
    MyData* pData = (MyData*)gData;
    if(pData->data.a == a)
    {
        return 1;
    }
    return 0;
}}
#else
static int ac74_reset_global_type_04_vpls_(int a){__VUFNINFO__("ac74_reset_global_type_04","int",0);VuxDbp(0,0,4);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    MyData* pData = (MyData*)gData; VUXLV("MyData*",pData,1);
    if((VUXRCS0(1,2)&&(pData->data.a == a)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(3);VUXRLNF(3,4);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int ac74_reset_global_type_04_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac74_reset_global_type_04(a);}
	else if(VuxIsRepeatRun()) {return ac74_reset_global_type_04_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac74_reset_global_type_04_vpls_(a) : ac74_reset_global_type_04(a);
#else
    {int vuxRet = ac74_reset_global_type_04_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac74_reset_global_type_04(int))
