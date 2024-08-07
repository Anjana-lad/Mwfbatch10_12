//  program for array having different values and doing addition of this values.
#include<stdio.h>
int main(){
    int arr[10];
    int i,sum=0;
    printf("Enter elements:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum of array :%d",sum);

}