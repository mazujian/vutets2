
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_05_LocalInput2_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_05_LocalInput2(int))
#ifdef _VUDEBUG
int CInsideIO::_05_LocalInput2_vpls_(int arg){ VuxDbgBrkP()
{   
    int param;
    CLibType lt;

    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    �������������þֲ�����(���븳ֵ���)��������param��ֵ��	���ַ�ʽ���Դ���ײ����롣	*/
    lt.GetParam(&param);
    _ASSIGNI_(int,param,'a',0);
    //��������
    return param;
}}
#else
int CInsideIO::_05_LocalInput2_vpls_(int arg){__VUFNINFO__("_05_LocalInput2","int",0);VuxDbp(0,0,4);
{   
VUXRBV(1);VUXRLNFVB(1,1,1);    int param; VUXLV("int",param,1);
VUXRLNFVB(2,2,2);    CLibType lt; VUXLV("CLibType",lt,2);

    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    �������������þֲ�����(���븳ֵ���)��������param��ֵ��	���ַ�ʽ���Դ���ײ����롣	*/
VUXRLNF(3,3);    lt.GetParam(&param);
    _ASSIGNI_(int,param,'a',0);
    //��������
VUXRLNF(4,4);    {int __vurtv__= param;VUXFRTY();}
}}
#endif

int CInsideIO::_05_LocalInput2_vpls(int arg)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CInsideIO::_05_LocalInput2(arg);}
	else if(VuxIsRepeatRun()) {return _05_LocalInput2_vpls_(arg);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _05_LocalInput2_vpls_(arg) : _05_LocalInput2(arg);
#else
    {int vuxRet = _05_LocalInput2_vpls_(arg);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO::_05_LocalInput2(int))
