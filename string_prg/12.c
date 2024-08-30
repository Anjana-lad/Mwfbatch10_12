//12. Write a program in C to find the number of times a given word 'is' appears in the given string.;
#include<stdio.h>
#include<string.h>
int main(){
    char str[50],word[]=" is ";
    int i,j,ls,lw,temp,countw=0,chk;
    printf("Enter  string.\n");
    gets(str);
    ls=strlen(str);
    lw=strlen(word);
    for(i=0;i<ls;i++){
        temp=i;
        for(j=0;j<lw;j++){
            if((str[i]==word[j]))
            i++;
        }
        chk=i-temp;
        if(chk==lw)
        countw++;
        i=temp;
    }
    printf("\n'is' occurrence %d times.",countw);
    return 0;
}