#include <stdio.h>
#include <math.h>
void main(){
int p,r,t,n;
float si,ci;
printf("Enter the no.");
scanf("%d",&p);
printf("Enter the no.");
scanf("%d",&r);
printf("Enter the no.");
scanf("%d",&t);
printf("Enter the no.");
scanf("%d",&n);


si=(p*r*t)/2;
ci = p * pow((1 + ((float)r / n)), n * t);

printf("%f %f",si,ci);

}