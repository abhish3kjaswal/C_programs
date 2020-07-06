#include<stdio.h>
void main(){
    int x[10][10],y[10][10],sum[10][10],sub[10][10];
    int m,n,a,b;
    printf("enter the no. of rows and columns of 1st matrix:");
    scanf("%d %d",&m,&n);
    printf("enter the no. of rows and columns of 2nd matrix:");
    scanf("%d %d",&a,&b);
    if((a==m)&&(b==n))
        {
            printf("print 1st matrix:");

        for(int i=0;i<m;i++)
            {
                printf("\n");
                for(int j=0;j<n;j++)
                    {
                        scanf("%d",&x[i][j]);
                    }
            }
        printf("print 2nd matrix:");
        for(int i=0;i<a;i++)
        {
            printf("\n");
        for(int j=0;j<b;j++)
        {
            scanf("%d",&y[i][j]);
        }
        }
       
 for(int i=0;i<a;i++){
        printf("\n");
        for(int j=0;j<b;j++){
            sum[i][j]=x[i][j]+y[i][j];
            sub[i][j]=x[i][j]-y[i][j];
        }
    }
    printf("results are:");
    for(int i=0;i<a;i++){
        printf("\n");
        for(int j=0;j<b;j++){
            printf("%d\t",sum[i][j]);
        }printf("sub\t\t");
        for(int j=0;j<b;j++){
            printf("%d\t",sub[i][j]);
        }
    }

        }
    else    
     {
        
        printf("matrices are not in same order so they can not be added or subtracted ");
      }
   
   
}