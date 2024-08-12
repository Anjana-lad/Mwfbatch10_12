// array transpose :- 
/*1 2 3
4 5 6
7 8 9
transpose:
1 4 7
2 5 8
3 6 9
*/

#include<stdio.h>
int main(){
    int arr[3][3],arr1[3][3];
    int row,col;
    printf("Enter elements:");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n Array 1\n ");
     for(row=0;row<3;row++){
        printf("\n");
       for(col=0;col<3;col++){
            printf("%d ",arr[row][col]);
        }
    }
//transpose logic:
for(row=0;row<3;row++){
    for(col=0;col<3;col++){
        arr1[row][col]=arr[col][row]; //transpose logic
    }
}
printf("\n Transpose Array 1\n ");
     for(row=0;row<3;row++){
        printf("\n");
       for(col=0;col<3;col++){
            printf("%d ",arr1[row][col]);
        }
    }
}