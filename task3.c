
#include<stdio.h>
void main()
{
    int i;
    int n;
    printf("enter n values\n");
    scanf("%d",&n);
    int a[n];
    printf("enter a values\n");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int temp;
    for(i=0;i<n;i++)
    {
        if(temp>a[i])
        {
            temp=a[i];
        }
    }
        printf("\n %d is smallest number",temp);
}

