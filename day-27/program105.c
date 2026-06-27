#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct student s[100];
    int i,n;
    printf("enter number of student :");
    scanf("%d",&n);
    for(i=0;i<n;i++){
         printf("enter number of student :");
    
        printf("enter roll no :");
        scanf("%d",&s[i].roll);
        printf("enter name:");
        scanf("%s",s[i].name);
        printf("enter marks :");
        scanf("%f",&s[i].marks);
    }
    printf("student record\n");
    for(i=0;i<n;i++){
        printf("roll no. :%d",s[i].roll);
        printf("name: %s",s[i].name);
        printf("marks: %.2f",s[i].marks);
    }
    return 0;


}