
#include"../student/student.h"
#include "../admin/admin.h"
#include "app.h"
int mode; // Admin OR User?.
int uchoice; //to choose in User mode
int achoice; //to choose in admin mode
int id;

int MODE()
{
    arr = (student*)malloc(MAXSIZE*sizeof(student));
    adminn *aAdmin= malloc(sizeof(adminn));
    (aAdmin+0)->pass="1234";



    while(1)
    {
        printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        printf("\n\t\t\t        [1]Admin mode  \n\n\t\t\t        [2]User mode  \n\n\t\t\t        [3]EXIT\n ");
        printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        printf("\n\t\t\t        choose from 1:3\n");
        printf("\n\t\t\t        ");
        scanf("%d",&mode);
        switch(mode)
        {
        case 1:
            ADMIN( aAdmin);
            break;
        case 2:
            USER();
            break;
        case 3:
            return 0;
            break;
        default:
            printf("\n\t\t\t        Enter valid choice\n");
        }

        //After this: We will call the functions of Admin and User.
    }
}
void ADMIN(adminn *ad)

{
    student st;
    student *ptr =&st;
    int tries=0;
    for( tries =0; tries<3; tries++)
    {
        char *pass_=(char *)malloc(stringsize*sizeof(char));
        printf("\n\t\t\t        Enter admin password\n");
        printf("\n\t\t\t        ");
        scanf("%s",pass_);
        if (strcmp(pass_,(ad+0)->pass) == 0)
            break;
        else
            printf("\n\t\t\t        TRY AGAIN\n");


    }
    if(tries==3)
        printf("\n\t\t\t        You can't enter admin mode\n");
    else
    {


        printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        printf("\n\t\t\t        [1]To Add Student Record \n");
        printf("\n\t\t\t        [2]To Remove Student Record \n");
        printf("\n\t\t\t        [3]To View Student Record \n");
        printf("\n\t\t\t        [4]To View All Records \n");
        printf("\n\t\t\t        [5]To Edit Admin Password \n");
        printf("\n\t\t\t        [6]To Edit Student Grade \n");
        printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
        printf("\n\t\t\t        choose from 1:6\n");
        printf("\n\t\t\t        ");
        scanf("%d", &achoice);


        switch(achoice)
        {
        case 1:
            Add_student (ptr);


            break;
        case 2:
            while(1)
            {
                int i=0;
                printf("\n\t\t\t        Enter student ID\n");
                printf("\n\t\t\t        ");
                scanf("%d", &id);
                if(id==arr[i].id)
                {

                    remove_student (id);
                    break;
                }
                else
                {
                    printf("\n\t\t\t        Invalid ID Try Again\n\n");

                }
                if(i<num_students)
                    i++;
            }
            break;

        case 3:
            while(1)
            {
                int i=0;
                printf("\n\t\t\t        Enter student ID\n");
                printf("\n\t\t\t        ");
                scanf("%d", &id);
                if(id==arr[i].id)
                {

                    viewStu (id);
                    break;
                }
                else
                {
                    printf("\n\t\t\t        Invalid ID Try Again\n\n");

                }
                if(i<num_students)
                    i++;
            }
                    break;

        case 4:
            viewAllrecords();

            break;
        case 5:
            EditAdminPass(ad);

            break;
        case 6:
            while(1)
            {
                int i=0;
                printf("\n\t\t\t        Enter student ID\n");
                printf("\n\t\t\t        ");
                scanf("%d", &id);
                if(id==arr[i].id)
                {

                    EditStuGrade (id);
                    break;
                }
                else
                {
                    printf("\n\t\t\t        Invalid ID Try Again\n\n");

                }
                if(i<num_students)
                    i++;
            }

            break;
        }
    }

}


void USER()
{
    int i=0,flag=0,flag2=0,index;
    char *pass = (char *)malloc(stringsize*sizeof(char));
    printf("\n\t\t\t        Enter your ID\n");
    printf("\n\t\t\t        ");
    scanf("%d", &id);

    for(i=0; i<num_students; i++)
    {
        if(arr[i].id==id)
        {
            flag=1;
            index=i;
            break;
        }
    }

    while(flag==0)
    {
        printf("\n\n\n\t\t\t        XXXXXXX invalid Id ,Try again XXXXXXX\n\n");
        printf("\n\t\t\t        Enter your ID\n");
        printf("\n\t\t\t        ");
        scanf("%d", &id);
        for(i=0; i<num_students; i++)
        {
            if(arr[i].id==id)
            {
                flag=1;
                index=i;
                break;
            }
        }

    }




    printf("\n\t\t\t        Enter password : \n");
    printf("\n\t\t\t        ");
    scanf("%s", pass);

    for(i=0; i<num_students; i++)
    {
        if(strcmp(pass, arr[i].password)==  0&&i==index)
        {
            flag2=1;
            break;
        }

    }


    while(flag2==0)
    {
        printf("\n\n\n\t\t\t         Wrong password try again\n\n");

        printf("\n\t\t\t        Enter password : \n");
        printf("\n\t\t\t        ");
        scanf("%s", pass);
        for(i=0; i<num_students; i++)
        {
            if(strcmp(pass, arr[i].password)==  0&&i==index)
            {
                flag2=1;
                break;
            }

        }
    }


    printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
    printf("\n\t\t\t        [1]To view Your Record \n");
    printf("\n\t\t\t        [2]To Edit Your Password \n");
    printf("\n\t\t\t        [3]To Edit Your Name \n");
    printf("\n\t\t\t        choose from 1:3\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
    printf("\n\t\t\t        ");
    scanf("%d", &uchoice);



    switch(uchoice)
    {
    case 1:


        view_urecord(id);

        break;

    case 2:


        edit_upass(id);

        break;

    case 3:


        edit_uname(id);

        break;
    default:
        printf("\n\t\t\t        Enter valid choice\n");
        break;

    }
}















