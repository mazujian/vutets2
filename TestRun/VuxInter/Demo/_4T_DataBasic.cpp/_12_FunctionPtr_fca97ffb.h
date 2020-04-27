
//VuxInter/Demo/_4T_DataBasic.cpp/_12_FunctionPtr_fca97ffb.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_12_FunctionPtr(int,int,MYFUNC,int(*)(int a,int b)))
#ifdef _VUDEBUG
static int _12_FunctionPtr_vpls_(int a,int b,MYFUNC pFunc,int(* pFunc2)(int a,int b)){ VuxDbgBrkP()
{
    /*[ѧϰ��ʾ������ָ�븳ֵ]    1) ָ��NULL: ��һ��ָ��һ�����ڱ������дNULL�����κ�ֵ��    2) ָ���Զ����ɵĺ���: �ڵ�Ԫ��༭״̬�£��Ҽ��˵�ѡ�񡰺���ָ�븳ֵ����    ���Զ����ɺ���ʵ�֣����Զ��ڵ�Ԫ������д$fp��ͷ��һ���ַ�����ֵ����ɡ�    ������һ�㺯��һ�����õײ����롣    �˷�ʽֻ�����ں���ָ������Ϊȫ�ֺ����ĳ��������ʺ���ָ�����Ա�����ĺ���ָ�롣    3) ָ���Ѿ����ڵĺ���: ��������������벿����Ӵ��룬�磺pFunc = onefunc;     ����onefunc�Ǻ��������������ָ�������Ϊ���Ա��������ֻ��ʹ�ô˷�ʽ��    �����á���Ӽ�ӵײ����롱�������õײ����롣	*/
   
    int ret = 0;
    if(pFunc != 0)
    {
        int x1 = pFunc(a, b);
        int x2 = (*pFunc)(a, b);
        ret += x1;
        ret += x2;
    }
     
    if(pFunc2 != 0)
    {
        int x3 = pFunc2(a, b);
        int x4 = (*pFunc2)(a, b);
        ret += x3;
        ret += x4;
    }  
     
    return ret;
}}
#else
static int _12_FunctionPtr_vpls_(int a,int b,MYFUNC pFunc,int(* pFunc2)(int a,int b)){__VUFNINFO__("_12_FunctionPtr","int",0);VuxDbp(0,0,12);
{
    /*[ѧϰ��ʾ������ָ�븳ֵ]    1) ָ��NULL: ��һ��ָ��һ�����ڱ������дNULL�����κ�ֵ��    2) ָ���Զ����ɵĺ���: �ڵ�Ԫ��༭״̬�£��Ҽ��˵�ѡ�񡰺���ָ�븳ֵ����    ���Զ����ɺ���ʵ�֣����Զ��ڵ�Ԫ������д$fp��ͷ��һ���ַ�����ֵ����ɡ�    ������һ�㺯��һ�����õײ����롣    �˷�ʽֻ�����ں���ָ������Ϊȫ�ֺ����ĳ��������ʺ���ָ�����Ա�����ĺ���ָ�롣    3) ָ���Ѿ����ڵĺ���: ��������������벿����Ӵ��룬�磺pFunc = onefunc;     ����onefunc�Ǻ��������������ָ�������Ϊ���Ա��������ֻ��ʹ�ô˷�ʽ��    �����á���Ӽ�ӵײ����롱�������õײ����롣	*/
   
VUXRBV(1);VUXRLNFVB(1,1,1);    int ret = 0; VUXLV("int",ret,1);
    if((VUXRCS0(1,2)&&(pFunc != 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRBV(2);VUXRLNFVB(2,3,2);        int x1 = pFunc(a, b); VUXLV("int",x1,2);
VUXRLNFVB(3,4,3);        int x2 = (*pFunc)(a, b); VUXLV("int",x2,3);
VUXRLNF(4,5);        ret += x1;
VUXRLNF(5,6);        ret += x2;
    }}
VUXRBR_ELSE(3);
     
    if((VUXRCS0(2,7)&&(pFunc2 != 0)&&VUXRC1(2)))
    {VUXRBR(4);{
VUXRBV(3);VUXRLNFVB(6,8,4);        int x3 = pFunc2(a, b); VUXLV("int",x3,4);
VUXRLNFVB(7,9,5);        int x4 = (*pFunc2)(a, b); VUXLV("int",x4,5);
VUXRLNF(8,10);        ret += x3;
VUXRLNF(9,11);        ret += x4;
    }}
VUXRBR_ELSE(5);  
     
VUXRB(4);VUXRLNF(10,12);    {int __vurtv__= ret;VUXFRTY();}
}}
#endif

static int _12_FunctionPtr_vpls(int a,int b,MYFUNC pFunc,int(* pFunc2)(int a,int b))
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _12_FunctionPtr(a,b,pFunc,pFunc2);}
	else if(VuxIsRepeatRun()) {return _12_FunctionPtr_vpls_(a,b,pFunc,pFunc2);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _12_FunctionPtr_vpls_(a,b,pFunc,pFunc2) : _12_FunctionPtr(a,b,pFunc,pFunc2);
#else
    {int vuxRet = _12_FunctionPtr_vpls_(a,b,pFunc,pFunc2);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_12_FunctionPtr(int,int,MYFUNC,int(*)(int a,int b)))
