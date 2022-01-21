#include<stdio.h>
int arrayfn(int a[],int size);
int searchelm(int a[],int size);
int main()
{
    int size;
    int a[100];
    printf("enter size of array\n");
    scanf("%d",&size);
    arrayfn(a,size);
    searchelm(a,size);
}
int arrayfn(int a[],int size)
{
    int i;
    printf("enter array values\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }

}
int searchelm(int a[],int size)
{
    int elm,i,flag=0;
    printf("enter a element to search\n");
    scanf("%d",&elm);
    for(i=0;i<size;i++)
    {
        if(a[i]==elm)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("found the element in the index %d",i);
    }
}
