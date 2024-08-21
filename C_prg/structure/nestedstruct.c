// nested structure
#include<stdio.h>
struct  employee
{
    int emp_id;
    char name[50];
    float salary;
    struct department{
        int dep_id;
        char dept_name[50];
    }dept;
};

int main(){
    struct employee emp[2];
    int i;
    for(i=1;i<=2;i++){
        printf("Enter emp_id:");
        scanf("%d",&emp[i].emp_id);
        printf("Enter emp_name:");
        scanf("%s",&emp[i].name);
        printf("Enter emp_salary:");
        scanf("%f",&emp[i].salary);
        printf("Enter department_id:");
        scanf("%d",&emp[i].dept.dep_id);
        printf("Enter department_name:");
        scanf("%s",&emp[i].dept.dept_name);
    }
    printf("Employee details:\n");
    for(i=1;i<=2;i++){
         printf("\n emp_id:%d",emp[i].emp_id);
        printf("\n emp_name:%s",emp[i].name);
        printf("\n emp_salary:%f",emp[i].salary);
        printf("\n department_id:%d",emp[i].dept.dep_id);
        printf("\n department_name:%s",emp[i].dept.dept_name);
    }
}