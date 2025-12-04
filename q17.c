#include <stdio.h>
#include <math.h>
void main(){
    int a,b,c,D;
    double result;
    printf("Enter the no.\n");
    scanf("%d",&a);
    printf("Enter the no.\n");
    scanf("%d",&b);
    printf("Enter the no.\n");
    scanf("%d",&c);
    D=(pow(b,2)-(4*a*c));
     if(D==0){
        printf("roots are real and equal\n");


        
     }
     else if(D>0){
        printf("roots are real and distinct\n");

     }
     else if(D<0){
        printf("root are imaginary\n");
     }

    result=((-b)+sqrt(pow(b,2)-4*a*c))/2*a;
    printf("%lf\n",result);
    result=((-b)-sqrt(pow(b,2)-4*a*c))/2*a;
    printf("%lf",result);
    

}