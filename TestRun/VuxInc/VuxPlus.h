
#ifndef __VUXPLUS_H__
#define __VUXPLUS_H__

#include "VuxSetting.h"
#include "VuxCompiler.h"

//��׮����
/////////////////////////////////////////////////////////////////////

#define VUXRC0(i)       VuxRunCondition(i,0)
#define VUXRCS0(i,s)    VuxRunConditionS(i,0,s)
#define VUXRC1(i)       VuxRunCondition(i,1)
#define VUXRLN(i)       VuxRunLine(i,0)
#define VUXRLNF(i,f)    VuxRunLine(i,f)
#define VUXRB(i)        VuxRunBlock(i)
#define VUXRBF(i,s)     VuxRunBlockFor(i,s)
#define VUXRBV(i)       int vvb##i = VuxRunBlock(i)
#define VUXRLNFV(i,f)   int vvl##i = VuxRunLineB(i,f)
#define VUXRLNFVB(i,f,v) VUMSAFE vvs##v = VuxRunLineBSafe(i,f)
#define VUXRLNFB(i,f)   VuxRunLineB(i,f)

#define __VUFNID__(i)   int __vufnid__ = i
#define VUXRS(s)        VuxRunSencense(__vufnid__,s,0)
#define VUXRP(s)        VuxRunSencense(__vufnid__,s,-1)
#define VUXRSV(s)       int vvv##s = VuxRunSencense(__vufnid__,s,0)
#define VUXRSVB(s,v)    VUMSAFE vvs##v = VuxRunSencenseSafe(__vufnid__,s,0)
#define VUXLVL(l)       //VuxLeaveLoop(__vufnid__,l)

#define VUXSBN(s,l)     //VuxScopeBegin(__vufnid__,s,l);
#define VUXSEN(s,l,sc)  //VuxScopeEnd(__vufnid__,s,l,sc);

#define VUXLV(t,n,v)    int vlv##v = VuxAutoLocalOutput(t, #n,(void*)&n, 'S', __vufnid__,&vlv##v,&vvs##v,sizeof(n),v) 
#define VUXLVA(t,n,v)   int vlv##v = VuxAutoLocalOutput(t, #n, n, 'S', __vufnid__,&vlv##v,&vvs##v,sizeof(n),v) 
#define VUXLVS(t,n,v)   int vlv##v = VuxAutoLocalOutput(t, #n,(void*)&n, 'S', __vufnid__,&vlv##v,0,sizeof(n),v) 
#define VUXLVSA(t,n,v)  int vlv##v = VuxAutoLocalOutput(t, #n, n, 'S', __vufnid__,&vlv##v,0,sizeof(n),v) 

#define __VUFNINFO__(n,t,i) const char* __vufnn__=n;const char* __vurtt__=t;int __vufnid__=i
#define VUXFRTN()       VuxFuncReturn(__vufnid__);return
#define VUXFRTNE()      VuxFuncReturn(__vufnid__)
#define VUXFRTY()       VuxFuncReturn(__vufnid__); return __vurtv__

#ifdef VUX_COMPILE_VC
#define VUX_BREAK() {__asm { __asm _EMIT 0xCC}}
#else
#define VUX_BREAK() {VuxSetDebugBreak();}
#endif

#ifdef _VUDEBUG
#define VuxDbgBrkP() if(VuxIsBreakOnPlug()) VUX_BREAK()
#define VuxDbgBrkO() if(VuxIsBreakOnOrig(__vufnid__)) VUX_BREAK()
#define VuxDbgBrkM() if(VuxIsBreakOnMain()) VUX_BREAK()
#else
#define VuxDbgBrkP()
#define VuxDbgBrkO()
#define VuxDbgBrkM()
#endif


#define VUX_VARNAME(i)        vux_var_##i
#define VUX_VARIABLE(i)       int VUX_VARNAME(i) = 0;
#define VUXRBR(i)             VuxRunBranch(i)
#define VUXRBRS(i)            VuxRunBranch(i)
#define VUXRBR_ELSE(i)        else{VuxRunBranch(i);}
#define VUXRBR_IN(var, i)     if(VUX_VARNAME(var) == 0){VUX_VARNAME(var) = 1; VuxRunBranch(i);}
#define VUXRBR_LOOP(var,i,lid)  if(VUX_VARNAME(var) == 0){VUX_VARNAME(var) = 1; VuxRunBranch(i);} if(VuxLoopOver(var, lid)) {break;}
#define VUXRBR_LOOP2(var,i,lid) if(VuxLoopOver(var, lid)) {break;}
#define VUXRBR_OUT(var, i)    if(VUX_VARNAME(var) == 0){VuxRunBranch(i);}
#define VUXRBR_DEFAULT(i)     {default: VuxRunBranch(i); break;}
#define VUXRBR_CATCH(var, i)          VUX_VARNAME(var) = 1; VuxRunBranch(i);
#define VUXRBR_CATCHE(var, i, j)      VUX_VARNAME(var) = 1; VuxRunBranch(j); VuxRunBlock(i);
#define VUXRBR_CATCH_DEFAULT(var, i)  if(VUX_VARNAME(var) == 0) {VuxRunBranch(i);}
#define VUXRSLCT(a,b,c,d)     VUXRBRS(a),VUXRB(b),VUXRLNF(c,d)

#define _VUXCONDITIONVALUE(X, B)   VuxConditionValue(X, ((B)&&1))

#define                            VUXAC1(X1,B1)\
        _VUXCONDITIONVALUE(X1,B1)
