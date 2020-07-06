#include<stdio.h>
void main(){
    char n[]="Abhisnkbhek";
    char *ptr;
    ptr=n;
    while(ptr!=0){
        printf("%c",*ptr);
        ptr++;
    }
    }