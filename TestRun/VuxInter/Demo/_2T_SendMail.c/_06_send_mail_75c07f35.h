
//VuxInter/Demo/_2T_SendMail.c/_06_send_mail_75c07f35.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_06_send_mail(Mail*,const char*,const char*))
#ifdef _VUDEBUG
static int _06_send_mail_vpls_(Mail* p_mails,const char* p_subject,const char* p_content){ VuxDbgBrkP()
{
    /*[学习提示：全局变量]    全局变量默认不加入表格，可手动加入：	在用例数据界面，点击“添加变量到表格”，并选择要加入的全局变量。	全局变量要每个用例设定初值，否则用例间会互相影响。	*/
    /*[学习提示：底层输入与多次赋值]    send_one可用底层输入返回需要的值，填值时用分号分隔不限数量的多个值，如：	TRUE;FALSE，表示第一次循环返回TRUE，第二次循环返回FALSE。	*/
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
    /*[学习提示：全局变量]    全局变量默认不加入表格，可手动加入：	在用例数据界面，点击“添加变量到表格”，并选择要加入的全局变量。	全局变量要每个用例设定初值，否则用例间会互相影响。	*/
    /*[学习提示：底层输入与多次赋值]    send_one可用底层输入返回需要的值，填值时用分号分隔不限数量的多个值，如：	TRUE;FALSE，表示第一次循环返回TRUE，第二次循环返回FALSE。	*/
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
