#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    int freq[256]={0},i;
    printf("enter first string :");
    gets(str1);
    printf("enter second string :");
    gets(str2);
    if(strlen(str1)!=strlen(str2)){
        printf("not anagram");
        return 0;
    }
    for(i=0;str1[i]!='\0';i++)
      freq[str1[i]]++;
    for(i=0;str2[i]!='\0';i++)
      freq[str2[i]]--;
    for(i=0;i<256;i++){
        if(freq[i]!=0){
            printf("not anagram");
            return 0;
        }
    }
    printf("anagram");
    return 0;
}