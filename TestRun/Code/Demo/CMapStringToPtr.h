
//Code/Demo/CMapStringToPtr.h



#ifndef __CMAPSTRINGTOPTR_H__
#define __CMAPSTRINGTOPTR_H__

#include "CString.h"

class CMapStringToPtr 
{
public:

public:

    struct CAssoc
    {
        CAssoc* pNext;
        UINT nHashValue;  
        CString key;
        void* value;
    };

public:
    CMapStringToPtr();

    int GetCount() const {void* vmckrt=0; if(VuxMckM("GetCount",&vmckrt,0,0,"CMapStringToPtr",787,1,9)) return *(int*)vmckrt;{__VUFNINFO__("GetCount","int",787); VuxDbgBrkO() { VUXRS(1);{int __vurtv__= m_nCount;VUXFRTY();}}}};
    BOOL IsEmpty() const {void* vmckrt=0; if(VuxMckM("IsEmpty",&vmckrt,0,0,"CMapStringToPtr",788,1,9)) return *(BOOL*)vmckrt;{__VUFNINFO__("IsEmpty","BOOL",788); VuxDbgBrkO() { VUXRS(1);{BOOL __vurtv__= ( m_nCount == 0);VUXFRTY();}}}};

    BOOL Lookup(LPCTSTR key, void*& rValue) const;
    BOOL LookupKey(LPCTSTR key, LPCTSTR& rKey) const;
    void* Search(LPCTSTR iKey);

    void*& operator[](LPCTSTR key);
    void* SetAt(LPCTSTR key, void* newValue);

     void* RemoveKey(LPCTSTR key);
    void RemoveAll();

    POSITION GetStartPosition() const {void* vmckrt=0; if(VuxMckM("GetStartPosition",&vmckrt,0,0,"CMapStringToPtr",796,1,9)) return *(POSITION*)vmckrt;{__VUFNINFO__("GetStartPosition","POSITION",796); VuxDbgBrkO() { {POSITION __vurtv__= ( ( VUXRS(1)&&(m_nCount == 0)) ? ( 0) : ( ((POSITION)-1L)));VUXFRTY();}} }};
    void GetNextAssoc(POSITION& rNextPosition, void*& rValue, CString* pKey=NULL) const;
    void GetNextAssoc(POSITION& rNextPosition, CString& key, void*& rValue) const;

    UINT GetHashTableSize() const;
    void InitHashTable(UINT hashSize, BOOL bAllocNow = TRUE);


    UINT HashKey(LPCTSTR key) const;

public:
    void Grow();
    CAssoc* GetNextAssoc(POSITION& rNextPosition) const;
    CAssoc* GetAssocAt(LPCTSTR, UINT&) const;

public:
    CAssoc** m_pHashTable;
    UINT m_nHashTableSize;
    int m_nCount;

public:
    ~CMapStringToPtr();

public:

    BOOL Lookup_vpls(LPCTSTR key,void*& rValue) const;
    BOOL Lookup_vpls_(LPCTSTR key,void*& rValue) const;
    BOOL LookupKey_vpls(LPCTSTR key,LPCTSTR& rKey) const;
    BOOL LookupKey_vpls_(LPCTSTR key,LPCTSTR& rKey) const;
    void* Search_vpls(LPCTSTR iKey);
    void* Search_vpls_(LPCTSTR iKey);
    void*& operator329193_vpls(LPCTSTR key);
    void*& operator329193_vpls_(LPCTSTR key);
    void* SetAt_vpls(LPCTSTR key,void* newValue);
    void* SetAt_vpls_(LPCTSTR key,void* newValue);
    void* RemoveKey_vpls(LPCTSTR key);
    void* RemoveKey_vpls_(LPCTSTR key);
    void RemoveAll_vpls();
    void RemoveAll_vpls_();
    void GetNextAssoc_vpls(POSITION& rNextPosition,void*& rValue,CString* pKey=0) const;
    void GetNextAssoc_vpls_(POSITION& rNextPosition,void*& rValue,CString* pKey=0) const;
    void GetNextAssoc_vpls(POSITION& rNextPosition,CString& key,void*& rValue) const;
    void GetNextAssoc_vpls_(POSITION& rNextPosition,CString& key,void*& rValue) const;
    UINT GetHashTableSize_vpls() const;
    UINT GetHashTableSize_vpls_() const;
    void InitHashTable_vpls(UINT hashSize,BOOL bAllocNow= 1);
    void InitHashTable_vpls_(UINT hashSize,BOOL bAllocNow= 1);
    UINT HashKey_vpls(LPCTSTR key) const;
    UINT HashKey_vpls_(LPCTSTR key) const;
    void Grow_vpls();
    void Grow_vpls_();
    CAssoc* GetNextAssoc_vpls(POSITION& rNextPosition) const;
    CAssoc* GetNextAssoc_vpls_(POSITION& rNextPosition) const;
    CAssoc* GetAssocAt_vpls(LPCTSTR arg_1,UINT& arg_2) const;
    CAssoc* GetAssocAt_vpls_(LPCTSTR arg_1,UINT& arg_2) const;
};

