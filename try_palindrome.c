#include<stdio.h>
void main(){
    int x,rem,rev=0,new;
    printf("enter number:");
    scanf("%d",&x);
    new=x;
    while(new!=0){
        rem=new%10;
        rev=rev*10+rem;
        new=new/10;
    }
    
    if(x == rev){
    printf(" palindrome");
    }
    
    else{
        printf("not palindrome");
    }
}