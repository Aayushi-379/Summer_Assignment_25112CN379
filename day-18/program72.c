#include<stdio.h>
int main(){
    int a[100],n,i,j,temp;
    printf("enter the number :");
    scanf("%d",&n);
    printf("enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[j]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array in decending order :");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;

}