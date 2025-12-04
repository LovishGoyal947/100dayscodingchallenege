#include <stdio.h>
#include <string.h>
void main(){
    char str[17];
    int l=1;
    scanf("%[^\n]s",str);
    for(int i=0;i<(strlen(str));i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
          
            continue;
        }
        printf("%c",str[i]);
    } 
   

}