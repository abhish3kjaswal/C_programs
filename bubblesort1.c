#include<stdio.h>
#include<string.h>
void swap(int [],int ,int );
void main(){
int n;
int a[100]={20,30,19,-29,90,87,-21,98};
int size=7;
for(int i=0;i<size;i++){
    for(int j=0;j<size;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a,j,j+1);
        }
    }
}
printf("array is:");
for(int i=0;i<size;i++){
    printf("\t%d",a[i]);
}
}
void swap(int a[],int i,int j){
    if(i==j){
        return;
    }
    else{
        int t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}