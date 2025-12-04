#include <stdio.h>
void main(){
    int digit,rev=0,n;
    printf("Enter the number you wanr to reverse\n");
    scanf("%d",&n);
    digit=n%10;
    rev = rev * 10 + digit;
    n=n/10;

    if(n==rev){
        printf("it is a palindrome number");
    }
    else{
        printf("it is not a palindrome");
    }
}