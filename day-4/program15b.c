#include<stdio.h>
#include<math.h>
int main(){
    int num,n1,original_n,sum,n2,r,result,n;
    printf("enter a number :");
    scanf("%d",&n1);
    for(num=1;num<=n1;num++){
        original_n=num;
        n=0;
        sum=0;
        n2=num;
        result=0;
        while(n2>0){
            n2/=10;
            n++;
        }
        n2=num;
        while(n2>0){
            r=n2%10;
            result=result+pow(r,n);
            n2=n2/10;
        }
        if(result==original_n)
        {
            printf("%d",original_n);
        }
    }
    return 0;
}