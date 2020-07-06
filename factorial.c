#include<stdio.h>
void main(){
    int x,i=1,fact=1;
    printf("enter the number:");
    scanf("%d",&x);
    while(i<=x){
        fact=fact*i;
        i=i+1;
    }
printf("fact:%d",fact);
}