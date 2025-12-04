#include <stdio.h>
void main(){
    char ch ='*';
    for(int i=5;i>=1;i--){
        if(i%2==0){
            continue;
        }
        for(int j=i;j<=5;j++){
            printf("%c\n",ch);
        }
        printf("\n");
        
    }
    for(int i=3;i>=1;i--){
        if(i%2==0){
            continue;
        }
        for(int j=i;j>=1;j--){
            printf("%c\n",ch);
        }
        printf("\n");
    }
}