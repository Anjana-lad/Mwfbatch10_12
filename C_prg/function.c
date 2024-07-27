// // function: parts:
// syntax:
// return_type function_name (argument/parameter list){
//     //function body
// }

#include<stdio.h>
void print();  //function declaration
int sum(){  //function definition
    int a,b,res;
    printf("\n Enter number:");
    scanf("%d %d",&a,&b);
    res=a+b;
    printf("\n Sum(a+b)=%d",res);
}
int main(){
    print();
    sum(); 
    sum(); //function call
    print();
}
void print(){  //function definition
    printf("\n Hello world..");
}