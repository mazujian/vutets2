
//VuxInter/Demo/_2T_SendMail.c/sm_main_a0335ffc.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/sm_main(int,char**))
#ifdef _VUDEBUG
static int sm_main_vpls_(int arg,char** args){ VuxDbgBrkP()
{
    _07_send_mail_from_file(mail_path, mail_subject, mail_content);
    return 0;
}}
#else
static int sm_main_vpls_(int arg,char** args){__VUFNINFO__("sm_main","int",0);VuxDbp(0,0,2);
{
VUXRB(1);VUXRLNF(1,1);    _07_send_mail_from_file(mail_path, mail_subject, mail_content);
VUXRLNF(2,2);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int sm_main_vpls(int arg,char** args)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return sm_main(arg,args);}
	else if(VuxIsRepeatRun()) {return sm_main_vpls_(arg,args);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? sm_main_vpls_(arg,args) : sm_main(arg,args);
#else
    {int vuxRet = sm_main_vpls_(arg,args);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/sm_main(int,char**))
