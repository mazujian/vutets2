
//VuxInter/Demo/_1T_Begin.c/_03_strtrml_1_a105e1aa.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_03_strtrml_1(char*))
#ifdef _VUDEBUG
static char* _03_strtrml_1_vpls_(char* str){ VuxDbgBrkP()
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

    /*[ѧϰ��ʾ�����ӱ��]    ��ʱ�۲������Ϊ�����磬д��������Ĵ��룬���ܾ��뿴����߿ո�ļ�������������    1) ���뵱ǰ�ļ�(���ڱ�д�Ĳ�Ʒ�ļ�)�����磬IDEΪVCϵ�У���Ctrl+F7���������ͨ����	     ���Զ�ִ�в��ԡ�	2) �л���VU���棺Ctrl + Alt + �ո�	ע�� ��ɫ�����ǵ�ǰ����ִ�еĴ��롣	������ز�����	�л��������������������м乤���������Ҽ�ͷ�����л���������ʹ���Ҽ��˵���	VU�����л���IDE��Esc �� Ctrl + Alt + �ո�    �л���VU���沢ѡ��һ��������ѡ�к���������Ctrl+C���ƣ�Ȼ��  Ctrl + Alt + �س�	*/    

    //����δд�꣬��_03_strtrml_2������д

    return str;
}}
#else
static char* _03_strtrml_1_vpls_(char* str){VUX_VARIABLE(2)  __VUFNINFO__("_03_strtrml_1","char*",0);VuxDbp(0,0,6);
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


    /*[ѧϰ��ʾ�����ӱ��]    ��ʱ�۲������Ϊ�����磬д��������Ĵ��룬���ܾ��뿴����߿ո�ļ�������������    1) ���뵱ǰ�ļ�(���ڱ�д�Ĳ�Ʒ�ļ�)�����磬IDEΪVCϵ�У���Ctrl+F7���������ͨ����	     ���Զ�ִ�в��ԡ�	2) �л���VU���棺Ctrl + Alt + �ո�	ע�� ��ɫ�����ǵ�ǰ����ִ�еĴ��롣	������ز�����	�л��������������������м乤���������Ҽ�ͷ�����л���������ʹ���Ҽ��˵���	VU�����л���IDE��Esc �� Ctrl + Alt + �ո�    �л���VU���沢ѡ��һ��������ѡ�к���������Ctrl+C���ƣ�Ȼ��  Ctrl + Alt + �س�	*/    

    //����δд�꣬��_03_strtrml_2������д

VUXRB(4);VUXRLNF(4,6);    {char* __vurtv__= str;VUXFRTY();}
}}
#endif

static char* _03_strtrml_1_vpls(char* str)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _03_strtrml_1(str);}
	else if(VuxIsRepeatRun()) {return _03_strtrml_1_vpls_(str);}

#ifdef _VUDEBUG
    {char* vuxRet =  VuxIsDebugPlug() ? _03_strtrml_1_vpls_(str) : _03_strtrml_1(str);
#else
    {char* vuxRet = _03_strtrml_1_vpls_(str);
#endif
    TEST_ASSERT_RETURN("char*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_03_strtrml_1(char*))
