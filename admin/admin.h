
//#ifndef admin.h
//#define admin.h
#include"database.h"
#define stringsize 30
static num_students =0;
void Add_student (student *arr,student *st); //prototype of add function
void remove_student (int id,student *arr); //prototype of remove function
void viewStu ( int id,student *arr);
void viewAllrecords(student *arr);
void EditAdminPass(adminn *arr);
void EditStuGrade(student *st,int id);  //prototype of view student record function

//#endif // admin
