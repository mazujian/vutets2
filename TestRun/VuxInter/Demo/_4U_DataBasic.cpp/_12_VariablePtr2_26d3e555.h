
//VuxInter/Demo/_4U_DataBasic.cpp/_12_VariablePtr2_26d3e555.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_12_VariablePtr2(int*,int*,int))
#ifdef _VUDEBUG
static int _12_VariablePtr2_vpls_(int* item,int* items,int count){ VuxDbgBrkP()
{
    /*[ѧϰ��ʾ������ָ�븳ֵ]    1) ���ó���: ��������Ƚ�ָ�뱾�������ǱȽ�ָ����ָ�����ֵ�����Ρ�    2) ����һ������ֵ: �ڵ�Ԫ��༭״̬�£��Ҽ��˵�ѡ�񡰱���ָ�븳ֵ����    �ڵ����Ĵ������趨�����������ͣ��Զ��ڵ�Ԫ������д$fv��ͷ��һ���ַ�����ֵ����ɡ�    ��һ�������������飬Ҳ�����ǵ���������    3) ���ڶ�������ֵ: �ڶ�����ͨ��ָ���һ�������һ������һ����������Σ�    a, ���һ�����޹أ���ͬ�����á�����ָ�븳ֵ��ָ����и�ֵ��    b, ���һ������ȣ�ֱ�ӿ�����һ������ֵ��    c, ָ���һ������ĳ���д��һ�����ֵ+��ţ����һ������ֵΪ$vpe08e0fea��       ��ڶ�������д$vpe08e0fea+1����ָ���1��(��0��ʼ����	*/
   
    if(item == 0 || items == 0)
    {
        return -1;
    }
         
    if(item < items || item > (items+count))
    {
        return -1;
    }

    if(item == items)
    {
        return 0;
    }

    if(item == (items + 1))
    {
        return 1;
    }

    if(item == (items + 9))
    {
        return 9;
    }
     
    //return ((int)items - (int)item) / sizeof(*item); ����
    return ((int)item - (int)items) / sizeof(*item);
}}
#else
static int _12_VariablePtr2_vpls_(int* item,int* items,int count){__VUFNINFO__("_12_VariablePtr2","int",0);VuxDbp(0,0,13);
{
    /*[ѧϰ��ʾ������ָ�븳ֵ]    1) ���ó���: ��������Ƚ�ָ�뱾�������ǱȽ�ָ����ָ�����ֵ�����Ρ�    2) ����һ������ֵ: �ڵ�Ԫ��༭״̬�£��Ҽ��˵�ѡ�񡰱���ָ�븳ֵ����    �ڵ����Ĵ������趨�����������ͣ��Զ��ڵ�Ԫ������д$fv��ͷ��һ���ַ�����ֵ����ɡ�    ��һ�������������飬Ҳ�����ǵ���������    3) ���ڶ�������ֵ: �ڶ�����ͨ��ָ���һ�������һ������һ����������Σ�    a, ���һ�����޹أ���ͬ�����á�����ָ�븳ֵ��ָ����и�ֵ��    b, ���һ������ȣ�ֱ�ӿ�����һ������ֵ��    c, ָ���һ������ĳ���д��һ�����ֵ+��ţ����һ������ֵΪ$vpe08e0fea��       ��ڶ�������д$vpe08e0fea+1����ָ���1��(��0��ʼ����	*/
   
    if( VUXAC1(2,items == 0) && (VUXRCS0(1,1)&&(item == 0)&&VUXRC1(1)) ||(VUXRCS0(2,2)&&( items == 0)&&VUXRC1(2)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,3);        {int __vurtv__= -1;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
         
    if( VUXAC1(4,item > (items+count)) && (VUXRCS0(3,4)&&(item < items)&&VUXRC1(3)) ||(VUXRCS0(4,5)&&( item > (items+count))&&VUXRC1(4)))
    {VUXRBR(4);{
VUXRB(2);VUXRLNF(2,6);        {int __vurtv__= -1;VUXFRTY();}
    }}
VUXRBR_ELSE(5);

    if((VUXRCS0(5,7)&&(item == items)&&VUXRC1(5)))
    {VUXRBR(6);{
VUXRB(3);VUXRLNF(3,8);        {int __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(7);

    if((VUXRCS0(6,9)&&(item == (items + 1))&&VUXRC1(6)))
    {VUXRBR(8);{
VUXRB(4);VUXRLNF(4,10);        {int __vurtv__= 1;VUXFRTY();}
    }}
VUXRBR_ELSE(9);

    if((VUXRCS0(7,11)&&(item == (items + 9))&&VUXRC1(7)))
    {VUXRBR(10);{
VUXRB(5);VUXRLNF(5,12);        {int __vurtv__= 9;VUXFRTY();}
    }}
VUXRBR_ELSE(11);
     
    //return ((int)items - (int)item) / sizeof(*item); ����
VUXRB(6);VUXRLNF(6,13);    {int __vurtv__= ((int)item - (int)items) / sizeof(*item);VUXFRTY();}
}}
#endif

static int _12_VariablePtr2_vpls(int* item,int* items,int count)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _12_VariablePtr2(item,items,count);}
	else if(VuxIsRepeatRun()) {return _12_VariablePtr2_vpls_(item,items,count);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _12_VariablePtr2_vpls_(item,items,count) : _12_VariablePtr2(item,items,count);
#else
    {int vuxRet = _12_VariablePtr2_vpls_(item,items,count);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_12_VariablePtr2(int*,int*,int))
