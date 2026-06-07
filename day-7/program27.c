#include<stdio.h>
int sumOfDigits(int n){
    if(n==0)
    return 0;
    else
    return(n%10) + sumOfDigits(n/10);
}
 int main(){
    int n,sum;
    printf("enter a number :");
    scanf("%d",&n);
    sum=sumOfDigits(n);
    printf("sum of digits =%d",sum);
    return 0;
 }