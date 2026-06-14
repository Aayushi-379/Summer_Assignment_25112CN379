#include<stdio.h>
int main(){
    int n,i,largest,secLargest;
    printf("enter size :");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    largest=a[0];
    secLargest=a[0];
    for(i=1;i<n;i++){
        if(a[i]>largest){
            secLargest=largest;
            largest=a[i];
        }
        else
        if(a[i]>secLargest&&a[i]!=largest){
            secLargest=a[i];
        }
    }
    printf("second largest element =%d\n",secLargest);
    return 0;

}