#include<stdio.h>
int main(){
    int a[]={1,2,2,3,4,4,5};
    int n=7,i,j;
    printf("aray after removing duplicates :");
    for(i=0;i<n;i++){
        int duplicate=0;
        int count=1;
        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                duplicate =1;
                break;
            }
        }
        if(duplicate==0){
            printf("%d",a[i]);
        }
    }
    return 0;
}
