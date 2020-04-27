
//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。让下一行代码有效可屏蔽本文件的桩代码。
//#define VUXIS_DEMO_SENDMAIL_H
//$$VUNIT(END,CUSTOMIZE_AREA)

#ifndef VUXIS_DEMO_SENDMAIL_H


//$$VUNIT(BEGIN,TESTSTUB/g_sucess_count#int)
int g_sucess_count = 0;
//$$VUNIT(END,TESTSTUB/g_sucess_count#int)


//$$VUNIT(BEGIN,TESTSTUB/g_failed_count#int)
int g_failed_count = 0;
//$$VUNIT(END,TESTSTUB/g_failed_count#int)


//$$VUNIT(BEGIN,TESTSTUB/mail_path#char*)
char* mail_path = 0;
//$$VUNIT(END,TESTSTUB/mail_path#char*)


//$$VUNIT(BEGIN,TESTSTUB/mail_subject#char*)
char* mail_subject = 0;
//$$VUNIT(END,TESTSTUB/mail_subject#char*)


//$$VUNIT(BEGIN,TESTSTUB/mail_content#char*)
char* mail_content = 0;
//$$VUNIT(END,TESTSTUB/mail_content#char*)



//$$VUNIT(BEGIN,TESTSTUB/send_one(Mail*,const char*,const char*)#int)
#undef send_one
BOOL send_one(Mail* p_mail,const char* p_subject,const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"Mail*","p_mail",(const void*)&p_mail},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("send_one",&vmckrt,vmckds,3,"",1044,0,2)) return *(BOOL*)vmckrt;{
    return 0;
}}
//$$VUNIT(END,TESTSTUB/send_one(Mail*,const char*,const char*)#int)


//$$VUNIT(BEGIN,TESTSTUB/send_one2(ListItem*,const char*,const char*)#int)
#undef send_one2
BOOL send_one2(ListItem* p_mail,const char* p_subject,const char* p_content)
{void* vmckrt=0; VMCKDS vmckds[3]={{1,"ListItem*","p_mail",(const void*)&p_mail},{2,"char*","p_subject",(const void*)&p_subject},{3,"char*","p_content",(const void*)&p_content}}; if(VuxMck("send_one2",&vmckrt,vmckds,3,"",1045,0,2)) return *(BOOL*)vmckrt;{
    return 0;
}}
//$$VUNIT(END,TESTSTUB/send_one2(ListItem*,const char*,const char*)#int)

#endif