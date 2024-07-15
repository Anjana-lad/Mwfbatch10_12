// loops has basically three parts
// 1. initialization part.
// 2. condition part.
// 3. increment/decrement part.

// //basic  to write/printf numbers from 1 to 10;
// 1. for(intialization;condition;increment/decrement){
//     //bady of the loop
// }
// #include<stdio.h>
// int main(){
//   int i;
//     for(i=0;i<10;i++){
//         printf("%d \n ",i);
//     }
// }
//intialization part;
//2. while (condition){
// body of loop
//increment /decrement part
//}

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=10){
//         printf("%d\n",i);
//     i++;   
//     }
// }

//3. do..while loop: 
// intialization part;
// do{
//     body of the loop;
//     increment/decrement;
// }while(condition);
// print number in decrement order.
#include<stdio.h>
int main(){
    int num=0;
    do{
        printf("%d \n",num);
        num++;
    }
    while(num<=10);
}