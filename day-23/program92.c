#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int freq[256]={0},i,max=0; 
    printf("enter a string :");
    gets(str);
    for(i=0;str[i]!='\0';i++){
      freq[str[i]]++;
    }
    for(i=0;i<256;i++){
        if(freq[i]>max){
            max=freq[i];
            ch=i;
        }
    }
    printf("maximum occuring character =%c",ch);
    printf("frequency =%d\n",max);
    return 0;
}
