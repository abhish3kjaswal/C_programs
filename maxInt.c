#include<stdio.h>
#include<conio.h>
int main()
{
    int N,x[20],max=0,C;
    printf("enter total numbers:");
    scanf("%d",&N);
    C=N;
    printf("\nenter numbers:");
    for(int i=0;i<N;i++){
        scanf("%d",&x[i]);
        if(x[i]>max){
            max=x[i];  
        }
        C=C-1;  
         if(C==0){
    printf("\nMaximum number in %d numbers is =%d",N,max);
     }  
    }
      
     
    return 0;
    
}