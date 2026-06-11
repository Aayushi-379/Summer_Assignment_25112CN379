#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
 int main()
 {
    int n1,n2;
    printf("enter two numbers :");
    scanf("%d %d",&n1,&n2);
    printf("sum = %d",sum(n1,n2));
    return 0;
 }
