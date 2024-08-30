//1. Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
int main(){

    char str[50];

    printf("Enter name:");
    gets(str);
    int i;

    for(i=0;str[i]!='\0';i++);
    printf("\nString length is = %d",i+1);
}