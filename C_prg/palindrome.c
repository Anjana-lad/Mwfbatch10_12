//palindrome number: It is the number which is same from both the side.
#include<stdio.h>
int main(){
    int num,original_num,rem,rev=0;
    printf("Enter number=");
    scanf("%d",&num);
    original_num=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }

    if(rev==original_num){
        printf("It is palindrome.");
    }
    else{
        printf("Not a palindrome.");
    }

}