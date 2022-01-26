#include<stdio.h>
#include<stdlib.h>
void main()
{
    //FILE *fp;
    //printf("enter the filename to create file:\n");
    //scanf("%s",filename);
    createFile();
    writereadContent();
    readNchar();
}
void createFile()
{
    FILE *fp;
    fp=fopen("textContent.txt","w");
    if(fp == NULL)
    {
        printf("failed to create file\n");
        exit(0);
    }
    printf("file created successfully\n");
    fclose(fp);
}
void writereadContent()
{
    FILE *fp;
    char ch;
    fp=fopen("textContent.txt","a");
    printf("enter the text to file:\n\n");
    while((ch=getchar()) != '\n')
    {
         putc(ch,fp);
    }
    fclose(fp);
    //read the content from the file
    fp = fopen("textContent.txt","r");
    printf("text in file is:\n\n");
    while((ch=getc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    printf("\n\n");
    fclose(fp);
}
void readNchar()
{
    FILE *fp;
    int n;
    char ch[100];
    fp = fopen("textContent.txt","r");
    printf("enter number of characters:\n");
    scanf("%d",&n);
    if(fread(ch,1,n,fp) == n)
    {
        ch[n]='\0';
        puts(ch);
    }
    printf("size is big");
    fclose(fp);
}
