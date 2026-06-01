#include<stdio.h>
int main(){
    int i,n,factorial=1;
    printf("Enter the no. to find factorial of :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i ;
    }
    printf("factorial of given no. is %d",factorial);
    return 0;
}