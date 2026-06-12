#include<stdio.h>
int main(){
    int n,i,a[n];
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("array elements are :\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;

}