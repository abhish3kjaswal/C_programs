#include<stdio.h>
int fact(int );
void main(){
    int n;
    for(int i=1;i<=10;i++){
        printf("factorial of %d =%d\n",i,fact(i));
    }
}
int fact(int x)
{
    int temp=1,i=1;
        while(i<=x)
        {
            temp=temp*i;
            i++;
        }
    return temp;
}