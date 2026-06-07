#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
 int a,b;
 printf("enter a no. :");
 scanf("%d",&a);
 b=fact(a);
 printf("factorial of a number %d is %d",a,b);
 return 0;
   }