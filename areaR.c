#include<stdio.h>
#define Pi 3.14
void main(){
    float r,ar;
    float arFun(float r);

    printf("enter radius:");
    scanf("%f",&r);
    ar=arFun(r);
    printf("\narea=%f",ar);
}
float arFun(float r){
    float ar;
    ar=Pi * r * r;

    return(ar);
}