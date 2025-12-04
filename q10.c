#include <stdio.h>
void main(){
    int s,m,h;
    printf("enter the secands\n");
    scanf("%d",&s);
    m=s/60;
    h=s/3600;
    printf("%d %d %d",s,m,h);
}