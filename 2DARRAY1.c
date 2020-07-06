#include<stdio.h>
#include<string.h>
void main(){
    int a[10][10];
    char b[10][10];
    printf("enter the array:");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
             scanf("%d",&a[i][j]);
               

        }
          printf("char:");
         for(int j=0;j<3;j++){
             
             scanf("%s",&b[i][j]);

        }
        
    }
    printf("the 2D array is:");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d\t",a[i][j]);
           
        }
        printf("\t\t");
        for(int j=0;j<3;j++){
           
            printf("%c\t",b[i][j]);
        }
        
    }
}