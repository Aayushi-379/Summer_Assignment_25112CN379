#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
void display(struct student s[],int n){
    int i;
    printf("student record");
    for(i=0;i<n;i++){
        printf("roll:%d",s[i].roll);
        printf("name:%s",s[i].name);
        printf("marks:%.2f",s[i].marks);
    }
}
int main(){
    int n,i;
    printf("enter number of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++){
        printf("students record");
        printf("enter roll no");
        scanf("%d",&s[i].roll);
        printf("enter name");
        scanf("%s",s[i].name);
        printf("enter marks");
        scanf("%f",&s[i].marks);
    }
    display(s,n);
    return 0;
}
