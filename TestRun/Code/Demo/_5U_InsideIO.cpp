
//Code/Demo/_5U_InsideIO.cpp
#include "VuxInc/VuxFore.h"



#include "InsideIO2.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/_5U_InsideIO.cpp.h"
#include "VuxMock/Demo/_5U_InsideIO.cpp"

CInsideIO2::CInsideIO2()
{__VUFNID__(959); VuxDbgBrkO() 
{
 VUXRS(1);    mExpectTemperature = 0;
}VUXFRTNE();}

extern int getCurrentTemperature();
/* ////////////////////////////////////////////// 
非示例，调用硬件获取环境温度
功能: 调用硬件设备获取环境温度
参数: pTemperature, 输出参数，保存取得的环境温度
返回: int类型，如果函数执行失败，返回0，否则返回非0值
///////////////////////////////////////////////*/
BOOL CInsideIO2::GetTemperature(int* pTemperature)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int*","pTemperature",(const void*)&pTemperature}}; if(VuxMckM("GetTemperature",&vmckrt,vmckds,1,"CInsideIO2",969,4,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("GetTemperature","BOOL",969); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(pTemperature != 0))
    {{
 VUXRS(2);        *pTemperature = getCurrentTemperature();
 VUXRS(3);        {BOOL __vurtv__= 1;VUXFRTY();}
    }}
 VUXRS(4);    {BOOL __vurtv__= 0;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
演示底层输入的应用
功能: 空调控制程序片断，取得环境温度并计算制冷器需
      运行的时间
参数: pWorkTime, 输出参数，保存制冷器需运行的时间
返回: BOOL类型，如果函数执行失败，返回FALSE，否则返回TRUE
///////////////////////////////////////////////*/
BOOL CInsideIO2::_01_WorkTime(int* pWorkTime)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int*","pWorkTime",(const void*)&pWorkTime}}; if(VuxMckM("_01_WorkTime",&vmckrt,vmckds,1,"CInsideIO2",960,12,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("_01_WorkTime","BOOL",960); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    BOOL success = 0; VUXLV("BOOL",success,1);  //取环境温度是否成功
 VUXRSVB(2,2);    int temperature; VUXLV("int",temperature,2);  //环境温度

    /*[学习提示：底层输入应用]    GetTemperature()取得环境温度。此函数有几种可能    1)未编写 2)被隔离 3)调用实际代码但不符合测试需求。	双击GetTemperature设置底层输入，不需要考虑属于哪种情形。	*/
 VUXRS(3);    success = GetTemperature(&temperature);

    if( VUXRS(4)&&(!success))
    {{
 VUXRS(5);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
    
    //计算温度差，mExpectTemperature是成员变量
 VUXRSVB(6,3);    int TempDiff = temperature - mExpectTemperature; VUXLV("int",TempDiff,3);
    if( VUXRS(7)&&(TempDiff <= 0))
    {{
 VUXRS(8);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}
        
    if( VUXRS(9)&&(pWorkTime == 0))
    {{
 VUXRS(10);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}            

    //为了简化问题，这里假设温差一度，需运行一分钟
 VUXRS(11);    *pWorkTime = TempDiff * 60;
 VUXRS(12);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

/* //////////////////////////////////////////////
演示局部输入(替换"="右边)
功能: 游戏程序中用于计算打击效果的代码片断，连续打击时
      效果随次数递减
参数: reset, 输入参数，为true时重置打击次数
返回: int类型，打击效果
///////////////////////////////////////////////*/
int CInsideIO2::_02_PowerEffect(bool reset)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"bool","reset",(const void*)&reset}}; if(VuxMckM("_02_PowerEffect",&vmckrt,vmckds,1,"CInsideIO2",961,8,1)) return *(int*)vmckrt;{__VUFNINFO__("_02_PowerEffect","int",961); VuxDbgBrkO() 
{   
    /*[学习提示：局部输入应用]    打击次数times，由于是局部变量，用例中无法访问，难于测试，	  点击下行代码，右键菜单选择 局部输入(替换"="右边)，可将times改为可	  在表格中设置的普通变量。	*/
 VUXRSVB(1,1);    static int times = 0; VUXLV("int",times,1);
    if( VUXRS(2)&&(reset))
    {{ VUXRS(3); times = 0;
    }}
 VUXRS(4);    times++;
    
 VUXRSVB(5,2);    int effect[] =
    {9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
    }; VUXLVA("int[]",effect,2);
    if( VUXRS(6)&&(times >= sizeof(effect) / sizeof(effect[0])))
    {{
 VUXRS(7);        {int __vurtv__= 0;VUXFRTY();}
    }}
 VUXRS(8);    {int __vurtv__= effect[times];VUXFRTY();}
}}}

//模拟从界面读取数据
void GetDlgItemText(int id,  CString& value);
//随便定义的资源ID
#define IDC_USERNAME  0x1001
#define IDC_PASSWORD  0x1002
#define IDC_PASSWORD2 0x1003


/* ////////////////////////////////////////////// 
演示界面输入的设置
功能: 用户修改用户名或密码。
      用户从界面输入新的用户名和密码，将修改后的用户名和/或
	  密码写入数据库。原用户名和密码保存在成员变量中。
参数: 无
返回: 无
///////////////////////////////////////////////*/
void CInsideIO2::_03_UpdateUserNameOrPassword()
{if(!VuxMckM("_03_UpdateUserNameOrPassword",0,0,0,"CInsideIO2",962,15,1)) {__VUFNID__(962); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    CString sql; VUXLV("CString",sql,1);
 VUXRSVB(2,2);    CString sUserName, sPassword, sPassword2; VUXLV("CString",sUserName,2); VUXLVS("CString",sPassword,3); VUXLVS("CString",sPassword2,4);

    /*[学习提示：局部输入应用]    以下三行代码，是从界面读取数据的语句，可以视为赋值语句。	选中一行代码，用局部输入(替换赋值语句)功能， 可以将原赋值语句	  改为普通赋值语句，并可在表格中设置变量的值。	*/
 VUXRS(3);    GetDlgItemText(0x1001,  sUserName);
 VUXRS(4);    GetDlgItemText(0x1002,  sPassword);
 VUXRS(5);    GetDlgItemText(0x1003, sPassword2);

    //其他检查用户名和密码的代码(包括sPassword是否与sPassword2相等)忽略
    //...
    
    //用户名和密码至少一项修改
    if( VUXRS(6)&&(sUserName != msUserName) || VUXRS(7)&&( sPassword != msPassword))
    {{
 VUXRS(8);        sql = "Update Users Set";
        if( VUXRS(9)&&(sUserName != msUserName))
        {{
 VUXRS(10);            sql += " UserName='" + sUserName + "'";
        }}
        if( VUXRS(11)&&(sPassword != msPassword))
        {{
 VUXRS(12);            sql += ", Password='" + sPassword + "'";
        }}
 VUXRS(13);        sql += " Where UserName='" + msUserName + "'";
        
        //写入数据库
 VUXRSVB(14,5);        CDataBase db; VUXLV("CDataBase",db,5);
 VUXRS(15);        db.Execute(sql);        
    }}
}VUXFRTNE();}}

/* ////////////////////////////////////////////// 
演示局部输入(替换选中代码)
///////////////////////////////////////////////*/
int CInsideIO2::_04_LocalInput1(int index, int arg)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","index",(const void*)&index},{2,"int","arg",(const void*)&arg}}; if(VuxMckM("_04_LocalInput1",&vmckrt,vmckds,2,"CInsideIO2",963,6,1)) return *(int*)vmckrt;{__VUFNINFO__("_04_LocalInput1","int",963); VuxDbgBrkO() 
{
    /*[学习提示：局部输入应用]    *(gDataA.b.parr[index]) 要初始化很困难，但实际上只是一个int	  类型变量。    可以用局部输入(替换选中代码)将表达式替换为一个可在表格中直接接接接接	  设置的int类型变量	*/
 VUXRSVB(1,1);    int m = *(gDataA.b.parr[index]) * arg; VUXLV("int",m,1);
    
    if( VUXRS(2)&&(m <= 10))
    {{
        //其他代码
 VUXRS(3);        {int __vurtv__= m;VUXFRTY();}
    }}

    if( VUXRS(4)&&(m <= 100))
    {{
        //其他代码
 VUXRS(5);        {int __vurtv__= m;VUXFRTY();}
    }}

 VUXRS(6);    {int __vurtv__= m;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
演示局部输入(插入赋值语句)
///////////////////////////////////////////////*/
int CInsideIO2::_05_LocalInput2(int arg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","arg",(const void*)&arg}}; if(VuxMckM("_05_LocalInput2",&vmckrt,vmckds,1,"CInsideIO2",964,4,1)) return *(int*)vmckrt;{__VUFNINFO__("_05_LocalInput2","int",964); VuxDbgBrkO() 
{   
 VUXRSVB(1,1);    int param; VUXLV("int",param,1);
 VUXRSVB(2,2);    CLibType lt; VUXLV("CLibType",lt,2);

    /*[学习提示：局部输入应用]    可以下行语句后，用局部输入(插入赋值语句)，来设置param的值，	这种方式可以代替底层输入。	*/
 VUXRS(3);    lt.GetParam(&param);
    //其他代码
 VUXRS(4);    {int __vurtv__= param;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
模拟中断对全局变量的修改
///////////////////////////////////////////////*/
int CInsideIO2::_06_Interrupt(int arg)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","arg",(const void*)&arg}}; if(VuxMckM("_06_Interrupt",&vmckrt,vmckds,1,"CInsideIO2",965,3,1)) return *(int*)vmckrt;{__VUFNINFO__("_06_Interrupt","int",965); VuxDbgBrkO() 
{   
    /*[学习提示：模拟中断]    常用于嵌入式测试。如果中断可能造成对全局变量的修改，	  且代码的功能逻辑涉及该全局变量，则可在任意位置模拟中断。	方法：点击中断位置，右键菜单选择“模拟中断”。	*/    
    //... 其他代码省略
    if( VUXRS(1)&&(giVar > 1))
    {{
 VUXRS(2);        {int __vurtv__= 1;VUXFRTY();}
    }}
    else
    {{
 VUXRS(3);        {int __vurtv__= 0;VUXFRTY();}
    }}
}}}

/* ////////////////////////////////////////////// 
利用局部输入和多次赋值解决死循环
///////////////////////////////////////////////*/
int CInsideIO2::_07_LoopEver()
{void* vmckrt=0; if(VuxMckM("_07_LoopEver",&vmckrt,0,0,"CInsideIO2",966,8,1)) return *(int*)vmckrt;{__VUFNINFO__("_07_LoopEver","int",966); VuxDbgBrkO() 
{   
 VUXRSVB(1,1);    int count = 0; VUXLV("int",count,1);
 VUXRSVB(2,2);    int index = 0; VUXLV("int",index,2);
    /*[学习提示：死循环处理]	循环条件是while(TRUE)，且没有退出判定。	测试时用局部输入(替换选中代码)，将while(TRUE)中TRUE替换为	  一个变量，在表格中用多次赋值先设为若干个TRUE，最后设为FALSE。	*/
    while( VUXRS(3)&&(1))
    {VUXRBR_LOOP2(1,2,21);{
        //没有退出条件的死循环通常用于永续运行的代码，
        //如监听网络的程序。这里只用简单代码代替
        if( VUXRS(4)&&(++index % 3 == 0))
        {{
 VUXRS(5);            count++;
        }}
    }} VUXRS(6);

    /*[学习提示：没有循环变量的死循环处理]	使用插入普通代码，插入break;，不会污染产品代码	*/
    for(;;)
    {VUXRBR_LOOP2(3,6,22);{
 VUXRS(7);        count++;
    }}

 VUXRS(8);    {int __vurtv__= count;VUXFRTY();}
}}}

/* ////////////////////////////////////////////// 
底层输入的skip it及call times变量的使用
///////////////////////////////////////////////*/
void CInsideIO2::_08_call_sub_test(int a)
{VMCKDS vmckds[1]={{1,"int","a",(const void*)&a}}; if(!VuxMckM("_08_call_sub_test",0,vmckds,1,"CInsideIO2",967,4,1)) {__VUFNID__(967); VuxDbgBrkO() 
{
    /*[学习提示：底层输入之二]    底层函数崩溃或超时，可设skip it跳过。    很多时候，要测试在某种输入下是否调用某个函数，这时可以利用底层    输入的call times变量，在表格中设置它的预期调用次数。	*/
 VUXRS(1);    endless_loop_sub(); //底层函数死循环
    
 VUXRS(2);    error_sub(); //底层函数崩溃
    
    if( VUXRS(3)&&(a <  0))
    {{
        //需判断在某些条件下是否调用了report_error()
 VUXRS(4);        report_error();
    }}
    
    //其他代码省略
}VUXFRTNE();}}

/* ////////////////////////////////////////////// 
底层输入，多次调用同一底层函数的处理
///////////////////////////////////////////////*/
int CInsideIO2::_09_mul_call_test()
{void* vmckrt=0; if(VuxMckM("_09_mul_call_test",&vmckrt,0,0,"CInsideIO2",968,13,1)) return *(int*)vmckrt;{__VUFNINFO__("_09_mul_call_test","int",968); VuxDbgBrkO() 
{
    /*[学习提示：底层输入之三]    多次调用同一底层函数（包括循环形成的多次调用），如需每次输出不同值，    可用分号隔开多个值。如值的数量不足，不足部分使用最后一个。	*/
 VUXRSVB(1,1);    DATA* pData1 = 0; VUXLV("DATA*",pData1,1);
 VUXRSVB(2,2);    DATA* pData2 = 0; VUXLV("DATA*",pData2,2);
 VUXRS(3);    get_mem(&pData1);
 VUXRS(4);    get_mem(&pData2);
    
    if( VUXRS(5)&&(pData1 == 0) || VUXRS(6)&&( pData2 == 0))
    {{
 VUXRS(7);        {int __vurtv__= -1;VUXFRTY();}
    }}
        
    if( VUXRS(8)&&(pData1->pBase == 0) || VUXRS(9)&&(  pData2->pBase == 0))
    {{
 VUXRS(10);        {int __vurtv__= -1;VUXFRTY();}
    }}
        
    if( VUXRS(11)&&(pData1->pBase->a == pData2->pBase->a))
    {{
 VUXRS(12);        {int __vurtv__= 1;VUXFRTY();}
    }}

 VUXRS(13);    {int __vurtv__= 0;VUXFRTY();}
}}}



#include "VuxConn/Demo/_5U_InsideIO.cpp.h"

void _demo__5u_insideio_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
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