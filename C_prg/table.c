// printing table for the given number : 2*1=2;
#include<stdio.h>
int main(){
    int num,i;
    printf("Enter number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
}