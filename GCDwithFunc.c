#include<stdio.h>
int gcd(int ,int );
void main(){
    int a,b,c,d;
    printf("enter 4 no.:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int result= gcd(gcd(a,b),gcd(c,d));
    printf("the gcd of 4 nos. is:%d",result);
}
int gcd(int x,int y){
    int temp;
    if(x>y){
        temp=y;
        y=x;
        x=temp;
    }
    while((y%x)!=0){
        temp=y%x;
        y=x;
        x=temp;
    }
    return x;
}