#include <stdio.h>
void main(){
    int n,i;
   int count=0;
    printf("Enter the no\n");
    scanf("%d",&n);
    int arr[50];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
    if(k<arr[i]){
        count=i;
        break;
    }
    }
    for(int i=n;i>count;i--){
       arr[i]=arr[i-1];
       
    }
    arr[count]=k;
    
     for(int i=0;i<=n;i++){
         
        
        printf("%d ",arr[i]);
    }
}