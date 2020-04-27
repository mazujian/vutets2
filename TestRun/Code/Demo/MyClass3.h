
//Code/Demo/MyClass3.h


#ifndef __MYCLASS2_H__
#define __MYCLASS2_H__

#include "TypeDef2.h"


class CMyClass3
{
public:

    int   _01_Triangle(int a, int b, int c);
    BOOL  _02_Response(stream_t pMsg);
    BOOL  _02_Response_ok(stream_t pMsg);
    BOOL  _03_Response_1(stream_t pMsg);
    BOOL  _04_Response_2(UserInfo& info, CJobList& jobList, CMapStringToPtr& map);
    BOOL  _04_Response_2_ok(UserInfo& info, CJobList& jobList, CMapStringToPtr& map);

public:

    int _01_Triangle_vpls(int a,int b,int c);
    int _01_Triangle_vpls_(int a,int b,int c);
    BOOL _02_Response_vpls(stream_t pMsg);
    BOOL _02_Response_vpls_(stream_t pMsg);
    BOOL _02_Response_ok_vpls(stream_t pMsg);
    BOOL _02_Response_ok_vpls_(stream_t pMsg);
    BOOL _03_Response_1_vpls(stream_t pMsg);
    BOOL _03_Response_1_vpls_(stream_t pMsg);
    BOOL _04_Response_2_vpls(UserInfo& info,CJobList& jobList,CMapStringToPtr& map);
    BOOL _04_Response_2_vpls_(UserInfo& info,CJobList& jobList,CMapStringToPtr& map);
    BOOL _04_Response_2_ok_vpls(UserInfo& info,CJobList& jobList,CMapStringToPtr& map);
    BOOL _04_Response_2_ok_vpls_(UserInfo& info,CJobList& jobList,CMapStringToPtr& map);
};


#endif