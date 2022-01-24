#include<stdio.h>
void main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
    int *pt,*pt2;
    pt=a;
    pt2=a;
    int i;
    printf("array elements are:\n");
    for(i=0;i<9;i++)
    {
         printf("%d",a[i]);
    }
    printf("\n reverse of array elements are:\n");
    for(int i=8;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    printf("\n reverse of array elements using pointers are:\n");
    for(i=0;i<8;i++)
    {
         pt2++;
    }
    for(i=0;i<5;i++)
    {
        *pt=*pt + *pt2;
        *pt2=*pt - *pt2;
        *pt=*pt-*pt2;
        pt2--;
        pt++;
    }
    for(i=0;i<9;i++)
    {
        printf("%d",a[i]);
    }
}
