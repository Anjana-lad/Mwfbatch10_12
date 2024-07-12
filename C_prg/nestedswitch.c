//nested switch 
//food menu
#include<stdio.h>
int main(){
    int choice,ch;
    printf("\n Select from menu:");
    printf("\n 1. Pizza.");
    printf("\n 2. Cold- drink.");
    printf("\n Enter choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("\n you selected pizza.");
            printf("\n 1.Veg pizza.");
            printf("\n 2. Cheese Pizza.");
            printf("\n Enter choice of pizza?");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                printf("\n You selected veg pizza.");
                break;
            case 2:
                printf("\n You selected cheese pizza.");
                break;
            default:
                printf("\n invalid choice for pizza.");
                break;
            }
        break;
        case 2:
            printf("\n you selected cold- drink");
            printf("\n 1.Fresh juice");
            printf("\n 2. Coke");
            printf("\n Enter choice of cold-drink?");
            scanf("%d",&ch);
            switch (ch)
            {
            case 1:
                printf("\n You selected fresh juice");
                break;
            case 2:
                printf("\n You selected Coke");
                break;
            default:
                printf("\n invalid choice for drink");
                break;
            }
        break;
        default :
         printf("\n Invalid choice...Sorry not available..");
        break;
    }

}