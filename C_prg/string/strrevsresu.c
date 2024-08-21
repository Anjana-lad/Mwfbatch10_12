// string reverse using recursion
#include<stdio.h>
int rev_str(){
     char ch;
    scanf("%c",&ch);
        if(ch!='\n'){
            rev_str();
        }
    printf("%c",ch);
}


int main(){
     printf("Enter string:");
    rev_str();
}

