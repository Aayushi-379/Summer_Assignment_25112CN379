#include<stdio.h>
int main(){
    int secret=25,guess;
    printf("guess the number :");
    scanf("%d",&guess);
    if(guess==secret)
       printf("congratulations! you guessed correctly");
    else if(guess>secret)
        printf("too high");
    else
    printf("too low");
    return 0;
}