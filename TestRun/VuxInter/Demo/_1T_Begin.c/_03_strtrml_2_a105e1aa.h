
//VuxInter/Demo/_1T_Begin.c/_03_strtrml_2_a105e1aa.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_strtrml_2(char*))
#ifdef _VUDEBUG
static char* _03_strtrml_2_vpls_(char* str){ VuxDbgBrkP()
{
    int count = 0; //��߿ո������

    //�жϿ�ָ��
    if(str == 0)
    { return str;
    }

    //������߿ո������
    while(*str++ == ' ')
    {
        count++;
    }

    /*[ѧϰ��ʾ���ֲ����]    ��ӣ�����ߺ������봰�ڣ�������λ�ã��Ҽ��˵�ѡ��"�ֲ����"��    ��ֵ����Ҫ�ж����������ֵ�������Ƿ��жϣ������ӡʵ�ʽ����    ���ֻ�Ǳ�������д�ӡ���ݣ�����Ҫ�жϣ�����ֱ���ڴ�������ӣ�_OUTPUTC_(type,name/>>int,'c');	*/    

    //������߿ո�������Բ���
_OUTPUTC_(int,count,'A');

    //�ƶ��ַ�����������߿ո�
    while(*str)
    {
        *str = *(str+count);
        str++;
    }

    /*[ѧϰ��ʾ���۲������Ϊ�ҳ�����]	�������д���ˣ��Բ����أ��ٿ���������Ϊ���������ȫ���Եġ�    �۲����������ָ��ƫ�Ƶ�Ԥ��֮���λ�ã���Ȼ������ո���ƶ�	  �ַ����������ָ���ƫ�ƣ��ƶ��ַ���ǰ�ͷ���ǰ�����ָ�븴λ��	�޸ĺ�Ĵ������һ��������_03_strtrml_ok	*/

    return str;
}}
#else
static char* _03_strtrml_2_vpls_(char* str){VUX_VARIABLE(2) VUX_VARIABLE(3)  __VUFNINFO__("_03_strtrml_2","char*",0);VuxDbp(0,0,9);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int count = 0; VUXLV("int",count,1); //��߿ո������

    //�жϿ�ָ��
    if((VUXRCS0(1,2)&&(str == 0)&&VUXRC1(1)))
    {VUXRBR(2);{VUXRB(2);VUXRLNF(2,3); {char* __vurtv__= str;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

    //������߿ո������
    while((VUXRCS0(2,4)&&(*str++ == ' ')&&VUXRC1(2)))
    {VUXRBR_LOOP(2,4,110);{
VUXRB(3);VUXRLNF(3,5);        count++;
    }}VUXRBR_OUT(2, 5);


    /*[ѧϰ��ʾ���ֲ����]    ��ӣ�����ߺ������봰�ڣ�������λ�ã��Ҽ��˵�ѡ��"�ֲ����"��    ��ֵ����Ҫ�ж����������ֵ�������Ƿ��жϣ������ӡʵ�ʽ����    ���ֻ�Ǳ�������д�ӡ���ݣ�����Ҫ�жϣ�����ֱ���ڴ�������ӣ�_OUTPUTC_(type,name/>>int,'c');	*/    

    //������߿ո�������Բ���
_OUTPUTC_(int,count,'A');

    //�ƶ��ַ�����������߿ո�
    while((VUXRCS0(3,6)&&(*str)&&VUXRC1(3)))
    {VUXRBR_LOOP(3,6,109);{
VUXRB(4);VUXRLNF(4,7);        *str = *(str+count);
VUXRLNF(5,8);        str++;
    }}VUXRBR_OUT(3, 7);


    /*[ѧϰ��ʾ���۲������Ϊ�ҳ�����]	�������д���ˣ��Բ����أ��ٿ���������Ϊ���������ȫ���Եġ�    �۲����������ָ��ƫ�Ƶ�Ԥ��֮���λ�ã���Ȼ������ո���ƶ�	  �ַ����������ָ���ƫ�ƣ��ƶ��ַ���ǰ�ͷ���ǰ�����ָ�븴λ��	�޸ĺ�Ĵ������һ��������_03_strtrml_ok	*/

VUXRB(5);VUXRLNF(6,9);    {char* __vurtv__= str;VUXFRTY();}
}}
#endif

static char* _03_strtrml_2_vpls(char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_strtrml_2(str);}
	else if(VuxIsRepeatRun()) {return _03_strtrml_2_vpls_(str);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _03_strtrml_2_vpls_(str) : _03_strtrml_2(str);
#else
    {char* vuxRet = _03_strtrml_2_vpls_(str);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_strtrml_2(char*))
