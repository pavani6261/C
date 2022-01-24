#include<stdio.h>
#define ROW 3
#define COL 3
void main()
{
    int i,j;
    int a[3][3],b[3][3],c[3][3];
    printf("enter first matrix elements\n");
    matrixIp(a);
    printf("enter second matrix elements\n");
    matrixIp(b);
    matrixMul(a,b,c);
    printf("product of two matrices is:\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d\t",*(*(c+i)+j));
            printf(" ");
        }printf("\n");
    }
}
void matrixIp(int m[][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",(*(m+i)+j));
        }
    }

}
void matrixMul(int m1[][COL],int m2[][COL],int m3[][COL])
{
    int i,j,k;
    int sum;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            sum=0;
            for(k=0;k<COL;k++)
        {
            sum += (*(*(m1+i)+k)) * (*(*(m2+k)+j));

        }
        *(*(m3+i)+j)=sum;
        }
    }
}
