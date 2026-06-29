#include<stdio.h>
int main(){
    int choice;
    float n1,n2;
    do{
        printf("1.)    addition");
        printf("2.)    subtraction");
        printf("3.)    division");
        printf("4.)    multiplication");
        printf("5.)    exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if(choice>=1&&choice<=4){
            printf("enter two number:");
            scanf("%f %f",&n1,&n2);
        }
        switch(choice){
            case 1:
               printf("result=%.2f\n",n1+n2);
               break;
            case 2:
               printf("result=%.2f\n",n1-n2);
               break;
            case 3:
               if(n2!=0)
                printf("result=%.2f\n",n1/n2);
            else
                printf("not allowed");
              break;
            case 4:
               printf("result=%.2f\n",n1*n2);
               break;

            case 5:
               printf("existing\n");
               break;
            default:
               printf("invalid choice");
        }
    }while(choice!=5);
    return 0;
    }
