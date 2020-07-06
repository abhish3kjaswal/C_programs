#include<stdio.h>
void main(){
    int n,a[100];
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int min=a[i];
        for(int j=i;j<n;j++){
            if(min>a[j]){
                int c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
     printf("the sorted array is :");
    for(int i=0;i<n;i++){
        printf("\t%d",a[i]);
    }
}