#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    int st=0;
    int e=0;
    int i;
    fgets(str,sizeof(str),stdin);
if(str[0]!=' '){
    printf("%c.",str[0]);
}
    
    
    int ls = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            ls = i;
            break;
        }
    }
for(int i=1;i<strlen(str);i++){
        if(str[i]==' ' && str[i+1]!='\0'&& str[i+1]!='\n'&& str[i+1]!=' '&& i!=ls){
             
            printf("%c.",str[i+1]);
        }
        
         
    

    }
    
    for (int i = ls + 1; i < strlen(str) && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }
   
}


        
        

    

