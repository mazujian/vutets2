
//Code/Demo/CString.cpp
#include "VuxInc/VuxFore.h"

#include "CString.h"

#include "VuxInc/VUnit.h"
#include "VuxMockFl/Demo/CString.cpp.h"
#include "VuxMock/Demo/CString.cpp"


CString::CString(int size)
{__VUFNID__(848); VuxDbgBrkO() 
{
 VUXRS(1);    mpData = 0;
 VUXRS(2);    mLength = 0;
 VUXRS(3);    mSize = GetSize(size);
 VUXRS(4);    mpData = (char*)::malloc(mSize);
 VUXRS(5);    mpData[0] = '\0';
}VUXFRTNE();}

#define MIN(a, b) (a) < (b) ? (a) : (b) 
CString::CString(const char* lpsz, int iLen)
{__VUFNID__(849); VuxDbgBrkO() 
{
 VUXRS(1);    mpData = 0;
 VUXRS(2);    mLength = 0;
 VUXRS(3);    mSize = 0;
    if( VUXRS(4)&&(lpsz == 0))
    {{ VUXRS(5); VUXFRTN();
    }}

    int len = VUXRS(6)&&( ((int)strlen(lpsz)) < ( iLen)) ? ( ((int)strlen(lpsz))) : ( ( iLen));
    if( VUXRS(7)&&(len == 0))
    {{ VUXRS(8); VUXFRTN();
    }}

 VUXRS(9);    mSize = GetSize(len);  
 VUXRS(10);    mLength = len;
 VUXRS(11);    mpData = (char*)::malloc(mSize);
 VUXRSVB(12,1);    char* ptr = mpData; VUXLV("char*",ptr,1);
 VUXRSVB(13,2);    int count = 0; VUXLV("int",count,2);
    while( VUXRS(14)&&(*lpsz) && VUXRS(15)&&( count++<len))
    {VUXRBR_LOOP2(4,8,55);{ VUXRS(16); *ptr++ = *lpsz++;
    }} 
 VUXRS(17);    *ptr = '\0';
}VUXFRTNE();}

void StrCopy(char* pDes, const char* pSrc)
{VMCKDS vmckds[2]={{1,"char*","pDes",(const void*)&pDes},{2,"char*","pSrc",(const void*)&pSrc}}; if(!VuxMck("StrCopy",0,vmckds,2,"",850,3,1)) {__VUFNID__(850); VuxDbgBrkO() 
{
    while( VUXRS(1)&&(*pSrc))
    {VUXRBR_LOOP2(1,2,56);{ 
 VUXRS(2);        *pDes++ = *pSrc++;
    }} 
 VUXRS(3);    *pDes = '\0';
}VUXFRTNE();}}

CString::CString(const char* s1, const char* s2)
{__VUFNID__(851); VuxDbgBrkO() 
{
 VUXRS(1);    mpData = 0;
 VUXRS(2);    mLength = 0;
 VUXRS(3);    mSize = 0;
    if( VUXRS(4)&&(s1 == 0) && VUXRS(5)&&( s2 == 0))
    {{ VUXRS(6); VUXFRTN();
    }}

    int len1 = ( VUXRS(7)&&(s1 == 0)) ? ( 0) : ( strlen(s1));
    int len2 = ( VUXRS(8)&&(s2 == 0)) ? ( 0) : ( strlen(s2));
 VUXRSVB(9,1);    int len = len1 + len2; VUXLV("int",len,1);
    if( VUXRS(10)&&(len == 0))
    {{ VUXRS(11); VUXFRTN();
    }}

 VUXRS(12);    mSize = GetSize(len);  
 VUXRS(13);    mLength = len;
 VUXRS(14);    mpData = (char*)::malloc(mSize);
    if( VUXRS(15)&&(s1 != 0))
    {{ VUXRS(16); StrCopy(mpData, s1);
    }}
    if( VUXRS(17)&&(s2 != 0))
    {{ VUXRS(18); StrCopy(mpData+len1, s2);
    }}
}VUXFRTNE();}

CString::CString(const char* s1, char c2)
{__VUFNID__(852); VuxDbgBrkO() 
{
    int len1 = ( VUXRS(1)&&(s1 == 0)) ? ( 0) : ( strlen(s1));
 VUXRSVB(2,1);    int len2 = 1; VUXLV("int",len2,1);
 VUXRSVB(3,2);    int len = len1 + len2; VUXLV("int",len,2);

 VUXRS(4);    mSize = GetSize(len);  
 VUXRS(5);    mLength = len;
 VUXRS(6);    mpData = (char*)::malloc(mSize);
    if( VUXRS(7)&&(s1 != 0))
    {{ VUXRS(8); StrCopy(mpData, s1);
    }}
 VUXRS(9);    mpData[len1] = c2;
 VUXRS(10);    mpData[len] = '\0';
}VUXFRTNE();}

CString::CString(char c1, const char* s2)
{__VUFNID__(853); VuxDbgBrkO() 
{
 VUXRSVB(2,1);    int len1 = 1; VUXLV("int",len1,1);
    int len2 = ( VUXRS(1)&&(s2 == 0)) ? ( 0) : ( strlen(s2));
 VUXRSVB(3,2);    int len = len1 + len2; VUXLV("int",len,2);

 VUXRS(4);    mSize = GetSize(len);  
 VUXRS(5);    mLength = len;
 VUXRS(6);    mpData = (char*)::malloc(mSize);
 VUXRS(7);    mpData[0] = c1;
    if( VUXRS(8)&&(s2 != 0))
    {{ 
 VUXRS(9);        StrCopy(mpData+1, s2);
    }}
    else
    {{
 VUXRS(10);        mpData[1] = '\0';
    }}
}VUXFRTNE();}


CString::~CString()
{__VUFNID__(854); VuxDbgBrkO() 
{
 VUXRS(1);    Free();
}VUXFRTNE();}

void CString::UpdateMemory(int iLen)
{VMCKDS vmckds[1]={{1,"int","iLen",(const void*)&iLen}}; if(!VuxMckM("UpdateMemory",0,vmckds,1,"CString",855,6,1)) {__VUFNID__(855); VuxDbgBrkO() 
{
 VUXRS(1);    mSize = GetSize(iLen);
    
 VUXRSVB(2,1);    char* pTemp = mpData; VUXLV("char*",pTemp,1);
 VUXRS(3);    mpData = (char*)::malloc(mSize);
    if( VUXRS(4)&&(pTemp != 0))
    {{ VUXRS(5); StrCopy(mpData, pTemp);
    }}
 VUXRS(6);    delete [] pTemp;
}VUXFRTNE();}}

const CString& CString::operator=(const CString& stringSrc)
{__VUFNINFO__("operator =","const CString&",856); VuxDbgBrkO() 
{
 VUXRS(1);    {const CString& __vurtv__= ( CString::operator=((const char*)stringSrc));VUXFRTY();}
}}
 
