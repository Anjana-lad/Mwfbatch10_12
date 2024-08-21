// string length without using in-built function 
#include<stdio.h>
int main(){
    char str[10];
    int len=0;
    printf("Enter string:");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        len++;
    }
    printf("Length=%d",len);
}