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
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("the sorted array is :");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}