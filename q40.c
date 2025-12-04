#include <stdio.h>
#include <math.h>
void main()
{
    int n, digit, rev = 0, b = 1;
    printf("Enter the number");
    scanf("%d", &n);

    // for (int i=0;i<n;i++){
    //     int b= (int)log10(n)+1;
    //       digit =  (n/(int)pow(10,b-1))%10==1 ? 0:1;
    //     rev  = rev*10+digit;
    //     n=n%(int)pow(10,b-1);
    
    while (n > 0)
    {
        // b= (int)log10(n);
        digit = n % 10;
        digit = (digit == 1) ? 0 : 1;
        rev += digit ;
       
        n = n / 10;
    }
    printf("%d", rev);
}
