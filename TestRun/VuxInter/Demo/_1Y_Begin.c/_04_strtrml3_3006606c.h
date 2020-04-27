
//VuxInter/Demo/_1Y_Begin.c/_04_strtrml3_3006606c.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_04_strtrml3(const char*,const char*,const char*))
#ifdef _VUDEBUG
static int _04_strtrml3_vpls_(const char* mail_path,const char* p_subject,const char* p_content){ VuxDbgBrkP()
{
    Mail* p_mails = 0;
    //发送邮件
    return _06_send_mail(p_mails, p_subject, p_content);
}}
#else
static int _04_strtrml3_vpls_(const char* mail_path,const char* p_subject,const char* p_content){__VUFNINFO__("_04_strtrml3","int",0);VuxDbp(0,0,2);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
    //发送邮件
VUXRLNF(2,2);    {int __vurtv__= ( _06_send_mail(p_mails, p_subject, p_content));VUXFRTY();}
}}
#endif

static int _04_strtrml3_vpls(const char* mail_path,const char* p_subject,const char* p_content)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _04_strtrml3(mail_path,p_subject,p_content);}
	else if(VuxIsRepeatRun()) {return _04_strtrml3_vpls_(mail_path,p_subject,p_content);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _04_strtrml3_vpls_(mail_path,p_subject,p_content) : _04_strtrml3(mail_path,p_subject,p_content);
#else
    {int vuxRet = _04_strtrml3_vpls_(mail_path,p_subject,p_content);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_04_strtrml3(const char*,const char*,const char*))
