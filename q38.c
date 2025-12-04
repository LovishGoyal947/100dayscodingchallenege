#include <stdio.h>
void main()
{
    int n, digit, sum = 0;
    printf("Enter the digit\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        digit = n % 10;
        n = n / 10;
        sum += digit;
       if(n==1)
       sum=sum+1;
    }
    printf("%d", sum);
}