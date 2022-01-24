#include<stdio.h>
#include<string.h>
void main()
{
    char *ptr,*rev,ch;
    int l,i;
    char str[20]="Hello world";
    ptr=str;
    rev=str;
    l=strlen(str);
    printf("%d\n",l);
    printf("%s\n",ptr);
    printf("reverse string\n");
    for(i=0;i<l-1;i++)
    {
        rev++;
    }
    for(i=0;i<l/2;i++)
    {
        ch=*rev;
        *rev=*ptr;
        *ptr=ch;
        ptr++;
        rev--;
    }
    printf("%s",str);
}
