#include <stdio.h>
void main(){
    int i,j,b,a;
    printf("Enter the no\n");
    scanf("%d %d",&i,&j);
    int arr[i][j];
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
        scanf("%d",&arr[a][b]);
       
        }
         
    }
        int sum=0;
    for(int a=0;a<i&&a<j;a++){
      sum+=arr[a][a];
    }

        
        
    printf("\n");
    printf("%d",sum);
}


        

        
        
        
       