#include <stdio.h>
void main(){
    int digit,sum=0,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    digit= n%10;
      sum = sum + digit*digit*digit;
      n=n/10;
      if(sum == n){
        printf("The no. is Armstrong");

      }
      else 
      printf("The no is not Armstrong");
}