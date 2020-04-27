
//VuxInter/Demo/_2U_SendMail.c/_02_read_mail_one_text2_2e278b31.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_02_read_mail_one_text2(char**,char*,size_t))
#ifdef _VUDEBUG
static BOOL _02_read_mail_one_text2_vpls_(char** pp_str,char* p_mail_text,size_t size){ VuxDbgBrkP()
{
    size_t i = 0;
    size_t count = 0;
    char* p_str = 0;
    if(pp_str == 0)
    {
        return 0;
    }
    p_str = *pp_str;
    
    //读取字符串，直到发现\n或\r\n
    while(*p_str)
    {
        char ch = *p_str++;
        if(ch == '\n' || ch == '\r')
        {
            char next = *p_str;
            if(ch == '\r' && next == '\n')
            {
                p_str++;
            }
            *pp_str = p_str;//指向下一个mail的开头
            break;
        }
        else
        {
            if(count <= size-1)
            { 
                p_mail_text[count++] = ch;
            }
            else
            {
                count++;
            } //超长则丢弃
        }
    }
    /*[学习提示：局部输出]    添加：在左边函数代码窗口，点击输出位置，右键菜单选择"局部输出"。    填值：如要判断输出，则填值。无论是否判断，均会打印实际结果。    举例：可在retrun前输出并判断count的计算结果。	*/
    *pp_str = p_str;
    return count > 0 && count <= size; //超长返回FALSE
}}
#else
static BOOL _02_read_mail_one_text2_vpls_(char** pp_str,char* p_mail_text,size_t size){VUX_VARIABLE(2)  __VUFNINFO__("_02_read_mail_one_text2","BOOL",0);VuxDbp(0,0,21);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    size_t i = 0; VUXLV("size_t",i,1);
VUXRLNFVB(2,2,2);    size_t count = 0; VUXLV("size_t",count,2);
VUXRLNFVB(3,3,3);    char* p_str = 0; VUXLV("char*",p_str,3);
    if((VUXRCS0(1,4)&&(pp_str == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(4,5);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
VUXRB(3);VUXRLNF(5,6);    p_str = *pp_str;
    
    //读取字符串，直到发现\n或\r\n
    while((VUXRCS0(2,7)&&(*p_str)&&VUXRC1(2)))
    {VUXRBR_LOOP(2,4,110);{
VUXRBV(4);VUXRLNFVB(6,8,4);        char ch = *p_str++; VUXLV("char",ch,4);
        if( VUXAC1(4,ch == '\r') && (VUXRCS0(3,9)&&(ch == '\n')&&VUXRC1(3)) ||(VUXRCS0(4,10)&&( ch == '\r')&&VUXRC1(4)))
        {VUXRBR(6);{
VUXRBV(5);VUXRLNFVB(7,11,5);            char next = *p_str; VUXLV("char",next,5);
            if( VUXAC1(6,next == '\n') && (VUXRCS0(5,12)&&(ch == '\r')&&VUXRC1(5)) &&(VUXRCS0(6,13)&&( next == '\n')&&VUXRC1(6)))
            {VUXRBR(7);{
VUXRB(6);VUXRLNF(8,14);                p_str++;
            }}
VUXRBR_ELSE(8);
VUXRB(7);VUXRLNF(9,15);            *pp_str = p_str;//指向下一个mail的开头
VUXRLNF(10,16);VUXSEN(4,1,16);            break;
        }}
        else
        {VUXRBR(9);{
            if((VUXRCS0(7,17)&&(count <= size-1)&&VUXRC1(7)))
            {VUXRBR(10);{ 
VUXRB(8);VUXRLNF(11,18);                p_mail_text[count++] = ch;
            }}
            else
            {VUXRBR(11);{
VUXRB(9);VUXRLNF(12,19);                count++;
            }} //超长则丢弃
        }}
    }}VUXRBR_OUT(2, 5);

    /*[学习提示：局部输出]    添加：在左边函数代码窗口，点击输出位置，右键菜单选择"局部输出"。    填值：如要判断输出，则填值。无论是否判断，均会打印实际结果。    举例：可在retrun前输出并判断count的计算结果。	*/
VUXRB(10);VUXRLNF(13,20);    *pp_str = p_str;
VUXRLNF(14,21);    {BOOL __vurtv__= ( count > 0 && count <= size);VUXFRTY();} //超长返回FALSE
}}
#endif

static BOOL _02_read_mail_one_text2_vpls(char** pp_str,char* p_mail_text,size_t size)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _02_read_mail_one_text2(pp_str,p_mail_text,size);}
	else if(VuxIsRepeatRun()) {return _02_read_mail_one_text2_vpls_(pp_str,p_mail_text,size);}

#ifdef _VUDEBUG
    {BOOL vuxRet =  VuxIsDebugPlug() ? _02_read_mail_one_text2_vpls_(pp_str,p_mail_text,size) : _02_read_mail_one_text2(pp_str,p_mail_text,size);
#else
    {BOOL vuxRet = _02_read_mail_one_text2_vpls_(pp_str,p_mail_text,size);
#endif
    TEST_ASSERT_RETURN("BOOL", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_02_read_mail_one_text2(char**,char*,size_t))
