 #include <stdio.h>
 void main(){
     int a,b;
     printf("enter the value\n");
     scanf("%d",&a);
     printf("enter the value\n");
     scanf("%d",&b);
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     
   printf("%d %d",a,b);
     }

//  #include <stdio.h>
//  void main(){
//      int a,b;
//      printf("enter the value\n");
//      scanf("%d",&a);
//      printf("enter the value\n");
//      scanf("%d",&b);
//      a+=b;
//      b+=a;
//      a=b-a;
//      b=b-a-a;
//      printf("%d %d",a,b);
//  }