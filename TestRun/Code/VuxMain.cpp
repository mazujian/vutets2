

#include "VuxInc/VUnit.h"
#include "VuxAddi/VuxRunTest.h"

//#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

#undef main

#pragma comment(linker, "/subsystem:windows /entry:mainCRTStartup")

int main(int argc, char *argv[])
{
    VuxInit(VUX_INIT_PATH);
    VuxTestBegin();
    VuxRunTest();
    VuxTestEnd(0);
    VuxFinish();
    return 0;
}

#define main(arg1, arg2) VUX_USER_MAIN(arg1, arg2)

