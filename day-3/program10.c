#include<stdio.h>
int main(){
    int s,e,i,j,p;
    printf("Enter a s number :");
    scanf("%d",&s);
    printf("Enter a e number :");
    scanf("%d",&e);
    printf("p numbers between %d and %d is :\n",s,e);
    for(i=s;i<=e;i++){
        if (i<=1)
        continue;
        p=1;
      for(j=2;j<i;j++){
        if(i%j==0){
            p=0;
            break;
        }
      }
      if(p==1){
        printf("%d",i);
      }
    }
      return 0;
}