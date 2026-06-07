#include<stdio.h>
int fib(int n){
if(n==0)
 return 0;
 else if(n==1)
 return 1;
 else 
 return fib(n-1) + fib(n-2);
}
 int main(){
    int r,i,f;
    printf("enter the elements :");
    scanf("%d",&r);
    for(i=0;i<r;i++){
        f=fib(i);
        printf("%d",f);
    }
    return 0;
 }