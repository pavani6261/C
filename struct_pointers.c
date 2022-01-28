#include<stdio.h>
void main()
{
    struct student
    {
        char name[20];
        char rolNo[3];
    };
    struct teachingStaff
    {
        char name[20];
        char sub[20];
        char id[3];
    };
    struct nonteachingStaff
    {
        char name[20];
        char id[3];
    };
    struct admin
    {
        struct student s[10];
        struct teachingStaff t[10];
        struct nonteachingStaff nt[10];
    };
    struct admin b[3];
    struct admin *ptr = NULL;
    ptr=b;

    for(int i=0;i<3;i++)
    {
        printf("enter %d records:\n",i+1);
        printf("enter student name: ");
        scanf("%s",ptr->s[i].name);
        printf("enter student roll number: ");
        scanf("%s",ptr->s[i].rolNo);
        printf("enter teacher name: ");
        scanf("%s",ptr->t[i].name);
        printf("enter teacher subject: ");
        scanf("%s",ptr->t[i].sub);
        printf("enter teacher id: ");
        scanf("%s",ptr->t[i].id);
        printf("enter non teaching staff name: ");
        scanf("%s",ptr->nt[i].name);
        printf("enter non teaching staff id: ");
        scanf("%s",ptr->nt[i].id);
    ptr++;
    }
    ptr=b;
    printf("----------\n");
    for(int i=0;i<3;i++)
    {
        printf(" %d records:\n",i);
        printf("enter student name: %s\n",ptr->s[i].name);
        printf("enter student roll number: %s\n",ptr->s[i].rolNo);
        printf("enter teacher name: %s\n",ptr->t[i].name);
        printf("enter teacher subject: %s\n",ptr->t[i].sub);
        printf("enter teacher id: %s\n",ptr->t[i].id);
        printf("enter non teaching staff name: %s\n",ptr->nt[i].name);
        printf("enter non teaching staff id: %s\n",ptr->nt[i].id);

        ptr++;
    }
}
