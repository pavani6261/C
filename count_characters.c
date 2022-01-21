
#include<stdio.h>
#include<string.h>
void main()
{
    char str[50];
    printf("enter a string:\n");
    gets(str);
    count_char(str);
}
void count_char(char s[])
{
    int Vowels=0,Consonants=0,Digits=0,Spaces=0,Sepcial_char=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
           s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            Vowels++;
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            Consonants++;
        }
        else if(s[i]>= '0' && s[i]<='9')
        {
            Digits++;
        }
        else if(s[i]==' ')
        {
            Spaces++;
        }
        else
        {
            Sepcial_char++;
        }
    }
    printf("Vowels = %d\n Consonants = %d\n Digits = %d\n White_Spaces = %d\n Sepcial_Symbols = %d",
           Vowels,Consonants,Digits,Spaces,Sepcial_char);
}

