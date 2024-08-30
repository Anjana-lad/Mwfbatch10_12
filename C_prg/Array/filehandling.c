// file handling
#include<stdio.h>
int main(){
    FILE *fptr;
    char string[20];
    printf("Enter string:");
    gets(string);
    fptr=fopen("G:\\Mwfbatch10_12\\C_prg\\Array\\stud.txt","w+");
 
    if(fptr==NULL){
        printf("File not created");
    }
    else{
        printf("File created.");
       // fprintf(fptr,string);
        fputs(string,fptr);
    }
    fclose(fptr);
    
    printf("Data entered successfully.");
     
    char str[20];
    FILE *fp;
    fptr=fopen("G:\\Mwfbatch10_12\\C_prg\\Array\\stud.txt","a+");
    printf("Enter new string:");
    gets(str);
    // enter data in file.
    fprintf("str",fp);
    fclose(fp);
    printf("Data added");
}