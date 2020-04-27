
//VuxInter/Demo/autocase.c/ac61_path_select_689fb5a2.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac61_path_select(int,int,int))
#ifdef _VUDEBUG
static int ac61_path_select_vpls_(int a,int b,int c){ VuxDbgBrkP()
{
    int result = 0;
    int KeyB = a;
    
    if (KeyB == 0)
    {
        Extra++;
    
        if ((Extra == 2) || (Extra == 4) || (Extra == 5))
        {
            result++;
        }
        if (Extra > 2)
        { 
            result++;
        }
        if (Extra > 5)
        {
            Extra = 0;
        }
    }
    
    if(b > 0)
    {
        if ((Extra == 1) || (Extra == 5))
        {
            result++;
        }
        
        if(c > 0)
        {
            if (Extra > 1)
            {
                result++;
            }
        }
    }
    
    return result;
}}
#else
static int ac61_path_select_vpls_(int a,int b,int c){__VUFNINFO__("ac61_path_select","int",0);VuxDbp(0,0,20);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int result = 0; VUXLV("int",result,1);
VUXRLNFVB(2,2,2);    int KeyB = a; VUXLV("int",KeyB,2);
    
    if ((VUXRCS0(1,3)&&(KeyB == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(3,4);        Extra++;
    
        if (( VUXAC2(3,Extra == 4,4,Extra == 5) && (VUXRCS0(2,5)&&(Extra == 2)&&VUXRC1(2))) || ((VUXRCS0(3,6)&&(Extra == 4)&&VUXRC1(3))) || ((VUXRCS0(4,7)&&(Extra == 5)&&VUXRC1(4))))
        {VUXRBR(3);{
VUXRB(3);VUXRLNF(4,8);            result++;
        }}
VUXRBR_ELSE(4);
        if ((VUXRCS0(5,9)&&(Extra > 2)&&VUXRC1(5)))
        {VUXRBR(5);{ 
VUXRB(4);VUXRLNF(5,10);            result++;
        }}
VUXRBR_ELSE(6);
        if ((VUXRCS0(6,11)&&(Extra > 5)&&VUXRC1(6)))
        {VUXRBR(7);{
VUXRB(5);VUXRLNF(6,12);            Extra = 0;
        }}
VUXRBR_ELSE(8);
    }}
VUXRBR_ELSE(9);
    
    if((VUXRCS0(7,13)&&(b > 0)&&VUXRC1(7)))
    {VUXRBR(10);{
        if (( VUXAC1(9,Extra == 5) && (VUXRCS0(8,14)&&(Extra == 1)&&VUXRC1(8))) || ((VUXRCS0(9,15)&&(Extra == 5)&&VUXRC1(9))))
        {VUXRBR(11);{
VUXRB(6);VUXRLNF(7,16);            result++;
        }}
VUXRBR_ELSE(12);
        
        if((VUXRCS0(10,17)&&(c > 0)&&VUXRC1(10)))
        {VUXRBR(13);{
            if ((VUXRCS0(11,18)&&(Extra > 1)&&VUXRC1(11)))
            {VUXRBR(14);{
VUXRB(7);VUXRLNF(8,19);                result++;
            }}
VUXRBR_ELSE(15);
        }}
VUXRBR_ELSE(16);
    }}
VUXRBR_ELSE(17);
    
VUXRB(8);VUXRLNF(9,20);    {int __vurtv__= result;VUXFRTY();}
}}
#endif

static int ac61_path_select_vpls(int a,int b,int c)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac61_path_select(a,b,c);}
	else if(VuxIsRepeatRun()) {return ac61_path_select_vpls_(a,b,c);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac61_path_select_vpls_(a,b,c) : ac61_path_select(a,b,c);
#else
    {int vuxRet = ac61_path_select_vpls_(a,b,c);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac61_path_select(int,int,int))
