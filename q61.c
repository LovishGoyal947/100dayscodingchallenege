#include <stdio.h>
void main(){
    int n,n1;
    printf("Enter the no\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n1);
    int k=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==n1){
            k=i;
            break;
        }
        
      
    
}
if(k!=-1){
    printf("found at index %d",k);
}
else 
printf("-1");

}