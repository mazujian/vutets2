
//VuxInter/Demo/_2U_SendMail.c/_04_read_tail2_84f76416.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_04_read_tail2(char*,size_t,char**))
#ifdef _VUDEBUG
static size_t _04_read_tail2_vpls_(char* p_str,size_t buf_size,char** pp_tail){ VuxDbgBrkP()
{
    size_t i;
    size_t count = 0;
    if(buf_size == 0)
    { return 0;
    }

    //查找被截断的字符串
    for(i=buf_size-1; i>=0; i--)
    {
        char ch = p_str[i];
        if(ch == '\n')
        { break;
        }
        count++;
    }

    //拷贝被截断的字符串，并将原字符串中被截断位置设为'\0'
    if(count == 0)
    { return 0;
    }
    *pp_tail = (char*)malloc(count+1);
    memcpy(*pp_tail, p_str+(buf_size-count), count);
    (*pp_tail)[count] = '\0';
    p_str[buf_size-count] = '\0'; 
    return count;
}}
#else
static size_t _04_read_tail2_vpls_(char* p_str,size_t buf_size,char** pp_tail){VUX_VARIABLE(2)  __VUFNINFO__("_04_read_tail2","size_t",0);VuxDbp(0,0,18);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    size_t i; VUXLV("size_t",i,1);
VUXRLNFVB(2,2,2);    size_t count = 0; VUXLV("size_t",count,2);
    if((VUXRCS0(1,3)&&(buf_size == 0)&&VUXRC1(1)))
    {VUXRBR(2);{VUXRB(2);VUXRLNF(3,4); {size_t __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);VUXRBF(3,5);

    //查找被截断的字符串
    for(i=buf_size-1;(VUXRCS0(2,7)&&( i>=0)&&VUXRC1(2));VUXRBF(4,6), i--)
    {VUXRBR_LOOP(2,4,110);{
VUXRBV(5);VUXRLNFVB(6,8,3);        char ch = p_str[i]; VUXLV("char",ch,3);
        if((VUXRCS0(3,9)&&(ch == '\n')&&VUXRC1(3)))
        {VUXRBR(6);{VUXRB(6);VUXRLNF(7,10);VUXSEN(4,1,10); break;
        }}
VUXRBR_ELSE(7);
VUXRB(7);VUXRLNF(8,11);        count++;
    }}VUXRBR_OUT(2, 5);


    //拷贝被截断的字符串，并将原字符串中被截断位置设为'\0'
    if((VUXRCS0(4,12)&&(count == 0)&&VUXRC1(4)))
    {VUXRBR(8);{VUXRB(8);VUXRLNF(9,13); {size_t __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(9);
VUXRB(9);VUXRLNF(10,14);    *pp_tail = (char*)malloc(count+1);
VUXRLNF(11,15);    memcpy(*pp_tail, p_str+(buf_size-count), count);
VUXRLNF(12,16);    (*pp_tail)[count] = '\0';
VUXRLNF(13,17);    p_str[buf_size-count] = '\0'; 
VUXRLNF(14,18);    {size_t __vurtv__= count;VUXFRTY();}
}}
#endif

static size_t _04_read_tail2_vpls(char* p_str,size_t buf_size,char** pp_tail)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _04_read_tail2(p_str,buf_size,pp_tail);}
	else if(VuxIsRepeatRun()) {return _04_read_tail2_vpls_(p_str,buf_size,pp_tail);}

#ifdef _VUDEBUG
    {size_t vuxRet =  VuxIsDebugPlug() ? _04_read_tail2_vpls_(p_str,buf_size,pp_tail) : _04_read_tail2(p_str,buf_size,pp_tail);
#else
    {size_t vuxRet = _04_read_tail2_vpls_(p_str,buf_size,pp_tail);
#endif
    TEST_ASSERT_RETURN("size_t", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_04_read_tail2(char*,size_t,char**))
