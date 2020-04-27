
//VuxInter/Demo/_4U_DataBasic.cpp/_02_Unicode2_e277ef9c.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_02_Unicode2(short,WCHAR,double,unsigned short*))
#ifdef _VUDEBUG
static short _02_Unicode2_vpls_(short sh,WCHAR wch,double dl,unsigned short* wstr){ VuxDbgBrkP()
{
    return sh;
}}
#else
static short _02_Unicode2_vpls_(short sh,WCHAR wch,double dl,unsigned short* wstr){__VUFNINFO__("_02_Unicode2","short",0);VuxDbp(0,0,1);
{
VUXRB(1);VUXRLNF(1,1);    {short __vurtv__= sh;VUXFRTY();}
}}
#endif

static short _02_Unicode2_vpls(short sh,WCHAR wch,double dl,unsigned short* wstr)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _02_Unicode2(sh,wch,dl,wstr);}
	else if(VuxIsRepeatRun()) {return _02_Unicode2_vpls_(sh,wch,dl,wstr);}

#ifdef _VUDEBUG
    {short vuxRet =  VuxIsDebugPlug() ? _02_Unicode2_vpls_(sh,wch,dl,wstr) : _02_Unicode2(sh,wch,dl,wstr);
#else
    {short vuxRet = _02_Unicode2_vpls_(sh,wch,dl,wstr);
#endif
    TEST_ASSERT_RETURN("short", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_02_Unicode2(short,WCHAR,double,unsigned short*))
