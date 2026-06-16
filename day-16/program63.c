#include<stdio.h>
int main(){
    int a[]={1,3,7,9,2,8};
    int i,j,n=6,sum=10;
    printf("pairs are :");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("%d %d\n",a[i],a[j]);
            }
        }
    }
    return 0;

}