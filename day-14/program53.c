#include<stdio.h>
int main(){
    int n,i,key,found=0;
    printf("enter the size :");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements to be searched :");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            found=1;
            printf("elements found at the position %d=%d\n",i+1);
            break;
        }
    }
    if(found==0){
        printf("elements not found at the position %d =%d\n");
    }
    return 0;

}