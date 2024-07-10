//program to check weather number is even or odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter number.");
    scanf("%d",&num);
    if(num%2 != 0){
        printf("Number is odd.");
    }
    else{
        printf("Number is even.");
    }
}