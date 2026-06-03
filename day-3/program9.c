#include<stdio.h>
int main(){
    int i,n,flag=0;
    printf("Enter a number to be checked :");
    scanf("%d",&n);
    if(n<=1)
    {
        flag=1;
    }
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("the number is a prime number =%d\n",n);
    }
    else{
        printf("the number is not a prime number =%d\n",n);
    }
    return 0;
}