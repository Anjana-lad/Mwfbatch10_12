// array operation : making summation ,subtraction,multiplication for 2 2d array.

#include<stdio.h>
int main(){
    int arr[20][20],arr2[20][20],sum[20][20],sub[20][20],mul[20][20];
    int row,col,r,c;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter numbers of columns:");
    scanf("%d",&c);

    printf("Enter elements for array 1");
     for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr[row][col]);
         }
      }
    printf("\n Enter for array2");
     for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            scanf("%d",&arr2[row][col]);
         }
      }
    // printing array1:
    printf("\n Array1\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr[row][col]);
         }
      }
    printf("\n Array2\n");
     for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",arr2[row][col]);
         }
      }
      // addition logic:
        for(row=0;row<r;row++){
             for(col=0;col<c;col++){
                sum[row][col]=arr[row][col]+arr2[row][col];
         }
      }
      // subtraction logic:
       for(row=0;row<r;row++){
             for(col=0;col<c;col++){
                sub[row][col]=arr[row][col]-arr2[row][col];
         }
      }
    // multiplication logic:
    for(row=0;row<r;row++){
        for(col=0;col<c;col++){
            mul[row][col]=0;
            for(int k=0;k<c;k++){
                mul[row][col]+=arr[row][k]*arr2[k][col];
            }
        }
    }

      printf("\n Addition\n");
      for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",sum[row][col]);
         }
      }
       printf("\n Subtraction\n");
      for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",sub[row][col]);
         }
      }
      printf("\n Multiplication \n");
      for(row=0;row<r;row++){
        printf("\n");
        for(col=0;col<c;col++){
            printf("%d ",mul[row][col]);
         }
      }
}