#include<stdio.h>
void main()
{
    struct student
    {
        char name[20];
        int rolNo[3];
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
    struct admin a;
    int n;
    printf("enter n value\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter %d records:\n",i);
        printf("enter student name: ");
        scanf("%s",a.s[i].name);
        printf("enter student roll number: ");
        scanf("%d",a.s[i].rolNo);
        printf("enter teacher name: ");
        scanf("%s",a.t[i].name);
        printf("enter teacher subject: ");
        scanf("%s",a.t[i].sub);
        printf("enter teacher id: ");
        scanf("%s",a.t[i].id);
        printf("enter non teaching staff name: ");
        scanf("%s",a.nt[i].name);
        printf("enter non teaching staff id: ");
        scanf("%s",a.nt[i].id);

    }printf("----------\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d records:\n",i);
        printf("enter student name: %s\n",a.s[i].name);
        printf("enter student roll number: %d\n",a.s[i].rolNo);
        printf("enter teacher name: %s\n",a.t[i].name);
        printf("enter teacher subject: %s\n",a.t[i].sub);
        printf("enter teacher id: %s\n",a.t[i].id);
        printf("enter non teaching staff name: %s\n",a.nt[i].name);
        printf("enter non teaching staff id: %s\n",a.nt[i].id);
    }
}
