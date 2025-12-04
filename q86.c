#include <stdio.h>
#include <string.h>
void main(){
    char str[10];
scanf("%s",str);

int count=0;
for(int j=strlen(str)-1,i=0;i<=j;i++,j--){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    
    
    
}
for(int j=strlen(str)-1,i=0;i<=j;i++,j--){
if(str[i]==str[j]){
    printf("palindrome");
    break;


}
else{
    printf("Not palindrome");
    break;
}

}
}