
//VuxInter/Demo/_5T_InsideIO.cpp/CInsideIO/_03_UpdateUserNameOrPassword().h

//$$VUNIT(BEGIN,TESTFUNCPLUG/CInsideIO::_03_UpdateUserNameOrPassword())
#ifdef _VUDEBUG
void CInsideIO::_03_UpdateUserNameOrPassword_vpls_(){ VuxDbgBrkP()
{
    CString sql;
    CString sUserName, sPassword, sPassword2;

    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    �������д��룬�Ǵӽ����ȡ���ݵ���䣬������Ϊ��ֵ��䡣	ѡ��һ�д��룬�þֲ�����(�滻��ֵ���)���ܣ� ���Խ�ԭ��ֵ���	  ��Ϊ��ͨ��ֵ��䣬�����ڱ�������ñ�����ֵ��	*/
    _ASSIGNR_(CString,sUserName,'a',0/*GetDlgItemText(0x1001,sUserName)*/);
    _ASSIGNR_(CString,sPassword,'a',0/*GetDlgItemText(0x1002,sPassword)*/);
    _ASSIGNR_(CString,sPassword2,'a',0/*GetDlgItemText(0x1003,sPassword2)*/);

    //��������û���������Ĵ���(����sPassword�Ƿ���sPassword2���)����
    //...
    
    //�û�������������һ���޸�
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
        
        //д�����ݿ�
        CDataBase db;
        db.Execute(sql);        
    }
}}
#else
void CInsideIO::_03_UpdateUserNameOrPassword_vpls_(){__VUFNID__(0);VuxDbp(0,0,15);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    CString sql; VUXLV("CString",sql,1);
VUXRLNFVB(2,2,2);    CString sUserName, sPassword, sPassword2; VUXLV("CString",sUserName,2); VUXLVS("CString",sPassword,3); VUXLVS("CString",sPassword2,4);

    /*[ѧϰ��ʾ���ֲ�����Ӧ��]    �������д��룬�Ǵӽ����ȡ���ݵ���䣬������Ϊ��ֵ��䡣	ѡ��һ�д��룬�þֲ�����(�滻��ֵ���)���ܣ� ���Խ�ԭ��ֵ���	  ��Ϊ��ͨ��ֵ��䣬�����ڱ�������ñ�����ֵ��	*/
VUXRLNF(3,3);    _ASSIGNR_(CString,sUserName,'a',0/*GetDlgItemText(0x1001,sUserName)*/);
VUXRLNF(4,4);    _ASSIGNR_(CString,sPassword,'a',0/*GetDlgItemText(0x1002,sPassword)*/);
VUXRLNF(5,5);    _ASSIGNR_(CString,sPassword2,'a',0/*GetDlgItemText(0x1003,sPassword2)*/);

    //��������û���������Ĵ���(����sPassword�Ƿ���sPassword2���)����
    //...
    
    //�û�������������һ���޸�
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
        
        //д�����ݿ�
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
