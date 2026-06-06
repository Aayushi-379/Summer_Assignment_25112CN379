#include<stdio.h>
int main(){
    int binary=0,n,place=1,r;
    printf("enter a decimal number :");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        binary=binary+r*place;
        place=place*10;
        n=n/2;
    }
    printf("binary equivalent =%d\n",binary);
    return 0;
}