#include <stdio.h>
void main(){
    int n,i,k,j;
   int count=0;
    printf("Enter the no\n");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&k);
    for(int i=0,j=n-1;i<j;i++,j--){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
    }
for(int i=0,j=k-1;i<j;i++,j--){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
for(int i=k,j=n-1;i<j;i++,j--){
int temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}