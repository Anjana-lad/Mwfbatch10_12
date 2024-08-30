//4. Write a program in C to count the total number of words in a string.
#include<stdio.h>
int main(){
    char str[50];//="radhika khatri";
    printf("Enter string:");
    gets(str);
    int i=0;
    int word=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
            word++;
            i++;
    }
     printf("\nTotal %d number of words in a string.",word);
}