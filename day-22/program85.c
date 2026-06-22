#include<stdio.h>
#include<string.h>
int main(){
    char str[100],r[100];
    int i,len;
    printf("enter a string :");
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++){
        r[i]=str[len-i-1];
    }
    r[i]='\0';
    if(strcmp(str,r)==0)
    printf("palindrome string");
    else
    printf("not a palindrome string");
    return 0;
}