const CString& CString::operator=(char ch)
{__VUFNINFO__("operator =","const CString&",857); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(mSize < (1+1)))
    {{
 VUXRS(2);        Free();
 VUXRS(3);        mSize = GetSize(1);
 VUXRS(4);        mpData = (char*)::malloc(mSize);
    }}

 VUXRS(5);    mpData[0] = ch;
 VUXRS(6);    mpData[1] = '\0';
 VUXRS(7);    mLength = 1;
 VUXRS(8);    {const CString& __vurtv__= *this;VUXFRTY();}
}}  

const CString& CString::operator=(const char* lpsz)
{__VUFNINFO__("operator =","const CString&",858); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(lpsz == 0))
    {{
 VUXRS(2);        Free();
 VUXRS(3);        {const CString& __vurtv__= *this;VUXFRTY();}
    }}

 VUXRSVB(4,1);    int len = strlen(lpsz); VUXLV("int",len,1);
    if( VUXRS(5)&&(len == 0))
    {{
 VUXRS(6);        Free();
 VUXRS(7);        {const CString& __vurtv__= *this;VUXFRTY();}
    }}

    if( VUXRS(8)&&(mSize < len+1))
    {{
 VUXRS(9);        Free();
 VUXRS(10);        mSize = GetSize(len);
 VUXRS(11);        mpData = (char*)::malloc(mSize);
    }}

 VUXRS(12);    StrCopy(mpData, lpsz);
 VUXRS(13);    mLength = len;
 VUXRS(14);    {const CString& __vurtv__= *this;VUXFRTY();}
}}

const CString& CString::operator=(const unsigned char* psz)
{__VUFNINFO__("operator =","const CString&",859); VuxDbgBrkO() 
{
 VUXRS(1);    {const CString& __vurtv__= ( CString::operator=((const char*)psz));VUXFRTY();}
}}

const CString& CString::operator+=(char ch)
{__VUFNINFO__("operator +=","const CString&",860); VuxDbgBrkO() 
{
    if( VUXRS(1)&&( mLength+1/*sizeof(char)*/ >= mSize))
    {{
 VUXRS(2);        UpdateMemory(1);
    }}
    
 VUXRS(3);    mpData[mLength] = ch;
 VUXRS(4);    mpData[mLength+1] = '\0';
 VUXRS(5);    mLength += sizeof(char);
 VUXRS(6);    {const CString& __vurtv__= *this;VUXFRTY();}
}}

const CString& CString::operator+=(const char* lpsz)
{__VUFNINFO__("operator +=","const CString&",861); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(lpsz == 0))
    {{ VUXRS(2); {const CString& __vurtv__= *this;VUXFRTY();}
    }}
 VUXRSVB(3,1);    int len = strlen(lpsz); VUXLV("int",len,1);
    if( VUXRS(4)&&(len == 0))
    {{ VUXRS(5); {const CString& __vurtv__= *this;VUXFRTY();}
    }}

    if( VUXRS(6)&&( (mLength+len) >= mSize))
    {{
 VUXRS(7);        UpdateMemory(len);
    }}

 VUXRSVB(8,2);    char* pdes = mpData + mLength; VUXLV("char*",pdes,2);
 VUXRSVB(9,3);    const char* psrc = lpsz; VUXLV("const char*",psrc,3);
    while( VUXRS(10)&&(*psrc))
    {VUXRBR_LOOP2(4,8,37);{ VUXRS(11); *pdes++ = *psrc++;
    }} 
 VUXRS(12);    *pdes = '\0';
 VUXRS(13);    mLength += len;
 VUXRS(14);    {const CString& __vurtv__= *this;VUXFRTY();}
}}

const CString& CString::operator+=(const CString& string)
{__VUFNINFO__("operator +=","const CString&",862); VuxDbgBrkO() 
{
 VUXRS(1);    {const CString& __vurtv__= ( CString::operator+=((const char*)string));VUXFRTY();}
}}

CString __stdcall operator+(const CString& string1, const CString& string2)
{__VUFNINFO__("operator +","CString",863); VuxDbgBrkO() 
{
 VUXRS(1);    {CString __vurtv__= ( CString(string1, string2));VUXFRTY();}
}}

CString __stdcall operator+(const CString& string, char ch)
{__VUFNINFO__("operator +","CString",864); VuxDbgBrkO() 
{
 VUXRS(1);    {CString __vurtv__= ( CString(string, ch));VUXFRTY();}
}}

CString __stdcall operator+(char ch, const CString& string)
{__VUFNINFO__("operator +","CString",865); VuxDbgBrkO() 
{
 VUXRS(1);    {CString __vurtv__= ( CString(ch, string));VUXFRTY();}
}}

CString __stdcall operator+(const CString& string, const char* lpsz)
{__VUFNINFO__("operator +","CString",866); VuxDbgBrkO() 
{
 VUXRS(1);    {CString __vurtv__= ( CString(string, lpsz));VUXFRTY();}
}}

CString __stdcall operator+(const char* lpsz, const CString& string)
{__VUFNINFO__("operator +","CString",867); VuxDbgBrkO() 
{
 VUXRS(1);    {CString __vurtv__= ( CString(lpsz, string));VUXFRTY();}
}}

CString::operator const char*() const
{__VUFNINFO__("operator const char*","const char*",868); VuxDbgBrkO() 
{
    {const char* __vurtv__= VUXRS(1)&&( IsEmpty()) ? ( "") : ( mpData);VUXFRTY();}
}}

int CString::GetLength() const 
{void* vmckrt=0; if(VuxMckM("GetLength",&vmckrt,0,0,"CString",869,1,9)) return *(int*)vmckrt;{__VUFNINFO__("GetLength","int",869); VuxDbgBrkO()  
{
 VUXRS(1);    {int __vurtv__= mLength;VUXFRTY();}
}}};

bool CString::IsEmpty() const 
{void* vmckrt=0; if(VuxMckM("IsEmpty",&vmckrt,0,0,"CString",870,1,9)) return *(bool*)vmckrt;{__VUFNINFO__("IsEmpty","bool",870); VuxDbgBrkO()  
{
 VUXRS(1);    {bool __vurtv__= ( mpData == 0 || mLength == 0);VUXFRTY();}
}}};

void CString::Empty() 
{if(!VuxMckM("Empty",0,0,0,"CString",871,1,1)) {__VUFNID__(871); VuxDbgBrkO()  
{
 VUXRS(1);    Free();
}VUXFRTNE();}};

char CString::GetAt(int nIndex) const 
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","nIndex",(const void*)&nIndex}}; if(VuxMckM("GetAt",&vmckrt,vmckds,1,"CString",872,4,1)) return *(char*)vmckrt;{__VUFNINFO__("GetAt","char",872); VuxDbgBrkO()  
{
    if( VUXRS(1)&&(IsEmpty()) || VUXRS(2)&&( nIndex>=mLength))
    {{ 
 VUXRS(3);        {char __vurtv__= 0;VUXFRTY();}
    }} 
 VUXRS(4);    {char __vurtv__= mpData[nIndex];VUXFRTY();}
}}};

