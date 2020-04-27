
//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。让下一行代码有效可屏蔽本文件的桩代码。
//#define VUXIS_DEMO_INSIDEIO2_H
//$$VUNIT(END,CUSTOMIZE_AREA)

#ifndef VUXIS_DEMO_INSIDEIO2_H


//$$VUNIT(BEGIN,TESTSTUB/giVar#int)
int giVar = 0;
//$$VUNIT(END,TESTSTUB/giVar#int)



//$$VUNIT(BEGIN,TESTSTUB/report_error()#void)
#undef report_error
void report_error()
{if(!VuxMck("report_error",0,0,0,"",943,0,2)) {
    
}}
//$$VUNIT(END,TESTSTUB/report_error()#void)

#endif