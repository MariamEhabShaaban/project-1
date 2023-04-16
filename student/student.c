
#include "../database/database.h" // WE CAN DELETE IT
#include"student.h"
#define stringsize 30
#include<string.h>
// Fun of Viewing Records.
void view_urecord(int id)
{
    for(int i=0; i<num_students; i++)
    {
        if(id==arr[i].id)
        {
            printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
            printf("\n\t\t\t        Student name is: %s \n\n\t\t\t        Student age is: %d \n\n\t\t\t        Student ID is: %d \n\n\t\t\t        Student total grade is: %f \n\n\t\t\t        Student gender is: %c \n",arr[i].name,arr[i].age,arr[i].id,arr[i].grade,arr[i].gender);

            printf("\n\t\t\t        =-=-=-=-=-=-=-=\n");
            break;

        }
    }

}

// Fun Of Editting Password.
void edit_upass (int id)
{
    char *newPass = (char*)malloc(stringsize*sizeof(char));
    printf("\n\t\t\t        Enter your new password\n");
    printf("\n\t\t\t        ");
    scanf("%s", newPass);
    for(int i=0; i<num_students; i++) //check if it's valid Id so we can show data.
    {
        if(id==arr[i].id)
        {
            strcpy(arr[i].password,newPass);
            printf("\n\t\t\t        Password has been changed\n");
            break;
        }
    }


}

// Fun Of Editting Name.
void edit_uname (int id)
{
    char *newName = (char*)malloc(stringsize*sizeof(char));
    printf("\n\t\t\t        Enter your new Name\n");
    getchar();
    printf("\n\t\t\t        ");
    gets(newName);
    for(int i=0; i<num_students; i++) //check if it's valid Id so we can show data.
    {
        if(id==arr[i].id)
        {
            strcpy(arr[i].name,newName);
            printf("\n\t\t\t        Welcome %s\n",arr[i].name);
            break;
        }
    }

}
