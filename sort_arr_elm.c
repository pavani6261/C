#include<stdio.h>
void main()
{
    int a[10]={3,4,6,8,0,2,1,5,9,7};
    int *b;
    b=&a[0];
    printf("array elements are :\n");
    for(int i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    int (*sort) (int); //function pointer
    sort=sorting(a);



    int i,j,temp=0;

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*(b+i)>*(b+j))
                {
                    temp=*(b+i);
                    *(b+i)=*(b+j);
                    *(b+j)=temp;
                }
        }
    }
    printf("\n sorted elements with pointer are:\n");
    for(i=0;i<10;i++)
    {
         printf("%d",a[i]);
    }

}
int sorting(int a[]) //sorting function
{
    int i,j,temp=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i]; /// swapping
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
