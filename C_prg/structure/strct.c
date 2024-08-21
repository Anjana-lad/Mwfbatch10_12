// structure and union 
// syntax:
/*
    struct structure_name
    {
        data member;
        data member;
    }structure variable;
*/

#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    struct student st[3];
    int i;
    for(i=0;i<3;i++){
        printf("enter rollno:");
        scanf("%d",&st[i].rollno);
        printf("Enter name:");
        scanf("%s",&st[i].name);
        printf("Enter marks: ");
        scanf("%f",&st[i].marks);
    }
    printf("\n student details\n");
    for(i=0;i<3;i++){
        printf("\n Student no=%d",i);
        printf("\n Rollno:%d",st[i].rollno);
        printf("\n Name:%s",st[i].name);
        printf("\n marks:%f",st[i].marks);
    }
}