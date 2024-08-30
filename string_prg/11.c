//11.Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.;
#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i;
    printf("Enter string: ");
    gets(str);

    printf("\nEntered string is : %s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122) // for = >a <z
        str[i]=str[i]-32;
        else if (str[i]>=65 && str[i]<=90) // for = >A <Z
        str[i]=str[i]+32;
    }
    printf("\n\nAfter converting a string : %s",str);
}