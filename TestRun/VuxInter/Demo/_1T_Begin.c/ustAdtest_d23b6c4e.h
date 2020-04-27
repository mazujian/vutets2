
//VuxInter/Demo/_1T_Begin.c/ustAdtest_d23b6c4e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ustAdtest(int,int))
#ifdef _VUDEBUG
static unsigned int ustAdtest_vpls_(int channel,int len){ VuxDbgBrkP()
{
    UINT32 dstAddr;
    UINT32 i = 0;
    UINT32 j = 0;
    UINT32 k = 0;
    UINT16 adLen;
    float temp1, temp2;
    switch(channel)
    {
        case 0:
        {
            dstAddr = 0xB0000000;
            adLen = *(UINT16*)0x6c0c0060;
            break;
        }
        case 1:
        {
            dstAddr = 0xB0200000;
            adLen = *(UINT16*)0x6c0c0063;
            break;
        }
        case 2:
        {
            dstAddr = 0xB0400000;
            adLen = *(UINT16*)0x6c0c0066;
            break;          
        }
        default :
        {
            dstAddr = 0xB0800000;
            adLen = *(UINT16*)0x6c0c0069;
            break;          
        }
    }
    
    *(UINT32*)dstAddr = 123;
    return *(UINT32*)dstAddr;
}}
#else
static unsigned int ustAdtest_vpls_(int channel,int len){__VUFNINFO__("ustAdtest","unsigned int",0);VuxDbp(0,0,20);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    UINT32 dstAddr; VUXLV("UINT32",dstAddr,1);
VUXRLNFVB(2,2,2);    UINT32 i = 0; VUXLV("UINT32",i,2);
VUXRLNFVB(3,3,3);    UINT32 j = 0; VUXLV("UINT32",j,3);
VUXRLNFVB(4,4,4);    UINT32 k = 0; VUXLV("UINT32",k,4);
VUXRLNFVB(5,5,5);    UINT16 adLen; VUXLV("UINT16",adLen,5);
VUXRLNFVB(6,6,6);    float temp1, temp2; VUXLV("float",temp1,6); VUXLVS("float",temp2,7);
    switch(channel)
    {
        case 0:
        {VUXRBR(2);{
VUXRB(2);VUXRLNF(7,7);            dstAddr = 0xB0000000;
VUXRLNF(8,8);            adLen = *(UINT16*)0x6c0c0060;
VUXRLNF(9,9);            break;
        }}
        case 1:
        {VUXRBR(3);{
VUXRB(3);VUXRLNF(10,10);            dstAddr = 0xB0200000;
VUXRLNF(11,11);            adLen = *(UINT16*)0x6c0c0063;
VUXRLNF(12,12);            break;
        }}
        case 2:
        {VUXRBR(4);{
VUXRB(4);VUXRLNF(13,13);            dstAddr = 0xB0400000;
VUXRLNF(14,14);            adLen = *(UINT16*)0x6c0c0066;
VUXRLNF(15,15);            break;          
        }}
        default :
        {VUXRBR(5);{
VUXRB(5);VUXRLNF(16,16);            dstAddr = 0xB0800000;
VUXRLNF(17,17);            adLen = *(UINT16*)0x6c0c0069;
VUXRLNF(18,18);            break;          
        }}
    }
    
VUXRB(6);VUXRLNF(19,19);    *(UINT32*)dstAddr = 123;
VUXRLNF(20,20);    {unsigned int __vurtv__= *(UINT32*)dstAddr;VUXFRTY();}
}}
#endif

static unsigned int ustAdtest_vpls(int channel,int len)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ustAdtest(channel,len);}
	else if(VuxIsRepeatRun()) {return ustAdtest_vpls_(channel,len);}

#ifdef _VUDEBUG
    {unsigned int vuxRet =  VuxIsDebugPlug() ? ustAdtest_vpls_(channel,len) : ustAdtest(channel,len);
#else
    {unsigned int vuxRet = ustAdtest_vpls_(channel,len);
#endif
    TEST_ASSERT_RETURN("unsigned int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ustAdtest(int,int))
