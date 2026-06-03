#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
       return gcd(b,a%b);
}
  int main(){
    int n1,n2,lcm,resultgcd;
    printf("Enter two numbers :");
    scanf("%d %d",&n1,&n2);
    resultgcd=gcd(n1,n2);
    lcm=(n1*n2)/resultgcd;
    printf("lcm of %d and %d =%d\n",n1,n2,lcm);
    return 0;
  }