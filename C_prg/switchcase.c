// switch case.
// check which week day is enter.
// switch (expression)
// {
// case case_num:
//     /* code */
//     break;
//case case_num:
//   code;
//break;
// default:
//     break;
// }
#include<stdio.h>
int main(){
    int days;
    printf("Enter number:");
    scanf("%d",&days);
    switch (days)
    {
    case 1:
        printf("Monday");
        break;
     case 2:
        printf("Tuesday");
        break;
     case 3:
        printf("Wednesday");
        break;
     case 4:
        printf("Thursday");
        break;
     case 5:
        printf("Friday");
        break;
     case 6:
        printf("Saturday");
        break;
     case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid choice");
        break;
    }
}