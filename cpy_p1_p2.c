#include<stdio.h>
void main()
{
    int *pt1,*pt2,*em;
    int a[6];
    int b[6];
    pt1=a;
    pt2=b;
    em=&a[5];
    printf("enter array elements:\n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array elements are:\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n array 2 elements after copying:\n");
    while(pt2<= em)
    {
        *pt2= *pt1;
        pt2++;
        pt1++;
    }
    for(int i=0;i<6;i++)
    {
        printf("%d\t",b[i]);
    }
}
