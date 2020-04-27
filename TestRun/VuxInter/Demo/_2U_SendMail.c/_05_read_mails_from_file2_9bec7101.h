
//VuxInter/Demo/_2U_SendMail.c/_05_read_mails_from_file2_9bec7101.h

//$$VUNIT(BEGIN,TESTFUNCPLUG/_05_read_mails_from_file2(FILE*))
#ifdef _VUDEBUG
static Mail* _05_read_mails_from_file2_vpls_(FILE* p_file){ VuxDbgBrkP()
{
    Mail* p_mails = 0;
    Mail* p_prev = 0;
    /*[学习提示：局部输入]	用途：解决测试难题，降低测试难度，更多请看_5T_InsideIO.cpp。    添加：在左边函数代码窗口，选择要替换的代码或点击输入位置，	        右键菜单选择"局部输出(...)"    填值：与一般数据一样。    举例：代码中，buf_size为10240，要准备超过10k的数据文件很麻烦，	        可用局部输入设为较小的数。这种情形下，至少要有一个用例		    使用原值，以保证原值得以测试。	*/
    size_t buf_size = 10240;
    size_t size;
    size_t offset = 0; //被截断的mail的长度
    char* p_tail = 0;
    char* p_buf = 0;
    
    if(p_file == 0)
    {
        return 0;
    }
    
    p_buf = (char*)malloc(buf_size);
    if(p_buf == 0)
    {
        return 0;
    }

    /*[学习提示：数据文件]	在用例数据界面，右键菜单打开对数据文件的操作命令，可以新建、	  保存、导入数据、数据路径等。数据文件均保存于指定目录。	数据文件通常用以数据的重用，也可以直接在用例中打开文件。	*/
    /*[学习提示：用回调赋值操作文件]	系统已设定了FILE的回调赋值，输入path和flag即可打开文件。	path可用以下命令设定：文件(针对单元格)->导入文件路径。	  flag可填"rb+"，表示打开文件。	*/
    while(1)
    {
        Mail* p_mail;
        memset(p_buf, 0, buf_size);
        if(offset > 0)
        {
            //上一次循环存在被截断的mail时，先拷贝到p_buf中
            ;
            memcpy(p_buf, p_tail, offset);
            free(p_tail);
            p_tail = 0;
        }

        //读取字符串到缓冲区
        size = fread(p_buf+offset, sizeof(char), buf_size-offset, p_file);
        if(size == 0)
        { break;
        }

        //检查最后一个mail是否读完整
        offset = 0;
        ;
        if(size == buf_size)
        {
            if(p_buf[size-1] != '\n')
            {
                offset = _04_read_tail2(p_buf, buf_size, &p_tail);  
                //如果有被截断的mail，则offset>0且p_tail!=NULL
                ;
            }
        }

        //解析缓冲区中的mail列表
        p_mail = _03_read_mails2(p_buf, buf_size);
        if(p_mail != 0)
        {
            //添加到整体列表中
            if(p_prev == 0)
            {
                p_mails = p_mail;
            }
            else
            {
                _09_add_to_tail2(p_prev, p_mail);
            }
            p_prev = p_mail;
        }
    }

    free(p_buf);
    free(p_tail);
    return p_mails;
}}
#else
static Mail* _05_read_mails_from_file2_vpls_(FILE* p_file){VUX_VARIABLE(3)  __VUFNINFO__("_05_read_mails_from_file2","Mail*",0);VuxDbp(0,0,38);
{
VUXRBV(1);VUXRLNFVB(1,1,1);    Mail* p_mails = 0; VUXLV("Mail*",p_mails,1);
VUXRLNFVB(2,2,2);    Mail* p_prev = 0; VUXLV("Mail*",p_prev,2);
    /*[学习提示：局部输入]	用途：解决测试难题，降低测试难度，更多请看_5T_InsideIO.cpp。    添加：在左边函数代码窗口，选择要替换的代码或点击输入位置，	        右键菜单选择"局部输出(...)"    填值：与一般数据一样。    举例：代码中，buf_size为10240，要准备超过10k的数据文件很麻烦，	        可用局部输入设为较小的数。这种情形下，至少要有一个用例		    使用原值，以保证原值得以测试。	*/
VUXRLNFVB(3,3,3);    size_t buf_size = 10240; VUXLV("size_t",buf_size,3);
VUXRLNFVB(4,4,4);    size_t size; VUXLV("size_t",size,4);
VUXRLNFVB(5,5,5);    size_t offset = 0; VUXLV("size_t",offset,5); //被截断的mail的长度
VUXRLNFVB(6,6,6);    char* p_tail = 0; VUXLV("char*",p_tail,6);
VUXRLNFVB(7,7,7);    char* p_buf = 0; VUXLV("char*",p_buf,7);
    
    if((VUXRCS0(1,8)&&(p_file == 0)&&VUXRC1(1)))
    {VUXRBR(2);{
VUXRB(2);VUXRLNF(8,9);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(3);
    
VUXRB(3);VUXRLNF(9,10);    p_buf = (char*)malloc(buf_size);
    if((VUXRCS0(2,11)&&(p_buf == 0)&&VUXRC1(2)))
    {VUXRBR(4);{
VUXRB(4);VUXRLNF(10,12);        {Mail* __vurtv__= 0;VUXFRTY();}
    }}
VUXRBR_ELSE(5);

    /*[学习提示：数据文件]	在用例数据界面，右键菜单打开对数据文件的操作命令，可以新建、	  保存、导入数据、数据路径等。数据文件均保存于指定目录。	数据文件通常用以数据的重用，也可以直接在用例中打开文件。	*/
    /*[学习提示：用回调赋值操作文件]	系统已设定了FILE的回调赋值，输入path和flag即可打开文件。	path可用以下命令设定：文件(针对单元格)->导入文件路径。	  flag可填"rb+"，表示打开文件。	*/
    while((VUXRCS0(3,13)&&(1)&&VUXRC1(3)))
    {VUXRBR_LOOP(3,6,109);{
VUXRBV(5);VUXRLNFVB(11,14,8);        Mail* p_mail; VUXLV("Mail*",p_mail,8);
VUXRLNF(12,15);        memset(p_buf, 0, buf_size);
        if((VUXRCS0(4,16)&&(offset > 0)&&VUXRC1(4)))
        {VUXRBR(8);{
            //上一次循环存在被截断的mail时，先拷贝到p_buf中
            ;VUXRB(6);VUXRLNF(13,17);
VUXRLNF(14,18);            memcpy(p_buf, p_tail, offset);
VUXRLNF(15,19);            free(p_tail);
VUXRLNF(16,20);            p_tail = 0;
        }}
VUXRBR_ELSE(9);

        //读取字符串到缓冲区
VUXRB(7);VUXRLNF(17,21);        size = fread(p_buf+offset, sizeof(char), buf_size-offset, p_file);
        if((VUXRCS0(5,22)&&(size == 0)&&VUXRC1(5)))
        {VUXRBR(10);{VUXRB(8);VUXRLNF(18,23);VUXSEN(6,1,23); break;
        }}
VUXRBR_ELSE(11);

        //检查最后一个mail是否读完整
VUXRB(9);VUXRLNF(19,24);        offset = 0;
        ;VUXRLNF(20,25);
        if((VUXRCS0(6,26)&&(size == buf_size)&&VUXRC1(6)))
        {VUXRBR(12);{
            if((VUXRCS0(7,27)&&(p_buf[size-1] != '\n')&&VUXRC1(7)))
            {VUXRBR(13);{
VUXRB(10);VUXRLNF(21,28);                offset = _04_read_tail2(p_buf, buf_size, &p_tail);  
                //如果有被截断的mail，则offset>0且p_tail!=NULL
                ;VUXRLNF(22,29);
            }}
VUXRBR_ELSE(14);
        }}
VUXRBR_ELSE(15);

        //解析缓冲区中的mail列表
VUXRB(11);VUXRLNF(23,30);        p_mail = _03_read_mails2(p_buf, buf_size);
        if((VUXRCS0(8,31)&&(p_mail != 0)&&VUXRC1(8)))
        {VUXRBR(16);{
            //添加到整体列表中
            if((VUXRCS0(9,32)&&(p_prev == 0)&&VUXRC1(9)))
            {VUXRBR(17);{
VUXRB(12);VUXRLNF(24,33);                p_mails = p_mail;
            }}
            else
            {VUXRBR(18);{
VUXRB(13);VUXRLNF(25,34);                _09_add_to_tail2(p_prev, p_mail);
            }}
VUXRB(14);VUXRLNF(26,35);            p_prev = p_mail;
        }}
VUXRBR_ELSE(19);
    }}VUXRBR_OUT(3, 7);


VUXRB(15);VUXRLNF(27,36);    free(p_buf);
VUXRLNF(28,37);    free(p_tail);
VUXRLNF(29,38);    {Mail* __vurtv__= p_mails;VUXFRTY();}
}}
#endif

static Mail* _05_read_mails_from_file2_vpls(FILE* p_file)
{
	VuxIncRunTimes();
    if(VuxRateTesting()) {return _05_read_mails_from_file2(p_file);}
	else if(VuxIsRepeatRun()) {return _05_read_mails_from_file2_vpls_(p_file);}

#ifdef _VUDEBUG
    {Mail* vuxRet =  VuxIsDebugPlug() ? _05_read_mails_from_file2_vpls_(p_file) : _05_read_mails_from_file2(p_file);
#else
    {Mail* vuxRet = _05_read_mails_from_file2_vpls_(p_file);
#endif
    TEST_ASSERT_RETURN("Mail*", &vuxRet);
    VuxResetRunTimes();
    return vuxRet;}
}
//$$VUNIT(END,TESTFUNCPLUG/_05_read_mails_from_file2(FILE*))
