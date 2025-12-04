#include <stdio.h>
#include <limits.h>
void main(){
    int n;
    int max = INT_MIN;
    int min= INT_MAX;
    printf("Enter the no");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    
    if(arr[i]>max)
        max = arr[i];
    
     if(arr[i]<min)
        min = arr[i];
}
printf("max=%d min=%d",max,min);
}