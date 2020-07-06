#include<stdio.h>
void main(){
    int A,B,temp;
    printf("enter two numbers :");
    scanf("%d %d",&A,&B);
    if(A>B){
        temp=A;
        A=B;
        B=temp;
    }
    while((B%A)!=0){
        temp=B%A;
        B=A;
        A=temp;
    }
    printf("the GCD of two numbers is:%d",A);
}