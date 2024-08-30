//5. Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
int compare(char s1[],char s2[]){
    int flag=0,i=0;
    while(s1[i]!='\0' && s2[i]!='\0'){
        if(s1[i]!=s2[i]){
            flag=1;
            break;
        }
        i++;
    }
    if(s1[i]!='\0' || s2[i]!='\0'){
        return 1;
    }
    if (flag==0)
        return 0;
    else
        return 1;
}
int main(){

    char  str1[20],str2[20];

    printf("Enter string1: ");
    gets(str1);
    printf("Enter string2: ");
    gets(str2);

    int c=compare(str1,str2);

    if(c==0){
        printf("\nGiven String '%s' & '%s are same.",str1,str2);
    }
    else{
        printf("\nGiven String '%s' & '%s are diffrent.",str1,str2);
    }
}