inline void* CMapStringToPtr::Search(LPCTSTR iKey) 
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"LPCTSTR","iKey",(const void*)&iKey}}; if(VuxMckM("Search",&vmckrt,vmckds,1,"CMapStringToPtr",1025,3,1)) return *(void**)vmckrt;{__VUFNINFO__("Search","void*",1025); VuxDbgBrkO()  
{
 VUXRSVB(1,1);    void* ptr=0; VUXLV("void*",ptr,1); 
 VUXRS(2);    Lookup(iKey, (void*&)ptr);
 VUXRS(3);    {void* __vurtv__= ptr;VUXFRTY();}
}}};


inline UINT CMapStringToPtr::HashKey(LPCTSTR key) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"LPCTSTR","key",(const void*)&key}}; if(VuxMckM("HashKey",&vmckrt,vmckds,1,"CMapStringToPtr",1032,4,1)) return *(UINT*)vmckrt;{__VUFNINFO__("HashKey","UINT",1032); VuxDbgBrkO() 
{
 VUXRSVB(1,1);    UINT nHash = 0; VUXLV("UINT",nHash,1);
    while ( VUXRS(2)&&(*key))
    {VUXRBR_LOOP2(1,2,7);{
 VUXRS(3);        nHash = (nHash<<5) + nHash + *key++;
    }}
 VUXRS(4);    {UINT __vurtv__= nHash;VUXFRTY();}
}}}

inline void CMapStringToPtr::InitHashTable(
    UINT nHashSize, BOOL bAllocNow)
{VMCKDS vmckds[2]={{1,"UINT","nHashSize",(const void*)&nHashSize},{2,"BOOL","bAllocNow",(const void*)&bAllocNow}}; if(!VuxMckM("InitHashTable",0,vmckds,2,"CMapStringToPtr",1031,9,1)) {__VUFNID__(1031); VuxDbgBrkO() 
{
    ; VUXRS(1);
    ; VUXRS(2);

    if ( VUXRS(3)&&(m_pHashTable != 0))
    {{
 VUXRS(4);        delete[] m_pHashTable;
 VUXRS(5);        m_pHashTable = 0;
    }}

    if ( VUXRS(6)&&(bAllocNow))
    {{
 VUXRS(7);        m_pHashTable = new CAssoc* [nHashSize];
 VUXRS(8);        memset(m_pHashTable, 0, sizeof(CAssoc*) * nHashSize);
    }}
 VUXRS(9);    m_nHashTableSize = nHashSize;
}VUXFRTNE();}}

