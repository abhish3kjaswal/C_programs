#include<stdio.h>
#include<stdlib.h> // to include exit(0) function
void main(){
    int x,i=2;
    printf("enter a number:");
    scanf("%d",&x);
    
    while(i<x){
       
        if(x%i == 0){
            
            printf("\nhence the number %d is  not a Prime no.",x);
            exit(0);  
        }
        i++;
    }
      printf("\nhence the number %d is a prime no",x);
}