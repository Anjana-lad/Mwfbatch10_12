//pointer : It is used to store the address of another variable.

#include<stdio.h>
int main(){
    int num=10;
    char ch='A';
    int *ptr;
    int *ptr2;
    ptr=&num; 
    ptr2=&ch;
    printf("value and address of num=%d and address=%p",num,ptr);
    printf("\n Ch=%c and address of ch=%p",ch,ptr2);
}