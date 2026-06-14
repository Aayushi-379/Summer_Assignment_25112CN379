#include<stdio.h>
int main(){
    int n,i,key,count=0;
    printf("enter size :");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements :");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
    printf("enter the elements :");
    scanf("%d",&key);
    for(i=0;i<n;i++){
      if(a[i]==key){
      count++;
}
}
    printf("the frequency of elements =%d",count);
    return 0;
}