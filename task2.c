#include<stdio.h>
void main()
{
    int a,b,c,temp=0;
    printf("enter values of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        //temp=a;
        if(b>c)
        {
            printf("\n %d is second largest value ",b);
        }
        else
        {
            printf("\n %d is second largest value ",c);
        }
    }
    else if(b>a && b>c)
    {
        if(a>c)
        {
            printf("\n %d is second largest value ",a);
        }
        else
        {
            printf("\n %d is second largest value ",c);
        }
    }
    else if(c>a && c>b)
    {
       if(a>b)
        {
            printf("\n %d is second largest value ",a);
        }
        else
        {
            printf("\n %d is second largest value ",b);
        }
    }

    /*if(a<b)
    {
        temp=a;
        b=a;
        a=temp;
    }*/
}
