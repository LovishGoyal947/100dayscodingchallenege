#include <stdio.h>
void main(){
    int n,digit,mul=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
digit=n%10;
n=n/10;

if(digit%2!=0){
mul=digit*mul;
}
else {
mul=1;
printf("(no odd digits, assume 1)\n");
break;
}
}


printf("%d",mul);
}