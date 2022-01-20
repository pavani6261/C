#include<stdio.h>
void main()
{
   int i,j,row;
   printf("Enter number of rows\n");
   scanf("%d",&row);
   for(i=0;i<row;i++)
   {
        for(j=i;j<row;j++)
        {
            printf("*");
        }
       printf("\n");
   }
   for(i=1;i<=row;i++)
   {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
       printf("\n");
   }
   printf("\n");
   //*************************//
   for(i=1;i<=row;i++)
   {
        for(j=i;j<=row;j++)
        {
            printf("%d",j);
        }
       printf("\n");
   }
   for(i=1;i<=row;i++)
   {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
       printf("\n");
   }
   ///****************************///
   printf("\n");
   int k=1;

   for(i=1;i<=row;i++)
   {
        for(j=i;j<=row;j++)
        {
            printf("%d",k*2);
        }
       printf("\n");
   }
   for(i=1;i<=row;i++)
   {
        for(j=1;j<=i;j++)
        {
            printf("%d",k*2);
        }
       printf("\n");
   }
   printf("\n");
   //*************************//
   int a=5;
   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(i!=j)
           printf("@");
           else
            printf(" ");
       }
       printf("\n");
   }
   //************************//
    printf("\n");

   for(i=0;i<5;i++)
   {
       for(j=0;j<5;j++)
       {
           if(i==j)
           printf("@");
           else
            printf(" ");
       }
       printf("\n");
   }
   //************************//
    printf("\n");


    for(i=row;i>=1;i--)
   {
        for(j=row;j>=i;j--)
        {
            printf("*");
        }
       printf("\n");
   }
   for(i=row-1;i>=1;i--)
   {
        for(j=i;j>=1;j--)
        {
            printf("*");

        }
       printf("\n");
   }
   printf("\n");
}
