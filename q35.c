#include <stdio.h>
void main(){
    int n,i;
    printf("Enter the number of which you want to find factors\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
            

        }
        
            
        
    }
}