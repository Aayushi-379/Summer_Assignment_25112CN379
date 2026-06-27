#include<stdio.h>
int main(){
    int roll;
    char name[50];
    float m1,m2,m3,m4,m5;
    float total,percentage;
    printf("enter roll no:");
    scanf("%d",&roll);
    printf("enter name:");
    scanf("%s",&name);
    printf("enter marks of subject 1:");
    scanf("%f",&m1);
    printf("enter marks of subject 2:");
    scanf("%f",&m2);
    printf("enter marks of subject 3:");
    scanf("%f",&m3);
    printf("enter marks of subject 4:");
    scanf("%f",&m4);
    printf("enter marks of subject 5:");
    scanf("%f",&m5);
    total =m1+m2+m3+m4+m5;
    percentage=total/5;
    printf("marsheet");
    printf("roll no:%d",roll);
    printf("name:%s",name);
    printf("total marks:%.2f",total);
    printf("percentage:%.2f",percentage);
    if(percentage>=90)
      printf("grade A");
    else if(percentage>=80)
      printf("grade B");
    else if(percentage>=70)
      printf("grade C");
    else if(percentage>=60)
      printf("grade D");
    else
      printf("fail");
return 0;
}
      



    

