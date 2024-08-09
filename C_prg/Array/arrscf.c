//array 2d taken value from user
#include<stdio.h>
int main(){
    int arr[3][3],row,col;
    printf("Enter values for array:");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
         }
      }
      // printing array:
      for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr[row][col]);
        }
      } 
}