#include <stdio.h>
void main(){
    int i,j,b,a,true;
    printf("Enter the numbers\n");
    scanf("%d %d",&i,&j);
    int arr[i][j];
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
        scanf("%d",&arr[a][b]);
       
        }
         
    }
    int k=1;
    for(int a=0;a<i;a++){
        for(int b =a+1;b<j;b++){
        if(arr[a][a]==arr[b][b]){
            k=0;
            break;
        }
    }
}


        

        
        
        
        if(k==1){
            printf("true");

        }
        else {
        printf("false");
        }


}