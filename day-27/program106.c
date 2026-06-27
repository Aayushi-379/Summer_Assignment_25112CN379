#include<stdio.h>
struct employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct employee e[100];
    int i,n;
    printf("enter number of employee :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
         printf("enter number of employeet :");
    
        printf("enter i :");
        scanf("%d",&e[i].id);
        printf("enter name:");
        scanf("%s",e[i].name);
        printf("enter salary :");
        scanf("%f",&e[i].salary);
    }
    printf("employee record\n");
    for(i=0;i<n;i++){
        printf("employee id. :%d",e[i].id);
        printf("name: %s",e[i].name);
        printf("salary: %.2f",e[i].salary);
    }
    return 0;


}