void CString::SetAt(int nIndex, char ch)
{VMCKDS vmckds[2]={{1,"int","nIndex",(const void*)&nIndex},{2,"char","ch",(const void*)&ch}}; if(!VuxMckM("SetAt",0,vmckds,2,"CString",873,3,1)) {__VUFNID__(873); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(!IsEmpty()) && VUXRS(2)&&( nIndex<mLength))
    {{ VUXRS(3); mpData[nIndex] = ch;
    }}
}VUXFRTNE();}};

int CString::Compare(const char* lpsz) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","lpsz",(const void*)&lpsz}}; if(VuxMckM("Compare",&vmckrt,vmckds,1,"CString",874,9,1)) return *(int*)vmckrt;{__VUFNINFO__("Compare","int",874); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{
        if( VUXRS(2)&&(lpsz == 0))
        {{ VUXRS(3); {int __vurtv__= 0;VUXFRTY();}
        }}
        else if( VUXRS(4)&&(lpsz[0] == '\0'))
        {{ VUXRS(5); {int __vurtv__= 0;VUXFRTY();}
        }}
        else
        {{ VUXRS(6); {int __vurtv__= -1;VUXFRTY();}
        }}
    }}
    else if( VUXRS(7)&&(lpsz == 0))
    {{
 VUXRS(8);        {int __vurtv__= 1;VUXFRTY();}
    }}

 VUXRS(9);    {int __vurtv__= ( strcmp(mpData, lpsz));VUXFRTY();}
}}}

CString CString::Mid(int nFirst, int nCount) const
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","nFirst",(const void*)&nFirst},{2,"int","nCount",(const void*)&nCount}}; if(VuxMckM("Mid",&vmckrt,vmckds,2,"CString",875,14,1)) return *(CString*)vmckrt;{__VUFNINFO__("Mid","CString",875); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {CString __vurtv__= CString();VUXFRTY();}
    }}

    // out-of-bounds requests return sensible things
    if ( VUXRS(3)&&(nFirst < 0))
    {{ VUXRS(4); nFirst = 0;
    }}
    if ( VUXRS(5)&&(nCount < 0))
    {{ VUXRS(6); nCount = 0;
    }}

    if ( VUXRS(7)&&(nFirst + nCount > mLength))
    {{
 VUXRS(8);        nCount = mLength - nFirst;
    }}
    if ( VUXRS(9)&&(nFirst > mLength))
    {{
 VUXRS(10);        nCount = 0;
    }}

    // optimize case of returning entire string
    if ( VUXRS(11)&&(nFirst == 0) && VUXRS(12)&&( nFirst + nCount == mLength))
    {{
 VUXRS(13);        {CString __vurtv__= *this;VUXFRTY();}
    }}

 VUXRS(14);    {CString __vurtv__= ( CString(mpData + nFirst, nCount));VUXFRTY();}
}}}

CString CString::Mid(int nFirst) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","nFirst",(const void*)&nFirst}}; if(VuxMckM("Mid",&vmckrt,vmckds,1,"CString",876,1,1)) return *(CString*)vmckrt;{__VUFNINFO__("Mid","CString",876); VuxDbgBrkO() 
{
 VUXRS(1);    {CString __vurtv__= ( CString::Mid(nFirst, mLength-nFirst));VUXFRTY();}
}}}

CString CString::Left(int nCount) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","nCount",(const void*)&nCount}}; if(VuxMckM("Left",&vmckrt,vmckds,1,"CString",877,1,1)) return *(CString*)vmckrt;{__VUFNINFO__("Left","CString",877); VuxDbgBrkO() 
{
 VUXRS(1);    {CString __vurtv__= ( CString::Mid(0, nCount));VUXFRTY();}
}}}

CString CString::Right(int nCount) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","nCount",(const void*)&nCount}}; if(VuxMckM("Right",&vmckrt,vmckds,1,"CString",878,1,1)) return *(CString*)vmckrt;{__VUFNINFO__("Right","CString",878); VuxDbgBrkO() 
{
 VUXRS(1);    {CString __vurtv__= ( CString::Mid(mLength-nCount, nCount));VUXFRTY();}
}}}

void CString::MakeUpper()
{if(!VuxMckM("MakeUpper",0,0,0,"CString",879,2,1)) {__VUFNID__(879); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); VUXFRTN();
    }}
    //_strupr_s(mpData);
}VUXFRTNE();}}

void CString::MakeLower()
{if(!VuxMckM("MakeLower",0,0,0,"CString",880,2,1)) {__VUFNID__(880); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); VUXFRTN();
    }}
    //_strlwr(mpData);
}VUXFRTNE();}}

#define ISSPACE(ch) (ch==(char)0x09 || ch==(char)0x0D || ch==(char)0x20)

void CString::TrimRight()
{if(!VuxMckM("TrimRight",0,0,0,"CString",881,13,1)) {__VUFNID__(881); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); VUXFRTN();
    }}
 VUXRSVB(3,1);    int index = mLength-1; VUXLV("int",index,1); VUXRS(4);
    for(; VUXRS(6)&&( index>=0); VUXRS(5), index--)
    {VUXRBR_LOOP2(2,4,42);{
 VUXRSVB(7,2);        char ch = mpData[index]; VUXLV("char",ch,2);
        if(! ( VUXRS(8)&&(ch==(char)0x09) || VUXRS(9)&&( ch==(char)0x0D) || VUXRS(10)&&( ch==(char)0x20)))
        {{ VUXRS(11);VUXSEN(4,1,11); break;
        }}
 VUXRS(12);        mpData[index] = '\0';
 VUXRS(13);        mLength--;
    }}
}VUXFRTNE();}}

void CString::TrimLeft()
{if(!VuxMckM("TrimLeft",0,0,0,"CString",882,19,1)) {__VUFNID__(882); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); VUXFRTN();
    }}
 VUXRSVB(3,1);    int count = 0; VUXLV("int",count,1);
 VUXRSVB(4,2);    char* pTemp = mpData; VUXLV("char*",pTemp,2);
    while( ( VUXRS(5)&&(*pTemp==(char)0x09) || VUXRS(6)&&( *pTemp==(char)0x0D) || VUXRS(7)&&( *pTemp==(char)0x20)))
    {VUXRBR_LOOP2(2,4,43);{
 VUXRS(8);        count++;
 VUXRS(9);        pTemp++;
    }}

    //>>int, count;
    if( VUXRS(10)&&(count == 0))
    {{ VUXRS(11); VUXFRTN();
    }}
 VUXRS(12);    pTemp = mpData; VUXRS(13);
    for(int i=0; VUXRS(15)&&( i<mLength-count); VUXRS(14), i++)
    {VUXRBR_LOOP2(4,8,44);{
 VUXRS(16);        *pTemp = *(pTemp+count);
 VUXRS(17);        pTemp++;
    }}

 VUXRS(18);    *pTemp = '\0';
 VUXRS(19);    mLength -= count;
}VUXFRTNE();}}

