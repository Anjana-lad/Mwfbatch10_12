// pointer with array
#include<stdio.h>
int main(){
    int i,arr[5];
    int *ptr1,*ptr2;
    printf("Enter array elements:");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n Print Array");
    for(i=0;i<5;i++){
        printf("arr[%d]=%d \t",i,arr[i]);
    }
    ptr1=&arr[0];
    ptr2=&arr[4];
    printf("\n array address of index0=%d",ptr1);
    printf("\n array address of index4 =%d",ptr2);
   ptr1++;
   printf("\n array address of =%d",ptr1);
   ptr2--;
   printf("\n array address of =%d",ptr2);
   int k= *ptr1+*ptr2;
   printf("\n array address k =%d",k);
   int *ptr3=&k;
   printf("\n array address of k=%d",ptr3);
     int *ptr4=&k;
   printf("\n array address of k=%d",ptr4);
}