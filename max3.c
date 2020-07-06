#include<stdio.h>
void main(){
    int a,b,c,max=0;
    printf("3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((b>a) && (b>c))
    {
        max=b;
    }
    else if((c>a)&&(c>b)){
        max=c;
    }
    else{
        max=a;
    }
    printf("\nmax no=%d",max);
}