// #include <stdio.h>
// #include <string.h>
// void main(){
//     char str[100];
//     fgets(str,sizeof(str),stdin);
//     for(int i=0;i<strlen(str);i++){
//         if(str[i]==' '){
//             printf("%c.%c",str[0],str[i+1]);
//             break;
//         }


//     }
// }


#include <stdio.h>
#include <string.h>
void main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
if(str[0]!=' '){
    printf("%c.",str[0]);
}
    
    for(int i=1;str[i]!='\0';i++){
        if(str[i]==' ' && str[i+1]!='\0' && str[i+1]!=' '){
            printf("%c.",str[i+1]);
        }

        
        

    }
}