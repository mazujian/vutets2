
//VuxInter/Demo/_4T_DataBasic.cpp/_15_CallbackDefine_63619ad7.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_15_CallbackDefine(school_t*))
#ifdef _VUDEBUG
static int _15_CallbackDefine_vpls_(school_t* pSchool){ VuxDbgBrkP()
{
    /*[学习提示：自定义回调赋值]    在表格界面，选中行，右键菜单选择 新建回调赋值	详细说明，请参考帮助：测试数据之二(回调赋值)	*/
    int i, j, k;
    for(i=0; i< (6*10); i++)
    {
        class_t* pClass = pSchool->classes[i];
        if(pClass != 0)
        {
            for(j =0; j<42; j++)
            {
                student_t* pStudent = pClass->students[j];
                //小于30分，会唔家长
                if(pStudent->Chinese < 30)
                {
                    well_student_parent();
                }
                //不及格，打电话给家长
                else if(pStudent->Chinese < 60)
                {
                    call_student_parent();
                }
            }
        }
    }

    return 0;
}}
#else
static int _15_CallbackDefine_vpls_(school_t* pSchool){VUX_VARIABLE(1) VUX_VARIABLE(3)  __VUFNINFO__("_15_CallbackDefine","int",0);VuxDbp(0,0,15);
{
    /*[学习提示：自定义回调赋值]    在表格界面，选中行，右键菜单选择 新建回调赋值	详细说明，请参考帮助：测试数据之二(回调赋值)	*/
VUXRBV(1);VUXRLNFVB(1,1,1);    int i, j, k; VUXLV("int",i,1); VUXLVS("int",j,2); VUXLVS("int",k,3);VUXRBF(2,2);
    for(i=0;(VUXRCS0(1,4)&&( i< (6*10))&&VUXRC1(1));VUXRBF(3,3), i++)
    {VUXRBR_LOOP(1,2,108);{
VUXRBV(4);VUXRLNFVB(4,5,4);        class_t* pClass = pSchool->classes[i]; VUXLV("class_t*",pClass,4);
        if((VUXRCS0(2,6)&&(pClass != 0)&&VUXRC1(2)))
        {VUXRBR(4);{VUXRBF(5,7);
            for(j =0;(VUXRCS0(3,9)&&( j<42)&&VUXRC1(3));VUXRBF(6,8), j++)
            {VUXRBR_LOOP(3,5,114);{
VUXRBV(7);VUXRLNFVB(7,10,5);                student_t* pStudent = pClass->students[j]; VUXLV("student_t*",pStudent,5);
                //小于30分，会唔家长
                if((VUXRCS0(4,11)&&(pStudent->Chinese < 30)&&VUXRC1(4)))
                {VUXRBR(7);{
VUXRB(8);VUXRLNF(8,12);                    well_student_parent();
                }}
                //不及格，打电话给家长
                else if((VUXRCS0(5,13)&&(pStudent->Chinese < 60)&&VUXRC1(5)))
                {VUXRBR(8);{
VUXRB(9);VUXRLNF(9,14);                    call_student_parent();
                }}
VUXRBR_ELSE(9);
            }}VUXRBR_OUT(3, 6);

        }}
VUXRBR_ELSE(10);
    }}VUXRBR_OUT(1, 3);


VUXRB(10);VUXRLNF(10,15);    {int __vurtv__= 0;VUXFRTY();}
}}
#endif

static int _15_CallbackDefine_vpls(school_t* pSchool)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _15_CallbackDefine(pSchool);}
	else if(VuxIsRepeatRun()) {return _15_CallbackDefine_vpls_(pSchool);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _15_CallbackDefine_vpls_(pSchool) : _15_CallbackDefine(pSchool);
#else
    {int vuxRet = _15_CallbackDefine_vpls_(pSchool);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_15_CallbackDefine(school_t*))
