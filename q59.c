#include <stdio.h>
void main(){
    int n;
    int count=0;
    int count1=0;
    printf("Enter the no\n");
    scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
 scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
 if(arr[i]%2==0){
    
    count++;
 }
 else if(arr[i]%2!=0){
 count1++;
 }
  
}
printf("even=%d ",count);
printf("odd=%d ",count1);


}