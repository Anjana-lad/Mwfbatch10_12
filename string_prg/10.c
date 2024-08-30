//10.Write a program in C to extract a substring from a given string;
#include<stdio.h>
#include<string.h>
int main(){
    char s[30];
    char s2[30];
    printf("Enter string: ");
    scanf("%s",&s);
    printf("Enter word to extract a substring: ");
    scanf("%s",&s2);

    printf("\nEntered string is : %s",s);

    printf("\nAfter extract a substring from a given string : %s",strstr(s,s2));
}