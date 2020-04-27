

//
// COPYRIGHT KaileSoft Corporation.
// All rights reserved.
// 版权所有：广州凯乐软件技术有限公司
// 保留所有权利
//

#ifndef __VUXIMPORT_H__
#define __VUXIMPORT_H__

#include "VuxInit.h"

//引入函数
/////////////////////////////////////////////////////////////////////

#ifdef __cplusplus
extern "C" {
#endif

extern int vux_var[16];

void   VuxInit(const char* dir);
void   VuxFinish(void);
void   VuxRunFuncTestBegin(void);
void   VuxRunFuncTestEnd(void);
void   VuxLeaveLoop(int f, int l);
int   VuxRunTopFunction(int fi);
void   VuxBeforeTest(void);
void   VuxTestBegin();
void   VuxTestEnd(int stop);
void   VuxCaseBegin(void);
void   VuxCaseEnd(void);
void   VuxRateTestBegin(int times);
void   VuxRateTestEnd(void);
void   VuxBVTestBegin();
void   VuxBVTestEnd();
int   VuxGetDebugTimes(void);
int   VuxIsDebugPlugCode(void);
int   VuxIsIgnoreAutoDiscroctException(void);
int   VuxNextFile(int* pIndex);
int   VuxNextFunc(int* pIndex);
void   VuxTestAssert(int exp, const char* str, const char* file, int line);
void   VuxSetFunctionInfo(const char* path, const char* key, const char* cls, const char* func, void* fpi, void* fpn, void* fpc);
void   VuxResetRunTimes(void);
void   VuxIncRunTimes(void);
int   VuxIsRepeatRun(void);
int   VuxRunCondition(int i, int v);
int   VuxRunConditionS(int i, int v, int s);
int   VuxConditionValue(int i, int v);
int   VuxRunBlock(int i);
int   VuxRunBlockFor(int i, int s);
int   VuxRunBranch(int i);
int   VuxRunLine(int i, int f);
int   VuxRunLineB(int i, int f);
VUMSAFE VuxRunLineBSafe(int i, int f);
int   VuxRunSencense(int f, int s, int flag);
VUMSAFE VuxRunSencenseSafe(int f, int s, int flag);
void   VuxFuncReturn(int f);
void   VuxFuncReturnValue(int f, const char* fn, const char* rt, void* rv);
void   VuxScopeBegin(int f, int s, int l);
void   VuxScopeEnd(int f, int s, int l, int sc);
int   VuxIsRunBVTest(void);
int   VuxIsRunRTest(void);
int   VuxRateTesting();
void   VuxDumpMsg(const char* msg, ...);
int   VuxNextTestCase(void);
int   VuxStrLen(char* pStr);
int   VuxWStrLen(short* pStr);
void*  VuxStrCpy(void* dst, const void* src, int size);
void*  VuxWStrCpy(unsigned short* pdst, unsigned short* psrc, int size);
int   VuxStrEqual(const void* dst, const void* src);
int   VuxWStrEqual(const void* dst, const void* src);
double VuxGetFloatLeft(void);
double VuxGetFloatRight(void);
void   VuxBeforeCase(void);
void   VuxAfterCase(void);
void   VuxBeginFunctionTest(void);
void   VuxEndFunctionTest(void);
void   VuxReadGrid(const char* name, int ac);
void   VuxOutputAuto(void);
void   VuxOutputReturn(const char* retType, const void* ret);
void   VuxOutputVar(const char* type, const char* name, const void* var);
void   VuxResetTemplType(void* pcbd, const char* text);
void   VuxCallbackGridInput(const char* type, const char* name, void* pDes, void* pcbd);
void   VuxCallbackGridOutput(const char* type, const char* name, void* pDes, void* pcbd, int order);
void*  VtdCbInit(const char* type, const char* name, void* pDes, char scope, void* pcbd);
void*  VuxLocalInput(const char* type, const char* name, void* pDes, char scope, int init);
void   VuxLocalOutput(const char* type, const char* name, const void* pDes, char scope);
void   VuxLocalOutputR(const char* type, const char* name, char scope,...);
int   VuxAutoLocalOutput(const char* type, const char* name, const void* pDes, char scope, int fi, void* begin, void* end, int size, int vi);
void*  VtdInitGrid(const char* type, const char* name, const char* arr, char scope, void* pDes, int arg, void* fpi, void* fpn, void* fpc);
void*  VtdInitFore(const char* type, const char* name, const char* arr, char scope, void* pDes, void* fpi, void* fpn, void* fpc);
void*  VtdInit(const char* type, char scope, void* fpi, void* fpn, void* fpc, const char* path);
void*  VtdConsParamInit(const char* type, const char* name, void* pGridValue, char scope, void* fpi, void* fpn, void* fpc);
int   VuxMock(const char* fn, void** prt, void* data, int count);
int   VuMck(const char* fn, void** prt, void* data, int count, const char* type);
int   VuMckO(const char* fn, void** prt, void* data, int count, const char* type, void* ppThis);
int   VuxMck(const char* fn, void** prt, void* data, int count, const char* type, int fi, int sc, int flag);
int   VuxMckO(const char* fn, void** prt, void* data, int count, const char* type, int fi, int sc, int flag, void* ppThis);
int   VuxDbp(void* data, int count, int sc);
void*  VuxNewObjectFailed(int size, const char* name);
void   VuxStubContructorInit(void);
void   VuxSetFp(void* fCb, void* fOn);
void   VuxSaveUserFuncPtr(const char* name, void* pf);
void   VuxSaveUserVarPtr(const char* name, void* pv);
int   VuxIsDebugPlug(void);
int   VuxIsBreakOnOrig(int f);
int   VuxIsBreakOnPlug(void);
int   VuxIsDebugingCase(int c);
int   VuxIsSkipCase(int c);
int   VuxIsBreakOnMain(void);
void   VuxReInitData(void);
void   VuxSetDebugBreak(void);
void*  VuxReturnPtr(const char* t);
int   VuxIsParamPtrSetEmpty(void);
int   VuxLoopOver(int b, int id);

const char* VuxDataPathNameA(const char* path);
const unsigned short* VuxDataPathNameW(const unsigned short* path);
#ifndef _UNICODE
#define VuxDataPathName VuxDataPathNameA
#else
#define VuxDataPathName VuxDataPathNameW
#endif

#define VuMckM(fn, prt, data, count, type) VuMckO(fn, prt, data, count, type, (void*)this)
#define VuxMckM(fn, prt, data, count, type, fi, sc, flag) VuxMckO(fn, prt, data, count, type, fi, sc, flag, (void*)this)
#define VuxSetUserFuncPtr(name) VuxSaveUserFuncPtr(#name, (void*)name)
#define VuxSetUserVarPtr(name)  VuxSaveUserVarPtr(#name, (void*)(&name))
#define VuxSetUserVarPtrA(name) VuxSaveUserVarPtr(#name, (void*)name)
#define VUX_FUN_RET(t)         (t)VuxReturnPtr(#t);
#define VUX_FUN_RET2(t)         VuxReturnPtr(t);

#ifdef __cplusplus
}
#endif

#endif
