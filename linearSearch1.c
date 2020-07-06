#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[100],n,item,flag=0;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be found:");
    scanf("%d",&item);
    for(int i=0;i<n;i++){
        if(a[i]==item){
            flag=flag+1;
            printf("item found at %d\n",i);
        }
    }
    if(flag>0)
        printf("no of times the item in array is :%d",flag);
    if(flag==0)
        printf("item not found");
}