#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter a no. :");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum += i;
        }
    }
    if(sum==n){
        printf("the number is perfect number =%d\n",n);
    }
    else{
        printf("the number is not a perfect number =%d\n",n);
    }
    return 0;
}