
//VuxInter/Demo/_4U_DataBasic.cpp/_14_CListTest2_66d27ace.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_14_CListTest2(clist_t*))
#ifdef _VUDEBUG
static int _14_CListTest2_vpls_(clist_t* pDatas){ VuxDbgBrkP()
{
     /*[ѧϰ��ʾ��C��������ĸ�ֵ]    1����ֻ�蹹��N��item��ֻ�轫���һ��item��pNext��ΪNULL    2�����蹹��N��item�������item�ĳ�Ա��ֵ����ֻ����ֵ�����item��pNext�Զ���ΪNULL    3�����蹹��ѭ���������õ��ýű���ptrcpy�������item��pNext��Ϊָ���׸�item    4��C����˫��������ο�_2T_SendMail.c��_08_send_mail��������һ��������˫������    5��C++˫��������ο�_3T_MyClass.cpp��_02_Response_ok	*/   
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
     /*[ѧϰ��ʾ��C��������ĸ�ֵ]    1����ֻ�蹹��N��item��ֻ�轫���һ��item��pNext��ΪNULL    2�����蹹��N��item�������item�ĳ�Ա��ֵ����ֻ����ֵ�����item��pNext�Զ���ΪNULL    3�����蹹��ѭ���������õ��ýű���ptrcpy�������item��pNext��Ϊָ���׸�item    4��C����˫��������ο�_2T_SendMail.c��_08_send_mail��������һ��������˫������    5��C++˫��������ο�_3T_MyClass.cpp��_02_Response_ok	*/   
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
