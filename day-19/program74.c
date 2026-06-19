#include<stdio.h>
int main(){
    int a[10][10],b[10][10],diff[10][10],r,c,i,j;
    printf("enter rows and columns :");
    scanf("%d %d",&r,&c);
    printf("enter elements of first matrix :");
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    printf("enter elements of second matrix :");
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        scanf("%d",&b[i][j]);
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
         diff[i][j]=a[i][j]-b[i][j];
    printf("difference matrix :");
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
         printf("%d",diff[i][j]);
    printf("\n");
    return 0;
}