int CString::Replace(char chOld, char chNew)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char","chOld",(const void*)&chOld},{2,"char","chNew",(const void*)&chNew}}; if(VuxMckM("Replace",&vmckrt,vmckds,2,"CString",883,12,1)) return *(int*)vmckrt;{__VUFNINFO__("Replace","int",883); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {int __vurtv__= 0;VUXFRTY();}
    }}
 VUXRSVB(3,1);    int nCount = 0; VUXLV("int",nCount,1);

    // short-circuit the nop case
    if ( VUXRS(4)&&(chOld != chNew))
    {{
        // otherwise modify each character that matches in the string
 VUXRSVB(5,2);        char* psz = mpData; VUXLV("char*",psz,2);
 VUXRSVB(6,3);        char* pszEnd = psz + mLength; VUXLV("char*",pszEnd,3);
        while ( VUXRS(7)&&(psz < pszEnd))
        {VUXRBR_LOOP2(3,5,45);{
            // replace instances of the specified character only
            if ( VUXRS(8)&&(*psz == chOld))
            {{
 VUXRS(9);                *psz = chNew;
 VUXRS(10);                nCount++;
            }}
 VUXRS(11);            psz = strinc(psz);
        }}
    }}
 VUXRS(12);    {int __vurtv__= nCount;VUXFRTY();}
}}}

#define AddendChar(pBuf, ch, index, size)\
{\
    if(index >= size-1)\
    {\
        size = size*2+1;\
        char* pNewBuf = new char[size];\
        for(int i=0; i<index; i++)\
            pNewBuf[i] = pBuf[i];\
        delete [] pBuf;\
        pBuf = pNewBuf;\
    }\
    pBuf[index++] = ch;\
}

char* CString::GetBuffer(int nMinBufLength)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","nMinBufLength",(const void*)&nMinBufLength}}; if(VuxMckM("GetBuffer",&vmckrt,vmckds,1,"CString",884,5,1)) return *(char**)vmckrt;{__VUFNINFO__("GetBuffer","char*",884); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(nMinBufLength > mSize))
    {{
 VUXRS(2);        UpdateMemory(nMinBufLength-mSize);
    }}
    if( VUXRS(3)&&(mLength == 0))
    {{
 VUXRS(4);        memset(mpData, 0, mSize);
    }}
 VUXRS(5);    {char* __vurtv__= mpData;VUXFRTY();}
}}}

void CString::ReleaseBuffer(int nNewLength/* = -1*/)
{VMCKDS vmckds[1]={{1,"int","nNewLength",(const void*)&nNewLength}}; if(!VuxMckM("ReleaseBuffer",0,vmckds,1,"CString",885,4,1)) {__VUFNID__(885); VuxDbgBrkO() 
{
    if ( VUXRS(1)&&(nNewLength == -1))
    {{
 VUXRS(2);        nNewLength = strlen(mpData);
    }} // zero terminated

 VUXRS(3);    mLength = nNewLength;
 VUXRS(4);    mpData[nNewLength] = '\0';
}VUXFRTNE();}}

void __cdecl CString::Format(const char* lpszFormat, ...)
{VMCKDS vmckds[1]={{1,"char*","lpszFormat",(const void*)&lpszFormat}}; if(!VuxMckM("Format",0,vmckds,1,"CString",886,4,1)) {__VUFNID__(886); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    va_list argList; VUXLV("va_list",argList,1);
 VUXRS(2);    __builtin_va_start(argList, lpszFormat);
 VUXRS(3);    FormatV(lpszFormat, argList);
 VUXRS(4);    __builtin_va_end(argList);
}VUXFRTNE();}}

int CString::Remove(char chRemove)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char","chRemove",(const void*)&chRemove}}; if(VuxMckM("Remove",&vmckrt,vmckds,1,"CString",887,14,1)) return *(int*)vmckrt;{__VUFNINFO__("Remove","int",887); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {int __vurtv__= 0;VUXFRTY();}
    }}

 VUXRSVB(3,1);    char* pstrSource = mpData; VUXLV("char*",pstrSource,1);
 VUXRSVB(4,2);    char* pstrDest = mpData; VUXLV("char*",pstrDest,2);
 VUXRSVB(5,3);    char* pstrEnd = mpData + mLength; VUXLV("char*",pstrEnd,3);

    while ( VUXRS(6)&&(pstrSource < pstrEnd))
    {VUXRBR_LOOP2(2,4,46);{
        if ( VUXRS(7)&&(*pstrSource != chRemove))
        {{
 VUXRS(8);            *pstrDest = *pstrSource;
 VUXRS(9);            pstrDest = strinc(pstrDest);
        }}
 VUXRS(10);        pstrSource = strinc(pstrSource);
    }}
 VUXRS(11);    *pstrDest = '\0';
 VUXRSVB(12,4);    int nCount = pstrSource - pstrDest; VUXLV("int",nCount,4);
 VUXRS(13);    mLength -= nCount;

 VUXRS(14);    {int __vurtv__= nCount;VUXFRTY();}
}}}

int CString::Insert(int nIndex, char ch)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","nIndex",(const void*)&nIndex},{2,"char","ch",(const void*)&ch}}; if(VuxMckM("Insert",&vmckrt,vmckds,2,"CString",888,12,1)) return *(int*)vmckrt;{__VUFNINFO__("Insert","int",888); VuxDbgBrkO() 
{
    if ( VUXRS(1)&&(nIndex < 0))
    {{ VUXRS(2); nIndex = 0;
    }}
 VUXRSVB(3,1);    int nNewLength = mLength; VUXLV("int",nNewLength,1);
    if ( VUXRS(4)&&(nIndex > nNewLength))
    {{ VUXRS(5); nIndex = nNewLength;
    }}
 VUXRS(6);    nNewLength ++;
    if ( VUXRS(7)&&(nNewLength >= mSize))
    {{
 VUXRS(8);        UpdateMemory(1);
    }}

    // move existing bytes down
 VUXRS(9);    memcpy(mpData + nIndex + 1,
    mpData + nIndex, (nNewLength-nIndex)*sizeof(char));
 VUXRS(10);    mpData[nIndex] = ch;
 VUXRS(11);    mLength = nNewLength;

 VUXRS(12);    {int __vurtv__= nNewLength;VUXFRTY();}
}}}

