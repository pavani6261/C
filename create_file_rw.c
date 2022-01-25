#include<stdio.h>
void main()
{
    FILE *fptr;
    char ch;
    fptr = fopen("firstFile.txt","w");
    printf("enter the content:\n");
    while((ch=getchar()) != '\n')
    {
         putc(ch,fptr);
    }
    fclose(fptr);

    fptr=fopen("firstFile.txt","r");
    printf("file content is :\n");
    while((ch=getc(fptr)) != EOF)
    {
         printf("%c",ch);
    }
    printf("\n End of the file\n");
    fclose(fptr);
}
