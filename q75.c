#include <stdio.h>
void main(){
    int i,b,a,j,s;
    printf("Enter the numbers\n");
    scanf("%d %d",&i,&j);
    
    int arr[i][j];
    int sum[i][j];
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
        scanf("%d",&arr[a][b]);
        }
}



    scanf("%d %d",&i,&j);
    int arr2[i][j];
    
for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
        scanf("%d",&arr2[a][b]);
        }
        
}

for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
                sum[a][b]=arr[a][b]+arr2[a][b];
        }
    }




for(int a=0;a<i;a++){
    for(int b=0;b<j;b++){
printf("%d ",sum[a][b]);
    }
printf("\n");


}


         
    
    
}