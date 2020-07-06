#include<stdio.h>
int main(){
    int x,s=0;
    while(scanf("%d",&x)){
        s=s+x;
        if(s>100){
            break;
        }
    }
    printf("%d",s);
    return 0;
}