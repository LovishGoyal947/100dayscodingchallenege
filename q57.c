#include<stdio.h>
void main(){
    int n;
    int sum=0;
    printf("Enter the no\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        
    sum+=arr[i];
    
    }
    printf("%d\n",sum);
}