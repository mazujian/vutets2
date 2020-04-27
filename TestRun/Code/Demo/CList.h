
//Code/Demo/CList.h



/////////////////////////////////////////////////////////////////////////////
// CList<TYPE, ARG_TYPE>

#ifndef __CList_H__
#define __CList_H__

template<class TYPE, class ARG_TYPE>
class CList
{
public:

public:
    struct CNode
    {
        CNode* pNext;
        CNode* pPrev;
        TYPE data;
    };
public:
// Construction
    CList();

// Attributes (head and tail)
    // count of elements
    int GetCount() const;
    BOOL IsEmpty() const;

    // peek at head or tail
    TYPE& GetHead();
    TYPE GetHead() const;
    TYPE& GetTail();
    TYPE GetTail() const;

// Operations
    // get head or tail (and remove it) - don't call on empty list !
    TYPE RemoveHead();
    TYPE RemoveTail();

    // add before head or after tail
    POSITION AddHead(ARG_TYPE newElement);
    POSITION AddTail(ARG_TYPE newElement);

    // add another list of elements before head or after tail
    void AddHead(CList* pNewList);
    void AddTail(CList* pNewList);

    // remove all elements
    void RemoveAll();
    void DeleteAll();
    void CopyFrom(CList<TYPE, ARG_TYPE>& other);

    // iteration
    POSITION GetHeadPosition() const;
    POSITION GetTailPosition() const;
    TYPE& GetNext(POSITION& rPosition); // return *Position++
    TYPE GetNext(POSITION& rPosition) const; // return *Position++
    TYPE& GetPrev(POSITION& rPosition); // return *Position--
    TYPE GetPrev(POSITION& rPosition) const; // return *Position--

    // getting/modifying an element at a given position
    TYPE& GetAt(POSITION position);
    TYPE GetAt(POSITION position) const;
    void SetAt(POSITION pos, ARG_TYPE newElement);
    void RemoveAt(POSITION position);

    // inserting before or after a given position
    POSITION InsertBefore(POSITION position, ARG_TYPE newElement);
    POSITION InsertAfter(POSITION position, ARG_TYPE newElement);

    // helper functions (note: O(n) speed)
    POSITION Find(ARG_TYPE searchValue, POSITION startAfter = NULL) const;
        // defaults to starting at the HEAD, return NULL if not found
    POSITION FindIndex(int nIndex) const;
    TYPE GetByIndex(int nIndex) const;
        // get the 'nIndex'th element (may return NULL)

// Implementation
public:
    CNode* m_pNodeHead;
    CNode* m_pNodeTail;
    int m_nCount;

    CNode* NewNode(CNode* pPrev, CNode* pNext)
    {void* vmckrt=0; VMCKDS vmckds[2]={{1,"CNode*","pPrev",(const void*)&pPrev},{2,"CNode*","pNext",(const void*)&pNext}}; if(VuxMckM("NewNode",&vmckrt,vmckds,2,"CList",-1,1,1)) return *(CNode**)vmckrt;{
        ASSERT(sizeof(TYPE) <= 8);
        CList::CNode* pNode = new CNode;
        pNode->pPrev = pPrev;
        pNode->pNext = pNext;
        m_nCount++;
        ASSERT(m_nCount > 0);  // make sure we don't overflow
        return pNode;
    }}
    
    void FreeNode(CNode* pNode)
    {VMCKDS vmckds[1]={{1,"CNode*","pNode",(const void*)&pNode}}; if(!VuxMckM("FreeNode",0,vmckds,1,"CList",-1,1,1)) {
        delete pNode;
        m_nCount--;
        // if no more elements, cleanup completely
        if (m_nCount == 0)
            RemoveAll();
    }}


public:
    ~CList();

public:

