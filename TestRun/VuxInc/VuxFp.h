
typedef  int (VUCALLBACK *fpVuxCallBack)(int index, void* pcbd);
typedef  void* (VUCALLBACK *fpVuxSetOffPtr)(int index, void* pValue);
typedef  void (VUCALLBACK *fpVuxGlobalInit)();

fpVuxCallBack VuxCbfs[VUX_SOURCE_COUNT] = {0};
fpVuxSetOffPtr VuxOnfs[VUX_SOURCE_COUNT] = {0};
fpVuxGlobalInit VuxGvfs[VUX_SOURCE_COUNT] = {0};

static int VUCALLBACK VuxCallCbfs(int index, void* pcbd)
{
   int i = 0;
   for(; i<VUX_SOURCE_COUNT; i++)
   {
       if(VuxCbfs[i] != 0)
       {
           VuxCbfs[i](index, pcbd);
           if(*((int*)pcbd+16) == 1)
               return 1;
       }
   }
   
   return 0;
}

static void* VUCALLBACK VuxCallOnfs(int index, void* pValue)
{
   int i = 0;
   for(; i<VUX_SOURCE_COUNT; i++)
   {
       if(VuxOnfs[i] != 0)
       {
           void* ptr = VuxOnfs[i](index, pValue); 
           if(ptr) return ptr;
       }
   }
   
   return 0;
}

#ifdef __cplusplus
extern "C" {
#endif
void VuxCallGvfs()
{
   int i = 0;
   for(; i<VUX_SOURCE_COUNT; i++)
   {
       if(VuxGvfs[i] != 0)
       {
           VuxGvfs[i](); 
       }
   }
}

#ifdef __cplusplus
}
#endif