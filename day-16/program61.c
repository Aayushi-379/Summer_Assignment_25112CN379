#include<stdio.h>
int main(){
    int n,i,sum=0,a[100],excepted=0;
    printf("enter the value of n :");
    scanf("%d",&n);
    printf("enter %d elements :\n",n-1);
    for(i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    excepted=n*(n+1)/2;
    printf("missing numbers =%d\n",excepted-sum);
    return 0; 


}