inline void CMapStringToPtr::RemoveAll()
{if(!VuxMckM("RemoveAll",0,0,0,"CMapStringToPtr",795,14,1)) {__VUFNID__(795); VuxDbgBrkO() 
{
    ; VUXRS(1);

    if ( VUXRS(2)&&(m_pHashTable != 0))
    {{ VUXRS(3);
        for (UINT nHash = 0; VUXRS(5)&&( nHash < m_nHashTableSize); VUXRS(4), nHash++)
        {VUXRBR_LOOP2(2,3,11);{
 VUXRSVB(6,1);            CAssoc* pAssoc; VUXLV("CAssoc*",pAssoc,1); VUXRS(7);
            for (pAssoc = m_pHashTable[nHash]; VUXRS(8)&&( pAssoc != 0);)
            {VUXRBR_LOOP2(3,5,12);{
 VUXRSVB(9,2);                CAssoc* pNext = pAssoc->pNext; VUXLV("CAssoc*",pNext,2);
 VUXRS(10);                delete pAssoc;
 VUXRS(11);                pAssoc = pNext;
            }}
        }}
 VUXRS(12);        delete [] m_pHashTable;
 VUXRS(13);        m_pHashTable = 0;
    }}

 VUXRS(14);    m_nCount = 0;
}VUXFRTNE();}}

inline CMapStringToPtr::~CMapStringToPtr()
{__VUFNID__(805); VuxDbgBrkO() 
{
 VUXRS(1);    RemoveAll();
    ; VUXRS(2);
}VUXFRTNE();}

/////////////////////////////////////////////////////////////////////////////
// Assoc helpers
// same as VList implementation except we store CAssoc's not CNode's
//    and CAssoc's are singly linked all the time


inline CMapStringToPtr::CAssoc*
CMapStringToPtr::GetAssocAt(LPCTSTR key, UINT& nHash) const
// find association (or return NULL)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"LPCTSTR","key",(const void*)&key},{2,"UINT","nHash",(const void*)&nHash}}; if(VuxMckM("GetAssocAt",&vmckrt,vmckds,2,"CMapStringToPtr",1034,10,1)) return *(CMapStringToPtr::CAssoc**)vmckrt;{__VUFNINFO__("GetAssocAt","CMapStringToPtr::CAssoc*",1034); VuxDbgBrkO() 
// find association (or return NULL)
{
 VUXRS(1);    nHash = HashKey(key) % m_nHashTableSize;

    if ( VUXRS(2)&&(m_pHashTable == 0))
    {{
 VUXRS(3);        {CMapStringToPtr::CAssoc* __vurtv__= 0;VUXFRTY();}
    }}
    // see if it exists
 VUXRSVB(4,1);    CAssoc* pAssoc; VUXLV("CAssoc*",pAssoc,1); VUXRS(5);
    for (pAssoc = m_pHashTable[nHash]; VUXRS(7)&&( pAssoc != 0); VUXRS(6), pAssoc = pAssoc->pNext)
    {VUXRBR_LOOP2(2,4,10);{
        if ( VUXRS(8)&&(pAssoc->key == key))
        {{
 VUXRS(9);            {CMapStringToPtr::CAssoc* __vurtv__= pAssoc;VUXFRTY();}
        }}
    }}
 VUXRS(10);    {CMapStringToPtr::CAssoc* __vurtv__= 0;VUXFRTY();}
}}}

/////////////////////////////////////////////////////////////////////////////

