
//VuxInter/Demo/_7T_EditCaseCode.cpp/_02_Position_aca38c5e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_02_Position(CList<int,int>&,POSITION))
#ifdef _VUDEBUG
static int _02_Position_vpls_(CList<int,int>& list,POSITION pos){ VuxDbgBrkP()
{
    /*[ѧϰ��ʾ��������ӱ�������posָ��list�е�������Լ��ж��������ֵ]	�������������ڲ������ݴ��ڣ����"��ӱ��������"��ѡ�񡰾ֲ��������������롱	�������������ڲ������ݴ��ڣ����"��ӱ��������"��ѡ�񡰾ֲ����������������	��Ȼ�����޸����������룬���������ݱ�����ֱ����ɣ�	��ο���������������֮һ >> ��ӱ��������	*/
    return list.GetAt(pos);
}}
#else
static int _02_Position_vpls_(CList<int,int>& list,POSITION pos){__VUFNINFO__("_02_Position","int",0);VuxDbp(0,0,1);
{
    /*[ѧϰ��ʾ��������ӱ�������posָ��list�е�������Լ��ж��������ֵ]	�������������ڲ������ݴ��ڣ����"��ӱ��������"��ѡ�񡰾ֲ��������������롱	�������������ڲ������ݴ��ڣ����"��ӱ��������"��ѡ�񡰾ֲ����������������	��Ȼ�����޸����������룬���������ݱ�����ֱ����ɣ�	��ο���������������֮һ >> ��ӱ��������	*/
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= list.GetAt(pos);VUXFRTY();}
}}
#endif

static int _02_Position_vpls(CList<int,int>& list,POSITION pos)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _02_Position(list,pos);}
	else if(VuxIsRepeatRun()) {return _02_Position_vpls_(list,pos);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _02_Position_vpls_(list,pos) : _02_Position(list,pos);
#else
    {int vuxRet = _02_Position_vpls_(list,pos);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_02_Position(CList<int,int>&,POSITION))
