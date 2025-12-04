// #include <stdio.h>
// #include <string.h>
// void main(){
//     char str[100];
//     int count=0;
//     int count1 =0;
//     int count2=0;
//     int i,j,k;
//     scanf("%s",str);
//     for(int i=0;i<strlen(str);i++){
//         count2 = strlen(str);
// if(str[i]==' '){
//     for(int j=i+1;j<strlen(str);j++){
//         count = strlen(str);
//         if(str[j]==' '){
//            for(int k=j+1;k<strlen(str);j++){
//         count1 = strlen(str);
//         }
//     }
    
// } 
// }
//     }
//     if(count>count1&&count>count2){
//         for(int j=i+1;j<strlen(str);j++){
//         printf("%s",str[j]);
//     }
// }
// else if(count1>count&&count1>count2){
//     for(int k=j+1;k<strlen(str);j++){
//         printf("%s",str);
//     }

// }
// else if(count2>count&&count2>count1){
//     printf("%s",str);
// }
// }
    

#include<stdio.h>
#include<string.h>
 void main(){
    char str[100];
    int maxlen=0;
    int cl=0;
    int st=0;
    int maxst=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        if(str[i]!=' ' && str[i]!='\0'&& str[i]!='\n'){
cl++;
        }
        else{
            if(cl>maxlen){
                maxlen=cl;
                maxst=st;
            }
            cl=0;
st=i+1;
        }
    }
    for(int i=maxst;i<maxst+maxlen;i++){
        printf("%c",str[i]);
    }
 }
