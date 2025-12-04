#include <stdio.h>
void main(){
    int n;
    float f,sum=0;

    printf("Enter the no\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f=(i*2)/(float)(4*i-1);
sum+=f;
    }
    printf("%.1f",sum);
}