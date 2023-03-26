#include <stdio.h>
#include <stdlib.h>

#include "../database/database.c"

int main()
{
    int num_students; //Size of the memory that will be Allocated.
    int mode; // Admin OR User?.

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
 for(int i=0; i<num_students; i++)
    {
        printf("Enter Student ID\n");
        scanf("%d", &((students+i)->id));
        printf("Enter Student Age\n");
        scanf("%d", &((students+i)->age));
        printf("Enter Student gender\n");
        scanf("%s", &((students+i)->gender));

    }

    for(int s=0; s<2; s++)
    {
        printf("%d", (students+s)->id);
        printf("%d", (students+s)->age);
        printf("%s", ((students+s)->gender));
    }

    return 0;
}
