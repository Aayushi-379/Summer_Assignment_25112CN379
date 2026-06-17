#include<stdio.h>
int main(){
    int i,a[100],b[100],unionarr[200],n1,n2,j,k=0,found;
    printf("enter size of first array :");
    scanf("%d",&n1);
    printf("enter elements of first array :");
    for(i=0;i<n1;i++){
        scanf("%d",a[i]);
    }
    printf("enter size of second array :");
    scanf("%d",&n2);
    printf("enter  elements of second array :");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    unionarr[k++]=a[i];
    for(i=0;i<n2;i++){
        found=0;
        for(j=0;j<k,j++){
            if(b[i]==unionarr[j]){
                found=1;
                break;
            }
        }
        if(found==0)
          unionarr[k++]=b[i];
    }
    printf("union array :");
    for(i=0;i<k;i++)
       printf("%d",unionarr[i]);
       return 0;
    }
