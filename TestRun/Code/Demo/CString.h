
//Code/Demo/CString.h

#ifndef __CSTRING_H__
#define __CSTRING_H__

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "TypeDef.h"

class CString
{
public:

public:
    // constructs empty CString
    CString();
    // from an ANSI string (converts to char)
    CString(const char* lpsz);
    // from unsigned characters
    CString(const unsigned char* psz);
    // copy constructor
    CString(const CString& stringSrc);
  
    CString(char chr);
    CString(unsigned char chr);
    CString(int size);

    ~CString();

public:
    //用于Mid/Left/Right
    CString(const char* lpsz, int len);
    //用于全局+
    CString(const char* s1, const char* s2);
    CString(const char* s1, char c2);
    CString(char c1, const char* s2);

public:
    // return pointer to const string
    operator const char*() const;

    // overloaded assignment

    // ref-counted copy from another CString
    const CString& operator=(const CString& stringSrc);
    // set string content to single character
    const CString& operator=(char ch);
    // copy string content from ANSI string (converts to char)
    const CString& operator=(const char* lpsz);
    // copy string content from UNICODE string (converts to char)
    const CString& operator=(const unsigned char* psz);

    // string concatenation

    // concatenate from another CString
    const CString& operator+=(const CString& string);

    // concatenate a single character
    const CString& operator+=(char ch);

    // concatenate a UNICODE character after converting it to char
    const CString& operator+=(const char* lpsz);


// Attributes & Operations

    // get data length
    int GetLength() const;
    // TRUE if zero length
    bool IsEmpty() const;
    // clear contents to empty
    void Empty();

    // return single character at zero-based index
    char GetAt(int nIndex) const;
    // set a single character at zero-based index
    void SetAt(int nIndex, char ch);


    // straight character comparison
    int Compare(const char* lpsz) const;

    // simple sub-string extraction

    // return nCount characters starting at zero-based nFirst
    CString Mid(int nFirst, int nCount) const;
    // return all characters starting at zero-based nFirst
    CString Mid(int nFirst) const;
    // return first nCount characters in string
    CString Left(int nCount) const;
    // return nCount characters from end of string
    CString Right(int nCount) const;

    // NLS aware conversion to uppercase
    void MakeUpper();
    // NLS aware conversion to lowercase
    void MakeLower();

    // remove whitespace starting from right edge
    void TrimRight();
    // remove whitespace starting from left side
    void TrimLeft();

    // replace occurrences of chOld with chNew
    int Replace(char chOld, char chNew);
    // replace occurrences of substring lpszOld with lpszNew;
    // empty lpszNew removes instances of lpszOld
    int Replace(const char* lpszOld, const char* lpszNew);
    // remove occurrences of chRemove
    int Remove(char chRemove);
    // insert character at zero-based index; concatenates
    // if index is past end of string
    int Insert(int nIndex, char ch);
    // insert substring at zero-based index; concatenates
    // if index is past end of string
    int Insert(int nIndex, const char* pstr);
    // delete nCount characters starting at zero-based index
    int Delete(int nIndex, int nCount = 1);

    // searching

    // find character starting at left, -1 if not found
    int Find(char ch) const;
    // find character starting at right
    int ReverseFind(char ch) const;
    // find character starting at zero-based index and going right
    int Find(char ch, int nStart) const;
    // find first instance of substring
    int Find(const char* lpszSub) const;
    // find first instance of substring starting at zero-based index
    int Find(const char* lpszSub, int nStart) const;

    // simple formatting

    // printf-like formatting using passed string
    void __cdecl Format(const char* lpszFormat, ...);
    // printf-like formatting using referenced string resource
    void FormatV(const char* lpszFormat, va_list argList);

    // Access to string implementation buffer as "C" character array

    // get pointer to modifiable buffer at least as long as nMinBufLength
    char* GetBuffer(int nMinBufLength);
    // release buffer, setting length to nNewLength (or to first nul if -1)
    void ReleaseBuffer(int nNewLength = -1);

    bool IsRight(char right);
    bool IsRight(const char* right);
    bool IsLeft(char left);
    bool IsLeft(const char* left);

public:
    char* mpData;   // pointer to ref counted string data
    int   mLength;
    int   mSize;

    // implementation helpers
    int GetSize(int len);
    void Init(const char* lpsz);
    void Initc(char chr);
    void Free();
    void UpdateMemory(int iLen);

