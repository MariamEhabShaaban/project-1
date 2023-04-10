#include <stdio.h>
#include <stdlib.h>
#include "admin.h"
int main()
{
    //Student* arr = (Student*) malloc(classSize * sizeof( Student));
    struct Student **arr = malloc(classSize * sizeof(struct Student*));
    static int num_stu;
    //implementation of add function.
    void Add_student (Student *st)
    {
        int flag=0;
        //check if there is place to add student in this class.
        if(num_stu>classSize)
            printf("there is no room for more students");
        //check if there is student with the same id;
        else
        {
            printf("Please enter your ID");
            scanf("%d",&st->id);
            for(int i=0; i<classSize; i++)
            {
                if(arr[i]->id == st->id)
                {
                    flag=1;
                    printf("This ID is already exist,Try again");
                    break;
                }
            }
            //if it's valid Id

            if(flag==0)
            {
                *(arr)[num_stu ++]= *st;

            }
            printf("Addition is done correctly");
        }

    }
    // implementation of  remove function.
    void remove_student (int id)
    {
        int flag=0;
        /* printf("Please enter Id of student you want to remove");
         scanf("%d",&id);*/ // in main.

        for(int i=0; i<classSize; i++) //check if it's valid Id
        {
            if(id==arr[i]->id)
            {
                flag=1;
                free (arr[i]);
                arr[i]=NULL;
                num_stu--;
                break;
            }
        }
        printf("you removed the student successfully");
        if(flag==0)
        {
            printf("invalid Id,please try again");
        }
    }
    // implementation of  view student record function.
    void viewStu (int id)
    {
        int flag=0;
        /* printf("please enter you ID");
         scanf("%d",&id);*/    // in main
        for(int i=0; i<classSize; i++) //check if it's valid Id so we can show data.
        {
            if(id==arr[i]->id)
            {
                flag=1;
                printf("Student name is: %s \n",arr[i]->name);
                printf("Student age is: %d \n",arr[i]->age);
                printf("Student ID is: %s \n",arr[i]->id);
                printf("Student total grade is: %d \n",arr[i]->grade);
                printf("Student gender is: %c \n",arr[i]->gender);
                break;
            }
        }
        //if it 's not valid Id print warning message
        if(flag==0)
            printf("Invalid ID,please try again");
    }
    return 0;
}

