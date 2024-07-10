//bitwise operator :=> &,|,>>,<<,^,~
// A   B  A&b   a|b   a^b  
// 0   0   0     0     0
// 0   1   0     1     1
// 1   0   0     1     1
// 1   1   1     1     0
// syntax for negation(~) => ~num = -(num+1)
#include<stdio.h>
int main(){
    int num,num2;
    printf("Enter number:");
    scanf("%d %d",&num,&num2);
    printf("\n Bitwise And=%d",num&num2);
    printf("\n Bitwise OR=%d",num|num2);
    printf("\n bitwise XOR=%d", num^num2);
    printf("\n negation= %d",~num);
}