#include<stdio.h>
int main(){
    int n,i,sum=0;
    float avg;
    printf("enter size of array :");
    scanf("%d",&n);
    int a[n];
    printf("enter elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=(float)sum/n;
    printf("sum =%d\n",sum);
    printf("average =%.2f\n",avg);
    return 0;

}