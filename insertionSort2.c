#include<stdio.h>
void main(){
    int a[100]={20,35,-15,7,55,1,-22};
    int New,j;
    for(int i=1;i<7;i++){
        New=a[i];
        for(int j=i;j>0 && New<a[j-1];j--)
        {
            a[j]=a[j-1];

        }
            a[j]=New;
    }

printf(" the array:");
    for(int i=0;i<7;i++){
        printf("\t%d",a[i]);
    }
    }