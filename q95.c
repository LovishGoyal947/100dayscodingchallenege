#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    char str1[50];
    char temp[50];
    scanf("%s",str);
    scanf("%s",str1);
    if(strlen(str)!=strlen(str1)){
        printf("Not Rotation");
return 0;
    }
    strcpy(temp,str);
    strcat(temp,str);
    if(strstr(temp,str1)!=NULL)
        printf("Rotation");
    
    else 
    printf("Not rotation");

return 0;
    

}