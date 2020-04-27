
//VuxInter/Demo/autocase.c/ac63_test_case_3921b90f.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/ac63_test_case(int))
#ifdef _VUDEBUG
static int ac63_test_case_vpls_(int a){ VuxDbgBrkP()
{
    unsigned int key = ss();
    
    switch(key)
    {
        case 0:
        {
            return 0;
        }        
        case 1:
        {
            return 1;
        }
        case 2:
        {
            return 2;
        }    
        case 3:
        {
            return 3;
        }          
        case 4:
        {
            return 4;
        }
        case 5:
        {
            return 5;
        }    
        case 6:
        {
            return 6;
        }          
        case 7:
        {
            return 7;
        }
        case 8:
        {
            return 8;
        }    
        case 9:
        {
            return 9;
        }          
        case 10:
        {
            return 10;
        }
        case 11:
        {
            return 11;
        }    
        case 12:
        {
            return 12;
        }    
        default :
        {
            return -1;
        }                    
    }
}}
#else
static int ac63_test_case_vpls_(int a){__VUFNINFO__("ac63_test_case","int",0);VuxDbp(0,0,32);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    unsigned int key = ss(); VUXLV("unsigned int",key,1);VUXRBF(2,2);
    
    switch(key)
    {
        case 0:
        {VUXRBR(2);{
VUXRB(5);VUXRLNF(2,5);            {int __vurtv__= 0;VUXFRTY();}
        }}        
        case 1:
        {VUXRBR(3);{
VUXRB(7);VUXRLNF(3,7);            {int __vurtv__= 1;VUXFRTY();}
        }}
        case 2:
        {VUXRBR(4);{
VUXRB(9);VUXRLNF(4,9);            {int __vurtv__= 2;VUXFRTY();}
        }}    
        case 3:
        {VUXRBR(5);{
VUXRB(11);VUXRLNF(5,11);            {int __vurtv__= 3;VUXFRTY();}
        }}          
        case 4:
        {VUXRBR(6);{
VUXRB(13);VUXRLNF(6,13);            {int __vurtv__= 4;VUXFRTY();}
        }}
        case 5:
        {VUXRBR(7);{
VUXRB(15);VUXRLNF(7,15);            {int __vurtv__= 5;VUXFRTY();}
        }}    
        case 6:
        {VUXRBR(8);{
VUXRB(17);VUXRLNF(8,17);            {int __vurtv__= 6;VUXFRTY();}
        }}          
        case 7:
        {VUXRBR(9);{
VUXRB(19);VUXRLNF(9,19);            {int __vurtv__= 7;VUXFRTY();}
        }}
        case 8:
        {VUXRBR(10);{
VUXRB(21);VUXRLNF(10,21);            {int __vurtv__= 8;VUXFRTY();}
        }}    
        case 9:
        {VUXRBR(11);{
VUXRB(23);VUXRLNF(11,23);            {int __vurtv__= 9;VUXFRTY();}
        }}          
        case 10:
        {VUXRBR(12);{
VUXRB(25);VUXRLNF(12,25);            {int __vurtv__= 10;VUXFRTY();}
        }}
        case 11:
        {VUXRBR(13);{
VUXRB(27);VUXRLNF(13,27);            {int __vurtv__= 11;VUXFRTY();}
        }}    
        case 12:
        {VUXRBR(14);{
VUXRB(29);VUXRLNF(14,29);            {int __vurtv__= 12;VUXFRTY();}
        }}    
        default :
        {VUXRBR(15);{
VUXRB(31);VUXRLNF(15,31);            {int __vurtv__= -1;VUXFRTY();}
        }}                    
    }
}}
#endif

static int ac63_test_case_vpls(int a)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return ac63_test_case(a);}
	else if(VuxIsRepeatRun()) {return ac63_test_case_vpls_(a);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? ac63_test_case_vpls_(a) : ac63_test_case(a);
#else
    {int vuxRet = ac63_test_case_vpls_(a);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/ac63_test_case(int))
