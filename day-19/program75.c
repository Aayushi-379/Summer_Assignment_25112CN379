#include<stdio.h>
int main(){
    int a[10][10],transpose[10][10],r,c,i,j;
    printf("enter rows and columns :");
    scanf("%d %d",&r,&c);
    printf("enter elements of matrix :");
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
        transpose[j][i]=a[i][j];
    printf(" transpose matrix :");
    for(i=0;i<r;i++)
      for(j=0;j<c;j++)
         printf("%d",transpose[i][j]);
    printf("\n");
    return 0;
}


