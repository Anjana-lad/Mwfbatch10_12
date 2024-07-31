//call by reference 
#include<stdio.h>
int swap(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("\n A= %d \n B= %d",*a,*b);
}
int main(){
    int a,b;
    printf("\n Enter numbers:");
    scanf("%d %d",&a,&b);
    printf("\n Before calling function \n A=%d \t B=%d",a,b);
    printf("\n Function calling:");
    swap(&a,&b);  
    printf("\n After calling function:\n A=%d \t b=%d",a,b);
}