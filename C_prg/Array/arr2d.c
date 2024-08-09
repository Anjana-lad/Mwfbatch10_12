//2D array : in which we have to give 2 size i.e for row and column
// syntax: data-type arry_name[row size][col size];

// program to print 2d array
#include<stdio.h>
int main(){
    int arr[2][3]={{12,15,14},{74,75,26}};
    int row,col;
    printf("\n Printing array\n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr[row][col]);
        }
    }
}