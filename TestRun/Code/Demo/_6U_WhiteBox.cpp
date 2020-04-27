
//Code/Demo/_6U_WhiteBox.cpp
#include "VuxInc/VuxFore.h"


#include "WhiteBox2.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_6U_WhiteBox.cpp.h"
#include "VuxMock/Demo/_6U_WhiteBox.cpp"


CWhiteBox2::CWhiteBox2()
{__VUFNID__(987); VuxDbgBrkO() 
{

}VUXFRTNE();}

CWhiteBox2::~CWhiteBox2()
{__VUFNID__(988); VuxDbgBrkO() 
{

}VUXFRTNE();}


/* //////////////////////////////////////////////
演示白盒覆盖及用例设计器的基本使用
功能: 这是教科书中关于白盒测试的经典示例，参见
      《软件测试》(郑人杰教授著)第五章第二节(102页)。
参数: A, 参数1
      B, 参数2
      X, 参数3
返回: X的值
///////////////////////////////////////////////*/
int CWhiteBox2::_01_WhiteBox(int A, int B, int X)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","A",(const void*)&A},{2,"int","B",(const void*)&B},{3,"int","X",(const void*)&X}}; if(VuxMckM("_01_WhiteBox",&vmckrt,vmckds,3,"CWhiteBox2",989,7,1)) return *(int*)vmckrt;{__VUFNINFO__("_01_WhiteBox","int",989); VuxDbgBrkO() 
{
    /*[学习提示：白盒覆盖]    意义：衡量测试完整度；找出遗漏用例。	常用覆盖：语句、条件值、判定、MC/DC、分支、路径，VU全部支持。	推荐的覆盖：MC/DC。MC/DC是航空标准，强度足够。MC/DC要求每个	              条件独立影响判定结果，实际上已包含语句、条件值、判定覆盖。				  分支包含空分支，空分支覆盖意义不大，非空分支的覆盖实际上就是判定覆盖；				  路径依赖于代码构成，当代码中含有多个逻辑块时，会组合出海量路径，				  因此，不必要求完成全部路径覆盖。	红绿灯机制：左边函数列表显示用绿、红、黄灯表示测试状况，	            红灯：有错误(失败的测试)，				黄灯：覆盖未达标，				黄红灯：有错误且覆盖未达标，				绿灯：无错误且覆盖达标。	覆盖标准：可在 工具->设定->统计与报告，设定覆盖标准，默认为：	          语句、条件值、判定、MC/DC达到100%。    */    

    /*[学习提示：白盒覆盖标记]	[T/F]未覆盖的条件真/假值,[M]未覆盖MCDC；	<T/F]未覆盖的判定真/假值；	未覆盖语句有红色背景；	红色的分支或路径未覆盖。	标记不可覆盖：点击未覆盖单位，右键菜单选择“删除逻辑单位”，	              或在用例设计器中点击X。    */ 

    /*[学习提示：用例设计器]	用途：找出遗漏用例，完成指定逻辑单位的覆盖。	条件：1)至少一个已执行且无异常的用例；2)存在未覆盖的逻辑单位。	使用：点击未覆盖的逻辑单位，右键菜单选择“用例设计”。	      用例设计器的“修改提示”的最下面，会显示使用说明，请认真阅读。    */ 

    if( VUXRS(1)&&(A>1) && VUXRS(2)&&( B==0))
    {{
 VUXRS(3);        X = X/A;
    }}
    if( VUXRS(4)&&(A==2) || VUXRS(5)&&( X>1))
    {{
 VUXRS(6);        X = X+1;
    }}

 VUXRS(7);    {int __vurtv__= X;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
复杂代码实现100%覆盖，并展示逻辑结构图应用与操作
功能: 删除C++代码中的注释
参数: pSrc, 源代码
      pDes, 保存删除注释后的代码
返回: 无
///////////////////////////////////////////////*/
void CWhiteBox2::_02_DeleteComment(char *pSrc, char *pDes)
{VMCKDS vmckds[2]={{1,"char*","pSrc",(const void*)&pSrc},{2,"char*","pDes",(const void*)&pDes}}; if(!VuxMckM("_02_DeleteComment",0,vmckds,2,"CWhiteBox2",990,37,1)) {__VUFNID__(990); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int len = strlen(pSrc); VUXLV("int",len,1);
    
    if( VUXRS(2)&&(len == 0))
    {{
 VUXRS(3);        VUXFRTN();
    }}
        
 VUXRSVB(4,2);    bool cmmSin = false; VUXLV("bool",cmmSin,2); //由//开始\n结束的单行注释
 VUXRSVB(5,3);    bool cmmMul = false; VUXLV("bool",cmmMul,3); //由/*开始*/结束的多行注释
 VUXRSVB(6,4);    char ch = *pSrc++; VUXLV("char",ch,4);
 VUXRSVB(7,5);    char next = 0; VUXLV("char",next,5);
    while( VUXRS(8)&&(ch))
    {VUXRBR_LOOP2(2,4,102);{
        if( VUXRS(9)&&(!cmmSin) && VUXRS(10)&&( !cmmMul)) //非注释
        {{
            if( VUXRS(11)&&(ch == '/')) //注释开始的第一个字符
            {{
 VUXRS(12);                next = *pSrc;
                if( VUXRS(13)&&(next == '\0'))
                {{ //结束
 VUXRS(14);                    break;
                }}
                else if( VUXRS(15)&&(next == '*'))
                {{
 VUXRS(16);                    cmmMul = true;
                }}
                else if( VUXRS(17)&&(next == '/'))
                {{
 VUXRS(18);                    cmmSin = true;
                }}
                
                if( VUXRS(19)&&(cmmMul) || VUXRS(20)&&( cmmSin))
                {{
 VUXRS(21);                    pSrc++; //忽略/后的一个字符
 VUXRS(22);                    ch = *pSrc++;
 VUXRS(23);                    continue;
                }}
            }}
            
 VUXRS(24);            *pDes++ = ch;
 VUXRS(25);            ch = *pSrc++;
        }}
        else if( VUXRS(26)&&(cmmSin)) //单行注释
        {{
            if( VUXRS(27)&&(ch == '\n')) //单行注释结束
            {{
 VUXRS(28);                cmmSin = false;
 VUXRS(29);                *pDes++ = ch; //\n是不能丢的
            }}
 VUXRS(30);            ch = *pSrc++;
        }}
        else if( VUXRS(31)&&(cmmMul)) //多行注释
        {{
            if( VUXRS(32)&&(ch == '*')) //开始多行注释
            {{
 VUXRS(33);                next = *pSrc;
                if( VUXRS(34)&&(next == '/'))
                {{
 VUXRS(35);                    cmmMul = false;
 VUXRS(36);                    *pSrc++; //忽略后面的/
                }}
            }}
 VUXRS(37);            ch = *pSrc++;
        }}
    }}
}VUXFRTNE();}}

/* //////////////////////////////////////////////
MC/DC演示
功能: 无
参数: 无意义
返回: 如果判断为真，返回真，否则返回假
///////////////////////////////////////////////*/
BOOL CWhiteBox2::_03_Mcdc1(BOOL A, BOOL B, BOOL C)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"BOOL","A",(const void*)&A},{2,"BOOL","B",(const void*)&B},{3,"BOOL","C",(const void*)&C}}; if(VuxMckM("_03_Mcdc1",&vmckrt,vmckds,3,"CWhiteBox2",1070,5,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_03_Mcdc1","BOOL",1070); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(A) && ( VUXRS(2)&&(B) || VUXRS(3)&&( C)))
    {{
 VUXRS(4);        {BOOL __vurtv__= 1;VUXFRTY();}
    }}

 VUXRS(5);    {BOOL __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
复杂的MC/DC演示
功能: 无
参数: 无意义
返回: 如果判断为真，返回真，否则返回假
///////////////////////////////////////////////*/    
BOOL CWhiteBox2::_04_Mcdc2(BOOL A, BOOL B, BOOL C, BOOL D, BOOL E, BOOL F, BOOL G, BOOL H, BOOL I, BOOL J, BOOL K)
{void* vmckrt=0; VMCKDS vmckds[11]={{1,"BOOL","A",(const void*)&A},{2,"BOOL","B",(const void*)&B},{3,"BOOL","C",(const void*)&C},{4,"BOOL","D",(const void*)&D},{5,"BOOL","E",(const void*)&E},{6,"BOOL","F",(const void*)&F},{7,"BOOL","G",(const void*)&G},{8,"BOOL","H",(const void*)&H},{9,"BOOL","I",(const void*)&I},{10,"BOOL","J",(const void*)&J},{11,"BOOL","K",(const void*)&K}}; if(VuxMckM("_04_Mcdc2",&vmckrt,vmckds,11,"CWhiteBox2",1071,13,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Mcdc2","BOOL",1071); VuxDbgBrkO() 
{
    /*[学习提示：快速完成覆盖]	MC/DC通常很难，但使用VU的用例设计器，完成下面超复杂判定的MC/DC覆盖	  也只需要一两分钟，所以单元测试应完成MC/DC覆盖，这不但是必须的，也是合理的。    */ 
    if( VUXRS(1)&&(A) && ( ( VUXRS(2)&&(B) || VUXRS(3)&&( C)) && ( VUXRS(4)&&(D) && VUXRS(5)&&( E)) ) && ( ( VUXRS(6)&&(F) || VUXRS(7)&&( G)) && ( VUXRS(8)&&(H) || VUXRS(9)&&( I)  || VUXRS(10)&&( J)) || VUXRS(11)&&( K) ))
    {{
 VUXRS(12);        {BOOL __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(13);    {BOOL __vurtv__= 0;VUXFRTY();}
}}}


#include "VuxConn/Demo/_6U_WhiteBox.cpp.h"

void _demo__6u_whitebox_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
{
    cbfs[index] = (void*)VuxCallBack;
    onfs[index] = (void*)VuxObjectNew;
    
#ifdef VUX_GVAR_INIT_DEFINED 
    gvfs[index] = (void*)VuxGlobalVarInit;
#endif
    
#ifdef VUX_SET_USERF_DEFINED 
    VuxCallSetUserFp();
#endif
}