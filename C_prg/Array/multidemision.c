//multi-dimension array : In this array we have 3 size.
//syntax: data-type array_name [tablesize][row][col];
#include<stdio.h>
int main(){
    int arr[3][3][3]={
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {11,21,31},
            {41,51,61},
            {71,81,91}
        },
        {
            {22,32,52},
            {44,51,62},
            {66,77,99}
        }
    };
    int row,col,table;
    printf("\nPrint array\n");
    for(table=0;table<3;table++){
        printf("\n");
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr[table][row][col]);
        }
       }   
    }

}