//9. Write a program in C to find the maximum number of characters in a string.
#include<stdio.h>
int main()
{
char str[100];
int i,j;
char maxch;
int count=0;
int maxcount=0;
printf("Enter string:");
gets(str);
for(i=0;str[i]!='\0';i++){
    count=0;
    for(j=0;str[j]!='\0';j++){
        if(str[i]==str[j]){
            count++;
        }
   }
   if(maxcount<count){
    maxcount=count;
    maxch=str[i];
   }
}
printf("\nThe char '%c' has been repeated maximum of %d times.",maxch,maxcount);
}