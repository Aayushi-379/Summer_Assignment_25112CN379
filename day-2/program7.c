#include<stdio.h>
int main(){
int n,r,originalnum,rev=0;
printf("Enter a number :");
scanf("%d",&n);
originalnum=n;
while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}
if(originalnum==rev)
{
    printf("the number is a palindrome number =%d\n",originalnum);
}
else{
    printf("the number is not a palindrome number =%d\n",originalnum);
}
  return 0;
}