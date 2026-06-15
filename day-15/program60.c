#include<stdio.h>
int main(){
    int a[100],n,i,j=0,temp;
    printf("enter size :");
    scanf("%d",&n);
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=0){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
    }
    printf("array after moving zeroes to end =%d\n");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
    return 0;
}
