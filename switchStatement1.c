#include<stdio.h>
#include<string.h>
void main(){
    char x;
    char ch;
    printf("enter a choice \nR for red\n B for blue: ");
    scanf("%c",&x);
    
      ch=toupper(x);
  //  ch=toupper(getchar()); to directly get input as character wihtout scanf and printf
    printf("output:\n");
    switch(ch){
        case 'R':printf("Red colour\n");
                 break;
        case 'B': printf("BLue colour\n");
                  break;
        default: printf("invalid choice");
                    break;
    }
}