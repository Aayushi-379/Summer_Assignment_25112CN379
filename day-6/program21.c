#include<stdio.h>
#include<math.h>
int main(){
    int binary,decimal=0,i=0,r;
    printf("enter a binay number :");
    scanf("%d",&binary);
    while(binary!=0)
    {
        r=binary%10;
        decimal=decimal+r*pow(2,i);
        binary=binary/10;
        i++;
    }
    printf("decimal equivalent =%d\n",decimal);
    return 0;
}