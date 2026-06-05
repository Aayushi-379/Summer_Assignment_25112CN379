#include<stdio.h>
int main(){
    int i,n,sum=0,fact,r,n1;
    printf("Enter a number :");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
        r=n1%10;
        fact=1;
        for(i=1;i<=r;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n1=n1/10;
    }
        if(sum==n)
        {
            printf("the number is a strong number =%d\n",n);
        }
        else
        {
            printf("the number is not a strong number =%d\n",n);
        }
    return 0;
}