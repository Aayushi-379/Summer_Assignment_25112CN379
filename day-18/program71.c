#include<stdio.h>
int main(){
    int a[100],n,i,key,high,mid,low=0;
    printf("enter the number :");
    scanf("%d",&n);
    printf("enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched :");
    scanf("%d",&key);
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            printf("element found at position %d",mid+1);
            return 0;
        }
        else if (key<a[mid])
           high=mid-1;
        else
          low=mid+1;
    }
    printf("element not found :");
    return 0;
        
    }
