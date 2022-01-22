#include<stdio.h>
void main()
{
    int x=20;
    int y=10;
    printf("before swapping x=%d, y=%d\n",x,y);
    call_reference(&x,&y);
    printf("After swapping x=%d,y=%d\n",x,y);
}
int call_reference(int *pt1,int *pt2)
{
    *pt1=10;
    *pt2=20;

    return 0;
}
