#include<stdio.h>
void main(){
    int a[10],min=99999,max=0;
    printf("enter 10 elements:");
   //minimum of 10 numbers
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("minimum no is:%d",min);
    //maximum of 10 numbers
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("\nmaximum no is:%d",max);
}