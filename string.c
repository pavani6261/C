
#include<stdio.h>
#include<string.h>
void main()
{
    char strs[50][50];
    int n,i,flag=0;
    //printf("%s",st1);
    //printf("\n length of the string is:%d\n",strlen(st1));
    //printf("\nstring:%s",strstr(st1,"come"));
    printf("enter number of strings:\n");
    scanf("%d",&n);
    printf("enter the strings:\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",&strs[i]);
    }
    char st2[50];
    printf("enter the string for search:\n");
    scanf("%s",&st2);
    for(i=0;i<n;i++)
    {
        if(strcmp(strs[i],st2)==0)
        {
           flag=1;
        }
    }
    if(flag==1)
        printf("string 2 is in string 1");
    else
        printf("string 2 is not in string 1");

}

