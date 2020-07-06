#include<stdio.h>
void main(){
    int n,a[100];
    int temp,c;
    printf("enter the size of the array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        temp=a[i];
        c=i-1;
        while(c>=0 &&temp<a[c]){
            a[c+1]=a[c];
            c=c-1;
        }
        a[c+1]=temp;
    }
    printf("the array:");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}