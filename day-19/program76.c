#include<stdio.h>
int main(){
    int a[10][10],sum=0,n,i,j;
    printf("enter order of square matrix :");
    scanf("%d",&n);
    printf("enter elements of matrix :");
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
      sum+=a[i][i];
    printf("sum of diagonal elements =%d",sum);
    return 0;
}


