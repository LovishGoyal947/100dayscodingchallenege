#include <stdio.h>
void main(){
    char ch ='*';
    int n=4;
    for(int i=1;i<=n;i++){
        
        
        for(int k=i;k<n;k++){
            printf(" ");
        }
    
        
        
        for(int j=1;j<=(2*i-1);j++){
            printf("%c",ch);
        }
        printf("\n");
        
    }
    for(int i=n-1;i>=1;i--){
        
        for(int k=i;k<n;k++){
            printf(" ");
        }
    
        
        for(int j=1;j<=2*i-1;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}