#include <stdio.h>
void main(){
    int i,b,j,s,sum;
    printf("Enter the numbers\n");
    scanf("%d %d",&i,&j);
    int arr[i][j];
    int arr1[i];
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
        scanf("%d",&arr[a][b]);
        }
}
for(int a=0;a<i;a++){
     sum =0;
        for(int b=0;b<j;b++){
        sum+=arr[a][b];
        }
arr1[a]=sum;
}

for(int a=0;a<i;a++){

printf("%d ",arr1[a]);

}

         
    
    
}