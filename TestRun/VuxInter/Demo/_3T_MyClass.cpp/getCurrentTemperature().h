
//VuxInter/Demo/_3T_MyClass.cpp/getCurrentTemperature().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/getCurrentTemperature())
#ifdef _VUDEBUG
static int getCurrentTemperature_vpls_(){ VuxDbgBrkP()
{
    char d;//ÓÐ×¢ÊÍ
    char e;
    int a;
    int b;
    int c;
    int x;
    int y;
    int z;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    int u;
    int v;
    int w;

    return gAirInfo.temperature;
}}
#else
static int getCurrentTemperature_vpls_(){__VUFNINFO__("getCurrentTemperature","int",0);VuxDbp(0,0,18);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    char d; VUXLV("char",d,1);//ÓÐ×¢ÊÍ
VUXRLNFVB(2,2,2);    char e; VUXLV("char",e,2);
VUXRLNFVB(3,3,3);    int a; VUXLV("int",a,3);
VUXRLNFVB(4,4,4);    int b; VUXLV("int",b,4);
VUXRLNFVB(5,5,5);    int c; VUXLV("int",c,5);
VUXRLNFVB(6,6,6);    int x; VUXLV("int",x,6);
VUXRLNFVB(7,7,7);    int y; VUXLV("int",y,7);
VUXRLNFVB(8,8,8);    int z; VUXLV("int",z,8);
VUXRLNFVB(9,9,9);    int j; VUXLV("int",j,9);
VUXRLNFVB(10,10,10);    int k; VUXLV("int",k,10);
VUXRLNFVB(11,11,11);    int l; VUXLV("int",l,11);
VUXRLNFVB(12,12,12);    int m; VUXLV("int",m,12);
VUXRLNFVB(13,13,13);    int n; VUXLV("int",n,13);
VUXRLNFVB(14,14,14);    int o; VUXLV("int",o,14);
VUXRLNFVB(15,15,15);    int u; VUXLV("int",u,15);
VUXRLNFVB(16,16,16);    int v; VUXLV("int",v,16);
VUXRLNFVB(17,17,17);    int w; VUXLV("int",w,17);

VUXRLNF(18,18);    {int __vurtv__= gAirInfo.temperature;VUXFRTY();}
}}
#endif

static int getCurrentTemperature_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return getCurrentTemperature();}
	else if(VuxIsRepeatRun()) {return getCurrentTemperature_vpls_();}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? getCurrentTemperature_vpls_() : getCurrentTemperature();
#else
    {int vuxRet = getCurrentTemperature_vpls_();
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/getCurrentTemperature())