inline BOOL CMapStringToPtr::Lookup(LPCTSTR key, void*& rValue) const
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"LPCTSTR","key",(const void*)&key},{2,"void*","rValue",(const void*)&rValue}}; if(VuxMckM("Lookup",&vmckrt,vmckds,2,"CMapStringToPtr",1023,10,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("Lookup","BOOL",1023); VuxDbgBrkO() 
{
    ; VUXRS(1);

    if( VUXRS(2)&&(key == 0) || VUXRS(3)&&( strlen(key) == 0))
    {{
 VUXRS(4);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}

 VUXRSVB(5,1);    UINT nHash; VUXLV("UINT",nHash,1);
 VUXRSVB(6,2);    CAssoc* pAssoc = GetAssocAt(key, nHash); VUXLV("CAssoc*",pAssoc,2);
    if ( VUXRS(7)&&(pAssoc == 0))
    {{
 VUXRS(8);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}  // not in map

 VUXRS(9);    rValue = pAssoc->value;
 VUXRS(10);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

inline BOOL CMapStringToPtr::LookupKey(LPCTSTR key, LPCTSTR& rKey) const
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"LPCTSTR","key",(const void*)&key},{2,"LPCTSTR","rKey",(const void*)&rKey}}; if(VuxMckM("LookupKey",&vmckrt,vmckds,2,"CMapStringToPtr",1024,7,1)) return *(BOOL*)vmckrt;{__VUFNINFO__("LookupKey","BOOL",1024); VuxDbgBrkO() 
{
    ; VUXRS(1);

 VUXRSVB(2,1);    UINT nHash; VUXLV("UINT",nHash,1);
 VUXRSVB(3,2);    CAssoc* pAssoc = GetAssocAt(key, nHash); VUXLV("CAssoc*",pAssoc,2);
    if ( VUXRS(4)&&(pAssoc == 0))
    {{
 VUXRS(5);        {BOOL __vurtv__= 0;VUXFRTY();}
    }}  // not in map

 VUXRS(6);    rKey = pAssoc->key;
 VUXRS(7);    {BOOL __vurtv__= 1;VUXFRTY();}
}}}

inline void*& CMapStringToPtr::operator[](LPCTSTR key)
{__VUFNINFO__("operator []","void*&",1026); VuxDbgBrkO() 
{
    ; VUXRS(1);

 VUXRSVB(2,1);    UINT nHash; VUXLV("UINT",nHash,1);
 VUXRSVB(3,2);    CAssoc* pAssoc; VUXLV("CAssoc*",pAssoc,2);
    if ( VUXRS(4)&&((pAssoc = GetAssocAt(key, nHash)) == 0))
    {{
        if ( VUXRS(5)&&(m_pHashTable == 0))
        {{
 VUXRS(6);            InitHashTable(m_nHashTableSize);
        }}

        // it doesn't exist, add a new Association
 VUXRS(7);        pAssoc = new CAssoc;//NewAssoc();
 VUXRS(8);        pAssoc->nHashValue = nHash;
 VUXRS(9);        pAssoc->key = key;
        // 'pAssoc->value' is a constructed object, nothing more
        // put into hash table
 VUXRS(10);        pAssoc->pNext = m_pHashTable[nHash];
 VUXRS(11);        m_pHashTable[nHash] = pAssoc;
 VUXRS(12);        m_nCount++;
    }}

    if( VUXRS(13)&&(m_nCount >= (int)m_nHashTableSize))
    {{
 VUXRS(14);        Grow();
    }}
 VUXRS(15);    {void*& __vurtv__= pAssoc->value;VUXFRTY();}  // return new reference
}}

inline void* CMapStringToPtr::SetAt(LPCTSTR key, void* newValue)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"LPCTSTR","key",(const void*)&key},{2,"void*","newValue",(const void*)&newValue}}; if(VuxMckM("SetAt",&vmckrt,vmckds,2,"CMapStringToPtr",1027,19,1)) return *(void**)vmckrt;{__VUFNINFO__("SetAt","void*",1027); VuxDbgBrkO() 
{
    ; VUXRS(1);

 VUXRSVB(2,1);    void* pOldValue = 0; VUXLV("void*",pOldValue,1);
 VUXRSVB(3,2);    UINT nHash; VUXLV("UINT",nHash,2);
 VUXRSVB(4,3);    CAssoc* pAssoc; VUXLV("CAssoc*",pAssoc,3);
    if ( VUXRS(5)&&((pAssoc = GetAssocAt(key, nHash)) == 0))
    {{
        if ( VUXRS(6)&&(m_pHashTable == 0))
        {{
 VUXRS(7);            InitHashTable(m_nHashTableSize);
        }}

        // it doesn't exist, add a new Association
 VUXRS(8);        pAssoc = new CAssoc;
 VUXRS(9);        pAssoc->nHashValue = nHash;
 VUXRS(10);        pAssoc->key = key;

        // put into hash table
 VUXRS(11);        pAssoc->pNext = m_pHashTable[nHash];
 VUXRS(12);        m_pHashTable[nHash] = pAssoc;
 VUXRS(13);        m_nCount++;
    }}
    else
    {{
 VUXRS(14);        pOldValue = pAssoc->value;
    }}

    //新值覆盖旧值
    ; VUXRS(15);
 VUXRS(16);    pAssoc->value = newValue;

    if( VUXRS(17)&&(m_nCount >= (int)m_nHashTableSize))
    {{
 VUXRS(18);        Grow();
    }}

 VUXRS(19);    {void* __vurtv__= pOldValue;VUXFRTY();}
}}}

