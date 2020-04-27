
//VuxInter/Demo/_2T_SendMail.c/_03_read_mails_9b5da8b0.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_read_mails(char*,size_t))
#ifdef _VUDEBUG
static Mail* _03_read_mails_vpls_(char* p_str,size_t buf_size){ VuxDbgBrkP()
{
    Mail* p_Mail = 0;
    Mail* p_Prev = 0;
    char mail_text[64];

    while(*p_str)
    {
        memset(mail_text, 0, sizeof(char)*64);
        //读取一个mail的字符串
        if(_02_read_mail_one_text(&p_str, mail_text, 64))
        {
            //解析成Mail对象指针
            Mail* p_one_mail = _01_read_mail_one(mail_text, 64);
            if(p_one_mail != 0)
            {
                //加入链表
                if(p_Prev == 0)
                {
                    p_Mail = p_one_mail;
                }
                else
                {
                    p_Prev->p_next = p_one_mail;
                }
                p_Prev = p_one_mail;
            }
        }
    }
    /*[学习提示：回调赋值]    返回值是一个单向链表，可用回调赋值，在数据表格中通过填写数组      来判断整个链表，只需要一行数据。	回调赋值用于将难以表格驱动的数据类型，转换成易于表格驱动的数据类型，	  关于回调赋值的更多说明，请查看帮助：数据表格之二。	*/
    return p_Mail;
}}
#else
static Mail* _03_read_mails_vpls_(char* p_str,size_t buf_size){VUX_VARIABLE(1)  __VUFNINFO__("_03_read_mails","Mail*",0);VuxDbp(0,0,13);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    Mail* p_Mail = 0; VUXLV("Mail*",p_Mail,1);
VUXRLNFVB(2,2,2);    Mail* p_Prev = 0; VUXLV("Mail*",p_Prev,2);
VUXRLNFVB(3,3,3);    char mail_text[64]; VUXLVA("char[64]",mail_text,3);

    while((VUXRCS0(1,4)&&(*p_str)&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
VUXRB(2);VUXRLNF(4,5);        memset(mail_text, 0, sizeof(char)*64);
        //读取一个mail的字符串
        if((VUXRCS0(2,6)&&(_02_read_mail_one_text(&p_str, mail_text, 64))&&VUXRC1(2)))
        {VUXRBR(4);{
            //解析成Mail对象指针
VUXRBV(3);VUXRLNFVB(5,7,4);            Mail* p_one_mail = _01_read_mail_one(mail_text, 64); VUXLV("Mail*",p_one_mail,4);
            if((VUXRCS0(3,8)&&(p_one_mail != 0)&&VUXRC1(3)))
            {VUXRBR(5);{
                //加入链表
                if((VUXRCS0(4,9)&&(p_Prev == 0)&&VUXRC1(4)))
                {VUXRBR(6);{
VUXRB(4);VUXRLNF(6,10);                    p_Mail = p_one_mail;
                }}
                else
                {VUXRBR(7);{
VUXRB(5);VUXRLNF(7,11);                    p_Prev->p_next = p_one_mail;
                }}
VUXRB(6);VUXRLNF(8,12);                p_Prev = p_one_mail;
            }}
VUXRBR_ELSE(8);
        }}
VUXRBR_ELSE(9);
    }}VUXRBR_OUT(1, 3);

    /*[学习提示：回调赋值]    返回值是一个单向链表，可用回调赋值，在数据表格中通过填写数组      来判断整个链表，只需要一行数据。	回调赋值用于将难以表格驱动的数据类型，转换成易于表格驱动的数据类型，	  关于回调赋值的更多说明，请查看帮助：数据表格之二。	*/
VUXRB(7);VUXRLNF(9,13);    {Mail* __vurtv__= p_Mail;VUXFRTY();}
}}
#endif

static Mail* _03_read_mails_vpls(char* p_str,size_t buf_size)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_read_mails(p_str,buf_size);}
	else if(VuxIsRepeatRun()) {return _03_read_mails_vpls_(p_str,buf_size);}

#ifdef _VUDEBUG
    {Mail* vuxRet =  VuxIsDebugPlug() ? _03_read_mails_vpls_(p_str,buf_size) : _03_read_mails(p_str,buf_size);
#else
    {Mail* vuxRet = _03_read_mails_vpls_(p_str,buf_size);
#endif
    TEST_ASSERT_RETURN("Mail*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_read_mails(char*,size_t))
