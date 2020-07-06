#include<stdio.h>
#include<strings.h>
void main(){
    char str[100];
    int count=0;
    printf("enter the string :");
    //gets(str);
    scanf("%[^\n]",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(isupper(str[i])){
            count++;
            printf("%c\n",str[i]);
        }
    }
    printf("\nno of upper case letters in (%s) are:%d",str,count);
}