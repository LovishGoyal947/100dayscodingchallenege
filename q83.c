#include <stdio.h>
void main(){
    char str[30];
scanf("%s",str);
int i=0;
int count=0;
int count1=0;
while(str[i]!='\0'){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        count++;
    }
    else{
count1++;
    }
    i++;
}
printf("vowels=%d, consonants=%d", count,count1);
}