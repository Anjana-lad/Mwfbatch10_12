// passing structure to a function
#include<stdio.h>
struct student{
    int rollno;
    float marks[4];
};
void student_details(struct student st){
    printf("\n Rollno:%d",st.rollno);
    for(int i=0;i<4;i++){
        printf("\n Marks:%.2f",st.marks[i]);
    }
}
int main(){
     struct student st[2];
     int i,j;
     for(i=0;i<2;i++){
        printf("Enter rollno:");
        scanf("%d",&st[i].rollno);
        for(j=0;j<4;j++){
          printf("Enter marks%d =",j);
          scanf("%f",&st[i].marks[j]);
        }
     }    
     printf("\n student details:");
        for(i=0;i<2;i++){
         student_details(st[i]);
    }
 }