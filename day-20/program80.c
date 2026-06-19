#include<stdio.h>
int main(){
    int a[10][10],r,c,i,j,sum;
    printf("enter order of matrix :");
    scanf("%d %d",&r,&c);
    printf("enter matrix elements :");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++){
        sum=0;
        for(i=0;i<r;i++){
            sum+=a[i][j];
        }
    printf("sum of row %d =%d\n",j+1,sum);
    }
    return 0;
}
