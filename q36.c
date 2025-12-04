#include <stdio.h>
void main(){
    int n1,n2,G;
    printf("Enter the number1\t");
    scanf("%d",&n1);
    printf("Enter the number2\t");
    scanf("%d",&n2);
    for(int i=1;i<n1,n2;i++){
   
    G=n2;
    n2=n1%n2;         
    n1=G;
    
    }
    printf("%d\n",n1);
}
