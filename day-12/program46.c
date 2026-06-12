#include<stdio.h>
    int armstrong(int n){
    int sum=0,temp=n,r;
    while(n>0){
        r=temp%10;
        sum+=r*r*r;
        temp/=10;
    }
    return sum==n;
}
  int main(){
    int n;
    printf("enter a no :");
    scanf("%d",&n);
    if (armstrong(n))
    printf("armstrong number");
    else
    printf("not a armstrong number");
    return 0;
  }
