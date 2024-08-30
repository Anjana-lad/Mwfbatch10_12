//7. Write a program in C to copy one string to another string.;
#include<stdio.h>
int main(){
    char s1[50]="radhika";
    char s2[50]="priyanka";

    printf("Before copying string :\ns1 = %s\ns2 = %s\n",s1,s2);
    printf("\nAfter copying string :\ns2 = %s",strcpy(s2,s1));
}