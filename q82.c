#include <stdio.h>
void main(){
    char str[10];
    scanf("%s",str);
    int i=0;
    while(str[i]!='\0'){
        printf("%c\n",str[i]);
        i++;
    }
}