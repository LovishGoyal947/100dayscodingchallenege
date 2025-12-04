#include <stdio.h>
#include<ctype.h>
#include <string.h>
void main(){
    char str[15];
    
    scanf("%[^\n]s",str);
   
    for(int i=0;i<=(strlen(str)-1);i++){
       
        if(isspace(str[i])){
            str[i]='-';

        }
    

    }   
    
        printf("%s",str);

}