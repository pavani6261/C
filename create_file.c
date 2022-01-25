#include<stdio.h>
void main()
{
    FILE *fpt;  // create file pointer
    char ch;
    char filename[50];
    printf("enter file name\n");
    scanf("%s",filename);
    fpt = fopen(filename,"w");
    if(fpt!=NULL)
    {
        printf("%s file created successfully\n",filename);
        fclose(filename);
    }
    else
        printf("failed creating file %s",filename);
}