    friend CString __stdcall operator+(const CString& string1, const CString& string2);
    friend CString __stdcall operator+(const CString& string, char ch);
    friend CString __stdcall operator+(char ch, const CString& string);
    friend CString __stdcall operator+(const CString& string, const char* lpsz);
    friend CString __stdcall operator+(const char* lpsz, const CString& string);

public:

    const char* operator32const32char42_vpls() const;
    const char* operator32const32char42_vpls_() const;
    const CString& operator3261_vpls(const CString& stringSrc);
    const CString& operator3261_vpls_(const CString& stringSrc);
    const CString& operator3261_vpls(char ch);
    const CString& operator3261_vpls_(char ch);
    const CString& operator3261_vpls(const char* lpsz);
    const CString& operator3261_vpls_(const char* lpsz);
    const CString& operator3261_vpls(const unsigned char* psz);
    const CString& operator3261_vpls_(const unsigned char* psz);
    const CString& operator324361_vpls(const CString& string);
    const CString& operator324361_vpls_(const CString& string);
    const CString& operator324361_vpls(char ch);
    const CString& operator324361_vpls_(char ch);
    const CString& operator324361_vpls(const char* lpsz);
    const CString& operator324361_vpls_(const char* lpsz);
    int GetLength_vpls() const;
    int GetLength_vpls_() const;
    bool IsEmpty_vpls() const;
    bool IsEmpty_vpls_() const;
    void Empty_vpls();
    void Empty_vpls_();
    char GetAt_vpls(int nIndex) const;
    char GetAt_vpls_(int nIndex) const;
    void SetAt_vpls(int nIndex,char ch);
    void SetAt_vpls_(int nIndex,char ch);
    int Compare_vpls(const char* lpsz) const;
    int Compare_vpls_(const char* lpsz) const;
    CString Mid_vpls(int nFirst,int nCount) const;
    CString Mid_vpls_(int nFirst,int nCount) const;
    CString Mid_vpls(int nFirst) const;
    CString Mid_vpls_(int nFirst) const;
    CString Left_vpls(int nCount) const;
    CString Left_vpls_(int nCount) const;
    CString Right_vpls(int nCount) const;
    CString Right_vpls_(int nCount) const;
    void MakeUpper_vpls();
    void MakeUpper_vpls_();
    void MakeLower_vpls();
    void MakeLower_vpls_();
    void TrimRight_vpls();
    void TrimRight_vpls_();
    void TrimLeft_vpls();
    void TrimLeft_vpls_();
    int Replace_vpls(char chOld,char chNew);
    int Replace_vpls_(char chOld,char chNew);
    int Replace_vpls(const char* lpszOld,const char* lpszNew);
    int Replace_vpls_(const char* lpszOld,const char* lpszNew);
    int Remove_vpls(char chRemove);
    int Remove_vpls_(char chRemove);
    int Insert_vpls(int nIndex,char ch);
    int Insert_vpls_(int nIndex,char ch);
    int Insert_vpls(int nIndex,const char* pstr);
    int Insert_vpls_(int nIndex,const char* pstr);
    int Delete_vpls(int nIndex,int nCount= 1);
    int Delete_vpls_(int nIndex,int nCount= 1);
    int Find_vpls(char ch) const;
    int Find_vpls_(char ch) const;
    int ReverseFind_vpls(char ch) const;
    int ReverseFind_vpls_(char ch) const;
    int Find_vpls(char ch,int nStart) const;
    int Find_vpls_(char ch,int nStart) const;
    int Find_vpls(const char* lpszSub) const;
    int Find_vpls_(const char* lpszSub) const;
    int Find_vpls(const char* lpszSub,int nStart) const;
    int Find_vpls_(const char* lpszSub,int nStart) const;
    void __cdecl Format_vpls(const char* lpszFormat,... );
    void __cdecl Format_vpls_(const char* lpszFormat,... );
    void FormatV_vpls(const char* lpszFormat,va_list argList);
    void FormatV_vpls_(const char* lpszFormat,va_list argList);
    char* GetBuffer_vpls(int nMinBufLength);
    char* GetBuffer_vpls_(int nMinBufLength);
    void ReleaseBuffer_vpls(int nNewLength= -1);
    void ReleaseBuffer_vpls_(int nNewLength= -1);
    bool IsRight_vpls(char right);
    bool IsRight_vpls_(char right);
    bool IsRight_vpls(const char* right);
    bool IsRight_vpls_(const char* right);
    bool IsLeft_vpls(char left);
    bool IsLeft_vpls_(char left);
    bool IsLeft_vpls(const char* left);
    bool IsLeft_vpls_(const char* left);
    int GetSize_vpls(int len);
    int GetSize_vpls_(int len);
    void Init_vpls(const char* lpsz);
    void Init_vpls_(const char* lpsz);
    void Initc_vpls(char chr);
    void Initc_vpls_(char chr);
    void Free_vpls();
    void Free_vpls_();
    void UpdateMemory_vpls(int iLen);
    void UpdateMemory_vpls_(int iLen);
};

