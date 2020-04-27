
//VuxInter/Demo/_3T_MyClass.cpp/CMyClass/_01_Triangle_689fb5a2.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CMyClass::_01_Triangle(int,int,int))
#ifdef _VUDEBUG
int CMyClass::_01_Triangle_vpls_(int a,int b,int c){ VuxDbgBrkP()
{
    if(a < b+c && b < a+c && c < a+b)
    {
        if(a == b && b == c)
        {
            return TRI_ES3;
        }
        else if(a==b || b==c || a==c)
        {
            return TRI_ES2;
        }
        else
        {
            return TRI_ESN;
        }
    }

    return TRI_NOT;
}}
#else
int CMyClass::_01_Triangle_vpls_(int a,int b,int c){__VUFNINFO__("_01_Triangle","int",0);VuxDbp(0,0,12);
{
    if( VUXAC2(2,b < a+c,3,c < a+b) && (VUXRCS0(1,1)&&(a < b+c)&&VUXRC1(1)) &&(VUXRCS0(2,2)&&( b < a+c)&&VUXRC1(2)) &&(VUXRCS0(3,3)&&( c < a+b)&&VUXRC1(3)))
    {VUXRBR(2);{
        if( VUXAC1(5,b == c) && (VUXRCS0(4,4)&&(a == b)&&VUXRC1(4)) &&(VUXRCS0(5,5)&&( b == c)&&VUXRC1(5)))
        {VUXRBR(3);{
VUXRB(1);VUXRLNF(1,6);            {int __vurtv__= TRI_ES3;VUXFRTY();}
        }}
        else if( VUXAC2(7,b==c,8,a==c) && (VUXRCS0(6,7)&&(a==b)&&VUXRC1(6)) ||(VUXRCS0(7,8)&&( b==c)&&VUXRC1(7)) ||(VUXRCS0(8,9)&&( a==c)&&VUXRC1(8)))
        {VUXRBR(4);{
VUXRB(2);VUXRLNF(2,10);            {int __vurtv__= TRI_ES2;VUXFRTY();}
        }}
        else
        {VUXRBR(5);{
VUXRB(3);VUXRLNF(3,11);            {int __vurtv__= TRI_ESN;VUXFRTY();}
        }}
    }}
VUXRBR_ELSE(6);

VUXRB(4);VUXRLNF(4,12);    {int __vurtv__= TRI_NOT;VUXFRTY();}
}}
#endif

int CMyClass::_01_Triangle_vpls(int a,int b,int c)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return CMyClass::_01_Triangle(a,b,c);}
	else if(VuxIsRepeatRun()) {return _01_Triangle_vpls_(a,b,c);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _01_Triangle_vpls_(a,b,c) : _01_Triangle(a,b,c);
#else
    {int vuxRet = _01_Triangle_vpls_(a,b,c);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/CMyClass::_01_Triangle(int,int,int))
