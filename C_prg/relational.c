//relational operators: <,>,<=,>=,!=,==
#include<stdio.h>
int main(){
    int num1,num2,res;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    res=(num1>num2);
    printf("\n Greater :%d",res);
     res=(num1<num2);
    printf("\n less then  :%d",res);
     res=(num1>=num2);
    printf("\n Greater equal :%d",res);
     res=(num1<=num2);
    printf("\n less then equal :%d",res);
    res= num1 != num2;
    printf("\n Not equal=%d",res);
    res=(num1==num2);
    printf("\n Double equal to=%d",res);
}