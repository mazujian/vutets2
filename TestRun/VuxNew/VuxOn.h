#ifndef _VUXSETOFFPTR_DEFINED_
#define _VUXSETOFFPTR_DEFINED_

static void VUCALLBACK VuxCallBack(int index, void* pcbd);
static void* VUCALLBACK VuxObjectNew(int index, void* pValue)
{
#ifdef __cplusplus
switch(index)
{
#ifdef _VUXON_1_
case 1: { VUXTRY{ return new CMapStringToPtr(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CMapStringToPtr), "CMapStringToPtr"); } }
#endif
#ifdef _VUXON_2_
case 2: { VUXTRY{ return new CMyException(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CMyException), "CMyException"); } }
#endif
#ifdef _VUXON_3_
case 3: { VUXTRY{ return new CList<CString,CString>(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CList<CString,CString>), "CList<CString,CString>"); } }
#endif
#ifdef _VUXON_4_
case 4: { VUXTRY{ return new tagUserInfo(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(tagUserInfo), "tagUserInfo"); } }
#endif
#ifdef _VUXON_5_
case 5: { VUXTRY{ return new CList<tagJobInfo*,tagJobInfo*>(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CList<tagJobInfo*,tagJobInfo*>), "CList<tagJobInfo*,tagJobInfo*>"); } }
#endif
#ifdef _VUXON_6_
case 6: { VUXTRY{ return new CList<tagBASE*,tagBASE*>(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CList<tagBASE*,tagBASE*>), "CList<tagBASE*,tagBASE*>"); } }
#endif
#ifdef _VUXON_7_
case 7: { VUXTRY{ return new CList<int,int>(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CList<int,int>), "CList<int,int>"); } }
#endif
#ifdef _VUXON_8_
case 8: { VUXTRY{ return new CInsideIO(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CInsideIO), "CInsideIO"); } }
#endif
#ifdef _VUXON_9_
case 9: { VUXTRY{ return new CInsideIO2(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CInsideIO2), "CInsideIO2"); } }
#endif
#ifdef _VUXON_10_
case 10: { VUXTRY{ return new CWhiteBox2(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CWhiteBox2), "CWhiteBox2"); } }
#endif
#ifdef _VUXON_11_
case 11: { VUXTRY{ return new CWhiteBox(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CWhiteBox), "CWhiteBox"); } }
#endif
#ifdef _VUXON_12_
case 12: { VUXTRY{ return new CString(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CString), "CString"); } }
#endif
#ifdef _VUXON_13_
case 13: { VUXTRY{ return new CMapStringToPtr::CAssoc(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CMapStringToPtr::CAssoc), "CMapStringToPtr::CAssoc"); } }
#endif
#ifdef _VUXON_14_
case 14: { VUXTRY{ return new CList<CString,CString>::CNode(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(CList<CString,CString>::CNode), "CList<CString,CString>::CNode"); } }
#endif
#ifdef _VUXON_15_
case 15: { VUXTRY{ return new tagJobInfo(); }VUXCATCHALL(){ return VuxNewObjectFailed(sizeof(tagJobInfo), "tagJobInfo"); } }
#endif

case 0: default: break;
}
#endif
return 0;
}

#endif