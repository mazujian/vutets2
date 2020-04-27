
//Code/Demo/WhiteBox2.h


#ifndef __WHITEBOX2_H__
#define __WHITEBOX2_H__

#include "TypeDef2.h"

class CWhiteBox2  
{
public:

public:
    CWhiteBox2();
    virtual ~CWhiteBox2();

public:
    int  _01_WhiteBox(int A, int B, int X);
    void _02_DeleteComment(char *pSrc, char *pDes);
    BOOL _03_Mcdc1(BOOL A, BOOL B, BOOL C);
    BOOL _04_Mcdc2(BOOL A, BOOL B, BOOL C, BOOL D, BOOL E, BOOL F, BOOL G, BOOL H, BOOL I, BOOL J, BOOL K);

public:

    int _01_WhiteBox_vpls(int A,int B,int X);
    int _01_WhiteBox_vpls_(int A,int B,int X);
    void _02_DeleteComment_vpls(char* pSrc,char* pDes);
    void _02_DeleteComment_vpls_(char* pSrc,char* pDes);
    BOOL _03_Mcdc1_vpls(BOOL A,BOOL B,BOOL C);
    BOOL _03_Mcdc1_vpls_(BOOL A,BOOL B,BOOL C);
    BOOL _04_Mcdc2_vpls(BOOL A,BOOL B,BOOL C,BOOL D,BOOL E,BOOL F,BOOL G,BOOL H,BOOL I,BOOL J,BOOL K);
    BOOL _04_Mcdc2_vpls_(BOOL A,BOOL B,BOOL C,BOOL D,BOOL E,BOOL F,BOOL G,BOOL H,BOOL I,BOOL J,BOOL K);
};

#endif