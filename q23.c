#include <stdio.h>
void main(){
int fine,days,n;
printf("Enter the no of days\n");
scanf("%d",&days);
if(days>0 && days<6){
printf("fine = $%d",days*2);
}
else if(days>5 && days<11){
  printf("fine = $%d",(10+((days-5)*4)));
}
else if(days>10 && days <31){
  printf("fine = $%d",(30+((days-10)*6)));
}
else 
printf("Membership cancelled");
}