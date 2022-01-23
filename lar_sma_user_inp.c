
#include<stdio.h>
#include<conio.h>
#define esc 000
void main()
{
    int n,i,large=0,small=0;
    printf("enter numbers:\n");
    for(i=0;;i++)
    {
        scanf("%d",&n);
        if(n==esc)
        {
            break;
        }
        if(n > large)
        {
            large= n;
        }
    }
    printf("%d is the largest number\n",large);

}


