
//Code/Demo/student.h



#ifdef __cplusplus
extern "C" {
#endif

#define STUDENT_COUNT_MAX  42 //每班学生数
#define CLASS_COUNT_BY_GRADE 10 //每年级的班数
#define GRADE_COUNT          6  //年级数
#define CLASS_COUNT_MAX      (GRADE_COUNT*CLASS_COUNT_BY_GRADE)

typedef struct student_t
{
    int index;     //序号
    int number;    //学号
    char* name;    //姓名
    float Chinese; //语文分数
    float English; //英语分数
    float math;    //数学分数
    float sports;  //体育分数
    float art;     //美术分数
    float music;   //音乐分数

}student_t;

typedef struct class_t
{
    int index;     //序号
    int grade;     //年级
    student_t* students[STUDENT_COUNT_MAX]; //学生信息
}class_t;

typedef struct school_t
{
    class_t* classes[CLASS_COUNT_MAX]; //班级信息
}school_t;

extern school_t g_school;
void school_free(school_t* pSchool);
void use_date_file(const char* pPathName);


void well_student_parent();
void call_student_parent();

#ifdef __cplusplus
}
#endif