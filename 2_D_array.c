#include<stdio.h>
#define ROW 3
#define COL 3
void main()
{
    int arr[ROW][COL];
    arrofrowcol(arr);
}
void arrofrowcol(int a[ROW][COL])
{
    int i,j;
    printf("enter elements of array :\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("entered array elements in a matrix form are :\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