    int GetCount_vpls() const;
    int GetCount_vpls_() const;
    BOOL IsEmpty_vpls() const;
    BOOL IsEmpty_vpls_() const;
    TYPE& GetHead_vpls();
    TYPE& GetHead_vpls_();
    TYPE GetHead_vpls() const;
    TYPE GetHead_vpls_() const;
    TYPE& GetTail_vpls();
    TYPE& GetTail_vpls_();
    TYPE GetTail_vpls() const;
    TYPE GetTail_vpls_() const;
    TYPE RemoveHead_vpls();
    TYPE RemoveHead_vpls_();
    TYPE RemoveTail_vpls();
    TYPE RemoveTail_vpls_();
    POSITION AddHead_vpls(ARG_TYPE newElement);
    POSITION AddHead_vpls_(ARG_TYPE newElement);
    POSITION AddTail_vpls(ARG_TYPE newElement);
    POSITION AddTail_vpls_(ARG_TYPE newElement);
    void AddHead_vpls(CList* pNewList);
    void AddHead_vpls_(CList* pNewList);
    void AddTail_vpls(CList* pNewList);
    void AddTail_vpls_(CList* pNewList);
    void RemoveAll_vpls();
    void RemoveAll_vpls_();
    void DeleteAll_vpls();
    void DeleteAll_vpls_();
    void CopyFrom_vpls(CList<TYPE,ARG_TYPE>& other);
    void CopyFrom_vpls_(CList<TYPE,ARG_TYPE>& other);
    POSITION GetHeadPosition_vpls() const;
    POSITION GetHeadPosition_vpls_() const;
    POSITION GetTailPosition_vpls() const;
    POSITION GetTailPosition_vpls_() const;
    TYPE& GetNext_vpls(POSITION& rPosition);
    TYPE& GetNext_vpls_(POSITION& rPosition);
    TYPE GetNext_vpls(POSITION& rPosition) const;
    TYPE GetNext_vpls_(POSITION& rPosition) const;
    TYPE& GetPrev_vpls(POSITION& rPosition);
    TYPE& GetPrev_vpls_(POSITION& rPosition);
    TYPE GetPrev_vpls(POSITION& rPosition) const;
    TYPE GetPrev_vpls_(POSITION& rPosition) const;
    TYPE& GetAt_vpls(POSITION position);
    TYPE& GetAt_vpls_(POSITION position);
    TYPE GetAt_vpls(POSITION position) const;
    TYPE GetAt_vpls_(POSITION position) const;
    void SetAt_vpls(POSITION pos,ARG_TYPE newElement);
    void SetAt_vpls_(POSITION pos,ARG_TYPE newElement);
    void RemoveAt_vpls(POSITION position);
    void RemoveAt_vpls_(POSITION position);
    POSITION InsertBefore_vpls(POSITION position,ARG_TYPE newElement);
    POSITION InsertBefore_vpls_(POSITION position,ARG_TYPE newElement);
    POSITION InsertAfter_vpls(POSITION position,ARG_TYPE newElement);
    POSITION InsertAfter_vpls_(POSITION position,ARG_TYPE newElement);
    POSITION Find_vpls(ARG_TYPE searchValue,POSITION startAfter= 0) const;
    POSITION Find_vpls_(ARG_TYPE searchValue,POSITION startAfter= 0) const;
    POSITION FindIndex_vpls(int nIndex) const;
    POSITION FindIndex_vpls_(int nIndex) const;
    TYPE GetByIndex_vpls(int nIndex) const;
    TYPE GetByIndex_vpls_(int nIndex) const;
};


template<class TYPE, class ARG_TYPE>
inline int CList<TYPE, ARG_TYPE>::GetCount() const
    {void* vmckrt=0; if(VuxMckM("GetCount",&vmckrt,0,0,"CList",-1,1,1)) return *(int*)vmckrt;{__VUFNID__(1114); VuxDbgBrkO()  return m_nCount; }}
template<class TYPE, class ARG_TYPE>
inline BOOL CList<TYPE, ARG_TYPE>::IsEmpty() const
    {void* vmckrt=0; if(VuxMckM("IsEmpty",&vmckrt,0,0,"CList",-1,1,1)) return *(BOOL*)vmckrt;{__VUFNID__(1115); VuxDbgBrkO()  return m_nCount == 0; }}
