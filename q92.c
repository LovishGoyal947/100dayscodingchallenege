#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main(){
    char str[30];
    int count=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(str);j++){
if(str[i]==str[j]&&islower(str[j])){
            count++;
        }
        }
       if(count>1){
        printf("%c",str[i]);
        break;

 }
    }
    
 

}