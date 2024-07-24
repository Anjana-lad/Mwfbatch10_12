// pattern 2:-
//        1
//      1 2
//    1 2 3
//  1 2 3 4
//1 2 3 4 5

//row= 5 
//col =5
//space =decrement
// #include<stdio.h>
// int main(){
//     int row,col,space;
    
//     for(row=1;row<=5;row++){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%d ",col);
//         }
//         printf("\n");
//     }
// }

// pattern 3:
//        A
//      A B
//    A B C
//  A B C D
//A B C D E

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=1;row<=5;row++){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("%c ",col+64);
//         }
//         printf("\n");
//     }   
// }

// pattern 3
//         E
//       D E
//     C D E
//   B C D E 
// A B C D E

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=row;space>1;space--){
//             printf("  ");
//         }
//         for(col=row;col<=5;col++){
//             printf("%c ",col+64);
//         }
//         printf("\n");
//     }   

// }

//pattern 4:-
 //       A
 //     B A
 //   C B A 
//  D C B A
//E D C B A

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     char ch='A';
//     for(row=0;row<5;row++){
//         for(space=0;space<=5-row;space++){
//             printf("  ");
//         }
//         for(col=row;col>=0;col--){
//             printf("%c ",col+ch);
//         }
//         printf("\n");
//     }
// }

//pattern 5:-

// 0
// 1 0
// 0 1 0
// 1 0 1 0
// 0 1 0 1 0

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("%d ",(row+col)%2);
//         }
//         printf("\n");
//     }
// }

//pattern 6:-
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=5;space>=row;space--){
//             printf(" ");
//         }
//         for(col=row;col>=1;col--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=5;row>=1;row--){
//         for(col=5;col>=1;col--){
//             if(row>=col){
//                 printf("* ");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

//hallow square:
// * * * * *
// *       *
// *       *
// *       *
// * * * * *

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             if(row==1||row==5||col==1||col==5){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// pattern 8:-
// *
//* *
//*   *
//*     *
//* * * * *

#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            if(row==1|| col==1 || row==5||row==col){
                   printf("* ");
            }
            else{
                printf("  ");
            }
         
        }
        printf("\n");
    }
}