
//VuxInter/Demo/_2T_SendMail.c/_01_read_mail_one_fe3cae85.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_01_read_mail_one(const char*,size_t))
#ifdef _VUDEBUG
static Mail* _01_read_mail_one_vpls_(const char* p_str,size_t size){ VuxDbgBrkP()
{
    size_t i;
    char *p_src, *p_des; 
    BOOL find_at = 0;  //是否有@
    BOOL find_dot = 0; //@后是否有.

    /*[学习提示：建议]    本文件的代码源于实际项目，测试比较复杂，如不易理解，建议先	  学习基础示例：      _4T_DataBasic.cpp：数据表格基础      _5T_InsideIO.cpp： 底层输入、局部输入与局部输出      _6T_WhiteBox.cpp： 白盒覆盖	*/

    /*[学习提示：建议]    测试已编写的代码，比边开发边测试难得多，测试他人编写的代码则更难，	  建议在_2Y_SendMail.c文件中，用Easy TDD方式编写代码并测试。	*/

    /*[学习提示：底层输入]    添加：在左边函数代码窗口，双击函数名，如malloc。    填值：不填值则调用实际代码，填值格式与其他数据相同。    举例：malloc() return在用例1填NULL，其他用例不填，	      则用例1返回NULL，其他用例正常申请内存。	*/
    Mail* p_mail = (Mail*)vmck_malloc(sizeof(Mail));
 
    if(p_mail == 0)
    {
        return 0;
    }
    memset(p_mail, 0, sizeof(Mail));

    //拷贝字符串并检查格式
    i = 0;
    for(; i<size; i++)
    {
        char ch = p_str[i];
        if(ch == '@')
        { find_at = 1;
        }
        else if(ch == '.' && find_at)
        { find_dot = 1;
        }
        p_mail->mail[i] = ch;
    }

    //格式不正确
    if(!find_at || !find_dot)
    {
        free(p_mail);
        return 0;
    }

    //拷贝name和server
    i = 0;
    p_src = (char*)p_mail->mail;
    p_des = (char*)p_mail->name;
    while(*p_src)
    {
        char ch = *p_src++;
        if(ch == '@')
        {
            p_des = p_mail->server;
            i = 0;
            continue;
        }
        p_des[i] = ch;
        i++;
    }

    return p_mail;
}}
#else
static Mail* _01_read_mail_one_vpls_(const char* p_str,size_t size){VUX_VARIABLE(2) VUX_VARIABLE(5)  __VUFNINFO__("_01_read_mail_one","Mail*",0);VuxDbp(0,0,35);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    size_t i; VUXLV("size_t",i,1);
VUXRLNFVB(2,2,2);    char *p_src, *p_des; VUXLV("char*",p_src,2); VUXLVS("char*",p_des,3); 
VUXRLNFVB(3,3,4);    BOOL find_at = 0; VUXLV("BOOL",find_at,4);  //是否有@
VUXRLNFVB(4,4,5);    BOOL find_dot = 0; VUXLV("BOOL",find_dot,5); //@后是否有.

    /*[学习提示：建议]    本文件的代码源于实际项目，测试比较复杂，如不易理解，建议先	  学习基础示例：      _4T_DataBasic.cpp：数据表格基础      _5T_InsideIO.cpp： 底层输入、局部输入与局部输出      _6T_WhiteBox.cpp： 白盒覆盖	*/

    /*[学习提示：建议]    测试已编写的代码，比边开发边测试难得多，测试他人编写的代码则更难，	  建议在_2Y_SendMail.c文件中，用Easy TDD方式编写代码并测试。	*/

    /*[学习提示：底层输入]    添加：在左边函数代码窗口，双击函数名，如malloc。    填值：不填值则调用实际代码，填值格式与其他数据相同。    举例：malloc() return在用例1填NULL，其他用例不填，	      则用例1返回NULL，其他用例正常申请内存。	*/
VUXRLNFVB(5,5,6);    Mail* p_mail = (Mail*)vmck_malloc(sizeof(Mail)); VUXLV("Mail*",p_mail,6);
 
    if((VUXRCS0(1,6)&&(p_mail == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(6,7);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(3);VUXRLNF(7,8);    memset(p_mail, 0, sizeof(Mail));

    //拷贝字符串并检查格式
VUXRLNF(8,9);    i = 0;VUXRBF(4,10);
    for(;(VUXRCS0(2,12)&&( i<size)&&VUXRC1(2));VUXRBF(5,11), i++)
    {VUXRBR_LOOP(2,4,110);{
VUXRBV(6);VUXRLNFVB(10,13,7);        char ch = p_str[i]; VUXLV("char",ch,7);
        if((VUXRCS0(3,14)&&(ch == '@')&&VUXRC1(3)))
        {VUXRBR(6);{VUXRB(7);VUXRLNF(11,15); find_at = 1;
        }}
        else if( VUXAC1(5,find_at) && (VUXRCS0(4,16)&&(ch == '.')&&VUXRC1(4)) &&(VUXRCS0(5,17)&&( find_at)&&VUXRC1(5)))
        {VUXRBR(7);{VUXRB(8);VUXRLNF(12,18); find_dot = 1;
        }}
VUXRBR_ELSE(8);
VUXRB(9);VUXRLNF(13,19);        p_mail->mail[i] = ch;
    }}VUXRBR_OUT(2, 5);


    //格式不正确
    if( VUXAC1(7,!find_dot) && (VUXRCS0(6,20)&&(!find_at)&&VUXRC1(6)) ||(VUXRCS0(7,21)&&( !find_dot)&&VUXRC1(7)))
    {VUXRBR(9);{
VUXRB(10);VUXRLNF(14,22);        free(p_mail);
VUXRLNF(15,23);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(10);

    //拷贝name和server
VUXRB(11);VUXRLNF(16,24);    i = 0;
VUXRLNF(17,25);    p_src = (char*)p_mail->mail;
VUXRLNF(18,26);    p_des = (char*)p_mail->name;
    while((VUXRCS0(8,27)&&(*p_src)&&VUXRC1(8)))
    {VUXRBR_LOOP(5,11,111);{
VUXRBV(12);VUXRLNFVB(19,28,8);        char ch = *p_src++; VUXLV("char",ch,8);
        if((VUXRCS0(9,29)&&(ch == '@')&&VUXRC1(9)))
        {VUXRBR(13);{
VUXRB(13);VUXRLNF(20,30);            p_des = p_mail->server;
VUXRLNF(21,31);            i = 0;
VUXRLNF(22,32);VUXSEN(11,1,32);            continue;
        }}
VUXRBR_ELSE(14);
VUXRB(14);VUXRLNF(23,33);        p_des[i] = ch;
VUXRLNF(24,34);        i++;
    }}VUXRBR_OUT(5, 12);


VUXRB(15);VUXRLNF(25,35);    {Mail* __vurtv__= p_mail;VUXFRTY();}
}}
#endif

static Mail* _01_read_mail_one_vpls(const char* p_str,size_t size)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _01_read_mail_one(p_str,size);}
	else if(VuxIsRepeatRun()) {return _01_read_mail_one_vpls_(p_str,size);}

#ifdef _VUDEBUG
    {Mail* vuxRet =  VuxIsDebugPlug() ? _01_read_mail_one_vpls_(p_str,size) : _01_read_mail_one(p_str,size);
#else
    {Mail* vuxRet = _01_read_mail_one_vpls_(p_str,size);
#endif
    TEST_ASSERT_RETURN("Mail*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_01_read_mail_one(const char*,size_t))
