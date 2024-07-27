//function categories: 4 types 
// 1. no argument no return statements.
// 2. no argument with return statements.
// 3. with arguments no return statements.
// 4. with arguments with return statements.

// #include<stdio.h>
// void cube(){
//     int side,res;
//     printf("Enter side;");
//     scanf("%d",&side);
//     res=side*side*side;
//     printf("Cube of Given number:%d",res);
// }
// int main(){
//     cube();
// }

// no argument with return 
#include<stdio.h>
int sum(){
    int a,b;
    printf("Enter number:");
    scanf("%d %d",&a,&b);
    return a+b;
}
int main(){
    printf("Sum of (a+b)=%d",sum());
}