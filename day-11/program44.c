#include<stdio.h>
int fact(int n){
    int fact=1,i;
    for(i=1;i<=n;i++){
        fact =fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    printf("factorial =%d\n",fact(n));
    return 0;
}
