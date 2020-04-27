
//Code/Demo/student.h



#ifdef __cplusplus
extern "C" {
#endif

#define STUDENT_COUNT_MAX  42 //ÿ��ѧ����
#define CLASS_COUNT_BY_GRADE 10 //ÿ�꼶�İ���
#define GRADE_COUNT          6  //�꼶��
#define CLASS_COUNT_MAX      (GRADE_COUNT*CLASS_COUNT_BY_GRADE)

typedef struct student_t
{
    int index;     //���
    int number;    //ѧ��
    char* name;    //����
    float Chinese; //���ķ���
    float English; //Ӣ�����
    float math;    //��ѧ����
    float sports;  //��������
    float art;     //��������
    float music;   //���ַ���

}student_t;

typedef struct class_t
{
    int index;     //���
    int grade;     //�꼶
    student_t* students[STUDENT_COUNT_MAX]; //ѧ����Ϣ
}class_t;

typedef struct school_t
{
    class_t* classes[CLASS_COUNT_MAX]; //�༶��Ϣ
}school_t;

extern school_t g_school;
void school_free(school_t* pSchool);
void use_date_file(const char* pPathName);


void well_student_parent();
void call_student_parent();

#ifdef __cplusplus
}
#endif