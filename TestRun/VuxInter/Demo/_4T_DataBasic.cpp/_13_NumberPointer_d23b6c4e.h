
//VuxInter/Demo/_4T_DataBasic.cpp/_13_NumberPointer_d23b6c4e.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_13_NumberPointer(int,int))
#ifdef _VUDEBUG
static int _13_NumberPointer_vpls_(int a,int b){ VuxDbgBrkP()
{
    int ret = 0;
    unsigned int dataAddr;
    unsigned int data;     
    int dataLen;     
    int x,y,z;
    volatile unsigned char* j,k,l;

    /*[学习提示：处理嵌入式环境下，用数字定义的指针]    工程属性 >> 高级 >> 替换 >> 数字地址转为合法指针，选中“自动处理”。    绝大多数场景均可以自动处理，如自动处理产生错误，可点击“添加”进行手动设置。    以下示例均可以自动处理。	*/

    //用宏定义的基地址
    //#define BASE_ADDR 0x200000
    //使用宏语法，以基地址加偏移定义的基础类型指针。
    //#define Mem01 ((int*)(BASE_ADDR3 + 0x100)) //指针1
    //#define Mem02 ((int*)(BASE_ADDR3 + 0x200)) //指针2
    * ((int*)_Mem01) = a;
    * ((int*)_Mem02) = b;
    ret += * ((int*)_Mem01);
    ret += * ((int*)_Mem02);

    //使用宏语法定义的基础类型指针
    //#define Mem03 ((int*)(0x00200100))
    //#define Mem04 ((int*)(0x00200200))
    * ((int*)_Mem03) = a;
    * ((int*)_Mem04) = b;
    ret += * ((int*)_Mem03);
    ret += * ((int*)_Mem04);

    //使用宏语法，以基地址加偏移定义的复合类型指针
    //#define objData1 ((ObjectType*)(BASE_ADDR + 0x1000))
    //#define objData2 ((ObjectType*)(BASE_ADDR + 0x2000))
    ((ObjectType*)_objData1)->a = a;
    ((ObjectType*)_objData2)->a = b;
    ret += ((ObjectType*)_objData1)->a;
    ret += ((ObjectType*)_objData2)->a;
    
     
    //使用宏语法，直接用数字定义的复合类型指针
    //#define objData3 ((ObjectType*)0x00300100)
    //#define objData4 ((ObjectType*)0x00300200)
    ((ObjectType*)_objData3)->a = a;
    ((ObjectType*)_objData4)->a = b;
    ret += ((ObjectType*)_objData3)->a;
    ret += ((ObjectType*)_objData4)->a;
     
    //不使用宏义，地址为硬编码
    x = *(int*)_0x90000010;
    y = *(int*)_0x90000020;
    x = *(int*)_0x90000040;
     
    *(int*)_0x90000004 = a;
    *(int*)_0x90000008 = b;
    *(int*)_0x90000012 = ret;   
     
    //对指针赋值
    switch(a)
    {
        case 0:
        {
            //通过变量定义的地址
            dataAddr = _0xB0000000;
            dataLen = *(unsigned short*)_0x6c0c0060;
            break;
        }
        case 1:
        {
            dataAddr = _0xB0200000;
            dataLen = *(unsigned short*)_0x6c0c0063;
            break;
        }
        case 2:
        {
            dataAddr = _0xB0400000;
            dataLen = *(unsigned short*)_0x6c0c0066;
            break;          
        }
        default :
        {
            dataAddr = _0xB0800000;
            dataLen = *(unsigned short*)_0x6c0c0069;
            break;          
        }
    }
    
    //与一般的全局变量相同，可加入表格，也支持自动生成用例
    data = *(unsigned int*)dataAddr;
    if(data == 10)
    {
        ret += 1000;
    }
    else if(data < 5)
    {
        ret += 2000;
    }
    else
    {
        ret += 3000;
    }
        
    //以下是一些不太常见的特殊格式
    j = (unsigned char volatile*)__0x6000__Xr___1_[1];
    ((unsigned char volatile*)_0)[0x500 + 0x20] = (unsigned char)0xF0;
    ((unsigned char volatile*)___0x6000_____1__)[0] = 0x01;
    ((unsigned char volatile*)___0x6000_____1__)[1] = 0x02;
     
    {
        unsigned char* address;
        int id = 123;
        address = (unsigned char*)__0x1000000_1024_;
        *(unsigned char*)(address) = 0x30;
    }

    {
        int i;
        unsigned int addr[6] = 
        {
            _0x1000000,
            _0x1000004,
            _0x1000008,
            _0x1000012,
            _0x1000016,
            _0x1000020
        };

        int a[6];
        for(i=0; i<6; i++)
        {
            a[i] = *(unsigned int*)(addr[i]);
        }
        

        {
            int fbase = 0x10000000;
            *(unsigned char*)__fbase_0x555_ = 0xaa;
            ret = *(unsigned char*)__fbase_0x555_;
        }
    }       
     
    y = 0;
    while(y < 0x1000)
    {
        ((unsigned char volatile*)_0)[y] = (unsigned char)0xFF;
        ((unsigned char volatile*)_0)[y+1] = (unsigned char)0xEE;
         
        if(((unsigned char volatile*)_0)[y] != 0xFF)
        {
            ret++;
        }
         
        if(((unsigned char volatile*)_0)[y+1] != 0xEE)
        {
            ret++;
        }
         
        y++;
    }

    return ret;
}}
#else
static int _13_NumberPointer_vpls_(int a,int b){VUX_VARIABLE(3) VUX_VARIABLE(4)  __VUFNINFO__("_13_NumberPointer","int",0);VuxDbp(0,0,81);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    int ret = 0; VUXLV("int",ret,1);
VUXRLNFVB(2,2,2);    unsigned int dataAddr; VUXLV("unsigned int",dataAddr,2);
VUXRLNFVB(3,3,3);    unsigned int data; VUXLV("unsigned int",data,3);     
VUXRLNFVB(4,4,4);    int dataLen; VUXLV("int",dataLen,4);     
VUXRLNFVB(5,5,5);    int x,y,z; VUXLV("int",x,5); VUXLVS("int",y,6); VUXLVS("int",z,7);
VUXRLNFVB(6,6,8);    volatile unsigned char* j,k,l; VUXLV("volatile unsigned char*",j,8); VUXLVS("volatile unsigned char",k,9); VUXLVS("volatile unsigned char",l,10);

    /*[学习提示：处理嵌入式环境下，用数字定义的指针]    工程属性 >> 高级 >> 替换 >> 数字地址转为合法指针，选中“自动处理”。    绝大多数场景均可以自动处理，如自动处理产生错误，可点击“添加”进行手动设置。    以下示例均可以自动处理。	*/

    //用宏定义的基地址
    //#define BASE_ADDR 0x200000
    //使用宏语法，以基地址加偏移定义的基础类型指针。
    //#define Mem01 ((int*)(BASE_ADDR3 + 0x100)) //指针1
    //#define Mem02 ((int*)(BASE_ADDR3 + 0x200)) //指针2
VUXRLNF(7,7);    * ((int*)_Mem01) = a;
VUXRLNF(8,8);    * ((int*)_Mem02) = b;
VUXRLNF(9,9);    ret += * ((int*)_Mem01);
VUXRLNF(10,10);    ret += * ((int*)_Mem02);

    //使用宏语法定义的基础类型指针
    //#define Mem03 ((int*)(0x00200100))
    //#define Mem04 ((int*)(0x00200200))
VUXRLNF(11,11);    * ((int*)_Mem03) = a;
VUXRLNF(12,12);    * ((int*)_Mem04) = b;
VUXRLNF(13,13);    ret += * ((int*)_Mem03);
VUXRLNF(14,14);    ret += * ((int*)_Mem04);

    //使用宏语法，以基地址加偏移定义的复合类型指针
    //#define objData1 ((ObjectType*)(BASE_ADDR + 0x1000))
    //#define objData2 ((ObjectType*)(BASE_ADDR + 0x2000))
VUXRLNF(15,15);    ((ObjectType*)_objData1)->a = a;
VUXRLNF(16,16);    ((ObjectType*)_objData2)->a = b;
VUXRLNF(17,17);    ret += ((ObjectType*)_objData1)->a;
VUXRLNF(18,18);    ret += ((ObjectType*)_objData2)->a;
    
     
    //使用宏语法，直接用数字定义的复合类型指针
    //#define objData3 ((ObjectType*)0x00300100)
    //#define objData4 ((ObjectType*)0x00300200)
VUXRLNF(19,19);    ((ObjectType*)_objData3)->a = a;
VUXRLNF(20,20);    ((ObjectType*)_objData4)->a = b;
VUXRLNF(21,21);    ret += ((ObjectType*)_objData3)->a;
VUXRLNF(22,22);    ret += ((ObjectType*)_objData4)->a;
     
    //不使用宏义，地址为硬编码
VUXRLNF(23,23);    x = *(int*)_0x90000010;
VUXRLNF(24,24);    y = *(int*)_0x90000020;
VUXRLNF(25,25);    x = *(int*)_0x90000040;
     
VUXRLNF(26,26);    *(int*)_0x90000004 = a;
VUXRLNF(27,27);    *(int*)_0x90000008 = b;
VUXRLNF(28,28);    *(int*)_0x90000012 = ret;VUXRBF(2,29);   
     
    //对指针赋值
    switch(a)
    {
        case 0:
        {VUXRBR(2);{
            //通过变量定义的地址
VUXRB(5);VUXRLNF(29,32);            dataAddr = _0xB0000000;
VUXRLNF(30,33);            dataLen = *(unsigned short*)_0x6c0c0060;
VUXRLNF(31,34);            break;
        }}
        case 1:
        {VUXRBR(3);{
VUXRB(7);VUXRLNF(32,36);            dataAddr = _0xB0200000;
VUXRLNF(33,37);            dataLen = *(unsigned short*)_0x6c0c0063;
VUXRLNF(34,38);            break;
        }}
        case 2:
        {VUXRBR(4);{
VUXRB(9);VUXRLNF(35,40);            dataAddr = _0xB0400000;
VUXRLNF(36,41);            dataLen = *(unsigned short*)_0x6c0c0066;
VUXRLNF(37,42);            break;          
        }}
        default :
        {VUXRBR(5);{
VUXRB(11);VUXRLNF(38,44);            dataAddr = _0xB0800000;
VUXRLNF(39,45);            dataLen = *(unsigned short*)_0x6c0c0069;
VUXRLNF(40,46);            break;          
        }}
    }
    
    //与一般的全局变量相同，可加入表格，也支持自动生成用例
VUXRB(13);VUXRLNF(41,48);    data = *(unsigned int*)dataAddr;
    if((VUXRCS0(5,49)&&(data == 10)&&VUXRC1(5)))
    {VUXRBR(6);{
VUXRB(14);VUXRLNF(42,50);        ret += 1000;
    }}
    else if((VUXRCS0(6,51)&&(data < 5)&&VUXRC1(6)))
    {VUXRBR(7);{
VUXRB(15);VUXRLNF(43,52);        ret += 2000;
    }}
    else
    {VUXRBR(8);{
VUXRB(16);VUXRLNF(44,53);        ret += 3000;
    }}
        
    //以下是一些不太常见的特殊格式
VUXRB(17);VUXRLNF(45,54);    j = (unsigned char volatile*)__0x6000__Xr___1_[1];
VUXRLNF(46,55);    ((unsigned char volatile*)_0)[0x500 + 0x20] = (unsigned char)0xF0;
VUXRLNF(47,56);    ((unsigned char volatile*)___0x6000_____1__)[0] = 0x01;
VUXRLNF(48,57);    ((unsigned char volatile*)___0x6000_____1__)[1] = 0x02;
     
    {
VUXRLNFVB(49,58,11);        unsigned char* address; VUXLV("unsigned char*",address,11);
VUXRLNFVB(50,59,12);        int id = 123; VUXLV("int",id,12);
VUXRLNF(51,60);        address = (unsigned char*)__0x1000000_1024_;
VUXRLNF(52,61);        *(unsigned char*)(address) = 0x30;
    }

    {
VUXRLNFVB(53,62,13);        int i; VUXLV("int",i,13);
VUXRLNFVB(54,63,14);        unsigned int addr[6] = 
        {
            _0x1000000,
            _0x1000004,
            _0x1000008,
            _0x1000012,
            _0x1000016,
            _0x1000020
        }; VUXLVA("unsigned int[6]",addr,14);

VUXRLNFVB(55,64,15);        int a[6]; VUXLVA("int[6]",a,15);VUXRBF(18,65);
        for(i=0;(VUXRCS0(7,67)&&( i<6)&&VUXRC1(7));VUXRBF(19,66), i++)
        {VUXRBR_LOOP(3,9,112);{
VUXRB(20);VUXRLNF(58,68);            a[i] = *(unsigned int*)(addr[i]);
        }}VUXRBR_OUT(3, 10);

        

        {
VUXRBV(21);VUXRLNFVB(59,69,16);            int fbase = 0x10000000; VUXLV("int",fbase,16);
VUXRLNF(60,70);            *(unsigned char*)__fbase_0x555_ = 0xaa;
VUXRLNF(61,71);            ret = *(unsigned char*)__fbase_0x555_;
        }
    }       
     
VUXRLNF(62,72);    y = 0;
    while((VUXRCS0(8,73)&&(y < 0x1000)&&VUXRC1(8)))
    {VUXRBR_LOOP(4,11,113);{
VUXRB(22);VUXRLNF(63,74);        ((unsigned char volatile*)_0)[y] = (unsigned char)0xFF;
VUXRLNF(64,75);        ((unsigned char volatile*)_0)[y+1] = (unsigned char)0xEE;
         
        if((VUXRCS0(9,76)&&(((unsigned char volatile*)_0)[y] != 0xFF)&&VUXRC1(9)))
        {VUXRBR(13);{
VUXRB(23);VUXRLNF(65,77);            ret++;
        }}
VUXRBR_ELSE(14);
         
        if((VUXRCS0(10,78)&&(((unsigned char volatile*)_0)[y+1] != 0xEE)&&VUXRC1(10)))
        {VUXRBR(15);{
VUXRB(24);VUXRLNF(66,79);            ret++;
        }}
VUXRBR_ELSE(16);
         
VUXRB(25);VUXRLNF(67,80);        y++;
    }}VUXRBR_OUT(4, 12);


VUXRB(26);VUXRLNF(68,81);    {int __vurtv__= ret;VUXFRTY();}
}}
#endif

static int _13_NumberPointer_vpls(int a,int b)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _13_NumberPointer(a,b);}
	else if(VuxIsRepeatRun()) {return _13_NumberPointer_vpls_(a,b);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _13_NumberPointer_vpls_(a,b) : _13_NumberPointer(a,b);
#else
    {int vuxRet = _13_NumberPointer_vpls_(a,b);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_13_NumberPointer(int,int))
