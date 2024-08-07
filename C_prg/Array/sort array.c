// array sorting in ascending
#include<stdio.h>
int main(){
    int arr[5];
    int i,temp,j;
    printf("Enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Printing array:\n");
    for(i=0;i<5;i++){
        printf("%d \t",arr[i]);
    }
 // ascending logic
    for(i=0;i<5;i++){
        for(j=0;j<i+1;j++){
            if(arr[i]>arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("\n ascending array\n");
    for(i=0;i<5;i++){
        printf("%d \t",arr[i]);
    }
}