
//VuxInter/Demo/_2T_SendMail.c/_10_free_mails_67b6e87d.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_10_free_mails(Mail*))
#ifdef _VUDEBUG
static void _10_free_mails_vpls_(Mail* p_mail){ VuxDbgBrkP()
{
    Mail* p_temp = p_mail;
    while(p_temp != 0)
    {
        p_mail = p_mail->p_next;
        free(p_temp);
        p_temp = p_mail;
    }
}}
#else
static void _10_free_mails_vpls_(Mail* p_mail){VUX_VARIABLE(1) __VUFNID__(0);VuxDbp(0,0,5);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    Mail* p_temp = p_mail; VUXLV("Mail*",p_temp,1);
    while((VUXRCS0(1,2)&&(p_temp != 0)&&VUXRC1(1)))
    {VUXRBR_LOOP(1,2,108);{
VUXRB(2);VUXRLNF(2,3);        p_mail = p_mail->p_next;
VUXRLNF(3,4);        free(p_temp);
VUXRLNF(4,5);        p_temp = p_mail;
    }}VUXRBR_OUT(1, 3);

}VUXFRTNE();}
#endif

static void _10_free_mails_vpls(Mail* p_mail)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {_10_free_mails(p_mail); return;}
	else if(VuxIsRepeatRun()) {_10_free_mails_vpls_(p_mail); return;}

#ifdef _VUDEBUG
    { VuxIsDebugPlug() ? _10_free_mails_vpls_(p_mail) : _10_free_mails(p_mail);
#else
    {_10_free_mails_vpls_(p_mail);
#endif
    VuxResetRunTimes();}
}
//$$VUNIT(END,TESTFUNCPLUG/_10_free_mails(Mail*))
