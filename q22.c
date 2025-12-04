#include <stdio.h>
void main(){
    float cost,selling,profit,loss;
    printf("Enter the cost price");
    scanf("%f",&cost);
    printf("Enter the selling price");
    scanf("%f",&selling);
    profit=(selling-cost);
   loss =(cost-selling);
   printf("the profit is %f the loss is %f",profit,loss); 

}