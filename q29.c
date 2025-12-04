#include <stdio.h>
void main(){
    int fac=1,num;
    printf("Enter the number you want to find factorial of\n");
    scanf("%d",&num);
    for(int i =1;i<=num;i++){
        
        fac = i*fac;
    }
    printf("the factorial is %d",fac);
}