#define                            VUXAC2(X1,B1,X2,B2)\
                                   VUXAC1(X1,B1),\
        _VUXCONDITIONVALUE(X2,B2)
#define                            VUXAC3(X1,B1,X2,B2,X3,B3)\
                                   VUXAC2(X1,B1,X2,B2),\
        _VUXCONDITIONVALUE(X3,B3)
#define                            VUXAC4(X1,B1,X2,B2,X3,B3,X4,B4)\
                                   VUXAC3(X1,B1,X2,B2,X3,B3),\
        _VUXCONDITIONVALUE(X4,B4)
#define                            VUXAC5(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5)\
                                   VUXAC4(X1,B1,X2,B2,X3,B3,X4,B4),\
        _VUXCONDITIONVALUE(X5,B5)
#define                            VUXAC6(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6)\
                                   VUXAC5(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5),\
        _VUXCONDITIONVALUE(X6,B6)
#define                            VUXAC7(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7)\
                                   VUXAC6(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6),\
        _VUXCONDITIONVALUE(X7,B7)
#define                            VUXAC8(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8)\
                                   VUXAC7(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7),\
        _VUXCONDITIONVALUE(X8,B8)
#define                            VUXAC9(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9)\
                                   VUXAC8(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8),\
        _VUXCONDITIONVALUE(X9,B9)
#define                            VUXAC10(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10)\
                                   VUXAC9(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9),\
        _VUXCONDITIONVALUE(X10,B10)
#define                            VUXAC11(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11)\
                                   VUXAC10(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10),\
        _VUXCONDITIONVALUE(X11,B11)
#define                            VUXAC12(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12)\
                                   VUXAC11(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11),\
        _VUXCONDITIONVALUE(X12,B12)
#define                            VUXAC13(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13)\
                                   VUXAC12(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12),\
        _VUXCONDITIONVALUE(X13,B13)
#define                            VUXAC14(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14)\
                                   VUXAC13(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13),\
        _VUXCONDITIONVALUE(X14,B14)
#define                            VUXAC15(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15)\
                                   VUXAC14(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14),\
        _VUXCONDITIONVALUE(X15,B15)
#define                            VUXAC16(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16)\
                                   VUXAC15(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15),\
        _VUXCONDITIONVALUE(X16,B16)
#define                            VUXAC17(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17)\
                                   VUXAC16(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16),\
        _VUXCONDITIONVALUE(X17,B17)
#define                            VUXAC18(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18)\
                                   VUXAC17(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17),\
        _VUXCONDITIONVALUE(X18,B18)
#define                            VUXAC19(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19)\
                                   VUXAC18(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18),\
        _VUXCONDITIONVALUE(X19,B19)
#define                            VUXAC20(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20)\
                                   VUXAC19(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19),\
        _VUXCONDITIONVALUE(X20,B20)
#define                            VUXAC21(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21)\
                                   VUXAC20(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20),\
        _VUXCONDITIONVALUE(X21,B21)
#define                            VUXAC22(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22)\
                                   VUXAC21(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21),\
        _VUXCONDITIONVALUE(X22,B22)
#define                            VUXAC23(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23)\
                                   VUXAC22(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22),\
        _VUXCONDITIONVALUE(X23,B23)
#define                            VUXAC24(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24)\
                                   VUXAC23(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23),\
        _VUXCONDITIONVALUE(X24,B24)
#define                            VUXAC25(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25)\
                                   VUXAC24(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24),\
        _VUXCONDITIONVALUE(X25,B25)
#define                            VUXAC26(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26)\
                                   VUXAC25(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25),\
        _VUXCONDITIONVALUE(X26,B26)
#define                            VUXAC27(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27)\
                                   VUXAC26(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26),\
        _VUXCONDITIONVALUE(X27,B27)
#define                            VUXAC28(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28)\
                                   VUXAC27(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27),\
        _VUXCONDITIONVALUE(X28,B28)
#define                            VUXAC29(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29)\
                                   VUXAC28(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28),\
        _VUXCONDITIONVALUE(X29,B29)
#define                            VUXAC30(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30)\
                                   VUXAC29(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29),\
        _VUXCONDITIONVALUE(X30,B30)

#define                            VUXAC31(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31) 1
#define                            VUXAC32(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32) 1
#define                            VUXAC33(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32,X33,B33) 1
#define                            VUXAC34(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32,X33,B33,X34,B34) 1
#define                            VUXAC35(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32,X33,B33,X34,B34,X35,B35) 1
#define                            VUXAC36(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32,X33,B33,X34,B34,X35,B35,X36,B36) 1
#define                            VUXAC37(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32,X33,B33,X34,B34,X35,B35,X36,B36,X37,B37) 1
#define                            VUXAC38(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32,X33,B33,X34,B34,X35,B35,X36,B36,X37,B37,X38,B38) 1
#define                            VUXAC39(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32,X33,B33,X34,B34,X35,B35,X36,B36,X37,B37,X38,B38,X39,B39) 1
#define                            VUXAC40(X1,B1,X2,B2,X3,B3,X4,B4,X5,B5,X6,B6,X7,B7,X8,B8,X9,B9,X10,B10,X11,B11,X12,B12,X13,B13,X14,B14,X15,B15,X16,B16,X17,B17,X18,B18,X19,B19,X20,B20,X21,B21,X22,B22,X23,B23,X24,B24,X25,B25,X26,B26,X27,B27,X28,B28,X29,B29,X30,B30,X31,B31,X32,B32,X33,B33,X34,B34,X35,B35,X36,B36,X37,B37,X38,B38,X39,B39,X40,B40) 1

#endif