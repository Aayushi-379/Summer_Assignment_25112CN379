#include<stdio.h>
struct book{
    int id;
    char name[50];
};
int main(){
    int n,i;
    printf("enter number of books:");
    scanf("%d",&n);
    struct book b[n];
    for(i=0;i<n;i++){
        printf("book record");
        printf(" enter book id");
        scanf("%d",&b[i].id);
        printf("enter book name");
        scanf("%s",b[i].name);
    }
    printf("library record :");
    for(i=0;i<n;i++){
        printf("book id:%d",b[i].id);
        printf("book name:%s",b[i].name);
    }
    return 0;
}
