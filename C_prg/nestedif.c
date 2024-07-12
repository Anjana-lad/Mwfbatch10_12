//nested if : if inside if.
//program to check weather male and female is eligible for marriage or not.
#include<stdio.h>
int main(){
    int age;
    char choice;
    printf("Enter choice:(M male and F Female):");
    scanf("%c",&choice);
    if(choice=='m' || choice=='M'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>21){
            printf(" Male Eligible for marriage.");
        }
        else{
            printf("Male not eligible for marriage.");
        }
    }
    else if (choice=='F' || choice== 'f'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age>18){
            printf(" Female Eligible for marriage.");
        }
        else{
            printf("Female not eligible for marriage.");
        }
    }
    else{
        printf("Invalid choice.");
    }
}