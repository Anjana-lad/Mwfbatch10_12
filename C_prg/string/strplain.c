// string palindrome
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     int temp=0;
//     printf("Enter string:");
//     gets(str);
//     int len=strlen(str);
//     int i=0;
//     while(i<len/2){
//         if(str[i]!=str[len-1-i]){
//             temp=1;
//             break;
//         }
//     i++;
//     }

//     if(temp==1){
//         printf("Not palindrome.");
//     }
//     else{
//         printf("Palindrome");
//     }
// }

//without using strlen 
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    int temp=0,len=0;
    printf("Enter string:");
    gets(str);
     for(int i=0;str[i]!='\0';i++){
        len++;
    }
    printf("Length=%d\n",len);
    int i=0;
    while(i<len/2){
        if(str[i]!=str[len-1-i]){
            temp=1;
            break;
        }
    i++;
    }

    if(temp==1){
        printf("Not palindrome.");
    }
    else{
        printf("Palindrome");
    }
}