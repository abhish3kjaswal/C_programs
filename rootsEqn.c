#include<stdio.h>
#include<math.h>
void main(){
    //program to find roots of equation of type ax*x+bx+c=0

    //disc=b*b-4*a*c
    //real   roots=-b+sqrt(b*b-4*a*c/(2*a)) and -b-sqrt(b*b-4*a*c/(2*a))
    //roots equal, root=-b/2*a
    //imaginary roots are ( %.2lf+%.2lfi , %.2f-%.2fi)
    float a,b,c;
    float root1,root2,disc,rootdisc;
    float realP,imaginaryP;
    printf("enter values of a,b and c:");
    scanf("%f %f %f",&a,&b,&c);
    disc=b*b-4*a*c;
    rootdisc=sqrt(disc);
    float imgA=2*a;
    if(disc>0){
        printf("roots are real\n");
        root1=(-b+rootdisc)/(2*a);
        root2=(-b-rootdisc)/(2*a);
        printf("real roots are = (%f,%f) \ndiscriminant is %f\n",root1,root2,disc);
        }
    else{
        if(disc==0){
            printf("roots are equal\n");
            root1=-b/(2*a);
            printf("root is %f\n",root1);
        }
        else{
            printf("roots are imaginary\n");
            realP=-b/(2*a);
            imaginaryP=rootdisc/(2*a);
            printf("imaginary roots are (%f + i(%lf/%f) ,%f - i(%lf/%f)  )",realP,disc,imgA,realP,disc,imgA);
        }
        /*another way to find imaginary values 
         else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }*/
    }
}    
    