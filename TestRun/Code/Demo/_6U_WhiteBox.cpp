
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
��ʾ�׺и��Ǽ�����������Ļ���ʹ��
����: ���ǽ̿����й��ڰ׺в��Եľ���ʾ�����μ�
      ��������ԡ�(֣�˽ܽ�����)�����µڶ���(102ҳ)��
����: A, ����1
      B, ����2
      X, ����3
����: X��ֵ
///////////////////////////////////////////////*/
int CWhiteBox2::_01_WhiteBox(int A, int B, int X)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"int","A",(const void*)&A},{2,"int","B",(const void*)&B},{3,"int","X",(const void*)&X}}; if(VuxMckM("_01_WhiteBox",&vmckrt,vmckds,3,"CWhiteBox2",989,7,1)) return *(int*)vmckrt;{__VUFNINFO__("_01_WhiteBox","int",989); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ���׺и���]    ���壺�������������ȣ��ҳ���©������	���ø��ǣ���䡢����ֵ���ж���MC/DC����֧��·����VUȫ��֧�֡�	�Ƽ��ĸ��ǣ�MC/DC��MC/DC�Ǻ��ձ�׼��ǿ���㹻��MC/DCҪ��ÿ��	              ��������Ӱ���ж������ʵ�����Ѱ�����䡢����ֵ���ж����ǡ�				  ��֧�����շ�֧���շ�֧�������岻�󣬷ǿշ�֧�ĸ���ʵ���Ͼ����ж����ǣ�				  ·�������ڴ��빹�ɣ��������к��ж���߼���ʱ������ϳ�����·����				  ��ˣ�����Ҫ�����ȫ��·�����ǡ�	���̵ƻ��ƣ���ߺ����б���ʾ���̡��졢�ƵƱ�ʾ����״����	            ��ƣ��д���(ʧ�ܵĲ���)��				�Ƶƣ�����δ��꣬				�ƺ�ƣ��д����Ҹ���δ��꣬				�̵ƣ��޴����Ҹ��Ǵ�ꡣ	���Ǳ�׼������ ����->�趨->ͳ���뱨�棬�趨���Ǳ�׼��Ĭ��Ϊ��	          ��䡢����ֵ���ж���MC/DC�ﵽ100%��    */    

    /*[ѧϰ��ʾ���׺и��Ǳ��]	[T/F]δ���ǵ�������/��ֵ,[M]δ����MCDC��	<T/F]δ���ǵ��ж���/��ֵ��	δ��������к�ɫ������	��ɫ�ķ�֧��·��δ���ǡ�	��ǲ��ɸ��ǣ����δ���ǵ�λ���Ҽ��˵�ѡ��ɾ���߼���λ����	              ��������������е��X��    */ 

    /*[ѧϰ��ʾ�����������]	��;���ҳ���©���������ָ���߼���λ�ĸ��ǡ�	������1)����һ����ִ�������쳣��������2)����δ���ǵ��߼���λ��	ʹ�ã����δ���ǵ��߼���λ���Ҽ��˵�ѡ��������ơ���	      ����������ġ��޸���ʾ���������棬����ʾʹ��˵�����������Ķ���    */ 

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
���Ӵ���ʵ��100%���ǣ���չʾ�߼��ṹͼӦ�������
����: ɾ��C++�����е�ע��
����: pSrc, Դ����
      pDes, ����ɾ��ע�ͺ�Ĵ���
