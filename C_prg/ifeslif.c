//if..elseif..else
/*
if(condition){
st
}
elseif(condition){
//st
}
elseif(condition){
//st;
}
else{
//statements;
}

*/
//program to check grade.
#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks>80 && marks <=100){
        printf("Grade=A");
    }
    else if(marks >60 && marks <=80){
        printf("Grade=B");
    }
    else if(marks >=33 && marks<=60){
        printf("Grade =C");
    }
    else{
        printf("Fail");
    }
}