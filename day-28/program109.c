#include<stdio.h>
int main(){
    int id;
    char name[50];
    int choice;
    printf("1.)   ADD BOOK");
    printf("2.)   DISPLAY BOOK");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("enter book id :");
            scanf("%d",&id);
            printf("enter book name:");
            scanf("%s",name);
            printf("book added successfully");
            break;
        case 2:
            printf("book id:%d",id);
            printf("book name:%s",name);
            break;
        default:
            printf("invalid choice");  
    }
    return 0;
}