
//VuxInter/Demo/_7T_EditCaseCode.cpp/_03_VaryingParameter_d3af3469.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_VaryingParameter(int,int,...))
#ifdef _VUDEBUG
static int _03_VaryingParameter_vpls_(int a,int b,... ){ VuxDbgBrkP()
{
    /*[ѧϰ��ʾ���ɱ����]	1) ʹ��"��ӱ��������"�����һ���ֲ�������Ϊ����������������int c��    2) �л��������ļ����ڣ�������������TEST_RUN�����еĴ����ɣ�    EST_RUN _03_VaryingParameter_vpls(a, b);    ��Ϊ:    TEST_RUN _03_VaryingParameter_vpls(a, b, c);    �����һ������c��    3) Ϊ��װ����_03_VaryingParameter_vpls���Ӳ���c��    ���ȣ���ת����װ��������������������ǰ���#include��ͷ���У��Ҽ��˵�ѡ����ת����	�л������Դ��봰�ڣ�����ʾ�������룬����һЩ�ɿ�����׮����_03_VaryingParameter_vpls��	�޸�_03_VaryingParameter_vpls�еĴ��룬ʹ������������Ч��	*/
    return a+b;
}}
#else
static int _03_VaryingParameter_vpls_(int a,int b,... ){__VUFNINFO__("_03_VaryingParameter","int",0);VuxDbp(0,0,1);
{
    /*[ѧϰ��ʾ���ɱ����]	1) ʹ��"��ӱ��������"�����һ���ֲ�������Ϊ����������������int c��    2) �л��������ļ����ڣ�������������TEST_RUN�����еĴ����ɣ�    EST_RUN _03_VaryingParameter_vpls(a, b);    ��Ϊ:    TEST_RUN _03_VaryingParameter_vpls(a, b, c);    �����һ������c��    3) Ϊ��װ����_03_VaryingParameter_vpls���Ӳ���c��    ���ȣ���ת����װ��������������������ǰ���#include��ͷ���У��Ҽ��˵�ѡ����ת����	�л������Դ��봰�ڣ�����ʾ�������룬����һЩ�ɿ�����׮����_03_VaryingParameter_vpls��	�޸�_03_VaryingParameter_vpls�еĴ��룬ʹ������������Ч��	*/
VUXRB(1);VUXRLNF(1,1);    {int __vurtv__= a+b;VUXFRTY();}
}}
#endif

static int _03_VaryingParameter_vpls(int a,int b,... )
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_VaryingParameter(a,b);}
	else if(VuxIsRepeatRun()) {return _03_VaryingParameter_vpls_(a,b);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _03_VaryingParameter_vpls_(a,b) : _03_VaryingParameter(a,b);
#else
    {int vuxRet = _03_VaryingParameter_vpls_(a,b);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_VaryingParameter(int,int,...))
