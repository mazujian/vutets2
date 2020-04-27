
//VuxInter/Demo/_6T_WhiteBox.cpp/CWhiteBox/_02_DeleteComment_9a945bd.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CWhiteBox::_02_DeleteComment(char*,char*))
#ifdef _VUDEBUG
void CWhiteBox::_02_DeleteComment_vpls_(char* pSrc,char* pDes){ VuxDbgBrkP()
{
    int len = strlen(pSrc);
    
    if(len == 0)
    {
        return;
    }
        
    bool cmmSin = false; //由//开始\n结束的单行注释
    bool cmmMul = false; //由/*开始*/结束的多行注释
    char ch = *pSrc++;
    char next = 0;
    while(ch)
    {
        if(!cmmSin && !cmmMul) //非注释
        {
            if(ch == '/') //注释开始的第一个字符
            {
                next = *pSrc;
                if(next == '\0')
                { //结束
                    break;
                }
                else if(next == '*')
                {
                    cmmMul = true;
                }
                else if(next == '/')
                {
                    cmmSin = true;
                }
                
                if(cmmMul || cmmSin)
                {
                    pSrc++; //忽略/后的一个字符
                    ch = *pSrc++;
                    continue;
                }
            }
            
            *pDes++ = ch;
            ch = *pSrc++;
        }
        else if(cmmSin) //单行注释
        {
            if(ch == '\n') //单行注释结束
            {
                cmmSin = false;
                *pDes++ = ch; //\n是不能丢的
            }
            ch = *pSrc++;
        }
        else if(cmmMul) //多行注释
        {
            if(ch == '*') //开始多行注释
            {
                next = *pSrc;
                if(next == '/')
                {
                    cmmMul = false;
                    *pSrc++; //忽略后面的/
                }
            }
            ch = *pSrc++;
        }
    }
}}
#else
void CWhiteBox::_02_DeleteComment_vpls_(char* pSrc,char* pDes){VUX_VARIABLE(2) __VUFNID__(0);VuxDbp(0,0,37);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int len = strlen(pSrc); VUXLV("int",len,1);
    
    if((VUXRCS0(1,2)&&(len == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        VUXFRTN();
    }}
VUXRBR_ELSE(3);
        
VUXRBV(3);VUXRLNFVB(3,4,2);    bool cmmSin = false; VUXLV("bool",cmmSin,2); //由//开始\n结束的单行注释
VUXRLNFVB(4,5,3);    bool cmmMul = false; VUXLV("bool",cmmMul,3); //由/*开始*/结束的多行注释
VUXRLNFVB(5,6,4);    char ch = *pSrc++; VUXLV("char",ch,4);
VUXRLNFVB(6,7,5);    char next = 0; VUXLV("char",next,5);
    while((VUXRCS0(2,8)&&(ch)&&VUXRC1(2)))
    {VUXRBR_LOOP(2,4,110);{
        if( VUXAC1(4,!cmmMul) && (VUXRCS0(3,9)&&(!cmmSin)&&VUXRC1(3)) &&(VUXRCS0(4,10)&&( !cmmMul)&&VUXRC1(4))) //非注释
        {VUXRBR(6);{
            if((VUXRCS0(5,11)&&(ch == '/')&&VUXRC1(5))) //注释开始的第一个字符
            {VUXRBR(7);{
VUXRB(4);VUXRLNF(7,12);                next = *pSrc;
                if((VUXRCS0(6,13)&&(next == '\0')&&VUXRC1(6)))
                {VUXRBR(8);{ //结束
VUXRB(5);VUXRLNF(8,14);                    break;
                }}
                else if((VUXRCS0(7,15)&&(next == '*')&&VUXRC1(7)))
                {VUXRBR(9);{
VUXRB(6);VUXRLNF(9,16);                    cmmMul = true;
                }}
                else if((VUXRCS0(8,17)&&(next == '/')&&VUXRC1(8)))
                {VUXRBR(10);{
VUXRB(7);VUXRLNF(10,18);                    cmmSin = true;
                }}
VUXRBR_ELSE(11);
                
                if( VUXAC1(10,cmmSin) && (VUXRCS0(9,19)&&(cmmMul)&&VUXRC1(9)) ||(VUXRCS0(10,20)&&( cmmSin)&&VUXRC1(10)))
                {VUXRBR(12);{
VUXRB(8);VUXRLNF(11,21);                    pSrc++; //忽略/后的一个字符
VUXRLNF(12,22);                    ch = *pSrc++;
VUXRLNF(13,23);                    continue;
                }}
VUXRBR_ELSE(13);
            }}
VUXRBR_ELSE(14);
            
VUXRB(9);VUXRLNF(14,24);            *pDes++ = ch;
VUXRLNF(15,25);            ch = *pSrc++;
        }}
        else if((VUXRCS0(11,26)&&(cmmSin)&&VUXRC1(11))) //单行注释
        {VUXRBR(15);{
            if((VUXRCS0(12,27)&&(ch == '\n')&&VUXRC1(12))) //单行注释结束
            {VUXRBR(16);{
VUXRB(10);VUXRLNF(16,28);                cmmSin = false;
VUXRLNF(17,29);                *pDes++ = ch; //\n是不能丢的
            }}
VUXRBR_ELSE(17);
VUXRB(11);VUXRLNF(18,30);            ch = *pSrc++;
        }}
        else if((VUXRCS0(13,31)&&(cmmMul)&&VUXRC1(13))) //多行注释
        {VUXRBR(18);{
            if((VUXRCS0(14,32)&&(ch == '*')&&VUXRC1(14))) //开始多行注释
            {VUXRBR(19);{
VUXRB(12);VUXRLNF(19,33);                next = *pSrc;
                if((VUXRCS0(15,34)&&(next == '/')&&VUXRC1(15)))
                {VUXRBR(20);{
VUXRB(13);VUXRLNF(20,35);                    cmmMul = false;
VUXRLNF(21,36);                    *pSrc++; //忽略后面的/
                }}
VUXRBR_ELSE(21);
            }}
VUXRBR_ELSE(22);
VUXRB(14);VUXRLNF(22,37);            ch = *pSrc++;
        }}
VUXRBR_ELSE(23);
    }}VUXRBR_OUT(2, 5);

}VUXFRTNE();}
#endif

void CWhiteBox::_02_DeleteComment_vpls(char* pSrc,char* pDes)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {CWhiteBox::_02_DeleteComment(pSrc,pDes); return;}
	else if(VuxIsRepeatRun()) {_02_DeleteComment_vpls_(pSrc,pDes); return;}

#ifdef _VUDEBUG
    { VuxIsDebugPlug() ? _02_DeleteComment_vpls_(pSrc,pDes) : _02_DeleteComment(pSrc,pDes);
#else
    {_02_DeleteComment_vpls_(pSrc,pDes);
#endif
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/CWhiteBox::_02_DeleteComment(char*,char*))
