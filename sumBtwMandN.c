#include<stdio.h>
int calculate(int ,int );
void main(){
    int m,n;
    //int calculate(int m,int n);
    printf("enter m and n:");
    scanf("%d %d",&m,&n);
    int res=calculate(m,n);
    printf("\n%d",res);
}
int calculate(int m, int n){
    int sum=0;
    for(int i=m;i<=n;i++){
        if((i%3==0)&&(i%5==0)){
            
                printf("%d,",i);
                sum=sum+i;
            
        }
    }
    return sum;
}