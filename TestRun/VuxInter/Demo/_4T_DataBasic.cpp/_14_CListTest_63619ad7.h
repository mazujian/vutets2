
//$$VUNIT(BEGIN,TESTFUNCPLUG/_14_CListTest(school_t*))
static int _14_CListTest_vpls_(school_t* pSchool){__VUFNINFO__("_14_CListTest","int",0);VMCKDS vmckds[1]={{1,"school_t*","pSchool",&pSchool}}; VuxDbp(vmckds,1,0);
{
}}

static int _14_CListTest_vpls(school_t* pSchool)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _14_CListTest(pSchool);}
	else if(VuxIsRepeatRun()) {return _14_CListTest_vpls_(pSchool);}

    {int vuxRet = _14_CListTest_vpls_(pSchool);
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_14_CListTest(school_t*))
