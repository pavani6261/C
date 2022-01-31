//#include<stdio.h>
//struct
//{
//    char depName[20];
//}empDep[10]; // structure
//void main()
//{
//    FILE *fpt;
//    char filename[20];
//    int n;
//    printf("enter a file name to create:\n");
//    scanf("%s",filename);//filename = emp.txt
//    fpt= fopen(filename,"w");// create or open the file emp.txt
//    if(fpt == NULL) // if file in pointer fpt is null print file not created
//    {
//        printf("file not created");
//        exit(1);
//    }
//    printf("enter number of records:\n");
//    scanf("%d",&n); // takes n value =3
//    for(int i=0;i<n;i++) // i = 0,0<3 //1<3 goes into the loop again
//    {
//        printf("Department of %d is:\n",i);
//        scanf("%s",&empDep[i].depName);
//        fwrite(&empDep[i],sizeof(empDep),1,fpt);
//    }                                     // writes these values into the file emp.txt // i++; i=1
//
//    fclose(fpt); //close the file
//    readFile(filename, fpt,n);
//}
//void readFile(char filename[20],FILE *fpt, int n)
//{
//    fopen(filename,"r");// opens the file in read mode
//    if(fpt == NULL) // if it is null goes into the if statement
//    {
//        printf("file not found");;
//        exit(1); // exit this program
//    }
//    for(int i=0;i<n;i++)// i=0,0<3 goes into the loop until condition fails
//    {
//        fread(&empDep[i],sizeof(empDep),1,fpt);//read the values from file emp.txt
//        printf("Department %d is: %s\n",i,empDep[i].depName);
//        //print the values on the console
//    }
//    fclose(fpt);
//}
