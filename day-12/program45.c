#include<stdio.h>
int palindrome(int n){
    int rev=0,r,temp=n;
    while(n>0){
        r=temp%10;
        rev=rev*10+r;
        temp/=10;
    }
    return rev==n;
}
 int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    if (palindrome(n))
    printf("palindrome");
    else
    printf("not palindrome");
 return 0;
 }
