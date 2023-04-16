
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"admin.h"


void Add_student (student *st)
{
    char another;

    do
    {

        int i=0,flag=0;

        st->name=(char *)malloc(stringsize*sizeof(char));
        st->password=(char *)malloc(stringsize*sizeof(char));



        printf("\n\t\t\t         =-=-=-=-=-=-= Please enter data of student =-=-=-=-=-=-=\n");
        printf("\n\t\t\t        Enter name: ");

        getchar();
        printf("\n\t\t\t        ");
        gets(st->name);
        printf("\n");
        printf("\n\t\t\t        Enter  password: ");
        printf("\n\t\t\t        ");
        scanf("%s",st->password);
        printf("\n");
        while(1)
        {
            printf("\n\t\t\t        Enter gender F or M: ");

            printf("\n\t\t\t        ");
            getchar();
            scanf("%c",&st->gender);
            if(st->gender=='f'||st->gender=='F'||st->gender=='m'||st->gender=='M')
                break;
            else
                printf("\n\t\t\t        ERORR TRY AGAIN\n\n");
        }

        printf("\n");
        printf("\n\t\t\t        Enter id: ");
        printf("\n\t\t\t        ");
        scanf("%d",&st->id);
        while(arr[i].id==st->id)
        {
            printf("\n\n\n\t\t\t        XXXXX This ID is already exist,Try again XXXXX\n\n\n");
            printf("\n\n\n\t\t\t        Enter id: ");
            printf("\n\t\t\t        ");
            scanf("%d",&st->id);
            i++;


        }
        printf("\n");
        printf("\n\t\t\t        enter grade: ");
        printf("\n\t\t\t        ");
        scanf("%f",&st->grade);
        while(st->grade>100||st->grade<0)
        {
            printf("\n\n\t\t\t        xxxxxxxxxxx Please enter grade between 0:100 xxxxxxxxxxx\n\n\n");
            printf("\n\n\t\t\t        enter grade: ");
            printf("\n\t\t\t        ");
            scanf("%f",&st->grade);
        }
        printf("\n");
        for( i=0; i<num_students; i++)
        {
            if(arr[i].id==0)
            {
                arr[i]=*st;
                flag=1;
                break;
            }
        }





        if(flag==0)
        {
            num_students++;
            if(num_students>MAXSIZE)
            {

                arr =  realloc(arr, (num_students+1)*sizeof(student));


            }

            arr[num_students-1]=*st;


        }



        printf("\n\t\t\t        addition is done correctly \n");
        printf("\n\n\t\t\t        Do you want to add another student press Y or N \n");
        printf("\n\n\t\t\t        ");
        scanf("%s",&another);


    }
    while(another=='y'||another=='Y');


}

void remove_student (int id)
{
    int flag=0;
    for(int i=0; i<num_students; i++) //check if it's valid Id
    {
        if(id== arr[i].id)
        {
            flag=1;

            arr[i].name=NULL;
            arr[i].age=0;
            arr[i].gender=0;
            arr[i].grade=0;
            arr[i].password=NULL;
            arr[i].id=0;
            printf("\n\t\t\t        you removed the student successfully\n");

            break;
        }
    }

    if(flag==0)


    {
        printf("\n\t\t\t        invalid Id,please try again");
    }


}






void EditStuGrade(int id)
{
    int flag=0;


    float grade;

    for (int i = 0; i < num_students; i++)
    {
        if (arr[i].id == id)
        {
            flag=1;
            printf("\n\n\n\t\t\t        student grade=%f\n\n",arr[i].grade);
            do
            {
                printf("\n\n\n\t\t\t        enter grade between 0 and 100\n\n");
                printf("\n\n\t\t\t        edit the grade:  \n");
                printf("\n\t\t\t        ");
                scanf("%f",&grade);
                if(grade<=100&&grade>=0)
                    arr[i].grade=grade;
            }
            while(grade>100||grade<0);




        }
    }

    if(flag==0 )
        printf("\n\t\t\t        student is not found\n");



}






void viewAllrecords()
{
    int flag=0;
    for (int i = 0; i < num_students; i++)
    {
        if((arr+i)->id!=0)
        {
            flag=1;
            printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
            printf("\n\t\t\t        Student name is: %s \n",(arr+i)->name);
            printf("\n\t\t\t        Student age is: %d \n",(arr+i)->age);
            printf("\n\t\t\t        Student ID is: %d \n",arr[i].id);
            printf("\n\t\t\t        Student total grade is: %f\n",arr[i].grade);
            printf("\n\t\t\t        Student gender is: %c \n",arr[i].gender);
            printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        }
    }

    if(flag==0)
    {
        printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        printf("\n\t\t\t        THERE IS NO STUDENTS TO VIWE\n\n");
    }



}


void EditAdminPass(adminn *arr)
{

    char *newpass = (char *)malloc(stringsize*sizeof(char));
    (arr+0)->pass=NULL;
    printf("\n\t\t\t        Please enter new password :\n");
    printf("\n\t\t\t        ");
    scanf("%s", newpass);

    (arr+0)->pass = newpass;
    printf("\n\t\t\t        The password changed \n");


}

void viewStu (int id)
{


    for(int i=0; i<num_students; i++) //check if it's valid Id so we can show data.
    {
        if(id==arr[i].id)
        {

            printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
            printf("\n\t\t\t        Student name is: %s \n",arr[i].name);
            printf("\n\t\t\t        Student age is: %d \n",arr[i].age);
            printf("\n\t\t\t        Student ID is: %d \n",arr[i].id);
            printf("\n\t\t\t        Student total grade is: %f \n",arr[i].grade);
            printf("\n\t\t\t        Student gender is: %c \n",arr[i].gender);
            printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
            break;
        }


    }

}
