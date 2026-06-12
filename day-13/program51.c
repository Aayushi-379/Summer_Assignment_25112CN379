#include<stdio.h>
int main(){
    int n,i,largest,smallest;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&n);
    }
    largest=a[0];
    smallest=a[0];
    for(i=1;i<n;i++){
        if(a[i]>largest)
        largest=a[i];
        if(a[i]<smallest)
        smallest=a[i];
    }
    printf("largest =%d",largest);
    printf("smallest =%d",smallest);
    return 0;

}