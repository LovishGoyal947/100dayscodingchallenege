#include <stdio.h>
#include <string.h>
void main(){
 char str[100];
 int e=0;
 int st=0;
 
fgets(str,sizeof(str),stdin);

for(int i=0;i<strlen(str);i++){
if(str[i]==' ' || str[i]=='\0' || str[i]=='\n'){
   e=i-1;

for(int j=e;j>=st;j--){
    printf("%c", str[j]);
}
if(str[i]==' ')
    printf(" ");

st=i+1;
}

}
}


