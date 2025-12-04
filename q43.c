#include <stdio.h>
void main()
{
    int n, digit, fac, sum = 0, k;
    printf("Enter the no\n");
    scanf("%d", &n);
    k = n;
    while (n > 0)
    {

        digit = n % 10;
fac=1;
        for (int j = 1; j <= digit; j++)
        {

            fac = fac * j;
        }

        sum += fac;
n=n/10;
        
    }
   

    if (sum == k)
        printf("strong number");

    else
        printf("not a strong number");
}