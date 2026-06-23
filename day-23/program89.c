#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int freq[256]={0},i;
    printf("enter a string :");
    gets(str);
    for(i=0;str[i]!='\0';i++){
      freq[str[i]]++;
    }
    for(i=0;str[i]!='\0';i++){
       if(freq[str[i]]==1);{
         printf("first non-repeating character =%c",str[i]);
         return 0;
    }
}
printf("no non-repeating charater found");
return 0;
}