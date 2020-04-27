
//VuxInter/Demo/autocase.c/ac01_white_box_689fb5a2.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac01_white_box(int,int,int))
#ifdef _VUDEBUG
static int ac01_white_box_vpls_(int A,int B,int X){ VuxDbgBrkP()
{
    if(A>1 && B==0)
    {
        X = X/A;
    }

    if(A==2 || X>1)
    {
        X = X+1;
    }

    return X;
}}
#else
static int ac01_white_box_vpls_(int A,int B,int X){__VUFNINFO__("ac01_white_box","int",0);VuxDbp(0,0,7);
{
    if( VUXAC1(2,B==0) && (VUXRCS0(1,1)&&(A>1)&&VUXRC1(1)) &&(VUXRCS0(2,2)&&( B==0)&&VUXRC1(2)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,3);        X = X/A;
    }}
VUXRBR_ELSE(3);

    if( VUXAC1(4,X>1) && (VUXRCS0(3,4)&&(A==2)&&VUXRC1(3)) ||(VUXRCS0(4,5)&&( X>1)&&VUXRC1(4)))
    {VUXRBR(4);{
VUXRB(2);VUXRLNF(2,6);        X = X+1;
    }}
VUXRBR_ELSE(5);

VUXRB(3);VUXRLNF(3,7);    {int __vurtv__= X;VUXFRTY();}
}}
#endif

static int ac01_white_box_vpls(int A,int B,int X)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac01_white_box(A,B,X);}
	else if(VuxIsRepeatRun()) {return ac01_white_box_vpls_(A,B,X);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac01_white_box_vpls_(A,B,X) : ac01_white_box(A,B,X);
#else
    {int vuxRet = ac01_white_box_vpls_(A,B,X);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac01_white_box(int,int,int))
