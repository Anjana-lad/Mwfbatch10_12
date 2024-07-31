//recursion :- It refers to the function that the function call itself in that its own function.
//In short it is function calling itself.

// #include<stdio.h>
// int recur(int n){    //function recur 
//     if(n!=0){
//         return n * recur(n-1);  //recursive function
//     }
//     else{
//         return 1;
//     }
// }
// int main(){
//     int num;
//     printf("Enter number:");
//     scanf("%d",&num);
//     printf("Factorial=%d",recur(num));
// }

// sum of natural numbers using recursion .
#include<stdio.h>
int sum(int n){
    if(n!=0){
        return n+sum(n-1);
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Sum of natural numbers=%d",sum(num));

}