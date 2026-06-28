#include<stdio.h>
int main(){
    int seats=50,book;
    printf("available seats =%d\n",seats);
    printf("enter seats to book :");
    scanf("%d",&book);
    if(book<=seats){
        seats-=book;
        printf("booking successfull");
        printf("remaining seats =%d",seats);
    }
    else{
        printf("seats not available");
    }
    return 0;
}