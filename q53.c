#include <stdio.h>
void main(){
    char ch ='*';
    for(int i=9;i>=1;i--){
        if(i%2==0){
            continue;
        }
        for(int j=i;j<=9;j++){
            printf("%c",ch);
        }
        printf("\n");
        
    }
    for(int i=7;i>=1;i--){
        if(i%2==0){
            continue;
        }
        for(int j=i;j>=1;j--){
            printf("%c",ch);
        }
        printf("\n");
    }
}