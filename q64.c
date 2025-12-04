#include <stdio.h>
#include <limits.h>
void main(){
    int n1;
    int min =INT_MAX;
    int max=INT_MIN;
   int count1=0;
   int count2=0;
   int count3=0;
    printf("Enter the no1\n");
    scanf("%d",&n1);

    int arr1[n1];
    for (int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    
   
    for (int i=0;i<n1;i++){
        if(arr1[i]<min){
        min=arr1[i];
        }
        
    if(arr1[i]==arr1[i+1]&& arr1[i]==min){

       count1++;
       if(count1>count2&&count1>count3){
        printf("%d",min);
       }
       
    }  
       
      else if(arr1[i]==arr1[i+1]&& arr1[i-1]!=min)

       count1++;
       if(count1>count2&&count1>count3){
        printf("%d",min);
       }
       
    }  
       
     
    }
    
    
    
    
