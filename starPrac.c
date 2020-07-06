#include<stdio.h>
void main(){
    int row,col;
    for(row=5;row>=0;row--){
        for(col=0;col<=row;col++){
            printf(" ");
        }
        for(col=0;col<5-row;col++){
            printf(" *");
        }
        printf("\n");
    }
}