template<class TYPE, class ARG_TYPE>
inline TYPE& CList<TYPE, ARG_TYPE>::GetHead()
    {void* vmckrt=0; if(VuxMckM("GetHead",&vmckrt,0,0,"CList",-1,1,1)) return (TYPE&)(*(TYPE*)vmckrt);{__VUFNID__(1116); VuxDbgBrkO()  ASSERT(m_pNodeHead != NULL);
        return m_pNodeHead->data; }}
template<class TYPE, class ARG_TYPE>
inline TYPE CList<TYPE, ARG_TYPE>::GetHead() const
    {void* vmckrt=0; if(VuxMckM("GetHead",&vmckrt,0,0,"CList",-1,1,1)) return *(TYPE*)vmckrt;{__VUFNID__(1117); VuxDbgBrkO()  ASSERT(m_pNodeHead != NULL);
        return m_pNodeHead->data; }}
template<class TYPE, class ARG_TYPE>
inline TYPE& CList<TYPE, ARG_TYPE>::GetTail()
    {void* vmckrt=0; if(VuxMckM("GetTail",&vmckrt,0,0,"CList",-1,1,1)) return (TYPE&)(*(TYPE*)vmckrt);{__VUFNID__(1118); VuxDbgBrkO()  ASSERT(m_pNodeTail != NULL);
        return m_pNodeTail->data; }}
template<class TYPE, class ARG_TYPE>
inline TYPE CList<TYPE, ARG_TYPE>::GetTail() const
    {void* vmckrt=0; if(VuxMckM("GetTail",&vmckrt,0,0,"CList",-1,1,1)) return *(TYPE*)vmckrt;{__VUFNID__(1119); VuxDbgBrkO()  ASSERT(m_pNodeTail != NULL);
        return m_pNodeTail->data; }}
template<class TYPE, class ARG_TYPE>
inline POSITION CList<TYPE, ARG_TYPE>::GetHeadPosition() const
    {void* vmckrt=0; if(VuxMckM("GetHeadPosition",&vmckrt,0,0,"CList",-1,1,1)) return *(POSITION*)vmckrt;{__VUFNID__(1120); VuxDbgBrkO()  return (POSITION) m_pNodeHead; }}
template<class TYPE, class ARG_TYPE>
inline POSITION CList<TYPE, ARG_TYPE>::GetTailPosition() const
    {void* vmckrt=0; if(VuxMckM("GetTailPosition",&vmckrt,0,0,"CList",-1,1,1)) return *(POSITION*)vmckrt;{__VUFNID__(1121); VuxDbgBrkO()  return (POSITION) m_pNodeTail; }}
template<class TYPE, class ARG_TYPE>
inline TYPE& CList<TYPE, ARG_TYPE>::GetNext(POSITION& rPosition) // return *Position++
    {void* vmckrt=0; VMCKDS vmckds[1]={{1,"POSITION","rPosition",(const void*)&rPosition}}; if(VuxMckM("GetNext",&vmckrt,vmckds,1,"CList",-1,1,1)) return (TYPE&)(*(TYPE*)vmckrt);{__VUFNID__(1122); VuxDbgBrkO()  CNode* pNode = (CNode*) rPosition;
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        rPosition = (POSITION) pNode->pNext;
        return pNode->data; }}
template<class TYPE, class ARG_TYPE>
inline TYPE CList<TYPE, ARG_TYPE>::GetNext(POSITION& rPosition) const // return *Position++
    {void* vmckrt=0; VMCKDS vmckds[1]={{1,"POSITION","rPosition",(const void*)&rPosition}}; if(VuxMckM("GetNext",&vmckrt,vmckds,1,"CList",-1,1,1)) return *(TYPE*)vmckrt;{__VUFNID__(1123); VuxDbgBrkO()  CNode* pNode = (CNode*) rPosition;
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        rPosition = (POSITION) pNode->pNext;
        return pNode->data; }}
