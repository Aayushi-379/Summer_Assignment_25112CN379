#include<stdio.h>
int main(){
    int n,i,even=0,odd=0;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("even elements =%d\n",even);
    printf("odd elements=%d\n",odd);
    return 0;
}