inline void CMapStringToPtr::Grow()
{if(!VuxMckM("Grow",0,0,0,"CMapStringToPtr",802,20,1)) {__VUFNID__(802); VuxDbgBrkO() 
{ 
 VUXRSVB(1,1);    CAssoc** pOldTable = m_pHashTable; VUXLV("CAssoc**",pOldTable,1);
 VUXRSVB(2,2);    UINT oldSize = m_nHashTableSize; VUXLV("UINT",oldSize,2);
 VUXRS(3);    m_pHashTable = 0;
 VUXRSVB(4,3);    UINT count = m_nCount; VUXLV("UINT",count,3);
 VUXRS(5);    m_nCount = 0;

 VUXRSVB(6,4);    unsigned int nNewSize = oldSize * 2 + 1; VUXLV("unsigned int",nNewSize,4);
 VUXRS(7);    InitHashTable(nNewSize); VUXRS(8);

    for(UINT i=0; VUXRS(10)&&( i<oldSize); VUXRS(9), i++)
    {VUXRBR_LOOP2(1,2,13);{
 VUXRSVB(11,5);        CAssoc* pAssoc = pOldTable[i]; VUXLV("CAssoc*",pAssoc,5);
        while ( VUXRS(12)&&(pAssoc != 0))
        {VUXRBR_LOOP2(2,4,14);{
 VUXRSVB(13,6);            CAssoc* pNew = pAssoc; VUXLV("CAssoc*",pNew,6);
 VUXRS(14);            pAssoc = pAssoc->pNext;
 VUXRSVB(15,7);            UINT nHash = HashKey(pNew->key) % m_nHashTableSize; VUXLV("UINT",nHash,7);
 VUXRS(16);            pNew->nHashValue = nHash;
 VUXRS(17);            pNew->pNext = m_pHashTable[nHash];
 VUXRS(18);            m_pHashTable[nHash] = pNew;
        }}
    }}

 VUXRS(19);    m_nCount = count;
 VUXRS(20);    delete [] pOldTable;
}VUXFRTNE();}}

inline void* CMapStringToPtr::RemoveKey(LPCTSTR key)
// remove key - return TRUE if removed
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"LPCTSTR","key",(const void*)&key}}; if(VuxMckM("RemoveKey",&vmckrt,vmckds,1,"CMapStringToPtr",1028,21,1)) return *(void**)vmckrt;{__VUFNINFO__("RemoveKey","void*",1028); VuxDbgBrkO() 
// remove key - return TRUE if removed
{
    ; VUXRS(1);

    if ( VUXRS(2)&&(m_pHashTable == 0))
    {{
 VUXRS(3);        {void* __vurtv__= 0;VUXFRTY();}
    }}  // nothing in the table

 VUXRSVB(4,1);    void* pOldValue = 0; VUXLV("void*",pOldValue,1);
 VUXRSVB(5,2);    UINT nHash = HashKey(key) % m_nHashTableSize; VUXLV("UINT",nHash,2);
 VUXRSVB(6,3);    CAssoc* pAssoc = m_pHashTable[nHash]; VUXLV("CAssoc*",pAssoc,3);
 VUXRSVB(7,4);    CAssoc* pAssocPrev = 0; VUXLV("CAssoc*",pAssocPrev,4);

    while( VUXRS(8)&&(pAssoc != 0))
    {VUXRBR_LOOP2(2,4,2);{
        if( VUXRS(9)&&(pAssoc->key == key))
        {{
            if( VUXRS(10)&&(pAssocPrev != 0))
            {{ //前面有
 VUXRS(11);                pAssocPrev->pNext = pAssoc->pNext;
            }}
            else if( VUXRS(12)&&(pAssoc->pNext != 0))
            {{ //前面没有后面有
 VUXRS(13);                m_pHashTable[nHash] = pAssoc->pNext;
            }}
            else
            {{
 VUXRS(14);                m_pHashTable[nHash] = 0;
            }}

 VUXRS(15);            pOldValue = pAssoc->value;
 VUXRS(16);            delete pAssoc;
 VUXRS(17);            m_nCount--;
 VUXRS(18);            {void* __vurtv__= pOldValue;VUXFRTY();}
        }}
        else
        {{
 VUXRS(19);            pAssocPrev = pAssoc;
 VUXRS(20);            pAssoc = pAssoc->pNext;
        }}
    }}

 VUXRS(21);    {void* __vurtv__= 0;VUXFRTY();}  // not found
}}}


