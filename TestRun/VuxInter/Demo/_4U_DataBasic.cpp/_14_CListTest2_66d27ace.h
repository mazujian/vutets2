
//VuxInter/Demo/_4U_DataBasic.cpp/_14_CListTest2_66d27ace.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_14_CListTest2(clist_t*))
#ifdef _VUDEBUG
static int _14_CListTest2_vpls_(clist_t* pDatas){ VuxDbgBrkP()
{
     /*[学习提示：C语言链表的赋值]    1、如只需构建N个item，只需将最后一个item的pNext设为NULL    2、如需构建N个item，且需给item的成员赋值，则只需填值，最后item的pNext自动设为NULL    3、如需构建循环链表，可用调用脚本的ptrcpy，将最后item的pNext设为指向首个item    4、C语言双向链表，请参考_2T_SendMail.c的_08_send_mail函数，第一个参数是双向链表    5、C++双向链表，请参考_3T_MyClass.cpp的_02_Response_ok	*/   
    int count = 0;
    int ret = 0;
    
    clist_t* pItem = pDatas;
    while(pItem != 0)
    {
        count++;
        ret += pItem->score;
        pItem = pItem->pNext;
        if(pItem == pDatas)
        {
            break;
        }
    }
    
_OUTPUTC_(int,count,'A');
    return ret;   
}}
#else
static int _14_CListTest2_vpls_(clist_t* pDatas){VUX_VARIABLE(1)  __VUFNINFO__("_14_CListTest2","int",0);VuxDbp(0,0,10);
{
     /*[学习提示：C语言链表的赋值]    1、如只需构建N个item，只需将最后一个item的pNext设为NULL    2、如需构建N个item，且需给item的成员赋值，则只需填值，最后item的pNext自动设为NULL    3、如需构建循环链表，可用调用脚本的ptrcpy，将最后item的pNext设为指向首个item    4、C语言双向链表，请参考_2T_SendMail.c的_08_send_mail函数，第一个参数是双向链表    5、C++双向链表，请参考_3T_MyClass.cpp的_02_Response_ok	*/   
VUXRBV(1);VUXRLNFVB(1,1,1);    int count = 0; VUXLV("int",count,1);
VUXRLNFVB(2,2,2);    int ret = 0; VUXLV("int",ret,2);
    
VUXRLNFVB(3,3,3);    clist_t* pItem = pDatas; VUXLV("clist_t*",pItem,3);
    while((VUXRCS0(1,4)&&(pItem != 0)&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
VUXRB(2);VUXRLNF(4,5);        count++;
VUXRLNF(5,6);        ret += pItem->score;
VUXRLNF(6,7);        pItem = pItem->pNext;
        if((VUXRCS0(2,8)&&(pItem == pDatas)&&VUXRC1(2)))
        {VUXRBR(4);{
VUXRB(3);VUXRLNF(7,9);            break;
        }}
VUXRBR_ELSE(5);
    }}VUXRBR_OUT(1, 3);

    
_OUTPUTC_(int,count,'A');
VUXRB(4);VUXRLNF(8,10);    {int __vurtv__= ret;VUXFRTY();}   
}}
#endif

static int _14_CListTest2_vpls(clist_t* pDatas)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _14_CListTest2(pDatas);}
	else if(VuxIsRepeatRun()) {return _14_CListTest2_vpls_(pDatas);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _14_CListTest2_vpls_(pDatas) : _14_CListTest2(pDatas);
#else
    {int vuxRet = _14_CListTest2_vpls_(pDatas);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_14_CListTest2(clist_t*))
