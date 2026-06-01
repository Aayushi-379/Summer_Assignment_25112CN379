#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum += i; 
    }
    printf("the sum of first %d natural numbers =%d\n",n,sum);
    return 0;
} 