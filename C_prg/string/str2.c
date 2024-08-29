// string function strlen,strlwr,strupr,strcpy;
/*
string function: for using string function we have to include string .h header file
1. string length: strlen();
2. string lower: strlwr();
3. string upper: strupr();
4. string copy: strcpy(destination,source);
5. string concatenate: strcat();
string compare:strcmp();

        if both the string are same: 0
        if str1>str2 =1
        if str1<str2=-1
7.string set: strset();
8. string inside string : strstr(str,"another string");
9. string character: strchr(str,'character');
10. string reverse: strrev(string);
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[20],str1[20],str3[20],ch[10];
    printf("Enter string1:");
    gets(str);
    printf("Enter string2:");
    gets(str1);

//     int len=strlen(str);
//     printf("\n Length of string=%d",len);
//    int len1=strlen(str1);
//     printf("\n Length of string=%d",len1);
   
    // string to lower and upper case
    // printf("\n String to lower case:%s",strlwr(str));
    // // string to upper
    // printf("\n String upper:%s",strupr(str1));
   // string copy 
//    printf("\n string copy:%s",strcpy(str3,str1));
//     printf("\n string copy:%s",strcpy(str3,str));
  
  // string concate
  //printf("\n string concatenate:%s",strcat(str,str1));

  // string reverse
 // printf("\n string reverse:%s",strrev(str));
  // string compare
  //printf("\n string compare: %d",strcmp(str,str1));

  //string inside string 
  printf("Enter string to extract:");
  //scanf("%s",&ch);
  gets(ch);
  printf("\n String inside string:%s",strstr(str1,ch));

  // string set;
  printf("\n string string set:%s",strset(str1,'s'));
}
