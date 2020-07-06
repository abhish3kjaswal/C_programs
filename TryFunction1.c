#include<stdio.h>
int sum(int ,int ,int );
void main(){
    int a,b,c;
    a=10;
    b=20;
    c=30;
    int result = sum(a,b,c);
    printf("the result is %d",result);
}
int sum(int x,int y,int z){
    int s=x+y+z;
    return s;
}