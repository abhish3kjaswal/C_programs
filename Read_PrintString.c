#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
void main(){
    char str[100],name[100];
    printf("enter the string :");
    //scanf("%[^\n]",str);
    gets(str);
    gets(name);
  //strcpy(name,str);
    printf("name:%d\n",strlen(str));
    printf("string:%s\n",name);
    printf("%s",strcat(name,str));
}
