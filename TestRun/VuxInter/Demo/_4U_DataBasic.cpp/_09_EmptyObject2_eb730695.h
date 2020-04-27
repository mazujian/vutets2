
//VuxInter/Demo/_4U_DataBasic.cpp/_09_EmptyObject2_eb730695.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_09_EmptyObject2(BASE*,CList<BASE*,BASE*>*))
#ifdef _VUDEBUG
static int _09_EmptyObject2_vpls_(BASE* pData,CList<BASE*,BASE*>* pList){ VuxDbgBrkP()
{
    if(pData != 0)
    {
        pData->a = 123;
        pData->f = 123.456;
    }

    if(pList == 0)
    {
        return -1;
    }

    return pList->GetCount();
}}
#else
static int _09_EmptyObject2_vpls_(BASE* pData,CList<BASE*,BASE*>* pList){__VUFNINFO__("_09_EmptyObject2","int",0);VuxDbp(0,0,6);
{
    if((VUXRCS0(1,1)&&(pData != 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(1);VUXRLNF(1,2);        pData->a = 123;
VUXRLNF(2,3);        pData->f = 123.456;
    }}
VUXRBR_ELSE(3);

    if((VUXRCS0(2,4)&&(pList == 0)&&VUXRC1(2)))
    {VUXRBR(4);{
VUXRB(2);VUXRLNF(3,5);        {int __vurtv__= -1;VUXFRTY();}
    }}
VUXRBR_ELSE(5);

VUXRB(3);VUXRLNF(4,6);    {int __vurtv__= pList->GetCount();VUXFRTY();}
}}
#endif

static int _09_EmptyObject2_vpls(BASE* pData,CList<BASE*,BASE*>* pList)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _09_EmptyObject2(pData,pList);}
	else if(VuxIsRepeatRun()) {return _09_EmptyObject2_vpls_(pData,pList);}

#ifdef _VUDEBUG
    {int vuxRet =  VuxIsDebugPlug() ? _09_EmptyObject2_vpls_(pData,pList) : _09_EmptyObject2(pData,pList);
#else
    {int vuxRet = _09_EmptyObject2_vpls_(pData,pList);
#endif
    TEST_ASSERT_RETURN("int", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_09_EmptyObject2(BASE*,CList<BASE*,BASE*>*))
