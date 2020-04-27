
//VuxInter/Demo/_2U_SendMail.c/_08_send_mail2_28cb21bb.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_08_send_mail2(ListItem*,const char*,const char*))
#ifdef _VUDEBUG
static int _08_send_mail2_vpls_(ListItem* p_mails,const char* p_subject,const char* p_content){ VuxDbgBrkP()
{
    /*[学习提示：回调赋值与类型重设]    第一个参数是双向链表，可用回调赋值，在表格中填数组来初始化。    ListItem中的data成员是void*类型，需重设类型，方法：	在测试数据界面，选中一行，右键菜单选择“修改变量类型”	*/

    //循环发送所有邮件
    while(p_mails != 0)
    {
        if(send_one2(p_mails, p_subject, p_content))
        {
            g_sucess_count++;
        }
        else
        {
            g_failed_count++;
        }
        p_mails = p_mails->p_next;
    }

    //p_mails未释放
    return g_sucess_count + g_failed_count;
}}
#else
static int _08_send_mail2_vpls_(ListItem* p_mails,const char* p_subject,const char* p_content){VUX_VARIABLE(1)  __VUFNINFO__("_08_send_mail2","int",0);VuxDbp(0,0,6);
{
    /*[学习提示：回调赋值与类型重设]    第一个参数是双向链表，可用回调赋值，在表格中填数组来初始化。    ListItem中的data成员是void*类型，需重设类型，方法：	在测试数据界面，选中一行，右键菜单选择“修改变量类型”	*/

    //循环发送所有邮件
    while((VUXRCS0(1,1)&&(p_mails != 0)&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
        if((VUXRCS0(2,2)&&(send_one2(p_mails, p_subject, p_content))&&VUXRC1(2)))
        {VUXRBR(4);{
VUXRB(1);VUXRLNF(1,3);            g_sucess_count++;
        }}
        else
        {VUXRBR(5);{
VUXRB(2);VUXRLNF(2,4);            g_failed_count++;
        }}
VUXRB(3);VUXRLNF(3,5);        p_mails = p_mails->p_next;
    }}VUXRBR_OUT(1, 3);


    //p_mails未释放
VUXRB(4);VUXRLNF(4,6);    {int __vurtv__= g_sucess_count + g_failed_count;VUXFRTY();}
}}
#endif

static int _08_send_mail2_vpls(ListItem* p_mails,const char* p_subject,const char* p_content)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _08_send_mail2(p_mails,p_subject,p_content);}
	else if(VuxIsRepeatRun()) {return _08_send_mail2_vpls_(p_mails,p_subject,p_content);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _08_send_mail2_vpls_(p_mails,p_subject,p_content) : _08_send_mail2(p_mails,p_subject,p_content);
#else
    {int vuxRet = _08_send_mail2_vpls_(p_mails,p_subject,p_content);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_08_send_mail2(ListItem*,const char*,const char*))
