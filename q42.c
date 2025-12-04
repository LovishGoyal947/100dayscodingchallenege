#include <stdio.h>
void main(){
    int n,sum=0;
    printf("Enter the  no\n");
    scanf("%d",&n);
    for (int i = 1;i<n;i++){
     if(n%i==0){
        printf("%d\n",i);
        sum+=i;
        
     }
    
    }
     if(sum==n){
            printf("perfect number\n");

        }
    else {
        printf("Not a perfect Number\n");
    }
        printf("sum of factors are %d",sum);
}