
//VuxInter/Demo/_1U_Begin.c/_02_pow2_6181b856.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_02_pow2(unsigned int,unsigned int))
#ifdef _VUDEBUG
static unsigned int _02_pow2_vpls_(unsigned int g,unsigned int e){ VuxDbgBrkP()
{
    /*[ѧϰ��ʾ��VU4��������]    ��������������ѡ��һ�У������"�������"	�л�����������Ҽ��˵����л�������	              ���ʧ�ܵĲ��ԣ��Զ��л�����Ӧ��������	�۲������Ϊ���Աȵ�ǰ��������������Լ���ִ�еĴ��롣	              ��ɫ����Ϊ��ǰ������ִ�еĴ��롣    �ҳ�����ԭ�򣺹۲������Ϊ���ɷ�������result��ʼֵΪ0��	              ����forѭ���ļ�������Ϊ0��	�׺и��Ǳ�ǣ�[T/F]δ���ǵ�������/��ֵ,[M]δ����MCDC��	              <T/F>δ���ǵ��ж���/��ֵ��				  ��ɫ�ķ�֧��·��δ���ǡ�	��ɰ׺и��ǣ�ѡ��δ���ǵ�λ���Ҽ��˵�ѡ��"�������" ��	              ���ڰ׺и��Ǽ������������ʹ�ã��뿴_6T_WhiteBox.cpp�е�_01_WhileBox()��	��ǲ��ɸ��ǣ�forѭ���ĵ�2��֧���ɸ��ǣ��ɱ��Ϊ���ɸ��ǡ�������	              ���δ���ǵ�λ���Ҽ��˵�ѡ��"ɾ���߼���λ"��    */
    unsigned int result = 1;

    if(g == 0)
    {
        result = 0;
    }
    else if(g == 1)
    {
        result = 1;
    }
    else if(e == 0)
    { 
        result = 1;
    }
    else if(e == 1)
    {
        result = g;
    }
    else
    {
        unsigned int i;
        for(i=0; i<e; i++)
        {
            result *= g;
        }
    }

    return result;
}}
#else
static unsigned int _02_pow2_vpls_(unsigned int g,unsigned int e){VUX_VARIABLE(2)  __VUFNINFO__("_02_pow2","unsigned int",0);VuxDbp(0,0,15);
{
    /*[ѧϰ��ʾ��VU4��������]    ��������������ѡ��һ�У������"�������"	�л�����������Ҽ��˵����л�������	              ���ʧ�ܵĲ��ԣ��Զ��л�����Ӧ��������	�۲������Ϊ���Աȵ�ǰ��������������Լ���ִ�еĴ��롣	              ��ɫ����Ϊ��ǰ������ִ�еĴ��롣    �ҳ�����ԭ�򣺹۲������Ϊ���ɷ�������result��ʼֵΪ0��	              ����forѭ���ļ�������Ϊ0��	�׺и��Ǳ�ǣ�[T/F]δ���ǵ�������/��ֵ,[M]δ����MCDC��	              <T/F>δ���ǵ��ж���/��ֵ��				  ��ɫ�ķ�֧��·��δ���ǡ�	��ɰ׺и��ǣ�ѡ��δ���ǵ�λ���Ҽ��˵�ѡ��"�������" ��	              ���ڰ׺и��Ǽ������������ʹ�ã��뿴_6T_WhiteBox.cpp�е�_01_WhileBox()��	��ǲ��ɸ��ǣ�forѭ���ĵ�2��֧���ɸ��ǣ��ɱ��Ϊ���ɸ��ǡ�������	              ���δ���ǵ�λ���Ҽ��˵�ѡ��"ɾ���߼���λ"��    */
VUXRBV(1);VUXRLNFVB(1,1,1);    unsigned int result = 1; VUXLV("unsigned int",result,1);

    if((VUXRCS0(1,2)&&(g == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,3);        result = 0;
    }}
    else if((VUXRCS0(2,4)&&(g == 1)&&VUXRC1(2)))
    {VUXRBR(3);{
VUXRB(3);VUXRLNF(3,5);        result = 1;
    }}
    else if((VUXRCS0(3,6)&&(e == 0)&&VUXRC1(3)))
    {VUXRBR(4);{ 
VUXRB(4);VUXRLNF(4,7);        result = 1;
    }}
    else if((VUXRCS0(4,8)&&(e == 1)&&VUXRC1(4)))
    {VUXRBR(5);{
VUXRB(5);VUXRLNF(5,9);        result = g;
    }}
    else
    {VUXRBR(6);{
VUXRBV(6);VUXRLNFVB(6,10,2);        unsigned int i; VUXLV("unsigned int",i,2);VUXRBF(7,11);
        for(i=0;(VUXRCS0(5,13)&&( i<e)&&VUXRC1(5));VUXRBF(8,12), i++)
        {VUXRBR_LOOP(2,7,115);{
VUXRB(9);VUXRLNF(9,14);            result *= g;
        }}VUXRBR_OUT(2, 8);

    }}

VUXRB(10);VUXRLNF(10,15);    {unsigned int __vurtv__= result;VUXFRTY();}
}}
#endif

static unsigned int _02_pow2_vpls(unsigned int g,unsigned int e)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _02_pow2(g,e);}
	else if(VuxIsRepeatRun()) {return _02_pow2_vpls_(g,e);}

#ifdef _VUDEBUG
    {unsigned int vuxRet =  VuxIsDebugPlug() ? _02_pow2_vpls_(g,e) : _02_pow2(g,e);
#else
    {unsigned int vuxRet = _02_pow2_vpls_(g,e);
#endif
    TEST_ASSERT_RETURN("unsigned int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_02_pow2(unsigned int,unsigned int))
