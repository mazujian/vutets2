
//VuxInter/Demo/_2T_SendMail.c/_06_send_mail_75c07f35.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_06_send_mail(Mail*,const char*,const char*))
#ifdef _VUDEBUG
static int _06_send_mail_vpls_(Mail* p_mails,const char* p_subject,const char* p_content){ VuxDbgBrkP()
{
    /*[ѧϰ��ʾ��ȫ�ֱ���]    ȫ�ֱ���Ĭ�ϲ������񣬿��ֶ����룺	���������ݽ��棬�������ӱ�������񡱣���ѡ��Ҫ�����ȫ�ֱ�����	ȫ�ֱ���Ҫÿ�������趨��ֵ������������ụ��Ӱ�졣	*/
    /*[ѧϰ��ʾ���ײ��������θ�ֵ]    send_one���õײ����뷵����Ҫ��ֵ����ֵʱ�÷ֺŷָ����������Ķ��ֵ���磺	TRUE;FALSE����ʾ��һ��ѭ������TRUE���ڶ���ѭ������FALSE��	*/
    while(p_mails != 0)
    {
        if(send_one(p_mails, p_subject, p_content))
        {
            g_sucess_count++;
        }
        else
        {
            g_failed_count++;
        }

        p_mails = p_mails->p_next;
    }

    _10_free_mails(p_mails);
    return g_sucess_count + g_failed_count;
}}
#else
static int _06_send_mail_vpls_(Mail* p_mails,const char* p_subject,const char* p_content){VUX_VARIABLE(1)  __VUFNINFO__("_06_send_mail","int",0);VuxDbp(0,0,7);
{
    /*[ѧϰ��ʾ��ȫ�ֱ���]    ȫ�ֱ���Ĭ�ϲ������񣬿��ֶ����룺	���������ݽ��棬�������ӱ�������񡱣���ѡ��Ҫ�����ȫ�ֱ�����	ȫ�ֱ���Ҫÿ�������趨��ֵ������������ụ��Ӱ�졣	*/
    /*[ѧϰ��ʾ���ײ��������θ�ֵ]    send_one���õײ����뷵����Ҫ��ֵ����ֵʱ�÷ֺŷָ����������Ķ��ֵ���磺	TRUE;FALSE����ʾ��һ��ѭ������TRUE���ڶ���ѭ������FALSE��	*/
    while((VUXRCS0(1,1)&&(p_mails != 0)&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
        if((VUXRCS0(2,2)&&(send_one(p_mails, p_subject, p_content))&&VUXRC1(2)))
        {VUXRBR(4);{
VUXRB(1);VUXRLNF(1,3);            g_sucess_count++;
        }}
        else
        {VUXRBR(5);{
VUXRB(2);VUXRLNF(2,4);            g_failed_count++;
        }}

VUXRB(3);VUXRLNF(3,5);        p_mails = p_mails->p_next;
    }}VUXRBR_OUT(1, 3);


VUXRB(4);VUXRLNF(4,6);    _10_free_mails(p_mails);
VUXRLNF(5,7);    {int __vurtv__= g_sucess_count + g_failed_count;VUXFRTY();}
}}
#endif

static int _06_send_mail_vpls(Mail* p_mails,const char* p_subject,const char* p_content)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _06_send_mail(p_mails,p_subject,p_content);}
	else if(VuxIsRepeatRun()) {return _06_send_mail_vpls_(p_mails,p_subject,p_content);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _06_send_mail_vpls_(p_mails,p_subject,p_content) : _06_send_mail(p_mails,p_subject,p_content);
#else
    {int vuxRet = _06_send_mail_vpls_(p_mails,p_subject,p_content);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_06_send_mail(Mail*,const char*,const char*))
