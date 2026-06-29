#include<stdio.h>
int main(){
    int arr[100],n,i,choice,key,max,min,sum=0,found=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    do{
        printf("1.)    display array");
        printf("2.)    search element");
        printf("3.)    find maximum");
        printf("4.)    find minimum");
        printf("5.)    exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
               printf("array");
               for(i=0;i<n;i++)
                 printf("%d",arr[i]);
               printf("\n");
               break;
            case 2:
               printf("enter element to search");
               scanf("%d",&key);
               found=0;
               for(i=0;i<n;i++){
                  if(arr[i]==key)
                {
                   printf("element not found");
                   found=1;
                   break;
                }
            }
            
              if(!found)
                printf("element not found.");
              break;
        
            case 3:
                 max=arr[0];
                 for(i=0;i<n;i++){
                    if(arr[i]>max)
                      max=arr[i];
                printf("maximum =%d\n",max);
                break;
            case 4:
                min=arr[0];
                 for(i=1;i<n;i++){
                    if(arr[i]<min)
                      min=arr[i];
                printf("minimum =%d\n",min);
                break;
            case 5:
                sum=0;
                 for(i=0;i<n;i++){
                    sum+=arr[i];
                printf("sum =%d\n",sum);
                break;
            case 6:
                printf("exiting");
                break;
            default:
                printf("invalid choice\n"); 
                }   
            }   
        }
    }while(choice!=6);
    return 0;
    }