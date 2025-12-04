#include <stdio.h>
void main(){
    int n,binary,binary1,digit,rev=0;
    printf("Enter the number you want to change\n");
    scanf("%d",&n);
    do{
    if(n/2!=0 || n%2!=0){
    
        binary = n/2;
       
        binary1= n%2;
        printf("%d",binary1);
         n= binary;

         
    }
    else 
    printf("Enter the correct number");
    
    
} while (n>=1);
digit = binary1 % 10;
    rev = rev *10+digit;
    binary1= binary1/10;
    printf("%d",rev);
    
}