// Compare helpers
bool __stdcall operator==(const CString& s1, const CString& s2);
bool __stdcall operator==(const CString& s1, const char* s2);
bool __stdcall operator==(const char* s1, const CString& s2);

bool __stdcall operator!=(const CString& s1, const CString& s2);
bool __stdcall operator!=(const CString& s1, const char* s2);
bool __stdcall operator!=(const char* s1, const CString& s2);

bool __stdcall operator<(const CString& s1, const CString& s2);
bool __stdcall operator<(const CString& s1, const char* s2);
bool __stdcall operator<(const char* s1, const CString& s2);

bool __stdcall operator>(const CString& s1, const CString& s2);
bool __stdcall operator>(const CString& s1, const char* s2);
bool __stdcall operator>(const char* s1, const CString& s2);

bool __stdcall operator<=(const CString& s1, const CString& s2);
bool __stdcall operator<=(const CString& s1, const char* s2);
bool __stdcall operator<=(const char* s1, const CString& s2);

bool __stdcall operator>=(const CString& s1, const CString& s2);
bool __stdcall operator>=(const CString& s1, const char* s2);
bool __stdcall operator>=(const char* s1, const CString& s2);

inline bool __stdcall operator==(const CString& s1, const CString& s2)
{__VUFNINFO__("operator ==","bool",722); VuxDbgBrkO() 
{ 
 VUXRS(1);    {bool __vurtv__= ( s1.Compare(s2) == 0);VUXFRTY();} 
}}

inline bool __stdcall operator==(const CString& s1, const char* s2)
{__VUFNINFO__("operator ==","bool",723); VuxDbgBrkO() 
{ 
 VUXRS(1);    {bool __vurtv__= ( s1.Compare(s2) == 0);VUXFRTY();} 
}}

inline bool __stdcall operator==(const char* s1, const CString& s2)
{__VUFNINFO__("operator ==","bool",724); VuxDbgBrkO() 
{ 
 VUXRS(1);    {bool __vurtv__= ( s2.Compare(s1) == 0);VUXFRTY();} 
}}

inline bool __stdcall operator!=(const CString& s1, const CString& s2)
    {__VUFNINFO__("operator !=","bool",725); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s1.Compare(s2) != 0);VUXFRTY();}} }
inline bool __stdcall operator!=(const CString& s1, const char* s2)
    {__VUFNINFO__("operator !=","bool",726); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s1.Compare(s2) != 0);VUXFRTY();}} }
inline bool __stdcall operator!=(const char* s1, const CString& s2)
    {__VUFNINFO__("operator !=","bool",727); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s2.Compare(s1) != 0);VUXFRTY();}} }

inline bool __stdcall operator<(const CString& s1, const CString& s2)
    {__VUFNINFO__("operator <","bool",728); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= s1.Compare(s2) < 0;VUXFRTY();}} }
inline bool __stdcall operator<(const CString& s1, const char* s2)
    {__VUFNINFO__("operator <","bool",729); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= s1.Compare(s2) < 0;VUXFRTY();}} }
inline bool __stdcall operator<(const char* s1, const CString& s2)
    {__VUFNINFO__("operator <","bool",730); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= s2.Compare(s1) > 0;VUXFRTY();}} }
inline bool __stdcall operator>(const CString& s1, const CString& s2)
    {__VUFNINFO__("operator >","bool",731); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= s1.Compare(s2) > 0;VUXFRTY();}} }
inline bool __stdcall operator>(const CString& s1, const char* s2)
    {__VUFNINFO__("operator >","bool",732); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= s1.Compare(s2) > 0;VUXFRTY();}} }
