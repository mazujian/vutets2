
//VuxInter/Demo/_1T_Begin.c/_03_strtrml_ok_a105e1aa.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_strtrml_ok(char*))
#ifdef _VUDEBUG
static char* _03_strtrml_ok_vpls_(char* str){ VuxDbgBrkP()
{
    char* ptr = str; //�����ʼָ��
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

    //������߿ո�������Բ���
_OUTPUTC_(int,count,'A');

    //��λָ��
    str = ptr;

    //�ƶ��ַ�����������߿ո�
    while(*str)
    {
        *str = *(str+count);
        str++;
    }

    //��λָ��
    str = ptr;
    return str;

   /*[ѧϰ��ʾ��eTDDС��]    ��ʹ�����ּ򵥵ĺ�����Ҳ���ѱ�֤һ����д��ȷ����ͳ�Ŀ�����ʽ�£���Ҫ	����ʱ����е��ԣ���eTDD��ʽ�£����������ͬ����ɣ����ҿ�������	�У�������Ϊ���ӣ������������Ҫ���ǣ��������ԵĴ��룬����Ҫ��һ����Ρ�	������һ�����Ӷȵĳ��򣬿����ϸ�����Ч�ʣ�eTDD��ʽ����屶���ϡ�	*/

   /*[ѧϰ��ʾ������eTDD]    ����IDE���ı��༭����Samples/Demo/Ŀ¼�µ�	_1U_Begin.c��_1Y_Begin.c�����б�дstrtrml()�����Ĵ��룬����eTDD���̣�	���У�_1U_Begin.c�е�strtrml()�ѽ�������������_1Y_Begin.c���ǳ�ʼ״̬��	��������ӵ����飺_8Y_String.c _2Y_SendMail.c _3Y_MyClass.cpp��	*/
}}
#else
static char* _03_strtrml_ok_vpls_(char* str){VUX_VARIABLE(2) VUX_VARIABLE(3)  __VUFNINFO__("_03_strtrml_ok","char*",0);VuxDbp(0,0,12);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    char* ptr = str; VUXLV("char*",ptr,1); //�����ʼָ��
VUXRLNFVB(2,2,2);    int count = 0; VUXLV("int",count,2); //��߿ո������

    //�жϿ�ָ��
    if((VUXRCS0(1,3)&&(str == 0)&&VUXRC1(1)))
    {VUXRBR(2);{VUXRB(2);VUXRLNF(3,4); {char* __vurtv__= str;VUXFRTY();}
    }}
VUXRBR_ELSE(3);

    //������߿ո������
    while((VUXRCS0(2,5)&&(*str++ == ' ')&&VUXRC1(2)))
    {VUXRBR_LOOP(2,4,110);{
VUXRB(3);VUXRLNF(4,6);        count++;
    }}VUXRBR_OUT(2, 5);


    //������߿ո�������Բ���
_OUTPUTC_(int,count,'A');

    //��λָ��
VUXRB(4);VUXRLNF(5,7);    str = ptr;

    //�ƶ��ַ�����������߿ո�
    while((VUXRCS0(3,8)&&(*str)&&VUXRC1(3)))
    {VUXRBR_LOOP(3,6,109);{
VUXRB(5);VUXRLNF(6,9);        *str = *(str+count);
VUXRLNF(7,10);        str++;
    }}VUXRBR_OUT(3, 7);


    //��λָ��
VUXRB(6);VUXRLNF(8,11);    str = ptr;
VUXRLNF(9,12);    {char* __vurtv__= str;VUXFRTY();}

   /*[ѧϰ��ʾ��eTDDС��]    ��ʹ�����ּ򵥵ĺ�����Ҳ���ѱ�֤һ����д��ȷ����ͳ�Ŀ�����ʽ�£���Ҫ	����ʱ����е��ԣ���eTDD��ʽ�£����������ͬ����ɣ����ҿ�������	�У�������Ϊ���ӣ������������Ҫ���ǣ��������ԵĴ��룬����Ҫ��һ����Ρ�	������һ�����Ӷȵĳ��򣬿����ϸ�����Ч�ʣ�eTDD��ʽ����屶���ϡ�	*/

   /*[ѧϰ��ʾ������eTDD]    ����IDE���ı��༭����Samples/Demo/Ŀ¼�µ�	_1U_Begin.c��_1Y_Begin.c�����б�дstrtrml()�����Ĵ��룬����eTDD���̣�	���У�_1U_Begin.c�е�strtrml()�ѽ�������������_1Y_Begin.c���ǳ�ʼ״̬��	��������ӵ����飺_8Y_String.c _2Y_SendMail.c _3Y_MyClass.cpp��	*/
}}
#endif

static char* _03_strtrml_ok_vpls(char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_strtrml_ok(str);}
	else if(VuxIsRepeatRun()) {return _03_strtrml_ok_vpls_(str);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _03_strtrml_ok_vpls_(str) : _03_strtrml_ok(str);
#else
    {char* vuxRet = _03_strtrml_ok_vpls_(str);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_strtrml_ok(char*))
