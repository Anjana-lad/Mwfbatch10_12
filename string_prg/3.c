//3. Write a program in C to print individual characters of a string in reverse order;
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i;
    
    printf("Enter string name:");
    gets(str);
    int l = strlen(str);

    printf("\nString in reverse order :\n");

    for(i=l;i>=0;i--)
    { 
    printf("%c",str[i]);
    }
}