template<class TYPE, class ARG_TYPE>
inline TYPE& CList<TYPE, ARG_TYPE>::GetPrev(POSITION& rPosition) // return *Position--
    {void* vmckrt=0; VMCKDS vmckds[1]={{1,"POSITION","rPosition",(const void*)&rPosition}}; if(VuxMckM("GetPrev",&vmckrt,vmckds,1,"CList",-1,1,1)) return (TYPE&)(*(TYPE*)vmckrt);{__VUFNID__(1124); VuxDbgBrkO()  CNode* pNode = (CNode*) rPosition;
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        rPosition = (POSITION) pNode->pPrev;
        return pNode->data; }}
template<class TYPE, class ARG_TYPE>
inline TYPE CList<TYPE, ARG_TYPE>::GetPrev(POSITION& rPosition) const // return *Position--
    {void* vmckrt=0; VMCKDS vmckds[1]={{1,"POSITION","rPosition",(const void*)&rPosition}}; if(VuxMckM("GetPrev",&vmckrt,vmckds,1,"CList",-1,1,1)) return *(TYPE*)vmckrt;{__VUFNID__(1125); VuxDbgBrkO()  CNode* pNode = (CNode*) rPosition;
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        rPosition = (POSITION) pNode->pPrev;
        return pNode->data; }}
template<class TYPE, class ARG_TYPE>
inline TYPE& CList<TYPE, ARG_TYPE>::GetAt(POSITION position)
    {void* vmckrt=0; VMCKDS vmckds[1]={{1,"POSITION","position",(const void*)&position}}; if(VuxMckM("GetAt",&vmckrt,vmckds,1,"CList",-1,1,1)) return (TYPE&)(*(TYPE*)vmckrt);{__VUFNID__(1126); VuxDbgBrkO()  CNode* pNode = (CNode*) position;
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        return pNode->data; }}
template<class TYPE, class ARG_TYPE>
inline TYPE CList<TYPE, ARG_TYPE>::GetAt(POSITION position) const
    {void* vmckrt=0; VMCKDS vmckds[1]={{1,"POSITION","position",(const void*)&position}}; if(VuxMckM("GetAt",&vmckrt,vmckds,1,"CList",-1,1,1)) return *(TYPE*)vmckrt;{__VUFNID__(1127); VuxDbgBrkO()  CNode* pNode = (CNode*) position;
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        return pNode->data; }}
template<class TYPE, class ARG_TYPE>
inline void CList<TYPE, ARG_TYPE>::SetAt(POSITION pos, ARG_TYPE newElement)
    {VMCKDS vmckds[2]={{1,"POSITION","pos",(const void*)&pos},{2,"ARG_TYPE","newElement",(const void*)&newElement}}; if(!VuxMckM("SetAt",0,vmckds,2,"CList",-1,1,1)) {__VUFNID__(1128); VuxDbgBrkO()  CNode* pNode = (CNode*) pos;
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        pNode->data = newElement; }}

template<class TYPE, class ARG_TYPE>
CList<TYPE, ARG_TYPE>::CList()
{
    m_nCount = 0;
    m_pNodeHead = m_pNodeTail = NULL;
}

template<class TYPE, class ARG_TYPE>
void CList<TYPE, ARG_TYPE>::RemoveAll()
{if(!VuxMckM("RemoveAll",0,0,0,"CList",-1,1,1)) {__VUFNID__(1130); VuxDbgBrkO() 
    ASSERT_VALID(this);

    // destroy elements
    CNode* pNode = m_pNodeHead;
    while(pNode != NULL)
    {
        CNode* pNext = pNode->pNext;
        delete pNode;
        pNode = pNext;
    }

    m_nCount = 0;
    m_pNodeHead = m_pNodeTail = NULL;
}}

template<class TYPE, class ARG_TYPE>
void CList<TYPE, ARG_TYPE>::DeleteAll()
{if(!VuxMckM("DeleteAll",0,0,0,"CList",-1,1,1)) {__VUFNID__(1131); VuxDbgBrkO() 
    ASSERT_VALID(this);

    // destroy elements
    CNode* pNode = m_pNodeHead;
    while(pNode != NULL)
    {
        CNode* pNext = pNode->pNext;
        delete pNode->data;
        delete pNode;
        pNode = pNext;
    }

    m_nCount = 0;
    m_pNodeHead = m_pNodeTail = NULL;
}}

