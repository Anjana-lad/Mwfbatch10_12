//armstrong number :it is a number of it cube of its individual number;
//eg: 153= 1^3+5^3+3^3= 1+125+27  =153;
#include<stdio.h>
int main(){
    int num=153,rem,sum=0;
    // printf("Enter number:");
    // scanf("%d",&num);
    int ori_num=num;
    while(num>0){
        rem=num%10;
        sum+=rem*rem*rem;
        num/=10;
    }
    printf("Sum=%d",sum);
if(ori_num==sum){
    printf("\n It is an armstrong number.");
}
else{
    printf("\n It is  not an armstrong number. ");
}
}