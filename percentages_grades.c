#include<stdio.h>
void main()
{
    int phy,che,bio,mat,com;
    float sum=0;
    float per;
    printf("enter Physics,Chemistry,Biology,Mathematics and Computer marks\n");
    scanf("%d%d%d%d%d",&phy,&che,&bio,&mat,&com);
    sum= phy+che+bio+mat+com;
    printf("\n %.2f is total marks",sum);
    per=(sum/500)*100;
    printf("\n %.2f is percentage",per);
    if(per >=90 )
    {
        printf("\n Grade A");
    }
    else if(per >= 80)
    {
        printf("\n Grade B");
    }
    else if(per >= 70)
    {
        printf("\n Grade C");
    }
    else if(per >= 60)
    {
        printf("\n Grade D");
    }
    else if(per >= 40)
    {
        printf("\n Grade E");
    }
    else
        printf("\n Grade F");
}
