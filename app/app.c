#include <stdio.h>
#include <stdlib.h>

#include "../database/database.c"
//#include "../student/student.c"

int main()
{
    int num_students; //Size of the memory that will be Allocated.
    int mode; // Admin OR User?.
    int uchoice; //to choose in User mode
    int achoice; //to choose in admin mode
    int id;

    printf("Enter the number of the Students\n");
    scanf("%d",&num_students);

    //Allocating Dynamic Memory for Objects and "student" is a pointer pointing to the first object.
    struct BASIC_INFO *students = (struct BASIC_INFO*)malloc(num_students*sizeof(size));


    //Checking the Succession of Allocating Memory.
    if (students == NULL)
        printf("Memory is not Available");
    if (students != NULL)
        printf("Allocating Memory Succeeded\n");
    //End of Checking

    printf("For Admin mode press 1.\nFor User mode press 2.\n");
    scanf("%d",&mode);

    //After this: We will call the functions of Admin and User.
    if (mode ==1)
    {
        printf("To Add Student Record press 1\n");
        printf("To Remove Student Record press 2\n");
        printf("To View Student Record press 3\n");
        printf("To View All Records press 4\n");
        printf("To Edit Admin Password 5\n");
        printf("To Edit Student Grade 6\n");
        scanf("%d", &achoice);

        printf("Enter your ID\n");
        scanf("%d", &id);

//        if (achoice == 1)
//            add_record(id, students);
//        if (achoice == 2)
//            remove_record(id, students);
//        if (achoice == 3)
//            view_arecord(id, students);
//        if (achoice == 3)
//            view_allrecord(id, students);
//        if (achoice == 3)
//            edit_apass(id, students);
//        if (achoice == 3)
//            edit_agrade(id, students);


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
