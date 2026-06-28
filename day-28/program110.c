#include<stdio.h>
int main(){
    float balance=1000;
    float amount;
    int choice;
    printf("1.)   deposit");
    printf("2.)   withdraw");
    printf("3.)   check balance");
    switch(choice){

        case 1:
            printf("enter deposit amount :");
            scanf("%f",&amount);
            balance+=amount;
            printf("updated balance =%f.2f",balance);
            break;
        case 2:
            printf("enter withdrawal amount :");
            scanf("%f",&amount);
            if(amount<=balance){
                balance-=amount;
                printf("updated balance =%f.2f",balance);
            }
            else
                printf("insufficient balance");
                break;
        case 3:
            printf("current balance =%.2f",balance);
            break;
        default:
             printf("invalid choice");
    }
    return 0;

}