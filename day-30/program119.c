#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float salary;
};
int main(){
    int n,i;
    printf("enter number of employees:");
    scanf("%d",&n);
    struct employee e[n];
    for(i=0;i<n;i++){
        printf("employee record");
        printf("enter id");
        scanf("%d",&e[i].id);
        printf("enter name");
        scanf("%s",e[i].name);
        printf("enter salary");
        scanf("%f",&e[i].salary);
    }
    printf("employee record :");
    for(i=0;i<n;i++){
        printf("id:%d",e[i].id);
        printf("name:%s",e[i].name);
        printf("salary:%.2f",e[i].salary);
    }
    return 0;
}
