/*
#include<stdio.h>
#include<string.h>
void main()
{
char str[100],maxchar;
int count=0;
int n,max=0;
int i,j;
printf("enter the string");
gets(str);
n=strlen(str);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
    if(str[i]==str[j])
    {
        count++;
    }
}
if(max<count)
{
    max=count;
    maxchar=str[i];
}
}
printf("%c is repeated maximum %d times",maxchar,max);

}
*/
