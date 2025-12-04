#include <stdio.h>
void main(){
    
    int a,b;
    int sum,mul,div,sub;
        printf("Enter the value\n");
    scanf("%d",&a);
    printf("Enter the value\n");
    scanf("%d",&b);
    sum=a+b;
    mul=a*b;
    div=a/b;
    sub=a-b;
printf("%.2f %.2f %.2f %.2f",sum,mul,div,sub);
}