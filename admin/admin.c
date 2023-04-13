#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"admin.h"
void viewStu (int id, student *arr)
    {
         int flag=0;
        for(int i=1; i<=num_students; i++) //check if it's valid Id so we can show data.
        {
            if(id==arr[i].id)
            {
                flag=1;
                printf("Student name is: %s \n",arr[i].name);
                printf("Student age is: %d \n",arr[i].age);
                printf("Student ID is: %d \n",arr[i].id);
                printf("Student total grade is: %f \n",arr[i].grade);
                printf("Student gender is: %c \n",arr[i].gender);
               break;
            }


        }
        //if it 's not valid Id print warning message
        if(flag==0)
            printf("Invalid ID,please try again \n");
    }

void Add_student (student *st,student *arr)
    {
        int flag=0;
        //check if there is student with the same id;

            printf("Please enter your ID ");
            scanf("%d",&st->id);
            for(int i=1; i<=num_students; i++)
            {
                if(arr[i].id == st->id)
                {
                    flag=1;
                    printf("This ID is already exist,Try again");
                     break;

                }

            }
            //if it's valid Id

            if(flag==0)
            { for(int i=0;i<num_students;i++)
            {if(arr[i].id== 0 )
            {   arr[i]= *st;
            printf("addition is done correctly \n");
                break;

            }
            }
            }

    }
//view all records






 void EditStuGrade(student *arr,int id){
     int flag=0;
     /*char *pass_=(char *)malloc(10*sizeof(char));
      printf("Enter admin password\n");
      scanf("%s",pass_);  // in main
        if (strcmp(pass_, array[0].pass) == 0){*/

        float grade;

         for (int i = 1; i <= num_students; i++)
        {
                if (arr[i].id == id)
                {
                    flag=1;
            printf("student grade=%f\n",arr[i].grade);
            printf("edit the grade");
            scanf("%f",&grade);
            if(grade<=100&&grade>=0)
            arr[i].grade=grade;
            else
                printf("enter grade between 0 and 100\n");


        }
           }

                 if(flag==0 )
                 printf("student is not found\n");



        }






void viewAllrecords(student *arr){
for (int i = 1; i <= num_students; i++)
    {
if((arr+i)->id!=0){
             printf("Student name is: %s \n",(arr+i)->name);
                printf("Student age is: %d \n",(arr+i)->age);
                printf("Student ID is: %d \n",arr[i].id);
                printf("Student total grade is: %f\n",arr[i].grade);
                printf("Student gender is: %c \n",arr[i].gender);
                printf("________________\n");
}

    }
}




void EditAdminPass(adminn *arr){

         char *newpass = (char *)malloc(strlen((arr+0)->pass) + 1);
        (arr+0)->pass=NULL;
         printf("Please enter new password :\n");
        scanf("%s", newpass);

        (arr+0)->pass = newpass;
        printf("The password changed \n");


    }

    void remove_student (int id, student* arr)
    {
        int flag=0;


        for(int i=0; i<num_students; i++) //check if it's valid Id
        {
            if(id== arr[i].id)
            {
                flag=1;
//                free (arr);
//                arr[i]=NULL;
                num_students--;
                break;
            }
        }
        printf("you removed the student successfully");
        if(flag==0)


        {
            printf("invalid Id,please try again");
        }


    }
