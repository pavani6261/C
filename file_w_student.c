#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id,age;
    char name[20];
    char course[20];
}st;
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
        printf("enter student details:\n");
        printf("enter student Id\n");
        scanf("%d",&st.id);
        printf("enter student age\n");
        scanf("%d",&st.age);
        printf("enter student name\n");
        scanf("%s",&st.name);
        printf("enter student course\n");
        scanf("%s",&st.course);
        fwrite(&st, sizeof(struct student), 1, sfptr);

    fclose(sfptr);
    if(fopen("student_details.txt","r")==NULL)
    {
        printf("ERROR ! \n");
        exit(1);
    }

        fread(&st, sizeof(struct student), 1, sfptr);
        printf("student details are : \n");
        printf("Id = %d\tAge = %d\tName = %s\tCourse = %s\n",st.id,st.age,st.name,st.course);

    fclose(sfptr);
}
