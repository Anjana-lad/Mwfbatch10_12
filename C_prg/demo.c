//structure of c program
// section 1. documentation section
// section 2 linking section.
// section 3 global declaration section
// section 4 main section() {
//     executable statements
// }-
// section 5 user defined section(){
//     function body.
// }

//program to print hello world
#include<stdio.h>  
int main(){
    int num;  //int =keyword,num=>variable 
    char ch='A';
    float salary;
    printf("Hello world\n");
    printf("Enter number:");
    scanf("%d",&num);  //%d num values 
    printf("Number=%d",num);
    printf("\n Character=%s",ch);
    printf("\n Enter salary=");
    scanf("%f",&salary);
    printf("\n salary:%f",salary);

    return 0;

}

// //format specifier
// %d=integer;
// %c= character;
// %s=string;
// %p=pointer;
//%f= float;
//%lf= long double;

