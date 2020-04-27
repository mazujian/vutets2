

//$$VUNIT(BEGIN,CUSTOMIZE_AREA)
//!4 这里添加的代码，刷新时会予保留。让下一行代码有效可屏蔽本文件的桩代码。
//#define VUXIS_DEMO_AUTOCASE_C
//$$VUNIT(END,CUSTOMIZE_AREA)


#ifndef VUXIS_DEMO_AUTOCASE_C



//$$VUNIT(BEGIN,TESTSTUB/ReadJoystick()#int)
#undef ReadJoystick
int ReadJoystick()
{void* vmckrt=0; if(VuxMck("ReadJoystick",&vmckrt,0,0,"",1203,0,2)) return *(int*)vmckrt;{
    return 0;
}}
//$$VUNIT(END,TESTSTUB/ReadJoystick()#int)


//$$VUNIT(BEGIN,TESTSTUB/ss()#int)
#undef ss
int ss()
{void* vmckrt=0; if(VuxMck("ss",&vmckrt,0,0,"",1211,0,2)) return *(int*)vmckrt;{
    return 0;
}}
//$$VUNIT(END,TESTSTUB/ss()#int)

#endif