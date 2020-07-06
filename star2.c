/*PROGRAM TO PRINT PATTERN
 
    *
   * *
  * * *
 * * * *
* * * * *        
*/
#include<stdio.h>
void main(){
    int Rows=5;
    int row,col;
    for(row=Rows;row>=0;row--){
        
        for(col=0;col<row;col++){
            printf(" ");
        }
        
        for(col=0;col<Rows-row;col++){
            printf("*");
            printf(" ");
        }
    printf("\n");
    }
    /*
        * * * * *
         * * * *
          * * *
           * *
            *
    */
    printf("\n");
    for(row=0;row<Rows;row++){
        for(col=0;col<row;col++){
            printf(" ");
        }
        for(col=0;col<Rows-row;col++){
           
            printf("*");
            printf(" ");
           
        }
        printf("\n");
    }
/*
    *
    * *
    * * *
    * * * *
*/
    for(row=0;row<Rows;row++){
        
        for(col=0;col<row;col++)
        { 
            //printf(" ");
            printf("*");
            printf(" ");
        }
        

        printf("\n");
    }
/*
    * * * * *
    * * * *
    * * *
    * *
    *
*/
    for(row=Rows;row>0;row--){
        
        for(col=0;col<row;col++)
        { 
           // printf(" ");
            printf("*");
            printf(" ");
        }
        
        printf("\n");
    }
    
}