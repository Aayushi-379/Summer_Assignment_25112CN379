#include<stdio.h>
int main(){
    int a[]={1,2,2,2,3,4,1};
    int n=7,maxfreq=0,element,i,j;
    for(i=0;i<n;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>maxfreq){
            maxfreq=count;
            element=a[i];
        }

    }
    printf("maximum fequency element =%d\n",element);
    printf("%d",maxfreq);
    return 0;
}