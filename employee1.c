#include<stdio.h>
void main()
{
    struct EmpDetails
    {
        char name[20];
        int ID[10];

        struct
        {
            char name[20];
            char ID[10];

            struct
            {
                char div[20];
            }depDivision;

        }depDetails;

    }emp[10];
    int n,i;
    printf("enter number of records:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter employee details of record %d:\n",i);
        printf("enter employee name:");
        scanf("%s",emp[i].name);
        printf("enter employee Id:");
        scanf("%d",emp[i].ID);
        printf("enter employee department name:");
        scanf("%s",emp[i].depDetails.name);
        printf("enter employee department Id:");
        scanf("%s",emp[i].depDetails.ID);
        printf("enter employee department division name:");
        scanf("%s",emp[i].depDetails.depDivision.div);
        printf("-------------------------\n");
    }
    printf("-------------------------\n");
    printf("-------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("employee details of record %d:\n",i);
        printf("employee name= %s\n",emp[i].name);
        printf("employee Id= %d\n",emp[i].ID);
        printf("employee department name= %s\n",emp[i].depDetails.name);
        printf("employee department Id= %s\n",emp[i].depDetails.ID);
        printf("enter employee department division name= %s\n",emp[i].depDetails.depDivision.div);
        printf("-------------------------\n");
    }
}
