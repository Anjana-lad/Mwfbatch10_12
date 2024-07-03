//assignment operator: +=,-=,*=,/=,%=;
//num=num+20; //num+=20;
#include<stdio.h>
int main(){
     int num1,num2;
    printf("Enter number:");
    scanf("%d %d",&num1,&num2);
    printf("\n Num1=%d",num1);
    printf("\n num2=%d",num2);
    num1+=num2;  //num1=num1+num2
    printf("\n Num1=%d",num1);
    num1-=num2; 
    printf("\n Num2=%d",num2);
    num1*=4;
    printf("\n Num1=%d",num1);
    num1/=2;
    printf("\n num1=%d",num1);
}