template<class TYPE, class ARG_TYPE>
CList<TYPE, ARG_TYPE>::~CList()
{
    RemoveAll();
    ASSERT(m_nCount == 0);
}

template<class TYPE, class ARG_TYPE>
POSITION CList<TYPE, ARG_TYPE>::AddHead(ARG_TYPE newElement)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"ARG_TYPE","newElement",(const void*)&newElement}}; if(VuxMckM("AddHead",&vmckrt,vmckds,1,"CList",-1,1,1)) return *(POSITION*)vmckrt;{__VUFNID__(1133); VuxDbgBrkO() 
    ASSERT_VALID(this);

    CNode* pNewNode = NewNode(NULL, m_pNodeHead);
    pNewNode->data = newElement;
    if (m_pNodeHead != NULL)
        m_pNodeHead->pPrev = pNewNode;
    else
        m_pNodeTail = pNewNode;
    m_pNodeHead = pNewNode;
    return (POSITION) pNewNode;
}}

template<class TYPE, class ARG_TYPE>
POSITION CList<TYPE, ARG_TYPE>::AddTail(ARG_TYPE newElement)
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"ARG_TYPE","newElement",(const void*)&newElement}}; if(VuxMckM("AddTail",&vmckrt,vmckds,1,"CList",-1,1,1)) return *(POSITION*)vmckrt;{__VUFNID__(1134); VuxDbgBrkO() 
    ASSERT_VALID(this);

    CNode* pNewNode = NewNode(m_pNodeTail, NULL);
    pNewNode->data = newElement;
    if (m_pNodeTail != NULL)
        m_pNodeTail->pNext = pNewNode;
    else
        m_pNodeHead = pNewNode;
    m_pNodeTail = pNewNode;
    return (POSITION) pNewNode;
}}

template<class TYPE, class ARG_TYPE>
void CList<TYPE, ARG_TYPE>::AddHead(CList* pNewList)
{VMCKDS vmckds[1]={{1,"CList*","pNewList",(const void*)&pNewList}}; if(!VuxMckM("AddHead",0,vmckds,1,"CList",-1,1,1)) {__VUFNID__(1135); VuxDbgBrkO() 
    ASSERT_VALID(this);

    ASSERT(pNewList != NULL);
    ASSERT_VALID(pNewList);

    // add a list of same elements to head (maintain order)
    POSITION pos = pNewList->GetTailPosition();
    while (pos != NULL)
        AddHead(pNewList->GetPrev(pos));
}}

template<class TYPE, class ARG_TYPE>
void CList<TYPE, ARG_TYPE>::AddTail(CList* pNewList)
{VMCKDS vmckds[1]={{1,"CList*","pNewList",(const void*)&pNewList}}; if(!VuxMckM("AddTail",0,vmckds,1,"CList",-1,1,1)) {__VUFNID__(1136); VuxDbgBrkO() 
    ASSERT_VALID(this);
    ASSERT(pNewList != NULL);
    ASSERT_VALID(pNewList);

    // add a list of same elements
    POSITION pos = pNewList->GetHeadPosition();
    while (pos != NULL)
        AddTail(pNewList->GetNext(pos));
}}

template<class TYPE, class ARG_TYPE>
TYPE CList<TYPE, ARG_TYPE>::RemoveHead()
{void* vmckrt=0; if(VuxMckM("RemoveHead",&vmckrt,0,0,"CList",-1,1,1)) return *(TYPE*)vmckrt;{__VUFNID__(1137); VuxDbgBrkO() 
    ASSERT_VALID(this);
    ASSERT(m_pNodeHead != NULL);  // don't call on empty list !!!
    ASSERT(AfxIsValidAddress(m_pNodeHead, sizeof(CNode)));

    CNode* pOldNode = m_pNodeHead;
    TYPE returnValue = pOldNode->data;

    m_pNodeHead = pOldNode->pNext;
    if (m_pNodeHead != NULL)
        m_pNodeHead->pPrev = NULL;
    else
        m_pNodeTail = NULL;
    FreeNode(pOldNode);
    return returnValue;
}}

