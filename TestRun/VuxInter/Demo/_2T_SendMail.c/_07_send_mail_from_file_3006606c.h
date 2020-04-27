
//VuxInter/Demo/_2T_SendMail.c/_07_send_mail_from_file_3006606c.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_07_send_mail_from_file(const char*,const char*,const char*))
#ifdef _VUDEBUG
static int _07_send_mail_from_file_vpls_(const char* mail_path,const char* p_subject,const char* p_content){ VuxDbgBrkP()
{
    /*[学习提示：简化测试工作]    此函数也要打开文件，但与_05_read_mails_from_file不同，并不直接对	    文件中的大量数据进行计算，因此，可以不操作实际文件，		用底层输入完成测试，简化测试工作，具体请看用例数据中的说明。	*/

    Mail* p_mails = 0;
    FILE* p_file = 0;
    if(mail_path == 0)
    {
        return 0;
    }

    //打开文件
    p_file = vmck_fopen(mail_path, "rb+");
    if(p_file == 0)
    { return 0;
    }

    //读取并解析mail列表
    p_mails = _05_read_mails_from_file(p_file);
    if(p_mails == 0)
    { return 0;
    }

    //发送邮件
    return _06_send_mail(p_mails, p_subject, p_content);
}}
#else
static int _07_send_mail_from_file_vpls_(const char* mail_path,const char* p_subject,const char* p_content){__VUFNINFO__("_07_send_mail_from_file","int",0);VuxDbp(0,0,11);
{
    /*[学习提示：简化测试工作]    此函数也要打开文件，但与_05_read_mails_from_file不同，并不直接对	    文件中的大量数据进行计算，因此，可以不操作实际文件，		用底层输入完成测试，简化测试工作，具体请看用例数据中的说明。	*/

VUXRBV(1);VUXRLNFVB(1,1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
VUXRLNFVB(2,2,2);    FILE* p_file = 0; VUXLV("FILE*",p_file,2);
    if((VUXRCS0(1,3)&&(mail_path == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(3,4);        {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

    //打开文件
VUXRB(3);VUXRLNF(4,5);    p_file = vmck_fopen(mail_path, "rb+");
    if((VUXRCS0(2,6)&&(p_file == 0)&&VUXRC1(2)))
    {VUXRBR(4);{VUXRB(4);VUXRLNF(5,7); {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(5);

    //读取并解析mail列表
VUXRB(5);VUXRLNF(6,8);    p_mails = _05_read_mails_from_file(p_file);
    if((VUXRCS0(3,9)&&(p_mails == 0)&&VUXRC1(3)))
    {VUXRBR(6);{VUXRB(6);VUXRLNF(7,10); {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(7);

    //发送邮件
VUXRB(7);VUXRLNF(8,11);    {int __vurtv__= ( _06_send_mail(p_mails, p_subject, p_content));VUXFRTY();}
}}
#endif

static int _07_send_mail_from_file_vpls(const char* mail_path,const char* p_subject,const char* p_content)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _07_send_mail_from_file(mail_path,p_subject,p_content);}
	else if(VuxIsRepeatRun()) {return _07_send_mail_from_file_vpls_(mail_path,p_subject,p_content);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _07_send_mail_from_file_vpls_(mail_path,p_subject,p_content) : _07_send_mail_from_file(mail_path,p_subject,p_content);
#else
    {int vuxRet = _07_send_mail_from_file_vpls_(mail_path,p_subject,p_content);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_07_send_mail_from_file(const char*,const char*,const char*))
