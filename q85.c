#include <stdio.h>
#include <string.h>
void main(){
    char str[10];
scanf("%s",str);
for(int j=strlen(str)-1,i=0;i<=j;i++,j--){
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
puts(str);

}