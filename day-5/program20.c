#include<stdio.h>
int main(){
    int i,n,largestprimefactor=1;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            largestprimefactor=i;
            n=n/10;
        }

    }
    printf("largest prime factor =%d\n",largestprimefactor);
    return 0;
}