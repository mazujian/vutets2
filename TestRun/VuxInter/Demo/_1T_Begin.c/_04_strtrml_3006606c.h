
//VuxInter/Demo/_1T_Begin.c/_04_strtrml_3006606c.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_04_strtrml(const char*,const char*,const char*))
#ifdef _VUDEBUG
static int _04_strtrml_vpls_(const char* mail_path,const char* p_subject,const char* p_content){ VuxDbgBrkP()
{
   /*[学习提示：综合应用]    本示例涉及底层输入、局部输出、回调赋值等技术，	应在学完其他示例后，才学习本示例。	*/

    Mail* p_mail = 0;
    Mail* p_mails = 0;
    FILE* p_file = 0;

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

    //删除每个p_mail中name成员中左边空格
    p_mail = p_mails;
    while(p_mail != 0)
    {
        char* str = p_mail->name;
        char* ptr = str; //保存初始指针
        int count = 0; //左边空格的数量
        
        //计算左边空格的数量
        while(*str++ == ' ')
        {
            count++;
        }
        
        //复位指针
        str = ptr;
        
        //移动字符串，覆盖左边空格
        while(*str)
        {
            *str = *(str+count);
            str++;
        }
        
        p_mail = p_mail->p_next;
    }
    _OUTPUT_(Mail*,p_mails,'A');

    //发送邮件
    return _06_send_mail(p_mails, p_subject, p_content);
}}
#else
static int _04_strtrml_vpls_(const char* mail_path,const char* p_subject,const char* p_content){VUX_VARIABLE(3) VUX_VARIABLE(4) VUX_VARIABLE(5)  __VUFNINFO__("_04_strtrml","int",0);VuxDbp(0,0,22);
{
   /*[学习提示：综合应用]    本示例涉及底层输入、局部输出、回调赋值等技术，	应在学完其他示例后，才学习本示例。	*/

VUXRBV(1);VUXRLNFVB(1,1,1);    Mail* p_mail = 0; VUXLV("Mail*",p_mail,1);
VUXRLNFVB(2,2,2);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,2);
VUXRLNFVB(3,3,3);    FILE* p_file = 0; VUXLV("FILE*",p_file,3);

    //打开文件
VUXRLNF(4,4);    p_file = vmck_fopen(mail_path, "rb+");
    if((VUXRCS0(1,5)&&(p_file == 0)&&VUXRC1(1)))
    {VUXRBR(2);{VUXRB(2);VUXRLNF(5,6); {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

    //读取并解析mail列表
VUXRB(3);VUXRLNF(6,7);    p_mails = _05_read_mails_from_file(p_file);
    if((VUXRCS0(2,8)&&(p_mails == 0)&&VUXRC1(2)))
    {VUXRBR(4);{VUXRB(4);VUXRLNF(7,9); {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(5);

    //删除每个p_mail中name成员中左边空格
VUXRB(5);VUXRLNF(8,10);    p_mail = p_mails;
    while((VUXRCS0(3,11)&&(p_mail != 0)&&VUXRC1(3)))
    {VUXRBR_LOOP(3,6,109);{
VUXRBV(6);VUXRLNFVB(9,12,4);        char* str = p_mail->name; VUXLV("char*",str,4);
VUXRLNFVB(10,13,5);        char* ptr = str; VUXLV("char*",ptr,5); //保存初始指针
VUXRLNFVB(11,14,6);        int count = 0; VUXLV("int",count,6); //左边空格的数量
        
        //计算左边空格的数量
        while((VUXRCS0(4,15)&&(*str++ == ' ')&&VUXRC1(4)))
        {VUXRBR_LOOP(4,8,117);{
VUXRB(7);VUXRLNF(12,16);            count++;
        }}VUXRBR_OUT(4, 9);

        
        //复位指针
VUXRB(8);VUXRLNF(13,17);        str = ptr;
        
        //移动字符串，覆盖左边空格
        while((VUXRCS0(5,18)&&(*str)&&VUXRC1(5)))
        {VUXRBR_LOOP(5,10,118);{
VUXRB(9);VUXRLNF(14,19);            *str = *(str+count);
VUXRLNF(15,20);            str++;
        }}VUXRBR_OUT(5, 11);

        
VUXRB(10);VUXRLNF(16,21);        p_mail = p_mail->p_next;
    }}VUXRBR_OUT(3, 7);
VUXRB(11);
    _OUTPUT_(Mail*,p_mails,'A');

    //发送邮件
VUXRLNF(17,22);    {int __vurtv__= ( _06_send_mail(p_mails, p_subject, p_content));VUXFRTY();}
}}
#endif

static int _04_strtrml_vpls(const char* mail_path,const char* p_subject,const char* p_content)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _04_strtrml(mail_path,p_subject,p_content);}
	else if(VuxIsRepeatRun()) {return _04_strtrml_vpls_(mail_path,p_subject,p_content);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _04_strtrml_vpls_(mail_path,p_subject,p_content) : _04_strtrml(mail_path,p_subject,p_content);
#else
    {int vuxRet = _04_strtrml_vpls_(mail_path,p_subject,p_content);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_04_strtrml(const char*,const char*,const char*))
