#include<stdio.h>
void main()
{
    int n1=20;
    int n2=10;
    printf("n1 = %d, n2 = %d\n",n1,n2);
    add(&n1,&n2);
}
int add(int *a,int *b)
{

    printf("a+b=%d\n",*a+*b);
}
