//function categories: 4 types 
// 1. no argument no return statements.
// 2. no argument with return statements.
// 3. with arguments no return statements.
// 4. with arguments with return statements.

// #include<stdio.h>
// void cube(){
//     int side,res;  //local parameter
//     printf("Enter side;");
//     scanf("%d",&side);
//     res=side*side*side;
//     printf("Cube of Given number:%d",res);
// }
// int main(){
//     cube();
// }

// no argument with return 
// #include<stdio.h>
// int sum(){
//     int a,b;
//     printf("Enter number:");
//     scanf("%d %d",&a,&b);
//     return a+b;
// }
// int main(){
//     printf("Sum of (a+b)=%d",sum());
// }

//with arguments no return
// #include<stdio.h>
// int sub_fun(int a,int b){
//    int res=a-b;
//    printf("Result=%d",res);
// }
// int main(){
//     int a,b;  //local parameter
//     printf("Enter numbers:");
//     scanf("%d %d",&a,&b);
//     sub_fun(a,b);
// }

// with argument with return
#include<stdio.h>
int add_fun(int num1,int num2){   //formal parameter
    return num1+num2;
}
int main(){
    int a,b;
    printf("Enter numbers:");
    scanf("%d %d",&a,&b);
    printf("calling function add_fun=%d",add_fun(a,b));  //actual parameter
}