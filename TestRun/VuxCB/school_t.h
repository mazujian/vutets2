
//#begin
//#type:school_t,school_t
//#flag:36
//#data:char*,char*
//#templ:
//#header:
//#end


#ifndef __VCB_SCHOOL_T_H__
#define __VCB_SCHOOL_T_H__


static void VUCALLBACK vcb_school_t(void* pcbd)
{
    school_t** ppData = (school_t**)pcbd;
    school_t* pData = *ppData;
    char* vcbData; TDCB_INIT("char*", vcbData);

    if(IS_VCB_INPUT())
    {
        TDCB_INPUT("char*", vcbData, pcbd);
_INPUT_CODE_BEGIN_
        school_free(&g_school);
	    use_date_file(VuxDataPathNameA(vcbData));
	    *ppData = &g_school;
_INPUT_CODE_END_
    }
    else
    {
_OUTPUT_CODE_BEGIN_

_OUTPUT_CODE_END_
        TDCB_OUTPUT("char*", vcbData, pcbd, 0);
    }
}


#endif