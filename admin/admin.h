<<<<<<< Updated upstream
=======

#ifndef admin.h
>>>>>>> Stashed changes
#define admin.h
#define  classSize 25
typedef struct student  //fields of student structure.
{
    char *name;
    int  grade;
    int id;
    char gender;
    int age;
    char *password;
} Student;
<<<<<<< Updated upstream


void Add_student (Student *st); //prototype of add function
void remove_student (int id); //prototype of remove function
void viewStu (int id);    //prototype of view student record function
=======
typedef struct Admin  //fields of student structure.
{
   char *pass;
}adminn;

void Add_student (Student *st); //prototype of add function
void remove_student (int id); //prototype of remove function
void viewStu (int id);
void viewAllrecords();
void EditAdminPass();
void EditStuGrade();  //prototype of view student record function
>>>>>>> Stashed changes

#endif
