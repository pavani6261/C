#include<stdio.h>
void main()
{
    struct
    {
        int id;
        char name[20],des[20];
        float salary;

    }emp1[10];

    struct
    {
            char depName[20];
    }dep2[10];
    //struct employee emp1[10];
    //struct department dep2[10];

    FILE *femp,*fdep;
    femp=fopen("emp.txt","r");
    openFile(femp);
    int n;
    printf("enter number of records\n");
    scanf("%d",&n);
    int j;
    for(j=0;j<n;j++)// i=0,0<3 goes into the loop until condition fails
    {

        fread(&emp1[j],sizeof(emp1),1,femp);//read the values from file emp.txt
        printf("record %d is ID=%d, name=%s, designation=%s, salary=%.2f\n",j,emp1[j].id,emp1[j].name,emp1[j].des,emp1[j].salary);
    }
    fclose(femp);

    fdep=fopen("empdep.txt","r");
    openFile(fdep);
    for(int i=0;i<n;i++)// i=0,0<3 goes into the loop until condition fails
    {
        fread(&dep2[i],sizeof(dep2),1,fdep);//read the values from file emp.txt
        printf("Department %d is: %s\n",i,dep2[i].depName);
    }
    fclose(fdep);

}
void openFile(FILE *fp)
{
    if(fp == NULL) // if file in pointer fpt is null print file not created
    {
        printf("file not found");
        exit(1);
    }

}