/////////////////////////////////////////////////////////////////////////////
// Iterating

inline void CMapStringToPtr::GetNextAssoc(POSITION& rNextPosition,
    void*& rValue, CString* pKey) const
{VMCKDS vmckds[3]={{1,"POSITION","rNextPosition",(const void*)&rNextPosition},{2,"void*","rValue",(const void*)&rValue},{3,"CString*","pKey",(const void*)&pKey}}; if(!VuxMckM("GetNextAssoc",0,vmckds,3,"CMapStringToPtr",1029,22,1)) {__VUFNID__(1029); VuxDbgBrkO() 
{
    ; VUXRS(1);
    ; VUXRS(2);  // never call on empty map

 VUXRSVB(3,1);    CAssoc* pAssocRet = (CAssoc*)rNextPosition; VUXLV("CAssoc*",pAssocRet,1);
    ; VUXRS(4);

    if ( VUXRS(5)&&(pAssocRet == (CAssoc*) ((POSITION)-1L)))
    {{ VUXRS(6);
        // find the first association
        for (UINT nBucket = 0; VUXRS(8)&&( nBucket < m_nHashTableSize); VUXRS(7), nBucket++)
        {VUXRBR_LOOP2(2,3,3);{
            if ( VUXRS(9)&&((pAssocRet = m_pHashTable[nBucket]) != 0))
            {{
 VUXRS(10);                break;
            }}
        }}
        ; VUXRS(11);  // must find something
    }}

    // find next association
 VUXRSVB(12,2);    CAssoc* pAssocNext; VUXLV("CAssoc*",pAssocNext,2);
    if ( VUXRS(13)&&((pAssocNext = pAssocRet->pNext) == 0))
    {{ VUXRS(14);
        // go to next bucket
        for (UINT nBucket = pAssocRet->nHashValue + 1;
 VUXRS(16)&&(        nBucket < m_nHashTableSize); VUXRS(15), nBucket++)
        {VUXRBR_LOOP2(5,9,4);{
            if ( VUXRS(17)&&((pAssocNext = m_pHashTable[nBucket]) != 0))
            {{
 VUXRS(18);                break;
            }}
        }}
    }}

 VUXRS(19);    rNextPosition = (POSITION) pAssocNext;

    // fill in return data
    if( VUXRS(20)&&(pKey != 0))
    {{ VUXRS(21); *pKey = pAssocRet->key;
    }}
 VUXRS(22);    rValue = pAssocRet->value;
}VUXFRTNE();}}


