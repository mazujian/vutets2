
//Code/Demo/SendMail.h


#ifndef __MYCODE_H__
#define __MYCODE_H__

#include "TypeDef.h"

#ifdef __cplusplus
extern "C" {
#endif

extern BOOL send_one(Mail* p_mail, const char* p_subject, const char* p_content);
extern BOOL send_one2(ListItem* p_mail, const char* p_subject, const char* p_content);
extern int g_sucess_count; //发送成功数
extern int g_failed_count; //发送失败数

extern char* mail_path;
extern char* mail_subject;
extern char* mail_content;

///////////////////////////////////////////////////////////////////////////////////////////////
//以下在_2T_SendMail.c实现，使用eTDD编写，编码同时完成测试

//解析一个Email
Mail* _01_read_mail_one(const char* p_str, size_t size);

//从长字符串中读取一个Email的字符串
BOOL _02_read_mail_one_text(char** pp_str, char* p_mail_text, size_t size);

//将一个长字符串解析成Email链表
Mail* _03_read_mails(char* p_str, size_t buf_size);

//剪切读取文件时被截断的Email
size_t _04_read_tail(char* p_str, size_t buf_size, char** pp_tail);

//从文件读取一系列Email地址并解析成链表
Mail* _05_read_mails_from_file(FILE* p_file);

//发送一系列邮件，send_one未实现，因此并不能真正发送邮件
int _06_send_mail(Mail* p_mails, const char* p_subject, const char* p_content);

//从文件读取Email链表，并发送邮件
int _07_send_mail_from_file(const char* mail_path, const char* p_subject, const char* p_content);

//双向链表输入输出示例，功能同_08_send_mail，使用双向链表
int _08_send_mail(ListItem* p_mails, const char* p_subject, const char* p_content);

//将Mail对象指针加入到链表的最后
void _09_add_to_tail(Mail* p_mail, Mail* p_new);

//释放Mail列表
void _10_free_mails(Mail* p_mail);

//发送邮件的入口函数
int sm_main(int arg, char** args);


///////////////////////////////////////////////////////////////////////////////////////////////
//以下在_2U_SendMail.c实现，可作设计用例进行测试的练习

//解析一个Email
Mail* _01_read_mail_one2(const char* p_str, size_t size);

//从长字符串中读取一个Email的字符串
BOOL _02_read_mail_one_text2(char** pp_str, char* p_mail_text, size_t size);

//将一个长字符串解析成Email链表
Mail* _03_read_mails2(char* p_str, size_t buf_size);

//剪切读取文件时被截断的Email
size_t _04_read_tail2(char* p_str, size_t buf_size, char** pp_tail);

//从文件读取一系列Email地址并解析成链表
Mail* _05_read_mails_from_file2(FILE* p_file);

//发送一系列邮件，send_one未实现，因此并不能真正发送邮件
int _06_send_mail2(Mail* p_mails, const char* p_subject, const char* p_content);

//从文件读取Email链表，并发送邮件
int _07_send_mail_from_file2(const char* mail_path, const char* p_subject, const char* p_content);

//双向链表输入输出示例，功能同_08_send_mail，使用双向链表
int _08_send_mail2(ListItem* p_mails, const char* p_subject, const char* p_content);

//将Mail对象指针加入到链表的最后
void _09_add_to_tail2(Mail* p_mail, Mail* p_new);

//释放Mail列表
void _10_free_mails2(Mail* p_mail);

//发送邮件的入口函数
int sm_main2(int arg, char** args);


///////////////////////////////////////////////////////////////////////////////////////////////
//以下在_2Y_SendMail.c实现，只编写了函数框架，建议您用eTDD方式，一边编码一边测试

//解析一个Email
Mail* _01_read_mail_one3(const char* p_str, size_t size);

//从长字符串中读取一个Email的字符串
BOOL _02_read_mail_one_text3(char** pp_str, char* p_mail_text, size_t size);

//将一个长字符串解析成Email链表
Mail* _03_read_mails3(char* p_str, size_t buf_size);

//剪切读取文件时被截断的Email
size_t _04_read_tail2(char* p_str, size_t buf_size, char** pp_tail);

//从文件读取一系列Email地址并解析成链表
Mail* _05_read_mails_from_file3(FILE* p_file);

//发送一系列邮件，send_one未实现，因此并不能真正发送邮件
int _06_send_mail3(Mail* p_mails, const char* p_subject, const char* p_content);

//从文件读取Email链表，并发送邮件
int _07_send_mail_from_file3(const char* mail_path, const char* p_subject, const char* p_content);

//双向链表输入输出示例，功能同_08_send_mail，使用双向链表
int _08_send_mail3(ListItem* p_mails, const char* p_subject, const char* p_content);

//将Mail对象指针加入到链表的最后
void _09_add_to_tail3(Mail* p_mail, Mail* p_new);

//释放Mail列表
void _10_free_mails3(Mail* p_mail);

//发送邮件的入口函数
int sm_main2(int arg, char** args);

#ifdef __cplusplus
}
#endif


#endif