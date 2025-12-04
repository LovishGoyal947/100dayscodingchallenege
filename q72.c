#include <stdio.h>
void main(){
    int i,j,sum=0;
    printf("Enter the numbers\n");
    scanf("%d %d",&i,&j);
    int arr[i][j];
    for(int a=0;a<i;a++){
    for(int b=0;b<j;b++){
        scanf("%d",&arr[a][b]);
        sum+=arr[a][b];
    }
}
    
    printf("%d ",sum);
    
    

}