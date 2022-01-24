#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v=2;
    int *p;
    int **d;
    p=&v;
    d=&p;
    printf("Hello world!\n");
    printf("value in var v=%d\n",v);
    printf("value in var v=%d using pointer \n",*p);
    printf("value in var v=%d using double pointer \n",**d);
    printf("address of var  =%d\n",&v);
    printf("address of var using pointer p =%d\n",p);
    printf("address of var using double pointer d=%d\n",*d);
    printf("address of p using pointer =%d\n",&p);
    printf("address of p using double pointer p =%d\n",d);
    printf("address of double pointer =%d\n",&d);
    printf("\n");
    printf("printing address in Hexadecimal format\n");
    printf("address of var using pointer p =%p\n",p);
    printf("address of var using double pointer d=%p\n",*d);
    printf("address of p using pointer =%p\n",&p);
    printf("address of p using double pointer p =%p\n",d);
    printf("address of double pointer =%p\n",&d);
    return 0;
}
