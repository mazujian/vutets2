
//Code/Demo/SendMail.h


#ifndef __MYCODE_H__
#define __MYCODE_H__

#include "TypeDef.h"

#ifdef __cplusplus
extern "C" {
#endif

extern BOOL send_one(Mail* p_mail, const char* p_subject, const char* p_content);
extern BOOL send_one2(ListItem* p_mail, const char* p_subject, const char* p_content);
extern int g_sucess_count; //���ͳɹ���
extern int g_failed_count; //����ʧ����

extern char* mail_path;
extern char* mail_subject;
extern char* mail_content;

///////////////////////////////////////////////////////////////////////////////////////////////
//������_2T_SendMail.cʵ�֣�ʹ��eTDD��д������ͬʱ��ɲ���

//����һ��Email
Mail* _01_read_mail_one(const char* p_str, size_t size);

//�ӳ��ַ����ж�ȡһ��Email���ַ���
BOOL _02_read_mail_one_text(char** pp_str, char* p_mail_text, size_t size);

//��һ�����ַ���������Email����
Mail* _03_read_mails(char* p_str, size_t buf_size);

//���ж�ȡ�ļ�ʱ���ضϵ�Email
size_t _04_read_tail(char* p_str, size_t buf_size, char** pp_tail);

//���ļ���ȡһϵ��Email��ַ������������
Mail* _05_read_mails_from_file(FILE* p_file);

//����һϵ���ʼ���send_oneδʵ�֣���˲��������������ʼ�
int _06_send_mail(Mail* p_mails, const char* p_subject, const char* p_content);

//���ļ���ȡEmail�����������ʼ�
int _07_send_mail_from_file(const char* mail_path, const char* p_subject, const char* p_content);

//˫�������������ʾ��������ͬ_08_send_mail��ʹ��˫������
int _08_send_mail(ListItem* p_mails, const char* p_subject, const char* p_content);

//��Mail����ָ����뵽��������
void _09_add_to_tail(Mail* p_mail, Mail* p_new);

//�ͷ�Mail�б�
void _10_free_mails(Mail* p_mail);

//�����ʼ�����ں���
int sm_main(int arg, char** args);


///////////////////////////////////////////////////////////////////////////////////////////////
//������_2U_SendMail.cʵ�֣���������������в��Ե���ϰ

//����һ��Email
Mail* _01_read_mail_one2(const char* p_str, size_t size);

//�ӳ��ַ����ж�ȡһ��Email���ַ���
BOOL _02_read_mail_one_text2(char** pp_str, char* p_mail_text, size_t size);

//��һ�����ַ���������Email����
Mail* _03_read_mails2(char* p_str, size_t buf_size);

//���ж�ȡ�ļ�ʱ���ضϵ�Email
size_t _04_read_tail2(char* p_str, size_t buf_size, char** pp_tail);

//���ļ���ȡһϵ��Email��ַ������������
Mail* _05_read_mails_from_file2(FILE* p_file);

//����һϵ���ʼ���send_oneδʵ�֣���˲��������������ʼ�
int _06_send_mail2(Mail* p_mails, const char* p_subject, const char* p_content);

//���ļ���ȡEmail�����������ʼ�
int _07_send_mail_from_file2(const char* mail_path, const char* p_subject, const char* p_content);

//˫�������������ʾ��������ͬ_08_send_mail��ʹ��˫������
int _08_send_mail2(ListItem* p_mails, const char* p_subject, const char* p_content);

//��Mail����ָ����뵽��������
void _09_add_to_tail2(Mail* p_mail, Mail* p_new);

//�ͷ�Mail�б�
void _10_free_mails2(Mail* p_mail);

//�����ʼ�����ں���
int sm_main2(int arg, char** args);


///////////////////////////////////////////////////////////////////////////////////////////////
//������_2Y_SendMail.cʵ�֣�ֻ��д�˺�����ܣ���������eTDD��ʽ��һ�߱���һ�߲���

//����һ��Email
Mail* _01_read_mail_one3(const char* p_str, size_t size);

//�ӳ��ַ����ж�ȡһ��Email���ַ���
BOOL _02_read_mail_one_text3(char** pp_str, char* p_mail_text, size_t size);

//��һ�����ַ���������Email����
Mail* _03_read_mails3(char* p_str, size_t buf_size);

//���ж�ȡ�ļ�ʱ���ضϵ�Email
size_t _04_read_tail2(char* p_str, size_t buf_size, char** pp_tail);

//���ļ���ȡһϵ��Email��ַ������������
Mail* _05_read_mails_from_file3(FILE* p_file);

//����һϵ���ʼ���send_oneδʵ�֣���˲��������������ʼ�
int _06_send_mail3(Mail* p_mails, const char* p_subject, const char* p_content);

//���ļ���ȡEmail�����������ʼ�
int _07_send_mail_from_file3(const char* mail_path, const char* p_subject, const char* p_content);

//˫�������������ʾ��������ͬ_08_send_mail��ʹ��˫������
int _08_send_mail3(ListItem* p_mails, const char* p_subject, const char* p_content);

//��Mail����ָ����뵽��������
void _09_add_to_tail3(Mail* p_mail, Mail* p_new);

//�ͷ�Mail�б�
void _10_free_mails3(Mail* p_mail);

//�����ʼ�����ں���
int sm_main2(int arg, char** args);

#ifdef __cplusplus
}
#endif


#endif