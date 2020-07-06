#include<stdio.h>
void main(){
    int A[10][10]={{1, 2, 3, 0, 0}, 
                    {0, 0, 0, 0, 0}, 
                    {2, 1, 4, 0, 0}, 
                    {0, 0, 0, 0, 0}, 
                    {1, 1, 0, 1, 0}}; ;
    int sum=-99999;
    int i;
    printf("enter a 6X6 2-D array:");
    /* this the hourglass whose sume we have to find 
    a b c (i,j)(i,j+1)(i,j+2) 
      d     (i+1,j+1)
    e f g   (i+2,j)(i+2,j+1)(i+2,j+2) 
    */
   
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            
            int currentsum=A[i][j]+A[i][j+1]+A[i][j+2]+A[i+1][j+1]+
            A[i+2][j]+A[i+2][j+1]+A[i+2][j+2];
            if(currentsum>sum)
            {
                                    sum=currentsum;
            }

        }
    }
    printf("%d",sum);
}