#include <stdio.h>
#include<ctype.h>
#include <string.h>
void main(){
    char str[15];
    
    scanf("%[^\n]s",str);
    int s=0,d=0,s1=0;
    int l=0;int u=0;
    for(int i=0;i<=(strlen(str)-1);i++){
        if(isdigit(str[i])){
d++;
continue;
        }
        else if(isspace(str[i])){
            s++;
            continue;
        }
        else if(islower(str[i])){
l++;
        }
        else if(isupper(str[i])){
u++;
        }

        else {
            s1++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d",s,d,s1);
}