inline bool __stdcall operator>(const char* s1, const CString& s2)
    {__VUFNINFO__("operator >","bool",733); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= s2.Compare(s1) < 0;VUXFRTY();}} }
inline bool __stdcall operator<=(const CString& s1, const CString& s2)
    {__VUFNINFO__("operator <=","bool",734); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s1.Compare(s2) <= 0);VUXFRTY();}} }
inline bool __stdcall operator<=(const CString& s1, const char* s2)
    {__VUFNINFO__("operator <=","bool",735); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s1.Compare(s2) <= 0);VUXFRTY();}} }
inline bool __stdcall operator<=(const char* s1, const CString& s2)
    {__VUFNINFO__("operator <=","bool",736); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s2.Compare(s1) >= 0);VUXFRTY();}} }
inline bool __stdcall operator>=(const CString& s1, const CString& s2)
    {__VUFNINFO__("operator >=","bool",737); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s1.Compare(s2) >= 0);VUXFRTY();}} }
inline bool __stdcall operator>=(const CString& s1, const char* s2)
    {__VUFNINFO__("operator >=","bool",738); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s1.Compare(s2) >= 0);VUXFRTY();}} }
inline bool __stdcall operator>=(const char* s1, const CString& s2)
    {__VUFNINFO__("operator >=","bool",739); VuxDbgBrkO() 
{ VUXRS(1); {bool __vurtv__= ( s2.Compare(s1) <= 0);VUXFRTY();}} }


#define RETURN_DOUBLE(L) if(tlen <= L) return L*2

inline char * __cdecl strinc(const char* str)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"char*","str",(const void*)&str}}; if(VuxMck("strinc",&vmckrt,vmckds,1,"",1021,1,1)) return *(char**)vmckrt;{__VUFNINFO__("strinc","char*",1021); VuxDbgBrkO() 
{
 VUXRS(1);    {char* __vurtv__= (char*)++str;VUXFRTY();}
}}}

inline int __cdecl _isdigit(int ch)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","ch",(const void*)&ch}}; if(VuxMck("_isdigit",&vmckrt,vmckds,1,"",740,1,1)) return *(int*)vmckrt;{__VUFNINFO__("_isdigit","int",740); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= ( (ch >= '0' && ch <= '9'));VUXFRTY();}
}}}

inline int __cdecl _iswspace(wint_t ch)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"wint_t","ch",(const void*)&ch}}; if(VuxMck("_iswspace",&vmckrt,vmckds,1,"",1022,1,1)) return *(int*)vmckrt;{__VUFNINFO__("_iswspace","int",1022); VuxDbgBrkO() 
{
 VUXRS(1);    {int __vurtv__= ( (ch == 0x9 || ch == 0x0D || ch == 0x20));VUXFRTY();}
}}}

inline int CString::GetSize(int len)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","len",(const void*)&len}}; if(VuxMckM("GetSize",&vmckrt,vmckds,1,"CString",742,24,1)) return *(int*)vmckrt;{__VUFNINFO__("GetSize","int",742); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(mLength == 0))
    {{ VUXRS(2); {int __vurtv__= len+1;VUXFRTY();}
    }} //第一次不加多余空间

 VUXRSVB(3,1);    int tlen = mLength + len; VUXLV("int",tlen,1);
    if( VUXRS(4)&&(tlen <= 4))
    {{ VUXRS(5); {int __vurtv__= 4*2;VUXFRTY();}
    }}
    else if( VUXRS(6)&&(tlen <= 8))
    {{ VUXRS(7); {int __vurtv__= 8*2;VUXFRTY();}
    }}
    else if( VUXRS(8)&&(tlen <= 16))
    {{ VUXRS(9); {int __vurtv__= 16*2;VUXFRTY();}
    }}
    else if( VUXRS(10)&&(tlen <= 32))
    {{ VUXRS(11); {int __vurtv__= 32*2;VUXFRTY();}
    }}
    else if( VUXRS(12)&&(tlen <= 64))
    {{ VUXRS(13); {int __vurtv__= 64*2;VUXFRTY();}
    }}
    else if( VUXRS(14)&&(tlen <= 128))
    {{ VUXRS(15); {int __vurtv__= 128*2;VUXFRTY();}
    }}
    else if( VUXRS(16)&&(tlen <= 256))
    {{ VUXRS(17); {int __vurtv__= 256*2;VUXFRTY();}
    }}
    else if( VUXRS(18)&&(tlen <= 512))
    {{ VUXRS(19);  {int __vurtv__= 512 +  128;VUXFRTY();}
    }}
    else if( VUXRS(20)&&(tlen <= 1024))
    {{ VUXRS(21); {int __vurtv__= 1024 + 256;VUXFRTY();}
    }}
    else if( VUXRS(22)&&(tlen <= 2048))
    {{ VUXRS(23); {int __vurtv__= 2048 + 512;VUXFRTY();}
    }}
    else
    {{ VUXRS(24); {int __vurtv__= tlen + 1024;VUXFRTY();}
    }}
}}}

