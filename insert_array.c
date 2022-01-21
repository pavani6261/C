
#include<stdio.h>

void main()
{

    int size,i,p,v;
    int a[size];
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the values of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position of value \n");
    scanf("%d",&p);
    printf("enter the position of value \n");
    scanf("%d",&v);
    printf("after inserting:\n");

    for(i=0;i<size;i++)
    {
        if(i==p)
        {
            a[p]=v;
            i+1;
            break;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
