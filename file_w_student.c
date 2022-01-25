#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id,age;
    char name[20];
    char course[20];
}st[5];
void main()
{
    FILE *sfptr;
    //struct student st;
    sfptr= fopen("student_details.txt","w");
    if(sfptr == NULL)
    {
        printf("failed to create file\n");
        exit(1);
    }
    for(int i=0;i<5;i++)
    {
        printf("enter student details of %d:\n",i);
        printf("enter student Id\n");
        scanf("%d",&st[i].id);
        printf("enter student age\n");
        scanf("%d",&st[i].age);
        printf("enter student name\n");
        scanf("%s",&st[i].name);
        printf("enter student course\n");
        scanf("%s",&st[i].course);
        fwrite(&st[i], sizeof(struct student), 1, sfptr);
    }
    fclose(sfptr);
    if(fopen("student_details.txt","r")==NULL)
    {
        printf("ERROR ! \n");
        exit(1);
    }
    for(int i=0;i<5;i++)
    {
        fread(&st[i], sizeof(struct student), 1, sfptr);
        printf("student details of %d record are : \n",i);
        printf("Id = %d\tAge = %d\tName = %s\tCourse = %s\n",st[i].id,st[i].age,st[i].name,st[i].course);
    }
    fclose(sfptr);
}
