#include<stdio.h>
struct salary{
    int id;
    char name[50];
    float basic;
};
int main(){
    struct salary s[100];
    int i,n;
    float hra,da,total;
    printf("enter number of employee :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
         printf("enter number of employeet :");
    
        printf("enter i :");
        scanf("%d",&s[i].id);
        printf("enter name:");
        scanf("%s",s[i].name);
        printf("enter basic salary :");
        scanf("%f",&s[i].basic);
    }
    printf("salary record\n");
    for(i=0;i<n;i++){
        hra=s[i].basic*0.20;
        da=s[i].basic*0.10;
        total=s[i].basic+hra+da;
        printf("employee id. :%d",s[i].id);
        printf("name: %s",s[i].name);
        printf("basic salary: %.2f",s[i].basic);
        printf("hra:%.2f",hra);
        printf("da:%.2f",da);
       printf( "total salary:%.2f",total);
    }
    return 0;


}