template<class TYPE, class ARG_TYPE>
TYPE CList<TYPE, ARG_TYPE>::RemoveTail()
{void* vmckrt=0; if(VuxMckM("RemoveTail",&vmckrt,0,0,"CList",-1,1,1)) return *(TYPE*)vmckrt;{__VUFNID__(1138); VuxDbgBrkO() 
    ASSERT_VALID(this);
    ASSERT(m_pNodeTail != NULL);  // don't call on empty list !!!
    ASSERT(AfxIsValidAddress(m_pNodeTail, sizeof(CNode)));

    CNode* pOldNode = m_pNodeTail;
    TYPE returnValue = pOldNode->data;

    m_pNodeTail = pOldNode->pPrev;
    if (m_pNodeTail != NULL)
        m_pNodeTail->pNext = NULL;
    else
        m_pNodeHead = NULL;
    FreeNode(pOldNode);
    return returnValue;
}}

template<class TYPE, class ARG_TYPE>
POSITION CList<TYPE, ARG_TYPE>::InsertBefore(POSITION position, ARG_TYPE newElement)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"POSITION","position",(const void*)&position},{2,"ARG_TYPE","newElement",(const void*)&newElement}}; if(VuxMckM("InsertBefore",&vmckrt,vmckds,2,"CList",-1,1,1)) return *(POSITION*)vmckrt;{__VUFNID__(1139); VuxDbgBrkO() 
    ASSERT_VALID(this);

    if (position == NULL)
        return AddHead(newElement); // insert before nothing -> head of the list

    // Insert it before position
    CNode* pOldNode = (CNode*) position;
    CNode* pNewNode = NewNode(pOldNode->pPrev, pOldNode);
    pNewNode->data = newElement;

    if (pOldNode->pPrev != NULL)
    {
        ASSERT(AfxIsValidAddress(pOldNode->pPrev, sizeof(CNode)));
        pOldNode->pPrev->pNext = pNewNode;
    }
    else
    {
        ASSERT(pOldNode == m_pNodeHead);
        m_pNodeHead = pNewNode;
    }
    pOldNode->pPrev = pNewNode;
    return (POSITION) pNewNode;
}}

template<class TYPE, class ARG_TYPE>
POSITION CList<TYPE, ARG_TYPE>::InsertAfter(POSITION position, ARG_TYPE newElement)
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"POSITION","position",(const void*)&position},{2,"ARG_TYPE","newElement",(const void*)&newElement}}; if(VuxMckM("InsertAfter",&vmckrt,vmckds,2,"CList",-1,1,1)) return *(POSITION*)vmckrt;{__VUFNID__(1140); VuxDbgBrkO() 
    ASSERT_VALID(this);

    if (position == NULL)
        return AddTail(newElement); // insert after nothing -> tail of the list

    // Insert it before position
    CNode* pOldNode = (CNode*) position;
    ASSERT(AfxIsValidAddress(pOldNode, sizeof(CNode)));
    CNode* pNewNode = NewNode(pOldNode, pOldNode->pNext);
    pNewNode->data = newElement;

    if (pOldNode->pNext != NULL)
    {
        ASSERT(AfxIsValidAddress(pOldNode->pNext, sizeof(CNode)));
        pOldNode->pNext->pPrev = pNewNode;
    }
    else
    {
        ASSERT(pOldNode == m_pNodeTail);
        m_pNodeTail = pNewNode;
    }
    pOldNode->pNext = pNewNode;
    return (POSITION) pNewNode;
}}