����: ��
///////////////////////////////////////////////*/
void CWhiteBox2::_02_DeleteComment(char *pSrc, char *pDes)
{VMCKDS vmckds[2]={{1,"char*","pSrc",(const void*)&pSrc},{2,"char*","pDes",(const void*)&pDes}}; if(!VuxMckM("_02_DeleteComment",0,vmckds,2,"CWhiteBox2",990,37,1)) {__VUFNID__(990); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    int len = strlen(pSrc); VUXLV("int",len,1);
    
    if( VUXRS(2)&&(len == 0))
    {{
 VUXRS(3);        VUXFRTN();
    }}
        
 VUXRSVB(4,2);    bool cmmSin = false; VUXLV("bool",cmmSin,2); //��//��ʼ\n�����ĵ���ע��
 VUXRSVB(5,3);    bool cmmMul = false; VUXLV("bool",cmmMul,3); //��/*��ʼ*/�����Ķ���ע��
 VUXRSVB(6,4);    char ch = *pSrc++; VUXLV("char",ch,4);
 VUXRSVB(7,5);    char next = 0; VUXLV("char",next,5);
    while( VUXRS(8)&&(ch))
    {VUXRBR_LOOP2(2,4,102);{
        if( VUXRS(9)&&(!cmmSin) && VUXRS(10)&&( !cmmMul)) //��ע��
        {{
            if( VUXRS(11)&&(ch == '/')) //ע�Ϳ�ʼ�ĵ�һ���ַ�
            {{
 VUXRS(12);                next = *pSrc;
                if( VUXRS(13)&&(next == '\0'))
                {{ //����
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
 VUXRS(21);                    pSrc++; //����/���һ���ַ�
 VUXRS(22);                    ch = *pSrc++;
 VUXRS(23);                    continue;
                }}
            }}
            
 VUXRS(24);            *pDes++ = ch;
 VUXRS(25);            ch = *pSrc++;
        }}
        else if( VUXRS(26)&&(cmmSin)) //����ע��
        {{
            if( VUXRS(27)&&(ch == '\n')) //����ע�ͽ���
            {{
 VUXRS(28);                cmmSin = false;
 VUXRS(29);                *pDes++ = ch; //\n�ǲ��ܶ���
            }}
 VUXRS(30);            ch = *pSrc++;
        }}
        else if( VUXRS(31)&&(cmmMul)) //����ע��
        {{
            if( VUXRS(32)&&(ch == '*')) //��ʼ����ע��
            {{
 VUXRS(33);                next = *pSrc;
                if( VUXRS(34)&&(next == '/'))
                {{
 VUXRS(35);                    cmmMul = false;
 VUXRS(36);                    *pSrc++; //���Ժ����/
                }}
            }}
 VUXRS(37);            ch = *pSrc++;
        }}
    }}
}VUXFRTNE();}}

/* //////////////////////////////////////////////
MC/DC��ʾ
����: ��
����: ������
����: ����ж�Ϊ�棬�����棬���򷵻ؼ�
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
���ӵ�MC/DC��ʾ
����: ��
����: ������
����: ����ж�Ϊ�棬�����棬���򷵻ؼ�
///////////////////////////////////////////////*/    
BOOL CWhiteBox2::_04_Mcdc2(BOOL A, BOOL B, BOOL C, BOOL D, BOOL E, BOOL F, BOOL G, BOOL H, BOOL I, BOOL J, BOOL K)
{void* vmckrt=0; VMCKDS vmckds[11]={{1,"BOOL","A",(const void*)&A},{2,"BOOL","B",(const void*)&B},{3,"BOOL","C",(const void*)&C},{4,"BOOL","D",(const void*)&D},{5,"BOOL","E",(const void*)&E},{6,"BOOL","F",(const void*)&F},{7,"BOOL","G",(const void*)&G},{8,"BOOL","H",(const void*)&H},{9,"BOOL","I",(const void*)&I},{10,"BOOL","J",(const void*)&J},{11,"BOOL","K",(const void*)&K}}; if(VuxMckM("_04_Mcdc2",&vmckrt,vmckds,11,"CWhiteBox2",1071,13,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_04_Mcdc2","BOOL",1071); VuxDbgBrkO() 
{
    /*[ѧϰ��ʾ��������ɸ���]	MC/DCͨ�����ѣ���ʹ��VU�������������������泬�����ж���MC/DC����	  Ҳֻ��Ҫһ�����ӣ����Ե�Ԫ����Ӧ���MC/DC���ǣ��ⲻ���Ǳ���ģ�Ҳ�Ǻ���ġ�    */ 
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