int CString::Insert(int nIndex, const char* pstr)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","nIndex",(const void*)&nIndex},{2,"char*","pstr",(const void*)&pstr}}; if(VuxMckM("Insert",&vmckrt,vmckds,2,"CString",889,16,1)) return *(int*)vmckrt;{__VUFNINFO__("Insert","int",889); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(pstr == 0))
    {{ VUXRS(2); {int __vurtv__= mLength;VUXFRTY();}
    }}
    if ( VUXRS(3)&&(nIndex < 0))
    {{ VUXRS(4); nIndex = 0;
    }}
 VUXRSVB(5,1);    int nInsertLength = strlen(pstr); VUXLV("int",nInsertLength,1);
 VUXRSVB(6,2);    int nNewLength = mLength; VUXLV("int",nNewLength,2);

    if ( VUXRS(7)&&(nInsertLength > 0))
    {{
        if ( VUXRS(8)&&(nIndex > nNewLength))
        {{ VUXRS(9); nIndex = nNewLength;
        }}
 VUXRS(10);        nNewLength += nInsertLength;

        if ( VUXRS(11)&&(mSize < nNewLength))
        {{
 VUXRS(12);            UpdateMemory(nInsertLength);
        }}

        // move existing bytes down
 VUXRS(13);        memcpy(mpData + nIndex + nInsertLength,
        mpData + nIndex,
        (nNewLength-nIndex-nInsertLength+1)*sizeof(char));
 VUXRS(14);        memcpy(mpData + nIndex,
        pstr, nInsertLength*sizeof(char));
 VUXRS(15);        mLength = nNewLength;
    }}

 VUXRS(16);    {int __vurtv__= nNewLength;VUXFRTY();}
}}}

int CString::Delete(int nIndex, int nCount )
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"int","nIndex",(const void*)&nIndex},{2,"int","nCount",(const void*)&nCount}}; if(VuxMckM("Delete",&vmckrt,vmckds,2,"CString",890,11,1)) return *(int*)vmckrt;{__VUFNINFO__("Delete","int",890); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {int __vurtv__= 0;VUXFRTY();}
    }}
    if ( VUXRS(3)&&(nIndex < 0))
    {{
 VUXRS(4);        nIndex = 0;
    }}
 VUXRSVB(5,1);    int nNewLength = mLength; VUXLV("int",nNewLength,1);
    if ( VUXRS(6)&&(nCount > 0) && VUXRS(7)&&( nIndex < nNewLength))
    {{
 VUXRSVB(8,2);        int nBytesToCopy = nNewLength - (nIndex + nCount) + 1; VUXLV("int",nBytesToCopy,2);

 VUXRS(9);        memcpy(mpData + nIndex,
        mpData + nIndex + nCount, nBytesToCopy * sizeof(char));
 VUXRS(10);        mLength = nNewLength - nCount;
    }}

 VUXRS(11);    {int __vurtv__= nNewLength;VUXFRTY();}
}}}

int CString::Find(char ch) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char","ch",(const void*)&ch}}; if(VuxMckM("Find",&vmckrt,vmckds,1,"CString",891,1,1)) return *(int*)vmckrt;{__VUFNINFO__("Find","int",891); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= ( Find(ch, 0));VUXFRTY();}
}}}

int CString::Find(char ch, int nStart) const
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char","ch",(const void*)&ch},{2,"int","nStart",(const void*)&nStart}}; if(VuxMckM("Find",&vmckrt,vmckds,2,"CString",892,7,1)) return *(int*)vmckrt;{__VUFNINFO__("Find","int",892); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {int __vurtv__= -1;VUXFRTY();}
    }}
 VUXRSVB(3,1);    int nLength = mLength; VUXLV("int",nLength,1);
    if ( VUXRS(4)&&(nStart >= nLength))
    {{
 VUXRS(5);        {int __vurtv__= -1;VUXFRTY();}
    }}

    // find first single character
 VUXRSVB(7,2);    char* lpsz = strchr(mpData + nStart, (unsigned char)ch); VUXLV("char*",lpsz,2);

    // return -1 if not found and index otherwise
    {int __vurtv__= ( ( VUXRS(6)&&(lpsz == 0)) ? ( -1) : ( (int)(lpsz - mpData)));VUXFRTY();}
}}}

int CString::ReverseFind(char ch) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char","ch",(const void*)&ch}}; if(VuxMckM("ReverseFind",&vmckrt,vmckds,1,"CString",893,2,1)) return *(int*)vmckrt;{__VUFNINFO__("ReverseFind","int",893); VuxDbgBrkO() 
{
    // find last single character
 VUXRSVB(2,1);    char* lpsz = strrchr(mpData, (unsigned char) ch); VUXLV("char*",lpsz,1);

    // return -1 if not found, distance from beginning otherwise
    {int __vurtv__= ( ( VUXRS(1)&&(lpsz == 0)) ? ( -1) : ( (int)(lpsz - mpData)));VUXFRTY();}
}}}

// find a sub-string (like strstr)
int CString::Find(const char* lpszSub) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","lpszSub",(const void*)&lpszSub}}; if(VuxMckM("Find",&vmckrt,vmckds,1,"CString",894,1,1)) return *(int*)vmckrt;{__VUFNINFO__("Find","int",894); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= ( Find(lpszSub, 0));VUXFRTY();}
}}}

int CString::Find(const char* lpszSub, int nStart) const
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","lpszSub",(const void*)&lpszSub},{2,"int","nStart",(const void*)&nStart}}; if(VuxMckM("Find",&vmckrt,vmckds,2,"CString",895,7,1)) return *(int*)vmckrt;{__VUFNINFO__("Find","int",895); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {int __vurtv__= -1;VUXFRTY();}
    }}

 VUXRSVB(3,1);    int nLength = mLength; VUXLV("int",nLength,1);
    if ( VUXRS(4)&&(nStart > nLength))
    {{
 VUXRS(5);        {int __vurtv__= -1;VUXFRTY();}
    }}

    // find first matching substring
 VUXRSVB(7,2);    char* lpsz = strstr(mpData + nStart, lpszSub); VUXLV("char*",lpsz,2);

    // return -1 for not found, distance from beginning otherwise
    {int __vurtv__= ( ( VUXRS(6)&&(lpsz == 0)) ? ( -1) : ( (int)(lpsz - mpData)));VUXFRTY();}
}}}

bool CString::IsRight(char right)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char","right",(const void*)&right}}; if(VuxMckM("IsRight",&vmckrt,vmckds,1,"CString",896,3,1)) return *(bool*)vmckrt;{__VUFNINFO__("IsRight","bool",896); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {bool __vurtv__= false;VUXFRTY();}
    }}
 VUXRS(3);    {bool __vurtv__= ( (GetAt(GetLength()-1) == right));VUXFRTY();}
}}}

