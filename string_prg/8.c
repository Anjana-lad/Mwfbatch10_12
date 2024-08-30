//8. Write a program in C to count the total number of vowels or consonants in a string.#
#include<stdio.h>
int main(){
    char str[]="rAshmi";
    int i=0,vow=0,con=0;

    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ){
            vow++;
        }
        else{
            con++;
        }
        i++;
        
    }
        printf("Given string '%s'.",str);
        printf("\n\nvowels = %d",vow);
        printf("\nconsonant = %d",con);

}