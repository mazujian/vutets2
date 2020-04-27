
//VuxInter/Demo/autocase.c/ac53_while_true2_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac53_while_true2(int))
#ifdef _VUDEBUG
static int ac53_while_true2_vpls_(int a){ VuxDbgBrkP()
{
    uint8_t Key = 0x01;
    while (Key != 0x00)
    {
        if (ReadJoystick() == 5)
        {
            return 0;
        }

        Key = STM_EVAL_PBGetState(0);
    }
}}
#else
static int ac53_while_true2_vpls_(int a){VUX_VARIABLE(1)  __VUFNINFO__("ac53_while_true2","int",0);VuxDbp(0,0,5);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    uint8_t Key = 0x01; VUXLV("uint8_t",Key,1);
    while ((VUXRCS0(1,2)&&(Key != 0x00)&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
        if ((VUXRCS0(2,3)&&(ReadJoystick() == 5)&&VUXRC1(2)))
        {VUXRBR(4);{
VUXRB(2);VUXRLNF(2,4);            {int __vurtv__= 0;VUXFRTY();}
        }}
VUXRBR_ELSE(5);

VUXRB(3);VUXRLNF(3,5);        Key = STM_EVAL_PBGetState(0);
    }}VUXRBR_OUT(1, 3);

}}
#endif

static int ac53_while_true2_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac53_while_true2(a);}
	else if(VuxIsRepeatRun()) {return ac53_while_true2_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac53_while_true2_vpls_(a) : ac53_while_true2(a);
#else
    {int vuxRet = ac53_while_true2_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac53_while_true2(int))