inline void CMapStringToPtr::GetNextAssoc(POSITION& rNextPosition, CString& key,
    void*& rValue) const
{VMCKDS vmckds[3]={{1,"POSITION","rNextPosition",(const void*)&rNextPosition},{2,"CString","key",(const void*)&key},{3,"void*","rValue",(const void*)&rValue}}; if(!VuxMckM("GetNextAssoc",0,vmckds,3,"CMapStringToPtr",1030,21,1)) {__VUFNID__(1030); VuxDbgBrkO() 
{
    ; VUXRS(1);
    ; VUXRS(2);  // never call on empty map

 VUXRSVB(3,1);    CAssoc* pAssocRet = (CAssoc*)rNextPosition; VUXLV("CAssoc*",pAssocRet,1);
    ; VUXRS(4);

    if ( VUXRS(5)&&(pAssocRet == (CAssoc*) ((POSITION)-1L)))
    {{ VUXRS(6);
        // find the first association
        for (UINT nBucket = 0; VUXRS(8)&&( nBucket < m_nHashTableSize); VUXRS(7), nBucket++)
        {VUXRBR_LOOP2(2,3,5);{
            if ( VUXRS(9)&&((pAssocRet = m_pHashTable[nBucket]) != 0))
            {{
 VUXRS(10);                break;
            }}
        }}
        ; VUXRS(11);  // must find something
    }}

    // find next association
 VUXRSVB(12,2);    CAssoc* pAssocNext; VUXLV("CAssoc*",pAssocNext,2);
    if ( VUXRS(13)&&((pAssocNext = pAssocRet->pNext) == 0))
    {{ VUXRS(14);
        // go to next bucket
        for (UINT nBucket = pAssocRet->nHashValue + 1;
 VUXRS(16)&&(        nBucket < m_nHashTableSize); VUXRS(15), nBucket++)
        {VUXRBR_LOOP2(5,9,6);{
            if ( VUXRS(17)&&((pAssocNext = m_pHashTable[nBucket]) != 0))
            {{
 VUXRS(18);                break;
            }}
        }}
    }}

 VUXRS(19);    rNextPosition = (POSITION) pAssocNext;

    // fill in return data
 VUXRS(20);    key = pAssocRet->key;
 VUXRS(21);    rValue = pAssocRet->value;
}VUXFRTNE();}}


inline CMapStringToPtr::CAssoc* CMapStringToPtr::GetNextAssoc(POSITION& rNextPosition) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"POSITION","rNextPosition",(const void*)&rNextPosition}}; if(VuxMckM("GetNextAssoc",&vmckrt,vmckds,1,"CMapStringToPtr",1033,20,1)) return *(CMapStringToPtr::CAssoc**)vmckrt;{__VUFNINFO__("GetNextAssoc","CMapStringToPtr::CAssoc*",1033); VuxDbgBrkO() 
{
    ; VUXRS(1);
    ; VUXRS(2);  // never call on empty map

 VUXRSVB(3,1);    CAssoc* pAssocRet = (CAssoc*)rNextPosition; VUXLV("CAssoc*",pAssocRet,1);
    ; VUXRS(4);

    if ( VUXRS(5)&&(pAssocRet == (CAssoc*) ((POSITION)-1L)))
    {{ VUXRS(6);
        // find the first association
        for (UINT nBucket = 0; VUXRS(8)&&( nBucket < m_nHashTableSize); VUXRS(7), nBucket++)
        {VUXRBR_LOOP2(2,3,8);{
            if ( VUXRS(9)&&((pAssocRet = m_pHashTable[nBucket]) != 0))
            {{
 VUXRS(10);                break;
            }}
        }}
        ; VUXRS(11);  // must find something
    }}

    // find next association
 VUXRSVB(12,2);    CAssoc* pAssocNext; VUXLV("CAssoc*",pAssocNext,2);
    if ( VUXRS(13)&&((pAssocNext = pAssocRet->pNext) == 0))
    {{ VUXRS(14);
        // go to next bucket
        for (UINT nBucket = pAssocRet->nHashValue + 1;
 VUXRS(16)&&(        nBucket < m_nHashTableSize); VUXRS(15), nBucket++)
        {VUXRBR_LOOP2(5,9,9);{
            if ( VUXRS(17)&&((pAssocNext = m_pHashTable[nBucket]) != 0))
            {{
 VUXRS(18);                break;
            }}
        }}
    }}

 VUXRS(19);    rNextPosition = (POSITION) pAssocNext;

    // fill in return data
 VUXRS(20);    {CMapStringToPtr::CAssoc* __vurtv__= pAssocRet;VUXFRTY();}
}}}


#endif