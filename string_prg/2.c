//2. Write a program in C to separate individual characters from a string
#include<stdio.h>
int main(){
    char str[50];
    printf("Enter name:");
    gets(str);

    printf("\nSeparation of individual characters:\n\n");
    for(int i=0;str[i]!='\0';i++)
    {
        printf("%c\t",str[i]);

    }
    
}