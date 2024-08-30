//14. 14. Write a program in C to combine two strings manually
#include<stdio.h>
#include<string.h>
int main(){
    char str1[150];
    char str2[150];
    int i,j;

    printf("Enter string : ");
    gets(str1);
    printf("Enter string : ");
    gets(str2);

    printf("\nAfter combine two string : %s %s ",str1,str2);


}