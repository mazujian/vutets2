
//VuxInter/Demo/autocase.c/ac52_while_true_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac52_while_true(int))
#ifdef _VUDEBUG
static int ac52_while_true_vpls_(int a){ VuxDbgBrkP()
{
    int b = 0;

    if(a > 0)
    {
        while( 1 )
        {
            b++;
        }
    }

    for(;;)
    {

    } 

    return b;
}}
#else
static int ac52_while_true_vpls_(int a){VUX_VARIABLE(2) VUX_VARIABLE(3)  __VUFNINFO__("ac52_while_true","int",0);VuxDbp(0,0,6);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int b = 0; VUXLV("int",b,1);

    if((VUXRCS0(1,2)&&(a > 0)&&VUXRC1(1)))
    {VUXRBR(2);{
        while((VUXRCS0(2,3)&&( 1)&&VUXRC1(2)) )
        {VUXRBR_LOOP(2,3,116);{
VUXRB(2);VUXRLNF(2,4);            b++;
        }}VUXRBR_OUT(2, 4);

    }}
VUXRBR_ELSE(5);VUXRBF(3,5);

    for(;;)
    {VUXRBR_LOOP(3,6,109);{

    }}VUXRBR_OUT(3, 7);
 

VUXRB(4);VUXRLNF(3,6);    {int __vurtv__= b;VUXFRTY();}
}}
#endif

static int ac52_while_true_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac52_while_true(a);}
	else if(VuxIsRepeatRun()) {return ac52_while_true_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac52_while_true_vpls_(a) : ac52_while_true(a);
#else
    {int vuxRet = ac52_while_true_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac52_while_true(int))
