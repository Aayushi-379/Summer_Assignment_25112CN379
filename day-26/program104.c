#include<stdio.h>
int main(){
    int ans,score=0;
    printf("quiz time\n");
    printf("ques.1)    CAPITAL OF INDIA ?");
    printf("1.) mumbai");
    printf("2.) delhi");
    printf("3.) kolkata");
    printf("4.) chennai");
    scanf("%d",&ans);
    if(ans==2)
      score++;
    printf("ques.2)    LANGUAGE WAS DEVELOPED BY?");
    printf("1.) dennis ritchie");
    printf("2.) james gosling");
    printf("3.) guido van rossum");
    printf("4.) bjarne");
    scanf("%d",&ans);
    if(ans==1)
      score++;
    printf("your score =%d/2\n",score);
      return 0;
}