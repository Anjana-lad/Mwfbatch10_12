//6. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main(){
    char str[50];//="#radha@123";

    printf("Input the string : ");
    gets(str);
    int alp=0,dig=0,spch=0,i=0;

    while(str[i]!='\0'){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            dig++;
        }
        else{
            spch++;
        }
        i++;
    }
    printf("\nNumber of alphabets = %d\n",alp);
    printf("Number of digits = %d\n",dig);
    printf("Number of special characters = %d\n",spch);
}