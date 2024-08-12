// spiral pattern 
/*algorithm for spiral  pattern
step 1: define array[row][col];
step 2:
    loop for left to right.
    loop for top to bottom
    loop for right to left.
    loop for bottom to top.

step 3: 
    loop for inner values till the size/2 
*/
#include<stdio.h>
int main(){
    int size;
    printf("Enter size:");
    scanf("%d",&size);
    int arr[size][size];
    int row=0,col,num=1,end=size-1;
  // loop for inner values:
 for(row=0;row<=size/2;row++,end--){

    // loop for left to right
    for(col=row;col<=end;col++){
        arr[row][col]=num++;
    }
    // loop for top to bottom
    for(col=row+1;col<=end;col++){
        arr[col][end]=num++;
    }
    // loop for right to left
    for(col=end-1;col>=row;col--){
        arr[end][col]=num++;
    }
    // loop for bottom to top
    for(col=end-1;col>row;col--){
        arr[col][row]=num++;
    }
 }

    printf("print array:");
    for(row=0;row<size;row++){
        printf("\n");
        for(col=0;col<size;col++){
            printf("%d ",arr[row][col]);
        }
    }

}