inline void CString::Init(const char* lpsz)
{VMCKDS vmckds[1]={{1,"char*","lpsz",(const void*)&lpsz}}; if(!VuxMckM("Init",0,vmckds,1,"CString",743,15,1)) {__VUFNID__(743); VuxDbgBrkO() 
{
 VUXRS(1);    mpData = 0;
 VUXRS(2);    mLength = 0;
 VUXRS(3);    mSize = 0;
    if( VUXRS(4)&&(lpsz == 0))
    {{ VUXRS(5); VUXFRTN();
    }}

 VUXRSVB(6,1);    int len = strlen(lpsz); VUXLV("int",len,1);
    if( VUXRS(7)&&(len == 0))
    {{ VUXRS(8); VUXFRTN();
    }}

 VUXRS(9);    mSize = GetSize(len);  
 VUXRS(10);    mLength = len;
 VUXRS(11);    mpData = (char*)::malloc(mSize);
 VUXRSVB(12,2);    char* ptr = mpData; VUXLV("char*",ptr,2);
    while( VUXRS(13)&&(*lpsz))
    {VUXRBR_LOOP2(3,6,1);{ VUXRS(14); *ptr++ = *lpsz++;
    }} 
 VUXRS(15);    *ptr = '\0';
}VUXFRTNE();}}

inline void CString::Initc(char chr)
{VMCKDS vmckds[1]={{1,"char","chr",(const void*)&chr}}; if(!VuxMckM("Initc",0,vmckds,1,"CString",744,5,1)) {__VUFNID__(744); VuxDbgBrkO() 
{
 VUXRS(1);    mLength = sizeof(char);
 VUXRS(2);    mSize = GetSize(mLength); 
 VUXRS(3);    mpData = (char*)::malloc(mSize);
 VUXRS(4);    mpData[0] = chr;
 VUXRS(5);    mpData[1] = '\0';
}VUXFRTNE();}}

inline void CString::Free()
{if(!VuxMckM("Free",0,0,0,"CString",745,5,1)) {__VUFNID__(745); VuxDbgBrkO() 
{
    if( VUXRS(1)&&(mpData != 0))
    {{ VUXRS(2); ::free(mpData);
    }}
 VUXRS(3);    mpData = 0;
 VUXRS(4);    mLength = 0;
 VUXRS(5);    mSize = 0;
}VUXFRTNE();}}

inline CString::CString()
{__VUFNID__(746); VuxDbgBrkO() 
{
 VUXRS(1);    Init(0);
}VUXFRTNE();}

inline CString::CString(const char* lpsz)
{__VUFNID__(747); VuxDbgBrkO() 
{
 VUXRS(1);    Init(lpsz);
}VUXFRTNE();}

inline CString::CString(const unsigned char* lpsz)
{__VUFNID__(748); VuxDbgBrkO() 
{
 VUXRS(1);    Init((const char*)lpsz);
}VUXFRTNE();}

inline CString::CString(const CString& stringSrc)
{__VUFNID__(749); VuxDbgBrkO() 
{
 VUXRS(1);    Init((const char*)stringSrc);
}VUXFRTNE();}

inline CString::CString(char chr)
{__VUFNID__(750); VuxDbgBrkO() 
{
 VUXRS(1);    Initc(chr);
}VUXFRTNE();}

inline CString::CString(unsigned char chr)
{__VUFNID__(751); VuxDbgBrkO() 
{
 VUXRS(1);    Initc((char)chr);
}VUXFRTNE();}


#endif // __AFX_H__

/////////////////////////////////////////////////////////////////////////////
