
//VuxInter/Demo/_1T_Begin.c/ArrayForm2_6fdec093.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ArrayForm2(unsigned int))
#ifdef _VUDEBUG
static void ArrayForm2_vpls_(unsigned int num){ VuxDbgBrkP()
{
    float temp;
    unsigned int i;
    unsigned int j;
    num = num + 1;
    for(i=0; i<265; i++)
    {
        for(j = j=i+1; j<265; j++)
        {
            if(gBuff[i] > gBuff[j])
            {
                temp = gBuff[i];
                gBuff[i] = gBuff[j];
                gBuff[j] = temp;
            }
        }
    }
}}
#else
static void ArrayForm2_vpls_(unsigned int num){VUX_VARIABLE(1) VUX_VARIABLE(2) __VUFNID__(0);VuxDbp(0,0,14);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    float temp; VUXLV("float",temp,1);
VUXRLNFVB(2,2,2);    unsigned int i; VUXLV("unsigned int",i,2);
VUXRLNFVB(3,3,3);    unsigned int j; VUXLV("unsigned int",j,3);
VUXRLNF(4,4);    num = num + 1;VUXRBF(2,5);
    for(i=0;(VUXRCS0(1,7)&&( i<265)&&VUXRC1(1));VUXRBF(3,6), i++)
    {VUXRBR_IN(1,2);{VUXRBF(4,8);
        for(j = j=i+1;(VUXRCS0(2,10)&&( j<265)&&VUXRC1(2));VUXRBF(5,9), j++)
        {VUXRBR_IN(2,4);{
            if((VUXRCS0(3,11)&&(gBuff[i] > gBuff[j])&&VUXRC1(3)))
            {VUXRBR(6);{
VUXRB(6);VUXRLNF(9,12);                temp = gBuff[i];
VUXRLNF(10,13);                gBuff[i] = gBuff[j];
VUXRLNF(11,14);                gBuff[j] = temp;
            }}
VUXRBR_ELSE(7);
        }}VUXRBR_OUT(2, 5);

    }}VUXRBR_OUT(1, 3);

}VUXFRTNE();}
#endif

static void ArrayForm2_vpls(unsigned int num)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {ArrayForm2(num); return;}
	else if(VuxIsRepeatRun()) {ArrayForm2_vpls_(num); return;}

#ifdef _VUDEBUG
    { VuxIsDebugPlug() ? ArrayForm2_vpls_(num) : ArrayForm2(num);
#else
    {ArrayForm2_vpls_(num);
#endif
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/ArrayForm2(unsigned int))