bool CString::IsRight(const char* right)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","right",(const void*)&right}}; if(VuxMckM("IsRight",&vmckrt,vmckds,1,"CString",897,16,1)) return *(bool*)vmckrt;{__VUFNINFO__("IsRight","bool",897); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {bool __vurtv__= false;VUXFRTY();}
    }}
    if( VUXRS(3)&&(right == 0))
    {{ VUXRS(4); {bool __vurtv__= false;VUXFRTY();}
    }}

 VUXRSVB(5,1);    int len = GetLength(); VUXLV("int",len,1);
 VUXRSVB(6,2);    int lenr = strlen(right); VUXLV("int",lenr,2);
    if( VUXRS(7)&&(lenr > len))
    {{ VUXRS(8); {bool __vurtv__= false;VUXFRTY();}
    }}

 VUXRSVB(9,3);    const char* pdata = mpData + len-1; VUXLV("const char*",pdata,3);
 VUXRSVB(10,4);    const char* pRight = right + lenr-1; VUXLV("const char*",pRight,4); VUXRS(11);
    for(int i=lenr-1; VUXRS(13)&&( i>=0); VUXRS(12), i--)
    {VUXRBR_LOOP2(4,8,47);{
        if( VUXRS(14)&&(*pRight-- != *pdata--))
        {{
 VUXRS(15);            {bool __vurtv__= false;VUXFRTY();}
        }}
    }}

 VUXRS(16);    {bool __vurtv__= true;VUXFRTY();}
}}}

bool CString::IsLeft(char left)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char","left",(const void*)&left}}; if(VuxMckM("IsLeft",&vmckrt,vmckds,1,"CString",898,3,1)) return *(bool*)vmckrt;{__VUFNINFO__("IsLeft","bool",898); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {bool __vurtv__= false;VUXFRTY();}
    }}
 VUXRS(3);    {bool __vurtv__= ( (GetAt(0) == left));VUXFRTY();}
}}}

bool CString::IsLeft(const char* left)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","left",(const void*)&left}}; if(VuxMckM("IsLeft",&vmckrt,vmckds,1,"CString",899,10,1)) return *(bool*)vmckrt;{__VUFNINFO__("IsLeft","bool",899); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {bool __vurtv__= false;VUXFRTY();}
    }}
    if( VUXRS(3)&&(left == 0))
    {{ VUXRS(4); {bool __vurtv__= false;VUXFRTY();}
    }}
 VUXRSVB(5,1);    const char* pdata = mpData; VUXLV("const char*",pdata,1);
    while( VUXRS(6)&&(*left) && VUXRS(7)&&( *pdata))
    {VUXRBR_LOOP2(3,6,48);{
        if( VUXRS(8)&&(*left++ != *pdata++))
        {{
 VUXRS(9);            {bool __vurtv__= false;VUXFRTY();}
        }}
    }}

 VUXRS(10);    {bool __vurtv__= ( *left == '\0');VUXFRTY();}
}}}


int CString::Replace(const char* lpszOld, const char* lpszNew)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"char*","lpszOld",(const void*)&lpszOld},{2,"char*","lpszNew",(const void*)&lpszNew}}; if(VuxMckM("Replace",&vmckrt,vmckds,2,"CString",900,77,1)) return *(int*)vmckrt;{__VUFNINFO__("Replace","int",900); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(IsEmpty()))
    {{ VUXRS(2); {int __vurtv__= 0;VUXFRTY();}
    }}
    if( VUXRS(3)&&(lpszOld == 0))
    {{ VUXRS(4); {int __vurtv__= 0;VUXFRTY();}
    }}
 VUXRSVB(5,1);    int len1 = strlen(lpszOld); VUXLV("int",len1,1);
    if( VUXRS(6)&&(len1 == 0))
    {{ VUXRS(7); {int __vurtv__= 0;VUXFRTY();}
    }}
 VUXRSVB(8,2);    int len2 = strlen(lpszNew); VUXLV("int",len2,2);

 VUXRSVB(9,3);    int count = 0; VUXLV("int",count,3);
 VUXRSVB(10,4);    int bufLen = mSize*2+1; VUXLV("int",bufLen,4);
 VUXRSVB(11,5);    char* pBuf = new char[bufLen]; VUXLV("char*",pBuf,5);

 VUXRSVB(12,6);    int index = 0; VUXLV("int",index,6);
 VUXRSVB(13,7);    char first = *lpszOld; VUXLV("char",first,7); VUXRS(14);
    for(int i=0; VUXRS(16)&&( i<mLength); VUXRS(15), i++)
    {VUXRBR_LOOP2(4,8,49);{
 VUXRSVB(17,8);        char ch = mpData[i]; VUXLV("char",ch,8);
        if( VUXRS(18)&&(ch != first))
        {{

            {
                if( VUXRS(19)&&( index >= bufLen-1))
                {{ VUXRS(20); bufLen = bufLen*2+1;
 VUXRSVB(21,9);                    char* pNewBuf = new char[ bufLen]; VUXLV("char*",pNewBuf,9); VUXRS(22);
                    for(int i=0; VUXRS(24)&&( i< index); VUXRS(23), i++)
                    {VUXRBR_LOOP2(7,12,50);{
 VUXRS(25);                        pNewBuf[i] = pBuf[i];
                    }}
 VUXRS(26);                    delete [] pBuf; VUXRS(27); pBuf = pNewBuf;
                }} VUXRS(28); pBuf[ index++] = ch;
            }; VUXRS(29);
 VUXRS(30);VUXSEN(8,1,30);            continue;
        }}

 VUXRSVB(31,10);        bool found = true; VUXLV("bool",found,10); VUXRS(32);
        for(int j=1; VUXRS(34)&&( j<len1); VUXRS(33), j++)
        {VUXRBR_LOOP2(8,16,51);{
 VUXRSVB(35,11);            char temp = mpData[i+j]; VUXLV("char",temp,11);
 VUXRSVB(36,12);            char old = lpszOld[j]; VUXLV("char",old,12);
            if( VUXRS(37)&&(temp != old))
            {{
 VUXRS(38);                found = false;
 VUXRS(39);VUXSEN(16,1,39);                break; //读到mpData的'\0'也会break
            }}
        }}

        if( VUXRS(40)&&(!found))
        {{

            {
                if( VUXRS(41)&&( index >= bufLen-1))
                {{ VUXRS(42); bufLen = bufLen*2+1;
 VUXRSVB(43,13);                    char* pNewBuf = new char[ bufLen]; VUXLV("char*",pNewBuf,13); VUXRS(44);
                    for(int i=0; VUXRS(46)&&( i< index); VUXRS(45), i++)
                    {VUXRBR_LOOP2(12,22,52);{
 VUXRS(47);                        pNewBuf[i] = pBuf[i];
                    }}
 VUXRS(48);                    delete [] pBuf; VUXRS(49); pBuf = pNewBuf;
                }} VUXRS(50); pBuf[ index++] = ch;
            }; VUXRS(51);
 VUXRS(52);VUXSEN(8,1,52);            continue;
        }}
        
 VUXRS(53);        count += len1;
 VUXRS(54);        i += len1-1; VUXRS(55);
        for(int k=0; VUXRS(57)&&( k<len2); VUXRS(56), k++) 
        {VUXRBR_LOOP2(13,26,53);{

            {
                if( VUXRS(58)&&( index >= bufLen-1))
                {{ VUXRS(59); bufLen = bufLen*2+1;
 VUXRSVB(60,14);                    char* pNewBuf = new char[ bufLen]; VUXLV("char*",pNewBuf,14); VUXRS(61);
                    for(int i=0; VUXRS(63)&&( i< index); VUXRS(62), i++)
                    {VUXRBR_LOOP2(15,29,54);{
 VUXRS(64);                        pNewBuf[i] = pBuf[i];
                    }}
 VUXRS(65);                    delete [] pBuf; VUXRS(66); pBuf = pNewBuf;
                }} VUXRS(67); pBuf[ index++] = lpszNew[k];
            }; VUXRS(68);
        }}
    }}

    if( VUXRS(69)&&(count == 0))
    {{
 VUXRS(70);        delete [] pBuf;
 VUXRS(71);        {int __vurtv__= count;VUXFRTY();}
    }}

 VUXRS(72);    pBuf[index] = '\0';
 VUXRS(73);    ::free(mpData);
 VUXRS(74);    mpData = pBuf;
 VUXRS(75);    mLength = index;
 VUXRS(76);    mSize = bufLen;
 VUXRS(77);    {int __vurtv__= count;VUXFRTY();}
}}}

