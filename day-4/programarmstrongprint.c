#include<stdio.h>
#include<math.h>
int main(){
    int r,n,originalNum;
    int digits=0;
    int sum=0;
    int temp;
    printf("Enter a number :");
    scanf("%d",&n);
    originalNum=n;
    temp=n;
    while(temp>0)
    {
        digits++;
        temp /=10;
    }
    temp = n;
    while(temp>0)
    {
        r=temp%10;
        sum+= pow(r,digits);
        temp/=10;
    }
    if(sum==originalNum){
        printf("the number is a armstrong number =%d",originalNum);
    }
    else{
         printf("the number is not a armstromg number =%d",originalNum);
    }
    return 0;


}