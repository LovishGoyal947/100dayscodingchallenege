#include <stdio.h>
void main(){
    int n1,n2,LCM;
    printf("Enter the number1\t");
    scanf("%d",&n1);
    printf("Enter the number2\t");
    scanf("%d",&n2);
   
    

if(n1%2==0&&n2%2==0)
LCM=n1>n2?n1:n2;
else
LCM=(n1*n2);
    printf("%d\n",LCM);
}