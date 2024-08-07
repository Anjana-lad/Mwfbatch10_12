// dynamic array: to take the input of array elements from the user.
#include<stdio.h>
int main(){
    int array1[5];
    int i;
    printf("Enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&array1[i]);
    }
    printf("Array elements:\n");
    for(i=0;i<5;i++){
        printf("arr[%d]=%d \n",i,array1[i]);
    }
}