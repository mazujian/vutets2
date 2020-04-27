
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_03_UpdateUserNameOrPassword().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_03_UpdateUserNameOrPassword())
#ifdef _VUDEBUG
void CInsideIO::_03_UpdateUserNameOrPassword_vpls_(){ VuxDbgBrkP()
{
    CString sql;
    CString sUserName, sPassword, sPassword2;

    /*[学习提示：局部输入应用]    以下三行代码，是从界面读取数据的语句，可以视为赋值语句。	选中一行代码，用局部输入(替换赋值语句)功能， 可以将原赋值语句	  改为普通赋值语句，并可在表格中设置变量的值。	*/
    _ASSIGNR_(CString,sUserName,'a',0/*GetDlgItemText(0x1001,sUserName)*/);
    _ASSIGNR_(CString,sPassword,'a',0/*GetDlgItemText(0x1002,sPassword)*/);
    _ASSIGNR_(CString,sPassword2,'a',0/*GetDlgItemText(0x1003,sPassword2)*/);

    //其他检查用户名和密码的代码(包括sPassword是否与sPassword2相等)忽略
    //...
    
    //用户名和密码至少一项修改
    if(sUserName != msUserName || sPassword != msPassword)
    {
        sql = "Update Users Set";
        if(sUserName != msUserName)
        {
            sql += " UserName='" + sUserName + "'";
        }
        if(sPassword != msPassword)
        {
            sql += ", Password='" + sPassword + "'";
        }
        sql += " Where UserName='" + msUserName + "'";
        
        //写入数据库
        CDataBase db;
        db.Execute(sql);        
    }
}}
#else
void CInsideIO::_03_UpdateUserNameOrPassword_vpls_(){__VUFNID__(0);VuxDbp(0,0,15);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    CString sql; VUXLV("CString",sql,1);
VUXRLNFVB(2,2,2);    CString sUserName, sPassword, sPassword2; VUXLV("CString",sUserName,2); VUXLVS("CString",sPassword,3); VUXLVS("CString",sPassword2,4);

    /*[学习提示：局部输入应用]    以下三行代码，是从界面读取数据的语句，可以视为赋值语句。	选中一行代码，用局部输入(替换赋值语句)功能， 可以将原赋值语句	  改为普通赋值语句，并可在表格中设置变量的值。	*/
VUXRLNF(3,3);    _ASSIGNR_(CString,sUserName,'a',0/*GetDlgItemText(0x1001,sUserName)*/);
VUXRLNF(4,4);    _ASSIGNR_(CString,sPassword,'a',0/*GetDlgItemText(0x1002,sPassword)*/);
VUXRLNF(5,5);    _ASSIGNR_(CString,sPassword2,'a',0/*GetDlgItemText(0x1003,sPassword2)*/);

    //其他检查用户名和密码的代码(包括sPassword是否与sPassword2相等)忽略
    //...
    
    //用户名和密码至少一项修改
    if( VUXAC1(2,sPassword != msPassword) && (VUXRCS0(1,6)&&(sUserName != msUserName)&&VUXRC1(1)) ||(VUXRCS0(2,7)&&( sPassword != msPassword)&&VUXRC1(2)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(6,8);        sql = "Update Users Set";
        if((VUXRCS0(3,9)&&(sUserName != msUserName)&&VUXRC1(3)))
        {VUXRBR(3);{
VUXRB(3);VUXRLNF(7,10);            sql += " UserName='" + sUserName + "'";
        }}
VUXRBR_ELSE(4);
        if((VUXRCS0(4,11)&&(sPassword != msPassword)&&VUXRC1(4)))
        {VUXRBR(5);{
VUXRB(4);VUXRLNF(8,12);            sql += ", Password='" + sPassword + "'";
        }}
VUXRBR_ELSE(6);
VUXRB(5);VUXRLNF(9,13);        sql += " Where UserName='" + msUserName + "'";
        
        //写入数据库
VUXRLNFVB(10,14,5);        CDataBase db; VUXLV("CDataBase",db,5);
VUXRLNF(11,15);        db.Execute(sql);        
    }}
VUXRBR_ELSE(7);
}VUXFRTNE();}
#endif

void CInsideIO::_03_UpdateUserNameOrPassword_vpls()
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {CInsideIO::_03_UpdateUserNameOrPassword(); return;}
	else if(VuxIsRepeatRun()) {_03_UpdateUserNameOrPassword_vpls_(); return;}

#ifdef _VUDEBUG
    { VuxIsDebugPlug() ? _03_UpdateUserNameOrPassword_vpls_() : _03_UpdateUserNameOrPassword();
#else
    {_03_UpdateUserNameOrPassword_vpls_();
#endif
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/CInsideIO::_03_UpdateUserNameOrPassword())
