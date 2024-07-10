//define or constant
#include<stdio.h>
#define pi 3.14
int main(){
    int radius;
   // const float pi=3.14;
    float area;
    printf("Enter radius:");
    scanf("%d",&radius);
    area=pi*radius*radius;
    printf("Area of %d=%f",radius,area);
}