#include <stdio.h>
void main(){
    int n,i;
   int count;
    printf("Enter the no\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
     
      scanf("%d",&k);
      for(int i=0;i<n;i++){
         if(arr[i]==k){
            count=i;
            
         }
         
      }
        if(count!=-1){
            printf("found at index %d\n",count);
        
        }
        else{
printf("-1");

        }
    
}
