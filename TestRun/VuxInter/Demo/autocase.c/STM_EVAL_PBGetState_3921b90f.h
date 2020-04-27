
//VuxInter/Demo/autocase.c/STM_EVAL_PBGetState_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/STM_EVAL_PBGetState(int))
#ifdef _VUDEBUG
static uint8_t STM_EVAL_PBGetState_vpls_(int a){ VuxDbgBrkP()
{
    return 1;
}}
#else
static uint8_t STM_EVAL_PBGetState_vpls_(int a){__VUFNINFO__("STM_EVAL_PBGetState","uint8_t",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {uint8_t __vurtv__= 1;VUXFRTY();}
}}
#endif

static uint8_t STM_EVAL_PBGetState_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return STM_EVAL_PBGetState(a);}
	else if(VuxIsRepeatRun()) {return STM_EVAL_PBGetState_vpls_(a);}

#ifdef _VUDEBUG
    {uint8_t vuxRet =  VuxIsDebugPlug() ? STM_EVAL_PBGetState_vpls_(a) : STM_EVAL_PBGetState(a);
#else
    {uint8_t vuxRet = STM_EVAL_PBGetState_vpls_(a);
#endif
    TEST_ASSERT_RETURN("uint8_t", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/STM_EVAL_PBGetState(int))
