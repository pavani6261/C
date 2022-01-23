
#include<stdio.h>
void main()
{
    int m;

    int days_31=31;
    int days_30=30;
    int days_28=28;
    printf("enter a month number\n");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
        printf("January\n");
        months_days(days_31);
        break;
    case 2:
        printf("February\n");
        months_days(days_28);
        break;
    case 3:
        printf("March\n");
        months_days(days_31);
        break;
    case 4:
        printf("April\n");
        months_days(days_30);
        break;
    case 5:
        printf("May\n");
        months_days(days_31);
        break;
    case 6:
        printf("June\n");
        months_days(days_30);
        break;
    case 7:
        printf("July\n");
        months_days(days_31);
        break;
    case 8:
        printf("August\n");
        months_days(days_31);
        break;
    case 9:
        printf("September\n");
        months_days(days_30);
        break;
    case 10:
        printf("October\n");
        months_days(days_31);
        break;
    case 11:
        printf("November\n");
        months_days(days_30);
        break;
    case 12:
        printf("December\n");
        months_days(days_31);
        break;
    default:
        printf("it is not a month");
        break;
    }
}
void months_days(int days)
{
    int i,j,d=1;
    char a[10][10]={"Sun","Mon","Tues","Wed","Thur","Fri","Sat"};
    if(days==31)
    {
    for(i=0;i<7;i++)
    {

        printf("\t%s",a[i]);

    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("\t%d",d);
            d++;
            if(d>31)
                break;
        }
        printf("\n");
    }
    }
    else if(days==30)
    {
    for(i=0;i<7;i++)
    {
        printf("\t%s",a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("\t%d",d);
            d++;
            if(d==31)
                break;
        }
        printf("\n");
    }
    }
    else
    {
    for(i=0;i<7;i++)
    {
        printf("\t%s",a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<7;j++)
        {
            printf("\t%d",d);
            d++;
            if(d==28)
                break;
        }
        printf("\n");
    }
    }
}
