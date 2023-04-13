
#include <stdio.h>
#include <stdlib.h>

#include "admin.h"
//#include "../student/student.c"

int main()
{
    int num_students; //Size of the memory that will be Allocated.
    int mode; // Admin OR User?.
    int uchoice; //to choose in User mode
    int achoice; //to choose in admin mode
    int id;


   // printf("Enter the number of the Students\n");
    //scanf("%d",&num_students);
student *arr = (student*)malloc(num_students*sizeof(student));
    adminn *aAdmin= malloc(sizeof(adminn));
    (aAdmin+0)->pass="567";
     for(int i=0;i<num_students;i++){
        (arr+i)->age=20;
         (arr+i)->name="mariam ehab";
          (arr+i)->grade=99.5;
           (arr+i)->gender='F';
            (arr+i)->password="mariam2612";
             (arr+i)->id=i;
    }
    //Allocating Dynamic Memory for Objects and "student" is a pointer pointing to the first object.



    //Checking the Succession of Allocating Memory.
    if (arr == NULL)
        printf("Memory is not Available");
    if (arr != NULL)
        printf("Allocating Memory Succeeded\n");
    //End of Checking

    printf("For Admin mode press 1.\nFor User mode press 2.\n");
    scanf("%d",&mode);

    //After this: We will call the functions of Admin and User.
    if (mode ==1)
    {
         char *pass_=(char *)malloc(10*sizeof(char));

      printf("Enter admin password\n");
      scanf("%s",pass_);
        if (strcmp(pass_, (aAdmin+0)->pass) == 0){


printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("[1]To Add Student Record \n");
        printf("[2]To Remove Student Record \n");
        printf("[3]To View Student Record \n");
        printf("[4]To View All Records \n");
        printf("[5]To Edit Admin Password \n");
        printf("[6]To Edit Student Grade \n");
printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("choose from 1:6\n");
        scanf("%d", &achoice);


switch(achoice){
case 1:
//    Add_student (student *st,arr);
    break;
case 2:
     printf("Enter student ID\n");
        scanf("%d", &id);

    remove_student (id,arr);

    break;

case 3:
     printf("Enter student ID\n");
        scanf("%d", &id);

    viewStu (  id,arr);

    break;
   case 4:
        viewAllrecords(arr);
        break;
       case 5:
        EditAdminPass(aAdmin);
        break;
      case 6:
         printf("Enter student ID\n");
        scanf("%d", &id);

          EditStuGrade(arr, id);
          break;
}
        }
else{
    printf("INCORRECT PASSWORD\n");
}
        }


    else if (mode ==2)
    {
        printf("To view Your Record press 1\n");
        printf("To Edit Your Password press 2\n");
        printf("To Edit Your Name press 3\n");
        scanf("%d", &uchoice);

        printf("Enter your ID\n");
        scanf("%d", &id);

//        if (uchoice == 1)
//            view_urecord(id, students);
//        if (uchoice == 2)
//            edit_upass(id, students);
//        if (uchoice == 3)
//            edit_uname(id, students);
    }

    return 0;
}
