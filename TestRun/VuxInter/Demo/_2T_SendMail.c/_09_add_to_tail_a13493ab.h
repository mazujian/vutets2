
//VuxInter/Demo/_2T_SendMail.c/_09_add_to_tail_a13493ab.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_09_add_to_tail(Mail*,Mail*))
#ifdef _VUDEBUG
static void _09_add_to_tail_vpls_(Mail* p_mail,Mail* p_new){ VuxDbgBrkP()
{
    Mail* p_tail;
    if(p_mail == 0 || p_new == 0)
    {
        return;
    }

    p_tail = p_mail;
    while(p_tail->p_next != 0)
    {
        p_tail = p_tail->p_next;
    }

    p_tail->p_next = p_new;
}}
#else
static void _09_add_to_tail_vpls_(Mail* p_mail,Mail* p_new){VUX_VARIABLE(2) __VUFNID__(0);VuxDbp(0,0,8);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    Mail* p_tail; VUXLV("Mail*",p_tail,1);
    if( VUXAC1(2,p_new == 0) && (VUXRCS0(1,2)&&(p_mail == 0)&&VUXRC1(1)) ||(VUXRCS0(2,3)&&( p_new == 0)&&VUXRC1(2)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(2,4);        VUXFRTN();
    }}
VUXRBR_ELSE(3);

VUXRB(3);VUXRLNF(3,5);    p_tail = p_mail;
    while((VUXRCS0(3,6)&&(p_tail->p_next != 0)&&VUXRC1(3)))
    {VUXRBR_LOOP(2,4,110);{
VUXRB(4);VUXRLNF(4,7);        p_tail = p_tail->p_next;
    }}VUXRBR_OUT(2, 5);


VUXRB(5);VUXRLNF(5,8);    p_tail->p_next = p_new;
}VUXFRTNE();}
#endif

static void _09_add_to_tail_vpls(Mail* p_mail,Mail* p_new)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {_09_add_to_tail(p_mail,p_new); return;}
	else if(VuxIsRepeatRun()) {_09_add_to_tail_vpls_(p_mail,p_new); return;}

#ifdef _VUDEBUG
    { VuxIsDebugPlug() ? _09_add_to_tail_vpls_(p_mail,p_new) : _09_add_to_tail(p_mail,p_new);
#else
    {_09_add_to_tail_vpls_(p_mail,p_new);
#endif
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/_09_add_to_tail(Mail*,Mail*))