template<class TYPE, class ARG_TYPE>
void CList<TYPE, ARG_TYPE>::RemoveAt(POSITION position)
{VMCKDS vmckds[1]={{1,"POSITION","position",(const void*)&position}}; if(!VuxMckM("RemoveAt",0,vmckds,1,"CList",-1,1,1)) {__VUFNID__(1141); VuxDbgBrkO() 
    ASSERT_VALID(this);

    CNode* pOldNode = (CNode*) position;
    ASSERT(AfxIsValidAddress(pOldNode, sizeof(CNode)));

    // remove pOldNode from list
    if (pOldNode == m_pNodeHead)
    {
        m_pNodeHead = pOldNode->pNext;
    }
    else
    {
        ASSERT(AfxIsValidAddress(pOldNode->pPrev, sizeof(CNode)));
        pOldNode->pPrev->pNext = pOldNode->pNext;
    }
    if (pOldNode == m_pNodeTail)
    {
        m_pNodeTail = pOldNode->pPrev;
    }
    else
    {
        ASSERT(AfxIsValidAddress(pOldNode->pNext, sizeof(CNode)));
        pOldNode->pNext->pPrev = pOldNode->pPrev;
    }
    FreeNode(pOldNode);
}}

template<class TYPE, class ARG_TYPE>
POSITION CList<TYPE, ARG_TYPE>::FindIndex(int nIndex) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","nIndex",(const void*)&nIndex}}; if(VuxMckM("FindIndex",&vmckrt,vmckds,1,"CList",-1,1,1)) return *(POSITION*)vmckrt;{__VUFNID__(1142); VuxDbgBrkO() 
    ASSERT_VALID(this);

    if (nIndex >= m_nCount || nIndex < 0)
        return NULL;  // went too far

    CNode* pNode = m_pNodeHead;
    while (nIndex--)
    {
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        pNode = pNode->pNext;
    }
    return (POSITION) pNode;
}}

template<class TYPE, class ARG_TYPE>
TYPE CList<TYPE, ARG_TYPE>::GetByIndex(int nIndex) const
{void* vmckrt=0; VMCKDS vmckds[1]={{1,"int","nIndex",(const void*)&nIndex}}; if(VuxMckM("GetByIndex",&vmckrt,vmckds,1,"CList",-1,1,1)) return *(TYPE*)vmckrt;{__VUFNID__(1143); VuxDbgBrkO() 
    ASSERT_VALID(this);

    POSITION pos = FindIndex(nIndex);
    if(pos != NULL) return GetAt(pos);
    ASSERT(FALSE);
    return NULL;
}}

template<class TYPE, class ARG_TYPE>
POSITION CList<TYPE, ARG_TYPE>::Find(ARG_TYPE searchValue, POSITION startAfter) const
{void* vmckrt=0; VMCKDS vmckds[2]={{1,"ARG_TYPE","searchValue",(const void*)&searchValue},{2,"POSITION","startAfter",(const void*)&startAfter}}; if(VuxMckM("Find",&vmckrt,vmckds,2,"CList",-1,1,1)) return *(POSITION*)vmckrt;{__VUFNID__(1144); VuxDbgBrkO() 
    ASSERT_VALID(this);

    CNode* pNode = (CNode*) startAfter;
    if (pNode == NULL)
    {
        pNode = m_pNodeHead;  // start at head
    }
    else
    {
        ASSERT(AfxIsValidAddress(pNode, sizeof(CNode)));
        pNode = pNode->pNext;  // start after the one specified
    }

    for (; pNode != NULL; pNode = pNode->pNext)
        if (pNode->data == searchValue)
            return (POSITION)pNode;

    return NULL;
}}

template<class TYPE, class ARG_TYPE>
void CList<TYPE, ARG_TYPE>::CopyFrom(CList<TYPE, ARG_TYPE>& other)
{VMCKDS vmckds[1]={{1,"CList<TYPE,ARG_TYPE>","other",(const void*)&other}}; if(!VuxMckM("CopyFrom",0,vmckds,1,"CList",-1,1,1)) {__VUFNID__(1145); VuxDbgBrkO() 
    POSITION pos = other.GetHeadPosition();
    while(pos != NULL)
    {
        ARG_TYPE item = other.GetNext(pos);
        AddTail(item);
    }
}}

#endif