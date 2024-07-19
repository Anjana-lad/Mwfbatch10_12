//nested loop :loop inside loop
// pattern 1:
// * * * * *
// * * * * *
// * * * * *
// * * * * *

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=4;row++){
//         for(col=1;col<=4;col++){
//             printf("%d",col);
//         }
//         printf("\n");
//     }
// }

//pattern 2:
// *
// * *
// * * *
// * * * *
// * * * * *

// #include<stdio.h>
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// pattern 3:
//1
//1 0
//1 0 1
//1 0 1 0
//1 0 1 0 1

#include<stdio.h>
int main(){
    int row,col;
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
           if(col%2!=0){
                printf("1");
           }
           else{
            printf("0");
           }
        }
        printf("\n");
    }
}