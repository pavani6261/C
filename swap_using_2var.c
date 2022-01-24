#include<stdio.h>
void main()
{
    int *p,*v;
    int a=10,b=20;
    p=&a;
    v=&b;
    printf("before swap numbers are v=%d,b=%d\n",a,b);
    *p= *p+*v;//20+10=30  a=30
    *v=*p-*v;//30-10=20  b=20
    *p=*p-*v;//30-20=10  a=10
    printf("After swap numbers are a=%d,b=%d",a,b);
}
