// #include <stdio.h>
// #include <string.h>
// void main(){
//     char str[15];
//     char s1;
//     int count=0;
    
//     scanf("%[^\n]s",str);
//    scanf(" %c",&s1);
//     for(int i=0;i<=(strlen(str)-1);i++){
       
//        if(str[i]==s1){
//         count++;
//        }

//     }   
    
//         printf("%d",count);

// }

#include <stdio.h>
#include <string.h>
void main(){
    char str[15];
    char s1[2];
    int count=0;
    
    scanf("%[^\n]s",str);
   scanf(" %c",&s1[0]);
   s1[1]='\0';
    for(int i=0;i<=(strlen(str)-1);i++){
       
       if(strchr(s1,str[i])){
        count++;
       }

    }   
    
        printf("%d",count);

}