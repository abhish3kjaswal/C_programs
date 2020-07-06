#include<stdio.h>
void main(){
    int a[100],N,ad,p;
    printf("enter the no. of elements in the array:");
    scanf("%d",&N);
    printf("enter the array:");
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    printf("\nthe array is:");
    for(int i=0;i<N;i++){
        printf("%d\t",a[i]);
    }
    printf("\nenter the element to be added:");
    scanf("%d",&ad);
    printf("\nenter the place where you want to add:");
    scanf("%d",&p);
    
    for(int i=0;i<N;i++){
        if(i==p){
            
            N=N+1;
            a[i+1]=a[i];
            a[i]=ad;  
        }

    }
     printf("\nnew array is:");
    for(int i=0;i<N;i++){
        printf("%d\t",a[i]);
    }
}