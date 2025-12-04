#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ana(char s[]){
    for(int i=0;i<strlen(s)-1;i++){
for(int j=i+1;j<strlen(s);j++){
if(s[i]>s[j]){
    char s1=s[i];
    s[i]=s[j];
    s[j]=s1;
}
}
    }
}
void main(){
 char str[50];
 char str1[50];
 int count =0;
 scanf("%s",str);
 scanf("%s",str1);
 if(strlen(str)==strlen(str1)){
    
for(int i=0;i<strlen(str);i++){
    if(isupper(str[i])){
        str[i]=tolower(str[i]);

    }
    for(int j=0;j<strlen(str1);j++){
    if(isupper(str1[j])){
        str1[j]=tolower(str1[j]);
        
    }
}
    

}

}
else{
    printf("Not Anagram\n");
    
    
}

ana(str);
ana(str1);

if(strcmp(str,str1)==0){
    printf("Anagram");

}
else {
    printf("Not Anagram");
}
}