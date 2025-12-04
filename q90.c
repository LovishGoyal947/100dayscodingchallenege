#include <stdio.h>
#include <ctype.h>
void main(){
    char str[20];
    scanf("%s",str);
int i=0;
while(str[i]!='\0'){
    if((islower(str[i]))){
       str[i]=toupper(str[i]);
    }
    else if((isupper(str[i]))){
        str[i]=tolower(str[i]);
    }
    i++;
}
puts(str);
}