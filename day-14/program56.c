#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter size :");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("duplicate elements =%d:");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
                break;
            }
        }
    }
    
    return 0;
}