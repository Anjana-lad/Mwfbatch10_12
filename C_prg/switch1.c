// to make menu driven calculator;
#include<stdio.h>
int main(){
    char choice;
    int num1,num2;
  printf("\n Select your choice:");
    printf("\n Addition : +");
    printf("\n Subtraction: -");
    printf("\n Multiplication: *");
    printf("\n Division: /");
    printf("\n Enter choice: ");
    scanf("%c",&choice);
    switch (choice)
    {
    case '+':
        printf("Enter number:");
        scanf("%d %d",&num1,&num2);

        printf(" Addition=%d",num1+num2);
        break;
     case '-':
        printf("Enter number:");
        scanf("%d %d",&num1,&num2);

        printf(" Subtraction=%d",num1-num2);
        break;
    case '*':
         printf("Enter number:");
        scanf("%d %d",&num1,&num2);

        printf(" Multiplication=%d",num1*num2);
        break;
 
    case '/':
         printf("Enter number:");
        scanf("%d %d",&num1,&num2);

        printf(" Division=%d",num1/num2);
        break;
    default:
        printf("Invalid choice...");
        break;
    }
}