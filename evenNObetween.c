#include<stdio.h>
void main(){
    int x,e,o,y;
    printf("enter the starting no and the last no of the range:");
    scanf("%d %d",&x,&y);
    if(x%2!=0){
        e=x+1;
        o=x;
    }
    else{
        o=x+1;
        e=x;
    }
    printf("even no.\n");
    for(int i=e;i<=y;i=i+2){
        printf("%d\t",i);
    }
    printf("\nodd:\n");
    for(int i=o;i<=y;i=i+2){
        printf("%d\t",i);
    }
}