#define char_ARG   char
#define WCHAR_ARG   WCHAR
#define CHAR_ARG    char
#define DOUBLE_ARG  double
#define FORCE_ANSI      0x10000
#define FORCE_UNICODE   0x20000
#define FORCE_INT64     0x40000

#define max(a, b) (a) > (b) ? (a) : (b)
#define min(a, b) (a) < (b) ? (a) : (b)


void CString::FormatV(const char* lpszFormat, va_list argList)
{VMCKDS vmckds[2]={{1,"char*","lpszFormat",(const void*)&lpszFormat},{2,"va_list","argList",(const void*)&argList}}; if(!VuxMckM("FormatV",0,vmckds,2,"CString",1020,138,1)) {__VUFNID__(1020); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    va_list argListSave = argList; VUXLV("va_list",argListSave,1);

    // make a guess at the maximum length of the resulting string
 VUXRSVB(2,2);    int nMaxLen = 0; VUXLV("int",nMaxLen,2); VUXRS(3);
    for (const char* lpsz = lpszFormat; VUXRS(5)&&( *lpsz != '\0'); VUXRS(4), lpsz = strinc(lpsz))
    {VUXRBR_LOOP2(1,2,38);{
        // handle '%' character, but watch out for '%%'
        if ( VUXRS(6)&&(*lpsz != '%') || VUXRS(7)&&( *(lpsz = strinc(lpsz)) == '%'))
        {{
 VUXRS(8);            nMaxLen += strlen(lpsz);
 VUXRS(9);            continue;
        }}

 VUXRSVB(10,3);        int nItemLen = 0; VUXLV("int",nItemLen,3);

        // handle '%' character with format
 VUXRSVB(11,4);        int nWidth = 0; VUXLV("int",nWidth,4); VUXRS(12);
        for (; VUXRS(14)&&( *lpsz != '\0'); VUXRS(13), lpsz = strinc(lpsz))
        {VUXRBR_LOOP2(3,6,39);{
            // check for valid flags
            if ( VUXRS(15)&&(*lpsz == '#'))
            {{
 VUXRS(16);                nMaxLen += 2;
            }}   // for '0x'
            else if ( VUXRS(17)&&(*lpsz == '*'))
            {{
 VUXRS(18);                nWidth = __builtin_va_arg(argList, int);
            }}
            else if ( VUXRS(19)&&(*lpsz == '-') || VUXRS(20)&&( *lpsz == '+') || VUXRS(21)&&( *lpsz == '0') ||
 VUXRS(22)&&(            *lpsz == ' '))
            {{
                ; VUXRS(23);
            }}
            else
            {{ // hit non-flag character
 VUXRS(24);                break;
            }}
        }}
        // get width and skip it
        if ( VUXRS(25)&&(nWidth == 0))
        {{
            // width indicated by
 VUXRS(26);            nWidth = atoi(lpsz); VUXRS(27);
            for (; VUXRS(29)&&( *lpsz != '\0') && VUXRS(30)&&( _isdigit(*lpsz)); VUXRS(28), lpsz = strinc(lpsz))
            {VUXRBR_LOOP2(6,13,40);{
                ; VUXRS(31);
            }}
        }}

 VUXRSVB(32,5);        int nPrecision = 0; VUXLV("int",nPrecision,5);
        if ( VUXRS(33)&&(*lpsz == '.'))
        {{
            // skip past '.' separator (width.precision)
 VUXRS(34);            lpsz = strinc(lpsz);

            // get precision and skip it
            if ( VUXRS(35)&&(*lpsz == '*'))
            {{
 VUXRS(36);                nPrecision = __builtin_va_arg(argList, int);
 VUXRS(37);                lpsz = strinc(lpsz);
            }}
            else
            {{
 VUXRS(38);                nPrecision = atoi(lpsz); VUXRS(39);
                for (; VUXRS(41)&&( *lpsz != '\0') && VUXRS(42)&&( _isdigit(*lpsz)); VUXRS(40), lpsz = strinc(lpsz))
                {VUXRBR_LOOP2(9,19,41);{
                    ; VUXRS(43);
                }}
            }}
        }}

        // should be on type modifier or specifier
 VUXRSVB(44,6);        int nModifier = 0; VUXLV("int",nModifier,6);
        if ( VUXRS(45)&&(strncmp(lpsz, "I64", 3) == 0))
        {{
 VUXRS(46);            lpsz += 3;
 VUXRS(47);            nModifier = 0x40000;
        }}
        else
        {{ VUXRS(48);
            switch (*lpsz)
            {
                // modifiers that affect size
                case 'h':
                {{
 VUXRS(51);                    nModifier = 0x10000;
 VUXRS(52);                    lpsz = strinc(lpsz);
 VUXRS(53);VUXSEN(2,0,53);                    break;
                }}
                case 'l':
                {{
 VUXRS(55);                    nModifier = 0x20000;
 VUXRS(56);                    lpsz = strinc(lpsz);
 VUXRS(57);VUXSEN(2,0,57);                    break;
                }}

                // modifiers that do not affect size
                case 'F':
                case 'N':
                case 'L':
                {{
 VUXRS(59);                    lpsz = strinc(lpsz);
 VUXRS(60);VUXSEN(2,0,60);                    break;
                }}
            }
        }} VUXRS(62);

        // now should be on specifier
        switch (*lpsz | nModifier)
        {
            // single characters
            case 'c':
            case 'C':
            {{
 VUXRS(65);                nItemLen = 2;
 VUXRS(66);                __builtin_va_arg(argList, char);
 VUXRS(67);VUXSEN(2,0,67);                break;
            }}
            case 'c'|0x10000:
            case 'C'|0x10000:
            {{
 VUXRS(69);                nItemLen = 2;
 VUXRS(70);                __builtin_va_arg(argList, char);
 VUXRS(71);VUXSEN(2,0,71);                break;
            }}
            case 'c'|0x20000:
            case 'C'|0x20000:
            {{
 VUXRS(73);                nItemLen = 2;
 VUXRS(74);                __builtin_va_arg(argList, short*);
 VUXRS(75);VUXSEN(2,0,75);                break;
            }}

            // strings
            case 's':{
            {
 VUXRSVB(77,7);                const char* pstrNextArg = __builtin_va_arg(argList, const char*); VUXLV("const char*",pstrNextArg,7);
                if ( VUXRS(78)&&(pstrNextArg == 0))
                {{
 VUXRS(79);                    nItemLen = 6;
                }}  // "(null)"
                else
                {{
 VUXRS(81);                    nItemLen = strlen(pstrNextArg);
                    nItemLen = VUXRS(80)&&( (1) > ( nItemLen)) ? ( (1)) : ( ( nItemLen));
                }}
            }
 VUXRS(82);VUXSEN(2,0,82);            break;}

            case 'S':{
            {
 VUXRSVB(84,8);                const char* pstrNextArg = __builtin_va_arg(argList, const char*); VUXLV("const char*",pstrNextArg,8);
                if ( VUXRS(85)&&(pstrNextArg == 0))
                {{
 VUXRS(86);                    nItemLen = 6;
                }} // "(null)"
                else
                {{
 VUXRS(88);                    nItemLen = strlen(pstrNextArg);
                    nItemLen = VUXRS(87)&&( (1) > ( nItemLen)) ? ( (1)) : ( ( nItemLen));
                }}
            }
 VUXRS(89);VUXSEN(2,0,89);            break;}

            case 's'|0x10000:
            case 'S'|0x10000:{
            {
 VUXRSVB(91,9);                const char* pstrNextArg = __builtin_va_arg(argList, const char*); VUXLV("const char*",pstrNextArg,9);
                if ( VUXRS(92)&&(pstrNextArg == 0))
                {{
 VUXRS(93);                    nItemLen = 6;
                }} // "(null)"
                else
                {{
 VUXRS(95);                    nItemLen = strlen(pstrNextArg);
                    nItemLen = VUXRS(94)&&( (1) > ( nItemLen)) ? ( (1)) : ( ( nItemLen));
                }}
            }
 VUXRS(96);VUXSEN(2,0,96);            break;}
        }

        // adjust nItemLen for strings
        if ( VUXRS(98)&&(nItemLen != 0))
        {{
            if ( VUXRS(99)&&(nPrecision != 0))
            {{
                nItemLen = VUXRS(100)&&( (nItemLen) < ( nPrecision)) ? ( (nItemLen)) : ( ( nPrecision));
            }}
            nItemLen = VUXRS(101)&&( (nItemLen) > ( nWidth)) ? ( (nItemLen)) : ( ( nWidth));
        }}
        else
        {{ VUXRS(102);
            switch (*lpsz)
            {
                // integers
                case 'd':
                case 'i':
                case 'u':
                case 'x':
                case 'X':
                case 'o':
                {{
                    //if (nModifier & FORCE_INT64)
                    //	va_arg(argList, __int64);
                    //else
 VUXRS(106);                    __builtin_va_arg(argList, int);
 VUXRS(107);                    nItemLen = 32;
                    nItemLen = VUXRS(105)&&( (nItemLen) > ( nWidth+nPrecision)) ? ( (nItemLen)) : ( ( nWidth+nPrecision));
 VUXRS(108);VUXSEN(2,0,108);                    break;
                }}

                case 'e':
                case 'g':
                case 'G':
                {{
 VUXRS(111);                    __builtin_va_arg(argList, double);
 VUXRS(112);                    nItemLen = 128;
                    nItemLen = VUXRS(110)&&( (nItemLen) > ( nWidth+nPrecision)) ? ( (nItemLen)) : ( ( nWidth+nPrecision));
 VUXRS(113);VUXSEN(2,0,113);                    break;
                }}

                case 'f':{
                {
 VUXRSVB(115,10);                    double f; VUXLV("double",f,10);
 VUXRSVB(116,11);                    char* pszTemp; VUXLV("char*",pszTemp,11);

                    // 312 == strlen("-1+(309 zeroes).")
                    // 309 zeroes == max precision of a double
                    // 6 == adjustment in case precision is not specified,
                    //   which means that the precision defaults to 6
 VUXRS(117);                    pszTemp = (char*)new char[ (nWidth) > ( 312+nPrecision+6) ? (nWidth) : ( 312+nPrecision+6)];

 VUXRS(118);                    f = __builtin_va_arg(argList, double);
 VUXRS(119);                    sprintf( pszTemp,  "%*.*f", nWidth, nPrecision+6, f );
 VUXRS(120);                    nItemLen = strlen(pszTemp);
 VUXRS(121);                    delete [] pszTemp;
                }
 VUXRS(122);VUXSEN(2,0,122);                break;}

                case 'p':
                {{
 VUXRS(125);                    __builtin_va_arg(argList, void*);
 VUXRS(126);                    nItemLen = 32;
                    nItemLen = VUXRS(124)&&( (nItemLen) > ( nWidth+nPrecision)) ? ( (nItemLen)) : ( ( nWidth+nPrecision));
 VUXRS(127);VUXSEN(2,0,127);                    break;
                }}

                // no output
                case 'n':
                {{
 VUXRS(129);                    __builtin_va_arg(argList, int*);
 VUXRS(130);VUXSEN(2,0,130);                    break;
                }}

                default:
                {{
 VUXRS(132);VUXSEN(2,0,132);                    break;
                }}
            }
        }}

        // adjust nMaxLen for output nItemLen
 VUXRS(134);        nMaxLen += nItemLen;
    }}

 VUXRS(135);    GetBuffer(nMaxLen);
 VUXRS(136);    vsprintf(mpData, lpszFormat, argListSave);
 VUXRS(137);    ReleaseBuffer();

 VUXRS(138);    __builtin_va_end(argListSave);
}VUXFRTNE();}}


#include "VuxConn/Demo/CString.cpp.h"

void _demo_cstring_cpp_fps(void** cbfs, void** onfs, void** gvfs, int index)
{
    cbfs[index] = (void*)VuxCallBack;
    onfs[index] = (void*)VuxObjectNew;
    
#ifdef VUX_GVAR_INIT_DEFINED 
    gvfs[index] = (void*)VuxGlobalVarInit;
#endif
    
#ifdef VUX_SET_USERF_DEFINED 
    VuxCallSetUserFp();
#endif
}