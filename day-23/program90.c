#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq[256]={0},i;
    printf("enter a string :");
    gets(str);
    for(i=0;str[i]!='\0';i++){
      freq[str[i]]++;
      if(freq[str[i]]==2);{
         printf("first repeating character =%c",str[i]);
         return 0;
    }
}
printf("no repeating charater found");
return 0;
}