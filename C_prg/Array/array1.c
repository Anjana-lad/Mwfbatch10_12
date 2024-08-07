//array : It is used to store similar type of value in a single variable name.

// array declaration:
// data_type array_name[size];

// array initialization :
// data_type array_name[]={values};

#include<stdio.h>
int main(){
    int arr_num[]={12,45,76,34,8};
    for(int i=0;i<5;i++){
        printf("Arr[%d]=%d \n",i,arr_num[i]);
    }    
}
