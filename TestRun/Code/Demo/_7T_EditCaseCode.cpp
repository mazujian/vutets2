
//Code/Demo/_7T_EditCaseCode.cpp
#include "VuxInc/VuxFore.h"




#include "TypeDef2.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_7T_EditCaseCode.cpp.h"
#include "VuxMock/Demo/_7T_EditCaseCode.cpp"

/*-----------------------------------------------
需使用用例代码编辑器或修改用例代码的情形。
-----------------------------------------------*/

/* //////////////////////////////////////////////
需使用用例代码编码器：异常测试(初学可跳过)
功能: 计算整数的商
参数: i, 被除数
      j, 除数
返回: i/j 的商
///////////////////////////////////////////////*/
int _01_Dec(int i, int j)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","i",(const void*)&i},{2,"int","j",(const void*)&j}}; if(VuxMck("_01_Dec",&vmckrt,vmckds,2,"",912,5,1)) return *(int*)vmckrt;{__VUFNINFO__("_01_Dec","int",912); VuxDbgBrkO() 
{
    /*[学习提示：异常测试]	在用例代码窗口，将鼠标放在 用例代码列表 部分，右键菜单	  选择“生成异常测试代码”。	*/
    if( VUXRS(1)&&(j == 0))
    {{
 VUXRS(2);        throw CMyException();
    }}

    if( VUXRS(3)&&(j == -1))
    {{
 VUXRS(4);        throw(-1);
    }}

 VUXRS(5);    {int __vurtv__= i/j;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
需修改用例代码(一)：特别的输入输出
功能: 无
参数: list，一个链表
      pos，传递链表当前项的位置
返回: 链表当前项的值
///////////////////////////////////////////////*/
int _02_Position(CList<int, int>& list, POSITION pos)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"CList<int,int>","list",(const void*)&list},{2,"POSITION","pos",(const void*)&pos}}; if(VuxMck("_02_Position",&vmckrt,vmckds,2,"",1073,1,1)) return *(int*)vmckrt;{__VUFNINFO__("_02_Position","int",1073); VuxDbgBrkO() 
{
    /*[学习提示：可以添加变量，让pos指向list中的任意项，以及判断任意项的值]	添加输入变量：在测试数据窗口，点击"添加变量到表格"，选择“局部变量”，“输入”	添加输出变量：在测试数据窗口，点击"添加变量到表格"，选择“局部变量”，“输出”	虽然最终修改了用例代码，但可在数据表格界面直接完成，	请参考帮助：测试数据之一 >> 添加变量到表格	*/
 VUXRS(1);    {int __vurtv__= list.GetAt(pos);VUXFRTY();}
}}}

/* //////////////////////////////////////////////
需修改用例代码(二)：可变参数
功能: 无
参数: a 无意义
      b 无意义
返回: 无意义
///////////////////////////////////////////////*/
int _03_VaryingParameter(int a, int b,...)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","a",(const void*)&a},{2,"int","b",(const void*)&b}}; if(VuxMck("_03_VaryingParameter",&vmckrt,vmckds,2,"",914,1,9)) return *(int*)vmckrt;{__VUFNINFO__("_03_VaryingParameter","int",914); VuxDbgBrkO() 
{
    /*[学习提示：可变参数]	1) 使用"添加变量到表格"，添加一个局部变量作为第三个参数，例如int c。    2) 切换到测试文件窗口，将用例代码中TEST_RUN所在行的代码由：    EST_RUN _03_VaryingParameter_vpls(a, b);    改为:    TEST_RUN _03_VaryingParameter_vpls(a, b, c);    即添加一个参数c。    3) 为插装函数_03_VaryingParameter_vpls增加参数c：    首先，跳转到插装函数：光标放在用例代码前面的#include开头的行，右键菜单选择“跳转”。	切换到测试代码窗口，将显示用例代码，向上一些可看到插桩函数_03_VaryingParameter_vpls，	修改_03_VaryingParameter_vpls中的代码，使第三个参数有效。	*/
 VUXRS(1);    {int __vurtv__= a+b;VUXFRTY();}
}}}

#include "VuxConn/Demo/_7T_EditCaseCode.cpp.h"

void _demo__7t_editcasecode_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
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