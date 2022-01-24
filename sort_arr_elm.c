#include<stdio.h>
void main()
{
    int a[10]={3,4,6,8,0,2,1,5,9,7};
    int i,j,temp=0;
    printf("array elements are :\n");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("sorted elements are:\n");
    for(i=0;i<10;i++)
    {
         printf("%d",a[i]);
    }
}
