#include<stdio.h>
void main()
{
    int i,j,n,temp=0;
    int a[100];
    printf("enter array size\n");
    scanf("%d",&n);
    printf("enter numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d is second largest number\n",a[n-2]);
    printf("%d is second smallest number\n",a[1]);
}

