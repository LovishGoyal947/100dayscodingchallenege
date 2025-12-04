#include <stdio.h>
#include <string.h>
void main(){
    char str[50];
    scanf("%s",str);
    int i=0;
    int size=0;
    while(str[i]!='\0'){
size++;
i++;
    }
    printf("%d",size);
}

