#include<stdio.h>
int fib(int n){
    int a=0,b=1,c,i;
    printf("%d %d",a,b);
    for(i=3;i<=n;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}
int main(){
    int n;
    printf("enter number of terms");
    scanf("%d",&n);
    fib(n);
    return 0;
}