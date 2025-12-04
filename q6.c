#include <stdio.h>
void main(){
    int a=4,b=5,temp;
    // printf("enter the value");
    // scanf("%d",&a);
    // printf("enter the value");
    // scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;
    
    printf("%d,%d",a,b,temp);

}