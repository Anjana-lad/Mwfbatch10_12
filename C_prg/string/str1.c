// strings: they are group of characters.
#include<stdio.h>
int main(){
    char str[]="welcome to the world of programming.", str1[2];
    printf("String is=%s\n",str);
    printf("Enter the string:");
   scanf("%[^\n]s",&str1);
  //  gets(str1);
    printf("\n string 2=%s",str1);
}

/*
string function: for using string function we have to include string .h header file
1. string length: strlen();
2. string lower: strlwr();
3. string upper: strupr();
4. string copy: strcpy(destination,source);
5. string concatenate: strcat();
6.string compare:strcmp();
        if both the string are same: 0
        if str1>str2 =1
        if str1<str2=-1
7.string set: strset();
8. string inside string : strstr(str,"another string");
9. string character: strchr(str,'character');
*/