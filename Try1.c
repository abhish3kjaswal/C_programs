#include<stdio.h>
void main(){
    int x,y,a,b;
    x=50;
    y=50;
    a=10;
    b=10;
    //x=50 + ++a;
    y=50 + b++;
    x= a++ - ++a;
    printf("x:%d\n",x);
    printf("y:%d",y);
}